/* 1000:e2ee */

int __cdecl16near FUN_1000_e2ee(char *param_1,undefined2 param_2)

{
  undefined2 in_AX;
  undefined1 extraout_AH;
  undefined1 uVar1;
  undefined2 unaff_DS;
  int local_4;
  
  local_4 = 0;
  while( true ) {
    uVar1 = (undefined1)((uint)in_AX >> 8);
    if (*param_1 == '\0') break;
    if (*param_1 == '\n') {
      FUN_1000_e32e(CONCAT11(uVar1,0xd),param_2);
      uVar1 = extraout_AH;
    }
    in_AX = FUN_1000_e32e(CONCAT11(uVar1,*param_1),param_2);
    local_4 = local_4 + 1;
    param_1 = param_1 + 1;
  }
  return local_4;
}


