/* The title screen - FUN_1000_8ae2, with its logo out of FUN_1000_a302.
 *
 * Ghidra's output for this one is unusually poor: almost every call comes out
 * with no arguments at all, because the pushes are computed rather than
 * constant.  It was read with tools/disasm.py instead, which is why the
 * comments below quote addresses rather than Ghidra names.
 *
 * The screen is a SEA scene - the same sky, sea floor and warship as stage 1 -
 * with submarines swimming past behind the logo, a three-item menu, and the
 * credits scrolling along the bottom.  The logo is not a picture: it is a grid
 * of DEPTH.FNT characters uploaded as PC-98 user-defined characters, which is
 * what the bottom half of docs/font.png is.
 *
 * "Record" opens the ranking screen (src/record.c).  "Exit" - and ESC or Q,
 * which FUN_1000_8ae2 sends to the same place - puts DS:0x184c to 0, which
 * makes FUN_1000_0011 return to DOS.  Here it raises g->quit and leaves it to
 * the front end: depth.exe closes its window, the page has nowhere to go and
 * ignores it.
 */
#include "gameint.h"
#include "pal.h"
#include "tables.h"
#include <string.h>

#define SKY_H   0x28
#define SKY_COL 5
#define FLOOR_Y 0x140

/* DS:0x0909, 0x0916, 0x0923 - twelve characters each, so they centre
 * themselves at column 0x1c. */
static const char *const MENU[3] = {
    " Game Start ", "   Record   ", "    Exit    "
};

/* DS:0x05d0, eight records of 0x25 bytes.  They sit still for 72 frames and
 * then slide off to the left, one character a frame. */
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

#define CREDIT_HOLD  0x48
#define CREDIT_END   0x6c

/* FUN_1000_a302 - the logo, three blocks of user-defined characters. */
static void draw_logo(Game *g)
{
    int row, col, i;

    /* 1000:a30a - the big "Depth", sixteen characters by five. */
    for (col = 0x16; col < 0x36; col += 2)
        for (row = 4; row < 9; row++)
            txt_putc(&g->txt, row, col, 0xe1,
                     (row * 16 + col / 2 + 0x45) & 0xff);
    /* 1000:a33f - its right-hand edge, and the flourish below it. */
    for (row = 4; row < 6; row++)
        for (col = 0x36; col < 0x3e; col += 2) {
            int base = (col / 2 + row * 16) & 0xff;

            txt_putc(&g->txt, row, col, 0xe1, (base - 0x7b) & 0xff);
            txt_putc(&g->txt, row + 2, col, 0xe1, (base - 0x77) & 0xff);
            txt_putc(&g->txt, row + 3, col, 0xe1, (base - 0x6f) & 0xff);
            txt_putc(&g->txt, row + 5, col - 0x10, 0xe1, (base - 0x73) & 0xff);
        }
    /* 1000:a3b7 - "THE ULTIMATE HYPER BATTLESHIP" above it. */
    for (i = 0, col = 0x12; col < 0x1c; col += 2, i++) {
        txt_putc(&g->txt, 2, col, 0x41, (i + 0x86) & 0xff);
        txt_putc(&g->txt, 3, col, 0x41, (i + 0x8b) & 0xff);
    }
}

static void draw_menu_item(Game *g, int i, int selected)
{
    txt_puts(&g->txt, i * 2 + 0xd, 0x1c, selected ? 0xc1 : 1, MENU[i]);
}

void title_start(Game *g)
{
    int i, row;

    g->state = GS_TITLE;
    g->menu_sel = 0;
    /* Whatever button got here is probably still down; the latch below makes
     * it be let go of before the menu answers. */
    g->menu_trig = 0;
    g->credit = 0;
    g->credit_step = 0;
    g->px = 0x120;
    g->py = 0x10;
    g->pvx = g->pvy = 0;
    g->pstate = 10;
    g->type = 1;
    g->pal_a = g->pal_b = g->pal_c = 0;
    g->page = 0;
    g->item_kind = 0;
    memcpy(g->pal, SD_PAL_GAME, sizeof g->pal);
    for (i = 1; i < MAX_ENT; i++) {
        g->ent[i].y = 0;
        g->ent[i].x = g->ent[i].vx = g->ent[i].vy = 0;
        g->ent[i].state = 10;
        g->ent[i].kind = 1;
    }

    txt_clear(&g->txt);
    /* FUN_1000_a3f8 - black out the two columns either side of the graphics. */
    for (row = 0; row < TXT_ROWS; row++) {
        txt_puts(&g->txt, row, 0, 5, "  ");
        txt_puts(&g->txt, row, 0x4c, 5, "  ");
    }
    draw_logo(g);
    for (i = 0; i < 3; i++)
        draw_menu_item(g, i, i == g->menu_sel);

    sd_music(g, SND_THEME, 1);          /* 1000:8c89 - cf6a(2) */
    g->fade_step = 0;
    g->fade_ticks = 0;
    scr_palette_fade(g->scr, g->pal, 0);
}

/* 1000:8d53 - submarines swim past, the same shapes stage 1 uses.  The ones
 * shallower than y = 100 are not drawn, which is what keeps them out of the
 * logo. */
static void demo_subs(Game *g)
{
    int i;

    for (i = 1; i <= g->nent && i < MAX_ENT; i++) {
        Ent *e = &g->ent[i];

        if (sd_rand(g) % 10 == 0 && e->y == 0) {
            e->y = (sd_rand(g) % 7 + 2) * 0x20;
            e->x = (sd_rand(g) % 2) * 0x280 - 0x20;
            e->vx = (sd_rand(g) % 8 + 1) * sd_toward_middle(e->x);
        }
        if (e->x + e->vx <= -0x20 || e->x + e->vx >= 0x260)
            e->y = 0;
    }
}

static void title_draw(Game *g)
{
    int col, i;

    sd_fill(g, 4, 0, 0x4b, 0x13f, 0);
    sd_fill(g, 4, 0, 0x4b, SKY_H + (g->pal_c < 4 ? 1 : 0) - 1, SKY_COL);
    /* 1000:8bb0 - the sea floor, and three more rows of it below. */
    for (col = 0; col < 40; col++) {
        scr_pat_opaque(g->scr, col * 16, FLOOR_Y, g->base_c16 + 0x40);
        scr_pat_opaque(g->scr, col * 16, FLOOR_Y + 0x10, g->base_c16 + 0x41);
        scr_pat_opaque(g->scr, col * 16, 0x160, g->base_c16 + 0x61);
        scr_pat_opaque(g->scr, col * 16, 0x170, g->base_c16 + 0x64);
        scr_pat_opaque(g->scr, col * 16, 0x180, g->base_c16 + 0x67);
    }
    for (i = g->nent; i >= 1; i--) {
        Ent *e = &g->ent[i];
        int b = (e->vx > 0) ? 1 : 0;

        if (e->y < 100)
            continue;
        sd_pat_pair(g, e->x + e->vx, e->y, g->base_c32 + (b + 2) * 2,
                    g->base_c32 + b * 2 + 5);
    }
    sd_pat_pair(g, g->px, g->py + (g->pal_c < 4 ? 1 : 0),
                g->base_c32 + 0, g->base_c32 + 1);
    txt_draw(&g->txt, g->scr);
}

/* 1000:8ff0 - the credit line, held and then slid off to the left. */
static void credits(Game *g)
{
    const char *s = CREDITS[g->credit];
    int len = (int)strlen(s);

    if (g->credit_step < CREDIT_HOLD) {
        txt_puts(&g->txt, 0x17, 4, 0xe1, s);
    } else {
        int off = g->credit_step - (CREDIT_HOLD - 1);

        if (off <= len) {
            txt_putc(&g->txt, 0x17, (len - off + 1) * 2, 0xe1, ' ');
            txt_puts(&g->txt, 0x17, 4, 0xe1, s + off);
        }
    }
    if (++g->credit_step >= CREDIT_END) {
        g->credit_step = 0;
        if (++g->credit >= 8)
            g->credit = 0;
    }
}

void title_tick(Game *g)
{
    int was = g->menu_sel;

    /* The fade in is the same sixteen steps of two VSYNC ticks a stage uses. */
    if (g->fade_step < 15) {
        scr_palette_fade(g->scr, g->pal, g->fade_step);
        g->fade_ticks += g->wait;
        while (g->fade_ticks >= 2 && g->fade_step < 15) {
            g->fade_ticks -= 2;
            g->fade_step++;
        }
        if (g->fade_step >= 15)
            scr_palette(g->scr, g->pal);
    }

    if ((g->pad & (PAD_A | PAD_B)) && g->menu_trig) {
        g->menu_trig = 0;
        if (g->menu_sel == 1) {
            record_start(g);
            return;
        }
        if (g->menu_sel == 0) {
            /* FUN_1000_0011's main loop: three lives, stage 1, no score. */
            g->lives = 3;
            g->score = 0;
            g->speed = 4;
            g->shot_max = 4;
            g->ship = g->power = 0;
            g->last_stage = 1;
            game_stage_start(g, 1);
            return;
        }
        /* FUN_1000_8ae2's LAB_1000_8cb9: Exit puts DS:0x184c to 0, which
         * makes FUN_1000_0011 return. */
        g->quit = 1;
    }
    /* Line 103 of the same function: ESC or Q does the same thing from here. */
    if (g->pad & (PAD_PAUSE | PAD_QUIT))
        g->quit = 1;
    if ((g->pad & PAD_UP) && g->menu_trig) {
        if (--g->menu_sel < 0)
            g->menu_sel = 2;
        g->menu_trig = 0;
    }
    if ((g->pad & PAD_DOWN) && g->menu_trig) {
        if (++g->menu_sel > 2)
            g->menu_sel = 0;
        g->menu_trig = 0;
    }
    if (!(g->pad & (PAD_UP | PAD_DOWN | PAD_A | PAD_B)))
        g->menu_trig = 1;
    if (was != g->menu_sel) {
        draw_menu_item(g, g->menu_sel, 1);
        draw_menu_item(g, was, 0);
    }

    demo_subs(g);
    title_draw(g);
    credits(g);
    /* FUN_1000_8184 drives the waterline and the ship's bob here too, but the
     * title has no message line to run down. */
    scr_colour(g->scr, 2, g->page * 2 + 0xd, 0, 0);
    scr_colour(g->scr, 3, g->page * 2 + 0xd, 0, g->pal_c + 8);
    scr_colour(g->scr, 4, 0, g->page * 4 + 0xb, g->page << 3);
    scr_colour(g->scr, 6, g->pal_b + 0xc, g->pal_b + 9, 0);
    if (++g->pal_a > 2)
        g->pal_a = 0;
    if (++g->pal_b > 3)
        g->pal_b = 0;
    if (++g->pal_c > 7)
        g->pal_c = 0;
    g->page ^= 1;
    sd_motion(g);
}
