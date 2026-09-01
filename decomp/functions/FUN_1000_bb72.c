/* 1000:bb72 */

undefined1 __cdecl16near FUN_1000_bb72(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int unaff_SI;
  undefined2 unaff_DS;
  
  if (*(int *)0xdd8 != 0) goto LAB_1000_bbc0;
  out(0xa6,1);
  uVar2 = FUN_1000_bbd0();
  if (unaff_SI != 0) {
    *(undefined2 *)0xdd8 = uVar2;
    uVar2 = FUN_1000_bbd0();
    if (unaff_SI != 0) {
      *(undefined2 *)0xdda = uVar2;
      uVar2 = FUN_1000_bbd0();
      if (unaff_SI != 0) {
        *(undefined2 *)0xddc = uVar2;
        if ((DAT_0000_054c & 4) != 0) {
          uVar2 = FUN_1000_bbd0();
          if (unaff_SI == 0) goto LAB_1000_bbc7;
          *(undefined2 *)0xdde = uVar2;
        }
LAB_1000_bbc0:
        uVar1 = 0;
        goto LAB_1000_bbc2;
      }
    }
  }
LAB_1000_bbc7:
  uVar1 = 1;
  *(undefined1 *)0xde0 = 1;
LAB_1000_bbc2:
  out(0xa6,uVar1);
  return uVar1;
}


