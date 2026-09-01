/* 1000:baac */

undefined2 __cdecl16near FUN_1000_baac(void)

{
  undefined2 uVar1;
  byte bVar2;
  undefined2 unaff_DS;
  
  uVar1 = uRam00000028;
  if ((*(int *)0xdd6 == 0) && (*(int *)0xdd4 == 0)) {
    LOCK();
    uRam00000028 = 0xbb42;
    UNLOCK();
    DAT_1000_bb40 = unaff_DS;
    *(undefined2 *)0xdd4 = uVar1;
    uVar1 = uRam0000002a;
    LOCK();
    uRam0000002a = 0x1000;
    UNLOCK();
    *(undefined2 *)0xdd6 = uVar1;
    DAT_1000_bb66 = uRam00000062;
    DAT_1000_bb64 = uRam00000060;
    LOCK();
    uRam00000060 = 0xbb68;
    UNLOCK();
    LOCK();
    uRam00000062 = 0x1000;
    UNLOCK();
    bVar2 = in(2);
    out(2,bVar2 & 0xfb);
    out(100,bVar2 & 0xfb);
    return 0;
  }
  return 1;
}


