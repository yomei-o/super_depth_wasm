/* 1000:db32 */

void __cdecl16near FUN_1000_db32(int param_1)

{
  byte bVar1;
  undefined2 unaff_DS;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 local_6;
  
  if (*(int *)(param_1 + 0x12) != 1) {
    if (*(int *)(param_1 + 10) == 1) {
      local_6 = *(int *)(*(char *)(param_1 + 8) * 2 + 0xeee) << 1;
    }
    else {
      local_6 = *(uint *)(*(char *)(param_1 + 8) * 2 + 0xeee) /
                *(uint *)(*(int *)(param_1 + 10) * 2 + 0xf9e);
    }
    bVar1 = in(0x42);
    if ((bVar1 & 0x20) != 0) {
      uVar4 = 0;
      uVar3 = 0x4cd;
      uVar2 = FUN_1000_f0b0(local_6,0,0x3e6,0);
      local_6 = FUN_1000_f0e2(uVar2,uVar3,uVar4);
    }
    out(0x3fdb,(undefined1)local_6);
    out(0x3fdb,local_6._1_1_);
    out(0x37,6);
  }
  return;
}


