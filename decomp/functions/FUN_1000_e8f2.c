/* 1000:e8f2 */

void FUN_1000_e8f2(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined2 unaff_DS;
  bool bVar5;
  undefined4 uVar6;
  
  if (*(uint *)0x1215 <= param_1) goto LAB_1000_e969;
  bVar5 = false;
  if ((param_3 & 0x8000) != 0) {
    if (param_4 == 0) goto LAB_1000_e969;
    bVar5 = false;
    pcVar2 = (code *)swi(0x21);
    uVar6 = (*pcVar2)();
    uVar3 = (uint)((ulong)uVar6 >> 0x10);
    if (bVar5) goto LAB_1000_e969;
    if ((param_4 & 2) == 0) {
      uVar1 = (uint)CARRY2((uint)uVar6,param_2);
      bVar5 = CARRY2(uVar3,param_3) || CARRY2(uVar3 + param_3,uVar1);
      if ((int)(uVar3 + param_3 + uVar1) < 0) goto LAB_1000_e969;
    }
    else {
      pcVar2 = (code *)swi(0x21);
      uVar6 = (*pcVar2)(uVar3);
      uVar4 = (uint)((ulong)uVar6 >> 0x10);
      uVar3 = (uint)CARRY2((uint)uVar6,param_2);
      uVar1 = uVar4 + param_3;
      bVar5 = CARRY2(uVar4,param_3) || CARRY2(uVar1,uVar3);
      if ((int)(uVar1 + uVar3) < 0) {
        pcVar2 = (code *)swi(0x21);
        (*pcVar2)();
        goto LAB_1000_e969;
      }
    }
  }
  pcVar2 = (code *)swi(0x21);
  (*pcVar2)();
  if (!bVar5) {
    *(byte *)(param_1 + 0x1217) = *(byte *)(param_1 + 0x1217) & 0xfd;
  }
LAB_1000_e969:
  FUN_1000_f3e3();
  return;
}


