/* 1000:824a */

void __cdecl16near FUN_1000_824a(int param_1)

{
  undefined2 unaff_DS;
  
  param_1 = param_1 * 2;
  *(undefined2 *)(param_1 + 0x1faa) = 9;
  *(int *)0x1db6 =
       *(int *)0x1db6 + *(int *)((*(int *)0x1816 * 10 + *(int *)(param_1 + 0x17f6)) * 2 + 0x2e8);
  FUN_1000_a25a();
  *(undefined2 *)(param_1 + 0x1d8a) = 0;
  *(undefined2 *)(param_1 + 0x1d6a) = 0;
  FUN_1000_cff4(3);
  return;
}


