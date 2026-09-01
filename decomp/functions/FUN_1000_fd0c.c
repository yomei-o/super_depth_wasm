/* 1000:fd0c */

int __cdecl16near FUN_1000_fd0c(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined2 unaff_DS;
  
  uVar2 = 0xffff;
  do {
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    pcVar1 = param_1;
    param_1 = param_1 + 1;
  } while (*pcVar1 != '\0');
  return ~uVar2 - 1;
}


