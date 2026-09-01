#include "text.h"
#include <stdio.h>
#include <string.h>

int txt_font_load(TextFont *f, const char *path)
{
    FILE *fp = fopen(path, "rb");
    unsigned char hdr[0x20];
    int w, h, first, last, n, i, y;

    memset(f, 0, sizeof *f);
    if (!fp)
        return -1;
    if (fread(hdr, 1, sizeof hdr, fp) != sizeof hdr ||
        memcmp(hdr, "BFNT", 4) != 0) {
        fclose(fp);
        return -1;
    }
    /* hdr[5] is bpp-1; the font is 1bpp, so it must read as 0. */
    w = hdr[8] | (hdr[9] << 8);
    h = hdr[10] | (hdr[11] << 8);
    first = hdr[12] | (hdr[13] << 8);
    last = hdr[14] | (hdr[15] << 8);
    n = last - first + 1;
    if ((hdr[5] & 0x7f) != 0 || w != 16 || h != 16 || first < 0 || last > 255 ||
        n <= 0) {
        fclose(fp);
        return -1;
    }
    for (i = 0; i < n; i++) {
        unsigned char raw[32];

        if (fread(raw, 1, sizeof raw, fp) != sizeof raw) {
            fclose(fp);
            return -1;
        }
        for (y = 0; y < 16; y++)
            f->row[first + i][y] =
                (unsigned short)((raw[y * 2] << 8) | raw[y * 2 + 1]);
    }
    fclose(fp);
    f->loaded = 1;
    return 0;
}

void txt_init(TextPlane *t, const TextFont *f)
{
    memset(t, 0, sizeof *t);
    t->font = f;
}

void txt_clear(TextPlane *t)
{
    memset(t->glyph, 0, sizeof t->glyph);
    memset(t->half, 0, sizeof t->half);
    memset(t->attr, 0, sizeof t->attr);
}

static void put_cell(TextPlane *t, int cell, int attr, int glyph, int half)
{
    int row = cell / TXT_COLS, col = cell % TXT_COLS;

    if (cell < 0 || row >= TXT_ROWS)
        return;
    t->glyph[row][col] = (unsigned char)glyph;
    t->half[row][col] = (unsigned char)half;
    t->attr[row][col] = (unsigned char)(attr ? attr : TXT_ATTR_DISPLAY);
}

/* One 16x16 character takes the two cells the original writes. */
static void put_char(TextPlane *t, int cell, int attr, int ch)
{
    put_cell(t, cell, attr, ch & 0xff, 0);
    put_cell(t, cell + 1, attr, ch & 0xff, 1);
}

void txt_puts(TextPlane *t, int row, int col, int attr, const char *s)
{
    int cell = row * TXT_COLS + col;

    for (; *s; s++, cell += 2)
        put_char(t, cell, attr, (unsigned char)*s);
}

void txt_putc(TextPlane *t, int row, int col, int attr, int ch)
{
    put_char(t, row * TXT_COLS + col, attr, ch);
}

void txt_num5(TextPlane *t, int row, int col, int attr, long value)
{
    int cell = row * TXT_COLS + col + 8, i;
    unsigned long v = (unsigned long)(value < 0 ? 0 : value);

    for (i = 0; i < 5; i++) {
        put_char(t, cell, attr, (int)('0' + v % 10));
        v /= 10;
        cell -= 2;
    }
}

void txt_num2(TextPlane *t, int row, int col, int attr, int value)
{
    int cell = row * TXT_COLS + col;

    if (value < 0)
        value = 0;
    put_char(t, cell, attr, '0' + (value / 10) % 10);
    put_char(t, cell + 2, attr, '0' + value % 10);
}

void txt_draw(const TextPlane *t, Screen *s)
{
    int row, col, y, x;

    if (!t->font || !t->font->loaded)
        return;
    for (row = 0; row < TXT_ROWS; row++)
        for (col = 0; col < TXT_COLS; col++) {
            int attr = t->attr[row][col];
            int fg, bg, y0 = row * 16, x0 = col * 8;
            const unsigned short *g;

            if (!attr || !(attr & TXT_ATTR_DISPLAY))
                continue;
            /* bit7 green, bit6 red, bit5 blue - the palette holds them in that
             * order at SCR_TEXT. */
            fg = SCR_TEXT + ((attr >> 5) & 7);
            bg = -1;
            if (attr & TXT_ATTR_REVERSE) {
                bg = fg;
                fg = SCR_TEXT;          /* reversed text is black on the colour */
            }
            g = t->font->row[t->glyph[row][col]];
            for (y = 0; y < 16; y++) {
                unsigned char *dst = s->px + (long)(y0 + y) * SCR_W + x0;
                unsigned bits = t->half[row][col] ? (g[y] & 0xff) : (g[y] >> 8);

                if (y0 + y >= SCR_H)
                    break;
                if ((attr & TXT_ATTR_UNDER) && y == 15)
                    bits = 0xff;
                for (x = 0; x < 8; x++) {
                    if (bits & (0x80 >> x))
                        dst[x] = (unsigned char)fg;
                    else if (bg >= 0)
                        dst[x] = (unsigned char)bg;
                }
            }
        }
}
