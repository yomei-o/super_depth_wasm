/* 1000:bfd6 */

uint __cdecl16near FUN_1000_bfd6(uint param_1,undefined2 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined2 unaff_DS;
  
  uVar2 = *(uint *)(param_3 * 2 + 0x1512);
  iVar4 = (param_1 & 7) * 2;
  cVar3 = (char)uVar2;
  cVar1 = (char)((uVar2 & 0xff) >> 1);
  if ((param_1 >> 3 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      DAT_1000_c19e = *(undefined2 *)(iVar4 + 0xe32);
      DAT_1000_c1a5 = (undefined1)*(undefined2 *)(iVar4 + 0xe42);
      DAT_1000_c193 = uVar2 << 3;
      DAT_1000_c1b3 = 'P' - cVar3;
      uRam0001c18d = 0xc192;
      DAT_1000_c1b5 = cVar1;
    }
    else {
      DAT_1000_c1ca = *(undefined2 *)(iVar4 + 0xe32);
      DAT_1000_c1d1 = (undefined1)*(undefined2 *)(iVar4 + 0xe42);
      DAT_1000_c1bb = uVar2 << 3;
      DAT_1000_c1e5 = 'P' - cVar3;
      uRam0001c18d = 0xc1ba;
      DAT_1000_c1e7 = cVar1;
    }
  }
  else if ((uVar2 & 1) == 0) {
    DAT_1000_c206 = *(undefined2 *)(iVar4 + 0xe32);
    DAT_1000_c20d = (undefined1)*(undefined2 *)(iVar4 + 0xe42);
    DAT_1000_c222 = cVar1 + -1;
    DAT_1000_c1ed = uVar2 << 3;
    DAT_1000_c220 = 'N' - cVar3;
    uRam0001c18d = 0xc1ec;
  }
  else {
    DAT_1000_c242 = *(undefined2 *)(iVar4 + 0xe32);
    DAT_1000_c249 = (undefined1)*(undefined2 *)(iVar4 + 0xe42);
    DAT_1000_c229 = uVar2 << 3;
    DAT_1000_c257 = 'O' - cVar3;
    uRam0001c18d = 0xc228;
    DAT_1000_c259 = cVar1;
  }
  out(0x7c,0xc0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  thunk_FUN_1000_1122();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  thunk_FUN_1000_1122();
  out(0x7c,0xcd);
  thunk_FUN_1000_1122();
  out(0x7c,0xcb);
  thunk_FUN_1000_1122();
  out(0x7c,199);
  uVar2 = thunk_FUN_1000_1122();
  out(0x7c,0);
  return uVar2 & 0xff00;
}


