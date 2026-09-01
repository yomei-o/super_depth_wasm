/* 1000:b4ee */

void __cdecl16near FUN_1000_b4ee(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  
  out(0x7c,0x80);
  puVar3 = (undefined2 *)0x0;
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  out(0x7e,0);
  for (iVar2 = 16000; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = puVar3;
    puVar3 = puVar3 + 1;
    *puVar1 = 0;
  }
  out(0x7c,0);
  return;
}


