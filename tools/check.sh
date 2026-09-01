#!/bin/sh
# Build everything and run every check there is, without opening a window.
#
#   sh tools/check.sh
#
# What it proves:
#   * all three builds compile
#   * the twelve stages, the title and the ranking screen all draw
#   * a long unattended run gets through the stages instead of stalling
#   * clearing stage 12 plays the ending out to the end
#   * the WASM build makes a noise, not just the native one
#   * the title is playing the right song
#   * ESC pauses, a direction key resumes, Q quits
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

echo "== the pause =="
# FUN_1000_9e70: ESC holds the game still, a direction key lets it go again,
# and Q from inside the pause ends the run and the program.
./tests/frames.exe tmp/check/pause 40 --stage 1 --keys 0x40 --keys2 0x01     --at 20 --quiet --trace > tmp/check/pause.log
./tests/frames.exe tmp/check/quit 40 --stage 1 --keys 0x40 --keys2 0x80     --at 20 --quiet --trace > tmp/check/quit.log
cat tmp/check/pause.log tmp/check/quit.log
grep -q "pause stage=1" tmp/check/pause.log || {
    echo "ESC did not pause" >&2; exit 1; }
grep -q "t=20     play" tmp/check/pause.log || {
    echo "the pause did not let go" >&2; exit 1; }
grep -q "quit" tmp/check/quit.log || {
    echo "Q did not quit out of the pause" >&2; exit 1; }
echo "ok"

echo "== the ending =="
# Clearing stage 12 runs FUN_1000_95a4 the whole way: the jingle, the fly-past
# past the planet, the eighteen-strong cast list and the credits, and then the
# game carries on at stage 1.  --trace says which of those it got to.
./tests/frames.exe tmp/check/end 445,1800 --stage 12 --auto --god --bossweak     --quiet --trace > tmp/check/end.log
cat tmp/check/end.log
for want in "phase=1" "phase=2" "phase=3" "phase=4" "play stage=1"; do
    grep -q "$want" tmp/check/end.log || {
        echo "the ending stopped before $want" >&2; exit 1; }
done
echo "ok"

echo "== sound =="
./tests/tune.exe list | head -1
./tests/tune.exe song 3 4 tmp/check/sea.wav
./tests/tune.exe eff 1 1 tmp/check/eff1.wav
# The two above are the native build.  This one is the .wasm the page loads:
# a build with the synth missing or sd_audio unexported would pass the others.
"$NODE" tests/wasm_audio.js 120
# The title has to be playing the theme (song 2), not whatever g->type happens
# to say - it says 1 up there, because the title screen is a SEA scene.
./tests/frames.exe tmp/check/title_snd 60 --wav tmp/check/title.wav --quiet
./tests/tune.exe song 2 3 tmp/check/song2.wav
printf 'title music: '
python tools/songcmp.py tmp/check/title.wav tmp/check/song2.wav

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
