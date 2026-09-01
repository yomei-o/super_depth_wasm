/* 1000:85b8 */

void __cdecl16near FUN_1000_85b8(int param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1faa) * 2 + 0x4ec);
    FUN_1000_88d6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  (iVar1 + 8) * 2,iVar1 * 2 + 0x11);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1faa) * 2 + 0x4ec);
    FUN_1000_88a2(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  (iVar1 + 8) * 2,iVar1 * 2 + 0x11);
  }
  return;
}


