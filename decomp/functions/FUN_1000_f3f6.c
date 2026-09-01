/* 1000:f3f6 */

void __cdecl16near FUN_1000_f3f6(void)

{
  byte bVar1;
  char cVar2;
  uint in_AX;
  undefined2 unaff_DS;
  
  bVar1 = (byte)in_AX;
  *(byte *)0x1213 = bVar1;
  cVar2 = (char)(in_AX >> 8);
  if (cVar2 != '\0') goto LAB_1000_f41a;
  if (*(byte *)0x1210 < 3) {
LAB_1000_f410:
    if (0x13 < bVar1) {
LAB_1000_f414:
      in_AX = 0x13;
    }
  }
  else {
    if (0x21 < bVar1) goto LAB_1000_f414;
    if (bVar1 < 0x20) goto LAB_1000_f410;
    in_AX = 5;
  }
  cVar2 = *(char *)(ulong)((in_AX & 0xff) + 0x124c);
LAB_1000_f41a:
  *(int *)0x1208 = (int)cVar2;
  return;
}


