/* 1000:f588 */

void __cdecl16near FUN_1000_f588(int param_1)

{
  code *pcVar1;
  uint in_AX;
  uint uVar2;
  int extraout_DX;
  int in_BX;
  int unaff_DS;
  bool bVar3;
  
  if ((((*(byte *)(in_BX + 2) & 4) == 0) || (in_AX - 1 < *(int *)(in_BX + 4) - 1U)) ||
     (*(uint *)(in_BX + -2) < in_AX - 1)) {
    uVar2 = in_AX >> 4;
    if (uVar2 == 0) {
      uVar2 = 0x1000;
    }
    bVar3 = false;
    if ((*(byte *)(in_BX + 2) & 4) != 0) {
      bVar3 = uVar2 + unaff_DS < *(uint *)0x120e;
    }
    pcVar1 = (code *)swi(0x21);
    (*pcVar1)();
    if ((!bVar3) && ((*(byte *)(param_1 + 2) & 4) != 0)) {
      *(int *)(param_1 + -2) = extraout_DX + -1;
    }
  }
  return;
}


