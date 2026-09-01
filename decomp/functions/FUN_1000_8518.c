/* 1000:8518 */

void __cdecl16near FUN_1000_8518(int param_1)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    FUN_1000_88d6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(int *)(param_1 + 0x17f6),*(int *)(param_1 + 0x17f6) + 1);
  }
  else {
    FUN_1000_88a2(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(int *)(param_1 + 0x17f6),*(int *)(param_1 + 0x17f6) + 1);
  }
  return;
}


