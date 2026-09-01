/* 1000:b030 */

int __cdecl16near FUN_1000_b030(uint param_1,uint param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte extraout_AL;
  byte extraout_AL_00;
  byte bVar4;
  byte extraout_AL_01;
  byte extraout_AL_02;
  int in_AX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 uVar8;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
  bool bVar16;
  byte bVar17;
  
  if (param_2 == param_4) {
    iVar5 = FUN_1000_b2c8();
    return iVar5;
  }
  bVar4 = 0;
  if ((int)param_1 < 0) {
    bVar4 = 1;
  }
  else if (0x27f < (int)param_1) {
    bVar4 = 2;
  }
  if ((int)param_2 < 0) {
    bVar4 = bVar4 | 8;
  }
  else if (399 < (int)param_2) {
    bVar4 = bVar4 | 4;
  }
  uVar10 = (uint)bVar4 << 8;
  if ((int)param_3 < 0) {
    uVar10 = CONCAT11(bVar4,1);
  }
  else if (0x27f < (int)param_3) {
    uVar10 = CONCAT11(bVar4,2);
  }
  if ((int)param_4 < 0) {
    uVar10 = uVar10 | 8;
  }
  else if (399 < (int)param_4) {
    uVar10 = uVar10 | 4;
  }
  bVar4 = (byte)(uVar10 >> 8);
  if (((byte)uVar10 & bVar4) == 0) {
    uVar14 = param_4;
    if (uVar10 == 0) {
LAB_1000_b0f2:
      FUN_1000_b472();
      uVar10 = param_1 - param_3;
      uVar7 = param_2;
      if (param_1 < param_3 || uVar10 == 0) {
        uVar10 = -uVar10;
        uVar7 = uVar14;
        param_3 = param_1;
        uVar14 = param_2;
      }
      uVar9 = uVar7 - uVar14;
      uVar6 = uVar9;
      if (uVar7 < uVar14 || uVar9 == 0) {
        uVar6 = -uVar9;
      }
      pbVar15 = (byte *)(uVar14 * 0x50);
      uVar14 = 0x8000;
      if (uVar10 < uVar6) {
        uVar10 = (uint)(((ulong)uVar10 << 0x10) / (ulong)uVar6);
        if ((uVar9 & 0x8000) == 0) {
          FUN_1000_b216();
          iVar11 = 0x4f;
          iVar5 = uVar9 + 1;
          bVar4 = extraout_AL_02;
          uVar8 = extraout_AH_02;
        }
        else {
          FUN_1000_b216();
          iVar11 = -0x51;
          iVar5 = 1 - uVar9;
          bVar4 = extraout_AL_01;
          uVar8 = extraout_AH_01;
        }
        do {
          while( true ) {
            *pbVar15 = bVar4;
            bVar16 = CARRY2(uVar14,uVar10);
            uVar14 = uVar14 + uVar10;
            if (!bVar16) break;
            bVar17 = bVar4 & 1;
            bVar4 = bVar4 >> 1 | bVar4 << 7;
            pbVar15 = pbVar15 + (uint)bVar17 + iVar11 + 1;
            iVar5 = iVar5 + -1;
            if (iVar5 == 0) {
              out(0x7c,uVar8);
              return CONCAT11(uVar8,uVar8);
            }
          }
          pbVar15 = pbVar15 + iVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      else {
        if (uVar6 != uVar10) {
          uVar7 = (uint)(((ulong)uVar6 << 0x10) / (ulong)uVar10);
          if ((int)uVar9 < 0) {
            uVar6 = FUN_1000_b22e();
            iVar5 = -0x52;
          }
          else {
            uVar6 = FUN_1000_b22e();
            iVar5 = 0x4e;
          }
          do {
            bVar16 = CARRY2(uVar14,uVar7);
            uVar14 = uVar14 + uVar7;
            if (bVar16) {
              *(uint *)pbVar15 = CONCAT11((char)uVar6,(char)(uVar6 >> 8));
              uVar6 = 0;
              pbVar15 = pbVar15 + iVar5 + 2;
              bVar16 = (param_3 & 1) != 0;
              param_3 = param_3 >> 1 | (uint)bVar16 << 0xf;
              uVar9 = param_3;
              if (bVar16) goto LAB_1000_b178;
            }
            else {
              bVar16 = (param_3 & 1) != 0;
              param_3 = param_3 >> 1 | (uint)bVar16 << 0xf;
              if (bVar16) {
LAB_1000_b178:
                pbVar1 = pbVar15;
                pbVar15 = pbVar15 + 2;
                *(uint *)pbVar1 = CONCAT11((char)uVar6,(char)(uVar6 >> 8));
                uVar9 = param_3;
              }
              else {
                uVar9 = uVar6 | param_3;
              }
            }
            uVar6 = uVar9;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              *(uint *)pbVar15 = CONCAT11((char)uVar6,(char)(uVar6 >> 8));
              out(0x7c,0);
              return uVar6 << 8;
            }
          } while( true );
        }
        if ((uVar9 & 0x8000) == 0) {
          FUN_1000_b216();
          iVar5 = uVar9 + 1;
          iVar11 = 0x4f;
          bVar4 = extraout_AL_00;
          uVar8 = extraout_AH_00;
        }
        else {
          FUN_1000_b216();
          iVar11 = -0x51;
          iVar5 = 1 - uVar9;
          bVar4 = extraout_AL;
          uVar8 = extraout_AH;
        }
        do {
          *pbVar15 = bVar4;
          bVar17 = bVar4 & 1;
          bVar4 = bVar4 >> 1 | bVar4 << 7;
          pbVar15 = pbVar15 + (uint)bVar17 + iVar11 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      out(0x7c,uVar8);
      return CONCAT11(uVar8,uVar8);
    }
    uVar7 = param_3;
    if (bVar4 != 0) {
      in_AX = FUN_1000_b24c();
      if ((byte)((byte)uVar10 & (byte)(uVar10 >> 8)) != 0) {
        return in_AX;
      }
      uVar7 = param_3;
      if (uVar10 == 0) goto LAB_1000_b0f2;
    }
    uVar6 = uVar7;
    uVar9 = param_4;
    uVar13 = param_1;
    if ((char)uVar10 != '\0') {
      uVar10 = CONCAT11((char)uVar10,(char)(uVar10 >> 8));
      in_AX = FUN_1000_b24c();
      if ((byte)((byte)uVar10 & (byte)(uVar10 >> 8)) != 0) {
        return in_AX;
      }
      param_3 = param_1;
      uVar6 = param_1;
      uVar14 = param_2;
      uVar9 = param_2;
      param_1 = uVar7;
      uVar13 = uVar7;
      param_2 = param_4;
      if (uVar10 == 0) goto LAB_1000_b0f2;
    }
    uVar14 = param_2;
    param_3 = uVar13;
    cVar12 = (char)(uVar10 >> 8);
    uVar7 = uVar6;
    uVar13 = uVar9;
    uVar2 = param_3;
    uVar3 = uVar14;
    if (cVar12 != '\0') {
      uVar10 = CONCAT11((char)uVar10,cVar12);
      in_AX = FUN_1000_b24c();
      if ((byte)((byte)uVar10 & (byte)(uVar10 >> 8)) != 0) {
        return in_AX;
      }
      uVar7 = param_3;
      uVar13 = uVar14;
      param_1 = uVar6;
      uVar2 = uVar6;
      param_2 = uVar9;
      uVar3 = uVar9;
      if (uVar10 == 0) goto LAB_1000_b0f2;
    }
    uVar14 = uVar3;
    param_3 = uVar2;
    if ((char)uVar10 != '\0') {
      iVar5 = CONCAT11((char)uVar10,(char)(uVar10 >> 8));
      in_AX = FUN_1000_b24c();
      if (((byte)((byte)iVar5 & (byte)((uint)iVar5 >> 8)) == 0) &&
         (param_1 = uVar7, param_2 = uVar13, iVar5 == 0)) goto LAB_1000_b0f2;
    }
  }
  return in_AX;
}


