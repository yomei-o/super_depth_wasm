# Super Depth — 解析と C 移植（作業中）

Bio_100% の PC-98 用ゲーム **Super Depth ver 1.00**（1991、alty & tacox）を、
実行ファイルを Ghidra で逆コンパイルして解析し、C 言語に書き直して
最終的に WASM で動かすためのリポジトリです。

Windows 版の続編 **WinDepth** の移植はこちら → https://github.com/yomei-o/windepth_wasm
（自機の名前 `YAMABOKU` が両方に出てきます）

**まだ移植の途中です。** 動くところまでは来ました。

遊べる（というより見られる）: https://yomei-o.github.io/super_depth_wasm/

できていること: 640×400 16 色の画面、BFNT スプライトの読み込み（238 枚）、
本物のパレット、自機の移動、爆雷の投下。
まだ無いもの: 敵、アイテム、ボス、BGM、効果音、タイトル、ネーム入力。

```
←/→ (H/L)     自機を左右に
Z / Space     左の爆雷
X / Enter     右の爆雷
1..9          ステージ切替
```

## ビルド

```sh
sh tools/build.sh          # -> depth.exe（ネイティブ、orig/ を読む）
sh tools/build_wasm.sh     # -> superdepth.js / superdepth.wasm
sh tools/build_tests.sh    # -> tests/sheet.exe tests/frames.exe
```

検証はウィンドウを開かずにできます。

```sh
./tests/sheet.exe tmp                       # BFNT を読んでシートと画面を PNG に
./tests/frames.exe tmp/f 20,60 --keys 0x06  # N フレーム走らせて PNG に
node tests/wasm_check.js 40 tmp/wasm40.png  # WASM 側も同じ絵が出るか
```


## 対象

`orig/DEPTH100.LZH` がオリジナルの配布アーカイブです。展開済みのファイルも
`orig/` に置いてあります。

```
Super Depth ver 1.00  Copyright(C)1991 alty & tacox / Bio_100%
Game Design : alty & tacox        Character Design : tacox & alty
Music Composition : FIN & CLAUDE  Font Design : tacox
Programming : alty
```

| ファイル | サイズ | 中身 |
|---|---|---|
| `DEPTH.EXE` | 70,731 | 本体。DOS MZ / 16bit リアルモード、Microsoft C 6.0 |
| `DEPTH.C32` | 32,800 | 32×32 スプライト 64 枚（戦艦・潜水艦・ヘリ・爆発・飛行機・巨大生物） |
| `DEPTH.C16` | 14,368 | 16×16 スプライト 112 枚（魚雷・爆雷・機雷・アイテム・波・海底） |
| `DEPTH.BOS` | 28,704 | 32×32 スプライト 56 枚（ボス） |
| `DEPTH.C08` | 224 | 8×8 スプライト 6 枚 |
| `DEPTH.FNT` | 8,224 | 16×16 モノクロフォント 256 字 |
| `DEPTH.BGM` | 18,127 | BGM。BGMLIB 用 MML テキスト、15 曲 |
| `DEPTH.EFS` | 1,737 | 効果音。周波数の並びのテキスト |
| `DEPTH.SCR` | 291 | スコアランキング（テキスト） |
| `DEPTH.DOC` `DEPTHBGM.DOC` | | 添付ドキュメント |

## ソース

| ファイル | 役割 |
|---|---|
| `src/bfnt.c` `src/bfnt.h` | BFNT を読んでパターン表に積む（原典 `FUN_1000_c8e0`） |
| `src/video.c` `src/video.h` | 640×400 16 色のサーフェスと描画 |
| `src/pal.h` | EXE から取り出したパレット |
| `src/game.c` `src/game.h` | ゲーム本体（解読できた範囲） |
| `src/main_win32.c` | ネイティブ（8bpp DIB） |
| `src/main_wasm.c` | Emscripten（`putImageData` のみ、WebGL 不使用） |

## ツール

**`tools/lzh.py`** — LZH の展開。ここには lha も 7z も入っていないので書きました。
ヘッダレベル 0/1/2 と `-lh0-` / `-lh5-` / `-lh6-` / `-lh7-` に対応。

```sh
python tools/lzh.py DEPTH100.LZH          # 一覧（CRC 検査つき）
python tools/lzh.py DEPTH100.LZH orig     # 展開
```

**`tools/bfnt.py`** — BFNT のスプライトを PNG のコンタクトシートに。

```sh
python tools/bfnt.py orig/DEPTH.C32 tmp/c32.png --zoom 2 --cols 8
```

出力例が `docs/` にあります（色は PC-98 の初期パレットなので本来の色ではありません）。

| | |
|---|---|
| ![C32](docs/sprites_c32.png) | `DEPTH.C32` |
| ![C16](docs/sprites_c16.png) | `DEPTH.C16` |
| ![BOS](docs/sprites_bos.png) | `DEPTH.BOS` |

## わかっていること

### DEPTH.EXE

圧縮されていません。中に **Microsoft C 6.0** のランタイム文字列
(`MS Run-Time Library - Copyright (c) 1990, Microsoft Corp`、`R6000` 系の
エラーメッセージ) が入っています。

* コードセグメント 1 本（約 64KB、Ghidra 上では全部 `1000:`）+ DGROUP
* 再配置 7 個。エントリは `0000:e64a` で、そこは MSC のスタートアップ
* 外部ライブラリを 2 つ静的リンク
  * `Superimpose Library Version 0.10` — STUDIO FEMY、スプライト描画
  * `BGM Library ver1.06 use TIMER interrupt` — STUDIO FEMY、音楽
* Ghidra（`x86:LE:16:Real Mode`）で **239 関数、失敗 0**

データファイルは小文字の名前 (`depth.c32` など) で開いています。

### BFNT（グラフィック）

```
0x00  char   magic[4]   "BFNT"
0x04  uint8  0x1a       TYPE したときにここで止まるための EOF
0x05  uint8  flags      0x03 = 16 色, 0x00 = モノクロ
0x08  uint16 width      8 / 16 / 32
0x0a  uint16 height     8 / 16 / 32
0x0e  uint16 last       最終キャラクタコード
0x20             画素データ
```

**画素は packed 4bpp（1 バイト 2 画素、上位ニブルが左）**で、PC-98 の
プレーナ VRAM 配置ではありません。サイズはどちらの解釈でも一致するので、
planar で読むと色付きの砂嵐になるだけで気づけません（一度やりました）。
モノクロのフォントだけ 1bpp・MSB が左です。

サイズ検算（全ファイルで一致）:
`(バイト数 - 32) == (last + 1) * height * (16 色なら width/2, モノクロなら width/8)`

### 音

`DEPTH.BGM` は BGMLIB 用の MML テキストで 15 曲入っています。

```
1. Bio_100%              2. THEME OF SUPER DEPTH   3. SEA
4. SKY                   5. SPACE                  6. BOSS
7. GAME OVER             8. NAME INN               9. SEA CLEAR
10. SKY CLEAR           11. BOSS CLEAR1           12. BOSS CLEAR2
13. BOSS CLEAR3         14. ENDING                15. BOSS ALARM
```

1 曲は `,` 区切りの 3 パートで、曲間は `*`。PC-98 内蔵ビープ（8253 タイマ）
1 音を高速に切り替えて 3 声に聞かせる方式です。`DEPTH.EFS` は効果音で、
周波数の並びが数字で書いてあるだけ。**矩形波 1 音なので正確に再現できます。**

### ゲームの内容（EXE 内の文字列から）

敵の名前:
`Tiddler` `Asthmatic` `Coypu` `Wigwam` `Eyewash` `Spooky` `Fratricide`
`Scourge` `Mean` `Chirstie` `Poppy` `Rob` `Hoot` `Strayed Brain`
`Eerie Core` `Lunatic Noddle` `B.P.S.M.` `Yamaboku`

メッセージ:
`Ready` `Clear!` `Emergency!` `Destroyed!` `Speed Up!` `Shot Max Up!`
`Shot Power Up!` `Flush Bomb!` `Shot Special!` `Full Power!` `Ship 1up!`
`Stage` `Game Over` `Congratulation!!` `Yamaboku find another earth.`

WinDepth には無いパワーアップが一通りあります。

## これから

1. ~~アーカイブの展開~~ 済 — `tools/lzh.py`
2. ~~BFNT の解読~~ 済 — `tools/bfnt.py`
3. パレットと画面レイアウト（PC-98 640×400 16 色）を EXE から特定
4. ゲームロジックの解析と C への書き直し。大きい関数はこの 5 つ
   `1000:5818` (10,278 B) / `1000:383a` (8,067) / `1000:1fdc` (6,180) /
   `1000:13e0` (2,953) / `1000:06f6` (2,586)
5. ネイティブで動かす
6. WASM 化（WinDepth と同じくソフトウェア描画のみ、WebGL 不使用）

解析中に見つけたことは [RESUME.md](RESUME.md) に足していきます。

## 権利について

Super Depth はもともと **Bio_100%** が配布していたフリーソフトです。
`orig/` にオリジナルの配布アーカイブ `DEPTH100.LZH` とその中身をそのまま
入れてあります。著作権は Bio_100%（alty & tacox）にあります。
このリポジトリのツールと、これから書く C ソースは解析して書き直したものです。
