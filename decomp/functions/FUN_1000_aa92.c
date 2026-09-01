/* 1000:aa92 */

void __cdecl16near FUN_1000_aa92(void)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  char local_2c [30];
  undefined2 local_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined1 uStack_8;
  undefined2 local_4;
  
  if (*(int *)0x20b0 < *(int *)0x1db6) {
    FUN_1000_cf6a(8);
    FUN_1000_cf44();
    FUN_1000_d046();
    FUN_1000_a46c();
    FUN_1000_cf2c();
  }
  else {
    FUN_1000_a816(0xffff);
    FUN_1000_ee2a(*(undefined2 *)0x1db6,local_2c,10);
    local_e = *(undefined2 *)0xb8b;
    uStack_c = *(undefined2 *)0xb8d;
    uStack_a = *(undefined2 *)0xb8f;
    uStack_8 = *(undefined1 *)0xb91;
    local_4 = 0;
    pcVar5 = local_2c;
    iVar2 = -1;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      pcVar1 = pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != '\0');
    if (iVar2 != -2) {
      uVar4 = 0;
      do {
        pcVar5 = local_2c;
        uVar3 = 0xffff;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar1 = pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 != '\0');
        *(char *)((int)&uStack_a + (uVar4 - (~uVar3 - 1)) + 1) = local_2c[uVar4];
        pcVar5 = local_2c;
        uVar3 = 0xffff;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          pcVar1 = pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (*pcVar1 != '\0');
        uVar4 = uVar4 + 1;
      } while (uVar4 < ~uVar3 - 1);
    }
    FUN_1000_beea(0x14,0x10,0xc1,0xb92);
    FUN_1000_beea(0x14,0x2c,0xe1,&local_e);
    FUN_1000_9ff0(300);
  }
  FUN_1000_af50(8,0x12);
  FUN_1000_8493();
  return;
}


