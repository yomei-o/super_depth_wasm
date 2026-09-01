/* 1000:f5fa */

void __cdecl16near FUN_1000_f5fa(void)

{
  code *pcVar1;
  uint uVar2;
  int unaff_DI;
  undefined2 unaff_ES;
  undefined2 unaff_DS;
  bool bVar3;
  
  bVar3 = false;
  do {
    pcVar1 = (code *)swi(0x21);
    uVar2 = (*pcVar1)();
    if (bVar3) {
      return;
    }
    bVar3 = uVar2 < *(uint *)0x11ea;
  } while (uVar2 <= *(uint *)0x11ea);
  if (*(uint *)0x11e8 < uVar2) {
    *(uint *)0x11e8 = uVar2;
  }
  *(undefined2 *)0x2 = *(undefined2 *)(unaff_DI + 0xc);
  FUN_1000_faf6();
  FUN_1000_fb2a();
  return;
}


