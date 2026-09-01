/* 1000:eeb2 */

int __cdecl16near FUN_1000_eeb2(uint *param_1)

{
  int iVar1;
  int iVar2;
  undefined2 unaff_DS;
  bool bVar3;
  uint local_6;
  int local_4;
  
  FUN_1000_f82a();
  local_6 = *param_1 - *(uint *)0x1290;
  local_4 = (param_1[1] - *(int *)0x1292) - (uint)(*param_1 < *(uint *)0x1290);
  iVar1 = FUN_1000_f692(&local_6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else if ((*(int *)0x1294 != 0) && (iVar2 = FUN_1000_f8d6(iVar1), iVar2 != 0)) {
    bVar3 = 0xf1ef < local_6;
    local_6 = local_6 + 0xe10;
    local_4 = local_4 + (uint)bVar3;
    iVar1 = FUN_1000_f692(&local_6);
    *(undefined2 *)(iVar1 + 0x10) = 1;
  }
  return iVar1;
}


