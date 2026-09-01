/* 1000:d8dc */

undefined2 __cdecl16near FUN_1000_d8dc(int param_1,int param_2,undefined2 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined2 unaff_DS;
  int local_4;
  
  iVar3 = *(int *)0x1858 * 0x16;
  if (((*(int *)(iVar3 + 0x17c2) == 1) && (*(int *)(iVar3 + 0x17c6) != 1)) &&
     (*(int *)(iVar3 + 0x17be) != 0x20)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  iVar3 = *(int *)0x1858 - param_1;
  if (*(int *)0x1858 == param_1) {
    if ((*(char *)(param_1 * 0x16 + 0x17ba) == 'H') || (bVar2)) {
      if ((*(char *)(param_1 * 0x16 + 0x17d0) != 'H') && (1 < *(int *)(param_1 * 0x16 + 0x17d8)))
      goto LAB_1000_d9ef;
      if ((*(char *)(param_1 * 0x16 + 0x17e6) != 'H') && (1 < *(int *)(param_1 * 0x16 + 0x17ee)))
      goto LAB_1000_da1c;
      iVar3 = param_1 * 0x16 + 0x17b2;
    }
    else {
      iVar3 = param_1 * 0x16 + 0x17b2;
    }
  }
  else {
    if (iVar3 == 1) {
      if ((*(char *)(param_1 * 0x16 + 0x17d0) != 'H') && (!bVar2)) {
LAB_1000_d9ef:
        iVar3 = param_1 * 0x16 + 0x17c8;
        goto LAB_1000_d97e;
      }
      iVar3 = param_1 * 0x16;
      if (((*(char *)(iVar3 + 0x17ba) != 'H') || (*(char *)(iVar3 + 0x17e6) == 'H')) ||
         (*(int *)(iVar3 + 0x17ee) < 2)) goto LAB_1000_d984;
    }
    else if (((iVar3 != 2) || (*(char *)(param_1 * 0x16 + 0x17e6) == 'H')) || (bVar2))
    goto LAB_1000_d984;
LAB_1000_da1c:
    iVar3 = param_1 * 0x16 + 0x17de;
  }
LAB_1000_d97e:
  FUN_1000_db32(iVar3);
LAB_1000_d984:
  iVar3 = *(int *)0x1858;
  piVar1 = (int *)(iVar3 * 0x16 + 0x17c2);
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 == 0) && (iVar3 = FUN_1000_d4f2(iVar3 * 0x16 + 0x17b2), iVar3 == 0)) {
    *(uint *)0x185a = *(uint *)0x185a | 1 << (*(byte *)0x1858 & 0x1f);
  }
  *(int *)0x1858 = *(int *)0x1858 + 1;
  if ((*(int *)0x1858 == param_2) && (*(undefined2 *)0x1858 = param_3, *(int *)0x185a == 7)) {
    *(undefined2 *)0x185a = 0;
    for (local_4 = 0; local_4 < 3; local_4 = local_4 + 1) {
      iVar3 = local_4 * 0x16 + 0x17b2;
      FUN_1000_d4b4(iVar3);
      *(uint *)(local_4 * 0x16 + 0x17c4) =
           (uint)((1 << ((byte)local_4 & 0x1f) & *(uint *)0x1888) != 0);
      FUN_1000_d4f2(iVar3);
    }
    return 1;
  }
  return 0;
}


