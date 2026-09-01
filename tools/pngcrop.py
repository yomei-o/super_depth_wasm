"""Crop and magnify one of the harness PNGs, so a detail can be looked at.

    python tools/pngcrop.py in.png out.png X Y W H [SCALE]

Reads and writes the same 8-bit indexed PNGs tests/png.c produces (a single
IHDR/PLTE/IDAT/IEND, no interlace), with nearest-neighbour scaling.
"""
import struct
import sys
import zlib


def chunks(data):
    i = 8
    while i < len(data):
        n, = struct.unpack_from('>I', data, i)
        tag = data[i + 4:i + 8]
        yield tag, data[i + 8:i + 8 + n]
        i += 12 + n


def read(path):
    raw = open(path, 'rb').read()
    pal, idat, hdr = b'', b'', None
    for tag, body in chunks(raw):
        if tag == b'IHDR':
            hdr = struct.unpack('>IIBBBBB', body)
        elif tag == b'PLTE':
            pal = body
        elif tag == b'IDAT':
            idat += body
    w, h, depth, colour = hdr[0], hdr[1], hdr[2], hdr[3]
    if depth != 8 or colour != 3:
        raise SystemExit('only 8-bit indexed PNGs')
    flat = zlib.decompress(idat)
    rows = []
    prev = bytearray(w)
    for y in range(h):
        f = flat[y * (w + 1)]
        line = bytearray(flat[y * (w + 1) + 1:(y + 1) * (w + 1)])
        if f == 1:
            for x in range(1, w):
                line[x] = (line[x] + line[x - 1]) & 0xff
        elif f == 2:
            for x in range(w):
                line[x] = (line[x] + prev[x]) & 0xff
        elif f != 0:
            raise SystemExit('unhandled PNG filter %d' % f)
        rows.append(line)
        prev = line
    return w, h, pal, rows


def write(path, w, h, pal, rows):
    flat = b''.join(b'\0' + bytes(r) for r in rows)
    out = [b'\x89PNG\r\n\x1a\n']

    def chunk(tag, body):
        out.append(struct.pack('>I', len(body)) + tag + body +
                   struct.pack('>I', zlib.crc32(tag + body) & 0xffffffff))

    chunk(b'IHDR', struct.pack('>IIBBBBB', w, h, 8, 3, 0, 0, 0))
    chunk(b'PLTE', pal)
    chunk(b'IDAT', zlib.compress(flat, 9))
    chunk(b'IEND', b'')
    open(path, 'wb').write(b''.join(out))


def main():
    src, dst = sys.argv[1], sys.argv[2]
    x, y, cw, ch = (int(v) for v in sys.argv[3:7])
    scale = int(sys.argv[7]) if len(sys.argv) > 7 else 1
    w, h, pal, rows = read(src)
    cw = min(cw, w - x)
    ch = min(ch, h - y)
    out = []
    for j in range(ch * scale):
        line = rows[y + j // scale][x:x + cw]
        out.append(bytearray(b for b in line for _ in range(scale)))
    write(dst, cw * scale, ch * scale, pal, out)
    print('%s  %dx%d' % (dst, cw * scale, ch * scale))


main()
