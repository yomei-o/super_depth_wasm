/* 1000:bc6f */

undefined2 __cdecl16near FUN_1000_bc6f(void)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_DS;
  bool bVar7;
  char acStack_22 [4];
  int iStack_1e;
  uint uStack_1c;
  
  bVar7 = false;
  if (*(int *)0xde2 == 0) {
    iVar2 = FUN_1000_bd5d();
    bVar7 = iVar2 == 0;
    if (iVar2 == 1) {
      return 1;
    }
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  if (bVar7) {
    return 0xffff;
  }
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  iVar4 = 0xe;
  iVar2 = 0;
  do {
    iVar6 = iVar2;
    if (*(char *)(iVar6 + 0xde4) != acStack_22[iVar6]) goto LAB_1000_bc5f;
    iVar4 = iVar4 + -1;
    iVar2 = iVar6 + 1;
  } while (iVar4 != 0);
  if (acStack_22[iVar6 + 2] == '\0') {
    uVar3 = (uint)(byte)acStack_22[iVar6 + 1];
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    out(0x68,0xb);
    if (uVar3 < 0x80) {
      iVar2 = 0x5600;
      uVar5 = 0;
      do {
        acStack_22[2] = -0x1b;
        acStack_22[3] = -0x44;
        iStack_1e = iVar2;
        uStack_1c = uVar5;
        FUN_1000_bd2a();
        uVar5 = uStack_1c + 1;
        iVar2 = iStack_1e + 1;
      } while (uVar5 <= uVar3);
    }
    else {
      iStack_1e = 0x5600;
      uStack_1c = 0x80;
      do {
        acStack_22[2] = -5;
        acStack_22[3] = -0x44;
        FUN_1000_bd2a();
        iStack_1e = iStack_1e + 1;
        uStack_1c = uStack_1c + -1;
      } while (uStack_1c != 0);
      iVar2 = 0x5700;
      uVar5 = 0x80;
      do {
        acStack_22[2] = '\v';
        acStack_22[3] = -0x43;
        iStack_1e = iVar2;
        uStack_1c = uVar5;
        FUN_1000_bd2a();
        uVar5 = uStack_1c + 1;
        iVar2 = iStack_1e + 1;
      } while (uVar5 <= uVar3);
    }
    out(0x68,10);
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    out(0x68,1);
    return 0;
  }
LAB_1000_bc5f:
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  return 0xfffe;
}


