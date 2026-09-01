/* 1000:bd9d */

void __cdecl16near FUN_1000_bd9d(void)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  char cVar5;
  undefined2 in_DX;
  undefined2 *unaff_DI;
  undefined2 unaff_ES;
  
  out(0xa1,(char)in_DX);
  out(0xa3,(char)((uint)in_DX >> 8));
  cVar5 = '\0';
  iVar4 = 0x10;
  do {
    out(0xa5,cVar5 + ' ');
    uVar2 = in(0xa9);
    out(0xa5,cVar5);
    uVar3 = in(0xa9);
    puVar1 = unaff_DI;
    unaff_DI = unaff_DI + 1;
    *puVar1 = CONCAT11(uVar2,uVar3);
    cVar5 = cVar5 + '\x01';
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}


