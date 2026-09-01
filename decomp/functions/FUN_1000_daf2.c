/* 1000:daf2 */

undefined4 __cdecl16near FUN_1000_daf2(undefined2 param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 local_6;
  undefined1 uStack_5;
  
  bVar1 = in(0x42);
  if ((bVar1 & 0x20) == 0) {
    uVar2 = 0x8190;
    uVar3 = 0x25;
  }
  else {
    uVar2 = 0x78c8;
    uVar3 = 0x1e;
  }
  uVar2 = FUN_1000_f016(uVar2,uVar3,param_1,0);
  local_6 = (undefined1)uVar2;
  out(0x3fdb,local_6);
  uStack_5 = (undefined1)((uint)uVar2 >> 8);
  out(0x3fdb,uStack_5);
  out(0x37,6);
  return 0x3fdb0006;
}


