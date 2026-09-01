/* 1000:d7de */

uint __cdecl16near FUN_1000_d7de(void)

{
  byte bVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  
  uVar2 = FUN_1000_efee(8);
  *(undefined2 *)0x1db8 = (int)uVar2;
  *(undefined2 *)0x1dba = (int)((ulong)uVar2 >> 0x10);
  bVar1 = in(2);
  *(uint *)0x184e = (uint)bVar1;
  FUN_1000_f000(8,0xd81a,0x1000);
  out(0x77,0x36);
  FUN_1000_d884();
  out(2,(char)(*(uint *)0x184e & 0xfffe));
  return *(uint *)0x184e & 0xfffe;
}


