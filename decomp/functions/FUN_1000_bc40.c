/* 1000:bc40 */

void __cdecl16near FUN_1000_bc40(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  undefined2 in_AX;
  int iVar4;
  undefined2 in_BX;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar5 = (undefined2 *)0x0;
  puVar6 = (undefined2 *)0x0;
  for (iVar4 = 16000; iVar4 != 0; iVar4 = iVar4 + -1) {
    puVar2 = puVar6;
    puVar6 = puVar6 + 1;
    puVar1 = puVar5;
    puVar5 = puVar5 + 1;
    *puVar2 = *puVar1;
  }
  pcVar3 = (code *)swi(0x21);
  (*pcVar3)();
  return;
}


