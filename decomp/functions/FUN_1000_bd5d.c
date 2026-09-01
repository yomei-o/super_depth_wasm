/* 1000:bd5d */

undefined2 __cdecl16near FUN_1000_bd5d(void)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_DS;
  undefined1 in_CF;
  
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  if ((bool)in_CF) {
    return 1;
  }
  *(undefined2 *)0xde2 = uVar2;
  out(0x68,0xb);
  iVar3 = 0x80;
  do {
    FUN_1000_bd9d();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = 0x80;
  do {
    FUN_1000_bd9d();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  out(0x68,10);
  return 0xffff;
}


