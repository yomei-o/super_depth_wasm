/* Super Depth's sound: BGMLIB's MML player and its effects, on one square wave.
 *
 * The PC-98 has a single beeper - 8253 counter 1, divisor written to port
 * 0x3fdb, gated by port 0x37 - so the "three parts" in DEPTH.BGM are one
 * oscillator being switched between three voices fast enough to hear as a
 * chord.  This reproduces that switching rather than mixing three tones,
 * because the switching is most of what the music sounds like.
 *
 * Everything below is the original's, read out of the BGMLIB code that is
 * statically linked into DEPTH.EXE:
 *
 *   1000:d81a   the 8253 interrupt.  Reloads the divisor every time from
 *               (base * 120) / tempo, where base is the machine's 1kHz value,
 *               so the interrupt rate is 1000 * tempo / 120 Hz.  Counts 1..20:
 *               on 20 it services the music, on every multiple of 4 below that
 *               it steps the sound effect.
 *   1000:d8dc   the music tick.  Services ONE of the three voices per call and
 *               moves on, so each voice is stepped every 60 interrupts, and
 *               picks which voice the beeper actually plays.
 *   1000:d4f2   the MML interpreter.
 *   1000:db32   note -> divisor, out of the table at DS:0x0eee.
 *   1000:daf2   effect frequency -> divisor.
 *   1000:d04e   the file parser (see snd_load).
 *
 * The upshot for timing: one count of a voice's note counter is 60 interrupts,
 * i.e. 60 / (1000 * T / 120) = 7.2 / T seconds, and a quarter note is 8 counts,
 * so 57.6 / T seconds.  That is 4% faster than a metronome at T beats per
 * minute, which is what the library does and so what is done here.
 */
#ifndef SOUND_H
#define SOUND_H

#define SND_RATE     22050
#define SND_SONGS    16
#define SND_EFFECTS  16
#define SND_VOICES   3
#define SND_EFF_MAX  256

/* The loaded DEPTH.BGM and DEPTH.EFS. */
typedef struct {
    char *text;                              /* one block; the parts point into it */
    const char *part[SND_SONGS + 1][SND_VOICES];
    int songs;
    short eff[SND_EFFECTS + 1][SND_EFF_MAX]; /* frequencies in Hz, 0 terminates */
    int efflen[SND_EFFECTS + 1];
    int effects;
    int loaded;
} SndData;

typedef struct {
    const char *p;
    int note;        /* the character, 'H' is a rest */
    int octave, len, deflen, ticks, nflag;
} SndVoice;

typedef struct {
    const SndData *data;
    int playing, loop, song, tempo;
    SndVoice v[SND_VOICES];
    int cur, ended;

    int eff, effpos, effplaying;

    int isr;             /* DS:0x185e, 1..20 */
    int divisor;         /* what was last written to the beeper */
    int gate;            /* out(0x37, 6) on / 7 off */

    unsigned phase;      /* 16.16 fraction of a square-wave period */
    long acc;            /* samples left before the next interrupt, 16.16 */
} Snd;

/* Song numbers, from the comment block at the top of DEPTH.BGM. */
#define SND_BIO        1
#define SND_THEME      2
#define SND_SEA        3
#define SND_SKY        4
#define SND_SPACE      5
#define SND_BOSS       6
#define SND_GAMEOVER   7
#define SND_NAME       8
#define SND_SEA_CLEAR  9
#define SND_SKY_CLEAR 10
#define SND_BOSS_CLR1 11
#define SND_BOSS_CLR2 12
#define SND_BOSS_CLR3 13
#define SND_ENDING    14
#define SND_ALARM     15

/* Effect numbers, from the calls to FUN_1000_cff4 in the stage code. */
#define SFX_CHARGE   1   /* dropping a depth charge */
#define SFX_ENEMY    2   /* an enemy firing */
#define SFX_KILL     3   /* an enemy destroyed */
#define SFX_HIT      4   /* the ship hit */
#define SFX_BOSS     5
#define SFX_ITEM     6   /* picking an item up */

int  snd_load(SndData *d, const char *bgm_path, const char *efs_path);
void snd_free(SndData *d);

void snd_init(Snd *s, const SndData *d);
void snd_play(Snd *s, int song);      /* FUN_1000_cf6a + FUN_1000_cf44 */
void snd_stop(Snd *s);                /* FUN_1000_cf2c */
void snd_effect(Snd *s, int n);       /* FUN_1000_cff4 */

/* Render `frames` samples of signed 16-bit mono at SND_RATE. */
void snd_render(Snd *s, short *out, int frames);

#endif
