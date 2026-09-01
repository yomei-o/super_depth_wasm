/* 1000:d2f8 */

undefined2 __cdecl16near FUN_1000_d2f8(undefined2 param_1)

{
  int *piVar1;
  undefined2 uVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined2 unaff_DS;
  undefined2 local_80e [1027];
  int local_8;
  int local_6;
  int local_4;
  
  iVar4 = FUN_1000_e1ee(param_1,local_80e);
  if (iVar4 == -1) {
    return 1;
  }
  local_6 = 0;
  local_8 = *(int *)0x18ac;
  iVar4 = local_8 * 8;
  uVar2 = *(undefined2 *)(iVar4 + 0x18c2);
  *(undefined2 *)(iVar4 + 0x18bc) = *(undefined2 *)(iVar4 + 0x18c0);
  *(undefined2 *)(iVar4 + 0x18be) = uVar2;
  do {
    do {
      cVar3 = FUN_1000_e228(local_80e);
      iVar4 = (int)cVar3;
      if (iVar4 == 0x3b) {
        do {
          cVar3 = FUN_1000_e228(local_80e);
          iVar4 = (int)cVar3;
          if (iVar4 == -1) break;
        } while (iVar4 != 0xd);
      }
    } while (((iVar4 < 0x30) || (0x39 < iVar4)) && (iVar4 != -1));
    iVar6 = 0;
    while (((0x2f < iVar4 && (iVar4 < 0x3a)) && (iVar4 != -1))) {
      iVar6 = iVar6 * 10 + iVar4 + -0x30;
      cVar3 = FUN_1000_e228(local_80e);
      iVar4 = (int)cVar3;
    }
    local_4 = iVar6;
    if (iVar4 != -1) {
      *(int *)*(undefined4 *)(*(int *)0x18ac * 8 + 0x18bc) = iVar6;
      piVar5 = (int *)(*(int *)0x18ac * 8 + 0x18bc);
      piVar1 = piVar5;
      *piVar1 = *piVar1 + 2;
      if ((iVar6 == 0) || (local_6 = local_6 + 1, local_6 == 0x100)) {
        **(undefined2 **)piVar5 = 0;
        local_6 = 0;
        *(int *)0x18ac = *(int *)0x18ac + 1;
        if (*(int *)0x18ac == 0x10) break;
        iVar6 = *(int *)0x18ac * 8;
        uVar2 = *(undefined2 *)(iVar6 + 0x18c2);
        *(undefined2 *)(iVar6 + 0x18bc) = *(undefined2 *)(iVar6 + 0x18c0);
        *(undefined2 *)(iVar6 + 0x18be) = uVar2;
      }
    }
  } while (iVar4 != -1);
  FUN_1000_e8d2(local_80e[0]);
  if (local_8 == *(int *)0x18ac) {
    return 2;
  }
  return 0;
}


