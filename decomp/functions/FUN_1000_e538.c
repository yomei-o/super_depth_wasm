/* 1000:e538 */

void __cdecl16near FUN_1000_e538(int *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_DS;
  
  bVar1 = DAT_0000_0533;
  uVar2 = CONCAT11(DAT_0000_0531,DAT_0000_052e);
  uVar3 = CONCAT11(DAT_0000_0532,DAT_0000_0533);
  *param_1 = *param_1 + (uVar2 & 0x410) + (DAT_0000_0532 & 0x1c) * 0x100;
  param_1[1] = param_1[1] + (uVar2 & 0x2008) + (bVar1 & 0x1c);
  param_1[2] = param_1[2] + (uVar2 & 0x804) + (uVar3 & 0x4404);
  param_1[3] = param_1[3] + (uVar2 & 0x1020) + (uVar3 & 0x1011);
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
  return;
}


