#include "sound.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* The beeper's input clock on an 8MHz-family PC-98.  DEPTH.EXE reads the
 * system port to tell the two families apart and rescales the divisor by
 * 998/1229 for the 1.9968MHz one; the note table is in units of this clock, so
 * using it directly is the untouched case. */
#define BEEP_CLOCK 2457600
/* The 8253 divisor the interrupt is programmed with, before the tempo scaling:
 * ((in(0x42) & 0x20) ? 0x7cc : 0x99a).  This is the 8MHz-family value. */
#define ISR_BASE   0x99a

/* DS:0x0eee, indexed by the note character.  These are octave-2 divisors, so
 * 'C' is 2457600/37592 = 65.4Hz.  A sharp is the character plus 8 and a flat
 * plus 16, which is why B#, E#, C- and F- come out as the same 100 that a rest
 * uses - the original has no entry for them and plays 24kHz instead. */
static const unsigned short SND_NOTE[0x18] = {
    /* @ */      0,
    /* A */  22344, /* B */ 19904, /* C */ 37592, /* D */ 33496,
    /* E */  29832, /* F */ 28168, /* G */ 25080, /* H */   100,
    /* I */  21096, /* J */   100, /* K */ 35488, /* L */ 31608,
    /* M */    100, /* N */ 26568, /* O */ 23656, /* P */   100,
    /* Q */  23656, /* R */ 21096, /* S */   100, /* T */ 35488,
    /* U */  31608, /* V */   100, /* W */ 26568
};

/* DS:0x0f9e, indexed by octave. */
static const unsigned short SND_OCT[10] = { 100, 1, 1, 2, 4, 8, 16, 32, 64, 64 };

/* DS:0x0fae, indexed by note length: L1 is 32 counts, L4 is 8, L32 is 1. */
static const unsigned char SND_LEN[33] = {
    64, 32, 16, 16, 8, 8, 8, 8, 4, 4, 4, 4, 4, 4, 4, 4,
     2,  2,  2,  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1
};

/* ------------------------------------------------------------------ loading */

/* cl warns that the argument is const; the copy it makes is not. */
static char *slurp(const char *path, long *len)
{
    FILE *f = fopen(path, "rb");
    char *buf;
    long n;

    if (!f)
        return NULL;
    fseek(f, 0, SEEK_END);
    n = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (n < 0 || !(buf = (char *)malloc((size_t)n + 1))) {
        fclose(f);
        return NULL;
    }
    n = (long)fread(buf, 1, (size_t)n, f);
    fclose(f);
    buf[n] = 0;
    *len = n;
    return buf;
}

/* FUN_1000_d04e.  The file is three columns of MML: a comma or a colon moves to
 * the next column, a carriage return goes back to the first, `;` and `#` are
 * comments to end of line, `"` quotes text the original echoed to the screen,
 * spaces and tabs are dropped, lower case is folded up, and `*` ends the song.
 * So each part is the whole of its column, joined down the file. */
static int parse_bgm(SndData *d, const char *src, long len)
{
    long need = len + 3 * (SND_SONGS + 1) + 8;
    char *out;
    long i = 0, w = 0;
    int song = 1, col = 0;
    long start[SND_VOICES];
    int k;

    d->text = (char *)malloc((size_t)need);
    if (!d->text)
        return -1;
    out = d->text;
    for (k = 0; k < SND_VOICES; k++) {
        int n;

        for (n = 0; n <= SND_SONGS; n++)
            d->part[n][k] = "";
    }

    while (song <= SND_SONGS) {
        for (k = 0; k < SND_VOICES; k++) {
            start[k] = -1;
            d->part[song][k] = "";
        }
        col = 0;
        /* One song.  The three columns are written out one after another, so
         * each has to be gathered before the next can start; the file is small
         * enough to just scan it three times. */
        for (k = 0; k < SND_VOICES; k++) {
            long j = i;
            int c = 0;

            start[k] = w;
            col = 0;
            while (j < len) {
                c = (unsigned char)src[j++];
                if (c == '*')
                    break;
                if (c == 0x1a) {        /* the DOS end-of-text byte */
                    j = len;
                    break;
                }
                if (c == ';' || c == '#') {
                    while (j < len && src[j] != '\r')
                        j++;
                    continue;
                }
                if (c == '\r') {
                    col = 0;
                    continue;
                }
                if (c == '"') {
                    while (j < len && src[j] != '\r' && src[j] != '"')
                        j++;
                    if (j < len && src[j] == '"')
                        j++;
                    continue;
                }
                if (c == ',' || c == ':') {
                    if (++col > 2)
                        col = 2;
                    continue;
                }
                if (c == ' ' || c == '\t' || c == '\n')
                    continue;
                if (col == k) {
                    if (c >= 'a' && c <= 'z')
                        c -= 0x20;
                    out[w++] = (char)c;
                }
            }
            out[w++] = 0;
            if (k == SND_VOICES - 1)
                i = j;                  /* all three columns end at the same `*` */
        }
        for (k = 0; k < SND_VOICES; k++)
            d->part[song][k] = out + start[k];
        if (d->part[song][0][0] || d->part[song][1][0] || d->part[song][2][0])
            d->songs = song;
        song++;
        if (i >= len)
            break;
    }
    return 0;
}

/* FUN_1000_d2f8.  Decimal numbers with `;` comments; a zero ends one effect. */
static int parse_efs(SndData *d, const char *src, long len)
{
    long i = 0;
    int n = 1, count = 0;

    while (i < len && n <= SND_EFFECTS) {
        int c = (unsigned char)src[i];

        if (c == 0x1a)
            break;
        if (c == ';') {
            while (i < len && src[i] != '\r' && src[i] != '\n')
                i++;
            continue;
        }
        if (c >= '0' && c <= '9') {
            int v = 0;

            while (i < len && src[i] >= '0' && src[i] <= '9')
                v = v * 10 + (src[i++] - '0');
            if (count < SND_EFF_MAX)
                d->eff[n][count++] = (short)v;
            if (v == 0 || count == SND_EFF_MAX) {
                d->efflen[n] = count;
                d->effects = n;
                n++;
                count = 0;
            }
            continue;
        }
        i++;
    }
    return 0;
}

int snd_load(SndData *d, const char *bgm_path, const char *efs_path)
{
    char *bgm, *efs;
    long blen = 0, elen = 0;

    memset(d, 0, sizeof *d);
    bgm = slurp(bgm_path, &blen);
    if (!bgm)
        return -1;
    efs = slurp(efs_path, &elen);
    if (!efs) {
        free(bgm);
        return -1;
    }
    if (parse_bgm(d, bgm, blen) < 0) {
        free(bgm);
        free(efs);
        return -1;
    }
    parse_efs(d, efs, elen);
    free(bgm);
    free(efs);
    d->loaded = 1;
    return 0;
}

void snd_free(SndData *d)
{
    free(d->text);
    memset(d, 0, sizeof *d);
}

/* ------------------------------------------------------------- the MML tick */

/* FUN_1000_d4b4 - a voice back to the start of the song. */
static void voice_reset(SndVoice *v, const char *part)
{
    v->p = part ? part : "";
    v->note = 'H';
    v->octave = 4;
    v->deflen = 4;
    v->len = 4;
    v->ticks = 8;
    v->nflag = 0;
}

static int read_num(const char **pp)
{
    const char *p = *pp;
    int v = 0;

    while (*p >= '0' && *p <= '9')
        v = v * 10 + (*p++ - '0');
    *pp = p;
    return v;
}

/* FUN_1000_d4f2 - run the voice's MML until it produces a note or a rest.
 * Returns 0 at the end of the part. */
static int voice_step(Snd *s, SndVoice *v)
{
    for (;;) {
        int c = (unsigned char)*v->p;
        int n;

        if (c == 0)
            return 0;
        v->p++;
        switch (c) {
        case 'O':
            if (*v->p > '0' && *v->p < '9')
                v->octave = *v->p++ - '0';
            break;
        case '<':
            if (v->octave > 1)
                v->octave--;
            break;
        case '>':
            if (v->octave < 8)
                v->octave++;
            break;
        case 'L':
            n = read_num(&v->p);
            if (n > 0 && n <= 0x20)
                v->deflen = n;
            break;
        case 'N':
            /* The digit is deliberately not consumed; the interpreter reads it
             * back round the loop and ignores it. */
            v->nflag = (*v->p == '1');
            break;
        case 'T':
            n = read_num(&v->p);
            if (n > 29 && n < 241)
                s->tempo = n;
            break;
        case 'R':
            n = read_num(&v->p);
            v->len = (n < 1 || n > 0x20) ? v->deflen : n;
            v->ticks = SND_LEN[v->len];
            if (*v->p == '.') {
                v->ticks = v->ticks * 3 / 2;
                v->p++;
            }
            v->note = 'H';
            return 1;
        default:
            if (c > '@' && c < 'H') {
                if (*v->p == '+' || *v->p == '#') {
                    c += 8;
                    v->p++;
                }
                if (*v->p == '-') {
                    c += 16;
                    v->p++;
                }
                n = read_num(&v->p);
                v->len = (n < 1 || n > 0x20) ? v->deflen : n;
                v->ticks = SND_LEN[v->len];
                if (*v->p == '.') {
                    v->ticks = v->ticks * 3 / 2;
                    v->p++;
                }
                v->note = c;
                return 1;
            }
            break;
        }
    }
}

/* FUN_1000_db32 - put a voice's note on the beeper. */
static void beep_note(Snd *s, const SndVoice *v)
{
    int idx = v->note - '@';
    int div;

    if (idx < 0 || idx >= (int)(sizeof SND_NOTE / sizeof SND_NOTE[0]))
        return;
    if (v->octave == 1)
        div = SND_NOTE[idx] * 2;
    else
        div = SND_NOTE[idx] / SND_OCT[v->octave];
    s->divisor = div & 0xffff;
    s->gate = 1;
}

/* FUN_1000_d8dc - one music tick.  It services voice `cur` and then advances,
 * so each voice is stepped every third call; which voice the beeper actually
 * plays is the block below, and it is the reason three parts can be heard at
 * once.  Returns 1 when all three parts have run out. */
static int music_tick(Snd *s)
{
    int i = s->cur;
    int sel, cut;

    /* The note about to end is cut a tick short so repeated notes are
     * articulated - unless the part is marked N1, or the note is an L32 that
     * has no tick to spare. */
    cut = (s->v[i].ticks == 1 && s->v[i].nflag != 1 && s->v[i].len != 0x20);

    if (i == 0) {
        sel = 0;
        if (s->v[0].note == 'H' || cut) {
            if (s->v[1].note != 'H' && s->v[1].ticks > 1)
                sel = 1;
            else if (s->v[2].note != 'H' && s->v[2].ticks > 1)
                sel = 2;
        }
    } else if (i == 1) {
        if (s->v[1].note != 'H' && !cut)
            sel = 1;
        else if (s->v[0].note == 'H' || s->v[2].note == 'H' || s->v[2].ticks < 2)
            sel = -1;
        else
            sel = 2;
    } else {
        sel = (s->v[2].note == 'H' || cut) ? -1 : 2;
    }
    if (sel >= 0)
        beep_note(s, &s->v[sel]);

    if (--s->v[i].ticks == 0 && voice_step(s, &s->v[i]) == 0)
        s->ended |= 1 << i;

    if (++s->cur == SND_VOICES) {
        s->cur = 0;
        if (s->ended == 7) {
            int k;

            s->ended = 0;
            for (k = 0; k < SND_VOICES; k++) {
                voice_reset(&s->v[k], s->data->part[s->song][k]);
                voice_step(s, &s->v[k]);
            }
            return 1;
        }
    }
    return 0;
}

/* FUN_1000_daf2 - one step of a sound effect.  The numbers in DEPTH.EFS are
 * frequencies in Hz, turned into a divisor that is then truncated to 16 bits,
 * which is why the very low ones in effect 6 come out as something else. */
static int effect_tick(Snd *s)
{
    const SndData *d = s->data;
    int f;

    if (s->effpos >= d->efflen[s->eff])
        return 1;
    f = d->eff[s->eff][s->effpos++];
    if (f == 0)
        return 1;
    s->divisor = (int)((2458000L / f) & 0xffff);
    s->gate = 1;
    return 0;
}

/* FUN_1000_d468 - the beeper off. */
static void beep_off(Snd *s)
{
    s->gate = 0;
}

/* ------------------------------------------------------------------ the API */

void snd_init(Snd *s, const SndData *d)
{
    memset(s, 0, sizeof *s);
    s->data = d;
    s->tempo = 0x78;
    s->loop = 1;
    s->divisor = 0x3e6;
}

void snd_play(Snd *s, int song)
{
    int k;

    if (!s->data || !s->data->loaded || song < 1 || song > s->data->songs)
        return;
    s->song = song;
    s->cur = 0;
    s->ended = 0;
    s->isr = 0;
    s->tempo = 0x78;
    for (k = 0; k < SND_VOICES; k++) {
        voice_reset(&s->v[k], s->data->part[song][k]);
        voice_step(s, &s->v[k]);
    }
    s->playing = 1;
}

void snd_stop(Snd *s)
{
    s->playing = 0;
    if (!s->effplaying)
        beep_off(s);
}

void snd_effect(Snd *s, int n)
{
    if (!s->data || !s->data->loaded || n < 1 || n > s->data->effects)
        return;
    s->eff = n;
    s->effpos = 0;
    s->effplaying = 1;
}

/* One 8253 interrupt: reload, then either the music (every twentieth) or the
 * effect (every fourth). */
static void isr_tick(Snd *s)
{
    if (++s->isr == 0x14) {
        s->isr = 0;
        if (s->playing && music_tick(s) && !s->loop) {
            s->playing = 0;
            beep_off(s);
        }
    } else if ((s->isr & 3) == 0) {
        if (s->effplaying && effect_tick(s)) {
            s->effplaying = 0;
            if (!s->playing)
                beep_off(s);
        }
    }
}

void snd_render(Snd *s, short *out, int frames)
{
    int i;

    for (i = 0; i < frames; i++) {
        int freq, level = 0;

        if (s->acc <= 0) {
            /* Interrupt rate = 1000 * tempo / 120, as a period in samples. */
            int div = (ISR_BASE * 120) / (s->tempo > 0 ? s->tempo : 0x78);
            long period = (long)((double)div * 65536.0 * SND_RATE / BEEP_CLOCK);

            if (period < 1)
                period = 1;
            isr_tick(s);
            s->acc += period;
        }
        s->acc -= 65536;

        freq = (s->gate && s->divisor > 0) ? BEEP_CLOCK / s->divisor : 0;
        /* The rest "note" is a 24kHz divisor, inaudible on the real machine but
         * nothing but aliasing at this sample rate. */
        if (freq > 0 && freq < SND_RATE / 2) {
            s->phase += (unsigned)((double)freq * 65536.0 / SND_RATE);
            level = (s->phase & 0x8000) ? 6000 : -6000;
        }
        out[i] = (short)level;
    }
}
