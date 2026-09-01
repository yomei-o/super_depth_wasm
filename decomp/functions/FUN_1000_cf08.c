/* 1000:cf08 */

undefined2 __cdecl16near FUN_1000_cf08(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if (*(int *)0x1854 == 0) {
    return 6;
  }
  uVar1 = *(undefined2 *)0x185c;
  *(undefined2 *)0x185c = 0;
  do {
  } while (*(int *)0x1854 == 1);
  *(undefined2 *)0x185c = uVar1;
  return 0;
}


