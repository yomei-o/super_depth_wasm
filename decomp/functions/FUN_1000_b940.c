/* 1000:b940 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __cdecl16near FUN_1000_b940(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 unaff_DS;
  bool bVar8;
  
  bVar8 = false;
  if (*(int *)0xd9a != 0) {
    return 0;
  }
  pcVar3 = (code *)swi(0x21);
  uVar4 = (*pcVar3)();
  if (bVar8) {
    uVar4 = 1;
  }
  else {
    *(undefined2 *)0xd9a = uVar4;
    puVar6 = (undefined2 *)0x0;
    puVar7 = (undefined2 *)0x0;
    for (iVar5 = 2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    puVar6 = (undefined2 *)0x0;
    for (iVar5 = 2000; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar2 = puVar7;
      puVar7 = puVar7 + 1;
      puVar1 = puVar6;
      puVar6 = puVar6 + 1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)0xd9c = _DAT_0000_0710;
    *(undefined2 *)0xd9e = _DAT_0000_0711;
    uVar4 = 0;
  }
  return uVar4;
}


