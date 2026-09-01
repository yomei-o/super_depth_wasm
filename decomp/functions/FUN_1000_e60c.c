/* 1000:e60c */

void __cdecl16near FUN_1000_e60c(void)

{
  byte bVar1;
  undefined1 in_CL;
  undefined1 in_BL;
  
  do {
    bVar1 = in(0x188);
  } while ((bVar1 & 0x80) != 0);
  out(0x188,in_BL);
  do {
    bVar1 = in(0x188);
  } while ((bVar1 & 0x80) != 0);
  out(0x18a,in_CL);
  return;
}


