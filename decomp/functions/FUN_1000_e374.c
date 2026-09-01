/* 1000:e374 */

undefined2 __cdecl16near FUN_1000_e374(void)

{
  char cVar1;
  undefined2 unaff_DS;
  
  out(0x188,0);
  out(0x18a,0x7b);
  cVar1 = in(0x18a);
  if (cVar1 == '{') {
    out(0x188,0);
    out(0x18a,0xc);
    cVar1 = in(0x18a);
    if (cVar1 == '\f') {
      FUN_1000_e60c();
      *(undefined1 *)0x11ca = 1;
      return 1;
    }
  }
  return 0;
}


