/* Super Depth's game logic, as far as it has been read out of DEPTH.EXE.
 *
 * All the numbers are the original's.  The type-1 (SEA) stage lives at
 * 0x06f6..0x1fa9 in the code segment - Ghidra splits it into FUN_1000_06f6,
 * _1288, _133b, _13e0, _1402.. and _1faa, but every edge between those is a
 * `jmp`, not a `call`: it is one routine, with the per-frame loop closing from
 * 0x1fa6/0x1fa8 back to 0x0993 / 0x083b.  Line references below use Ghidra's
 * names since that is what the decompilation is filed under.
 *
 * Where behaviour has not been read yet it is left out rather than guessed at.
 */
#include "game.h"
#include "pal.h"
#include "tables.h"
#include <string.h>

/* Screen bands, from the stage's opening draw:
 *
 *   FUN_1000_b854(4, 0, 0x4b, 0x28, 5)     a filled box in BYTE columns 4..75,
 *                                          rows 0..40, colour 5 - the sky
 *   FUN_1000_c25e(col*16, 0x140, ...)      the sea floor, two 16px rows
 *   FUN_1000_c25e(col*16, 0x150, ...)      across all 40 columns
 *
 * FUN_1000_c25e is NOT a sprite draw: it takes a pattern number but uses only
 * its size, setting the VRAM address to y * 0x50 + (x >> 3) and the row advance
 * to 0x50 - size, then writing through the GRCG whose tile registers hold a flat
 * colour.  So the floor is a plain 640x32 band.
 *
 * TODO: the colour those GRCG passes produce has not been pinned down; the
 * placeholder is a dark grey.  Reading FUN_1000_c312 will settle it.
 */
#define SKY_H     0x28
#define SKY_COL   5
#define FLOOR_Y   0x140
#define FLOOR_COL 10

/* The player's limits, from the movement test:
 *   right while  speed + x < 0x210,  left while  0x2f < x - speed  */
#define PX_MIN 0x30
#define PX_MAX 0x210

/* Enemy sprites.  Only kinds 1, 3 and 9 have been read out in full:
 *   kind 1  two 32x32 halves, patterns 4+5 facing one way, 6+7 the other
 *   kind 3  one 32x32, pattern 0x30 or 0x31
 *   kind 9  one 32x32, pattern 0x2e or 0x2f
 * Kinds 2 and 4 draw multi-part sprites out of both banks; kind 4's is read
 * (0x12+aux etc.) but its layout is not settled, so both fall back to kind 1's
 * shape for now.
 */

/* The original's rand(), FUN_1000_efc8, is the Microsoft C 6.0 library's. */
static int sd_rand(Game *g)
{
    g->rnd = g->rnd * 214013u + 2531011u;
    return (int)((g->rnd >> 16) & 0x7fff);
}

static int sgn(int v) { return v > 0 ? 1 : (v < 0 ? -1 : 0); }

/* The original writes this as `if (a == b) 0; else if (-a == -b || -a + b < 0)
 * -1; else 1`, i.e. the direction from x toward the middle of the field. */
static int toward_middle(int x) { return sgn(0x140 - x); }

void game_init(Game *g, Screen *scr, const PatBank *bank,
               int base_c32, int base_c16, int base_c08, int base_bos)
{
    memset(g, 0, sizeof *g);
    g->scr = scr;
    g->bank = bank;
    g->base_c32 = base_c32;
    g->base_c16 = base_c16;
    g->base_c08 = base_c08;
    g->base_bos = base_bos;
    g->rnd = 1;
    /* FUN_1000_8960 sets the defaults: 3 lives, start at stage 1, 9 entities. */
    g->lives = 3;
    g->nent = 9;
    scr_palette(scr, SD_PAL_GAME);
    game_stage_start(g, 1);
}

/* FUN_1000_8098 - fill the entity slots from the stage's roster. */
static void load_roster(Game *g)
{
    int i;

    for (i = 1; i < MAX_ENT; i++) {
        Ent *e = &g->ent[i];

        memset(e, 0, sizeof *e);
        e->state = 10;
        e->kind = (i <= SD_SLOTS) ? SD_ROSTER[g->stage][i - 1] : 0;
        /* Slots start off screen; the non-SEA stages start them above it. */
        e->y = (g->type != 1) ? -0x20 : 0;
    }
}

void game_stage_start(Game *g, int stage)
{
    int i;

    if (stage < 1)
        stage = 1;
    if (stage > SD_STAGES)
        stage = 1;
    g->stage = stage;
    g->type = ((stage - 1) % 4) + 1;
    g->frame = 0;
    g->page = 0;

    /* FUN_1000_06f6's opening block. */
    g->px = 0x120;
    g->py = 0x10;
    g->pvx = 0;
    g->pstate = 10;
    g->speed = 4;
    g->shot_max = 4;
    g->power = 0;
    g->ship = 0;
    g->trig = 1;
    g->shots_live = g->bullets_live = g->missiles_live = 0;
    g->kills = 0;
    g->cleared = 0;
    /* The stage's kill quota, from
     *   local_28 = ((0x181e & 0x20c6) * 2 + (stage >> 2) + 3) * 5
     * i.e. ((ship & power) * 2 + stage / 4 + 3) * 5 - 15 on stage 1, 20 from
     * stage 5, 25 from stage 9.  Once it is met the survivors run for the edge
     * and no more spawn. */
    g->quota = (((g->ship & g->power) * 2) + (stage >> 2) + 3) * 5;

    for (i = 0; i < MAX_SHOT; i++) {
        g->shot[i].y = 0x130;
        g->shot[i].x = g->shot[i].target = g->shot[i].vx = 0;
    }
    for (i = 0; i < MAX_BULLET; i++) {
        g->bullet[i].y = 0;
        g->bullet[i].x = 0;
    }
    for (i = 0; i < MAX_MISSILE; i++) {
        g->missile[i].y = -0x10;
        g->missile[i].x = g->missile[i].phase = 0;
    }
    load_roster(g);
}

/* ------------------------------------------------------------------ player */

static void fire(Game *g, int dx, int spread)
{
    int i, slot = -1;

    if (g->shots_live >= g->shot_max || !g->trig)
        return;
    for (i = 0; i < g->shot_max; i++)
        if (g->shot[i].y > 0x12f) {
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
}

static void update_player(Game *g)
{
    if (g->pstate < 10) {
        if (--g->pstate < 1) {
            g->lives--;
            game_stage_start(g, g->stage);
        }
        return;
    }
    g->pvx = 0;
    if ((g->pad & PAD_RIGHT) && g->speed + g->px < PX_MAX)
        g->pvx = g->speed;
    if ((g->pad & PAD_LEFT) && PX_MIN - 1 < g->px - g->speed)
        g->pvx = -g->speed;

    if (g->pad & PAD_A)
        fire(g, -0x10, -7);
    if (g->pad & PAD_B)
        fire(g, 0x40, 7);
    if (!(g->pad & (PAD_A | PAD_B)))
        g->trig = 1;
}

/* ----------------------------------------------------------------- enemies */

static int ent_free_bullet(Game *g)
{
    int i, slot = -1;

    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y < 0x21)
            slot = i;
    return slot;
}

static int ent_free_missile(Game *g)
{
    int i;

    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y < -0xf)
            return i;
    return -1;
}

/* Spawn one enemy off the side of the field.  `ydiv`/`ybase` give the depth
 * band and `span` the horizontal launch offset, all straight from the original's
 * per-kind spawn blocks. */
static void spawn(Game *g, Ent *e, int ymod, int ybase, int span,
                  int vmod, int vbase)
{
    int dir;

    e->y = (sd_rand(g) % ymod + ybase) * 0x20;
    e->x = (sd_rand(g) % 2) * span + FIELD_LO;
    dir = toward_middle(e->x);
    e->vx = (sd_rand(g) % vmod + vbase) * dir;
    e->vy = 0;
    e->aux = 0;
}

static void update_enemy(Game *g, int idx)
{
    Ent *e = &g->ent[idx];
    int fires;

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
            e->vx = (sd_rand(g) % 4 + 5) * toward_middle(e->x);
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
        e->vx = sgn(e->vx) * 8;

    if (e->x + e->vx < FIELD_LO + 1 || e->x + e->vx > FIELD_HI - 1) {
        e->y = 0;
        return;
    }

    /* Firing.  Each kind has its own period, and only while on screen. */
    fires = 0;
    if (e->x > 0 && e->x < 0x240) {
        int period;

        switch (e->kind) {
        case 1:
        case 9:
            period = g->ship * -0x28 + 100;
            fires = period > 0 && sd_rand(g) % period == 0 &&
                    g->bullets_live < 0x10;
            if (fires) {
                int s = ent_free_bullet(g);

                if (s >= 0) {
                    g->bullet[s].y = e->y + 0xc;
                    g->bullet[s].x = e->x + 0x18;
                    g->bullets_live++;
                }
            }
            break;
        case 2:
            period = ((g->ship * -2 + 5) - g->power) * 10;
            fires = period > 0 && sd_rand(g) % period == 0 &&
                    g->missiles_live < 8;
            if (fires) {
                int s = ent_free_missile(g);

                if (s >= 0) {
                    g->missile[s].y = e->y + 0xc;
                    g->missile[s].x = e->x + 0x18;
                    g->missile[s].phase = 0;
                    g->missiles_live++;
                }
            }
            break;
        case 3:
            period = ((4 - g->power) - g->ship) * 5;
            fires = period > 0 && sd_rand(g) % period == 0 &&
                    g->bullets_live < 0x10;
            if (fires) {
                int s = ent_free_bullet(g);

                if (s >= 0) {
                    g->bullet[s].y = e->y + 0x10;
                    g->bullet[s].x = e->x + 0x10;
                    g->bullets_live++;
                }
            }
            break;
        case 4:
            /* A four-shot salvo, once aux has wound up to 4. */
            if (e->aux == 4 && g->missiles_live < 4) {
                int k;

                for (k = 0; k < 4; k++) {
                    int s = ent_free_missile(g);

                    if (s < 0)
                        break;
                    g->missile[s].y = e->y + 8;
                    g->missile[s].x = e->x + k * 0x10;
                    g->missile[s].phase = 0;
                    g->missiles_live++;
                }
                e->vx = (sd_rand(g) % 4 + 5) * toward_middle(e->x);
            }
            break;
        default:
            break;
        }
    }
}

/* FUN_1000_824a - award the kill and start the dying animation. */
static void kill_enemy(Game *g, int idx)
{
    Ent *e = &g->ent[idx];

    e->state = 9;
    g->score += SD_SCORE[g->type][e->kind < 10 ? e->kind : 0];
    e->vy = 0;
    e->vx = 0;
    g->kills++;
}

/* ------------------------------------------------------- shots and weapons */

/* The charge drifts and its vx accelerates back toward the launch column, so a
 * spread shot curves in again. */
static void update_shots(Game *g)
{
    int i, j;

    g->shots_live = 0;
    for (i = 0; i < MAX_SHOT; i++) {
        Shot *s = &g->shot[i];

        if (s->y > 0x12f)
            continue;
        g->shots_live++;
        s->x += s->vx;
        if (s->x != s->target)
            s->vx += (s->target <= s->x) ? -1 : 1;
        s->y += 4;
        if (s->y > 0x12f) {
            s->y = 0x130;
            continue;
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
                kill_enemy(g, j);
                s->y = 0x130;
                break;
            }
        }
    }
}

static void hit_player(Game *g)
{
    if (g->pstate == 10)
        g->pstate = 9;
}

static void update_bullets(Game *g)
{
    int i;

    g->bullets_live = 0;
    for (i = 0; i < MAX_BULLET; i++) {
        Bullet *b = &g->bullet[i];

        if (b->y <= 0x20)
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
            hit_player(g);
            b->y = 0;
            continue;
        }
        if (b->y > 0x20)
            g->bullets_live++;
    }
}

static void update_missiles(Game *g)
{
    int i;

    g->missiles_live = 0;
    for (i = 0; i < MAX_MISSILE; i++) {
        Missile *m = &g->missile[i];

        if (m->y < -0xf)
            continue;
        m->y -= 6;
        m->phase++;
        if (g->pstate == 10 && g->px - 6 <= m->x && m->x <= g->px + 0x36 &&
            g->py - 0xc <= m->y && m->y <= g->py + 0x18) {
            hit_player(g);
            m->y = -0x10;
            continue;
        }
        if (m->y < -0xf)
            continue;
        g->missiles_live++;
    }
}

/* Movement is applied together, after everything has decided what to do - the
 * original does exactly this, walking the slots down from DS:0x17f4 and adding
 * vx/vy, then the player, then flipping the page. */
static void apply_motion(Game *g)
{
    int i;

    for (i = g->nent; i >= 1; i--) {
        g->ent[i].x += g->ent[i].vx;
        g->ent[i].y += g->ent[i].vy;
    }
    g->px += g->pvx;
    g->page ^= 1;
}

/* -------------------------------------------------------------------- draw */

static void draw_background(Game *g)
{
    int y, x;

    scr_clear(g->scr, 0);
    for (y = 0; y < SKY_H; y++) {
        unsigned char *row = g->scr->px + (long)y * SCR_W;

        for (x = 4 * 8; x < 76 * 8; x++)
            row[x] = SKY_COL;
    }
    for (y = FLOOR_Y; y < FLOOR_Y + 32; y++) {
        unsigned char *row = g->scr->px + (long)y * SCR_W;

        for (x = 0; x < SCR_W; x++)
            row[x] = FLOOR_COL;
    }
}

static void draw_player(Game *g)
{
    int p = g->base_c32 + g->ship * 3;

    if (g->pstate < 10 && (g->frame & 1))
        return;                     /* blink while dying */
    scr_pat(g->scr, g->px, g->py, p);
    scr_pat(g->scr, g->px + 0x20, g->py, p + 1);
}

/* One icon per charge you may have in flight.  See the note in RESUME.md: the
 * decompilation names a c32 pattern, but the 0x10 spacing and the stride of 3
 * both say these are the 16x16 charges. */
static void draw_ammo(Game *g)
{
    int x = (0x28 - g->shot_max) * 8, i;

    for (i = 0; i < g->shot_max; i++) {
        scr_pat(g->scr, x, 6, g->base_c16 + g->ship * 3);
        x += 0x10;
    }
}

static void draw_enemies(Game *g)
{
    int i;

    for (i = 1; i < MAX_ENT; i++) {
        Ent *e = &g->ent[i];
        int narrow, lo;

        if (e->y <= 0xf)
            continue;
        narrow = (e->kind == 3 || e->kind == 9);
        lo = narrow ? -0x20 : 0;
        if (e->x < lo || e->x >= 0x260)
            continue;
        if (e->state < 10) {
            /* The dying animation is FUN_1000_85b8 / FUN_1000_8562; not read
             * yet, so show the explosion frames that sit right after the
             * charges in the c16 bank. */
            scr_pat(g->scr, e->x, e->y, g->base_c16 + 9 + (9 - e->state) % 3);
            continue;
        }
        switch (e->kind) {
        case 1:
        case 2:
        case 4: {
            int p = g->base_c32 + ((e->vx > 0) ? 6 : 4);

            scr_pat(g->scr, e->x, e->y, p);
            scr_pat(g->scr, e->x + 0x20, e->y, p + 1);
            break;
        }
        case 3:
            scr_pat(g->scr, e->x, e->y,
                    g->base_c32 + (e->vx < 1 ? 0x30 : 0x31));
            break;
        case 9:
            scr_pat(g->scr, e->x, e->y,
                    g->base_c32 + (e->vx < 1 ? 0x2e : 0x2f));
            break;
        default:
            break;
        }
    }
}

static void draw_weapons(Game *g)
{
    int i;

    for (i = 0; i < MAX_SHOT; i++)
        if (g->shot[i].y <= 0x12f)
            scr_pat(g->scr, g->shot[i].x, g->shot[i].y,
                    g->base_c16 + g->ship * 3);
    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y > 0x20)
            scr_pat(g->scr, g->bullet[i].x, g->bullet[i].y, g->base_c08);
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y >= -0xf)
            scr_pat(g->scr, g->missile[i].x, g->missile[i].y,
                    g->base_c08 + 1);
}

void game_tick(Game *g)
{
    int i;

    g->frame++;

    /* Count what is on the field; the spawners test this against DS:0x17f4. */
    g->alive = 0;
    for (i = 1; i < MAX_ENT; i++)
        if (g->ent[i].y != 0)
            g->alive++;

    update_player(g);
    for (i = 1; i <= g->nent && i < MAX_ENT; i++)
        update_enemy(g, i);
    update_shots(g);
    update_bullets(g);
    update_missiles(g);

    /* The dying enemies wind down and free their slot. */
    for (i = 1; i < MAX_ENT; i++)
        if (g->ent[i].state < 10 && --g->ent[i].state < 1) {
            g->ent[i].state = 10;
            g->ent[i].y = 0;
        }

    /* Inferred, not yet read: the stage is over once the quota is met and the
     * field has emptied.  The original's exit path is the jump at 0x13f5 into
     * 0x1faa, which has not been traced yet. */
    if (!g->cleared && g->kills >= g->quota && g->alive == 0) {
        g->cleared = 1;
        game_stage_start(g, g->stage + 1);
        return;
    }

    apply_motion(g);

    draw_background(g);
    draw_ammo(g);
    draw_enemies(g);
    draw_weapons(g);
    draw_player(g);
}
