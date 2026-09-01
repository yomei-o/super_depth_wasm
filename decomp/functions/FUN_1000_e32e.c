/* 1000:e32e */

undefined2 __cdecl16near FUN_1000_e32e(undefined1 param_1,undefined2 *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  *(undefined1 *)((int)param_2 + param_2[2] + 6) = param_1;
  param_2[2] = param_2[2] + 1;
  if (0x7ff < (int)param_2[2]) {
    iVar1 = FUN_1000_ec12(*param_2,param_2 + 3,0x800);
    if (iVar1 != 0x800) {
      return 0xffff;
    }
    param_2[2] = 0;
  }
  return 1;
}


