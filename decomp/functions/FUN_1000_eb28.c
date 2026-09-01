/* 1000:eb28 */

/* WARNING: Removing unreachable block (ram,0x0001ec0f) */
/* WARNING: Removing unreachable block (ram,0x0001ec04) */

void FUN_1000_eb28(uint param_1,undefined2 param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined2 uVar4;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  int iVar5;
  undefined1 extraout_AH_01;
  int iVar7;
  uint extraout_DX;
  char *pcVar8;
  char *pcVar9;
  undefined2 unaff_DS;
  undefined1 uVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar6;
  
  if (((*(uint *)0x1215 <= param_1) || (param_3 == 0)) || ((*(byte *)(param_1 + 0x1217) & 2) != 0))
  {
LAB_1000_eba5:
    FUN_1000_f3e3();
    return;
  }
  uVar10 = *(uint *)0x140e < 0xd6d6;
  if (*(uint *)0x140e == 0xd6d6) {
    (*(code *)*(undefined2 *)0x1410)();
  }
  pcVar3 = (code *)swi(0x21);
  uVar12 = (*pcVar3)();
  pcVar9 = (char *)((ulong)uVar12 >> 0x10);
  if ((((bool)uVar10) || ((*(byte *)(param_1 + 0x1217) & 0x80) == 0)) ||
     (*(byte *)(param_1 + 0x1217) = *(byte *)(param_1 + 0x1217) & 0xfb, (int)uVar12 == 0))
  goto LAB_1000_eba5;
  uVar4 = 0xd00;
  if (*pcVar9 == '\n') {
    *(byte *)(param_1 + 0x1217) = *(byte *)(param_1 + 0x1217) | 4;
  }
LAB_1000_eb8a:
  pcVar8 = (char *)((ulong)uVar12 >> 0x10);
  iVar7 = (int)uVar12;
  pcVar1 = pcVar8 + 1;
  cVar2 = *pcVar8;
  cVar6 = (char)((uint)uVar4 >> 8);
  uVar4 = CONCAT11(cVar6,cVar2);
  if (cVar2 == cVar6) {
    if (iVar7 != 1) {
      if (*pcVar1 != '\n') goto LAB_1000_eb9a;
      goto LAB_1000_eb9d;
    }
    bVar11 = false;
    if ((*(byte *)(param_1 + 0x1217) & 0x40) == 0) {
      pcVar3 = (code *)swi(0x21);
      iVar5 = (*pcVar3)();
      if (!bVar11) {
        uVar10 = 0;
        if (iVar5 != 0) {
          pcVar3 = (code *)swi(0x21);
          (*pcVar3)();
          iVar7 = 1;
          uVar10 = extraout_AH_01;
        }
        uVar4 = CONCAT11(uVar10,0xd);
        goto LAB_1000_eb9a;
      }
      goto LAB_1000_eba5;
    }
    pcVar3 = (code *)swi(0x21);
    (*pcVar3)();
    bVar11 = false;
    uVar10 = extraout_AH;
    if ((extraout_DX & 0x20) == 0) {
      pcVar3 = (code *)swi(0x21);
      (*pcVar3)();
      uVar10 = extraout_AH_00;
      if (bVar11) goto LAB_1000_eba5;
    }
    uVar4 = CONCAT11(uVar10,10);
  }
  else if (cVar2 == '\x1a') {
    *(byte *)(param_1 + 0x1217) = *(byte *)(param_1 + 0x1217) | 2;
    goto LAB_1000_eba5;
  }
LAB_1000_eb9a:
  *pcVar9 = (char)uVar4;
  pcVar9 = pcVar9 + 1;
LAB_1000_eb9d:
  uVar12 = CONCAT22(pcVar1,iVar7 + -1);
  if (iVar7 + -1 == 0) goto LAB_1000_eba5;
  goto LAB_1000_eb8a;
}


