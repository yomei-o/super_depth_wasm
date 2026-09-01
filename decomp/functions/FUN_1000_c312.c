/* 1000:c312 */

void __cdecl16near FUN_1000_c312(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_CX;
  char in_DH;
  int in_BX;
  undefined1 *unaff_SI;
  undefined1 *puVar3;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar3 = (undefined1 *)0x1111;
  do {
    for (; in_CX != 0; in_CX = in_CX + -1) {
      puVar2 = puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = unaff_SI;
      unaff_SI = unaff_SI + 1;
      *puVar2 = *puVar1;
    }
    puVar3 = puVar3 + 0x50;
    in_DH = in_DH + -1;
    in_CX = in_BX;
  } while (in_DH != '\0');
  return;
}


