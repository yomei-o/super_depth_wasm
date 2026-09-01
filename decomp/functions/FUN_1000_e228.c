/* 1000:e228 */

undefined1 __cdecl16near FUN_1000_e228(undefined2 *param_1)

{
  int iVar1;
  undefined2 unaff_DS;
  
  if ((int)param_1[1] <= (int)param_1[2]) {
    iVar1 = FUN_1000_eb28(*param_1,param_1 + 3,0x800);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      return 0xff;
    }
    param_1[2] = 0;
  }
  iVar1 = param_1[2];
  param_1[2] = param_1[2] + 1;
  return *(undefined1 *)((int)param_1 + iVar1 + 6);
}


