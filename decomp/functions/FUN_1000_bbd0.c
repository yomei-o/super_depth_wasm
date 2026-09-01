/* 1000:bbd0 */

void __cdecl16near FUN_1000_bbd0(undefined2 param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 in_CF;
  
  pcVar3 = (code *)swi(0x21);
  uVar4 = (*pcVar3)();
  if ((bool)in_CF) {
    return;
  }
  puVar6 = (undefined2 *)0x0;
  puVar7 = (undefined2 *)0x0;
  for (iVar5 = 16000; iVar5 != 0; iVar5 = iVar5 + -1) {
    puVar2 = puVar7;
    puVar7 = puVar7 + 1;
    puVar1 = puVar6;
    puVar6 = puVar6 + 1;
    *puVar2 = *puVar1;
  }
  return;
}


