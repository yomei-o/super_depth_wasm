/* What happens when a boss dies - FUN_1000_95a4, called from the end of the
 * BOSS stage when the ship is still alive.
 *
 * For stages 4 and 8 it is just "Destroyed!" and a jingle.  For stage 12 it is
 * the ending the DOC promises ("全12面をクリアーするとエンディングが用意されて
 * います"): the ship flies past a planet, then every enemy in the game is named
 * in turn, then the credits.  Clearing it does not end the run - the main loop
 * wraps stage 13 back to 1 and you carry on with your score.
 *
 * The cast list is built at start-up by FUN_1000_8960 out of three tables:
 * DS:0x06f8 says how to draw each one, DS:0x071c which pattern, DS:0x0740 the
 * name.  The draw kinds are the awkward part - they are just the shapes the
 * enemies happen to be, one case each.
 */
#include "gameint.h"
#include "pal.h"
#include "tables.h"
#include <string.h>

/* The phases, in order. */
enum { EP_CLEAR, EP_PLANET, EP_TEXT, EP_CAST, EP_CREDITS };

#define CAST_N     18
#define CAST_HOLD  0x19    /* frames each one is held for */
#define CAST_FADE  16      /* FUN_1000_82d7 / _8347, 16 steps each */
#define PLANET_N   200
#define TEXT_HOLD  300

/* DS:0x06f8 / 0x071c / 0x0740. */
static const struct { int kind, pat; const char *name; } CAST[CAST_N] = {
    {  4, 0x04, "    Tiddler    " }, {  4, 0x08, "   Asthmatic   " },
    {  2, 0x30, "     Coypu     " }, {  7, 0xff, "     Wigwam    " },
    {  3, 0x18, "    Eyewash    " }, {  4, 0x24, "     Spooky    " },
    {  5, 0x0c, "   Fratricide  " }, {  4, 0x34, "    Scourge    " },
    {  2, 0x23, "      Mean     " }, {  4, 0x2a, "    Chirstie   " },
    {  1, 0xff, "     Poppy     " }, {  5, 0x38, "      Rob      " },
    {  2, 0x2e, "      Hoot     " }, {  3, 0x32, " Strayed Brain " },
    {  8, 0xff, "   Eerie Core  " }, { 10, 0xff, " Lunatic Noddle" },
    { 12, 0xff, "    B.P.S.M.   " }, {  4, 0x00, "    Yamaboku   " }
};

/* DS:0x05d0 again - the same eight lines the title scrolls. */
static const char *const CREDITS[8] = {
    "     Game Design : alty & tacox     ",
    "   Character Design : tacox & alty  ",
    "  Music Composition : FIN & CLAUDE  ",
    "        Font Design : tacox         ",
    "         Programming : alty         ",
    "         Bio_100% Presents          ",
    "     Super Depth  version 1.00      ",
    "   @ 1991 alty & tacox / Bio_100%   "
};

void ending_start(Game *g)
{
    int song;

    g->state = GS_END;
    g->end_phase = EP_CLEAR;
    g->end_step = 0;
    g->end_item = 0;
    /* FUN_1000_a0c0. */
    txt_puts(&g->txt, 10, 0x1e, 0xa1, "Destroyed!");
    song = (g->stage < 7) ? SND_BOSS_CLR1
         : (g->stage < 11) ? SND_BOSS_CLR2 : SND_BOSS_CLR3;
    sd_music(g, song, 0);
}

/* Leaving here does what finishing any other stage does. */
static void ending_done(Game *g)
{
    txt_puts(&g->txt, 10, 8, 0xe1, "                                ");
    g->msg_timer = 0;
    memcpy(g->pal, SD_PAL_GAME, sizeof g->pal);
    scr_palette(g->scr, g->pal);
    g->last_stage = g->stage;
    game_stage_start(g, g->stage < SD_STAGES ? g->stage + 1 : 1);
}

/* True once the jingle has played itself out - or after long enough that a
 * build with no sound does not sit here for ever. */
static int song_over(Game *g, int cap)
{
    if (g->snd && g->snd->playing && g->end_step < cap)
        return 0;
    return g->end_step >= 8;
}

/* ------------------------------------------------------------- the planet */

/* The ending's own palette: FUN_1000_95a4 walks colours 1..5 up a blue ramp
 * and puts 6 and 7 at cyan and white. */
static void ending_palette(Game *g)
{
    int i;

    for (i = 1; i < 6; i++) {
        g->pal[i][0] = 0;
        g->pal[i][1] = (unsigned char)((i + 1) * 2);
        g->pal[i][2] = (unsigned char)(i << 1);
    }
    g->pal[6][0] = 0; g->pal[6][1] = 0xe; g->pal[6][2] = 0xe;
    g->pal[7][0] = 0; g->pal[7][1] = 0xf; g->pal[7][2] = 0xf;
    scr_palette(g->scr, g->pal);
}

static void planet_tick(Game *g)
{
    int slide = -0x104 + g->end_step * 2;
    int i, row, col;

    /* The ship drifts to (400, 0xa4) while the planet comes past. */
    g->px += sd_sgn(400 - g->px) * 2;
    if (g->py != 0xa4)
        g->py += sd_sgn(0xa4 - g->py);

    sd_fill(g, 0, 0, 0x4f, 0x18f, 8);
    for (i = 0; i < MAX_STAR; i++) {
        g->star[i].x += g->star[i].layer * 2;
        if (g->star[i].x > 0x27f)
            g->star[i].x -= 0x280;
        if (g->star[i].x >= 32 && g->star[i].x < 608 &&
            g->star[i].y >= 0 && g->star[i].y < 0x160)
            g->scr->px[(long)g->star[i].y * SCR_W + g->star[i].x] =
                (unsigned char)g->star[i].colour;
    }
    sd_pat_pair(g, g->px, g->py, g->base_c32 + 0, g->base_c32 + 1);
    for (col = 0; col < 4; col++) {
        if (slide < -col * 0x20)
            continue;
        for (row = 0; row < 4; row++)
            scr_pat(g->scr, col * 0x20 + slide, row * 0x20 + 0x70,
                    g->base_bos + 0x1c + row * 8 + col);
    }
    sd_fill(g, 4, 0x160, 0x4b, 399, 13);
    sd_fill(g, 0x1e, 0x161, 0x31, 0x18e, 8);
    sd_radar(g, g->px, g->py, 7, 0xf);
    /* FUN_1000_b5b0 - the planet's own blip, walking along the radar. */
    {
        int bx = (slide < 0 ? -slide : slide) / 8 + 0x120;

        sd_fill(g, bx / 8, 0x178, bx / 8, 0x178 + 6, 7);
    }
    txt_draw(&g->txt, g->scr);
}

/* --------------------------------------------------------------- the cast */

static void cast_draw(Game *g, int n)
{
    int pat = CAST[n].pat, a, c;
    int c16 = g->base_c16, c32 = g->base_c32, bos = g->base_bos;
    const signed char *wave = sd_warp_table();

    sd_fill(g, 0, 0, 0x4f, 0x18f, 8);
    switch (CAST[n].kind) {
    case 1:
        scr_pat_scale(g->scr, 0x130, 0xb8, c16 + 0x38 + g->page, 2);
        break;
    case 2:
        scr_pat_scale(g->scr, 0x120, 0xa8, c32 + pat, 2);
        break;
    case 3:
        scr_pat_scale(g->scr, 0x120, 0xa8, c32 + pat + g->page, 2);
        break;
    case 4:
        scr_pat_scale(g->scr, 0x100, 0xa8, c32 + pat, 2);
        scr_pat_scale(g->scr, 0x140, 0xa8, c32 + pat + 1, 2);
        break;
    case 5:
        scr_pat_scale(g->scr, 0x100, 0xa8, c32 + pat + g->page * 2, 2);
        scr_pat_scale(g->scr, 0x140, 0xa8, c32 + pat + 1 + g->page * 2, 2);
        break;
    case 7:
        for (a = 0; a < 4; a++) {
            int x = (a + 8) * 0x20;

            scr_pat_scale(g->scr, x, 0xa8, c16 + (g->page ? 0x50 : 0x4c) + a, 2);
            scr_pat_scale(g->scr, x, 200, c16 + 0x44 + a, 2);
        }
        break;
    case 8:
        for (a = 0; a < 4; a++)
            for (c = 0; c < 3; c++)
                scr_pat_scale(g->scr, (a + 3) * 0x40, c * 0x40 + 0x68,
                        bos + c * 8 + a, 2);
        break;
    case 10:
        for (a = 3; a < 15; a++) {
            int y = 0x78 - ((wave[a * 0x19 + 0x4b] * 0x3c + 1) >> 7);
            int p = bos + 5 + (a > 0xb ? 1 : 0) - (a < 9 ? 1 : 0) +
                    (a == 3 ? 1 : 0);

            scr_pat_scale(g->scr, a * 0x1e + 0x5f, y, p, 2);
        }
        scr_pat_scale(g->scr, 0x50, 0x1e, bos + 0xc, 2);
        scr_pat_scale(g->scr, 0x90, 0x1e, bos + 0xd, 2);
        scr_pat_scale(g->scr, 0x50, 0x5e, bos + 0x14, 2);
        scr_pat_scale(g->scr, 0x90, 0x5e, bos + 0x15, 2);
        break;
    case 12:
        for (a = 0; a < 4; a++)
            for (c = 0; c < 4; c++)
                scr_pat_scale(g->scr, (a + 3) * 0x40, c * 0x40 + 0x38,
                        bos + (c + 3) * 8 + a, 2);
        break;
    default:
        break;
    }
    txt_draw(&g->txt, g->scr);
}

/* ------------------------------------------------------------------ ticks */

void ending_tick(Game *g)
{
    int i;

    g->end_step++;
    switch (g->end_phase) {
    case EP_CLEAR:
        if (!song_over(g, 400))
            return;
        if (g->stage <= 10) {
            ending_done(g);
            return;
        }
        /* Stage 12: the ending proper. */
        txt_puts(&g->txt, 10, 8, 0xe1, "                                ");
        sd_music(g, SND_ENDING, 0);
        ending_palette(g);
        g->end_phase = EP_PLANET;
        g->end_step = 0;
        return;
    case EP_PLANET:
        planet_tick(g);
        if (g->end_step >= PLANET_N) {
            txt_puts(&g->txt, 4, 0x18, 0x41, "Congratulation!!");
            txt_puts(&g->txt, 0x12, 0xc, 0xa1,
                     "Yamaboku find another earth.");
            g->end_phase = EP_TEXT;
            g->end_step = 0;
        }
        return;
    case EP_TEXT:
        /* The original's loop has finished: the last frame of the fly-past
         * stays on the graphics plane and only the text is written. */
        txt_draw(&g->txt, g->scr);
        if (g->end_step * g->wait >= TEXT_HOLD) {
            txt_clear(&g->txt);
            memcpy(g->pal, SD_PAL_GAME, sizeof g->pal);
            g->pal[0][2] = 0;
            txt_puts(&g->txt, 2, 0x24, 0xe1, "Cast");
            g->end_phase = EP_CAST;
            g->end_step = 0;
            g->end_item = 0;
            txt_puts(&g->txt, 0x14, 0x18, 0xe1, CAST[0].name);
        }
        return;
    case EP_CAST:
        /* FUN_1000_82d7, 25 frames, FUN_1000_8347 - one portrait at a time. */
        if (g->end_step <= CAST_FADE) {
            scr_palette_fade(g->scr, g->pal, g->end_step - 1);
        } else if (g->end_step > CAST_FADE + CAST_HOLD) {
            int back = g->end_step - CAST_FADE - CAST_HOLD;

            scr_palette_fade(g->scr, g->pal, back > 15 ? 0 : 15 - back);
        } else {
            /* The same wobble on 2, 4 and 6 that a stage runs. */
            g->pal[2][0] = (unsigned char)(g->page * 2 + 0xd);
            g->pal[2][1] = 0; g->pal[2][2] = 0;
            g->pal[6][0] = (unsigned char)(g->page + 0xc);
            g->pal[6][1] = (unsigned char)(g->page + 9);
            g->pal[6][2] = 0;
            g->pal[4][0] = 0; g->pal[4][1] = 0xf;
            g->pal[4][2] = (unsigned char)(g->page << 3);
            scr_palette(g->scr, g->pal);
        }
        cast_draw(g, g->end_item);
        g->page ^= 1;
        if (g->end_step >= CAST_FADE * 2 + CAST_HOLD) {
            g->end_step = 0;
            txt_puts(&g->txt, 0x14, 0x18, 0xe1, "                  ");
            if (++g->end_item >= CAST_N) {
                txt_clear(&g->txt);
                /* Rows 8, 11, 14, 17 and 20 - the loop stops before 23. */
                for (i = 0; i < 5; i++)
                    txt_puts(&g->txt, 8 + i * 3, 4, 0xe1, CREDITS[i]);
                txt_puts(&g->txt, 1, 4, 0xc1, CREDITS[5]);
                txt_puts(&g->txt, 4, 4, 0x41, CREDITS[6]);
                txt_puts(&g->txt, 0x18, 4, 0xc1, CREDITS[7]);
                memcpy(g->pal, SD_PAL_GAME, sizeof g->pal);
                g->pal[0][2] = 0;
                scr_palette(g->scr, g->pal);
                g->end_phase = EP_CREDITS;
            } else {
                txt_puts(&g->txt, 0x14, 0x18, 0xe1, CAST[g->end_item].name);
            }
        }
        return;
    default:
        sd_fill(g, 0, 0, 0x4f, 0x18f, 8);
        txt_draw(&g->txt, g->scr);
        if (g->end_step * g->wait >= 200 && song_over(g, 2000))
            ending_done(g);
        return;
    }
}
