/* 1000:dec4 */

void __cdecl16near FUN_1000_dec4(void)

{
  int iVar1;
  undefined2 unaff_DS;
  
  iVar1 = 0;
  *(undefined2 *)0xdd0 = 0;
  do {
    do {
    } while (*(int *)0xdd0 < 2);
    iVar1 = FUN_1000_ba8c(0,iVar1,iVar1,iVar1);
    *(undefined2 *)0xdd0 = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}


