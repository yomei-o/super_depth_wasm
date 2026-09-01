/* 1000:bbf2 */

undefined2 __cdecl16near FUN_1000_bbf2(void)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  uVar1 = 0;
  if (*(int *)0xdd8 != 0) {
    out(0xa6,1);
    FUN_1000_bc40();
    *(undefined2 *)0xdd8 = 0;
    FUN_1000_bc40();
    FUN_1000_bc40();
    if (*(int *)0xdde != 0) {
      FUN_1000_bc40();
      *(undefined2 *)0xdde = 0;
    }
    out(0xa6,0);
    uVar1 = 1;
  }
  return uVar1;
}


