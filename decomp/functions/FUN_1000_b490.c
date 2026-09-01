/* 1000:b490 */

undefined2 __cdecl16near FUN_1000_b490(uint param_1)

{
  char cVar1;
  undefined2 unaff_DS;
  
  out(0xa2,0x70);
  out(0xa0,(char)(param_1 * 0x28));
  out(0xa0,(char)(param_1 * 0x28 >> 8));
  out(0xa0,(char)param_1 * -0x10);
  out(0xa0,(char)(400 - param_1 >> 4) + *(char *)0xbb6);
  out(0xa0,0);
  out(0xa0,0);
  out(0xa0,(char)param_1 << 4);
  cVar1 = (char)(param_1 >> 4) + *(char *)0xbb6;
  out(0xa0,cVar1);
  return CONCAT11((byte)(param_1 >> 0xc),cVar1);
}


