/* Headless harness: run the reconstruction for N ticks and dump the 640x400
 * screen as PNGs, so it can be checked without opening a window.
 *
 *   frames <out-prefix> <tick>[,<tick>...] [--keys MASK] [--tap N] [--auto]
 *                                    [--god] [--bossweak]
 *                                    [--record] [--name] [--fresh] [--quiet]
 *                                    [--trace] [--keys2 MASK --at N]
 *
 * --keys2 with --at swaps the held keys over part way through, which is the
 * only way to exercise anything that wants a key let go of - the pause, for
 * one.
 *                                    [--wav OUT.WAV] [--wav-from TICK]
 *                                    [--stage N]
 *
 * --tap releases the fire buttons every other N frames, since the original
 * wants them let go of between charges, so a run actually drops more than one.
 * --auto plays instead: it lines the ship up over the nearest enemy and drops a
 * charge whenever it is roughly above one, which is enough to get through a
 * stage and so to exercise the items, the clear and the next stage.
 * --god stops the ship being hit, so a long run gets there without playing
 * well.  It is a harness flag only; nothing in the game sets it.
 * --wav-from starts that recording later, which is how the title's music is
 * checked now that the Bio_100% logo plays its own jingle first.
 * --wav records what the beeper does over the same run, which is the only way
 * to check the music and the effects without a sound card.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/bfnt.h"
#include "../src/video.h"
#include "../src/game.h"
#include "../src/sound.h"
#include "../src/text.h"

extern void png_indexed(const char *path, int w, int h, const unsigned char *px,
                        const unsigned char pal[256][3]);

static void put32(FILE *f, unsigned v)
{
    fputc(v & 0xff, f); fputc((v >> 8) & 0xff, f);
    fputc((v >> 16) & 0xff, f); fputc((v >> 24) & 0xff, f);
}

static void put16(FILE *f, unsigned v)
{
    fputc(v & 0xff, f); fputc((v >> 8) & 0xff, f);
}

static void write_wav(const char *path, const short *pcm, long n)
{
    FILE *f = fopen(path, "wb");
    long i;

    if (!f)
        return;
    fwrite("RIFF", 1, 4, f);
    put32(f, (unsigned)(36 + n * 2));
    fwrite("WAVEfmt ", 1, 8, f);
    put32(f, 16);
    put16(f, 1);
    put16(f, 1);
    put32(f, SND_RATE);
    put32(f, SND_RATE * 2);
    put16(f, 2);
    put16(f, 16);
    fwrite("data", 1, 4, f);
    put32(f, (unsigned)(n * 2));
    for (i = 0; i < n; i++)
        put16(f, (unsigned)(unsigned short)pcm[i]);
    fclose(f);
    printf("%s  %.2fs of sound\n", path, (double)n / SND_RATE);
}

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
        if (g->ent[i].x < -0x20 || g->ent[i].x > 0x240)
            continue;
        if (g->type == 4 && i != 1)
            continue;                    /* the boss is one body in slot 1 */
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

        if (g->type >= 3) {
            /* SPACE and BOSS fire sideways, so line up in y instead and pick
             * the gun that points at the target.  On a boss stage aim at the
             * weak band rather than the top of the body, and back off in x so
             * the shots have somewhere to travel. */
            int ty = g->ent[best].y +
                     (g->type == 4 ? (g->stage == 4 ? 0x28 : 0x18) : 0);
            int dy = ty - g->py;

            if (dy > 4)
                pad |= PAD_DOWN;
            else if (dy < -4)
                pad |= PAD_UP;
            if (g->type == 4) {
                if (d < 0 && g->px < 0x180)
                    pad |= PAD_RIGHT;
                else if (d > 0 && g->px > 0xa0)
                    pad |= PAD_LEFT;
            }
            if (t & 1)
                pad |= (d < 0) ? PAD_A : PAD_B;
            return pad;
        }
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
    SndData snddata;
    Snd snd;
    const char *wav = NULL;
    int wav_from = 0;           /* the first tick that goes into the WAV */
    short *pcm = NULL;
    long pcmn = 0, pcmcap = 0;
    unsigned char pal[256][3];
    int want[64], nwant = 0, maxtick = 0, base[4], i, t;
    unsigned keys = 0;
    int tap = 0, quiet = 0, auto_play = 0, god = 0, start_stage = 0;
    int trace = 0, last_state = -1, last_phase = -1;
    unsigned keys2 = 0;
    int keys2_at = -1;
    int boss_weak = 0, record = 0, fresh = 0, name_entry = 0;
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
        else if (!strcmp(argv[i], "--bossweak"))
            boss_weak = 1;
        else if (!strcmp(argv[i], "--record"))
            record = 1;
        else if (!strcmp(argv[i], "--fresh"))
            fresh = 1;
        else if (!strcmp(argv[i], "--name"))
            name_entry = 1;
        else if (!strcmp(argv[i], "--quiet"))
            quiet = 1;
        else if (!strcmp(argv[i], "--keys2") && i + 1 < argc)
            keys2 = (unsigned)strtoul(argv[++i], NULL, 0);
        else if (!strcmp(argv[i], "--at") && i + 1 < argc)
            keys2_at = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--trace"))
            trace = 1;
        else if (!strcmp(argv[i], "--wav") && i + 1 < argc)
            wav = argv[++i];
        else if (!strcmp(argv[i], "--wav-from") && i + 1 < argc)
            wav_from = atoi(argv[++i]);
        else if (!strcmp(argv[i], "--stage") && i + 1 < argc)
            start_stage = atoi(argv[++i]);
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
    game.boss_weak = boss_weak;
    record_load(&game, "orig/DEPTH.SCR", "tmp/DEPTH.SCR");
    if (record)
        record_start(&game);
    if (name_entry) {
        /* Pretend a run just ended with a score good enough for the table. */
        game_stage_start(&game, 1);
        game.score = 99999;
        record_start(&game);
        name_start(&game, record_insert(&game));
    }
    if (start_stage > 0) {
        /* --fresh enters the stage the way finishing the one before does, so
         * the between-stage animation plays; without it the stage is entered
         * as a retry and says "Ready". */
        game.last_stage = fresh ? 0 : start_stage;
        game_stage_start(&game, start_stage);
    }
    if (wav) {
        if (snd_load(&snddata, "orig/DEPTH.BGM", "orig/DEPTH.EFS") < 0) {
            fprintf(stderr, "cannot read orig/DEPTH.BGM or orig/DEPTH.EFS\n");
            return 1;
        }
        snd_init(&snd, &snddata);
        game_sound(&game, &snd);
        pcmcap = (long)maxtick * SND_RATE * 20 / 1000 + SND_RATE;
        pcm = (short *)malloc((size_t)pcmcap * sizeof *pcm);
        if (!pcm)
            return 1;
    }

    memset(pal, 0, sizeof pal);
    for (i = 0; i < SCR_COLOURS; i++)
        memcpy(pal[i], scr.pal[i], 3);
    for (i = SCR_COLOURS; i < 256; i++) {
        pal[i][0] = 0xff;
        pal[i][2] = 0xff;
    }

    for (t = 1; t <= maxtick; t++) {
        if (wav && t >= wav_from) {
            /* One frame's worth of sound, at the rate the stage runs at. */
            long n = (long)game_frame_ms(&game) * SND_RATE / 1000;

            if (pcmn + n <= pcmcap) {
                snd_render(&snd, pcm + pcmn, (int)n);
                pcmn += n;
            }
        }
        game.pad = (keys2_at >= 0 && t >= keys2_at) ? keys2 : keys;
        if (tap > 0 && (t / tap) % 2)
            game.pad &= ~(unsigned)(PAD_A | PAD_B);
        if (auto_play)
            game.pad = autopilot(&game, t);
        game_tick(&game);
        /* --trace prints every state change, so a run can be checked for
         * having actually got somewhere rather than just not crashing. */
        if (trace && ((int)game.state != last_state ||
                      (game.state == GS_END && game.end_phase != last_phase))) {
            static const char *const NAME[] = {
                "opening", "title", "record", "cut", "name", "fade-in",
                "play", "flash-up", "flash-down", "fade-out", "over", "end",
                "pause"
            };

            last_state = (int)game.state;
            last_phase = game.end_phase;
            printf("t=%-6d %s", t, NAME[last_state]);
            if (game.state == GS_END)
                printf(" phase=%d", game.end_phase);
            printf(" stage=%d\n", game.stage);
        }
        if (game.quit) {
            /* DS:0x184c went to 0.  depth.exe closes its window here. */
            printf("t=%-6d quit\n", t);
            break;
        }
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
    if (wav) {
        write_wav(wav, pcm, pcmn);
        free(pcm);
        snd_free(&snddata);
    }
    pat_free(&bank);
    return 0;
}
