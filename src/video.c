#include "video.h"
#include <string.h>

void scr_init(Screen *s, const PatBank *bank)
{
    int i;

    memset(s, 0, sizeof *s);
    s->bank = bank;
    /* The text plane's eight digital colours: bit0 blue, bit1 red, bit2 green,
     * matching how the attribute byte packs them. */
    for (i = 0; i < 8; i++) {
        s->pal[SCR_TEXT + i][0] = (i & 2) ? 0xff : 0;
        s->pal[SCR_TEXT + i][1] = (i & 4) ? 0xff : 0;
        s->pal[SCR_TEXT + i][2] = (i & 1) ? 0xff : 0;
    }
}

void scr_clear(Screen *s, unsigned char index)
{
    memset(s->px, index, sizeof s->px);
}

void scr_palette(Screen *s, const unsigned char table[16][3])
{
    int i;

    for (i = 0; i < 16; i++)
        scr_colour(s, i, table[i][0], table[i][1], table[i][2]);
}

void scr_colour(Screen *s, int index, int r, int g, int b)
{
    if (index < 0 || index > 15)
        return;
    /* The hardware takes 4 bits per channel; spread them over 8. */
    s->pal[index][0] = (unsigned char)((r & 15) * 17);
    s->pal[index][1] = (unsigned char)((g & 15) * 17);
    s->pal[index][2] = (unsigned char)((b & 15) * 17);
}

void scr_palette_fade(Screen *s, const unsigned char table[16][3], int level)
{
    int i, c;

    for (i = 0; i < 16; i++) {
        int v[3];

        for (c = 0; c < 3; c++)
            v[c] = table[i][c] < level ? table[i][c] : level;
        scr_colour(s, i, v[0], v[1], v[2]);
    }
}

void scr_palette_flash(Screen *s, const unsigned char table[16][3], int level)
{
    int i, c;

    for (i = 0; i < 16; i++) {
        int v[3];

        for (c = 0; c < 3; c++)
            v[c] = level < table[i][c] ? table[i][c] : level;
        scr_colour(s, i, v[0], v[1], v[2]);
    }
}

static void blit(Screen *s, int x, int y, int id, int opaque)
{
    const Pattern *p;
    int row;

    if (!s->bank || id < 0 || id >= s->bank->count)
        return;
    p = &s->bank->pat[id];
    if (!p->px)
        return;

    for (row = 0; row < p->h; row++) {
        int dy = y + row, x0 = 0, len = p->w;
        const unsigned char *src;
        unsigned char *dst;

        if (dy < 0 || dy >= SCR_H)
            continue;
        if (x < 0)
            x0 = -x;
        if (x + len > SCR_W)
            len = SCR_W - x;
        if (len <= x0)
            continue;
        src = p->px + (long)row * p->w;
        dst = s->px + (long)dy * SCR_W + x;
        if (opaque) {
            memcpy(dst + x0, src + x0, (size_t)(len - x0));
        } else {
            int i;
            for (i = x0; i < len; i++)
                if (src[i])
                    dst[i] = src[i];
        }
    }
}

void scr_pat(Screen *s, int x, int y, int id)        { blit(s, x, y, id, 0); }

/* FUN_1000_c788's third argument replicates every pixel into a square that
 * many across, which is how the ending's cast list gets 64-pixel portraits out
 * of the same 32-pixel patterns the stages use. */
void scr_pat_scale(Screen *s, int x, int y, int id, int scale)
{
    const Pattern *p;
    int row, col, dx, dy;

    if (scale < 2) {
        blit(s, x, y, id, 0);
        return;
    }
    if (!s->bank || id < 0 || id >= s->bank->count)
        return;
    p = &s->bank->pat[id];
    if (!p->px)
        return;
    for (row = 0; row < p->h; row++)
        for (col = 0; col < p->w; col++) {
            unsigned char c = p->px[(long)row * p->w + col];

            if (!c)
                continue;
            for (dy = 0; dy < scale; dy++) {
                int py = y + row * scale + dy;

                if (py < 0 || py >= SCR_H)
                    continue;
                for (dx = 0; dx < scale; dx++) {
                    int px = x + col * scale + dx;

                    if (px >= 0 && px < SCR_W)
                        s->px[(long)py * SCR_W + px] = c;
                }
            }
        }
}
void scr_pat_opaque(Screen *s, int x, int y, int id) { blit(s, x, y, id, 1); }

/* ---------------------------------------------------------- the GRCG planes */

/* FUN_1000_de0c fills rows y0..y1 between columns x0..x1 with the bits the
 * GRCG holds; here the plane is one bit of the colour index.  The original
 * clips x into 0..0x27f and y into 0..199 and does nothing at all when the
 * range comes out backwards. */
#define PLANE_ROWS 200

void scr_plane_rect(Screen *s, int x0, int x1, int y0, int y1, int bit)
{
    int x, y;

    if (y0 >= PLANE_ROWS || y1 < y0)
        return;
    if (y0 < 0)
        y0 = 0;
    if (y1 >= PLANE_ROWS)
        y1 = PLANE_ROWS - 1;
    if (x0 >= SCR_W || x1 < x0)
        return;
    if (x0 < 0)
        x0 = 0;
    if (x1 >= SCR_W)
        x1 = SCR_W - 1;
    for (y = y0; y <= y1; y++)
        for (x = x0; x <= x1; x++)
            s->px[(long)y * SCR_W + x] |= (unsigned char)bit;
}

void scr_plane_clear(Screen *s, int y0, int y1, int bit)
{
    long i;

    if (y0 < 0)
        y0 = 0;
    if (y1 >= PLANE_ROWS)
        y1 = PLANE_ROWS - 1;
    for (i = (long)y0 * SCR_W; i < (long)(y1 + 1) * SCR_W; i++)
        s->px[i] &= (unsigned char)~bit;
}

void scr_plane_trap(Screen *s, int y0, int xl0, int xr0,
                    int y1, int xl1, int xr1, int bit)
{
    int y, span, t;

    if (y1 < y0) {              /* the original sorts the two edges by y */
        t = y0; y0 = y1; y1 = t;
        t = xl0; xl0 = xl1; xl1 = t;
        t = xr0; xr0 = xr1; xr1 = t;
    }
    if (xr0 < xl0) { t = xl0; xl0 = xr0; xr0 = t; }
    if (xr1 < xl1) { t = xl1; xl1 = xr1; xr1 = t; }
    span = y1 - y0;
    for (y = y0; y <= y1; y++) {
        int l = span ? xl0 + (xl1 - xl0) * (y - y0) / span : xl0;
        int r = span ? xr0 + (xr1 - xr0) * (y - y0) / span : xr0;

        scr_plane_rect(s, l, r, y, y, bit);
    }
}
