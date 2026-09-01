/* 1000:c25e */

uint __cdecl16near FUN_1000_c25e(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined2 unaff_DS;
  
  iRam0001c313 = param_2 * 0x50 + (param_1 >> 3);
  cRam0001c319 = 'P' - (char)*(undefined2 *)(param_3 * 2 + 0x1512);
  out(0x7c,0xc0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  FUN_1000_c312();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  FUN_1000_c312();
  out(0x7c,0xcd);
  FUN_1000_c312();
  out(0x7c,0xcb);
  FUN_1000_c312();
  out(0x7c,199);
  uVar1 = FUN_1000_c312();
  out(0x7c,0);
  return uVar1 & 0xff00;
}


