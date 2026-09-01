/* 1000:c650 */

uint __cdecl16near FUN_1000_c650(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uRam0001c74d = param_2 * 0x50 + (param_1 >> 3);
  iVar1 = *(int *)(param_3 * 2 + 0x1512);
  uRam0001c755 = (undefined1)(0x50U - iVar1);
                    /* WARNING: Read-only address (ram,0x0001c755) is written */
  if ((param_2 & 0x8000) == 0) {
    iRam0001c75e = 0;
    if (399 < (int)param_2) {
      uRam0001c74d = 0x1111;
      iRam0001c75e = 0x1111;
      return 0;
    }
    if (399 < (int)(param_2 + iVar1)) {
      iVar3 = 400 - (param_2 + iVar1);
      iRam0001c75e = 0;
      do {
        iRam0001c75e = iRam0001c75e + iVar1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar3 = iVar1 * 8 + param_2;
    if (iVar3 == 0 || SCARRY2(iVar1 * 8,param_2) != iVar3 < 0) {
      uRam0001c74d = 0x1111;
      iRam0001c75e = 0x1111;
      return 0x50U - iVar1;
    }
    iVar1 = -param_2;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iRam0001c75e = 0;
    uRam0001c74d = param_1 >> 3;
  }
                    /* WARNING: Read-only address (ram,0x0001c75e) is written */
                    /* WARNING: Read-only address (ram,0x0001c74d) is written */
  out(0x7c,0xc0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  FUN_1000_c74c();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  FUN_1000_c74c();
  out(0x7c,0xcd);
  FUN_1000_c74c();
  out(0x7c,0xcb);
  FUN_1000_c74c();
  out(0x7c,199);
  uVar2 = FUN_1000_c74c();
  out(0x7c,0);
  return uVar2 & 0xff00;
}


