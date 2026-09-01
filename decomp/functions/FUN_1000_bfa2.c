/* 1000:bfa2 */

void __cdecl16near FUN_1000_bfa2(char *param_1)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  undefined2 unaff_DS;
  
  iVar3 = -1;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  param_1[-1] = '$';
  pcVar2 = (code *)swi(0xdc);
  (*pcVar2)();
  param_1[-1] = '\0';
  return;
}


