/* 1000:ed54 */

void __cdecl16near thunk_FUN_1000_f436(uint param_1)

{
  byte *pbVar1;
  undefined2 unaff_DS;
  
  if (*(uint *)0x11da < param_1) {
    pbVar1 = (byte *)(param_1 - 2);
    *pbVar1 = *pbVar1 | 1;
    if (pbVar1 < (byte *)*(undefined2 *)0x11dc) {
      *(undefined2 *)0x11dc = pbVar1;
    }
  }
  return;
}


