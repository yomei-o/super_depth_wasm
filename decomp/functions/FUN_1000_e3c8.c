/* 1000:e3c8 */

uint __cdecl16near FUN_1000_e3c8(int *param_1)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  undefined2 unaff_DS;
  
  piVar8 = param_1;
  for (iVar5 = 0x10; bVar2 = DAT_0000_0533, iVar5 != 0; iVar5 = iVar5 + -1) {
    piVar1 = piVar8;
    piVar8 = piVar8 + 1;
    *piVar1 = 0;
  }
  uVar6 = CONCAT11(DAT_0000_0531,DAT_0000_052e);
  uVar7 = CONCAT11(DAT_0000_0532,DAT_0000_0533);
  *param_1 = *param_1 + (uVar6 & 0x410) + (DAT_0000_0532 & 0x1c) * 0x100;
  param_1[1] = param_1[1] + (uVar6 & 0x2008) + (bVar2 & 0x1c);
  param_1[2] = param_1[2] + (uVar6 & 0x804) + (uVar7 & 0x4404);
  param_1[3] = param_1[3] + (uVar6 & 0x1020) + (uVar7 & 0x1011);
  param_1[4] = param_1[4] + (CONCAT11(DAT_0000_0530,DAT_0000_052f) & 0x1002);
  param_1[5] = param_1[5] + (CONCAT11(DAT_0000_052d,DAT_0000_052f) & 0x1004);
  param_1[6] = param_1[6] + (DAT_0000_0538 & 0xff01);
  param_1[7] = param_1[7] + (DAT_0000_052c & 0xff01);
  if (*(char *)0x11cd != '\0') {
    param_1[8] = param_1[8] + (DAT_0000_052c & 0xff04);
    param_1[9] = param_1[9] + (DAT_0000_052f & 0xff08);
    param_1[10] = param_1[10] + (DAT_0000_052d & 0xff40);
    param_1[0xb] = param_1[0xb] + (DAT_0000_052e & 0xff01);
    param_1[0xc] = param_1[0xc] + (DAT_0000_0538 & 0xff08);
    param_1[0xd] = param_1[0xd] + (DAT_0000_052d & 0xff80);
  }
  uVar4 = 0;
  if (*(char *)0x11ca != '\0') {
    FUN_1000_e60c();
    uVar3 = FUN_1000_e62c();
    uVar4 = (undefined1)((uint)uVar3 >> 8);
    bVar2 = ~(byte)uVar3;
    if (*(char *)0x11cc == '\0') {
      *param_1 = *param_1 + (uint)(bVar2 & 1);
      param_1[1] = param_1[1] + (uint)(bVar2 >> 1 & 1);
      param_1[2] = param_1[2] + (uint)(bVar2 >> 2 & 1);
      param_1[3] = param_1[3] + (uint)(bVar2 >> 3 & 1);
      param_1[4] = param_1[4] + (uint)(bVar2 >> 4 & 1);
      param_1[5] = param_1[5] + (uint)(bVar2 >> 5 & 1);
      FUN_1000_e60c();
      uVar3 = FUN_1000_e62c();
      uVar4 = (undefined1)((uint)uVar3 >> 8);
      bVar2 = ~(byte)uVar3;
    }
    param_1[8] = param_1[8] + (uint)(bVar2 & 1);
    param_1[9] = param_1[9] + (uint)(bVar2 >> 1 & 1);
    param_1[10] = param_1[10] + (uint)(bVar2 >> 2 & 1);
    param_1[0xb] = param_1[0xb] + (uint)(bVar2 >> 3 & 1);
    param_1[0xc] = param_1[0xc] + (uint)(bVar2 >> 4 & 1);
    param_1[0xd] = param_1[0xd] + (uint)(bVar2 >> 5 & 1);
  }
  return CONCAT11(uVar4,DAT_0000_052a) & 0xff01;
}


