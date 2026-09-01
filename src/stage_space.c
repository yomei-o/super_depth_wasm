/* Stage type 3, SPACE - FUN_1000_383a.
 *
 * The third turn: the ship is out of the atmosphere, and the stage turns on its
 * side.  It sits at a fixed x and moves UP AND DOWN; left and right build up a
 * horizontal speed that the ship never actually uses - the world is slid past
 * it instead, so everything else gets `- pvx` added to its motion and the
 * starfield scrolls in three parallax layers.  The two buttons fire left and
 * right rather than being two launchers on the same side.
 *
 * The one that hurts to miss: FUN_1000_91fe, the animation of the ship leaving
 * the atmosphere, which the original plays instead of a fade when the stage is
 * entered for the first time.  This port fades.
 *
 * The background is black here.  The original does it by writing DS:0x02ba - the
 * blue channel of palette entry 0 - to zero before the fade and back to 7 after,
 * so entry 0 stays black for the whole stage while the table is left correct
 * for the next one; `Game.pal` is that patched table.
 */
#include "gameint.h"
#include "pal.h"
#include "tables.h"

/* A shot is free below -0xf; both of the enemies' weapons at 0x160.  Entities
 * are off the field above -0x1f or below 0x15f - they come in from either. */
#define SHOT_FREE   (-0x10)
#define WEAPON_FREE 0x160
#define PY_MAX      0x140

static void space_start(Game *g)
{
    int i;

    g->px = 0x120;
    g->py = 0x120;
    g->ent_off = -0x20;
    g->pal[0][2] = 0;                 /* DS:0x02ba: space is black */
    for (i = 0; i < MAX_SHOT; i++) {
        g->shot[i].y = SHOT_FREE;
        g->shot[i].x = g->shot[i].target = g->shot[i].vx = 0;
    }
    for (i = 0; i < MAX_BULLET; i++) {
        g->bullet[i].y = WEAPON_FREE;
        g->bullet[i].x = g->bullet[i].v = 0;
    }
    for (i = 0; i < MAX_MISSILE; i++) {
        g->missile[i].y = WEAPON_FREE;
        g->missile[i].x = g->missile[i].vx = g->missile[i].vy = 0;
    }
    for (i = 1; i < MAX_ENT; i++)
        g->ent[i].y = g->ent_off;
    for (i = 0; i < MAX_STAR; i++) {
        g->star[i].x = sd_rand(g) % 0x280;
        g->star[i].y = sd_rand(g) % 0x160;
        /* Two bands of colour, dim and bright, and three scroll speeds. */
        g->star[i].colour = sd_rand(g) % 4 + (sd_rand(g) % 2) * 10 + 2;
        g->star[i].layer = sd_rand(g) % 3 + 1;
    }
    /* The ship is never slower than 6 out here. */
    if (g->speed < 6)
        g->speed = 6;
    sd_quota(g, 8, 1);
}

/* ------------------------------------------------------------------ player */

/* Up and down at `speed`; left and right are an acceleration capped at 8, and
 * what they actually move is the rest of the universe. */
static void space_move(Game *g)
{
    g->pvy = 0;
    if ((g->pad & PAD_DOWN) && g->speed + g->py < PY_MAX)
        g->pvy = g->speed;
    if ((g->pad & PAD_UP) && g->py - g->speed >= 0)
        g->pvy = -g->speed;
    if (g->pad & PAD_RIGHT)
        g->pvx += 2;
    if (g->pad & PAD_LEFT)
        g->pvx -= 2;
    if (g->pvx > 8 || g->pvx < -8)
        g->pvx = sd_sgn(g->pvx) * 8;
}

static int free_shot(Game *g)
{
    int i;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y < SHOT_FREE + 1)
            return i;
    return -1;
}

/* `target` carries the shot's horizontal speed here, and `vx` the -1/0/1 of the
 * three-way spread, which is vertical in this stage. */
static void launch(Game *g, int x, int y, int speed, int spread)
{
    int s = free_shot(g);

    if (s < 0)
        return;
    g->shot[s].y = y;
    g->shot[s].x = x;
    g->shot[s].target = speed;
    g->shot[s].vx = spread;
    g->shots_live++;
}

static void space_fire(Game *g, int which)
{
    int x = g->px + (which ? 0x2c : 5);
    int y = g->py + (which ? 0xb : 0xc);
    int speed = which ? (g->ship + 2) * 6 : (-2 - g->ship) * 6;

    if (g->shots_live >= g->shot_max - g->power * 2 || !g->trig)
        return;
    launch(g, x, y, speed, 0);
    g->trig = 0;
    if (g->power == 1) {
        launch(g, x, y, speed, -1);
        launch(g, x, y, speed, 1);
    }
    sd_sfx(g, SFX_BOSS);        /* effect 5, not 1: this stage has its own */
}

/* ----------------------------------------------------------------- enemies */

static int free_weapon(Game *g)
{
    int i, slot = -1;

    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y > WEAPON_FREE - 1)
            slot = i;
    return slot;
}

/* Everything out here throws the same shot: aimed at the ship unless the ship
 * is nearly in line, in which case it scatters.  The horizontal part carries
 * the ship's scroll speed so it keeps up with the world. */
static void throw_shot(Game *g, int x, int y)
{
    int s = free_weapon(g);
    int off;

    if (s < 0)
        return;
    g->missile[s].y = y;
    g->missile[s].x = x;
    off = 0x20 - (x - g->px);
    if (off < 0)
        off = -off;
    if (off < 0x21)
        g->missile[s].vx = sd_rand(g) % 5 + g->pvx - 2;
    else
        g->missile[s].vx = (sd_rand(g) % 4 + 4) * sd_sgn(g->px - x) + g->pvx;
    off = (g->py - y) + 0x10;
    if (off < 0)
        off = -off;
    if (off < 0x21)
        g->missile[s].vy = sd_rand(g) % 5 - 2;
    else
        g->missile[s].vy = (sd_rand(g) % 4 + 4) * sd_sgn(g->py - y);
    g->missiles_live++;
    sd_sfx(g, SFX_ENEMY);
}

/* Off the top or the bottom, and in from whichever side. */
static void enter(Game *g, Ent *e)
{
    e->y = (sd_rand(g) % 2) * 0x17e - 0x1f;
    if (sd_rand(g) % 2 == 0)
        e->x = sd_rand(g) % 0x160 - 0x140;
    else
        e->x = sd_rand(g) % 0x140 + 0x260;
}

static int offscreen(const Ent *e)
{
    return e->y < -0x1f || e->y > 0x15f;
}

static void space_enemy(Game *g, int idx)
{
    Ent *e = &g->ent[idx];
    int period, dir;

    if (offscreen(e))
        e->vy = 0;
    else
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
        /* Chases the ship in both axes, with a speed limit of its own. */
        if (sd_rand(g) % 0xf == 0 && offscreen(e) && g->kills < g->quota) {
            enter(g, e);
            dir = sd_toward_middle(e->x);
            e->vx = (sd_rand(g) % 3 + 1) * dir;
            e->vy = (sd_rand(g) % 3 + 1) * sd_sgn(100 - e->y);
            e->speed = sd_rand(g) % 3 + 2;
            e->aux = sd_rand(g) % 0x32 + (0x32 - e->vy) * 3;
        }
        if (e->x + e->vx - g->pvx < -0x13f || e->x + e->vx - g->pvx > 0x39f) {
            e->y = -0x20;
            e->vy = 0;
        }
        if (!offscreen(e)) {
            int d = e->x - g->px;

            if ((d > 0x32 || d < -0x32) && d != 0)
                e->vx += (d < 0) ? 1 : -1;
            e->vy += g->page * sd_sgn(g->py - e->y);
            if (e->vx > e->speed + 2 || e->vx < -(e->speed + 2))
                e->vx = (e->speed + 2) * sd_sgn(e->vx);
            if (e->vy > e->speed || e->vy < -e->speed)
                e->vy = e->speed * sd_sgn(e->vy);
            if (g->quota <= g->kills)
                e->vy = sd_sgn(e->vy) * 8;
        }
        break;
    case 2:
        /* Straight across at speed. */
        if (sd_rand(g) % 0xf == 0 && e->y < -0x1f && g->kills < g->quota) {
            e->y = (sd_rand(g) % 0xb) << 5;
            e->x = (sd_rand(g) % 2) * 0x4c0 + FIELD_LO;
            e->vx = (sd_rand(g) % 5 + 8) * sd_toward_middle(e->x);
            e->vy = 0;
        }
        if (e->x + e->vx - g->pvx < -0x13f || e->x + e->vx - g->pvx > 0x37f) {
            e->y = -0x20;
            e->vy = 0;
        }
        period = ((3 - g->power) - g->ship) * 10;
        if (e->y > -0x20 && period > 0 && sd_rand(g) % period == 0 &&
            g->missiles_live < 0x10 && e->x > 0 && e->x < 0x241 &&
            (e->x - g->px > 0x78 || e->x - g->px < -0x78))
            throw_shot(g, e->x + 0x10, e->y + 0x10);
        break;
    case 3:
        /* Crosses the screen vertically and lets go of four shots at the
         * height it picked on the way in, then blows itself up. */
        period = ((6 - g->power) - g->ship) * 0x14;
        if (period > 0 && sd_rand(g) % period == 0 && offscreen(e) &&
            g->kills < g->quota) {
            e->y = (sd_rand(g) % 2) * 0x16e - 0xf;
            e->x = sd_rand(g) % 0x230 + 0x20;
            e->vx = (sd_rand(g) % 3 + 1) * sd_toward_middle(e->x) + g->pvx;
            e->vy = (sd_rand(g) % 3 + 3) * sd_sgn(100 - e->y);
            e->aux = sd_rand(g) % 300 + 0x1a;
        }
        if (e->x + e->vx - g->pvx < -0x13f || e->x + e->vx - g->pvx > 0x3af) {
            e->y = -0x20;
            e->vy = 0;
        }
        if (e->y > -0x20 && (e->y + e->vy < e->aux) != (e->y < e->aux)) {
            int k;

            for (k = 0; k < 4; k++)
                if (g->missiles_live < 0x10 && e->x > 0x10 && e->x < 0x261)
                    throw_shot(g, e->x + 0xc, e->y + 0xc);
            /* No score, like SKY's kind 4: the state is set directly. */
            e->state = 9;
            e->vx = 0;
            e->vy = 0;
        }
        break;
    case 4:
        /* The big one: it follows the ship loosely and fires often. */
        period = ((4 - g->power) - g->ship) * 0x28;
        if (period > 0 && sd_rand(g) % period == 0 && offscreen(e) &&
            g->kills < g->quota) {
            e->y = (sd_rand(g) % 0xb) << 5;
            e->x = (sd_rand(g) % 2) * 0x4c0 + FIELD_LO;
            e->vx = (sd_rand(g) % 5 + 8) * sd_toward_middle(e->x);
            e->vy = 0;
            e->speed = sd_rand(g) % 2 + 0xc;
        }
        if (e->x + e->vx - g->pvx < -0x13f || e->x + e->vx - g->pvx > 0x37f) {
            e->y = -0x20;
            e->vy = 0;
        }
        if (!offscreen(e)) {
            int d;

            period = (g->power + g->ship) * -0xc + 0x1e;
            if (period > 0 && sd_rand(g) % period == 0 && g->missiles_live < 0x10 &&
                e->x > 0 && e->x < 0x241)
                throw_shot(g, e->x + 0x10, e->y + 0x10);
            d = e->x - g->px;
            if ((d > 100 || d < -100) && d != 0)
                e->vx += (d < 0) ? 1 : -1;
            if (e->y != g->py)
                e->vy += (g->py < e->y) ? -1 : 1;
            if (e->vx > e->speed || e->vx < -e->speed)
                e->vx = e->speed * sd_sgn(e->vx);
            if (e->vy > e->speed || e->vy < -e->speed)
                e->vy = e->speed * sd_sgn(e->vy);
        }
        break;
    case 9:
        /* Crosses at a chosen height; the one that leaves an item. */
        if (sd_rand(g) % 10 == 0 && offscreen(e) && g->kills < g->quota) {
            e->aux = (sd_rand(g) % 9 + 1) * 0x20;
            e->y = (sd_rand(g) % 2) * 0x40 + e->aux - 0x20;
            e->x = (sd_rand(g) % 2) * 0x4e0 + FIELD_LO;
            e->vx = (sd_rand(g) % 5 + 5) * sd_toward_middle(e->x);
            e->vy = 0;
        }
        if (g->quota <= g->kills)
            e->vx = sd_sgn(e->vx) * 10;
        if (e->x + e->vx - g->pvx < -0x13f || e->x + e->vx - g->pvx > 0x39f) {
            e->y = -0x20;
            e->vy = 0;
        }
        if (!offscreen(e) && e->y != e->aux)
            e->vy += (e->aux < e->y) ? -1 : 1;
        break;
    default:
        break;
    }
}

/* ------------------------------------------------------- shots and weapons */

static void space_shots(Game *g)
{
    int i, j;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++) {
        Shot *s = &g->shot[i];

        if (s->y < SHOT_FREE + 1)
            continue;
        s->x += s->target;                       /* the horizontal speed */
        s->y += s->vx * (g->ship + 2) * 2;       /* the three-way spread */
        for (j = 1; j <= g->nent && j < MAX_ENT; j++) {
            Ent *e = &g->ent[j];
            int x0, x1, y0, y1;

            if (e->state < 10 || offscreen(e))
                continue;
            switch (e->kind) {
            case 1:
                x0 = e->x - 8; x1 = e->x + 0x18;
                y0 = e->y - 8; y1 = e->y + 0x18;
                break;
            case 9:
                x0 = e->x - 8; x1 = e->x + 0x18;
                y0 = e->y - 8; y1 = e->y + 0x18;
                break;
            case 2: case 4:
                x0 = e->x - 8; x1 = e->x + 0x38;
                y0 = e->y - 0xc; y1 = e->y + 0x18;
                break;
            case 3:
                x0 = e->x - 0xc; x1 = e->x + 0xc;
                y0 = e->y - 10; y1 = e->y + 10;
                break;
            default:
                continue;
            }
            if (s->x < x0 || s->x > x1 || s->y < y0 || s->y > y1)
                continue;
            {
                int kind = e->kind, ex = e->x, ey = e->y;

                sd_kill_enemy(g, j);
                if (g->ship == 0)
                    s->y = SHOT_FREE;
                if (kind == 9 && g->item_kind == 0) {
                    int off;

                    sd_item_roll(g);
                    g->item_x = ex + 8;
                    g->item_y = ey + 8;
                    /* It drifts toward the ship the way a shot is aimed. */
                    off = 0x20 - (g->item_x - g->px);
                    if (off < 0)
                        off = -off;
                    if (off < 0x21)
                        g->item_vx = sd_rand(g) % 3 + g->pvx / 2 - 2;
                    else
                        g->item_vx = g->pvx / 2 +
                            (sd_rand(g) % 2 + 1) * sd_sgn(g->px - g->item_x);
                    off = (g->py - g->item_y) + 0x10;
                    if (off < 0)
                        off = -off;
                    if (off < 0x21)
                        g->item_vy = (sd_rand(g) % 2) * 4 - 2;
                    else
                        g->item_vy = (sd_rand(g) % 3 + 2) *
                            sd_sgn(g->py - g->item_y);
                    g->item_timer = -1;
                }
            }
            if (s->y < SHOT_FREE + 1)
                break;
        }
        if (s->x < 0 || s->x > 0x26f || s->y > 0x15f)
            s->y = SHOT_FREE;
    }
    g->shots_live = 0;
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y >= SHOT_FREE + 1)
            g->shots_live++;
}

static void space_weapons(Game *g)
{
    int i;

    for (i = 0; i < MAX_MISSILE; i++) {
        Missile *m = &g->missile[i];

        if (m->y < 0)
            m->y = WEAPON_FREE;
        if (m->y >= WEAPON_FREE)
            continue;
        m->x += m->vx - g->pvx;
        m->y += m->vy;
        if (m->y < 0 || m->x < 0 || m->x > 0x277) {
            m->y = WEAPON_FREE;
            continue;
        }
        if (g->pstate == 10 && g->px <= m->x && m->x <= g->px + 0x3a &&
            g->py + 6 <= m->y && m->y <= g->py + 0x1a) {
            sd_hit_player(g);
            m->y = WEAPON_FREE;
        }
    }
    g->missiles_live = 0;
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y < WEAPON_FREE && g->missile[i].y >= 0)
            g->missiles_live++;

    /* Out here the enemies themselves are solid. */
    for (i = 1; i <= g->nent && i < MAX_ENT; i++) {
        Ent *e = &g->ent[i];
        int x0, x1, y0, y1;

        if (e->state < 10 || offscreen(e))
            continue;
        switch (e->kind) {
        case 1: case 9:
            x0 = e->x - 0x30; x1 = e->x + 0x10;
            y0 = e->y - 0x10; y1 = e->y + 0x14;
            break;
        case 2: case 4:
            x0 = e->x - 0x30; x1 = e->x + 0x30;
            y0 = e->y - 0x14; y1 = e->y + 0x14;
            break;
        case 3:
            x0 = e->x - 0x30; x1 = e->x;
            y0 = e->y - 0x14; y1 = e->y + 4;
            break;
        default:
            continue;
        }
        if (x0 <= g->px && g->px <= x1 && y0 <= g->py && g->py <= y1)
            sd_hit_player(g);
    }
}

static void space_item(Game *g)
{
    if (g->item_kind == 0)
        return;
    g->item_y += g->item_vy;
    g->item_x += g->item_vx - g->pvx;
    if (g->px - 4 <= g->item_x && g->item_x <= g->px + 0x34 &&
        g->py <= g->item_y && g->item_y <= g->py + 0x18) {
        sd_item_taken(g);
        return;
    }
    if (g->item_y < -0xf || g->item_y > 0x15f ||
        g->item_x < 0x11 || g->item_x > 0x25f)
        g->item_kind = 0;
}

static void space_clear_shots(Game *g)
{
    int i;

    for (i = 0; i < MAX_SHOT; i++)
        g->shot[i].y = SHOT_FREE;
    for (i = 0; i < MAX_MISSILE; i++)
        g->missile[i].y = WEAPON_FREE;
    g->shots_live = g->missiles_live = 0;
}

/* The ship stays where it is; everything else moves against its speed, and the
 * stars move against it multiplied by their layer. */
static void space_motion(Game *g)
{
    int i;

    for (i = g->nent; i >= 1; i--) {
        g->ent[i].x += g->ent[i].vx - g->pvx;
        g->ent[i].y += g->ent[i].vy;
    }
    g->py += g->pvy;
    for (i = 0; i < MAX_STAR; i++) {
        g->star[i].x -= g->star[i].layer * g->pvx;
        if (g->star[i].x < 0)
            g->star[i].x += 0x280;
        if (g->star[i].x > 0x27f)
            g->star[i].x -= 0x280;
    }
}

/* -------------------------------------------------------------------- draw */

static void space_draw(Game *g)
{
    int i;

    sd_fill(g, 4, 0, 0x4b, 0x15f, 0);
    for (i = 0; i < MAX_STAR; i++) {
        int x = g->star[i].x, y = g->star[i].y;

        if (x >= 32 && x < 608 && y >= 0 && y < 0x160)
            g->scr->px[(long)y * SCR_W + x] = (unsigned char)g->star[i].colour;
    }

    for (i = g->nent; i >= 1; i--) {
        Ent *e = &g->ent[i];
        int wide = (e->kind == 2 || e->kind == 4);

        if (offscreen(e) || e->x < (wide ? -0x20 : 0) || e->x >= 0x260)
            continue;
        if (e->state < 10) {
            if (e->kind == 3)
                sd_explosion(g, e->x - 8, e->y - 8, e->state, 1);
            else if (e->kind == 1 || e->kind == 9)
                sd_explosion(g, e->x, e->y, e->state, 1);
            else
                sd_explosion(g, e->x, e->y, e->state, 0);
            continue;
        }
        switch (e->kind) {
        case 1:
            scr_pat(g->scr, e->x, e->y, g->base_c32 + 0x23);
            break;
        case 2: {
            int b = (e->vx > 0) ? 2 : 0;

            sd_pat_pair(g, e->x, e->y, g->base_c32 + 0x2a + b,
                        g->base_c32 + 0x2b + b);
            break;
        }
        case 3:
            scr_pat(g->scr, e->x, e->y, g->base_c16 + 0x38 + g->page);
            break;
        case 4: {
            int b = (e->vx > 0) ? 4 : 0;

            sd_pat_pair(g, e->x, e->y,
                        g->base_c32 + (g->page + 0x1c) * 2 + b,
                        g->base_c32 + g->page * 2 + 0x39 + b);
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

    /* Six shot patterns: left and right, each level or angled. */
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y >= SHOT_FREE + 1)
            scr_pat(g->scr, g->shot[i].x, g->shot[i].y,
                    g->base_c16 + 0x14 + g->ship * 0x10 +
                    (g->shot[i].target > 0 ? 3 : 0) + g->shot[i].vx);
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y < WEAPON_FREE && g->missile[i].y >= 0)
            scr_pat(g->scr, g->missile[i].x, g->missile[i].y,
                    g->base_c08 + g->page);

    if (g->pstate < 10)
        sd_explosion(g, g->px, g->py, g->pstate, 0);
    else
        sd_pat_pair(g, g->px, g->py, g->base_c32 + 0x28, g->base_c32 + 0x29);

    if (g->item_kind != 0)
        scr_pat(g->scr, g->item_x, g->item_y,
                g->base_c16 + 0x28 + g->item_kind);
}

static void space_radar(Game *g)
{
    int i;

    for (i = g->nent; i >= 1; i--) {
        Ent *e = &g->ent[i];
        int w = 7, colour;

        if (e->y < 0 || e->y > 0x160)
            continue;
        switch (e->kind) {
        case 1: colour = 6; w = 3; break;
        case 2: colour = 2; break;
        case 3: colour = 3; w = 3; break;
        case 4: colour = 4; break;
        case 9: colour = 0xf - g->page * 7; w = 3; break;
        default: continue;
        }
        sd_radar(g, e->x, e->y, w, colour);
    }
    sd_radar(g, g->px, g->py, 7, 0xf);
}

static const Stage SPACE = {
    3, space_start, space_enemy, space_move, space_fire, space_shots,
    space_weapons, space_item, space_clear_shots, space_motion, space_draw,
    space_radar, -0x20, 0x260
};

const Stage *stage_space(void) { return &SPACE; }
