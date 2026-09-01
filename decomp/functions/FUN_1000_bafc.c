/* 1000:bafc */

undefined2 __cdecl16near FUN_1000_bafc(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  
  if ((*(int *)0xdd6 == 0) && (*(int *)0xdd4 == 0)) {
    return 1;
  }
  uRam00000028 = *(undefined2 *)0xdd4;
  uRam0000002a = *(undefined2 *)0xdd6;
  uRam00000060 = DAT_1000_bb64;
  uRam00000062 = DAT_1000_bb66;
  bVar1 = in(2);
  out(2,bVar1 | 4);
  return 0;
}


