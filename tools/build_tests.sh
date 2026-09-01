#!/bin/sh
# Build the headless harnesses, at low priority (tools/lowpri.sh).
#
#   tests/sheet.exe    load the BFNT files, dump contact sheets and a 640x400 screen
#   tests/frames.exe   run the reconstruction N ticks and dump the screen as PNGs
set -e
cd "$(dirname "$0")/.."
GCC="${GCC:-/c/prog/w64devkit/bin/gcc}"
sh tools/lowpri.sh "$GCC" -O2 -Wall -Wextra -o tests/sheet.exe \
   tests/sheet.c tests/png.c src/bfnt.c src/video.c
sh tools/lowpri.sh "$GCC" -O2 -Wall -Wextra -o tests/frames.exe \
   tests/frames.c tests/png.c src/bfnt.c src/video.c src/game.c
echo "built tests/sheet.exe tests/frames.exe"
