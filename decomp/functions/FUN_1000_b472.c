/* 1000:b472 */

undefined4 __cdecl16near FUN_1000_b472(void)

{
  char cVar1;
  byte in_AH;
  
  out(0x7c,0xc0);
  out(0x7e,-(in_AH & 1));
  out(0x7e,-(in_AH >> 1 & 1));
  out(0x7e,-(in_AH >> 2 & 1));
  cVar1 = -(in_AH >> 3 & 1);
  out(0x7e,cVar1);
  return CONCAT22(0x7e,CONCAT11(in_AH >> 4,cVar1));
}


