#!/usr/bin/env python3
"""Are these two WAVs the same tune?

    python tools/songcmp.py A.wav B.wav [seconds]

The beeper plays one square wave at a time, so counting zero crossings over a
tenth of a second gives its pitch, and the sequence of pitches identifies the
song.  That is enough to tell "the title is playing the theme" from "the title
is playing the sea song", which is what this is for: the opening played song 3
for a while because game_sound guessed the song from g->type.

Exits non-zero when they differ.
"""
import struct
import sys
import wave

STEP = 2205          # a tenth of a second at 22050Hz


def profile(path, secs):
    w = wave.open(path, 'rb')
    rate = w.getframerate()
    n = min(w.getnframes(), int(rate * secs))
    s = struct.unpack('<%dh' % n, w.readframes(n))
    out = []
    for i in range(0, n - STEP, STEP):
        seg = s[i:i + STEP]
        z = sum(1 for a, b in zip(seg, seg[1:]) if (a >= 0) != (b >= 0))
        out.append(int(z * rate / (2 * STEP)))
    return out


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 2
    secs = float(sys.argv[3]) if len(sys.argv) > 3 else 1.4
    a = profile(sys.argv[1], secs)
    b = profile(sys.argv[2], secs)
    if a == b:
        print('same tune (%d slices)' % len(a))
        return 0
    print('DIFFERENT')
    print('  %s: %s' % (sys.argv[1], a))
    print('  %s: %s' % (sys.argv[2], b))
    return 1


if __name__ == '__main__':
    sys.exit(main())
