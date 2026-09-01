# RESUME — Super Depth (PC-98, 1991) を C に戻して native -> WASM

WinDepth の移植（https://github.com/yomei-o/windepth_wasm）と同じ手順で、
その原型である PC-98 版を扱う。まだ解析段階。

## 対象

Bio_100% "Super Depth" ver 1.00 (`DEPTH.EXE`, 70,731 bytes, 1991)。
配布アーカイブ `orig/DEPTH100.LZH` を `orig/` に展開して使う。

## アーカイブ（`tools/lzh.py`）

lha も 7z も入っていないので LZH 展開を書いた。`-lh5-` は LHA の
「ブロックごとに静的ハフマン表を持つ LZSS」で、1 ブロックに

* リテラル/長さの表（NC = 510 シンボル）
* マッチ距離の表（`-lh5-` は 14 エントリ）
* 上の 1 番目の符号長を符号化する表（NT = 19）

の 3 つが入る。符号割り当ては canonical（DEFLATE と同じ）なので、
LHA の `make_table` を再現せずに標準的な canonical デコーダで読める。
全 11 ファイルが CRC-16/ARC 一致。

**レベル 1 ヘッダの罠**: `packed size` フィールドは
「圧縮データ + 拡張ヘッダの合計」なので、拡張ヘッダを辿って本体の位置と
実サイズを出し直す必要がある。

## DEPTH.EXE の素性（実測）

| | |
|---|---|
| 形式 | DOS MZ、16bit リアルモード。ページ 139、最終ページ 75 → イメージ 70,219 バイト |
| ヘッダ | `e_cparhdr` 32（= 512 バイト）、`e_crlc` 7、`cs:ip = 0000:e64a`、`ss:sp = 11ec:1000` |
| 素性 | **Microsoft C 6.0**。`MS Run-Time Library - Copyright (c) 1990, Microsoft Corp`、`R6000 - stack overflow` などの文字列 |
| 構成 | コードセグメント 1 本（0 〜 約 0xfd40 = 64,832 バイト）+ DGROUP（0xfd40 以降） |
| Ghidra | `x86:LE:16:Real Mode` で **239 関数、失敗 0**、`all.c` 19,958 行 |

**圧縮されていない。** 最初にエントロピー（6.5〜6.8 bit/byte）とファイル名文字列が
見つからないことから「パックされている」と誤判定した。実際はファイル名が
**小文字** (`depth.c32`) で DGROUP 側にあっただけ。バイト列を直接
検索すれば一発で分かる話だった。エントロピーだけで packer を判定してはいけない。

エントリ `0000:e64a` の中身は MSC のスタートアップそのもの:

```
mov ah,0x30 / int 0x21 / cmp al,2 / jae ...   ; DOS 2.0 以上か
mov di,0x0fd4                                 ; DGROUP
mov si,[0x0002]                               ; PSP の top-of-memory
sub si,di / cmp si,0x1000 / ...               ; スタック確保
mov ah,0x4a / int 0x21                        ; SetBlock でメモリ縮小
mov ax,0x4cff / int 0x21                      ; 異常時 exit(255)
```

### 静的リンクされている外部ライブラリ

| 文字列 | 役割 |
|---|---|
| `Superimpose Library  Version 0.10  Copyrignt (C) Kazumi, Taka, STUDIO FEMY 1990-1991.` | スプライト描画 |
| `BGM Library ver1.06  use TIMER interrupt  Copyright(C)1989-91 Fumitake Yodo and STUDIO FEMY` | 音楽（8253 タイマ割り込み） |

WinDepth の WinGL と同じ扱いにする。中は読まず、仕様（BFNT のスプライトを
透明色つきで 640×400 16 色面に置く／MML を 1 音のビープで鳴らす）だけ合わせて
自前に置き換える。

### 大きい関数

| アドレス | サイズ | 見当 |
|---|---|---|
| `1000:5818` | 10,278 | 毎フレーム処理か（WinDepth の `FUN_00404860` に相当） |
| `1000:383a` | 8,067 | |
| `1000:1fdc` | 6,180 | |
| `1000:13e0` | 2,953 | |
| `1000:06f6` | 2,586 | |
| `1000:95a4` | 1,976 | |

### 16bit 逆コンパイル特有の読みにくさ

* `unaff_SS` / `unaff_DS` が変数として出る。セグメントレジスタが暗黙の引数に
  なるため。遠いデータへのアクセスがこの形で化ける
* 構造体配列が `int local_480[100]` のように潰れる。要素サイズを実測して
  復元する（WinDepth でも同じ作業をした）

## BFNT（グラフィック）— 解読済み（`tools/bfnt.py`）

```
0x00  char   magic[4]   "BFNT"
0x04  uint8  0x1a       TYPE 用の EOF
0x05  uint8  flags      0x03 = 16 色, 0x00 = モノクロ
0x06  uint16 ?          0
0x08  uint16 width      8 / 16 / 32
0x0a  uint16 height     8 / 16 / 32
0x0c  uint16 ?          0
0x0e  uint16 last       最終キャラクタコード
0x10..0x1f            0
0x20             画素データ
```

**画素は packed 4bpp（1 バイト 2 画素、上位ニブルが左）。**
PC-98 のプレーナ VRAM（A800/B000/B800/E000 に B,R,G,I）ではない。

**嵌りどころ 1: planar と packed はサイズが同じなので、サイズ検算では区別できない。**
32×32 なら planar (4 プレーン × 4 バイト × 32 行) も packed (16 バイト × 32 行) も
512 バイト。planar で読むと細かい色付きの砂嵐になるだけで、それらしく壊れるので
判断を誤る。4 通り（plane-major / row-interleaved / packed / plane-per-file）を
全部 PNG に出して並べたら packed だけ絵になった。**見るのが一番早い。**

サイズ検算（全ファイル一致）:
`(バイト数 - 32) == (last + 1) * height * (16 色なら width/2, モノクロなら width/8)`

| ファイル | w×h | 枚数 |
|---|---|---|
| `DEPTH.C08` | 8×8 | 6 |
| `DEPTH.C16` | 16×16 | 112 |
| `DEPTH.C32` | 32×32 | 64 |
| `DEPTH.BOS` | 32×32 | 56 |
| `DEPTH.FNT` | 16×16 モノクロ | 256 |

ヘッダの意味は `FUN_1000_c8e0`（BFNT ローダ）で裏付けた:

* `0x05` は **bpp - 1**。スプライトは 3（= 4bpp）、フォントは 0（= 1bpp）。
  bit 7 が立っていればヘッダ直後にパレットが付くが、Super Depth のファイルは
  どれも立っていない
* `0x0c` が first、`0x0e` が last。文字数は `last - first + 1`
* ローダは **幅 == 高さ かつ 幅 % 8 == 0** を要求する
* 1 文字のバイト数は `bpp * (幅/8) * 高さ`

**プレーン順まで確定できた。** ローダの内側ループは 1 バイト読んで、
上位ニブルの bit 0x80/0x40/0x20/0x10 を、下位ニブルの bit 8/4/2/1 を、
それぞれプレーン 3/2/1/0 に散らす。PC-98 はパレット番号を
`(I<<3)|(G<<2)|(R<<1)|B` で作り、そのプレーンが I,G,R,B なので、
**ニブルの値がそのままパレット番号**。並べ替えは要らない。
上位ニブルが左の画素であることもここで確定する。

### パレット

ハードは 4bit/ch を ポート 0xa8(番号) / 0xac(R) / 0xaa(G) / 0xae(B) で受ける。

* `FUN_1000_ba6a(table)` — 16 個の R,G,B を一括設定
* `FUN_1000_ba8c(index, r, g, b)` — 1 個だけ設定。**呼び出し元 22 か所**

**嵌りどころ 2: Ghidra の 16bit 出力では、push された戻り番地がローカル変数に化ける。**
`FUN_1000_dbb2` の中に `local_14 = 0x103e; ... FUN_1000_ba6a();` と出るが、
その直前には `local_14 = 0xdbd3;` などもあり、0xdbd3 は関数自身の直後の**コード番地**。
つまり local_14 は引数スロットではなく戻り番地の置き場。引数は機械語から
読むしかない（`tools/callsites.py` を書いた。near call を全部見つけて、
直前の `mov ax,imm16 / push ax` を遡る）。

結果、テーブル渡しのパレット設定は **`FUN_1000_ba6a(0x103e)` の 1 か所だけ**で、
それが起動時（ロゴ）のパレット。`src/pal.h` に取り出した。

**面中のパレットはテーブルではなく手続きで作られる。** 例えば

```c
for (i = 1; i < 6; i++) FUN_1000_ba8c(i, 0, (i + 1) * 2, i << 1);  /* 海のグラデーション */
FUN_1000_ba8c(6, 0, 0xe, 0xe);
FUN_1000_ba8c(7, 0, 0xf, 0xf);
```

しかも `FUN_1000_8184`（毎フレーム呼ばれる）が 2,3,4,6 番を毎フレーム書き換えて
色を回している。なので面中の色はデータではなくコードから起こす。

## 音 — 形式は判明、実装は未着手

`DEPTH.BGM` は BGMLIB 用の MML テキスト。1 曲が `,` 区切りの 3 パート、曲間は `*`。

```
T140O6L16N1R2C<BAGBAGFGFEDCDEG>C1     ,O6L16N1R2RRC<BAG...     ,O6L16N1R2RRRC<BAG...
```

`T` テンポ / `O` オクターブ / `L` 音長 / `N` ? / `R` 休符 / `<` `>` オクターブ移動。
PC-98 内蔵ビープ 1 音を高速に切り替えて 3 声に聞かせる方式なので、
**矩形波 1 音で正確に再現できる**（WinDepth の GM MIDI より簡単）。

収録曲: `Bio_100%` / `THEME OF SUPER DEPTH` / `SEA` / `SKY` / `SPACE` / `BOSS` /
`GAME OVER` / `NAME INN` / `SEA CLEAR` / `SKY CLEAR` / `BOSS CLEAR1..3` /
`ENDING` / `BOSS ALARM`

`DEPTH.EFS` は効果音で、`;` コメントと周波数の並びだけ:

```
;=============
; sound No.1
;=============
1000
900
1000
...
```

## パターン番号は全ファイル通し番号 — 解読済み

`FUN_1000_04ba` が `depth.fnt` → `depth.c32` → `depth.c16` → `depth.c08` →
`depth.bos` の順に読み、`FUN_1000_c8e0(path, 0)` の戻り値（= そのファイルの
先頭パターン番号）を DS に保存する。

| 変数 | ファイル | 移植で得た base |
|---|---|---|
| `DS:0x1d42` | `depth.c32` | 0 |
| `DS:0x1d46` | `depth.c16` | 64 |
| `DS:0x1dac` | `depth.c08` | 176 |
| （4 番目） | `depth.bos` | 182 |

c32 が最初なので **`0x1d42` は 0**。つまり逆コンパイル出力に出てくる
`*(int *)0x1d42 + 0x4c` のようなパターン番号は、そのまま通し番号として読める
（0x4c = 76 は c16 の範囲に入る。ファイル境界をまたいで使っている）。
`src/bfnt.c` は同じ順で読んで同じ base を返すので、**逆コンパイル出力の
パターン番号がそのまま使える**。合計 238 パターン。

描画は `FUN_1000_c788(x, y, size, pattern)`。パターンごとのサイズは
DS:0x1512 の uint16 テーブルから引いている（読み込み時に埋められる）。

## 画面

640×400 16 色。ハードは 2 ページを持ち、表示ページを ポート 0xa4、
描画ページを 0xa6 に書いて切り替える。**`DS:0x1844` がその現在値**で、
各面のループが毎フレーム `^= 1` している。移植では 1 面 + フラグで足りる。

* `FUN_1000_bf8e` / `FUN_1000_bf98` = `INT 18h`。キー有無の判定と 1 文字取得。
  `while (bf8e()) bf98();` はキーバッファの掃除
* `FUN_1000_bb38()` は `DS:0x0dd0` を返すだけ。**タイマ割り込みが増やすフレーム
  カウンタ**。これがゲームの時計

## トップレベルの流れ — 解読済み

`FUN_1000_0011` が `main(argc, argv)`。

コマンドラインに隠しスイッチがある。`-P810` を先に与えると以下が有効になる:

| スイッチ | 効果 |
|---|---|
| `-P810` | 以降のスイッチを解禁（0x32a = 810） |
| `-E n` | `DS:0x17f4` = n（最大 15） |
| `-H n` | `DS:0x212e` = n（残機） |
| `-S n` | `DS:0x2150` = n（開始ステージ） |
| `-W n` | `DS:0x1820` = n（最大 9） |
| `-B` | `DS:0x181a` = 1 |
| `-G` | `DS:0x1848` = 1（`-P810` 不要） |
| `-X` | `DS:0x212c` = 1（同） |

その後 argv[0] からプログラムのディレクトリを作り、`FUN_1000_04ba` が
データを全部読む。メインループはこう:

```c
for (;;) {
    FUN_1000_8ae2();                  /* タイトル/メニュー。結果は DS:0x184c */
    if (DS:0x184c == 0) break;        /* Exit */
    DS:0x1842 = DS:0x212e;            /* 残機 */
    DS:0x1818 = DS:0x2150;            /* ステージ番号 */
    while (DS:0x1842 > 0) {           /* 残機がある間 */
        type = DS:0x1818;
        while (type > 4) type -= 4;   /* 4 種類の巡回 */
        switch (type) {
        case 1: FUN_1000_06f6(); break;   /* 2,586 B */
        case 2: FUN_1000_1fdc(); break;   /* 6,180 B */
        case 3: FUN_1000_383a(); break;   /* 8,067 B */
        case 4: FUN_1000_5818(); break;   /* 10,278 B */
        }
        if (残機が減っていなければ) DS:0x1818++;
        if (DS:0x1818 > 12) DS:0x1818 = 1;
    }
    FUN_1000_aa92();                  /* ネーム入力 / ランキング */
}
```

**WinDepth と違って「毎フレーム 1 関数」ではない。** ステージ 4 種類それぞれが
自前のループを持っていて、だから 1 つが 1 万バイトある。ステージは 1..12 で、
種類は `((n - 1) % 4) + 1`。BGM の曲名（SEA / SKY / SPACE / BOSS）と数が合う。

## DEPTH.SCR — スコアランキング（テキスト）

```
050000 10 alty     91/08/10
045000 09 tacox    91/08/10
...
```

`スコア(6) 面(2) 名前(8) 日付(8)` の固定長。WinDepth の `windepth.ini` と違って
ゲームがそのまま読み書きするテキスト。

## ゲーム内容（EXE の文字列から）

敵名 18 個: `Tiddler` `Asthmatic` `Coypu` `Wigwam` `Eyewash` `Spooky`
`Fratricide` `Scourge` `Mean` `Chirstie` `Poppy` `Rob` `Hoot`
`Strayed Brain` `Eerie Core` `Lunatic Noddle` `B.P.S.M.` `Yamaboku`

* `Yamaboku` は WinDepth の自機パターン名と同じ。系譜がそのまま見える
* `Strayed Brain` は WinDepth の `BRAIN1/2` に対応しそう

メッセージから読める要素: `Speed Up!` `Shot Max Up!` `Shot Power Up!`
`Flush Bomb!` `Shot Special!` `Full Power!` `Ship 1up!` — WinDepth では
削られたパワーアップが一通りある。ステージは `SEA` / `SKY` / `SPACE` の 3 系統。

## 手順（この順で）

1. ~~**アーカイブ展開**~~ 済 — `tools/lzh.py`
2. ~~**BFNT 解読**~~ 済 — `tools/bfnt.py`、`src/bfnt.c`。全 238 パターンが絵になり、
   番号も原典と一致（`tests/sheet.exe`）
3. ~~**パレットの入手経路**~~ 済 — 起動時のテーブルは `src/pal.h`。面中は手続き生成
4. ~~**トップレベルの流れ**~~ 済 — 4 種類のステージ関数の巡回
5. **ステージのロジック** — `FUN_1000_06f6`（一番小さい 2,586 B）から読む。
   自機・敵配列・弾・アイテムの構造を出す
6. **ネイティブ** — `src/video.c` の 640×400 8bpp サーフェスを Win32 の DIB で出す
7. **WASM** — `putImageData` のみ。WebGL 不使用

## 環境

* Ghidra 12.1.3 + JDK 21 を `C:\prog\ghidra` に。再実行:
  ```sh
  JAVA_HOME=C:/prog/ghidra/jdk-21.0.12.1+1 \
  /c/prog/ghidra/ghidra_12.1.3_PUBLIC/support/analyzeHeadless.bat \
    C:/prog/claude2/super_depth_wasm/ghidra_proj sd \
    -import C:/prog/claude2/super_depth_wasm/orig/DEPTH.EXE \
    -scriptPath C:/prog/claude2/super_depth_wasm/tools/ghidra_scripts \
    -postScript DecompileAll.java C:/prog/claude2/super_depth_wasm/decomp
  ```
  プロジェクトディレクトリは事前に mkdir が要る。出力 `decomp/` は git 管理外
* Python は `C:\Python313\python.exe`、mingw は `C:\prog\w64devkit`、
  emsdk は `C:\prog\emsdk\emsdk`（`emcc.bat` は無く `emcc.exe`）
* ビルドは `tools/lowpri.sh` 経由で低優先度
* GitHub Pages は `main:/` を配信する設定

## 罠（環境側）

* **Bash ツールのヒアドキュメントはバックスラッシュを食う。** `\\n` が生の改行に
  なって C の文字列リテラルが壊れる、`\\` が `\` になってパスが壊れる、といった
  形で 3 回刺された。バックスラッシュを含む編集は Edit/Write ツールでやる
* **Windows は大文字小文字を区別しない。** `cp data/Windepth.mid data/windepth.mid`
  は同じファイルへのコピーになり、続く `rm` が原本を消す（WinDepth 側で一度やった）
