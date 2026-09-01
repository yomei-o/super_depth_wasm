#!/bin/sh
# Build everything and run every check there is, without opening a window.
#
#   sh tools/check.sh
#
# What it proves:
#   * all three builds compile
#   * the twelve stages, the title and the ranking screen all draw
#   * a long unattended run gets through the stages instead of stalling
#     (this is how the boss-less type 4 was caught hanging for ever)
#   * the WASM build draws the same pixels as the native one
#   * the music and the effects come out of the synth
#
# Frames land in tmp/check/.
set -e
cd "$(dirname "$0")/.."
mkdir -p tmp/check

NODE="${NODE:-/c/prog/emsdk/emsdk/node/22.16.0_64bit/bin/node.exe}"

echo "== build =="
sh tools/build_tests.sh >/dev/null
sh tools/build.sh >/dev/null
sh tools/build_wasm.sh >/dev/null
echo "ok"

echo "== every screen draws =="
./tests/frames.exe tmp/check/title 12 --quiet
./tests/frames.exe tmp/check/record 12 --record --quiet
for s in 1 2 3 4 5 6 7 8 9 10 11 12; do
    ./tests/frames.exe "tmp/check/s$s" 200 --stage "$s" --auto --god --quiet
done
echo "ok"

echo "== the stages keep advancing (no stall) =="
./tests/frames.exe tmp/check/soak 1000,6000,12000,18000 --auto --god --bossweak

echo "== sound =="
./tests/tune.exe list | head -1
./tests/tune.exe song 3 4 tmp/check/sea.wav
./tests/tune.exe eff 1 1 tmp/check/eff1.wav

echo "== native and WASM draw the same pixels =="
# The title screen, and then one frame of each stage type, because a stale
# .wasm would still match on the title alone.
./tests/frames.exe tmp/check/nat_t 150 --keys 0x02 --quiet
"$NODE" tests/wasm_check.js 150 tmp/check/wasm_t.png >/dev/null
python tools/pngdiff.py tmp/check/nat_t0150.png tmp/check/wasm_t.png
for s in 1 2 3 4; do
    ./tests/frames.exe "tmp/check/nat$s" 220 --stage "$s" --keys 0x0e --quiet
    "$NODE" tests/wasm_check.js 220 "tmp/check/wasm$s.png" "$s" 14 >/dev/null
    printf 'stage %s: ' "$s"
    python tools/pngdiff.py "tmp/check/nat${s}0220.png" "tmp/check/wasm$s.png"
done
