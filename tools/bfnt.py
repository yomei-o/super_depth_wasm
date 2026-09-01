"""Dump a PC-98 BFNT character file to a PNG contact sheet.

    python tools/bfnt.py orig/DEPTH.C16 tmp/c16.png [--zoom 2] [--cols 16]

Header, as it appears in Super Depth's files:

    0x00  char   magic[4]   "BFNT"
    0x04  uint8  0x1a       end-of-text byte, so TYPEing the file stops here
    0x05  uint8  planes     0x03 = 4 planes (16 colours), 0x00 = 1 plane
    0x08  uint16 width      8 / 16 / 32
    0x0a  uint16 height     8 / 16 / 32
    0x0e  uint16 last       highest character code present
    0x20             pixel data

Pixels are PACKED 4bpp, two per byte, high nibble first - NOT the PC-98's
planar VRAM layout, even though the file feeds planar VRAM in the end.  The
sizes are identical either way, so the only way to tell is to look: read as
planar it comes out as fine coloured hash, read as packed the ships appear.
The 1-plane font file is 1bpp, most significant bit leftmost.

Size check for every file in the archive:
    (bytes - 32) == (last + 1) * height * (width / 2 for 16 colours, / 8 for 1bpp)
"""
import struct
import sys
import zlib

# The in-game palette, DS:0x02b8 in DEPTH.EXE (see src/pal.h).  Index 0 is the
# dark blue of the sea and is also the sprites' transparent colour; 8..15 are the
# grey ramp the warships are drawn in.
DEFAULT_PAL = [
    (0x00, 0x00, 0x77), (0x00, 0x00, 0xff), (0xff, 0x00, 0x00), (0x88, 0x00, 0xff),
    (0x00, 0xff, 0x88), (0x00, 0xbb, 0xdd), (0xff, 0xbb, 0x00), (0xdd, 0xdd, 0xdd),
    (0x00, 0x00, 0x00), (0x33, 0x33, 0x33), (0x44, 0x44, 0x44), (0x55, 0x55, 0x55),
    (0x77, 0x77, 0x77), (0x99, 0x99, 0x99), (0xdd, 0xdd, 0xdd), (0xff, 0xff, 0xff),
]


def read(path):
    d = open(path, 'rb').read()
    assert d[:4] == b'BFNT', d[:8]
    colour = bool(d[5] & 0x03)
    w, h = struct.unpack_from('<HH', d, 8)
    last, = struct.unpack_from('<H', d, 0x0e)
    n = last + 1
    stride = w // 2 if colour else w // 8
    per = stride * h
    body = d[0x20:]
    assert len(body) == n * per, (len(body), n, per)
    return dict(w=w, h=h, colour=colour, n=n, stride=stride, per=per, body=body)


def pixels(f, index):
    """Return h rows of w palette indices for character `index`."""
    w, h, stride = f['w'], f['h'], f['stride']
    base = index * f['per']
    rows = []
    for y in range(h):
        row = []
        off = base + y * stride
        if f['colour']:
            for xb in range(stride):
                byte = f['body'][off + xb]
                row.append(byte >> 4)
                row.append(byte & 15)
        else:
            for xb in range(stride):
                byte = f['body'][off + xb]
                for k in range(8):
                    row.append(15 if byte & (0x80 >> k) else 0)
        rows.append(row[:w])
    return rows


def png(path, w, h, rows, pal):
    raw = b''.join(b'\0' + bytes(r) for r in rows)

    def chunk(tag, data):
        c = tag + data
        return struct.pack('>I', len(data)) + c + struct.pack('>I', zlib.crc32(c))

    hdr = struct.pack('>IIBBBBB', w, h, 8, 3, 0, 0, 0)
    plte = b''.join(bytes(c) for c in pal)
    open(path, 'wb').write(b'\x89PNG\r\n\x1a\n' + chunk(b'IHDR', hdr) +
                          chunk(b'PLTE', plte) +
                          chunk(b'IDAT', zlib.compress(raw, 9)) +
                          chunk(b'IEND', b''))


def main():
    src, dst = sys.argv[1], sys.argv[2]
    zoom = 1
    cols = 16
    for i, a in enumerate(sys.argv):
        if a == '--zoom':
            zoom = int(sys.argv[i + 1])
        elif a == '--cols':
            cols = int(sys.argv[i + 1])

    f = read(src)
    print('%s: %dx%d, %s, %d chars' %
          (src, f['w'], f['h'], '16 colours' if f['colour'] else 'mono', f['n']))

    rowsn = (f['n'] + cols - 1) // cols
    gw, gh = cols * (f['w'] + 1), rowsn * (f['h'] + 1)
    sheet = [[0] * gw for _ in range(gh)]
    for i in range(f['n']):
        cx, cy = (i % cols) * (f['w'] + 1), (i // cols) * (f['h'] + 1)
        for y, row in enumerate(pixels(f, i)):
            for x, v in enumerate(row):
                sheet[cy + y][cx + x] = v

    if zoom > 1:
        big = []
        for r in sheet:
            rr = [v for v in r for _ in range(zoom)]
            for _ in range(zoom):
                big.append(rr)
        sheet, gw, gh = big, gw * zoom, gh * zoom

    png(dst, gw, gh, sheet, DEFAULT_PAL)
    print('wrote %s (%dx%d)' % (dst, gw, gh))


if __name__ == '__main__':
    main()
