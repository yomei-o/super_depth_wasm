/* The Bio_100% logo the game opens with - FUN_1000_dbb2.
 *
 * `main` (1000:0000) calls it before anything else: song 1 (the Bio_100%
 * jingle) is started, the boot palette goes in, and then this runs.  The port
 * had it missing altogether and went straight to the title.
 *
 * The logo is not a picture.  It is 13 blocks and 13 wedges out of four tables
 * in DGROUP, drawn twice over:
 *
 *   "Bio"   DS:0x106e (7 blocks) and DS:0x10a6 (6 wedges), scaled by a divisor
 *           that walks 6 -> 0x40, so the letters come in from off the screen
 *           and settle.  They go into plane 0 alone (GRCG mode 0xce), and the
 *           frame before is rubbed out by clearing plane 0 alone, so nothing
 *           else on the screen is touched.
 *   "100%"  DS:0x10ee (9 blocks) and DS:0x1136 (7 wedges), at their own size,
 *           into plane 1 alone (mode 0xcd).  The boot palette has index 2
 *           white, the same as the background, so this draws invisibly.
 *
 * Then FUN_1000_ba8c walks palette index 2 from white down to green over 0x3d
 * VSYNC ticks and the "100%" fades up under the "Bio".  Where the two overlap
 * the index is 3, which the boot palette makes the same orange as index 1, so
 * the "Bio" stays on top.  The whole thing is drawn in the top 200 rows: both
 * of the fillers clip there (FUN_1000_de0c and FUN_1000_def6).
 *
 * The scale is `v / s - (v >> 7)`, which is the original's own arithmetic:
 * the shift is the value it converges on, so the tables read as "where the
 * piece ends up" plus "how far out it starts".
 */
#include "gameint.h"
#include "pal.h"
#include <string.h>

/* DS:0x106e - the "Bio" blocks: x0, x1, y0, y1 */
static const short BIO_RECT[7][4] = {
    { -16384, -12288,      0,   2048 },
    {  -8192,  -4096,      0,   2048 },
    { -16384,  -4096,   2048,   4096 },
    {  -2048,   2048,      0,   4096 },
    {   4096,  16384,  -2048,      0 },
    {  12288,  16384,      0,   2048 },
    {   4096,  16384,   2048,   4096 },
};

/* DS:0x10a6 - the "Bio" wedges: xt0, xt1, xb0, xb1, yt, yb */
static const short BIO_TRAP[6][6] = {
    { -24576,  -4096, -20480,  -4096,  -4096,  -2048 },
    { -12288, -12288, -16384, -12288,  -2048,      0 },
    {  -8192,  -4096, -12288,  -8192,  -2048,      0 },
    {   2048,   2048,  -2048,   2048,  -4096,  -2048 },
    {   2048,   2048,  -2048,   2048,  -2048,      0 },
    {   8192,   8192,   4096,   8192,      0,   2048 },
};

/* DS:0x10ee - the "100%" blocks */
static const short HUN_RECT[9][4] = {
    {   -288,   -240,    -32,     85 },
    {   -208,    -64,    -80,    -53 },
    {   -208,   -160,    -32,     64 },
    {   -112,    -64,    -53,     64 },
    {   -208,    -64,     64,     85 },
    {    -32,    112,    -80,    -53 },
    {    -32,     16,    -32,     64 },
    {     64,    112,    -53,     64 },
    {    -32,    112,     64,     85 },
};

/* DS:0x1136 - the "100%" wedges */
static const short HUN_TRAP[7][6] = {
    {   -240,   -240,   -288,   -240,    -80,    -53 },
    {   -240,   -240,   -288,   -240,    -53,    -32 },
    {   -160,   -160,   -208,   -160,    -53,    -32 },
    {     16,     16,    -32,     16,    -53,    -32 },
    {    144,    192,    144,    144,    -80,    -21 },
    {    256,    293,    128,    176,    -80,     85 },
    {    288,    288,    240,    288,     21,     85 },
};

#define OPEN_X      0x13f       /* where the tables are measured from */
#define OPEN_Y      0x63
#define OPEN_ROWS   200         /* both fillers clip here */
#define BIO_PLANE   1           /* GRCG mode 0xce - plane 0 */
#define HUN_PLANE   2           /* GRCG mode 0xcd - plane 1 */
#define ZOOM_FIRST  6
#define ZOOM_LAST   0x40
#define FADE_FIRST  0x3c        /* palette index 2, white down to green */
#define HOLD_TICKS  0x14        /* 1000:0227 waits this many VSYNC ticks */

/* v / s - (v >> 7), with C's own truncation, which is what the 8086 idiv
 * does. */
static int scaled(int v, int s)
{
    return v / s - (v >> 7);
}

static void draw_bio(Game *g, int s)
{
    int i;

    for (i = 0; i < 7; i++)
        scr_plane_rect(g->scr,
                       scaled(BIO_RECT[i][0], s) + OPEN_X,
                       scaled(BIO_RECT[i][1], s) + OPEN_X,
                       scaled(BIO_RECT[i][2], s) + OPEN_Y,
                       scaled(BIO_RECT[i][3], s) + OPEN_Y - 1, BIO_PLANE);
    for (i = 0; i < 6; i++)
        scr_plane_trap(g->scr,
                       scaled(BIO_TRAP[i][4], s) + OPEN_Y,
                       scaled(BIO_TRAP[i][0], s) + OPEN_X,
                       scaled(BIO_TRAP[i][1], s) + OPEN_X,
                       scaled(BIO_TRAP[i][5], s) + OPEN_Y,
                       scaled(BIO_TRAP[i][2], s) + OPEN_X,
                       scaled(BIO_TRAP[i][3], s) + OPEN_X, BIO_PLANE);
}

static void draw_hundred(Game *g)
{
    int i;

    for (i = 0; i < 9; i++)
        scr_plane_rect(g->scr, HUN_RECT[i][0] + OPEN_X, HUN_RECT[i][1] + OPEN_X,
                       HUN_RECT[i][2] + OPEN_Y, HUN_RECT[i][3] + OPEN_Y,
                       HUN_PLANE);
    for (i = 0; i < 7; i++)
        scr_plane_trap(g->scr,
                       HUN_TRAP[i][4] + OPEN_Y, HUN_TRAP[i][0] + OPEN_X,
                       HUN_TRAP[i][1] + OPEN_X,
                       HUN_TRAP[i][5] + OPEN_Y, HUN_TRAP[i][2] + OPEN_X,
                       HUN_TRAP[i][3] + OPEN_X, HUN_PLANE);
}

void opening_start(Game *g)
{
    g->state = GS_OPENING;
    g->open_phase = OPEN_ZOOM;
    g->open_step = ZOOM_FIRST;
    g->open_ticks = 0;
    memcpy(g->pal, SD_PAL_BOOT, sizeof g->pal);
    scr_palette(g->scr, g->pal);
    scr_clear(g->scr, 0);
    txt_clear(&g->txt);
    sd_music(g, SND_BIO, 1);    /* 1000:011a - cf6a(1), cf44() */
}

void opening_tick(Game *g)
{
    /* FUN_1000_dbb2 waits on the VSYNC counter itself rather than on the
     * frame length DS:0x1820 holds - two ticks a frame while the letters come
     * in, one a step while the colour fades - so the opening keeps its own
     * pace and leaves g->wait alone.  game_frame_ms asks for OPEN_TICKS while
     * this state is running. */
    int budget = OPEN_TICKS;

    while (budget > 0) {
        switch (g->open_phase) {
        case OPEN_ZOOM:
            if (budget < 2)
                return;
            budget -= 2;
            scr_plane_clear(g->scr, 0, OPEN_ROWS - 1, BIO_PLANE);
            draw_bio(g, g->open_step);
            if (++g->open_step > ZOOM_LAST) {
                draw_hundred(g);
                g->open_phase = OPEN_FADE;
                g->open_step = FADE_FIRST;
            }
            break;
        case OPEN_FADE:
            budget -= 1;
            /* FUN_1000_ba8c(2, si >> 2, (si >> 4) + 0xc, si >> 2) */
            g->pal[2][0] = (unsigned char)(g->open_step >> 2);
            g->pal[2][1] = (unsigned char)((g->open_step >> 4) + 0xc);
            g->pal[2][2] = (unsigned char)(g->open_step >> 2);
            scr_colour(g->scr, 2, g->pal[2][0], g->pal[2][1], g->pal[2][2]);
            if (--g->open_step < 0) {
                g->open_phase = OPEN_HOLD;
                g->open_step = HOLD_TICKS;
            }
            break;
        default:                /* OPEN_HOLD */
            budget -= 1;
            if (--g->open_step <= 0) {
                title_start(g);
                return;
            }
            break;
        }
    }
}
