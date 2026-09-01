/* 1000:e62c */

undefined1 __cdecl16near FUN_1000_e62c(void)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 in_BL;
  
  do {
    bVar1 = in(0x188);
  } while ((bVar1 & 0x80) != 0);
  out(0x188,in_BL);
  do {
    bVar1 = in(0x188);
  } while ((bVar1 & 0x80) != 0);
  uVar2 = in(0x18a);
  return uVar2;
}


