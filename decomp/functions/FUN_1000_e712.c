/* 1000:e712 */

void FUN_1000_e712(void)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  code *pcVar5;
  int iVar6;
  uint extraout_DX;
  int in_BX;
  int iVar7;
  int unaff_SI;
  byte *pbVar8;
  byte *pbVar9;
  undefined2 unaff_ES;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar10;
  
  FUN_1000_f142();
  FUN_1000_f399();
  if (*(int *)0x140e == -0x292a) {
    (*(code *)*(undefined2 *)0x1412)();
  }
  (*(code *)*(undefined2 *)0x11d0)(0xff);
  pcVar1 = (char *)(in_BX + unaff_SI + 0x3500);
  *pcVar1 = *pcVar1 + (char)((uint)in_BX >> 8);
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  *(int *)0x11fa = in_BX;
  *(undefined2 *)0x11fc = unaff_ES;
  pcVar5 = (code *)swi(0x21);
  (*pcVar5)();
  if (*(int *)0x141e != 0) {
    *(undefined2 *)0x1420 = 0x1000;
    *(undefined2 *)0x1428 = 0x1000;
    bVar10 = false;
    (*(code *)*(undefined2 *)0x141e)();
    if (bVar10) {
      FUN_1000_f162();
      return;
    }
    (*(code *)*(undefined2 *)0x141e)();
  }
  iVar7 = *(int *)0x2c;
  if (iVar7 != 0) {
    pbVar9 = (byte *)0x0;
    do {
      if (*pbVar9 == 0) break;
      iVar6 = 0xd;
      pbVar8 = (byte *)0x11ec;
      bVar10 = false;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar4 = pbVar9;
        pbVar9 = pbVar9 + 1;
        pbVar2 = pbVar8;
        pbVar8 = pbVar8 + 1;
        bVar10 = *pbVar2 == *pbVar4;
      } while (bVar10);
      if (bVar10) {
        pbVar8 = (byte *)0x1217;
        goto LAB_1000_e7bf;
      }
      iVar6 = 0x7fff;
      bVar10 = true;
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pbVar2 = pbVar9;
        pbVar9 = pbVar9 + 1;
        bVar10 = *pbVar2 == 0;
      } while (!bVar10);
    } while (bVar10);
  }
LAB_1000_e7d3:
  iVar7 = 4;
  do {
    bVar10 = false;
    *(byte *)(iVar7 + 0x1217) = *(byte *)(iVar7 + 0x1217) & 0xbf;
    pcVar5 = (code *)swi(0x21);
    (*pcVar5)();
    if ((!bVar10) && ((extraout_DX & 0x80) != 0)) {
      *(byte *)(iVar7 + 0x1217) = *(byte *)(iVar7 + 0x1217) | 0x40;
    }
    iVar7 = iVar7 + -1;
  } while (-1 < iVar7);
  FUN_1000_e8bf();
  FUN_1000_e8b0();
  return;
LAB_1000_e7bf:
  pbVar2 = pbVar9;
  pbVar3 = pbVar9 + 1;
  if (*pbVar2 < 0x41) goto LAB_1000_e7d3;
  pbVar9 = pbVar9 + 2;
  if (*pbVar3 < 0x41) goto LAB_1000_e7d3;
  pbVar4 = pbVar8;
  pbVar8 = pbVar8 + 1;
  *pbVar4 = *pbVar3 + 0xbf | (*pbVar2 + 0xbf) * '\x10';
  goto LAB_1000_e7bf;
}


