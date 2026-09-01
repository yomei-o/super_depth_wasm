/* 1000:1faa */

undefined2 __cdecl16near FUN_1000_1faa(void)

{
  undefined2 uVar1;
  int unaff_BP;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  
  FUN_1000_a23c();
  FUN_1000_cf2c();
  if ((*(int *)(unaff_BP + -0x4c) == 1) && (*(int *)0x1842 == 0)) {
    FUN_1000_a29e();
  }
  uVar1 = *(undefined2 *)0x1844;
  out(0xa6,(char)uVar1);
  if ((*(int *)(unaff_BP + -0x4c) == 1) || (*(int *)0x1842 == 0)) {
    uVar1 = FUN_1000_84ae();
  }
  return uVar1;
}


