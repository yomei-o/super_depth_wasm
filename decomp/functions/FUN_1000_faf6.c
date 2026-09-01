/* 1000:faf6 */

void __cdecl16near FUN_1000_faf6(void)

{
  int *piVar1;
  int in_AX;
  undefined2 *in_BX;
  undefined2 *puVar2;
  undefined2 unaff_DS;
  
  in_BX[2] = in_AX + (int)in_BX;
  puVar2 = (undefined2 *)(in_AX + (int)in_BX + -2);
  piVar1 = in_BX + 10;
  *puVar2 = 0xfffe;
  in_BX[5] = puVar2;
  *piVar1 = in_AX + -0x17;
  *in_BX = unaff_DS;
  in_BX[3] = piVar1;
  in_BX[4] = piVar1;
  in_BX[6] = 0;
  in_BX[7] = 0;
  in_BX[8] = 0;
  in_BX[9] = 0;
  return;
}


