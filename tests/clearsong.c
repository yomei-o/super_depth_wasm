/* Clearing a stage must hand the music back, not stop it: the original's
 * animation ends on cf08 (wait for the jingle) and the stage then calls
 * cf6a(type + 2) at 0x20f5.  Enter stage 2 fresh - the SEA -> SKY lift - and
 * watch what the synth is playing on the way through. */
#include <stdio.h>
#include "../src/bfnt.h"
#include "../src/video.h"
#include "../src/game.h"
#include "../src/text.h"
#include "../src/sound.h"

static PatBank bank; static Screen scr; static Game game; static TextFont font;
static SndData sdata; static Snd snd;

int main(void)
{
    static const char *files[4] = { "orig/DEPTH.C32","orig/DEPTH.C16","orig/DEPTH.C08","orig/DEPTH.BOS" };
    int base[4], i, cut = 0, bad = 0;

    pat_init(&bank);
    for (i = 0; i < 4; i++) base[i] = pat_load(&bank, files[i]);
    txt_font_load(&font, "orig/DEPTH.FNT");
    scr_init(&scr, &bank);
    game_init(&game, &scr, &bank, &font, base[0], base[1], base[2], base[3]);
    if (snd_load(&sdata, "orig/DEPTH.BGM", "orig/DEPTH.EFS") < 0) { puts("no sound"); return 1; }
    snd_init(&snd, &sdata);
    game_sound(&game, &snd);

    game.last_stage = -1;
    game_stage_start(&game, 2);
    printf("cut starts: state=%d kind=%d song=%d playing=%d\n",
           game.state, game.cut_kind, snd.song, snd.playing);
    if (snd.song != SND_SEA_CLEAR) { puts("FAIL: the lift-off jingle is not what is playing"); bad++; }

    for (i = 0; i < 4000 && game.state == GS_CUT; i++) {
        game.pad = 0;
        game_tick(&game);
        /* the synth runs on its own clock; a frame is 22050/60 samples */
        { static short buf[SND_RATE / 60 + 4]; snd_render(&snd, buf, SND_RATE / 60); }
        cut++;
    }
    printf("cut ends after %d frames: state=%d song=%d playing=%d loop=%d\n",
           cut, game.state, snd.song, snd.playing, snd.loop);
    if (snd.song != game.type + 2) { printf("FAIL: song %d, wanted the stage's own %d\n", snd.song, game.type + 2); bad++; }
    if (!snd.playing) { puts("FAIL: nothing is playing - this is the bug"); bad++; }
    if (!snd.loop) { puts("FAIL: the stage song must loop"); bad++; }
    puts(bad ? "BAD" : "ok");
    return bad != 0;
}
