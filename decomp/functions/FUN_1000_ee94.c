/* 1000:ee94 */

ulong __cdecl16near FUN_1000_ee94(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined2 unaff_DS;
  
  if (*(int *)0x140e == -0x292a) {
    (*(code *)*(undefined2 *)0x1410)();
  }
  pcVar1 = (code *)swi(0x21);
  uVar2 = (*pcVar1)();
  return uVar2 & 0xffff00ff;
}


