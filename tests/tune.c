/* Headless harness for the sound: render a song or an effect to a WAV.
 *
 *   tune song <n> <seconds> <out.wav>
 *   tune eff  <n> <seconds> <out.wav>
 *   tune list
 *
 * `list` prints what came out of DEPTH.BGM and DEPTH.EFS and, for each song,
 * the first few notes each part plays with the frequency they come out at - so
 * the parse can be checked without listening to anything.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../src/sound.h"

static void put32(FILE *f, unsigned v)
{
    fputc(v & 0xff, f);
    fputc((v >> 8) & 0xff, f);
    fputc((v >> 16) & 0xff, f);
    fputc((v >> 24) & 0xff, f);
}

static void put16(FILE *f, unsigned v)
{
    fputc(v & 0xff, f);
    fputc((v >> 8) & 0xff, f);
}

static void write_wav(const char *path, const short *pcm, long n)
{
    FILE *f = fopen(path, "wb");
    long i;

    if (!f) {
        fprintf(stderr, "cannot write %s\n", path);
        return;
    }
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
    printf("%s  %ld samples, %.2fs\n", path, n, (double)n / SND_RATE);
}

static const char *SONG_NAME[16] = {
    "", "Bio_100%", "THEME OF SUPER DEPTH", "SEA", "SKY", "SPACE", "BOSS",
    "GAME OVER", "NAME INN", "SEA CLEAR", "SKY CLEAR", "BOSS CLEAR1",
    "BOSS CLEAR2", "BOSS CLEAR3", "ENDING", "BOSS ALARM"
};

int main(int argc, char **argv)
{
    SndData data;
    Snd snd;
    const char *mode = argc > 1 ? argv[1] : "list";

    if (snd_load(&data, "orig/DEPTH.BGM", "orig/DEPTH.EFS") < 0) {
        fprintf(stderr, "cannot read orig/DEPTH.BGM or orig/DEPTH.EFS\n");
        return 1;
    }

    if (!strcmp(mode, "list")) {
        int i, k;

        printf("songs: %d\n", data.songs);
        for (i = 1; i <= data.songs; i++) {
            printf("%2d. %-22s", i, SONG_NAME[i < 16 ? i : 0]);
            for (k = 0; k < SND_VOICES; k++)
                printf(" part%d=%d", k + 1, (int)strlen(data.part[i][k]));
            printf("\n      1: %.60s\n", data.part[i][0]);
        }
        printf("effects: %d\n", data.effects);
        for (i = 1; i <= data.effects; i++)
            printf("%2d. %d steps, %d..%dHz\n", i, data.efflen[i],
                   data.eff[i][0], data.eff[i][data.efflen[i] - 2]);
        snd_free(&data);
        return 0;
    }

    if (argc < 5) {
        fprintf(stderr, "usage: tune song|eff <n> <seconds> <out.wav>\n");
        snd_free(&data);
        return 2;
    }
    {
        int n = atoi(argv[2]);
        double secs = atof(argv[3]);
        long frames = (long)(secs * SND_RATE);
        short *pcm = (short *)malloc((size_t)frames * sizeof *pcm);

        if (!pcm) {
            snd_free(&data);
            return 1;
        }
        snd_init(&snd, &data);
        if (!strcmp(mode, "song"))
            snd_play(&snd, n);
        else
            snd_effect(&snd, n);
        snd_render(&snd, pcm, (int)frames);
        write_wav(argv[4], pcm, frames);
        free(pcm);
    }
    snd_free(&data);
    return 0;
}
