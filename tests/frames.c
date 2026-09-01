/* Headless harness: run the reconstruction for N ticks and dump the 640x400
 * screen as PNGs, so it can be checked without opening a window.
 *
 *   frames <out-prefix> <tick>[,<tick>...] [--keys MASK]
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/bfnt.h"
#include "../src/video.h"
#include "../src/game.h"

extern void png_indexed(const char *path, int w, int h, const unsigned char *px,
                        const unsigned char pal[256][3]);

int main(int argc, char **argv)
{
    static const char *files[4] = {
        "orig/DEPTH.C32", "orig/DEPTH.C16", "orig/DEPTH.C08", "orig/DEPTH.BOS"
    };
    PatBank bank;
    Screen scr;
    Game game;
    unsigned char pal[256][3];
    int want[64], nwant = 0, maxtick = 0, base[4], i, t;
    unsigned keys = 0;
    const char *prefix = argc > 1 ? argv[1] : "tmp/f";

    if (argc > 2) {
        char *s = argv[2], *p;

        while ((p = strtok(s, ",")) != NULL && nwant < 64) {
            want[nwant++] = atoi(p);
            s = NULL;
        }
    }
    for (i = 3; i < argc; i++)
        if (!strcmp(argv[i], "--keys") && i + 1 < argc)
            keys = (unsigned)strtoul(argv[++i], NULL, 0);
    for (i = 0; i < nwant; i++)
        if (want[i] > maxtick)
            maxtick = want[i];

    pat_init(&bank);
    for (i = 0; i < 4; i++)
        if ((base[i] = pat_load(&bank, files[i])) < 0) {
            fprintf(stderr, "cannot load %s\n", files[i]);
            return 1;
        }
    scr_init(&scr, &bank);
    game_init(&game, &scr, &bank, base[0], base[1], base[2], base[3]);

    memset(pal, 0, sizeof pal);
    for (i = 0; i < 16; i++)
        memcpy(pal[i], scr.pal[i], 3);
    for (i = 16; i < 256; i++) {
        pal[i][0] = 0xff;
        pal[i][2] = 0xff;
    }

    for (t = 1; t <= maxtick; t++) {
        game.pad = keys;
        game_tick(&game);
        for (i = 0; i < nwant; i++)
            if (want[i] == t) {
                char path[512];

                sprintf(path, "%s%04d.png", prefix, t);
                png_indexed(path, SCR_W, SCR_H, scr.px, pal);
                printf("t=%-5d stage=%d type=%d px=%d shots=%d  %s\n",
                       t, game.stage, game.type, game.px, game.shots_live, path);
            }
    }
    pat_free(&bank);
    return 0;
}
