/* Stage type 2, SKY - FUN_1000_1fdc.
 *
 * The ship has surfaced and taken off, so the whole thing turns over: it sits
 * at the bottom of the screen and shoots upward, the enemies come in from the
 * top, their weapons fall, and an item drops instead of floating up.  The
 * furniture is the same as SEA's and lives in game.c; what is here is the
 * stage's own loop.
 *
 * Two things the original does at the seam that are not reproduced:
 *
 *   - FUN_1000_908c, the animation of the ship rising out of the water and
 *     taking off, which plays instead of a fade when the stage is entered for
 *     the first time (it also plays song 9, SEA CLEAR).  This port fades like
 *     SEA does rather than cutting straight in.
 *   - the ship's x is deliberately NOT reset here; it carries over from the
 *     stage before, which is what the original does (only types 3 and 4 put it
 *     back to 0x120).
 */
#include "gameint.h"
#include "pal.h"
#include "tables.h"

/* The sky is repainted every frame down to row 313, one row less on half of
 * the palette cycle:  FUN_1000_b854(4, 0, 0x4b, 0x139 - (3 < DS:0x193c), 5).
 *
 * Below that, rows 314..351 are the strip of sea the ship has just taken off
 * from.  Nothing paints them - but nothing has to: FUN_1000_1fdc ends every
 * frame with FUN_1000_b4ee, which drives the GRCG over all four planes and
 * rep-stosws the whole 32000-byte page to colour 0.  So the strip is cleared
 * along with everything else, which is what sd_fill does here.
 *
 * SEA is the odd one out: FUN_1000_06f6 has no b4ee at all and clears only
 * rows 0..0x13f with FUN_1000_b854, which is how its sea floor survives from
 * one frame to the next.  SKY, SPACE and BOSS all clear the lot. */
#define SKY_BOTTOM 0x139
#define SKY_COL    5

/* A shot is free below -0xf and both of the enemies' weapons at 0x160. */
#define SHOT_FREE    (-0x10)
#define BULLET_FREE  0x160
#define MISSILE_FREE 0x160

static void sky_start(Game *g)
{
    int i;

    /* No `px` here on purpose - see the note at the top. */
    g->py = 0x120;
    g->ent_off = -0x20;
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
    for (i = 1; i < MAX_ENT; i++)
        g->ent[i].y = g->ent_off;
    /* local_44 = ((ship & power) + stage / 4 + 3) * 10 - twice SEA's quota,
     * and without SEA's doubling of the power-up term. */
    sd_quota(g, 10, 1);
}

/* ------------------------------------------------------------------ player */

static int free_shot(Game *g)
{
    int i;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y < SHOT_FREE + 1)
            return i;
    return -1;
}

static void launch(Game *g, int x, int vx)
{
    int s = free_shot(g);

    if (s < 0)
        return;
    g->shot[s].y = g->py + 0x10;
    g->shot[s].x = x;
    g->shot[s].vx = vx;
    g->shots_live++;
}

/* Shot Special fires three at once, which is why the cap comes down by two. */
static void sky_fire(Game *g, int which)
{
    int x = g->px + (which ? 0x2c : 5);

    if (g->shots_live >= g->shot_max - g->power * 2 || !g->trig)
        return;
    launch(g, x, 0);
    g->trig = 0;
    if (g->power == 1) {
        launch(g, x, -1);
        launch(g, x, 1);
    }
    sd_sfx(g, SFX_CHARGE);
}

/* ----------------------------------------------------------------- enemies */

static int free_bullet(Game *g)
{
    int i, slot = -1;

    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y > BULLET_FREE - 1)
            slot = i;
    return slot;
}

static int free_missile(Game *g)
{
    int i, slot = -1;

    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y > MISSILE_FREE - 1)
            slot = i;
    return slot;
}

static void drop_bullet(Game *g, int x, int y)
{
    int s = free_bullet(g);

    if (s < 0)
        return;
    g->bullet[s].y = y;
    g->bullet[s].x = x;
    g->bullet[s].v = 0;              /* it accelerates as it falls */
    g->bullets_live++;
    sd_sfx(g, SFX_ENEMY);
}

/* Kinds 3 and 4 throw the same aimed missile: straight down with a random
 * wobble when the ship is nearly underneath, aimed at it otherwise. */
static void drop_missile(Game *g, int x, int y)
{
    int s = free_missile(g);
    int off;

    if (s < 0)
        return;
    g->missile[s].y = y;
    g->missile[s].x = x;
    off = 0x20 - (x - g->px);
    if (off < 0)
        off = -off;
    if (off < 0x21) {
        g->missile[s].vy = sd_rand(g) % 6 + 8;
        g->missile[s].vx = sd_rand(g) % 5 - 2;
    } else {
        g->missile[s].vy = sd_rand(g) % 6 + 8;
        g->missile[s].vx = (sd_rand(g) % 6 + 2) * sd_sgn(g->px - x);
    }
    g->missiles_live++;
}

/* The horizontal launch: off one side of the field, heading for the middle. */
static int launch_x(Game *g, int span)
{
    return (sd_rand(g) % 2) * span + FIELD_LO;
}

static void sky_enemy(Game *g, int idx)
{
    Ent *e = &g->ent[idx];
    int period;

    if (e->y > -0x20)
        g->alive++;

    if (e->state < 10) {
        if (--e->state == 0) {
            e->y = -0x20;
            e->state = 10;
        }
        return;
    }

    switch (e->kind) {
    case 1:
        /* A plane that dives at the ship, levels out low down, and keeps
         * turning back toward it. */
        if (sd_rand(g) % 0x14 == 0 && e->y < -0x1f && g->kills < g->quota) {
            e->y = sd_rand(g) % 100 + 0x3c;
            e->x = launch_x(g, 0x4e0);
            e->vx = (sd_rand(g) % 3 + 1) * sd_toward_middle(e->x);
            e->vy = sd_rand(g) % 7 + 3;
            /* The height it pulls out at. */
            e->aux = sd_rand(g) % 0x32 + (0x32 - e->vy) * 3;
        }
        if (g->quota <= g->kills)
            e->vy = -8;
        if (e->x + e->vx < -0x13f || e->x + e->vx > 0x39f)
            e->y = -0x20;
        if (e->y > -0x20) {
            int want, have;

            period = g->ship * -0x14 + g->power * -0xf + 0x32;
            if (period > 0 && sd_rand(g) % period == 0 && g->bullets_live < 0x10 &&
                e->x > 0 && e->x < 0x261)
                drop_bullet(g, e->x + 8, e->y + 0xc);
            have = sd_sgn(e->vx);
            want = (g->px - e->x == -0x10) ? 0
                 : ((g->px - e->x + 0x10 < 0) ? -1 : 1);
            if (want != have || g->page != 0) {
                int fuzz = sd_rand(g) % 0x20;

                if (fuzz + g->px != e->x)
                    e->vx += (sd_rand(g) % 0x20 - e->x + g->px < 1) ? -1 : 1;
            }
            if ((e->vx > 0x14 || e->vx < -0x14) && e->vx != 0)
                e->vx -= sd_sgn(e->vx);
            if (e->aux < e->y)
                e->vy--;
            if (e->y < 0x1e)
                e->vy++;
        }
        break;
    case 2:
        /* Straight across, fast. */
        if (sd_rand(g) % 10 == 0 && e->y < -0x1f && g->kills < g->quota) {
            e->y = (sd_rand(g) % 3 + 1) * 0x20;
            e->x = launch_x(g, 0x4c0);
            e->vx = (sd_rand(g) % 4 + 0xc) * sd_toward_middle(e->x);
            e->vy = 0;
        }
        if (e->x + e->vx < -0x13f || e->x + e->vx > 0x37f)
            e->y = -0x20;
        if (e->y > -0x20) {
            period = (3 - g->power) * 10 + g->ship * -0xd;
            if (period > 0 && sd_rand(g) % period == 0 && g->bullets_live < 0x10 &&
                e->x > 0 && e->x < 0x241)
                drop_bullet(g, e->x + 0x10, e->y + 0x14);
        }
        break;
    case 3:
        /* Straight down out of the top, slowing as it comes, dropping aimed
         * missiles. */
        period = (7 - g->power) * 0x14 + g->ship * -0x1e;
        if (period > 0 && sd_rand(g) % period == 0 && e->y < -0x1f &&
            g->kills < g->quota) {
            e->y = -0x1f;
            e->x = sd_rand(g) % 0x200 + 0x20;
            e->vx = (sd_rand(g) * sd_toward_middle(e->x)) % 8;
            e->vy = sd_rand(g) % 8 + 8;
        }
        if (e->y > -0x20) {
            if (e->y > 0x32)
                e->vy--;
            period = (3 - g->power) * 10 + g->ship * -0xd;
            if (period > 0 && sd_rand(g) % period == 0 && g->missiles_live < 0x10)
                drop_missile(g, e->x + 0x20, e->y + 0x18);
        }
        break;
    case 4:
        /* A bomber that picks a column on the way in, drops five missiles the
         * moment it crosses it, and blows itself up doing so. */
        if (sd_rand(g) % 0x14 == 0 && e->y < -0x1f && g->kills < g->quota) {
            e->y = (sd_rand(g) % 5 + 1) * 0x20;
            e->x = launch_x(g, 0x4c0);
            e->vx = sd_toward_middle(e->x) * 0x14;
            e->vy = 0;
            e->aux = sd_rand(g) % 0x240 + 0x20;
        }
        if (e->x + e->vx < -0x13f || e->x + e->vx > 0x37f)
            e->y = -0x20;
        if (e->y > -0x20 &&
            (e->x + e->vx < e->aux) != (e->x < e->aux)) {
            int k;

            for (k = 0; k < 5; k++)
                drop_missile(g, e->x + 0xe, e->y + 0xe);
            /* No score for this one: the original sets the state directly
             * rather than going through FUN_1000_824a. */
            e->state = 9;
            e->vx = 0;
            e->vy = 0;
        }
        break;
    case 9:
        /* Crosses at a chosen height and drifts back to it; the one that
         * leaves an item. */
        if (sd_rand(g) % 0xf == 0 && e->y < -0x1f && g->kills < g->quota) {
            e->aux = (sd_rand(g) % 3 + 3) * 0x20;
            e->y = (sd_rand(g) % 2) * 0x40 + e->aux - 0x20;
            e->x = launch_x(g, 0x4e0);
            e->vx = (sd_rand(g) % 5 + 5) * sd_toward_middle(e->x);
            e->vy = 0;
        }
        if (g->quota <= g->kills)
            e->vx = sd_sgn(e->vx) * 10;
        if (e->x + e->vx < -0x13f || e->x + e->vx > 0x39f) {
            e->y = -0x20;
            e->vy = 0;
        }
        if (e->y > -0x20 && e->aux != e->y)
            e->vy += (e->y >= e->aux) ? -1 : 1;
        break;
    default:
        break;
    }
}

/* ------------------------------------------------------- shots and weapons */

static void sky_shots(Game *g)
{
    int i, j;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++) {
        Shot *s = &g->shot[i];

        if (s->y < SHOT_FREE + 1)
            continue;
        s->y += (g->ship + 2) * -6;
        s->x += s->vx * (g->ship + 2) * 2;
        for (j = 1; j <= g->nent && j < MAX_ENT; j++) {
            Ent *e = &g->ent[j];
            int x1;

            if (e->state < 10 || e->y <= -0x20)
                continue;
            if (e->kind == 1 || e->kind == 9)
                x1 = e->x + 0x18;
            else if (e->kind >= 2 && e->kind <= 4)
                x1 = e->x + 0x38;
            else
                continue;
            if (e->x - 8 > s->x || s->x > x1)
                continue;
            if (e->y - 0xc > s->y || s->y > e->y + 0x18)
                continue;
            {
                int kind = e->kind, ex = e->x, ey = e->y;

                sd_kill_enemy(g, j);
                /* Shot Power Up makes the shot go through. */
                if (g->ship == 0)
                    s->y = SHOT_FREE;
                if (kind == 9 && g->item_kind == 0 && ex > 0x1f && ex < 0x241) {
                    sd_item_roll(g);
                    g->item_x = ex + 8;
                    g->item_y = ey + 8;
                    g->item_vx = 0;
                    g->item_vy = 8;         /* it falls to the ship */
                    g->item_timer = -1;
                }
            }
            if (s->y < SHOT_FREE + 1)
                break;
        }
        if (s->x < 0x10 || s->x > 0x260)
            s->y = SHOT_FREE;
    }
    g->shots_live = 0;
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y >= SHOT_FREE + 1)
            g->shots_live++;
}

static void sky_weapons(Game *g)
{
    int i;

    /* The bombs speed up as they fall, to a limit of sixteen a frame. */
    for (i = 0; i < MAX_BULLET; i++) {
        Bullet *b = &g->bullet[i];

        if (b->y >= BULLET_FREE)
            continue;
        if (b->v < 0x10)
            b->v++;
        b->y += b->v;
        if (g->pstate == 10 && g->px - 4 <= b->x && b->x <= g->px + 0x34 &&
            g->py <= b->y && b->y <= g->py + 0x18) {
            sd_hit_player(g);
            b->y = BULLET_FREE;
        }
    }
    g->bullets_live = 0;
    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y < BULLET_FREE)
            g->bullets_live++;

    for (i = 0; i < MAX_MISSILE; i++) {
        Missile *m = &g->missile[i];

        if (m->y >= MISSILE_FREE)
            continue;
        m->y += m->vy;
        m->x += m->vx;
        if (m->x < 0x1c || m->x > 0x260) {
            m->y = MISSILE_FREE;
            continue;
        }
        if (g->pstate == 10 && g->px - 2 <= m->x && m->x <= g->px + 0x3a &&
            g->py + 6 <= m->y && m->y <= g->py + 0x1a) {
            sd_hit_player(g);
            m->y = MISSILE_FREE;
        }
    }
    g->missiles_live = 0;
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y < MISSILE_FREE && g->missile[i].y >= 0)
            g->missiles_live++;
}

static void sky_item(Game *g)
{
    if (g->item_kind == 0)
        return;
    if (g->item_timer < 0)
        g->item_y += g->item_vy;      /* still falling */
    else
        g->item_timer--;

    if (g->px - 4 <= g->item_x && g->item_x <= g->px + 0x34 &&
        g->py + 8 <= g->item_y && g->item_y <= g->py + 0x20) {
        sd_item_taken(g);
        return;
    }
    if (g->item_timer < 0 && g->item_y > 0x12f) {
        g->item_y = 0x130;            /* it lands beside the ship... */
        g->item_timer = 0x32;         /* ...and waits fifty frames */
    }
    if (g->item_timer == 0)
        g->item_kind = 0;
}

static void sky_clear_shots(Game *g)
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

/* Kind 1's sprite banks as it turns: five frames either side of level, picked
 * by how fast it is going sideways, plus one of two frames per page. */
static int plane_pattern(Game *g, int vx)
{
    int lean = ((vx > 7) ? 2 : 0) - ((vx < -7) ? 2 : 0)
             - ((vx < -2) ? 2 : 0) + ((vx > 2) ? 2 : 0);

    return g->base_c32 + 0x1a + g->page + lean;
}

static void sky_draw(Game *g)
{
    int i;

    sd_fill(g, 4, 0, 0x4b, 0x15f, 0);
    sd_fill(g, 4, 0, 0x4b, SKY_BOTTOM - (g->pal_c > 3 ? 1 : 0), SKY_COL);

    for (i = g->nent; i >= 1; i--) {
        Ent *e = &g->ent[i];
        int lo = (e->kind == 2) ? -0x20 : 0;

        if (e->y <= -0x20 || e->x < lo || e->x >= 0x260)
            continue;
        if (e->state < 10) {
            sd_explosion(g, e->x, e->y, e->state,
                         e->kind == 1 || e->kind == 9);
            continue;
        }
        switch (e->kind) {
        case 1:
            scr_pat(g->scr, e->x, e->y, plane_pattern(g, e->vx));
            break;
        case 2: {
            int b = (e->vx > 0) ? 2 : 0;

            sd_pat_pair(g, e->x, e->y, g->base_c32 + 0x24 + b,
                        g->base_c32 + 0x25 + b);
            break;
        }
        case 3:
            sd_pat_pair(g, e->x, e->y, g->base_c32 + (g->page + 6) * 2,
                        g->base_c32 + g->page * 2 + 0xd);
            break;
        case 4: {
            int b = (e->vx > 0) ? 2 : 0;

            sd_pat_pair(g, e->x, e->y, g->base_c32 + 0x34 + b,
                        g->base_c32 + 0x35 + b);
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

    /* The ship's shots: one of three patterns, so a spread shot leans. */
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y >= SHOT_FREE + 1)
            scr_pat(g->scr, g->shot[i].x, g->shot[i].y,
                    g->base_c16 + 0x11 + g->ship * 0x10 + g->shot[i].vx);
    for (i = 0; i < MAX_BULLET; i++)
        if (g->bullet[i].y < BULLET_FREE)
            scr_pat(g->scr, g->bullet[i].x, g->bullet[i].y,
                    g->base_c16 + 0x1c + g->pal_b);
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y < MISSILE_FREE && g->missile[i].y >= 0)
            scr_pat(g->scr, g->missile[i].x, g->missile[i].y,
                    g->base_c08 + g->page);

    if (g->pstate < 10)
        sd_explosion(g, g->px, g->py, g->pstate, 0);
    else
        sd_pat_pair(g, g->px, g->py + (g->pal_c < 4 ? 1 : 0),
                    g->base_c32 + 2, g->base_c32 + 3);

    if (g->item_kind != 0 &&
        (g->item_timer > 0xf || g->item_timer < 1 || g->page != 0)) {
        int y = g->item_y + ((g->pal_c < 4 && g->item_timer > 0) ? 1 : 0);

        scr_pat(g->scr, g->item_x, y, g->base_c16 + 0x28 + g->item_kind);
    }
}

static void sky_radar(Game *g)
{
    int i;

    for (i = g->nent; i >= 1; i--) {
        Ent *e = &g->ent[i];
        int w = 7, colour;

        if (e->y < 0)
            continue;
        switch (e->kind) {
        case 1: colour = 6; w = 3; break;
        case 2: colour = 2; break;
        case 3: colour = 4; break;
        case 4: colour = 3; break;
        case 9: colour = 0xf - g->page * 7; w = 3; break;
        default: continue;
        }
        sd_radar(g, e->x, e->y, w, colour);
    }
    sd_radar(g, g->px, g->py, 7, 0xf);
}

static const Stage SKY = {
    2, sky_start, sky_enemy, sd_move_side, sky_fire, sky_shots, sky_weapons,
    sky_item, sky_clear_shots, sd_motion, sky_draw, sky_radar, -0x20, 0x260
};

const Stage *stage_sky(void) { return &SKY; }
