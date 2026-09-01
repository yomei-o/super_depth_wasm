/* 1000:e1ae */

undefined2 __cdecl16near FUN_1000_e1ae(undefined2 *param_1,int param_2)

{
  undefined2 unaff_DS;
  long lVar1;
  
  param_1[2] = param_1[2] + param_2;
  if ((int)param_1[1] <= (int)param_1[2]) {
    lVar1 = FUN_1000_e8f2(*param_1,param_1[2] - param_1[1],(int)(param_1[2] - param_1[1]) >> 0xf,1);
    if (lVar1 == -1) {
      return 0xffff;
    }
    param_1[2] = param_1[1];
  }
  return 0;
}


