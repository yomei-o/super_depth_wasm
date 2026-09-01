"""Find near calls to a given code offset and recover the immediates pushed for it.

    python tools/callsites.py 0xba6a

Ghidra's 16-bit output sometimes turns a pushed argument into a local, and
sometimes turns the pushed return address into one too, so a constant seen in
the decompilation cannot be trusted to be an argument.  Reading the machine code
settles it: Microsoft C's 16-bit cdecl pushes arguments right to left, and a
constant argument compiles to `mov ax, imm16` + `push ax` (or `push imm16` on a
186 or better), so walking backwards from the call over that pattern gives the
real values.

The whole program is one code segment, so a near call is all there is to follow.
"""
import struct
import sys

HDR = 512               # e_cparhdr 32 paragraphs
CODE_END = 0xfd40       # DGROUP starts here


def load():
    d = open('orig/DEPTH.EXE', 'rb').read()
    return d[HDR:HDR + CODE_END]


def preceding_pushes(code, at, want=4):
    """Walk backwards from `at`, collecting the values pushed just before it.

    Returns them innermost-first, i.e. in the order they were pushed, which for
    cdecl is the reverse of the argument order.  `None` marks a push whose value
    is not an immediate.
    """
    out = []
    p = at
    while len(out) < want:
        if p >= 3 and code[p - 3] == 0xb8 and code[p - 1 + 0] == 0x50:
            pass
        # mov ax, imm16 ; push ax
        if p >= 4 and code[p - 4] == 0xb8 and code[p - 1] == 0x50:
            out.append(struct.unpack_from('<H', code, p - 3)[0])
            p -= 4
            continue
        # push imm16 (186+)
        if p >= 3 and code[p - 3] == 0x68:
            out.append(struct.unpack_from('<H', code, p - 2)[0])
            p -= 3
            continue
        # push imm8 sign-extended (186+)
        if p >= 2 and code[p - 2] == 0x6a:
            out.append(code[p - 1])
            p -= 2
            continue
        # push reg / push [mem] - value unknown
        if p >= 1 and 0x50 <= code[p - 1] <= 0x57:
            out.append(None)
            p -= 1
            continue
        break
    return out


def main():
    target = int(sys.argv[1], 16)
    nargs = int(sys.argv[2]) if len(sys.argv) > 2 else 4
    code = load()
    print('calls to 0x%04x:' % target)
    n = 0
    for a in range(len(code) - 3):
        if code[a] != 0xe8:
            continue
        disp, = struct.unpack_from('<h', code, a + 1)
        if (a + 3 + disp) & 0xffff != target:
            continue
        pushed = preceding_pushes(code, a, nargs)
        args = list(reversed(pushed))
        n += 1
        print('  %04x  args(pushed order reversed) = %s' %
              (a, ', '.join('0x%04x' % v if v is not None else '?'
                            for v in args)))
    print('%d call site(s)' % n)


if __name__ == '__main__':
    main()
