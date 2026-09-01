/* 1000:e1ee */

int __cdecl16near FUN_1000_e1ee(undefined2 param_1,int *param_2)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = FUN_1000_e986(param_1,0x8000);
  *param_2 = iVar1;
  if (iVar1 != -1) {
    iVar1 = FUN_1000_eb28(*param_2,param_2 + 3,0x800);
    param_2[1] = iVar1;
    param_2[2] = 0;
    iVar1 = *param_2;
  }
  return iVar1;
}


