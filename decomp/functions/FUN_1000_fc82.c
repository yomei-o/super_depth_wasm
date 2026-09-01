/* 1000:fc82 */

void FUN_1000_fc82(undefined2 *param_1,undefined2 param_2,undefined2 param_3)

{
  undefined2 unaff_DS;
  undefined4 uVar1;
  
  uVar1 = FUN_1000_fbe2(*param_1,param_1[1],param_2,param_3);
  param_1[1] = (int)((ulong)uVar1 >> 0x10);
  *param_1 = (int)uVar1;
  return;
}


