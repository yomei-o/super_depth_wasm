/* Super Depth's game logic, as far as it has been read out of DEPTH.EXE.
 *
 * The numbers here are the original's, taken from FUN_1000_06f6 (the type-1
 * stage) unless a comment says otherwise.  Where behaviour has not been read
 * yet it is left out rather than guessed at.
 */
#include "game.h"
#include "pal.h"
#include <string.h>

/* Screen bands, from the type-1 stage's opening draw:
 *
 *   FUN_1000_b854(4, 0, 0x4b, 0x28, 5)     a filled box in BYTE columns 4..75,
 *                                          rows 0..40, colour 5 - the sky
 *   FUN_1000_c25e(col*16, 0x140, base+0x40)  the sea floor, two 16px rows
 *   FUN_1000_c25e(col*16, 0x150, base+0x41)  across all 40 columns
 *
 * so the sky is the top 40 rows, the sea is everything below it, and the floor
 * sits at y = 320..352.  The player rides the surface at y = 16.
 *
 * FUN_1000_c25e is NOT a sprite draw: it takes a pattern number but uses only
 * its size, setting the VRAM address to y * 0x50 + (x >> 3) and the row advance
 * to 0x50 - size, then writing through the GRCG whose tile registers hold a flat
 * colour (port 0x7c selects the plane mask, 0x7e loads the tiles).  So it fills
 * a rectangle the size of the named pattern.  The pattern it names here happens
 * to be the first 16x16 one, a depth charge - only its 16x16 extent matters.
 *
 * TODO: the exact colour those GRCG passes produce has not been pinned down; the
 * placeholder below is a dark grey.  Reading FUN_1000_c312 will settle it.
 */
#define FLOOR_COL 10
#define SKY_H     0x28      /* 40 */
#define FLOOR_Y   0x140     /* 320 */
#define SKY_COL   5

/* The player's limits, from the movement test in FUN_1000_06f6:
 *   right while  speed + x < 0x210
 *   left  while  0x2f < x - speed
 */
#define PX_MIN 0x30
#define PX_MAX 0x210

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
    g->lives = 3;                   /* main sets DS:0x1842 = 3 before the menu */
    scr_palette(scr, SD_PAL_GAME);
    game_stage_start(g, 1);
}

void game_stage_start(Game *g, int stage)
{
    int i;

    g->stage = stage;
    g->type = ((stage - 1) % 4) + 1;
    g->frame = 0;

    /* FUN_1000_06f6's opening block. */
    g->px = 0x120;
    g->py = 0x10;
    g->pvx = 0;
    g->speed = 4;                   /* DS:0x1d4a */
    g->shot_max = 4;                /* DS:0x1d48 */
    g->power = 0;                   /* DS:0x20c6 */
    g->ship = 0;                    /* DS:0x181e */
    g->trig = 1;
    g->shots_live = 0;
    for (i = 0; i < MAX_SHOT; i++) {
        g->shot[i].y = 0x130;       /* the free marker the original uses */
        g->shot[i].x = g->shot[i].oldx = 0;
        g->shot[i].vx = 0;
    }
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
    g->shot[slot].x = g->shot[slot].oldx = g->px + dx;
    g->shot[slot].vx = g->power * spread;   /* the original: power * -7 or * 7 */
    g->shots_live++;
    g->trig = 0;
}

static void update_player(Game *g)
{
    unsigned newpad;

    g->pvx = 0;
    if ((g->pad & PAD_RIGHT) && g->speed + g->px < PX_MAX)
        g->pvx = g->speed;
    if ((g->pad & PAD_LEFT) && PX_MIN - 1 < g->px - g->speed)
        g->pvx = -g->speed;
    g->px += g->pvx;

    /* Two launchers, left and right of the hull.  The original offsets them by
     * -0x10 and +0x40 and gives them opposite spread. */
    newpad = g->pad;
    if (newpad & PAD_A)
        fire(g, -0x10, -7);
    if (newpad & PAD_B)
        fire(g, 0x40, 7);
    if (!(newpad & (PAD_A | PAD_B)))
        g->trig = 1;
}

static void update_shots(Game *g)
{
    int i;

    g->shots_live = 0;
    for (i = 0; i < MAX_SHOT; i++) {
        Shot *s = &g->shot[i];

        if (s->y > 0x12f)
            continue;
        g->shots_live++;
        s->oldx = s->x;
        s->x += s->vx;
        s->y += 4;
        if (s->y > 0x12f || s->x < -32 || s->x > SCR_W)
            s->y = 0x130;
    }
}

/* -------------------------------------------------------------------- draw */

static void draw_background(Game *g)
{
    int col, y, x;

    /* the sea */
    scr_clear(g->scr, 0);

    /* the sky band: FUN_1000_b854 works in byte columns, 4..75 inclusive */
    for (y = 0; y < SKY_H; y++) {
        unsigned char *row = g->scr->px + (long)y * SCR_W;

        for (x = 4 * 8; x < 76 * 8; x++)
            row[x] = SKY_COL;
    }

    /* the sea floor: 40 columns of 16x16 filled blocks, two rows deep */
    (void)col;
    for (y = FLOOR_Y; y < FLOOR_Y + 32; y++) {
        unsigned char *row = g->scr->px + (long)y * SCR_W;

        for (x = 0; x < SCR_W; x++)
            row[x] = FLOOR_COL;
    }
}

static void draw_player(Game *g)
{
    /* Two 32x32 patterns side by side; the ship variant is 3 patterns apart. */
    int p = g->base_c32 + g->ship * 3;

    scr_pat(g->scr, g->px, g->py, p);
    scr_pat(g->scr, g->px + 0x20, g->py, p + 1);
}

/* FUN_1000_06f6 draws one icon per depth charge you may have in flight, marching
 * right from (0x28 - DS:0x1d48) * 8 at y = 6 in steps of 0x10:
 *
 *   FUN_1000_bfd6(x, 6, *(int *)0x181e * 3 + *(int *)0x1d42)
 *
 * Read literally that is a c32 pattern - a 32x32 half-ship - which would have
 * the four icons overlapping.  Two things say it means the 16x16 depth charges
 * instead: the 0x10 spacing, and the stride of 3, which is exactly how the
 * charges are laid out (c16 0..2 blue, 3..5 red, 6..8 green).  The code reaches
 * c16 patterns as `c32 base + 0x40 + n` everywhere else, so a folded constant
 * would explain the missing 0x40.  Drawing the charges; flagged because it is
 * the one place the reading is inferred rather than read.
 */
static void draw_ammo(Game *g)
{
    int x = (0x28 - g->shot_max) * 8, i;

    for (i = 0; i < g->shot_max; i++) {
        scr_pat(g->scr, x, 6, g->base_c16 + g->ship * 3);
        x += 0x10;
    }
}

static void draw_shots(Game *g)
{
    int i;

    for (i = 0; i < MAX_SHOT; i++)
        if (g->shot[i].y <= 0x12f)
            /* The charge in flight, same colour as the ammo icons. */
            scr_pat(g->scr, g->shot[i].x, g->shot[i].y, g->base_c16 + g->ship * 3);
}

void game_tick(Game *g)
{
    g->frame++;
    update_player(g);
    update_shots(g);

    draw_background(g);
    draw_ammo(g);
    draw_shots(g);
    draw_player(g);

    g->padprev = g->pad;
}
