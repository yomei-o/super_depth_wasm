/* 1000:ec12 */

/* WARNING: Unable to track spacebase fully for stack */

undefined2 FUN_1000_ec12(uint param_1,char *param_2,int param_3)

{
  char *pcVar1;
  code *pcVar2;
  char cVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar9;
  undefined4 uVar10;
  
  if (*(uint *)0x1215 <= param_1) {
LAB_1000_ec25:
    uVar4 = FUN_1000_f3e3();
    return uVar4;
  }
  if (*(int *)0x140e == -0x292a) {
    (*(code *)*(undefined2 *)0x1410)();
  }
  if ((*(byte *)(param_1 + 0x1217) & 0x20) != 0) {
    bVar9 = false;
    pcVar2 = (code *)swi(0x21);
    (*pcVar2)();
    if (bVar9) goto LAB_1000_ec25;
  }
  if ((*(byte *)(param_1 + 0x1217) & 0x80) != 0) {
    bVar9 = true;
    iVar6 = param_3;
    pcVar8 = param_2;
    if (param_3 != 0) {
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        bVar9 = *pcVar1 == '\n';
      } while (!bVar9);
      if (!bVar9) goto LAB_1000_ecbb;
      uVar5 = FUN_1000_f424();
      if (uVar5 < 0xa9) {
        uVar10 = FUN_1000_f168();
        pcVar7 = (char *)((ulong)uVar10 >> 0x10);
        bVar9 = pcVar8 < pcVar7;
        if (pcVar8 != pcVar7) {
          pcVar2 = (code *)swi(0x21);
          uVar5 = (*pcVar2)(iVar6);
          if ((bVar9) || (uVar5 < (uint)((int)pcVar8 - (int)pcVar7))) {
            uVar4 = FUN_1000_f3e3();
            return uVar4;
          }
        }
        return (int)uVar10;
      }
      pcVar7 = &stack0xfff2;
      pcVar8 = &stack0xfff2;
      do {
        pcVar1 = param_2;
        param_2 = param_2 + 1;
        cVar3 = *pcVar1;
        if (cVar3 == '\n') {
          cVar3 = '\r';
          if (pcVar8 == pcVar7) {
            cVar3 = FUN_1000_ecc3();
          }
          pcVar1 = pcVar8;
          pcVar8 = pcVar8 + 1;
          *pcVar1 = cVar3;
          cVar3 = '\n';
        }
        if (pcVar8 == pcVar7) {
          cVar3 = FUN_1000_ecc3();
        }
        pcVar1 = pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar1 = cVar3;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      FUN_1000_ecc3();
    }
    uVar4 = FUN_1000_ed0d();
    return uVar4;
  }
LAB_1000_ecbb:
  uVar4 = FUN_1000_ed1b();
  return uVar4;
}


