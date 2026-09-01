/* 1000:ef6c */

char * __cdecl16near FUN_1000_ef6c(char *param_1,char param_2)

{
  char *pcVar1;
  int iVar2;
  undefined2 unaff_DS;
  
  iVar2 = -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  iVar2 = -(iVar2 + 1);
  param_1 = param_1 + -1;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar1 = param_1;
    param_1 = param_1 + -1;
  } while (param_2 != *pcVar1);
  param_1 = param_1 + 1;
  if (*param_1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}


