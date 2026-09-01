#!/bin/sh
# Build the headless harnesses, at low priority (tools/lowpri.sh).
#
#   tests/sheet.exe   load the BFNT files and dump contact sheets + a 640x400 screen
set -e
cd "$(dirname "$0")/.."
GCC="${GCC:-/c/prog/w64devkit/bin/gcc}"
sh tools/lowpri.sh "$GCC" -O2 -Wall -Wextra -o tests/sheet.exe \
   tests/sheet.c tests/png.c src/bfnt.c src/video.c
echo "built tests/sheet.exe"
