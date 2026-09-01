/* 1000:908c */

void __cdecl16near FUN_1000_908c(void)

{
  byte bVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  FUN_1000_cf6a(9);
  FUN_1000_cf44();
  FUN_1000_d03e();
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_b854(4,0,0x4b,0x13f,0);
  FUN_1000_b854(4,0,0x4b,0x28,5);
  FUN_1000_8292();
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,0x10,0);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,0x10,1);
  out(0xa4,(char)*(undefined2 *)0x1844);
  *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
  FUN_1000_a090();
  FUN_1000_9fbc(0x32);
  iVar2 = 399;
  do {
    FUN_1000_b766(0,iVar2,0x27f,iVar2 + 3,5);
    FUN_1000_b766(0,iVar2 + -0x30,0x27f,iVar2 + -0x2d,0xd);
    FUN_1000_b766(0xf0,iVar2 + -0x2e,399,iVar2 + -0x2b,8);
    FUN_1000_b030(0xf0,iVar2 + -1,399,iVar2 + -1,0xd);
    FUN_1000_b490(iVar2);
    do {
      bVar1 = in(0x60);
    } while ((bVar1 & 0x20) != 0);
    do {
      bVar1 = in(0x60);
    } while ((bVar1 & 0x20) == 0);
    iVar2 = iVar2 + -4;
  } while (0x7f < iVar2);
  out(0xa6,(char)*(undefined2 *)0x1844);
  FUN_1000_b4ee();
  FUN_1000_b854(4,0,0x4b,0x138,5);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,0x120,2);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,0x120,3);
  FUN_1000_8292();
  do {
    bVar1 = in(0x60);
  } while ((bVar1 & 0x20) != 0);
  do {
    bVar1 = in(0x60);
  } while ((bVar1 & 0x20) == 0);
  FUN_1000_b490(0);
  out(0xa4,(char)*(undefined2 *)0x1844);
  FUN_1000_cf08();
  FUN_1000_a23c();
  return;
}


