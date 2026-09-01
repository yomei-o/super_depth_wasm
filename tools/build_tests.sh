#!/bin/sh
# Build the headless harnesses.  tools/cc.sh finds a compiler.
#
#   tests/sheet.exe    load the BFNT files, dump contact sheets and a 640x400 screen
#   tests/frames.exe   run the reconstruction N ticks and dump the screen as PNGs
set -e
cd "$(dirname "$0")/.."
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -o tests/sheet.exe \
   tests/sheet.c tests/png.c src/bfnt.c src/video.c
sh tools/cc.sh -O2 -Wall -Wextra -Isrc -o tests/frames.exe \
   tests/frames.c tests/png.c src/bfnt.c src/video.c src/text.c src/game.c
echo "built tests/sheet.exe tests/frames.exe"
