/* 1000:b2c8 */

uint __cdecl16near FUN_1000_b2c8(void)

{
  uint uVar1;
  uint in_CX;
  uint uVar2;
  uint uVar3;
  int unaff_BP;
  uint unaff_SI;
  uint uVar4;
  int unaff_DI;
  uint *puVar5;
  
  uVar1 = unaff_SI;
  if ((int)in_CX < (int)unaff_SI) {
    uVar1 = in_CX;
    in_CX = unaff_SI;
  }
  if ((0x27f < (int)uVar1) || ((int)in_CX < 0)) {
    return uVar1;
  }
  if ((unaff_DI < 400) && (-1 < unaff_DI)) {
    if ((int)uVar1 < 0) {
      uVar1 = 0;
    }
    if (0x27f < (int)in_CX) {
      in_CX = 0x27f;
    }
    uVar4 = ~*(uint *)((byte)(((byte)in_CX & 0xf) << 1) + 0xb452);
    uVar3 = *(uint *)((byte)(((byte)uVar1 & 0xf) << 1) + 0xb450);
    uVar2 = (in_CX >> 4) * 2 + (uVar1 >> 4) * -2;
    puVar5 = (uint *)((uVar1 >> 4) * 2 + unaff_BP * 0x50);
    FUN_1000_b472();
    if (uVar2 == 0) {
      *puVar5 = uVar3 & uVar4;
      out(0x7c,0);
      return uVar3 & uVar4 & 0xff00;
    }
    *puVar5 = uVar3;
    uVar2 = uVar2 >> 1;
    while( true ) {
      puVar5 = puVar5 + 1;
      uVar2 = uVar2 - 1;
      if (uVar2 == 0) break;
      *puVar5 = 0xffff;
    }
    *puVar5 = uVar4;
    uVar1 = uVar4 & 0xff00;
    out(0x7c,0);
  }
  return uVar1;
}


