// Drive the WASM build under node and dump a frame, so the browser target can
// be checked without opening a browser.
//
//   node tests/wasm_check.js <tick> [out.png] [stage] [padmask]
//
// The frame should match tests/frames.exe at the same tick with the same seed,
// which is what makes this useful: the two front ends share the whole core.
const fs = require('fs');
const path = require('path');

const tick = parseInt(process.argv[2] || '240', 10);
const out = process.argv[3] || 'tests/out/wasm.png';
const stage = parseInt(process.argv[4] || '0', 10);
const pad = parseInt(process.argv[5] || '2', 10);

// Under CommonJS the generated `var Module = typeof Module != "undefined" ...`
// sees its own hoisted local, so a global set before the require is dropped.
// Take the object the module exports instead and wait for the exports to land.
const Module = require(path.resolve(__dirname, '../superdepth.js'));


(async () => {
  for (let i = 0; i < 500 && !Module._sd_init; i++)
    await new Promise(r => setTimeout(r, 20));
  if (!Module._sd_init) {
    console.error('runtime never came up');
    process.exit(1);
  }
  if (Module._sd_init() !== 0) {
    console.error('wd_init failed');
    process.exit(1);
  }
  const w = Module._sd_width(), h = Module._sd_height();
  if (stage) Module._sd_set_stage(stage);
  for (let t = 1; t <= tick; t++)
    Module._sd_tick(pad);
  const p = Module._sd_framebuffer();
  const rgba = Buffer.from(Module.HEAPU8.subarray(p, p + w * h * 4));
  fs.writeFileSync(out, png(w, h, rgba));
  console.log(`tick ${tick}: stage=${Module._sd_stage()} patterns=${Module._sd_patterns()} -> ${out}`);

  process.exit(0);
})();

// Minimal truecolour PNG with stored deflate blocks - same trick as tests/png.c.
function png(w, h, rgba) {
  const raw = Buffer.alloc((w * 3 + 1) * h);
  for (let y = 0; y < h; y++) {
    raw[y * (w * 3 + 1)] = 0;
    for (let x = 0; x < w; x++) {
      const s = (y * w + x) * 4, d = y * (w * 3 + 1) + 1 + x * 3;
      raw[d] = rgba[s]; raw[d + 1] = rgba[s + 1]; raw[d + 2] = rgba[s + 2];
    }
  }
  const zlib = require('zlib');
  const idat = zlib.deflateSync(raw, { level: 6 });
  const parts = [Buffer.from([0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a])];
  const ihdr = Buffer.alloc(13);
  ihdr.writeUInt32BE(w, 0); ihdr.writeUInt32BE(h, 4);
  ihdr[8] = 8; ihdr[9] = 2;
  parts.push(chunk('IHDR', ihdr), chunk('IDAT', idat), chunk('IEND', Buffer.alloc(0)));
  return Buffer.concat(parts);

  function chunk(tag, data) {
    const len = Buffer.alloc(4);
    len.writeUInt32BE(data.length, 0);
    const body = Buffer.concat([Buffer.from(tag, 'ascii'), data]);
    const crc = Buffer.alloc(4);
    crc.writeUInt32BE(crc32(body) >>> 0, 0);
    return Buffer.concat([len, body, crc]);
  }
  function crc32(buf) {
    let c = ~0;
    for (const b of buf) {
      c ^= b;
      for (let k = 0; k < 8; k++)
        c = (c & 1) ? (0xedb88320 ^ (c >>> 1)) : (c >>> 1);
    }
    return ~c;
  }
}
