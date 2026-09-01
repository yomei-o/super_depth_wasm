/* Stage type 4, BOSS - FUN_1000_5818.  Stages 4, 8 and 12, one boss each.
 *
 * The ship moves in all four directions and fires left and right, as in SPACE,
 * but nothing scrolls: the starfield falls instead, warped sideways by a sine
 * table so the whole sky bends.  There is no roster and no quota - the boss
 * takes twenty hits on its weak spot, and the stage ends when its death has
 * finished burning.
 *
 * How the boss is stored is the thing worth knowing before reading this.  It is
 * NOT an entity with a kind: it is a body made of entity slots, and each slot's
 * `kind` field holds a PATTERN NUMBER out of DEPTH.BOS instead.  FUN_1000_84d6,
 * _8518 and _8622 are the three ways the original draws one of those slots
 * (single, a 64-wide pair, and a pair with a facing offset).  The velocity of
 * the whole body lives in slot 1's vx/vy, which every part is moved by.
 *
 *   boss 1  slots 1..6, a 4x3 grid of 32x32 tiles (patterns 0..3, 8..11,
 *           16..19).  Sweeps side to side and spits four fat shots at a time;
 *           the weak spot is the middle band of its face.
 *   boss 2  slots 1 and 2 the head, 3..14 a tail that follows it a frame at a
 *           time.  Charges across the screen once it is hurt enough.
 *   boss 3  slots 1..8, a ship with a mouth that opens (slots 3..8) and fires
 *           a beam made of repeated tiles.
 *
 * Not reproduced: FUN_1000_9568, the animation of arriving at the boss, which
 * the original plays instead of a fade the first time the stage is entered.
 */
#include "gameint.h"
#include "pal.h"
#include "tables.h"

#define SHOT_FREE   (-0x10)
#define WEAPON_FREE 0x160
#define BLAST_FREE  0x160
#define PY_MAX      0x140
#define BOSS_HP     0x14
#define MAX_BLAST   4

/* DS:0x0bd6, a sine over the 352 rows of the playfield at +-127.  The stars are
 * displaced by `table[y] * layer >> 2`, so the further forward a layer is the
 * more it bends. */
static const signed char BOSS_WARP[0x160] = {
       0,    2,    4,    7,    9,   11,   13,   15,   18,   20,   22,   24,   26,   29,   31,
      33,   35,   37,   39,   41,   43,   46,   48,   50,   52,   54,   56,   58,   60,   62,
      64,   65,   67,   69,   71,   73,   75,   76,   78,   80,   82,   83,   85,   87,   88,
      90,   91,   93,   94,   96,   97,   99,  100,  101,  103,  104,  105,  107,  108,  109,
     110,  111,  112,  113,  114,  115,  116,  117,  118,  119,  119,  120,  121,  121,  122,
     123,  123,  124,  124,  125,  125,  125,  126,  126,  126,  127,  127,  127,  127,  127,
     127,  127,  127,  127,  127,  127,  126,  126,  126,  125,  125,  125,  124,  124,  123,
     123,  122,  121,  121,  120,  119,  119,  118,  117,  116,  115,  114,  113,  112,  111,
     110,  109,  108,  107,  105,  104,  103,  101,  100,   99,   97,   96,   94,   93,   91,
      90,   88,   87,   85,   83,   82,   80,   78,   76,   75,   73,   71,   69,   67,   65,
      63,   62,   60,   58,   56,   54,   52,   50,   48,   46,   43,   41,   39,   37,   35,
      33,   31,   29,   26,   24,   22,   20,   18,   15,   13,   11,    9,    7,    4,    2,
       0,   -2,   -4,   -7,   -9,  -11,  -13,  -15,  -18,  -20,  -22,  -24,  -26,  -29,  -31,
     -33,  -35,  -37,  -39,  -41,  -43,  -46,  -48,  -50,  -52,  -54,  -56,  -58,  -60,  -62,
     -64,  -65,  -67,  -69,  -71,  -73,  -75,  -76,  -78,  -80,  -82,  -83,  -85,  -87,  -88,
     -90,  -91,  -93,  -94,  -96,  -97,  -99, -100, -101, -103, -104, -105, -107, -108, -109,
    -110, -111, -112, -113, -114, -115, -116, -117, -118, -119, -119, -120, -121, -121, -122,
    -123, -123, -124, -124, -125, -125, -125, -126, -126, -126, -127, -127, -127, -127, -127,
    -127, -127, -127, -127, -127, -127, -126, -126, -126, -125, -125, -125, -124, -124, -123,
    -123, -122, -121, -121, -120, -119, -119, -118, -117, -116, -115, -114, -113, -112, -111,
    -110, -109, -108, -107, -105, -104, -103, -101, -100,  -99,  -97,  -96,  -94,  -93,  -91,
     -90,  -88,  -87,  -85,  -83,  -82,  -80,  -78,  -76,  -75,  -73,  -71,  -69,  -67,  -65,
     -63,  -62,  -60,  -58,  -56,  -54,  -52,  -50,  -48,  -46,  -43,  -41,  -39,  -37,  -35,
     -33,  -31,  -29,  -26,  -24,  -22,  -20
};

/* The ending's cast list draws the snake on the same wave. */
const signed char *sd_warp_table(void)
{
    return BOSS_WARP;
}


static int which_boss(const Game *g) { return g->stage / 4; }

/* ---------------------------------------------------------------- start-up */

static void boss_start(Game *g)
{
    int b = which_boss(g), i, bos = g->base_bos;

    g->px = 0x120;
    g->py = 0x120;
    g->ent_off = -0x20;
    g->pal[0][2] = 0;                       /* space is black */
    for (i = 0; i < MAX_SHOT; i++) {
        g->shot[i].y = SHOT_FREE;
        g->shot[i].x = g->shot[i].target = g->shot[i].vx = 0;
    }
    for (i = 0; i < MAX_BULLET; i++) {
        g->bullet[i].y = BLAST_FREE;
        g->bullet[i].x = g->bullet[i].v = 0;
    }
    for (i = 0; i < MAX_MISSILE; i++) {
        g->missile[i].y = WEAPON_FREE;
        g->missile[i].x = g->missile[i].vx = 0;
        g->missile[i].vy = g->missile[i].t = 0;
    }
    for (i = 1; i < MAX_ENT; i++) {
        g->ent[i].kind = 0;
        g->ent[i].state = 10;
        g->ent[i].x = 0;
        g->ent[i].y = g->ent_off;
        g->ent[i].vx = g->ent[i].vy = g->ent[i].aux = g->ent[i].speed = 0;
    }
    g->nstar = MAX_STAR;              /* FUN_1000_5818's local_1c4[100] */
    for (i = 0; i < g->nstar; i++) {
        g->star[i].x = sd_rand(g) % 0x280;
        g->star[i].y = sd_rand(g) % 0x160;
        g->star[i].colour = sd_rand(g) % 4 + 0xc;   /* the bright band only */
        g->star[i].layer = sd_rand(g) % 3 + 1;
    }

    if (b == 1) {
        /* Four tiles across, three down, coming in from the right. */
        g->ent[1].x = g->ent[3].x = g->ent[5].x = 800;
        g->ent[2].x = g->ent[4].x = g->ent[6].x = 0x360;
        g->ent[1].y = g->ent[2].y = 0;
        g->ent[3].y = g->ent[4].y = 0x20;
        g->ent[5].y = g->ent[6].y = 0x40;
        g->ent[1].kind = bos;
        g->ent[2].kind = bos + 2;
        g->ent[3].kind = bos + 8;
        g->ent[4].kind = bos + 10;
        g->ent[5].kind = bos + 0x10;
        g->ent[6].kind = bos + 0x12;
        g->ent[1].vx = -0x14;
        g->ent[1].vy = 0x14;
        g->boss_timer = 100;
    } else if (b == 2) {
        /* The head plus a tail of twelve that trails it. */
        for (i = 1; i < MAX_ENT; i++) {
            g->ent[i].x = -0xc8;
            g->ent[i].y = -0x16;
        }
        g->ent[1].aux = 200;
        g->ent[1].kind = bos + 0xc;
        g->ent[2].kind = bos + 0x14;
        g->ent[2].y = 10;
        /* The tail is not one shape repeated: 1000:1000_5818's init gives
         * slot 3 and slots 9..11 one pattern, 4..8 another and 12..14 a
         * third, which is what makes it taper. */
        g->ent[3].kind = bos + 5;
        for (i = 4; i < 9; i++)
            g->ent[i].kind = bos + 4;
        for (i = 9; i < 12; i++)
            g->ent[i].kind = bos + 5;
        for (i = 12; i < 15; i++)
            g->ent[i].kind = bos + 6;
    } else {
        /* A ship with a mouth that opens; slots 3..8 are the jaw and the
         * beam it fires. */
        g->ent[1].x = g->ent[2].x = -0x10c;
        g->ent[1].y = g->ent[3].y = g->ent[6].y = 0x84;
        g->ent[1].kind = bos + 0x21;
        g->ent[1].vx = 0x10;
        g->ent[1].aux = 0;
        g->ent[1].speed = 0;
        g->ent[1].vy = 0;
        g->ent[2].y = g->ent[4].y = g->ent[7].y = 0xa4;
        g->ent[2].kind = bos + 0x29;
        g->ent[3].x = g->ent[4].x = -0x12c;
        g->boss_timer = 100;
        g->ent[5].y = 100;
        g->ent[3].kind = bos + 0x18;
        g->ent[8].y = 0xc4;
        g->ent[4].kind = bos + 0x30;
        g->ent[5].x = g->ent[6].x = g->ent[7].x = g->ent[8].x = -0xec;
        g->ent[5].kind = bos + 0x1a;
        g->ent[6].kind = bos + 0x22;
        g->ent[7].kind = bos + 0x2a;
        g->ent[8].kind = bos + 0x32;
    }
    if (g->speed < 6)
        g->speed = 6;
    if (g->boss_weak)                       /* DS:0x181a, the -B switch */
        g->boss_hits = BOSS_HP - 1;
    /* There is no roster out here, so nothing can meet a quota: the exit is
     * the boss's death, and game.c's test is satisfied by leaving both at 0. */
    g->quota = 0;
    g->alive = 1;
}

/* ------------------------------------------------------------------ player */

static void boss_move(Game *g)
{
    g->pvx = 0;
    g->pvy = 0;
    if ((g->pad & PAD_DOWN) && g->speed + g->py < PY_MAX)
        g->pvy = g->speed;
    if ((g->pad & PAD_UP) && g->py - g->speed >= 0)
        g->pvy = -g->speed;
    if ((g->pad & PAD_RIGHT) && g->speed + g->px < 0x210)
        g->pvx = g->speed;
    if ((g->pad & PAD_LEFT) && g->px - g->speed > 0x2f)
        g->pvx = -g->speed;
}

static int free_shot(Game *g)
{
    int i;

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y < SHOT_FREE + 1)
            return i;
    return -1;
}

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

static void boss_fire(Game *g, int which)
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
    sd_sfx(g, SFX_BOSS);
}

/* ------------------------------------------------------- the boss's weapons */

static int free_missile(Game *g)
{
    int i, slot = -1;

    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y > WEAPON_FREE - 1)
            slot = i;
    return slot;
}

/* Bosses 1 and 2 throw a shot that homes for a while and then flies straight.
 * `aim` is non-zero for the version that is aimed as it leaves. */
static void throw_shot(Game *g, int x, int y, int timer, int aim)
{
    int s = free_missile(g);
    int off;

    if (s < 0)
        return;
    g->missile[s].y = y;
    g->missile[s].x = x;
    g->missile[s].t = timer;
    g->missile[s].vx = 0;
    g->missile[s].vy = 0;
    if (aim) {
        off = 0x20 - (x - g->px);
        if (off < 0)
            off = -off;
        if (off < 0x33)
            g->missile[s].vx = sd_rand(g) % 5 - 2;
        else
            g->missile[s].vx = (sd_rand(g) % 5 + 6) * sd_sgn(g->px - x);
        off = (g->py - y) + 0x10;
        if (off < 0)
            off = -off;
        if (off < 0x33)
            g->missile[s].vy = sd_rand(g) % 5 - 2;
        else
            g->missile[s].vy = (sd_rand(g) % 5 + 6) * sd_sgn(g->py - y);
    }
    g->missiles_live++;
}

static int free_blast(Game *g)
{
    int i, slot = -1;

    for (i = 0; i < MAX_BLAST; i++)
        if (g->bullet[i].y > BLAST_FREE - 1)
            slot = i;
    return slot;
}

/* --------------------------------------------------------------- the bosses */

/* The death, which is the same for all three: everything stops, the music cuts
 * out, explosions burst over the body for forty frames, then a white flash and
 * the bonus.  game_tick ends the stage once the phase passes fifty. */
static void boss_dying(Game *g, int lo, int hi, int anchor, int xoff,
                       int spanx, int spany, int bonus)
{
    int i;
    int ax = g->ent[anchor].x, ay = g->ent[anchor].y;

    g->boss_phase++;
    if (g->boss_phase == 2 && g->snd)
        snd_stop(g->snd);
    g->ent[1].vx = g->ent[1].vy = 0;
    for (i = lo; i < MAX_ENT; i++) {
        if (g->ent[i].state < 10) {
            if (--g->ent[i].state == 0)
                g->ent[i].state = 10;
        } else if (g->boss_phase < 0x28) {
            g->ent[i].state = 9 - sd_rand(g) % 3;
            g->ent[i].x = sd_rand(g) % spanx + ax + xoff;
            g->ent[i].y = sd_rand(g) % spany + ay - 0x10;
            g->ent[i].vx = g->ent[i].vy = 0;
            sd_sfx(g, SFX_HIT);
        }
    }
    if (g->boss_phase == 0x28) {
        for (i = 1; i <= hi; i++) {
            g->ent[lo - 1 + i].x = g->ent[i].x;
            g->ent[lo - 1 + i].y = g->ent[i].y;
            g->ent[lo - 1 + i].state = 9;
        }
        g->score += bonus;
        sd_hud_score(g);
        sd_sfx(g, SFX_HIT);
        g->state = GS_FLASH_UP;      /* 83b5 then 8425, the white flash */
        g->fade_step = 0;
        g->fade_ticks = 0;
    }
}

/* Boss 1: sweeps between x 0x1d2 and 0x2e, bouncing off the top and bottom, and
 * every so often spits four fat shots forward or backward depending on which
 * way it is travelling. */
static void boss1(Game *g)
{
    Ent *b = &g->ent[1];
    int i;

    if (g->boss_hits >= BOSS_HP) {
        /* slots 7..15 scatter round slot 1; slots 7..12 take the body's
         * places at the end.  DS:0x02ec is the bonus. */
        boss_dying(g, 7, 6, 1, -0x10, 0x80, 0x60, SD_SCORE[4][2]);
        return;
    }
    g->boss_timer++;
    if (g->ent[7].state < 10 && --g->ent[7].state == 0)
        g->ent[7].state = 10;

    if (g->boss_hits < 0xc) {
        /* Still fresh: run to one end, pause, run to the other. */
        if (g->boss_phase == 0 && g->boss_timer > 100 && g->boss_blasts == 0) {
            b->vx = sd_sgn(0x1d2 - b->x) * 0xe;
            if (b->vy != 0)
                b->vy -= sd_sgn(b->vy);
            if (b->vx + b->x - 0x1d2 < 9 && b->vx + b->x - 0x1d2 > -9) {
                g->boss_phase = 1;
                b->vy = (sd_rand(g) % 2) * 0x10 - 8;
                g->boss_timer = 0;
                b->vx = 0;
            }
        }
        if (g->boss_phase == 1 && g->boss_timer > 100 && g->boss_blasts == 0) {
            b->vx = sd_sgn(0x2e - b->x) * 0xe;
            if (b->vy != 0)
                b->vy -= sd_sgn(b->vy);
            if (b->vx + b->x - 0x2e < 9 && b->vx + b->x - 0x2e > -9) {
                b->vy = (sd_rand(g) % 2) * 0x10 - 8;
                g->boss_phase = 0;
                g->boss_timer = 0;
                b->vx = 0;
            }
        }
        if (g->boss_timer < 0x65) {
            b->vx = 0;
            if (sd_rand(g) % 10 == 0 && g->boss_blasts == 0) {
                /* Four shots at once, out of the side it is facing. */
                if (g->boss_phase == 0) {
                    g->bullet[0].x = g->bullet[3].x = b->x + 0x50;
                    g->bullet[1].x = g->bullet[2].x = b->x + 0x68;
                    for (i = 0; i < MAX_BLAST; i++)
                        g->bullet[i].v = 0x10;
                } else {
                    g->bullet[0].x = g->bullet[3].x = b->x + 0x10;
                    g->bullet[1].x = g->bullet[2].x = b->x - 8;
                    for (i = 0; i < MAX_BLAST; i++)
                        g->bullet[i].v = -0x10;
                }
                g->bullet[0].y = b->y + 6;
                g->bullet[1].y = b->y + 0x18;
                g->bullet[2].y = b->y + 0x39;
                g->bullet[3].y = b->y + 0x4b;
                g->boss_blasts = 4;
            }
        }
        if (b->vy + b->y < 1 || b->vy + b->y > 0xff)
            b->vy = -b->vy;
    } else {
        /* Hurt: it chases the ship. */
        int d = (g->px - b->x) + 0x20;

        if (d > 0x32 || d < -0x32)
            b->vx += ((g->px - b->x == -0x20) ? 0 : (d < 1 ? -1 : 1)) * g->page;
        d = (g->py - b->y) + 0x20;
        if (d > 0x32 || d < -0x32)
            b->vy += ((g->py - b->y == -0x20) ? 0 : (d < 1 ? -1 : 1)) * g->page;
        if (b->x < 0x21 || b->x > 0x1df)
            b->vx += sd_sgn(0x100 - b->x) * 2;
        if (b->y < 1 || b->y > 0xff)
            b->vy += sd_sgn(0x80 - b->y) * 2;
        if (b->vx > 8 || b->vx < -8)
            b->vx = sd_sgn(b->vx) * 8;
        if (b->vy > 8 || b->vy < -8)
            b->vy = sd_sgn(b->vy) * 8;
        if (g->pal_c == 0 && sd_rand(g) % 2 == 0 && g->missiles_live < 0x10 &&
            b->x > 0 && b->x < 0x201) {
            int y = (sd_rand(g) % 2) * 0x18 + b->y + 0x20;
            int x = (sd_rand(g) % 2) * 0x38 + b->x + 0x20;

            throw_shot(g, x, y, 0, 1);
        }
    }
}

/* Boss 2: a head with a tail of segments that each take the position the one in
 * front had a frame ago.  Once hurt it charges across the screen. */
static void boss2(Game *g)
{
    Ent *b = &g->ent[1];
    int i;

    if (g->boss_hits >= BOSS_HP) {
        /* Its death runs down the tail, a segment at a time. */
        if (b->vx != 0)
            g->ent[2].vx = b->vx;
        b->vy = 0;
        b->vx = 0;
        for (i = 1; i < 15; i++)
            if (g->ent[i].state < 10 && --g->ent[i].state < 1)
                g->ent[i].state = 0;
        if (g->page == 0) {
            g->boss_phase++;
            if (g->boss_phase < 0xd) {
                g->ent[15 - g->boss_phase].state = 9;
                sd_sfx(g, SFX_HIT);
            }
        }
        if (g->boss_phase == 0xc) {
            g->ent[1].state = g->ent[2].state = 9;
            g->score += SD_SCORE[4][6];
            sd_hud_score(g);
            if (g->snd)
                snd_stop(g->snd);
            sd_sfx(g, SFX_HIT);
            g->state = GS_FLASH_UP;
            g->fade_step = 0;
            g->fade_ticks = 0;
            g->boss_phase = 0x30;
        }
        return;
    }
    /* DS:0x1fc8 - slot 15.  The tail runs 3..14, so the spark has the one
     * slot above it to itself. */
    if (g->ent[15].state < 10 && --g->ent[15].state == 0)
        g->ent[15].state = 10;

    if (g->boss_hits < 0xe) {
        /* Circling: it drifts toward the middle and lobs a fat shot. */
        int d = 0x120 - b->x;

        if ((d > 200 || d < -200) && b->x != 0x120)
            b->vx += (d < 1) ? -1 : 1;
        d = 0x90 - b->y;
        if (d > 100 || d < -100)
            b->vy += ((b->y == 0x90) ? 0 : (d < 1 ? -1 : 1)) * 2;
        if (b->vx > 6 || b->vx < -6)
            b->vx = sd_sgn(b->vx) * 6;
        if (b->vy > 0x14 || b->vy < -0x14)
            b->vy = sd_sgn(b->vy) * 0x14;
        if (g->page + g->pal_a == 0 && g->boss_blasts < 4 &&
            b->x > 0 && b->x < 0x201 && b->y > 0 && b->y < 0x160) {
            int s = free_blast(g);

            if (s >= 0) {
                g->bullet[s].y = b->y + 0x1c;
                g->bullet[s].x = b->x + 0x10;
                g->bullet[s].v = (b->vx > 0) ? 0x14 : -0x14;
                g->boss_blasts++;
            }
        }
    } else {
        /* Hurt: it charges, turning round at the far side. */
        int d = 0x120 - b->x;
        int ad = d < 0 ? -d : d;

        if (ad < 0x187) {
            b->vx = (b->vx > 0) ? 0x16 : -0x16;
        } else {
            b->vx += ((b->x == 0x120) ? 0 : (d < 1 ? -1 : 1)) * 2;
            b->vy = 0;
            b->aux = sd_rand(g) % 0x160 - 0x20;
        }
        b->vy += ((b->aux == b->y) ? 0 : (b->aux < b->y ? -1 : 1)) * 2;
        if (b->vy > 4 || b->vy < -4)
            b->vy = sd_sgn(b->vy) * 4;
        if (g->page + g->pal_a == 0 && g->missiles_live < 0x10 &&
            b->x > 0 && b->x < 0x201)
            throw_shot(g, b->x + 0x10, b->y + 0x1c, 0, 1);
    }
}

/* Boss 3: hangs at the right and opens its mouth to fire a beam. */
static void boss3(Game *g)
{
    Ent *b = &g->ent[1];

    if (g->boss_hits >= BOSS_HP) {
        /* This one scatters round slot 3 - the jaw - and to its right
         * (+0x10, not -0x10), and pays DS:0x02f4, not 0x02f0. */
        boss_dying(g, 9, 6, 3, 0x10, 0x60, 0x80, SD_SCORE[4][6]);
        return;
    }
    if (g->ent[9].state < 10 && --g->ent[9].state == 0)
        g->ent[9].state = 10;

    if (g->boss_phase == 0) {
        /* Coming in. */
        b->vx = sd_sgn(0x1f2 - b->x) * 10;
        if (b->vy != 0)
            b->vy -= sd_sgn(b->vy);
        if (b->vx + b->x - 0x1d2 < 9 && b->vx + b->x - 0x1d2 > -9) {
            g->boss_phase = 1;
            b->vy = -2;
            b->vx = 0;
        }
    } else {
        if (g->boss_timer < 0xa2)
            g->boss_timer++;
        if (g->boss_timer == 0xa2) {
            g->boss_timer = 0;
            b->speed = 2;                  /* how fast the jaw closes */
        }
        if (g->boss_timer < 0x31) {
            if (g->boss_timer == 0x10) {
                b->speed = 0;
                b->vy = 0;
                if (g->boss_blasts == 0) {
                    /* The beam: two rows of tiles that reach left. */
                    g->bullet[0].x = g->bullet[2].x = g->ent[3].x;
                    g->bullet[1].x = g->bullet[3].x = g->ent[3].x + 0x20;
                    g->bullet[0].y = g->bullet[1].y = g->ent[3].y + 8;
                    g->bullet[2].y = g->bullet[3].y = g->ent[4].y + 8;
                    g->bullet[0].v = g->bullet[1].v = -0x10;
                    g->bullet[2].v = g->bullet[3].v = -0x10;
                    g->boss_blasts = 2;
                }
            }
            if (g->boss_timer == 0x20) {
                b->speed = -2;
                b->vy = (sd_rand(g) % 2) * 4 - 2;
                if (g->boss_hits > 9) {
                    g->boss_timer = 0xa4;   /* hurt: it stops opening up */
                    b->speed = 0;
                    b->vy <<= 2;
                }
            }
            if (g->boss_timer == 0x30)
                b->speed = 0;
            g->ent[3].y -= b->speed;
            g->ent[4].y += b->speed;
        }
    }
    if (b->vy + b->y < 0x21 || b->vy + b->y > 0xff)
        b->vy = -b->vy;
    if (g->page + g->pal_a == 0 && g->missiles_live < 0x10) {
        int period = (g->boss_timer == 0xa4) ? 3 : 4;

        if (sd_rand(g) % period == 0 && b->x > 0 && b->x < 0x201)
            throw_shot(g, b->x + 0x10, b->y + 0x1c,
                       /* (-(timer == 0xa4) & 0x1e) + 0x1e */
                       (g->boss_timer == 0xa4) ? 0x3c : 0x1e, 0);
    }
}

static void boss_enemy(Game *g, int idx)
{
    if (idx != 1)
        return;                    /* the boss is one body, driven once */
    switch (which_boss(g)) {
    case 1: boss1(g); break;
    case 2: boss2(g); break;
    default: boss3(g); break;
    }
    /* The stage ends when the death has finished burning. */
    g->alive = (g->boss_phase > 0x32) ? 0 : 1;
}

/* ------------------------------------------------------- shots and weapons */

/* The weak spot: a band across the middle of the body.  Anything else the shot
 * hits is simply absorbed. */
static void hit_boss(Game *g, Shot *s)
{
    Ent *b = &g->ent[1];

    switch (which_boss(g)) {
    case 1:
        if (b->x <= s->x && s->x <= b->x + 0x70 &&
            b->y - 8 <= s->y && s->y <= b->y + 0x58) {
            if (b->y + 0x1c <= s->y && s->y <= b->y + 0x34) {
                sd_sfx(g, SFX_KILL);
                g->ent[7].state = 9;
                g->ent[7].x = s->x - 8;
                g->ent[7].y = s->y - 8;
                g->boss_hits++;
                g->score += SD_SCORE[4][1];
                sd_hud_score(g);
            }
            s->y = SHOT_FREE;
        }
        break;
    case 2: {
        int i;

        if (b->x - 6 <= s->x && s->x <= b->x + 0x36 &&
            b->y + 2 <= s->y && s->y <= b->y + 0x2e) {
            sd_sfx(g, SFX_KILL);
            /* DS:0x1fc8 / 0x1fe8 / 0x1fa8 - slot 15, not the last tail
             * segment. */
            g->ent[15].state = 9;
            g->ent[15].x = s->x - 8;
            g->ent[15].y = s->y - 8;
            g->boss_hits++;
            g->score += SD_SCORE[4][3];
            sd_hud_score(g);
            s->y = SHOT_FREE;
        }
        for (i = 3; i < 15; i++)
            if (g->ent[i].x - 0xc <= s->x && s->x <= g->ent[i].x + 0x1c &&
                g->ent[i].y - 4 <= s->y && s->y <= g->ent[i].y + 0x1c)
                s->y = SHOT_FREE;
        break;
    }
    default: {
        int i;

        if (b->x + 10 <= s->x && s->x <= b->x + 0x16 &&
            b->y - 8 <= s->y && s->y <= b->y + 0x38) {
            if (b->y + 0xe <= s->y && s->y <= b->y + 0x22) {
                sd_sfx(g, SFX_KILL);
                /* DS:0x1fbc / 0x1fdc / 0x1f9c - slot 9.  Slots 1..8 are the
                 * body; the draw already looks for the spark from 9 up. */
                g->ent[9].state = 9;
                g->ent[9].x = s->x - 8;
                g->ent[9].y = s->y - 8;
                g->boss_hits++;
                g->score += SD_SCORE[4][5];
                sd_hud_score(g);
            }
            s->y = SHOT_FREE;
        }
        if (g->ent[5].x - 8 <= s->x && s->x <= g->ent[5].x + 0x46 &&
            g->ent[5].y - 8 <= s->y && s->y <= g->ent[5].y + 0x78)
            s->y = SHOT_FREE;
        for (i = 3; i < 5; i++)
            if (g->ent[i].x - 6 <= s->x && s->x <= g->ent[i].x + 0x38 &&
                g->ent[i].y - 8 <= s->y && s->y <= g->ent[i].y + 0x18)
                s->y = SHOT_FREE;
        break;
    }
    }
}

static void boss_shots(Game *g)
{
    int i;

    if (g->boss_phase > 0x32)
        return;
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++) {
        Shot *s = &g->shot[i];

        if (s->y < SHOT_FREE + 1)
            continue;
        s->x += s->target;
        s->y += s->vx * (g->ship + 2) * 2;
        if (g->boss_hits < BOSS_HP)
            hit_boss(g, s);
        if (s->x < 0 || s->x > 0x26f || s->y > 0x15f)
            s->y = SHOT_FREE;
    }
    g->shots_live = 0;
    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y >= SHOT_FREE + 1)
            g->shots_live++;
}

static void boss_weapons(Game *g)
{
    int i;
    int b = which_boss(g);
    Ent *body = &g->ent[1];

    /* The homing shots.  They steer while their timer lasts and then coast. */
    for (i = 0; i < MAX_MISSILE; i++) {
        Missile *m = &g->missile[i];

        if (m->y < 0)
            m->y = WEAPON_FREE;
        if (m->y >= WEAPON_FREE)
            continue;
        if (m->t > 0) {
            int d;

            m->t--;
            d = g->px - m->x;
            m->vx += g->page * ((d == -0x20) ? 0 : (d + 0x20 < 0 ? -1 : 1));
            d = g->py - m->y;
            m->vy += g->page * ((d == -0x10) ? 0 : (d + 0x10 < 0 ? -1 : 1));
            if (m->vx > 8 || m->vx < -8)
                m->vx = sd_sgn(m->vx) * 8;
            if (m->vy > 8 || m->vy < -8)
                m->vy = sd_sgn(m->vy) * 8;
        }
        m->x += m->vx;
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

    /* The fat shots, and boss 3's beam, which is two of them stretched. */
    if (g->boss_blasts > 0) {
        if (b == 3) {
            for (i = 0; i < 3; i += 2) {
                if (g->bullet[i].y >= BLAST_FREE)
                    continue;
                g->bullet[i].x += g->bullet[i].v;
                if (g->bullet[i + 1].x - g->bullet[i].x > 0xa0 ||
                    g->bullet[i].x < 0xa0)
                    g->bullet[i + 1].x += g->bullet[i].v;
                if (g->bullet[i + 1].x < 0x10) {
                    g->bullet[i].y = BLAST_FREE;
                    g->boss_blasts--;
                    continue;
                }
                if (g->bullet[i].x < 0x10)
                    g->bullet[i].x = 0;
                if (g->pstate == 10 && g->px - 4 <= g->bullet[i + 1].x &&
                    g->bullet[i].x <= g->px + 0x34 &&
                    g->py + 6 <= g->bullet[i].y && g->bullet[i].y <= g->py + 0x1a)
                    sd_hit_player(g);
            }
        } else {
            for (i = 0; i < MAX_BLAST; i++) {
                if (g->bullet[i].y >= BLAST_FREE)
                    continue;
                g->bullet[i].x += g->bullet[i].v;
                if (g->bullet[i].x < 0 || g->bullet[i].x > 0x25f) {
                    g->bullet[i].y = BLAST_FREE;
                    g->boss_blasts--;
                } else if (g->pstate == 10 && g->px - 0x14 <= g->bullet[i].x &&
                           g->bullet[i].x <= g->px + 0x34 &&
                           g->py + 6 <= g->bullet[i].y &&
                           g->bullet[i].y <= g->py + 0x1a) {
                    sd_hit_player(g);
                }
            }
        }
    }

    /* The body itself is solid. */
    if (g->pstate != 10 || g->boss_hits >= BOSS_HP)
        return;
    if (b == 1) {
        if (body->x - 0x30 < g->px && g->px < body->x + 0x70 &&
            body->y - 0x14 < g->py && g->py < body->y + 0x54)
            sd_hit_player(g);
    } else if (b == 2) {
        if (body->x - 0x30 < g->px && g->px < body->x + 0x30 &&
            body->y - 0x14 < g->py && g->py < body->y + 0x34)
            sd_hit_player(g);
        for (i = 3; i < 15; i++)
            if (g->ent[i].x - 0x30 <= g->px && g->px <= g->ent[i].x + 0x10 &&
                g->ent[i].y - 0x14 <= g->py && g->py <= g->ent[i].y + 0x14)
                sd_hit_player(g);
    } else {
        if (g->ent[5].x - 0x30 < g->px && g->px < g->ent[5].x + 0x30 &&
            g->ent[5].y - 0x14 < g->py && g->py < g->ent[5].y + 0x74)
            sd_hit_player(g);
        if (body->x - 0x30 <= g->px && g->px <= body->x + 0x10 &&
            body->y - 0x14 <= g->py && g->py <= body->y + 0x34)
            sd_hit_player(g);
        for (i = 3; i < 5; i++)
            if (g->ent[i].x - 0x30 < g->px && g->px < g->ent[i].x + 0x30 &&
                g->ent[i].y - 0x14 < g->py && g->py < g->ent[i].y + 0x14)
                sd_hit_player(g);
    }
}

/* There are no items on a boss stage - nothing here drops one. */
static void boss_item(Game *g) { (void)g; }

static void boss_clear_shots(Game *g)
{
    int i;

    for (i = 0; i < MAX_SHOT; i++)
        g->shot[i].y = SHOT_FREE;
    for (i = 0; i < MAX_MISSILE; i++)
        g->missile[i].y = WEAPON_FREE;
    g->shots_live = g->missiles_live = 0;
}

/* The whole body moves by slot 1's velocity; the stars fall and wrap. */
static void boss_motion(Game *g)
{
    int i, b = which_boss(g);
    int vx = g->ent[1].vx, vy = g->ent[1].vy;

    g->px += g->pvx;
    g->py += g->pvy;
    if (b == 2) {
        /* The tail takes the positions of the segment in front of it - but
         * only while the boss is alive; the original does this inside the
         * `still alive` half of its draw, so a dying one freezes in place
         * instead of collapsing into its own head. */
        if (g->boss_hits < BOSS_HP) {
            for (i = MAX_ENT - 2; i >= 4; i--) {
                g->ent[i].x = g->ent[i - 1].x;
                g->ent[i].y = g->ent[i - 1].y;
            }
            g->ent[3].x = vx + g->ent[1].x + 0x10;
            g->ent[3].y = vy + g->ent[1].y + 0x14;
        }
        for (i = 1; i < 3; i++) {
            g->ent[i].x += vx;
            g->ent[i].y += vy;
        }
    } else if (b == 1) {
        for (i = 1; i < 7; i++) {
            g->ent[i].x += vx;
            g->ent[i].y += vy;
        }
    } else {
        for (i = 1; i < 9; i++) {
            g->ent[i].x += vx;
            g->ent[i].y += vy;
        }
    }
    for (i = 0; i < g->nstar; i++) {
        g->star[i].y += 5;
        if (g->star[i].y > 0x160)
            g->star[i].y -= 0x160;
        if (g->star[i].x < 0)
            g->star[i].x += 0x280;
        if (g->star[i].x > 0x27f)
            g->star[i].x -= 0x280;
    }
}

/* -------------------------------------------------------------------- draw */

static void draw_part(Game *g, int i, int pair, int bias)
{
    Ent *e = &g->ent[i];

    if (e->y <= -0x20 || e->y >= 0x160 || e->x < -0x20 || e->x >= 0x260)
        return;
    if (pair)
        sd_pat_pair(g, e->x, e->y, e->kind + bias, e->kind + bias + 1);
    else
        scr_pat(g->scr, e->x, e->y, e->kind);
}

static void boss_draw(Game *g)
{
    int i, b = which_boss(g), bos = g->base_c16;

    sd_fill(g, 4, 0, 0x4b, 0x15f, 0);
    for (i = 0; i < g->nstar; i++) {
        int y = g->star[i].y;
        int x;

        if (y < 0 || y >= 0x160)
            continue;
        x = g->star[i].x + ((BOSS_WARP[y] * g->star[i].layer) >> 2);
        while (x < 0)
            x += 0x280;
        while (x > 0x27f)
            x -= 0x280;
        if (x >= 32 && x < 608)
            g->scr->px[(long)y * SCR_W + x] = (unsigned char)g->star[i].colour;
    }

    /* The fat shots are 32x16 pairs out of depth.c16; boss 3's beam repeats a
     * middle tile between its two ends. */
    if (b == 3) {
        for (i = 0; i < 3; i += 2)
            if (g->bullet[i].y < BLAST_FREE) {
                int x;

                scr_pat(g->scr, g->bullet[i].x, g->bullet[i].y, bos + 0x36);
                scr_pat(g->scr, g->bullet[i + 1].x, g->bullet[i + 1].y,
                        bos + 0x37);
                for (x = g->bullet[i].x + 0x10; x < g->bullet[i + 1].x;
                     x += 0x10)
                    scr_pat(g->scr, x, g->bullet[i].y, bos + 0x5c);
            }
    } else {
        for (i = 0; i < MAX_BLAST; i++)
            if (g->bullet[i].y < BLAST_FREE) {
                int f = (b == 2 && g->bullet[i].v > 0) ? 2 : 0;
                int p = (b == 2) ? bos + 0x30 + f : bos + 0x34;

                scr_pat(g->scr, g->bullet[i].x, g->bullet[i].y, p);
                scr_pat(g->scr, g->bullet[i].x + 0x10, g->bullet[i].y, p + 1);
            }
    }

    if (b == 1) {
        if (g->boss_phase < 0x28)
            for (i = 1; i < 7; i++)
                draw_part(g, i, 1, 0);
        for (i = 7; i < MAX_ENT; i++)
            if (g->ent[i].state < 10)
                sd_explosion(g, g->ent[i].x, g->ent[i].y, g->ent[i].state,
                             g->boss_phase < 0x28);
    } else if (b == 2) {
        for (i = MAX_ENT - 2; i >= 3; i--)
            if (g->ent[i].state < 10) {
                if (g->ent[i].state > 0)
                    sd_explosion(g, g->ent[i].x, g->ent[i].y, g->ent[i].state, 1);
            } else {
                draw_part(g, i, 0, 0);
            }
        for (i = 1; i < 3; i++)
            if (g->ent[i].state < 10) {
                if (g->ent[i].state > 0)
                    sd_explosion(g, g->ent[i].x, g->ent[i].y, g->ent[i].state, 0);
            } else {
                draw_part(g, i, 1, (g->ent[1].vx > 0) ? 2 : 0);
            }
        /* The spark rides along with the head while it burns, and is only
         * drawn while it is on screen. */
        if (g->ent[15].state < 10) {
            g->ent[15].x += g->ent[1].vx;
            g->ent[15].y += g->ent[1].vy;
            if (g->ent[15].y > -0x20 && g->ent[15].y < 0x160 &&
                g->ent[15].x > 0 && g->ent[15].x < 0x260)
                sd_explosion(g, g->ent[15].x, g->ent[15].y,
                             g->ent[15].state, 1);
        }
    } else {
        if (g->boss_phase < 0x28) {
            for (i = 1; i < 3; i++)
                draw_part(g, i, 0, 0);
            for (i = 3; i < 9; i++)
                draw_part(g, i, 1, 0);
        }
        for (i = 9; i < MAX_ENT; i++)
            if (g->ent[i].state < 10)
                sd_explosion(g, g->ent[i].x, g->ent[i].y, g->ent[i].state,
                             g->boss_phase < 0x28);
    }

    for (i = 0; i < g->shot_max && i < MAX_SHOT; i++)
        if (g->shot[i].y >= SHOT_FREE + 1)
            scr_pat(g->scr, g->shot[i].x, g->shot[i].y,
                    g->base_c16 + 0x14 + g->ship * 0x10 +
                    (g->shot[i].target > 0 ? 3 : 0) + g->shot[i].vx);
    for (i = 0; i < MAX_MISSILE; i++)
        if (g->missile[i].y < WEAPON_FREE && g->missile[i].y >= 0)
            scr_pat(g->scr, g->missile[i].x, g->missile[i].y,
                    g->base_c08 + g->page + (b - 1) * 2);

    if (g->pstate < 10)
        sd_explosion(g, g->px, g->py, g->pstate, 0);
    else
        sd_pat_pair(g, g->px, g->py, g->base_c32 + 0x28, g->base_c32 + 0x29);
}

static void boss_radar(Game *g)
{
    int i;

    switch (which_boss(g)) {
    case 1:
        for (i = 1; i < 6; i += 2)
            if (g->ent[i].y >= 0 && g->ent[i].y < 0x161)
                sd_radar(g, g->ent[i].x, g->ent[i].y, 0xf, 2);
        break;
    case 2:
        for (i = 1; i < 3; i++)
            if (g->ent[i].y >= 0 && g->ent[i].y < 0x161)
                sd_radar(g, g->ent[i].x, g->ent[i].y, 7, 6);
        for (i = 3; i < 15; i++)
            if (g->ent[i].y >= 0 && g->ent[i].y < 0x161)
                sd_radar(g, g->ent[i].x, g->ent[i].y, 3, 6);
        break;
    default:
        for (i = 1; i < 3; i++)
            if (g->ent[i].y >= 0 && g->ent[i].y < 0x161)
                sd_radar(g, g->ent[i].x, g->ent[i].y, 0xb, 5);
        for (i = 3; i < 6; i++)
            if (g->ent[i].y >= 0 && g->ent[i].y < 0x161)
                sd_radar(g, g->ent[i].x, g->ent[i].y, 7, 5);
        if (g->ent[8].y >= 0 && g->ent[8].y < 0x161)
            sd_radar(g, g->ent[8].x, g->ent[8].y, 7, 5);
        break;
    }
    sd_radar(g, g->px, g->py, 7, 0xf);
}

static const Stage BOSS = {
    4, boss_start, boss_enemy, boss_move, boss_fire, boss_shots, boss_weapons,
    boss_item, boss_clear_shots, boss_motion, boss_draw, boss_radar, 0, 0
};

const Stage *stage_boss(void) { return &BOSS; }
