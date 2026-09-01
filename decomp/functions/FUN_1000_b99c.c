/* 1000:b99c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl16near FUN_1000_b99c(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  
  iVar1 = *(int *)0xd9a;
  if (iVar1 != 0) {
    puVar6 = (undefined2 *)0x0;
    puVar7 = (undefined2 *)0x0;
    for (iVar5 = 2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    puVar7 = (undefined2 *)0x0;
    for (iVar5 = 2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3 = puVar7;
      puVar7 = puVar7 + 1;
      puVar2 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar3 = *puVar2;
    }
    pcVar4 = (code *)swi(0x21);
    (*pcVar4)();
    _DAT_0000_0710 = CONCAT21(*(undefined2 *)0xd9e,(char)*(undefined2 *)0xd9c);
    out(0x62,0x4b);
    out(0x60,0x8f);
  }
  *(undefined2 *)0xd9a = 0;
  return;
}


