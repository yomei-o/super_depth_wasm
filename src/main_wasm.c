/* Emscripten front end.
 *
 * Same core as the native build.  The 640x400 indexed screen is expanded through
 * the game's 16-colour palette into an RGBA buffer and the page does one
 * putImageData per frame - software all the way, no WebGL, since the machines
 * this is aimed at have none.
 *
 * The BFNT files are baked in with --embed-file so pat_load keeps using fopen()
 * exactly as the native build does.
 */
#include <emscripten.h>
#include <string.h>

#include "bfnt.h"
#include "video.h"
#include "game.h"
#include "text.h"
#include "sound.h"

static PatBank  g_bank;
static Screen   g_scr;
static Game     g_game;
static TextFont g_font;
static SndData  g_snddata;
static Snd      g_snd;
static short    g_pcm[8192];
static unsigned char g_rgba[SCR_W * SCR_H * 4];
static int g_ready;

static void expand(void)
{
    unsigned *out = (unsigned *)g_rgba;
    const unsigned char *src = g_scr.px;
    unsigned lut[256];
    int i, n = SCR_W * SCR_H;

    memset(lut, 0, sizeof lut);
    for (i = 0; i < SCR_COLOURS; i++)
        lut[i] = 0xff000000u | ((unsigned)g_scr.pal[i][2] << 16) |
                 ((unsigned)g_scr.pal[i][1] << 8) | g_scr.pal[i][0];
    for (i = 0; i < n; i++)
        out[i] = lut[src[i]];
}

EMSCRIPTEN_KEEPALIVE int sd_init(void)
{
    static const char *files[4] = {
        "/orig/DEPTH.C32", "/orig/DEPTH.C16", "/orig/DEPTH.C08", "/orig/DEPTH.BOS"
    };
    int base[4], i;

    pat_init(&g_bank);
    for (i = 0; i < 4; i++)
        if ((base[i] = pat_load(&g_bank, files[i])) < 0)
            return -1;
    if (txt_font_load(&g_font, "/orig/DEPTH.FNT") < 0)
        return -1;
    scr_init(&g_scr, &g_bank);
    game_init(&g_game, &g_scr, &g_bank, &g_font,
              base[0], base[1], base[2], base[3]);
    record_load(&g_game, "/orig/DEPTH.SCR");
    if (snd_load(&g_snddata, "/orig/DEPTH.BGM", "/orig/DEPTH.EFS") == 0) {
        snd_init(&g_snd, &g_snddata);
        game_sound(&g_game, &g_snd);
    }
    g_ready = 1;
    return 0;
}

EMSCRIPTEN_KEEPALIVE int sd_width(void)  { return SCR_W; }
EMSCRIPTEN_KEEPALIVE int sd_height(void) { return SCR_H; }
EMSCRIPTEN_KEEPALIVE unsigned char *sd_framebuffer(void) { return g_rgba; }
EMSCRIPTEN_KEEPALIVE int sd_patterns(void) { return g_bank.count; }
EMSCRIPTEN_KEEPALIVE int sd_stage(void) { return g_game.stage; }
EMSCRIPTEN_KEEPALIVE int sd_score(void) { return (int)g_game.score; }
EMSCRIPTEN_KEEPALIVE int sd_lives(void) { return g_game.lives; }
/* How long one game frame lasts: the original waits DS:0x1820 VSYNC ticks. */
EMSCRIPTEN_KEEPALIVE int sd_frame_ms(void) { return game_frame_ms(&g_game); }

/* The beeper.  The page pulls PCM at SND_RATE and resamples it into whatever
 * its AudioContext runs at; nothing is generated unless it asks, so a page that
 * never starts audio costs nothing. */
EMSCRIPTEN_KEEPALIVE int sd_audio_rate(void) { return SND_RATE; }
EMSCRIPTEN_KEEPALIVE int sd_audio_max(void)
{
    return (int)(sizeof g_pcm / sizeof g_pcm[0]);
}
EMSCRIPTEN_KEEPALIVE short *sd_audio(int frames)
{
    int cap = (int)(sizeof g_pcm / sizeof g_pcm[0]);

    if (frames > cap)
        frames = cap;
    if (frames < 0)
        frames = 0;
    snd_render(&g_snd, g_pcm, frames);
    return g_pcm;
}

EMSCRIPTEN_KEEPALIVE void sd_tick(unsigned pad)
{
    if (!g_ready)
        return;
    g_game.pad = pad;
    game_tick(&g_game);
    expand();
}

EMSCRIPTEN_KEEPALIVE void sd_set_stage(int stage)
{
    if (g_ready && stage >= 1 && stage <= 12)
        game_stage_start(&g_game, stage);
}

int main(void)
{
    return 0;   /* the page drives everything through the exports above */
}
