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
