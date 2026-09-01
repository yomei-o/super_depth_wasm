"""Compare two of the harness PNGs by colour, whatever their pixel format.

    python tools/pngdiff.py a.png b.png

tests/frames.exe writes 8-bit indexed and tests/wasm_check.js writes RGB, so a
byte compare is no use; this resolves both through their palettes and counts
the pixels that actually differ.  Exits non-zero if any do.
"""
import struct
import sys
import zlib


def read(path):
    raw = open(path, 'rb').read()
    i, pal, idat, hdr = 8, b'', b'', None
    while i < len(raw):
        n, = struct.unpack_from('>I', raw, i)
        tag = raw[i + 4:i + 8]
        body = raw[i + 8:i + 8 + n]
        if tag == b'IHDR':
            hdr = struct.unpack('>IIBBBBB', body)
        elif tag == b'PLTE':
            pal = body
        elif tag == b'IDAT':
            idat += body
        i += 12 + n
    w, h, depth, colour = hdr[0], hdr[1], hdr[2], hdr[3]
    if depth != 8:
        raise SystemExit('%s: only 8 bits per sample' % path)
    stride = {0: 1, 2: 3, 3: 1, 6: 4}[colour]
    flat = zlib.decompress(idat)
    rows = []
    prev = bytearray(w * stride)
    for y in range(h):
        base = y * (w * stride + 1)
        f = flat[base]
        line = bytearray(flat[base + 1:base + 1 + w * stride])
        if f == 1:
            for x in range(stride, len(line)):
                line[x] = (line[x] + line[x - stride]) & 0xff
        elif f == 2:
            for x in range(len(line)):
                line[x] = (line[x] + prev[x]) & 0xff
        elif f != 0:
            raise SystemExit('%s: unhandled PNG filter %d' % (path, f))
        rows.append(line)
        prev = line

    def pixel(x, y):
        r = rows[y]
        if colour == 3:
            i = r[x] * 3
            return pal[i], pal[i + 1], pal[i + 2]
        return r[x * stride], r[x * stride + 1], r[x * stride + 2]

    return w, h, pixel


def main():
    w1, h1, p1 = read(sys.argv[1])
    w2, h2, p2 = read(sys.argv[2])
    if (w1, h1) != (w2, h2):
        raise SystemExit('different sizes: %dx%d vs %dx%d' % (w1, h1, w2, h2))
    diff = sum(1 for y in range(h1) for x in range(w1) if p1(x, y) != p2(x, y))
    print('%d differing pixels of %d' % (diff, w1 * h1))
    sys.exit(1 if diff else 0)


main()
