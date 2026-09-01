/* Headless harness: run the reconstruction for N ticks and dump the 640x400
 * screen as PNGs, so it can be checked without opening a window.
 *
 *   frames <out-prefix> <tick>[,<tick>...] [--keys MASK] [--tap N] [--auto]
 *                                             [--god] [--quiet]
 *
 * --tap releases the fire buttons every other N frames, since the original
 * wants them let go of between charges, so a run actually drops more than one.
 * --auto plays instead: it lines the ship up over the nearest enemy and drops a
 * charge whenever it is roughly above one, which is enough to get through a
 * stage and so to exercise the items, the clear and the next stage.
 * --god stops the ship being hit, so a long run gets there without playing
 * well.  It is a harness flag only; nothing in the game sets it.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/bfnt.h"
#include "../src/video.h"
#include "../src/game.h"
#include "../src/text.h"

extern void png_indexed(const char *path, int w, int h, const unsigned char *px,
                        const unsigned char pal[256][3]);

/* Enough of a player to get through a stage: chase the nearest enemy that is
 * on screen and drop a charge each time the ship is over one. */
static unsigned autopilot(const Game *g, int t)
{
    int best = -1, bestd = 0x7fff, i;
    unsigned pad = 0;

    for (i = 1; i < MAX_ENT; i++) {
        int d;

        if (g->ent[i].y <= 0xf || g->ent[i].state < 10)
            continue;
        if (g->ent[i].x < 0 || g->ent[i].x > 0x240)
            continue;
        d = g->ent[i].x - g->px;
        if (d < 0)
            d = -d;
        if (d < bestd) {
            bestd = d;
            best = i;
        }
    }
    if (best >= 0) {
        int d = g->ent[best].x - g->px;

        if (d > 4)
            pad |= PAD_RIGHT;
        else if (d < -4)
            pad |= PAD_LEFT;
        /* The buttons have to be released between charges. */
        if (bestd < 0x30 && (t & 1))
            pad |= PAD_A;
    }
    return pad;
}

int main(int argc, char **argv)
{
    static const char *files[4] = {
        "orig/DEPTH.C32", "orig/DEPTH.C16", "orig/DEPTH.C08", "orig/DEPTH.BOS"
    };
    PatBank bank;
    Screen scr;
    Game game;
    TextFont font;
    unsigned char pal[256][3];
    int want[64], nwant = 0, maxtick = 0, base[4], i, t;
    unsigned keys = 0;
    int tap = 0, quiet = 0, auto_play = 0, god = 0;
    const char *prefix = argc > 1 ? argv[1] : "tmp/f";

    if (argc > 2) {
        char *s = argv[2], *p;

        while ((p = strtok(s, ",")) != NULL && nwant < 64) {
            want[nwant++] = atoi(p);
            s = NULL;
        }
    }
    for (i = 3; i < argc; i++) {
        if (!strcmp(argv[i], "--keys") && i + 1 < argc)
            keys = (unsigned)strtoul(argv[++i], NULL, 0);
        else if (!strcmp(argv[i], "--tap") && i + 1 < argc)
            tap = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--auto"))
            auto_play = 1;
        else if (!strcmp(argv[i], "--god"))
            god = 1;
        else if (!strcmp(argv[i], "--quiet"))
            quiet = 1;
    }
    for (i = 0; i < nwant; i++)
        if (want[i] > maxtick)
            maxtick = want[i];

    pat_init(&bank);
    for (i = 0; i < 4; i++)
        if ((base[i] = pat_load(&bank, files[i])) < 0) {
            fprintf(stderr, "cannot load %s\n", files[i]);
            return 1;
        }
    if (txt_font_load(&font, "orig/DEPTH.FNT") < 0) {
        fprintf(stderr, "cannot load orig/DEPTH.FNT\n");
        return 1;
    }
    scr_init(&scr, &bank);
    game_init(&game, &scr, &bank, &font, base[0], base[1], base[2], base[3]);
    game.invuln = god;

    memset(pal, 0, sizeof pal);
    for (i = 0; i < SCR_COLOURS; i++)
        memcpy(pal[i], scr.pal[i], 3);
    for (i = SCR_COLOURS; i < 256; i++) {
        pal[i][0] = 0xff;
        pal[i][2] = 0xff;
    }

    for (t = 1; t <= maxtick; t++) {
        game.pad = keys;
        if (tap > 0 && (t / tap) % 2)
            game.pad &= ~(unsigned)(PAD_A | PAD_B);
        if (auto_play)
            game.pad = autopilot(&game, t);
        game_tick(&game);
        for (i = 0; i < nwant; i++)
            if (want[i] == t) {
                char path[512];
                int c;

                for (c = 0; c < SCR_COLOURS; c++)
                    memcpy(pal[c], scr.pal[c], 3);
                sprintf(path, "%s%04d.png", prefix, t);
                png_indexed(path, SCR_W, SCR_H, scr.px, pal);
                if (!quiet)
                    printf("t=%-5d stage=%d type=%d score=%ld lives=%d "
                           "kills=%d/%d item=%d@%d,%d  %s\n",
                           t, game.stage, game.type, game.score, game.lives,
                           game.kills, game.quota, game.item_kind, game.item_x,
                           game.item_y, path);
            }
    }
    pat_free(&bank);
    return 0;
}
