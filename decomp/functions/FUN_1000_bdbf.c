/* 1000:bdbf */

void __cdecl16near FUN_1000_bdbf(void)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  if (*(int *)0xde2 == 0) {
    return;
  }
  out(0x68,0xb);
  iVar2 = 0x80;
  iVar3 = 0x5600;
  do {
    FUN_1000_be0e(iVar3);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = 0x80;
  iVar3 = 0x5700;
  do {
    FUN_1000_be0e(iVar3);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  out(0x68,10);
  pcVar1 = (code *)swi(0x21);
  (*pcVar1)();
  out(0x68,0);
  *(undefined2 *)0xde2 = 0;
  return;
}


