/* The ranking screen - FUN_1000_a816 -> FUN_1000_8674 (its frame) and
 * FUN_1000_a846 (the table), reached from the title's "Record".
 *
 * DEPTH.SCR is ten fixed-width lines that the game reads and writes as text:
 *
 *   050000 10 alty     91/08/10
 *   ^score ^stage ^name    ^date
 *
 * FUN_1000_02e2 parses them into the ten 22-byte records at DS:0x1fea, which
 * is the same memory the entity arrays use while a stage is running - the two
 * are never live at once.
 *
 * Like the title screen, this was read with tools/disasm.py: Ghidra loses the
 * arguments to every one of the drawing calls.
 *
 * Writing a new entry back is not here.  That is the name entry
 * (FUN_1000_a46c / _ab76) reached from FUN_1000_aa92 after a game over, and it
 * is not written yet, so the file is only ever read.
 */
#include "gameint.h"
#include "pal.h"
#include <stdio.h>
#include <string.h>

/* The rank labels, DS:0x0546: a digit and then one of the font's "st", "nd",
 * "rd", "th" characters, with 10 as its own character. */
static const unsigned char RANK[10][3] = {
    { '1', 0x10, 0 }, { '2', 0x11, 0 }, { '3', 0x12, 0 }, { '4', 0x13, 0 },
    { '5', 0x13, 0 }, { '6', 0x13, 0 }, { '7', 0x13, 0 }, { '8', 0x13, 0 },
    { '9', 0x13, 0 }, { 0x14, 0x13, 0 }
};

/* DS:0x0b07, with six of its characters replaced by the font's "Rank" and
 * "Stage" ligatures once it has been copied (FUN_1000_a846 at 1000:a874). */
static const unsigned char HEADER[] = {
    ' ', 0x15, 0x16, ' ', 'S', 'c', 'o', 'r', 'e', ' ',
    0x17, 0x18, 0x19, 0x1a, ' ', ' ',
    'N', 'a', 'm', 'e', ' ', ' ', ' ', ' ', ' ',
    'D', 'a', 't', 'e', ' ', ' ', ' ', 0
};

int record_load(Game *g, const char *path)
{
    FILE *f = fopen(path, "rb");
    char line[64];
    int n = 0;

    memset(g->rank, 0, sizeof g->rank);
    for (n = 0; n < RANK_ROWS; n++) {
        strcpy(g->rank[n].name, "--------");
        strcpy(g->rank[n].date, "00/00/00");
    }
    if (!f)
        return -1;
    n = 0;
    while (n < RANK_ROWS && fgets(line, sizeof line, f)) {
        if (strlen(line) < 27)
            continue;
        g->rank[n].score = atol(line);
        g->rank[n].stage = atoi(line + 7);
        memcpy(g->rank[n].name, line + 10, 8);
        g->rank[n].name[8] = 0;
        memcpy(g->rank[n].date, line + 19, 8);
        g->rank[n].date[8] = 0;
        n++;
    }
    fclose(f);
    return 0;
}

/* FUN_1000_8674 - a black screen with a grey panel and a frame of 16x16 tiles
 * out of depth.c16 (0x60..0x68), in three boxes. */
static void draw_frame(Game *g)
{
    int c16 = g->base_c16, x, y;

    sd_fill(g, 0, 0, 0x4f, 0x18f, 8);
    sd_fill(g, 0xa, 0, 0x45, 0x170, 13);
    /* The six horizontal rails, and the corner tiles either side of them. */
    {
        static const int rail[6] = { 0, 0x20, 0x30, 0x110, 0x120, 0x170 };
        int i;

        for (i = 0; i < 6; i++) {
            int top = (i & 1) == 0;

            scr_pat_opaque(g->scr, 0x40, rail[i], c16 + (top ? 0x60 : 0x66));
            for (x = 0x50; x < 0x230; x += 0x10)
                scr_pat_opaque(g->scr, x, rail[i], c16 + (top ? 0x61 : 0x67));
            scr_pat_opaque(g->scr, 0x230, rail[i], c16 + (top ? 0x62 : 0x68));
        }
    }
    /* The verticals, skipping the rows the rails already cover. */
    scr_pat_opaque(g->scr, 0x40, 0x10, c16 + 0x63);
    scr_pat_opaque(g->scr, 0x230, 0x10, c16 + 0x65);
    for (y = 0x40; y < 0x110; y += 0x10) {
        scr_pat_opaque(g->scr, 0x40, y, c16 + 0x63);
        scr_pat_opaque(g->scr, 0x230, y, c16 + 0x65);
    }
    for (y = 0x130; y < 0x170; y += 0x10) {
        scr_pat_opaque(g->scr, 0x40, y, c16 + 0x63);
        scr_pat_opaque(g->scr, 0x230, y, c16 + 0x65);
    }
}

/* FUN_1000_a846 - the table.  Rows 6..15, and the score is right-justified
 * into a "000000" template. */
static void draw_table(Game *g)
{
    char buf[16];
    int i, row;

    txt_puts(&g->txt, 1, 8, 1, " Super Depth  Top Score Ranking ");
    for (row = 0; row < TXT_ROWS; row++) {
        txt_puts(&g->txt, row, 0, 5, "  ");
        txt_puts(&g->txt, row, 0x4c, 5, "  ");
    }
    txt_puts(&g->txt, 4, 8, 0xe1, (const char *)HEADER);
    txt_puts(&g->txt, 5, 8, 0xe1, "--------------------------------");
    txt_puts(&g->txt, 0x10, 8, 0xe1, "--------------------------------");
    for (i = 0; i < RANK_ROWS; i++) {
        row = i + 6;
        txt_puts(&g->txt, row, 0xa, 0xe1, (const char *)RANK[i]);
        sprintf(buf, "%06ld", g->rank[i].score);
        txt_puts(&g->txt, row, 0x10, 0xe1, buf);
        sprintf(buf, "%02d", g->rank[i].stage);
        txt_puts(&g->txt, row, 0x1e, 0xe1, buf);
        txt_puts(&g->txt, row, 0x24, 0xe1, g->rank[i].name);
        txt_puts(&g->txt, row, 0x36, 0xe1, g->rank[i].date);
    }
    /* FUN_1000_aa44's line under the table. */
    txt_puts(&g->txt, 0x14, 0x12, 0xc3, "Hit any key to return.");
}

void record_start(Game *g)
{
    g->state = GS_RECORD;
    g->menu_trig = 0;               /* the button that got here is still down */
    txt_clear(&g->txt);
    draw_table(g);
    sd_music(g, SND_NAME, 1);       /* FUN_1000_aa44: song 8, NAME INN */
    g->fade_step = 0;
    g->fade_ticks = 0;
    scr_palette_fade(g->scr, g->pal, 0);
}

void record_tick(Game *g)
{
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
    draw_frame(g);
    txt_draw(&g->txt, g->scr);
    if (!(g->pad & (PAD_A | PAD_B | PAD_UP | PAD_DOWN)))
        g->menu_trig = 1;
    else if (g->menu_trig)
        title_start(g);
}
