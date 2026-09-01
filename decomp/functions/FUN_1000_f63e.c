/* 1000:f63e */

undefined4 __cdecl16near FUN_1000_f63e(byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined2 unaff_DS;
  bool bVar10;
  
  iVar5 = 0;
  iVar7 = 0;
  do {
    do {
      pbVar1 = param_1;
      param_1 = param_1 + 1;
      bVar2 = *pbVar1;
    } while (bVar2 == 0x20);
  } while (bVar2 == 9);
  if ((bVar2 != 0x2d) && (bVar4 = bVar2, bVar2 != 0x2b)) goto LAB_1000_f65e;
  while( true ) {
    pbVar1 = param_1;
    param_1 = param_1 + 1;
    bVar4 = *pbVar1;
LAB_1000_f65e:
    if ((0x39 < bVar4) || (bVar4 < 0x30)) break;
    uVar8 = iVar7 * 2;
    uVar6 = iVar5 << 1 | (uint)(iVar7 < 0);
    iVar5 = iVar7 << 2;
    uVar9 = iVar7 * 8;
    uVar3 = iVar7 * 10;
    iVar7 = uVar3 + (byte)(bVar4 - 0x30);
    iVar5 = ((uVar6 << 1 | (uint)((int)uVar8 < 0)) << 1 | (uint)(iVar5 < 0)) + uVar6 +
            (uint)CARRY2(uVar9,uVar8) + (uint)CARRY2(uVar3,(uint)(byte)(bVar4 - 0x30));
  }
  if (bVar2 == 0x2d) {
    bVar10 = iVar7 != 0;
    iVar7 = -iVar7;
    iVar5 = -(iVar5 + (uint)bVar10);
  }
  return CONCAT22(iVar5,iVar7);
}


