/* 1000:c74c */

void __cdecl16near FUN_1000_c74c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int in_CX;
  char in_DH;
  int in_BX;
  int unaff_BP;
  int unaff_SI;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  
  puVar4 = (undefined1 *)0x1111;
  puVar3 = (undefined1 *)(unaff_SI + unaff_BP);
  do {
    for (; in_CX != 0; in_CX = in_CX + -1) {
      puVar2 = puVar4;
      puVar4 = puVar4 + 1;
      puVar1 = puVar3;
      puVar3 = puVar3 + 1;
      *puVar2 = *puVar1;
    }
    puVar4 = puVar4 + 0x50;
    in_DH = in_DH + -1;
    in_CX = in_BX;
  } while (in_DH != '\0');
  return;
}


