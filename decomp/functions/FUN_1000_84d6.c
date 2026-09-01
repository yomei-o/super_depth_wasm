/* 1000:84d6 */

void __cdecl16near FUN_1000_84d6(int param_1)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    FUN_1000_c322(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(undefined2 *)(param_1 + 0x17f6));
  }
  else {
    FUN_1000_bfd6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),
                  *(undefined2 *)(param_1 + 0x17f6));
  }
  return;
}


