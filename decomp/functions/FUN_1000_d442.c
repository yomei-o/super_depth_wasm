/* 1000:d442 */

undefined4 __cdecl16near FUN_1000_d442(byte param_1,undefined2 param_2)

{
  byte bVar1;
  
  out(0x3fdf,(param_1 & 3 | 0x38) << 1);
  out(0x3fdb,(char)param_2);
  bVar1 = (byte)((uint)param_2 >> 8);
  out(0x3fdb,bVar1);
  return CONCAT22(0x3fdb,(uint)bVar1);
}


