/* 1000:8a12 */

void FUN_1000_8a12(void)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  uVar2 = FUN_1000_ef1a(0);
  FUN_1000_efb6(uVar2);
  FUN_1000_afb4();
  FUN_1000_bb72();
  FUN_1000_b940();
  FUN_1000_bfa2(0x860);
  FUN_1000_afd2();
  FUN_1000_baac();
  FUN_1000_ba14();
  bVar1 = in(0x31);
  if ((bVar1 & 0x80) == 0) {
    *(undefined1 *)0xbb6 = 0x40;
  }
  if (*(int *)0x1848 != 0) {
    *(undefined1 *)0xbb6 = 0;
  }
  out(0xa6,1);
  FUN_1000_b4ee();
  FUN_1000_8493();
  FUN_1000_e374(0);
  iVar3 = FUN_1000_cd9e(0x1800);
  if (iVar3 != 0) {
    FUN_1000_ee72(0x866);
    FUN_1000_e802(1);
  }
  FUN_1000_bfa2(0x87e);
  FUN_1000_c762();
  return;
}


