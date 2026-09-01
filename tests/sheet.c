/* Load the four BFNT files the way the game does and dump what came out, so the
 * C loader can be checked against tools/bfnt.py and against the original's own
 * arithmetic.
 *
 *   sheet [outdir]
 *
 * Prints the base pattern number each file got - the numbers the game keeps at
 * DS:0x1d42 (c32), 0x1d46 (c16), 0x1dac (c08) and one more for bos - then writes
 * one contact sheet per file plus a 640x400 screen showing the boot palette.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/bfnt.h"
#include "../src/video.h"
#include "../src/pal.h"

extern void png_indexed(const char *path, int w, int h, const unsigned char *px,
                        const unsigned char pal[256][3]);

static void pal256(const Screen *s, unsigned char out[256][3])
{
    int i;

    memset(out, 0, 256 * 3);
    for (i = 0; i < 16; i++) {
        out[i][0] = s->pal[i][0];
        out[i][1] = s->pal[i][1];
        out[i][2] = s->pal[i][2];
    }
    /* Make the unused indices obvious if anything ever writes one. */
    for (i = 16; i < 256; i++) {
        out[i][0] = 0xff;
        out[i][1] = 0x00;
        out[i][2] = 0xff;
    }
}

int main(int argc, char **argv)
{
    static const char *files[4] = {
        "orig/DEPTH.C32", "orig/DEPTH.C16", "orig/DEPTH.C08", "orig/DEPTH.BOS"
    };
    static const char *names[4] = { "c32", "c16", "c08", "bos" };
    const char *outdir = argc > 1 ? argv[1] : "tmp";
    PatBank bank;
    Screen scr;
    unsigned char pal[256][3];
    int base[4], i, k;

    pat_init(&bank);
    /* Same order as FUN_1000_04ba loads them. */
    for (i = 0; i < 4; i++) {
        base[i] = pat_load(&bank, files[i]);
        if (base[i] < 0) {
            fprintf(stderr, "cannot load %s\n", files[i]);
            return 1;
        }
        printf("%-16s base %3d, %dx%d\n", files[i], base[i],
               bank.pat[base[i]].w, bank.pat[base[i]].h);
    }
    printf("%d patterns total, %ld bytes of pixels\n",
           bank.count, bank.store_used);

    scr_init(&scr, &bank);
    scr_palette(&scr, SD_PAL_BOOT);
    pal256(&scr, pal);

    /* One sheet per file, 8 across. */
    for (k = 0; k < 4; k++) {
        int n = (k + 1 < 4 ? base[k + 1] : bank.count) - base[k];
        int pw = bank.pat[base[k]].w, ph = bank.pat[base[k]].h;
        int cols = 8, rows = (n + cols - 1) / cols;
        int gw = cols * (pw + 1), gh = rows * (ph + 1);
        unsigned char *img = (unsigned char *)calloc((size_t)gw * gh, 1);
        char path[512];

        for (i = 0; i < n; i++) {
            const Pattern *p = &bank.pat[base[k] + i];
            int cx = (i % cols) * (pw + 1), cy = (i / cols) * (ph + 1), y;

            for (y = 0; y < p->h; y++)
                memcpy(img + (long)(cy + y) * gw + cx, p->px + (long)y * p->w,
                       (size_t)p->w);
        }
        sprintf(path, "%s/sheet_%s.png", outdir, names[k]);
        png_indexed(path, gw, gh, img, pal);
        printf("wrote %s (%dx%d, %d patterns)\n", path, gw, gh, n);
        free(img);
    }

    /* A 640x400 screen: every pattern laid out on the real surface, drawn
     * through scr_pat so the transparency path gets exercised too. */
    scr_clear(&scr, 8);
    {
        int x = 0, y = 0, id;

        for (id = 0; id < bank.count; id++) {
            const Pattern *p = &bank.pat[id];

            if (x + p->w > SCR_W) {
                x = 0;
                y += 34;
            }
            if (y + p->h > SCR_H)
                break;
            scr_pat(&scr, x, y, id);
            x += p->w + 2;
        }
    }
    {
        char path[512];
        sprintf(path, "%s/screen.png", outdir);
        png_indexed(path, SCR_W, SCR_H, scr.px, pal);
        printf("wrote %s (%dx%d)\n", path, SCR_W, SCR_H);
    }

    pat_free(&bank);
    return 0;
}
