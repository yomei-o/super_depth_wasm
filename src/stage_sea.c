/* Stage type 1, SEA - FUN_1000_06f6 .. FUN_1000_1fa9.
 *
 * Ghidra splits it into FUN_1000_06f6, _1122, _1288, _13e0 and _1faa, but every
 * edge between those is a `jmp`, not a `call`: it is one routine.  Entering at
 * the top of _13e0, one frame runs
 *
 *   the stage's exit test -> the charges -> the enemies' bullets -> their
 *   missiles -> the item -> apply all the motion and flip the page -> draw ->
 *   wait for VSYNC and animate the palette -> read the stick -> the enemy loop
 *
 * and the back edge from the end of the enemy loop returns to the exit test.
 * game.c's game_tick runs the hooks below in that order.
 *
 * Two things about reading that decompilation, both of which cost time:
 *
 *   - the BP offsets in _1122/_1288/_13e0 are 2 higher than the same variables
 *     in _06f6, because Ghidra treats a jump target as a function and assumes a
 *     pushed return address that is not there.  _06f6's names are the ones used
 *     here: the quota is its local_28, the kills local_2c, the live count
 *     local_2a.
 *   - FUN_1000_c8e0 returns the NUMBER of patterns it loaded, not their base.
 *     depth.c32 is loaded first and has 64, so DS:0x1d42 is 64 - which is the
 *     base of depth.c16.  Every `0x1d42 + n` in the decompilation is therefore
 *     a 16x16 pattern, and a bare number is a 32x32 one.
 */
#include "gameint.h"
#include "pal.h"
#include "tables.h"

/* Screen bands.
 *
 * The sky is a filled box redrawn every frame, one pixel taller on half of the
 * palette cycle, which is what makes the waterline move:
 *   FUN_1000_b854(4, 0, 0x4b, 0x29 - (3 < DS:0x193c), 5)
 *
 * The sea floor is two rows of 16x16 patterns laid across all 40 columns at
 * stage start (FUN_1000_c25e, which is an opaque blit and not the flat fill it
 * first looked like - it drives the GRCG through the same five passes the
 * sprite path does).
 */
#define SKY_H     0x28
#define SKY_COL   5
#define FLOOR_Y   0x140

/* A charge is free at 0x130, a bullet below 0x21, a missile below -0xf. */
#define SHOT_FREE    0x130
#define BULLET_FREE  0x20
#define MISSILE_FREE (-0x10)

/* How far a missile's sprite leans, indexed by its horizontal speed -8..8.
 * DS:0x0510 read from 0x0500; the drawn pattern is base_c16 + 0xc + lean. */
static const signed char SEA_MISSILE_LEAN[17] = {
    -3, -3, -2, -2, -2, -1, -1, 0, 0, 0, 1, 1, 2, 2, 2, 3, 3
};

static void sea_start(Game *g)
{
    int i;

    g->px = 0x120;
    g->py = 0x10;
    for (i = 0; i < MAX_SHOT; i++) {
        g->shot[i].y = SHOT_FREE;
        g->shot[i].x = g->shot[i].target = g->shot[i].vx = 0;
    }
    for (i = 0; i < MAX_BULLET; i++) {
        g->bullet[i].y = BULLET_FREE;
        g->bullet[i].x = g->bullet[i].v = 0;
    }
    for (i = 0; i < MAX_MISSILE; i++) {
        g->missile[i].y = MISSILE_FREE;
        g->missile[i].x = g->missile[i].vx = g->missile[i].vy = 0;
    }
    g->ent_off = 0;                   /* SEA hides an entity at y == 0 */
    for (i = 1; i < MAX_ENT; i++)
        g->ent[i].y = g->ent_off;
    /* local_28 = ((ship & power) * 2 + stage / 4 + 3) * 5 - 15 on stage 1,
     * 20 from stage 5, 25 from stage 9. */
    sd_quota(g, 5, 2);
}

/* ------------------------------------------------------------------ player */

static void sea_fire(Game *g, int which)
{
    int i, slot = -1;
    int dx = which ? 0x40 : -0x10;
    int spread = which ? 7 : -7;

    if (g->shots_live >= g->shot_max || !g->trig)
        return;
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y > SHOT_FREE - 1) {
            slot = i;
            break;
        }
    if (slot < 0)
        return;
    g->shot[slot].y = g->py;
    g->shot[slot].x = g->shot[slot].target = g->px + dx;
    g->shot[slot].vx = g->power * spread;
    g->shots_live++;
    g->trig = 0;
    sd_sfx(g, SFX_CHARGE);
}

/* ----------------------------------------------------------------- enemies */

static int free_bullet(Game *g)
{
    int i, slot = -1;

    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y < BULLET_FREE + 1)
            slot = i;
    return slot;
}

static int free_missile(Game *g)
{
    int i;

    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y < MISSILE_FREE + 1)
            return i;
    return -1;
}

/* Spawn one enemy off the side of the field.  `ymod`/`ybase` give the depth
 * band and `span` the horizontal launch offset, all straight from the
 * original's per-kind spawn blocks. */
static void spawn(Game *g, Ent *e, int ymod, int ybase, int span,
                  int vmod, int vbase)
{
    int dir;

    e->y = (sd_rand(g) % ymod + ybase) * 0x20;
    e->x = (sd_rand(g) % 2) * span + FIELD_LO;
    dir = sd_toward_middle(e->x);
    e->vx = (sd_rand(g) % vmod + vbase) * dir;
    e->vy = 0;
    e->aux = 0;
}

static void sea_enemy(Game *g, int idx)
{
    Ent *e = &g->ent[idx];

    if (e->y != 0)
        g->alive++;

    /* The dying wind down here and free their slot.  The live count above them
     * has already seen them, which is why a stage cannot end mid-explosion. */
    if (e->state < 10) {
        if (--e->state == 0) {
            e->y = 0;
            e->vy = 0;
            e->state = 10;
        }
        return;
    }

    switch (e->kind) {
    case 1:
        if (sd_rand(g) % 0xf == 0 && e->y == 0 && g->kills < g->quota)
            spawn(g, e, 7, 2, 0x4c0, 4, 2);
        break;
    case 2:
        if (sd_rand(g) % 0x28 == 0 && e->y == 0 && g->kills < g->quota)
            spawn(g, e, 2, 7, 0x4c0, 3, 7);
        break;
    case 3: {
        int period = ((3 - g->ship) * 2 - g->power) * 10;

        if (period > 0 && sd_rand(g) % period == 0 && e->y == 0 &&
            g->kills < g->quota)
            spawn(g, e, 2, 2, 0x4e0, 4, 2);
        break;
    }
    case 4:
        if (sd_rand(g) % 0x1e == 0 && e->y == 0 && g->kills < g->quota) {
            e->y = 0x120;
            e->x = (sd_rand(g) % 2) * 0x4c0 + FIELD_LO;
            e->vx = (sd_rand(g) % 4 + 5) * sd_toward_middle(e->x);
            e->vy = 0;
            e->aux = 0;
        }
        /* Kind 4 stops to fire: aux counts up while still, down while moving. */
        if (e->vx == 0 && e->aux < 4)
            e->aux++;
        if (e->vx != 0 && e->aux > 0)
            e->aux--;
        if (e->x + e->vx > 0x1f && e->x + e->vx < 0x221) {
            int period = ((3 - g->ship) * 2 - g->power) * 10;

            if (period > 0 && sd_rand(g) % period == 0)
                e->vx = 0;
        }
        break;
    case 9:
        if (sd_rand(g) % 0xf == 0 && e->y == 0 && g->kills < g->quota)
            spawn(g, e, 7, 2, 0x4c0, 4, 2);
        break;
    default:
        return;
    }

    if (e->y == 0)
        return;

    /* Quota met: the survivors turn and run.  The original recomputes this
     * every frame as sign(vx) << 3, so it is a flat +-8. */
    if (g->quota <= g->kills)
        e->vx = sd_sgn(e->vx) * 8;

    if (e->x + e->vx < FIELD_LO + 1 || e->x + e->vx > FIELD_HI - 1) {
        e->y = 0;
        return;
    }

    /* Firing.  Each kind has its own period, and only while on screen. */
    if (e->x > 0 && e->x < 0x240) {
        int period;

        switch (e->kind) {
        case 1:
        case 9:
            period = g->ship * -0x28 + 100;
            if (period > 0 && sd_rand(g) % period == 0 &&
                g->bullets_live < 0x10) {
                int s = free_bullet(g);

                if (s >= 0) {
                    g->bullet[s].y = e->y + 0xc;
                    g->bullet[s].x = e->x + 0x18;
                    g->bullets_live++;
                    sd_sfx(g, SFX_ENEMY);
                }
            }
            break;
        case 2:
            period = ((g->ship * -2 + 5) - g->power) * 10;
            if (period > 0 && sd_rand(g) % period == 0 &&
                g->missiles_live < 8) {
                int s = free_missile(g);

                if (s >= 0) {
                    g->missile[s].y = e->y + 0xc;
                    g->missile[s].x = e->x + 0x18;
                    g->missile[s].vx = 0;
                    g->missiles_live++;
                    sd_sfx(g, SFX_ENEMY);
                }
            }
            break;
        case 3:
            period = ((4 - g->power) - g->ship) * 5;
            if (period > 0 && sd_rand(g) % period == 0 &&
                g->bullets_live < 0x10) {
                int s = free_bullet(g);

                if (s >= 0) {
                    g->bullet[s].y = e->y + 0x10;
                    g->bullet[s].x = e->x + 0x10;
                    g->bullets_live++;
                    sd_sfx(g, SFX_ENEMY);
                }
            }
            break;
        case 4:
            /* A four-shot salvo, once aux has wound up to 4. */
            if (e->aux == 4 && g->missiles_live < 4) {
                int k;

                for (k = 0; k < 4; k++) {
                    int s = free_missile(g);

                    if (s < 0)
                        break;
                    g->missile[s].y = e->y + 8;
                    g->missile[s].x = e->x + k * 0x10;
                    g->missile[s].vx = 0;
                    g->missiles_live++;
                }
                sd_sfx(g, SFX_ENEMY);
                e->vx = (sd_rand(g) % 4 + 5) * sd_toward_middle(e->x);
            }
            break;
        default:
            break;
        }
    }
}

/* ------------------------------------------------------- shots and weapons */

/* The charge sinks at 2 pixels a frame, 6 with Shot Power Up.  With Shot
 * Special the launch gives it a sideways speed that then accelerates back
 * toward the column it was dropped in, so a spread charge curves in again. */
static void sea_shots(Game *g)
{
    int i, j;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++) {
        Shot *s = &g->shot[i];

        if (s->y > SHOT_FREE - 1)
            continue;
        s->y += g->ship * 4 + 2;
        if (g->power == 1) {
            s->x += s->vx;
            if (s->x != s->target)
                s->vx += (s->target < s->x) ? -1 : 1;
        }
        for (j = 1; j < MAX_ENT; j++) {
            Ent *e = &g->ent[j];
            int x0, x1, y0, y1;

            if (e->state < 10 || e->y == 0)
                continue;
            switch (e->kind) {
            case 1: case 2: case 4:
                x0 = e->x - 8; x1 = e->x + 0x38;
                y0 = e->y - 0xc; y1 = e->y + 0x18;
                break;
            case 3: case 9:
                x0 = e->x - 8; x1 = e->x + 0x18;
                y0 = e->y - 6; y1 = e->y + 0x18;
                break;
            default:
                continue;
            }
            if (x0 <= s->x && s->x <= x1 && y0 <= s->y && s->y <= y1) {
                int kind = e->kind, ex = e->x, ey = e->y;

                sd_kill_enemy(g, j);
                s->y = SHOT_FREE;
                /* Only a kind 9 leaves anything, only while nothing else is on
                 * the field, and only if it died on screen. */
                if (kind == 9 && g->item_kind == 0 && ex > 0x1f && ex < 0x241) {
                    sd_item_roll(g);
                    g->item_x = ex + 8;
                    g->item_y = ey + 8;
                    g->item_vx = 0;
                    g->item_vy = -4;         /* it floats up to the surface */
                    g->item_timer = -1;
                }
                break;
            }
        }
        if (s->y > SHOT_FREE - 1)
            s->y = SHOT_FREE;
    }
    g->shots_live = 0;
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y <= SHOT_FREE - 1)
            g->shots_live++;
}

static void sea_weapons(Game *g)
{
    int i;

    for (i = 0; i < MAX_BULLET; i++) {
        Bullet *b = &g->bullet[i];

        if (b->y <= BULLET_FREE)
            continue;
        b->y -= 2;
        /* Clear of the ship, or high up: give a pixel back, so a bullet under
         * the hull closes faster than one off to the side. */
        if (b->x <= g->px - 6 ||
            (g->px + 0x36 <= b->x && (b->y < 0x31 || sd_rand(g) % 4 == 0)))
            b->y += 1;
        b->x -= g->page * 2 - 1;        /* a one-pixel wobble, tied to the flip */
        if (g->pstate == 10 && g->px - 6 <= b->x && b->x <= g->px + 0x36 &&
            g->py - 0xc <= b->y && b->y <= g->py + 0x18) {
            sd_hit_player(g);
            b->y = 0;
        }
    }
    g->bullets_live = 0;
    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y > BULLET_FREE)
            g->bullets_live++;

    /* The missiles steer.  While one is below the guidance ceiling - which
     * rises with the power-ups, so an upgraded ship is chased for less of the
     * climb - it randomly nudges its horizontal speed toward the player each
     * frame; above it the drift decays back to straight.  The speed is capped
     * at +-8 and picks the sprite's lean out of DS:0x0510. */
    for (i = 0; i < MAX_MISSILE; i++) {
        Missile *m = &g->missile[i];
        int ceiling;

        if (m->y < MISSILE_FREE + 1)
            continue;
        m->y -= 8;
        ceiling = (g->ship + g->power) * -0x1e + 0xa0;
        if (m->y > ceiling) {
            int d = g->px - m->x;
            int dir = (d == -0x18) ? 0 : ((d + 0x18 < 0) ? -1 : 1);

            m->vx += (sd_rand(g) * dir) % 2;
        } else {
            m->vx -= g->page * sd_sgn(m->vx);
        }
        if (m->vx > 8 || m->vx < -8)
            m->vx = sd_sgn(m->vx) * 8;
        m->x += m->vx;
        if (g->pstate == 10 && g->px - 4 <= m->x && m->x <= g->px + 0x34 &&
            g->py - 0xc <= m->y && m->y <= g->py + 0x18) {
            sd_hit_player(g);
            m->y = MISSILE_FREE;
            continue;
        }
        if (m->x < 0x10 || m->x > 0x26f)
            m->y = MISSILE_FREE;
    }
    g->missiles_live = 0;
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y >= MISSILE_FREE + 1)
            g->missiles_live++;
}

static void sea_item(Game *g)
{
    if (g->item_kind == 0)
        return;
    if (g->item_timer < 0)
        g->item_y += g->item_vy;      /* still rising */
    else
        g->item_timer--;              /* sitting on the surface */

    if (g->px - 4 <= g->item_x && g->item_x <= g->px + 0x34 &&
        g->py <= g->item_y && g->item_y <= g->py + 0x1a) {
        sd_item_taken(g);
        return;
    }
    if (g->item_timer < 0 && g->item_y < 0x21) {
        g->item_y = 0x20;             /* it stops at the surface... */
        g->item_timer = 0x32;         /* ...and waits fifty frames */
    }
    if (g->item_timer == 0)
        g->item_kind = 0;
}

static void sea_clear_shots(Game *g)
{
    int i;

    for (i = 0; i < MAX_SHOT; i++)
        g->shot[i].y = SHOT_FREE;
    for (i = 0; i < MAX_BULLET; i++)
        g->bullet[i].y = BULLET_FREE;
    for (i = 0; i < MAX_MISSILE; i++)
        g->missile[i].y = MISSILE_FREE;
    g->shots_live = g->bullets_live = g->missiles_live = 0;
}

/* -------------------------------------------------------------------- draw */

static void draw_background(Game *g)
{
    int col, tile = (g->stage > 1) ? 2 : 0;

    /* The frame head clears only the play area; the floor and the HUD band
     * below it are redrawn rather than cleared. */
    sd_fill(g, 4, 0, 0x4b, 0x13f, 0);
    sd_fill(g, 4, 0, 0x4b, SKY_H + (g->pal_c < 4 ? 1 : 0) - 1, SKY_COL);
    for (col = 0; col < 40; col++) {
        scr_pat_opaque(g->scr, col * 16, FLOOR_Y, g->base_c16 + 0x40 + tile);
        scr_pat_opaque(g->scr, col * 16, FLOOR_Y + 0x10,
                       g->base_c16 + 0x41 + tile);
    }
}

static void draw_player(Game *g)
{
    int y = g->py + (g->pal_c < 4 ? 1 : 0);

    if (g->pstate < 10) {
        sd_explosion(g, g->px, g->py, g->pstate, 0);
        return;
    }
    sd_pat_pair(g, g->px, y, g->base_c32 + 0, g->base_c32 + 1);
}

static void draw_enemies(Game *g)
{
    int i;

    /* Descending, so the low slots end up on top - the original's order. */
    for (i = g->nent; i >= 1; i--) {
        Ent *e = &g->ent[i];
        int narrow, lo;

        if (e->y <= 0xf)
            continue;
        /* ((-(narrow != 0) & 0x20) - 0x20) <= x && x < 0x260.  Kinds 3 and 9
         * are one 32-wide pattern and are gone once x is negative; the rest
         * are 64 wide and have to keep being drawn to x = -0x20. */
        narrow = (e->kind == 3 || e->kind == 9);
        lo = narrow ? 0 : -0x20;
        if (e->x < lo || e->x >= 0x260)
            continue;
        if (e->state < 10) {
            sd_explosion(g, e->x, e->y, e->state, narrow);
            continue;
        }
        switch (e->kind) {
        case 1: {
            int b = (e->vx > 0) ? 2 : 0;

            sd_pat_pair(g, e->x, e->y, g->base_c32 + 4 + b, g->base_c32 + 5 + b);
            break;
        }
        case 2: {
            int b = (e->vx > 0) ? 2 : 0;

            sd_pat_pair(g, e->x, e->y, g->base_c32 + 8 + b, g->base_c32 + 9 + b);
            break;
        }
        case 3:
            scr_pat(g->scr, e->x, e->y,
                    g->base_c32 + 0x31 - (e->vx < 1 ? 1 : 0));
            break;
        case 4: {
            /* Eight 16x16 tiles in two rows; the top row animates with the
             * counter that also decides when it fires. */
            int top = g->base_c16 + 0x48 + e->aux * 4;
            int bot = g->base_c16 + 0x44;

            if (e->x > 0) {
                scr_pat(g->scr, e->x, e->y, top);
                scr_pat(g->scr, e->x + 0x10, e->y, top + 1);
                scr_pat(g->scr, e->x, e->y + 0x10, bot);
                scr_pat(g->scr, e->x + 0x10, e->y + 0x10, bot + 1);
            }
            if (e->x < 0x260) {
                scr_pat(g->scr, e->x + 0x20, e->y, top + 2);
                scr_pat(g->scr, e->x + 0x30, e->y, top + 3);
                scr_pat(g->scr, e->x + 0x20, e->y + 0x10, bot + 2);
                scr_pat(g->scr, e->x + 0x30, e->y + 0x10, bot + 3);
            }
            break;
        }
        case 9:
            scr_pat(g->scr, e->x, e->y,
                    g->base_c32 + 0x2f - (e->vx < 1 ? 1 : 0));
            break;
        default:
            break;
        }
    }
}

/* The charges in flight and, for every slot not in flight, one icon in the
 * top-right corner.  Both come out of the same base, which changes with the
 * two weapon power-ups. */
static void draw_charges(Game *g)
{
    int base = (g->ship == 1) ? g->base_c16 + 3 : g->base_c16 + g->power * 6;
    int icon_x = (0x28 - g->shot_max) * 8;
    int i;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++) {
        if (g->shot[i].y < SHOT_FREE)
            scr_pat(g->scr, g->shot[i].x, g->shot[i].y,
                    base + 2 - (g->pal_b < 2 ? 1 : 0));
        else {
            scr_pat(g->scr, icon_x, 6, base);
            icon_x += 0x10;
        }
    }
}

static void draw_weapons(Game *g)
{
    int i;

    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y > BULLET_FREE)
            scr_pat(g->scr, g->bullet[i].x, g->bullet[i].y,
                    g->base_c16 + 0x19 + g->pal_a);
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y >= MISSILE_FREE + 1) {
            int v = g->missile[i].vx;

            if (v < -8)
                v = -8;
            if (v > 8)
                v = 8;
            scr_pat(g->scr, g->missile[i].x, g->missile[i].y,
                    g->base_c16 + 0xc + SEA_MISSILE_LEAN[v + 8]);
        }
}

static void draw_item(Game *g)
{
    int y;

    if (g->item_kind == 0)
        return;
    /* Once it is sitting on the surface it blinks, on one half of the palette
     * cycle and one of the two pages. */
    if (!(g->item_timer > 0xf || g->item_timer < 1 || g->page != 0))
        return;
    y = g->item_y + ((g->pal_c < 4 && g->item_timer > 0) ? 1 : 0);
    scr_pat(g->scr, g->item_x, y, g->base_c16 + 0x28 + g->item_kind);
}

/* FUN_1000_890a per entity, after the HUD band is painted: the black panel in
 * the middle of the HUD is a radar of the whole playfield at one eighth. */
static void draw_radar(Game *g)
{
    int i;

    for (i = g->nent; i >= 1; i--) {
        Ent *e = &g->ent[i];
        int w = 7, colour;

        if (e->y <= 0xf)
            continue;
        switch (e->kind) {
        case 1: colour = 6; break;
        case 2: colour = 2; break;
        case 4: colour = 3; break;
        case 3: colour = 4; w = 3; break;
        case 9: colour = 0xf - g->page * 7; w = 3; break;
        default: continue;
        }
        sd_radar(g, e->x, e->y, w, colour);
    }
    sd_radar(g, g->px, g->py, 7, 0xf);
}

static void sea_draw(Game *g)
{
    draw_background(g);
    draw_enemies(g);
    draw_charges(g);
    draw_weapons(g);
    draw_player(g);
    draw_item(g);
}

static const Stage SEA = {
    1, sea_start, sea_enemy, sd_move_side, sea_fire, sea_shots, sea_weapons,
    sea_item, sea_clear_shots, sd_motion, sea_draw, draw_radar, 0, 0x240
};

const Stage *stage_sea(void) { return &SEA; }
