/* 1000:c762 */

void __cdecl16near FUN_1000_c762(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)0x0;
  for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  puVar3 = (undefined2 *)0x0;
  for (iVar2 = 0x800; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0x100;
  }
  return;
}


