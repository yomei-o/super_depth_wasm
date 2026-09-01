/* The name entry - FUN_1000_ab76, driven by FUN_1000_a46c.
 *
 * It runs on top of the ranking screen with the new row already inserted: you
 * pick letters off a four-row keyboard at text rows 19..22 and they land in
 * that row's name column, which is why the cursor down there sits at
 * (rank + 6, 0x24 + n).
 *
 * The keyboard is four 27-byte rows at DS:0x0564.  Three of its blanks are
 * patched at start-up by FUN_1000_8960 into control characters, which is why
 * they are not in the strings as they sit in the file:
 *
 *   DS:0x05a5 = 0x14   the font's "10" character, in the digits row
 *   DS:0x05a7 = 0x22   a double quote
 *   DS:0x05ca = 0x1b   move the cursor back      (the font's left arrow)
 *   DS:0x05cc = 0x1c   move the cursor forward   (its right arrow)
 *   DS:0x05ce = 0x1d   done                      (its "END")
 *
 * The highlight is a yellow box drawn in the graphics plane with the character
 * over it in a reversed text cell, so the glyph is a hole and the yellow shows
 * through - see the note about reverse in src/text.c.
 */
#include "gameint.h"
#include "pal.h"
#include <string.h>

#define KEY_ROWS 4
#define KEY_COLS 26
#define KEY_BACK 0x1b
#define KEY_FWD  0x1c
#define KEY_END  0x1d
#define NAME_LEN 8

/* DS:0x0564, with FUN_1000_8960's five patches applied. */
static const unsigned char KEYS[KEY_ROWS][KEY_COLS + 1] = {
    "abcdefghijklmnopqrstuvwxyz",
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
    { ' ', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 0x14, ' ',
      0x22, '#', '$', '%', '&', '\'', '(', ')', '[', ']', '{', '}', '~', 0 },
    { '+', '-', '*', '/', '=', '<', '>', '?', '@', ',', '.', ';', ':',
      '`', '^', '_', '|', ' ', ' ', ' ', ' ', KEY_BACK, ' ', KEY_FWD,
      ' ', KEY_END, 0 }
};

/* The keyboard is drawn a cell apart, so a column is two text cells wide. */
#define KEY_ROW0 0x13
#define KEY_COL0 0x0e

static void draw_keys(Game *g)
{
    int r;

    for (r = 0; r < KEY_ROWS; r++)
        txt_puts(&g->txt, KEY_ROW0 + r, KEY_COL0, 0xe1,
                 (const char *)KEYS[r]);
}

void name_start(Game *g, int row)
{
    g->state = GS_NAME;
    g->name_row = row;
    g->name_col = 0;
    g->name_key = 0;
    g->name_pos = 0;
    g->menu_trig = 0;
    memset(g->name_buf, ' ', NAME_LEN);
    g->name_buf[NAME_LEN] = 0;
    txt_clear(&g->txt);
    record_draw_table(g, row);
    draw_keys(g);
    sd_music(g, SND_NAME, 1);
    /* FUN_1000_ab76: colour 6 becomes the highlight yellow for the duration. */
    g->pal[6][0] = 0xf;
    g->pal[6][1] = 0xf;
    g->pal[6][2] = 0;
    scr_palette(g->scr, g->pal);
}

/* Row 3 has gaps between its last four keys; moving skips them. */
static void step_col(Game *g, int dir)
{
    g->name_col += dir * 2;
    if (g->name_key == 3) {
        if (dir > 0) {
            if (g->name_col == 0x30)
                g->name_col = 0x32;
            if (g->name_col == 0x2c)
                g->name_col = 0x2e;
            if (g->name_col > 0x20 && g->name_col < 0x2a)
                g->name_col = 0x2a;
        } else {
            if (g->name_col == 0x30)
                g->name_col = 0x2e;
            if (g->name_col == 0x2c)
                g->name_col = 0x2a;
            if (g->name_col > 0x20 && g->name_col < 0x2a)
                g->name_col = 0x20;
        }
    }
    if (g->name_col < 0)
        g->name_col = 0x32;
    if (g->name_col > 0x32)
        g->name_col = 0;
}

static void finish(Game *g)
{
    strncpy(g->rank[g->name_row].name, g->name_buf, NAME_LEN);
    g->rank[g->name_row].name[NAME_LEN] = 0;
    txt_clear(&g->txt);
    record_draw_table(g, g->name_row);
    memcpy(g->pal, SD_PAL_GAME, sizeof g->pal);
    scr_palette(g->scr, g->pal);
    record_save(g, g->score_path);
    record_start_score(g);
}

void name_tick(Game *g)
{
    int key, was_row = g->name_key, was_col = g->name_col;
    int was_pos = g->name_pos;

    if (g->pad & PAD_UP)
        g->name_key--;
    if (g->pad & PAD_DOWN)
        g->name_key++;
    if (g->name_key < 0)
        g->name_key = KEY_ROWS - 1;
    if (g->name_key >= KEY_ROWS)
        g->name_key = 0;
    if (g->pad & PAD_RIGHT)
        step_col(g, 1);
    if (g->pad & PAD_LEFT)
        step_col(g, -1);

    if ((g->pad & (PAD_A | PAD_B)) && g->menu_trig) {
        g->menu_trig = 0;
        key = KEYS[g->name_key][g->name_col / 2];
        if (key == KEY_BACK) {
            if (g->name_pos > 0)
                g->name_pos -= 2;
        } else if (key == KEY_FWD) {
            if (g->name_pos < 0xe)
                g->name_pos += 2;
        } else if (key == KEY_END) {
            finish(g);
            return;
        } else {
            g->name_buf[g->name_pos / 2] = (char)key;
            if (g->name_pos < 0xe) {
                g->name_pos += 2;
            } else {
                /* The last letter parks the cursor on END. */
                g->name_key = 3;
                g->name_col = 0x32;
            }
        }
        sd_sfx(g, SFX_BOSS);
    }
    if (!(g->pad & (PAD_A | PAD_B)))
        g->menu_trig = 1;

    /* Put back whatever the cursor was over, then light the new places. */
    txt_putc(&g->txt, KEY_ROW0 + was_row, KEY_COL0 + was_col, 0xe1,
             KEYS[was_row][was_col / 2]);
    txt_putc(&g->txt, g->name_row + 6, 0x24 + was_pos, 0xc1,
             g->name_buf[was_pos / 2]);
    txt_putc(&g->txt, KEY_ROW0 + g->name_key, KEY_COL0 + g->name_col, 5,
             KEYS[g->name_key][g->name_col / 2]);
    txt_putc(&g->txt, g->name_row + 6, 0x24 + g->name_pos,
             g->page ? 5 : 0xc1, g->name_buf[g->name_pos / 2]);

    record_draw_frame(g);
    /* The two yellow boxes the reversed cells show through. */
    sd_fill(g, KEY_COL0 + g->name_col, (KEY_ROW0 + g->name_key) * 16,
            KEY_COL0 + g->name_col + 1, (KEY_ROW0 + g->name_key) * 16 + 15, 6);
    if (g->page)
        sd_fill(g, 0x24 + g->name_pos, (g->name_row + 6) * 16,
                0x24 + g->name_pos + 1, (g->name_row + 6) * 16 + 15, 6);
    txt_draw(&g->txt, g->scr);
    g->page ^= 1;
}
