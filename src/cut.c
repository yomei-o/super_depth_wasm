/* What happens between the stages - FUN_1000_908c, _91fe and _9568.
 *
 * The original plays one of these instead of a fade the first time a stage of
 * type 2, 3 or 4 is entered, which is why those stages do not call
 * FUN_1000_82d7 on a fresh entry the way SEA does.
 *
 *   SEA -> SKY    FUN_1000_908c   the ship lifts out of the water, song 9
 *   SKY -> SPACE  FUN_1000_91fe   it climbs out of the atmosphere, song 10
 *   SPACE -> BOSS FUN_1000_9568   the alarm, song 15, four flashes
 *
 * The first of the three is the awkward one: it does not redraw, it uses the
 * GDC's split-screen scroll (FUN_1000_b490 writes the display start line to
 * ports 0xa0/0xa2), painting four fresh pixel rows at the top of VRAM each
 * frame while the start line walks down.  There is nowhere in this port for a
 * scroll register, so it keeps a second screen as the VRAM and copies rows out
 * of it with the wrap applied, which is the same picture by another route.
 */
#include "gameint.h"
#include "pal.h"
#include <stdlib.h>
#include <string.h>

/* FUN_1000_908c: the start line walks from 399 down to 0x80, four at a time. */
#define LIFT_TOP   0x80
#define LIFT_STEP  4
/* FUN_1000_91fe: 0 to 0x420 in steps of 0x10. */
#define CLIMB_END  0x420
#define CLIMB_STEP 0x10
/* FUN_1000_9568: song 15 four times over. */
#define ALARM_PLAYS 4

static Screen *g_vram;          /* only while a scrolling cut is running */

static void msg(Game *g, int row, int col, int attr, const char *s)
{
    txt_puts(&g->txt, row, col, attr, s);
}

void cut_start(Game *g, int kind)
{
    g->cut_kind = kind;
    g->cut_step = 0;
    g->state = GS_CUT;
    /* The screen is already lit when one of these starts; say so, in case the
     * palette was left mid-fade. */
    scr_palette(g->scr, g->pal);
    switch (kind) {
    case 1:
        /* FUN_1000_908c.  Song 9 is SEA CLEAR and does not loop. */
        sd_music(g, SND_SEA_CLEAR, 0);
        msg(g, 10, 0x22, 0xc1, "Clear!");    /* FUN_1000_a090 */
        /* If a stage was jumped into mid-animation the old one is still
         * held; nothing else frees it. */
        free(g_vram);
        g_vram = (Screen *)malloc(sizeof *g_vram);
        if (g_vram) {
            scr_init(g_vram, g->bank);
            memcpy(g_vram->pal, g->scr->pal, sizeof g_vram->pal);
        }
        break;
    case 2:
        /* FUN_1000_91fe.  Song 10 is SKY CLEAR. */
        sd_music(g, SND_SKY_CLEAR, 0);
        msg(g, 10, 0x22, 0xc1, "Clear!");
        break;
    default:
        /* FUN_1000_9568.  Song 15 is BOSS ALARM; the palette's entry 0 is
         * blacked out for the flashes and put back afterwards. */
        sd_music(g, SND_ALARM, 0);
        msg(g, 10, 0x1e, 0x43, "Emergency!");   /* FUN_1000_a0a8 */
        g->pal[0][2] = 0;
        break;
    }
}

static void cut_done(Game *g)
{
    /* FUN_1000_a23c, and then the stage announces itself. */
    txt_puts(&g->txt, 10, 8, 0xe1, "                                ");
    g->msg_timer = 0;
    sd_stage_banner(g);
    free(g_vram);
    g_vram = NULL;
    scr_palette(g->scr, g->pal);
    g->state = GS_PLAY;
}

/* ------------------------------------------------- SEA -> SKY, the lift-off */

/* One four-pixel slice of the new screen, painted at the row that is about to
 * become the top of the display.  Because the display wraps, the second and
 * third bars land where the HUD band will be. */
static void lift_paint(Game *g, Screen *v, int y)
{
    Screen *save = g->scr;

    g->scr = v;
    sd_fill(g, 0, y, 0x4f, y + 3, 5);
    sd_fill(g, 0, y - 0x30, 0x4f, y - 0x2d, 13);
    /* The black panel is only x 0xf0..399, i.e. byte columns 30..49. */
    sd_fill(g, 0x1e, y - 0x2e, 0x31, y - 0x2b, 8);
    sd_fill(g, 0x1e, y - 1, 0x31, y - 1, 13);
    g->scr = save;
}

static void lift_tick(Game *g)
{
    Screen *v = g_vram;
    int y, row;

    if (!v) {
        cut_done(g);
        return;
    }
    if (g->cut_step == 0) {
        /* The SEA screen the animation starts from. */
        Screen *save = g->scr;

        g->scr = v;
        sd_fill(g, 4, 0, 0x4b, 0x13f, 0);
        sd_fill(g, 4, 0, 0x4b, 0x28, 5);
        sd_fill(g, 4, 0x160, 0x4b, 399, 13);
        sd_fill(g, 0x1e, 0x161, 0x31, 0x18e, 8);
        sd_pat_pair(g, g->px, 0x10, g->base_c32 + 0, g->base_c32 + 1);
        g->scr = save;
    }

    y = 399 - g->cut_step * LIFT_STEP;
    if (y > LIFT_TOP) {
        lift_paint(g, v, y);
    } else {
        /* The SKY screen, and then the stage takes over. */
        Screen *save = g->scr;

        g->scr = v;
        sd_fill(g, 4, 0, 0x4b, 0x138, 5);
        sd_fill(g, 4, 0x160, 0x4b, 399, 13);
        sd_fill(g, 0x1e, 0x161, 0x31, 0x18e, 8);
        sd_pat_pair(g, g->px, 0x120, g->base_c32 + 2, g->base_c32 + 3);
        g->scr = save;
        memcpy(g->scr->px, v->px, sizeof v->px);
        txt_draw(&g->txt, g->scr);
        cut_done(g);
        return;
    }
    /* FUN_1000_b490(y): screen row r shows VRAM row (y + r) mod 400. */
    for (row = 0; row < SCR_H; row++)
        memcpy(g->scr->px + (long)row * SCR_W,
               v->px + (long)((y + row) % SCR_H) * SCR_W, SCR_W);
    txt_draw(&g->txt, g->scr);
    g->cut_step++;
}

/* ----------------------------------------------- SKY -> SPACE, out of the air */

static void climb_tick(Game *g)
{
    int k = g->cut_step * CLIMB_STEP;
    int x, i, d;

    sd_fill(g, 4, 0, 0x4b, 0x15f, 8);
    if (k < 0x160) {
        if (k > 0)
            sd_fill(g, 4, 0, 0x4b, k - 1, 1);
        sd_fill(g, 4, k, 0x4b, 0x15f, 5);
        for (x = 0x20; x < 0x260; x += 0x10)
            scr_pat_opaque(g->scr, x, k - 0x10, g->base_c16 + 0x69);
    }
    if (k + 0x139 < 0x160)
        sd_fill(g, 4, k + 0x139, 0x4b, 0x15f, 0);
    if (k > 0x15f && k < 0x2c0) {
        sd_fill(g, 4, k - 0x160, 0x4b, 0x15f, 1);
        for (x = 0x20; x < 0x260; x += 0x10)
            scr_pat_opaque(g->scr, x, k - 0x170, g->base_c16 + 0x6a);
    }
    if (k > 0x2bf && k < CLIMB_END)
        for (i = 0; i < STAR_VIEW; i++)
            if (CLIMB_END - k < g->star[i].y) {
                int sy = k + g->star[i].y - CLIMB_END;

                if (sy >= 0 && sy < 0x160 && g->star[i].x >= 32 &&
                    g->star[i].x < 608)
                    g->scr->px[(long)sy * SCR_W + g->star[i].x] =
                        (unsigned char)g->star[i].colour;
            }
    /* The ship, with its rocket burning underneath. */
    sd_pat_pair(g, g->px, 0x120, g->base_c32 + 0, g->base_c32 + 1);
    scr_pat(g->scr, g->px + 8, 0x13c, g->base_c16 + 0x3a + g->page);
    scr_pat(g->scr, g->px + 0x28, 0x13c, g->base_c16 + 0x3a + g->page);
    txt_draw(&g->txt, g->scr);
    g->page ^= 1;

    /* It drifts back to the middle as it goes. */
    if (g->px > 0x11c && g->px < 0x124)
        g->px = 0x120;
    d = sd_sgn(0x120 - g->px);
    g->px += d * 4;

    if (++g->cut_step * CLIMB_STEP >= CLIMB_END) {
        sd_fill(g, 4, 0, 0x4b, 0x15f, 8);
        for (i = 0; i < STAR_VIEW; i++)
            if (g->star[i].x >= 32 && g->star[i].x < 608 &&
                g->star[i].y >= 0 && g->star[i].y < 0x160)
                g->scr->px[(long)g->star[i].y * SCR_W + g->star[i].x] =
                    (unsigned char)g->star[i].colour;
        sd_pat_pair(g, g->px, 0x120, g->base_c32 + 0x28, g->base_c32 + 0x29);
        sd_fill(g, 4, 0x160, 0x4b, 399, 13);
        sd_fill(g, 0x1e, 0x161, 0x31, 0x18e, 8);
        txt_draw(&g->txt, g->scr);
        cut_done(g);
    }
}

/* --------------------------------------------- SPACE -> BOSS, the alarm */

/* FUN_1000_9568 plays song 15 four times, flashing the palette back down from
 * white between each.  The stage's own screen is already on show. */
static void alarm_tick(Game *g)
{
    int step = g->cut_step % 16;

    scr_palette_flash(g->scr, g->pal, 15 - step);
    if (++g->cut_step >= ALARM_PLAYS * 16)
        cut_done(g);
}

void cut_tick(Game *g)
{
    switch (g->cut_kind) {
    case 1: lift_tick(g); break;
    case 2: climb_tick(g); break;
    default: alarm_tick(g); break;
    }
}
