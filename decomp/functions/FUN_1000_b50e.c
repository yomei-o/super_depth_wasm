/* 1000:b50e */

undefined4 __cdecl16near FUN_1000_b50e(uint param_1,int param_2,byte param_3)

{
  undefined2 unaff_DS;
  
  out(0x7c,0xc0);
  out(0x7e,-(param_3 & 1));
  out(0x7e,-(param_3 >> 1 & 1));
  out(0x7e,-(param_3 >> 2 & 1));
  out(0x7e,-(param_3 >> 3 & 1));
  *(undefined1 *)((param_1 >> 3) + param_2 * 0x50) = *(undefined1 *)((param_1 & 7) + 0xbc2);
  out(0x7c,0);
  return 0x7e0000;
}


