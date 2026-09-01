/* 1000:a302 */

void __cdecl16near FUN_1000_a302(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0x16;
  do {
    iVar2 = 4;
    do {
      FUN_1000_bf46(iVar2,iVar3,0xe1,
                    CONCAT11((char)((uint)iVar2 >> 8),(char)iVar2 * '\x10' + (char)(iVar3 / 2) + 'E'
                            ));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 9);
    iVar3 = iVar3 + 2;
  } while (iVar3 < 0x36);
  iVar3 = 4;
  do {
    iVar2 = 0x36;
    do {
      cVar1 = (char)(iVar2 / 2) + (char)iVar3 * '\x10';
      FUN_1000_bf46(iVar3,iVar2,0xe1,CONCAT11((char)((uint)(iVar2 / 2) >> 8),cVar1 + -0x7b));
      FUN_1000_bf46(iVar3 + 2,iVar2,0xe1,cVar1 + -0x77);
      FUN_1000_bf46(iVar3 + 3,iVar2,0xe1,cVar1 + -0x6f);
      FUN_1000_bf46(iVar3 + 5,iVar2 + -0x10,0xe1,cVar1 + -0x73);
      iVar2 = iVar2 + 2;
    } while (iVar2 < 0x3e);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  iVar2 = 0;
  iVar3 = 0x12;
  do {
    FUN_1000_bf46(2,iVar3,0x41,CONCAT11((char)((uint)iVar2 >> 8),(char)iVar2 + -0x7a));
    FUN_1000_bf46(3,iVar3,0x41,(char)iVar2 + -0x75);
    iVar2 = iVar2 + 1;
    iVar3 = iVar3 + 2;
  } while (iVar3 < 0x1c);
  return;
}


