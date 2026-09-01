/* 1000:efc8 */

uint __cdecl16near FUN_1000_efc8(void)

{
  uint uVar1;
  undefined2 unaff_DS;
  long lVar2;
  
  lVar2 = FUN_1000_f0b0(*(undefined2 *)0x1240,*(undefined2 *)0x1242,0x43fd,3);
  uVar1 = (uint)((ulong)(lVar2 + 0x269ec3) >> 0x10);
  *(undefined2 *)0x1240 = (int)(lVar2 + 0x269ec3);
  *(uint *)0x1242 = uVar1;
  return uVar1 & 0x7fff;
}


