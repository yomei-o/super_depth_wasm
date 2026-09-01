/* 1000:d468 */

undefined4 __cdecl16near FUN_1000_d468(void)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = in(0x42);
  iVar2 = (-(uint)((bVar1 & 0x20) == 0) & 0xe7) + 0x3e6;
  out(0x3fdb,(char)iVar2);
  out(0x3fdb,(char)((uint)iVar2 >> 8));
  out(0x37,7);
  return 0x3fdb0007;
}


