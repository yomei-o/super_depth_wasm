/* 1000:ee72 */

undefined2 __cdecl16near FUN_1000_ee72(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  do {
    pcVar1 = param_1;
    param_1 = param_1 + 1;
    if (*pcVar1 == '\0') {
      return 0;
    }
    iVar2 = FUN_1000_ee94(*pcVar1);
  } while (iVar2 != -1);
  return 0xffff;
}


