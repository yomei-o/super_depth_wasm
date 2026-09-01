/* 1000:af50 */

void __cdecl16near FUN_1000_af50(byte param_1,uint param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)0x0;
  iVar1 = -0x8000;
  cRam0001af91 = -(param_1 & 1);
                    /* WARNING: Read-only address (ram,0x0001af91) is written */
  cRam0001af99 = -((char)param_1 >> 1 & 1U);
                    /* WARNING: Read-only address (ram,0x0001af99) is written */
  cRam0001afa1 = -((char)param_1 >> 2 & 1U);
                    /* WARNING: Read-only address (ram,0x0001afa1) is written */
  cRam0001afa9 = -((char)param_1 >> 3 & 1U);
                    /* WARNING: Read-only address (ram,0x0001afa9) is written */
  do {
    puVar2 = (undefined1 *)((uint)puVar2 & 0x7fff);
    *puVar2 = 0;
    *puVar2 = 0;
    *puVar2 = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + (param_2 | 1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


