/* 1000:c322 */

uint __cdecl16near FUN_1000_c322(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_DS;
  
  uVar8 = param_2 * 0x50 + (param_1 >> 3);
  uVar3 = *(uint *)(param_3 * 2 + 0x1512);
  iVar7 = (param_1 & 7) * 2;
  cVar4 = (char)uVar3;
  cVar2 = (char)((uVar3 & 0xff) >> 1);
  iRam0001c57b = 0;
                    /* WARNING: Read-only address (ram,0x0001c52f) is written */
                    /* WARNING: Read-only address (ram,0x0001c548) is written */
                    /* WARNING: Read-only address (ram,0x0001c556) is written */
                    /* WARNING: Read-only address (ram,0x0001c564) is written */
  iRam0001c564 = 0;
  if ((uVar8 & 0x8000) == 0) {
    if (399 < param_2) {
      iRam0001c52f = 0;
      iRam0001c548 = 0;
      iRam0001c556 = 0;
      iRam0001c564 = 0;
      iRam0001c57b = 0;
      return param_3 << 2;
    }
    param_2 = uVar3 * 8 + param_2;
    iVar5 = param_2 + -400;
    if (iVar5 == 0 || param_2 < 400) {
      iVar5 = 0;
    }
    else {
      iRam0001c564 = 0;
      iVar6 = iVar5;
      do {
        iRam0001c564 = iRam0001c564 + uVar3;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else {
    iVar5 = uVar3 * 8 + param_2;
    if (iVar5 == 0 || SCARRY2(uVar3 * 8,param_2) != iVar5 < 0) {
      iRam0001c52f = 0;
      iRam0001c548 = 0;
      iRam0001c556 = 0;
      iRam0001c564 = 0;
      iRam0001c57b = 0;
      return param_3 << 2;
    }
    iVar5 = 0;
    iRam0001c57b = 0;
    uVar9 = uVar8;
    do {
      iVar5 = iVar5 + 1;
      iRam0001c57b = iRam0001c57b + uVar3;
      uVar8 = uVar9 + 0x50;
      bVar1 = (int)uVar9 < -0x50;
      uVar9 = uVar8;
    } while (bVar1);
  }
  if ((uVar8 & 1) == 0) {
    if ((uVar3 & 1) == 0) {
      DAT_1000_c590 = *(undefined2 *)(iVar7 + 0xe52);
      DAT_1000_c597 = (undefined1)*(undefined2 *)(iVar7 + 0xe62);
      DAT_1000_c585 = uVar3 * 8 - iVar5;
      DAT_1000_c5a5 = 'P' - cVar4;
      uRam0001c580 = 0xc584;
      DAT_1000_c5a7 = cVar2;
    }
    else {
      DAT_1000_c5bc = *(undefined2 *)(iVar7 + 0xe52);
      DAT_1000_c5c3 = (undefined1)*(undefined2 *)(iVar7 + 0xe62);
      DAT_1000_c5ad = uVar3 * 8 - iVar5;
      DAT_1000_c5d7 = 'P' - cVar4;
      uRam0001c580 = 0xc5ac;
      DAT_1000_c5d9 = cVar2;
    }
  }
  else if ((uVar3 & 1) == 0) {
    DAT_1000_c5f8 = *(undefined2 *)(iVar7 + 0xe52);
    DAT_1000_c5ff = (undefined1)*(undefined2 *)(iVar7 + 0xe62);
    DAT_1000_c614 = cVar2 + -1;
    DAT_1000_c5df = uVar3 * 8 - iVar5;
    DAT_1000_c612 = 'N' - cVar4;
    uRam0001c580 = 0xc5de;
  }
  else {
    DAT_1000_c634 = *(undefined2 *)(iVar7 + 0xe52);
    DAT_1000_c63b = (undefined1)*(undefined2 *)(iVar7 + 0xe62);
    DAT_1000_c61b = uVar3 * 8 - iVar5;
    DAT_1000_c649 = 'O' - cVar4;
    uRam0001c580 = 0xc61a;
    DAT_1000_c64b = cVar2;
  }
  out(0x7c,0xc0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  iRam0001c52f = iRam0001c564;
  iRam0001c548 = iRam0001c564;
  iRam0001c556 = iRam0001c564;
  FUN_1000_c57a();
  out(0x7c,0xce);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  out(0x7e,0xff);
  FUN_1000_c57a();
  out(0x7c,0xcd);
  FUN_1000_c57a();
  out(0x7c,0xcb);
  FUN_1000_c57a();
  out(0x7c,199);
  uVar3 = FUN_1000_c57a();
  out(0x7c,0);
                    /* WARNING: Read-only address (ram,0x0001c52f) is written */
                    /* WARNING: Read-only address (ram,0x0001c548) is written */
                    /* WARNING: Read-only address (ram,0x0001c556) is written */
                    /* WARNING: Read-only address (ram,0x0001c564) is written */
  return uVar3 & 0xff00;
}


