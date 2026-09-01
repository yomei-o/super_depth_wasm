/* 1000:cff4 */

undefined2 __cdecl16near FUN_1000_cff4(int param_1)

{
  undefined2 uVar1;
  undefined2 unaff_DS;
  
  if ((0 < param_1) && (param_1 <= *(int *)0x18ac)) {
    if (*(int *)0x18b4 == 1) {
      FUN_1000_d468();
      *(int *)0x18ae = param_1;
      param_1 = param_1 * 8;
      uVar1 = *(undefined2 *)(param_1 + 0x18ba);
      *(undefined2 *)(param_1 + 0x18b4) = *(undefined2 *)(param_1 + 0x18b8);
      *(undefined2 *)(param_1 + 0x18b6) = uVar1;
      *(undefined2 *)0x18aa = 1;
    }
    return 0;
  }
  return 5;
}


