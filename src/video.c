#include "video.h"
#include <string.h>

void scr_init(Screen *s, const PatBank *bank)
{
    memset(s, 0, sizeof *s);
    s->bank = bank;
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
void scr_pat_opaque(Screen *s, int x, int y, int id) { blit(s, x, y, id, 1); }
