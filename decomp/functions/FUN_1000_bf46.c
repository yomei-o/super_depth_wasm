/* 1000:bf46 */

void __cdecl16near FUN_1000_bf46(int param_1,int param_2,undefined2 param_3,byte param_4)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)((param_1 * 0x50 + param_2) * 2);
  if (param_4 < 0x80) {
    uVar1 = CONCAT11(param_4,0x56);
    *puVar2 = uVar1;
  }
  else {
    uVar1 = CONCAT11(param_4 + 0x80,0x57);
    *puVar2 = uVar1;
  }
  puVar2[1] = CONCAT11((char)((uint)uVar1 >> 8) + -0x80,(char)uVar1);
  puVar2[0x1000] = param_3;
  puVar2[0x1001] = param_3;
  return;
}


