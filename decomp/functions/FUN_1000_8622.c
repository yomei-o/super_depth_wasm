/* 1000:8622 */

void __cdecl16near FUN_1000_8622(int param_1,int param_2)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  if (*(int *)(param_1 + 0x1fca) < 0) {
    param_2 = param_2 + *(int *)(param_1 + 0x17f6);
    FUN_1000_88d6(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),param_2,
                  param_2 + 1);
  }
  else {
    param_2 = param_2 + *(int *)(param_1 + 0x17f6);
    FUN_1000_88a2(*(undefined2 *)(param_1 + 0x1f8a),*(undefined2 *)(param_1 + 0x1fca),param_2,
                  param_2 + 1);
  }
  return;
}


