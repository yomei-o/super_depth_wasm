#include "bfnt.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static unsigned rd16(const unsigned char *p) { return p[0] | (p[1] << 8); }

void pat_init(PatBank *b)
{
    memset(b, 0, sizeof *b);
}

void pat_free(PatBank *b)
{
    free(b->store);
    memset(b, 0, sizeof *b);
}

static unsigned char *reserve(PatBank *b, long n)
{
    if (b->store_used + n > b->store_cap) {
        long cap = b->store_cap ? b->store_cap * 2 : 65536;
        unsigned char *s;

        while (cap < b->store_used + n)
            cap *= 2;
        s = (unsigned char *)realloc(b->store, (size_t)cap);
        if (!s)
            return NULL;
        /* The Pattern pixel pointers move with the block, so fix them up. */
        if (s != b->store) {
            int i;
            for (i = 0; i < b->count; i++)
                if (b->pat[i].px)
                    b->pat[i].px = s + (b->pat[i].px - b->store);
        }
        b->store = s;
        b->store_cap = cap;
    }
    return b->store + b->store_used;
}

int pat_load(PatBank *b, const char *path)
{
    FILE *f = fopen(path, "rb");
    unsigned char hdr[0x20];
    unsigned char *raw = NULL;
    int bpp, w, h, first, last, n, i, base;
    long per, need;

    if (!f)
        return -1;
    if (fread(hdr, 1, sizeof hdr, f) != sizeof hdr ||
        memcmp(hdr, "BFNT", 4) != 0) {
        fclose(f);
        return -1;
    }
    bpp = (hdr[5] & 0x7f) + 1;
    w = (int)rd16(hdr + 8);
    h = (int)rd16(hdr + 10);
    first = (int)rd16(hdr + 12);
    last = (int)rd16(hdr + 14);
    n = last - first + 1;
    if (w <= 0 || h <= 0 || (w & 7) || n <= 0 || (bpp != 1 && bpp != 4)) {
        fclose(f);
        return -1;
    }
    if (hdr[5] & 0x80) {
        /* An embedded palette would sit between the header and the pixels;
         * Super Depth has none, so refuse rather than guess its size. */
        fclose(f);
        return -1;
    }

    per = (long)w * h * bpp / 8;          /* bytes per character in the file */
    need = per * n;
    raw = (unsigned char *)malloc((size_t)need);
    if (!raw || fread(raw, 1, (size_t)need, f) != (size_t)need) {
        free(raw);
        fclose(f);
        return -1;
    }
    fclose(f);

    if (b->count + n > PAT_MAX) {
        free(raw);
        return -1;
    }
    if (!reserve(b, (long)w * h * n)) {
        free(raw);
        return -1;
    }

    base = b->count;
    for (i = 0; i < n; i++) {
        unsigned char *out = b->store + b->store_used;
        const unsigned char *src = raw + (long)i * per;
        int y;

        for (y = 0; y < h; y++) {
            unsigned char *row = out + (long)y * w;
            int x;

            if (bpp == 4) {
                const unsigned char *s = src + (long)y * (w / 2);

                for (x = 0; x < w; x += 2) {
                    unsigned char byte = *s++;
                    row[x] = byte >> 4;        /* high nibble is the left pixel */
                    row[x + 1] = byte & 15;
                }
            } else {
                const unsigned char *s = src + (long)y * (w / 8);

                for (x = 0; x < w; x++)
                    row[x] = (s[x >> 3] & (0x80 >> (x & 7))) ? 15 : 0;
            }
        }
        b->pat[base + i].w = w;
        b->pat[base + i].h = h;
        b->pat[base + i].px = out;
        b->store_used += (long)w * h;
        b->count++;
    }
    free(raw);
    return base;
}
