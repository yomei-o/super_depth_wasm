/* 1000:ef98 */

char * __cdecl16near FUN_1000_ef98(char *param_1)

{
  char cVar1;
  int in_AX;
  byte bVar2;
  char *pcVar3;
  undefined2 unaff_DS;
  
  pcVar3 = param_1;
  while( true ) {
    cVar1 = *pcVar3;
    bVar2 = (byte)((uint)in_AX >> 8);
    if (cVar1 == '\0') break;
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      *pcVar3 = cVar1 + -0x20;
    }
    in_AX = (uint)bVar2 << 8;
    pcVar3 = pcVar3 + 1;
  }
  return (char *)CONCAT22(CONCAT11(bVar2,cVar1),param_1);
}


