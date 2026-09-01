/* 1000:5818 */

/* WARNING: Removing unreachable block (ram,0x00017e1e) */

void FUN_1000_5818(void)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_SS;
  undefined2 unaff_DS;
  bool bVar7;
  int local_480 [100];
  int local_3b8;
  int local_3b6;
  int aiStack_3b4 [16];
  int local_394;
  int aiStack_392 [16];
  int local_372;
  int local_370;
  int aiStack_36e [16];
  int local_34e;
  int local_34c;
  int local_34a;
  undefined2 local_348;
  int aiStack_346 [16];
  int local_326 [100];
  int local_25e;
  int aiStack_25c [16];
  int aiStack_23c [4];
  int local_234;
  int aiStack_232 [16];
  int local_212;
  int local_210;
  int aiStack_20e [16];
  int local_1ee;
  int local_1ec;
  undefined2 local_1ea;
  undefined2 local_1e8;
  int local_1e6;
  uint auStack_1e4 [16];
  int local_1c4 [100];
  uint auStack_fc [16];
  int local_dc [4];
  int local_d4;
  int local_d2 [100];
  int local_a [4];
  
  local_34c = 0;
  do {
    iVar3 = FUN_1000_efc8();
    iVar4 = local_34c;
    local_dc[local_34c + 5] = iVar3 % 0x280;
    iVar3 = FUN_1000_efc8();
    local_1c4[iVar4] = iVar3 % 0x160;
    iVar3 = FUN_1000_efc8();
    local_326[iVar4] = iVar3 % 4 + 0xc;
    iVar3 = FUN_1000_efc8();
    local_480[iVar4] = iVar3 % 3 + 1;
    local_34c = local_34c + 1;
  } while (local_34c < 100);
  if (*(int *)0x1818 != *(int *)0x1dae) {
    FUN_1000_9568();
  }
  FUN_1000_ba8c(0,0,0,0);
  FUN_1000_8098();
  local_1ec = *(int *)0x1dac + *(int *)0x1d46 + *(int *)0x1d42;
  uVar5 = (int)*(uint *)0x1818 >> 0xf;
  local_3b6 = ((int)((*(uint *)0x1818 ^ uVar5) - uVar5) >> 2 ^ uVar5) - uVar5;
  if (local_3b6 == 1) {
    local_25e = 100;
    *(undefined2 *)0x1f94 = 800;
    *(undefined2 *)0x1f90 = 800;
    *(undefined2 *)0x1f8c = 800;
    *(undefined2 *)0x1f96 = 0x360;
    *(undefined2 *)0x1f92 = 0x360;
    *(undefined2 *)0x1f8e = 0x360;
    local_348 = 0;
    local_234 = 0;
    local_210 = 0;
    *(undefined2 *)0x1fce = 0;
    *(undefined2 *)0x1fcc = 0;
    *(undefined2 *)0x1fd2 = 0x20;
    *(undefined2 *)0x1fd0 = 0x20;
    *(undefined2 *)0x1fd6 = 0x40;
    *(undefined2 *)0x1fd4 = 0x40;
    *(undefined2 *)0x1d6c = 0xffec;
    *(undefined2 *)0x1d8c = 0x14;
    *(int *)0x17f8 = local_1ec;
    *(int *)0x17fa = local_1ec + 2;
    *(int *)0x17fc = local_1ec + 8;
    *(int *)0x17fe = local_1ec + 10;
    *(int *)0x1800 = local_1ec + 0x10;
    *(int *)0x1802 = local_1ec + 0x12;
  }
  else if (local_3b6 == 2) {
    local_348 = 0;
    local_25e = 0;
    local_234 = 0;
    local_210 = 0;
    local_34c = 1;
    do {
      *(undefined2 *)(local_34c * 2 + 0x1f8a) = 0xff38;
      *(undefined2 *)(local_34c * 2 + 0x1fca) = 0xffea;
      local_34c = local_34c + 1;
    } while (local_34c < 0x10);
    *(undefined2 *)0x1824 = 200;
    *(int *)0x17f8 = local_1ec + 0xc;
    *(int *)0x17fa = local_1ec + 0x14;
    *(undefined2 *)0x1fce = 10;
    iVar4 = local_1ec + 5;
    *(int *)0x180c = iVar4;
    *(int *)0x180a = iVar4;
    *(int *)0x1808 = iVar4;
    *(int *)0x17fc = iVar4;
    iVar4 = local_1ec + 4;
    *(int *)0x1806 = iVar4;
    *(int *)0x1804 = iVar4;
    *(int *)0x1802 = iVar4;
    *(int *)0x1800 = iVar4;
    *(int *)0x17fe = iVar4;
    iVar4 = local_1ec + 6;
    *(int *)0x1812 = iVar4;
    *(int *)0x1810 = iVar4;
    *(int *)0x180e = iVar4;
  }
  else if (local_3b6 == 3) {
    *(undefined2 *)0x1f8e = 0xfef4;
    *(undefined2 *)0x1f8c = 0xfef4;
    *(undefined2 *)0x1fd6 = 0x84;
    *(undefined2 *)0x1fd0 = 0x84;
    *(undefined2 *)0x1fcc = 0x84;
    *(int *)0x17f8 = local_1ec + 0x21;
    *(undefined2 *)0x1d6c = 0x10;
    local_348 = 0;
    local_234 = 0;
    local_210 = 0;
    *(undefined2 *)0x1824 = 0;
    *(undefined2 *)0x1d4c = 0;
    *(undefined2 *)0x1d8c = 0;
    *(undefined2 *)0x1fd8 = 0xa4;
    *(undefined2 *)0x1fd2 = 0xa4;
    *(undefined2 *)0x1fce = 0xa4;
    *(int *)0x17fa = local_1ec + 0x29;
    *(undefined2 *)0x1f92 = 0xfed4;
    *(undefined2 *)0x1f90 = 0xfed4;
    local_25e = 100;
    *(undefined2 *)0x1fd4 = 100;
    *(int *)0x17fc = local_1ec + 0x18;
    *(undefined2 *)0x1fda = 0xc4;
    *(int *)0x17fe = local_1ec + 0x30;
    *(undefined2 *)0x1f9a = 0xff14;
    *(undefined2 *)0x1f98 = 0xff14;
    *(undefined2 *)0x1f96 = 0xff14;
    *(undefined2 *)0x1f94 = 0xff14;
    *(int *)0x1800 = local_1ec + 0x1a;
    *(int *)0x1802 = local_1ec + 0x22;
    *(int *)0x1804 = local_1ec + 0x2a;
    *(int *)0x1806 = local_1ec + 0x32;
  }
  for (local_34c = 0; iVar4 = local_34c, local_34c < 0x10; local_34c = local_34c + 1) {
    aiStack_232[local_34c] = -0x20;
    aiStack_36e[local_34c] = 0x10;
    aiStack_25c[iVar4] = 0;
  }
  local_34c = 0;
  do {
    local_dc[local_34c] = 0x160;
    aiStack_23c[local_34c] = 0;
    local_34c = local_34c + 1;
  } while (local_34c < 4);
  local_34c = 0;
  do {
    iVar4 = local_34c;
    aiStack_3b4[local_34c] = 0x160;
    aiStack_346[iVar4] = 0;
    auStack_fc[iVar4] = 0;
    auStack_1e4[iVar4] = 0;
    local_34c = local_34c + 1;
  } while (local_34c < 0x10);
  local_212 = 1;
  *(undefined2 *)0x1f8a = 0x120;
  *(undefined2 *)0x1db4 = 0;
  *(undefined2 *)0x1db2 = 0;
  *(undefined2 *)0x1d40 = 0;
  *(undefined2 *)0x193e = 0;
  *(undefined2 *)0x1dc0 = 0;
  local_1e8 = 0;
  local_1ea = 0;
  local_1ee = 0;
  *(undefined2 *)0x193c = 0;
  *(undefined2 *)0x184a = 0;
  *(undefined2 *)0x1846 = 0;
  *(undefined2 *)0x1d8a = 0;
  *(undefined2 *)0x1d6a = 0;
  local_3b8 = 0;
  local_34a = 0;
  local_d4 = 0;
  local_1e6 = (*(int *)0x1818 / 3 + 2) * 5;
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_8292();
  local_34c = 0;
  do {
    FUN_1000_b50e(local_dc[local_34c + 5],local_1c4[local_34c],local_326[local_34c]);
    local_34c = local_34c + 1;
  } while (local_34c < 100);
  do {
    bVar2 = in(0x60);
  } while ((bVar2 & 0x20) != 0);
  do {
    bVar2 = in(0x60);
  } while ((bVar2 & 0x20) == 0);
  out(0xa6,(byte)*(undefined2 *)0x1844);
  out(0xa4,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_b4ee();
  FUN_1000_8292();
  local_34c = 0;
  do {
    FUN_1000_b50e(local_dc[local_34c + 5],local_1c4[local_34c],local_326[local_34c]);
    local_34c = local_34c + 1;
  } while (local_34c < 100);
  FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0x28);
  FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,0x29);
  out(0xa4,(byte)*(undefined2 *)0x1844);
  out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
  FUN_1000_cf6a(6);
  FUN_1000_cf44();
  FUN_1000_d046();
  if (*(int *)0x1818 == *(int *)0x1dae) {
    *(undefined2 *)0x1d48 = 4;
    *(undefined2 *)0x181e = 0;
    *(undefined2 *)0x20c6 = 0;
    FUN_1000_a2ca();
    *(undefined2 *)0x1faa = 10;
    *(undefined1 *)0x2ba = 0;
    FUN_1000_82d7(0x2b8);
    *(undefined1 *)0x2ba = 7;
    FUN_1000_a072();
  }
  else {
    FUN_1000_a196();
  }
  if (*(int *)0x1d4a < 6) {
    *(undefined2 *)0x1d4a = 6;
  }
  if (*(int *)0x181a == 1) {
    local_210 = 0x13;
  }
  *(undefined2 *)0xdd0 = 0;
  do {
    FUN_1000_8184();
    local_372 = FUN_1000_e3c8(0x2130);
    if (((local_372 != 0) || (*(int *)0x213e != 0)) && (FUN_1000_9e70(), *(int *)0x184c == 0))
    goto LAB_1000_804a;
    *(undefined2 *)0x1d8a = 0;
    *(undefined2 *)0x1d6a = 0;
    if (*(int *)0x1faa < 10) {
      iVar4 = *(int *)0x1faa;
      *(int *)0x1faa = *(int *)0x1faa + -1;
      if (iVar4 < 1) {
        local_1ee = 1;
        *(int *)0x1842 = *(int *)0x1842 + -1;
LAB_1000_804a:
        FUN_1000_cf2c();
        FUN_1000_a23c();
        if ((local_1ee != 1) && (*(int *)0x1842 != 0)) {
          FUN_1000_95a4(local_dc + 5,local_1c4,local_480,local_326);
        }
        if ((local_1ee == 1) && (*(int *)0x1842 == 0)) {
          FUN_1000_a29e();
        }
        out(0xa6,(char)*(undefined2 *)0x1844);
        FUN_1000_84ae();
        return;
      }
    }
    else {
      if ((*(int *)0x2132 != 0) && (*(int *)0x1d4a + *(int *)0x1fca < 0x140)) {
        *(undefined2 *)0x1d8a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2130 != 0) && (-1 < *(int *)0x1fca - *(int *)0x1d4a)) {
        *(int *)0x1d8a = -*(int *)0x1d4a;
      }
      if ((*(int *)0x2136 != 0) && (*(int *)0x1d4a + *(int *)0x1f8a < 0x210)) {
        *(undefined2 *)0x1d6a = *(undefined2 *)0x1d4a;
      }
      if ((*(int *)0x2134 != 0) && (0x2f < *(int *)0x1f8a - *(int *)0x1d4a)) {
        *(int *)0x1d6a = -*(int *)0x1d4a;
      }
      if ((((*(int *)0x2138 != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x213a != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar4 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_d4 != iVar4 && local_d4 <= -iVar4 &&
          (local_212 != 0)))) {
        for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
          if (aiStack_232[local_34c] < -0xf) {
            local_34e = local_34c;
            break;
          }
        }
        iVar4 = local_34e;
        aiStack_232[local_34e] = *(int *)0x1fca + 0xc;
        aiStack_20e[local_34e] = *(int *)0x1f8a + 5;
        aiStack_36e[local_34e] = (-2 - *(int *)0x181e) * 6;
        local_d4 = local_d4 + 1;
        aiStack_25c[iVar4] = 0;
        local_212 = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
            if (aiStack_232[local_34c] < -0xf) {
              local_34e = local_34c;
              break;
            }
          }
          aiStack_232[local_34e] = *(int *)0x1fca + 0xc;
          aiStack_20e[local_34e] = *(int *)0x1f8a + 5;
          aiStack_36e[local_34e] = (-2 - *(int *)0x181e) * 6;
          aiStack_25c[local_34c] = -1;
          for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
            if (aiStack_232[local_34c] < -0xf) {
              local_34e = local_34c;
              break;
            }
          }
          aiStack_232[local_34e] = *(int *)0x1fca + 0xc;
          aiStack_20e[local_34e] = *(int *)0x1f8a + 5;
          aiStack_36e[local_34e] = (-2 - *(int *)0x181e) * 6;
          aiStack_25c[local_34c] = 1;
          local_d4 = local_d4 + 2;
        }
        FUN_1000_cff4(5);
      }
      if ((((*(int *)0x213a != 0) && (*(int *)0x212c == 0)) ||
          ((*(int *)0x2138 != 0 && (*(int *)0x212c != 0)))) &&
         ((iVar4 = *(int *)0x20c6 * 2 - *(int *)0x1d48, -local_d4 != iVar4 && local_d4 <= -iVar4 &&
          (local_212 != 0)))) {
        for (local_34c = 0; iVar4 = local_34e, local_34c < *(int *)0x1d48; local_34c = local_34c + 1
            ) {
          if (aiStack_232[local_34c] < -0xf) {
            local_34e = local_34c;
          }
        }
        aiStack_232[local_34e] = *(int *)0x1fca + 0xb;
        aiStack_20e[local_34e] = *(int *)0x1f8a + 0x2c;
        aiStack_36e[local_34e] = (*(int *)0x181e + 2) * 6;
        local_d4 = local_d4 + 1;
        aiStack_25c[iVar4] = 0;
        local_212 = 0;
        if (*(int *)0x20c6 == 1) {
          for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
            if (aiStack_232[local_34c] < -0xf) {
              local_34e = local_34c;
              break;
            }
          }
          aiStack_232[local_34e] = *(int *)0x1fca + 0xb;
          aiStack_20e[local_34e] = *(int *)0x1f8a + 0x2c;
          aiStack_36e[local_34e] = (*(int *)0x181e + 2) * 6;
          aiStack_25c[local_34c] = -1;
          for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
            if (aiStack_232[local_34c] < -0xf) {
              local_34e = local_34c;
              break;
            }
          }
          aiStack_232[local_34e] = *(int *)0x1fca + 0xb;
          aiStack_20e[local_34e] = *(int *)0x1f8a + 0x2c;
          aiStack_36e[local_34e] = (*(int *)0x181e + 2) * 6;
          aiStack_25c[local_34c] = 1;
          local_d4 = local_d4 + 2;
        }
        FUN_1000_cff4(5);
      }
      if ((*(int *)0x2138 == 0) && (*(int *)0x213a == 0)) {
        local_212 = 1;
      }
    }
    if (local_3b6 == 1) {
      if (local_210 < 0x14) {
        local_25e = local_25e + 1;
        if (*(int *)0x1fb8 < 10) {
          piVar1 = (int *)0x1fb8;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)0x1fb8 = 10;
          }
        }
        if (local_210 < 0xc) {
          if (((local_234 == 0) && (100 < local_25e)) && (local_3b8 == 0)) {
            if (*(int *)0x1f8c == 0x1d2) {
              iVar4 = 0;
            }
            else if (-*(int *)0x1f8c == -0x1d2 || -*(int *)0x1f8c + 0x1d2 < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = iVar4 * 0xe;
            if (*(int *)0x1d8c != 0) {
              if (*(int *)0x1d8c < 1) {
                iVar4 = -1;
              }
              else {
                iVar4 = 1;
              }
              *(int *)0x1d8c = *(int *)0x1d8c - iVar4;
            }
            uVar5 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x1d2;
            uVar6 = (int)uVar5 >> 0xf;
            if ((int)((uVar5 ^ uVar6) - uVar6) < 9) {
              local_234 = 1;
              iVar4 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar4 % 2) * 0x10 + -8;
              local_25e = 0;
              *(undefined2 *)0x1d6c = 0;
            }
          }
          if (((local_234 == 1) && (100 < local_25e)) && (local_3b8 == 0)) {
            if (*(int *)0x1f8c == 0x2e) {
              iVar4 = 0;
            }
            else if (-*(int *)0x1f8c == -0x2e || -*(int *)0x1f8c + 0x2e < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = iVar4 * 0xe;
            if (*(int *)0x1d8c != 0) {
              if (*(int *)0x1d8c < 1) {
                iVar4 = -1;
              }
              else {
                iVar4 = 1;
              }
              *(int *)0x1d8c = *(int *)0x1d8c - iVar4;
            }
            uVar5 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x2e;
            uVar6 = (int)uVar5 >> 0xf;
            if ((int)((uVar5 ^ uVar6) - uVar6) < 9) {
              iVar4 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar4 % 2) * 0x10 + -8;
              local_234 = 0;
              local_25e = 0;
              *(undefined2 *)0x1d6c = 0;
            }
          }
          if (local_25e < 0x65) {
            *(undefined2 *)0x1d6c = 0;
            iVar4 = FUN_1000_efc8();
            if ((iVar4 % 10 == 0) && (local_3b8 == 0)) {
              if (local_234 == 0) {
                local_a[3] = *(int *)0x1f8c + 0x50;
                local_a[0] = *(int *)0x1f8c + 0x50;
                local_a[2] = *(int *)0x1f8c + 0x68;
                local_a[1] = *(int *)0x1f8c + 0x68;
                local_394 = 0;
                do {
                  aiStack_23c[local_394] = 0x10;
                  local_394 = local_394 + 1;
                } while (local_394 < 4);
              }
              else {
                local_a[3] = *(int *)0x1f8c + 0x10;
                local_a[0] = *(int *)0x1f8c + 0x10;
                local_a[2] = *(int *)0x1f8c + -8;
                local_a[1] = *(int *)0x1f8c + -8;
                for (local_394 = iVar4 % 10; local_394 < 4; local_394 = local_394 + 1) {
                  aiStack_23c[local_394] = -0x10;
                }
              }
              local_dc[0] = *(int *)0x1fcc + 6;
              local_dc[1] = *(int *)0x1fcc + 0x18;
              local_dc[2] = *(int *)0x1fcc + 0x39;
              local_dc[3] = *(int *)0x1fcc + 0x4b;
              local_3b8 = 4;
            }
          }
          if ((*(int *)0x1d8c + *(int *)0x1fcc < 1) || (0xff < *(int *)0x1d8c + *(int *)0x1fcc)) {
            *(int *)0x1d8c = -*(int *)0x1d8c;
          }
        }
        else {
          uVar5 = (*(int *)0x1f8a - *(int *)0x1f8c) + 0x20;
          if (0x32 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
            if (*(int *)0x1f8a - *(int *)0x1f8c == -0x20) {
              iVar4 = 0;
            }
            else if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar4 * *(int *)0x1844;
          }
          uVar5 = (*(int *)0x1fca - *(int *)0x1fcc) + 0x20;
          if (0x32 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
            if (*(int *)0x1fca - *(int *)0x1fcc == -0x20) {
              iVar4 = 0;
            }
            else if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar4 * *(int *)0x1844;
          }
          if ((*(int *)0x1f8c < 0x21) || (0x1df < *(int *)0x1f8c)) {
            if (*(int *)0x1f8c == 0x100) {
              iVar4 = 0;
            }
            else if (-*(int *)0x1f8c == -0x100 || -*(int *)0x1f8c + 0x100 < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar4 * 2;
          }
          if ((*(int *)0x1fcc < 1) || (0xff < *(int *)0x1fcc)) {
            if (*(int *)0x1fcc == 0x80) {
              iVar4 = 0;
            }
            else if (-*(int *)0x1fcc == -0x80 || -*(int *)0x1fcc + 0x80 < 0) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar4 * 2;
          }
          uVar5 = (int)*(uint *)0x1d6c >> 0xf;
          if (8 < (int)((*(uint *)0x1d6c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d6c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d6c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = iVar4 << 3;
          }
          uVar5 = (int)*(uint *)0x1d8c >> 0xf;
          if (8 < (int)((*(uint *)0x1d8c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d8c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = iVar4 << 3;
          }
          if (*(int *)0x193c == 0) {
            iVar4 = FUN_1000_efc8();
            if ((((iVar4 % 2 == 0) && (local_34a < 0x10)) && (0 < *(int *)0x1f8c)) &&
               (*(int *)0x1f8c < 0x201)) {
              local_34e = iVar4 % 2;
              do {
                if (0x15f < aiStack_3b4[local_34e]) {
                  local_370 = local_34e;
                }
                local_34e = local_34e + 1;
              } while (local_34e < 0x10);
              iVar3 = FUN_1000_efc8();
              iVar4 = local_370;
              aiStack_3b4[local_370] = (iVar3 % 2) * 0x18 + *(int *)0x1fcc + 0x20;
              iVar3 = FUN_1000_efc8();
              aiStack_392[iVar4] = (iVar3 % 2) * 0x38 + *(int *)0x1f8c + 0x20;
              uVar5 = (*(int *)0x1f8a - aiStack_392[iVar4]) + 0x20;
              uVar6 = (int)uVar5 >> 0xf;
              if ((int)((uVar5 ^ uVar6) - uVar6) < 0x33) {
                iVar4 = FUN_1000_efc8();
                auStack_fc[local_370] = iVar4 % 5 - 2;
              }
              else {
                if (aiStack_392[iVar4] == *(int *)0x1f8a) {
                  iVar4 = 0;
                }
                else if (*(int *)0x1f8a - aiStack_392[iVar4] < 1) {
                  iVar4 = -1;
                }
                else {
                  iVar4 = 1;
                }
                iVar3 = FUN_1000_efc8();
                auStack_fc[local_370] = (iVar3 % 5 + 6) * iVar4;
              }
              uVar5 = *(int *)0x1fca - aiStack_3b4[local_370];
              uVar6 = (int)(uVar5 + 0x10) >> 0xf;
              if (0x32 < (int)((uVar5 + 0x10 ^ uVar6) - uVar6)) {
                if (aiStack_3b4[local_370] != *(int *)0x1fca) goto LAB_1000_6a58;
LAB_1000_6a62:
                iVar4 = 0;
                goto LAB_1000_6a64;
              }
LAB_1000_6a86:
              iVar4 = FUN_1000_efc8();
              auStack_1e4[local_370] = iVar4 % 5 - 2;
              goto LAB_1000_6a9b;
            }
          }
        }
      }
      else {
        local_234 = local_234 + 1;
        if (local_234 == 2) {
          FUN_1000_cf2c();
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        for (local_34c = 7; local_34c < 0x10; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          if (*(int *)(iVar4 + 0x1faa) < 10) {
            piVar1 = (int *)(local_34c * 2 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)(local_34c * 2 + 0x1faa) = 10;
            }
          }
          else if (local_234 < 0x28) {
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1faa) = -(iVar3 % 3 + -9);
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1f8a) = iVar3 % 0x80 + *(int *)0x1f8c + -0x10;
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1fca) = iVar3 % 0x60 + *(int *)0x1fcc + -0x10;
            *(undefined2 *)(iVar4 + 0x1d6a) = 0;
            *(undefined2 *)(iVar4 + 0x1d8a) = 0;
            FUN_1000_cff4(4);
          }
        }
        if (local_234 == 0x28) {
          *(undefined1 *)0x2ba = 0;
          FUN_1000_83b5(0x2b8);
          local_34c = 1;
          do {
            iVar4 = local_34c * 2;
            *(undefined2 *)(iVar4 + 0x1f96) = *(undefined2 *)(iVar4 + 0x1f8a);
            *(undefined2 *)(iVar4 + 0x1fd6) = *(undefined2 *)(iVar4 + 0x1fca);
            *(undefined2 *)(iVar4 + 0x1fb6) = 9;
            local_34c = local_34c + 1;
          } while (local_34c < 7);
          iVar4 = *(int *)(*(int *)0x1816 * 0x14 + 0x2ec);
LAB_1000_6162:
          *(int *)0x1db6 = *(int *)0x1db6 + iVar4;
          FUN_1000_a25a();
          FUN_1000_cff4(4);
          FUN_1000_8425(0x2b8);
          *(undefined1 *)0x2ba = 7;
        }
      }
    }
    else if (local_3b6 == 2) {
      if (*(int *)0x1fc8 < 10) {
        piVar1 = (int *)0x1fc8;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(undefined2 *)0x1fc8 = 10;
        }
      }
      if (local_210 < 0x14) {
        if (local_210 < 0xe) {
          uVar5 = 0x120 - *(int *)0x1f8c;
          if ((200 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) &&
             (*(int *)0x1f8c != 0x120)) {
            if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar4;
          }
          uVar5 = 0x90 - *(int *)0x1fcc;
          if (100 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
            if (*(int *)0x1fcc == 0x90) {
              iVar4 = 0;
            }
            else if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c + iVar4 * 2;
          }
          uVar5 = (int)*(uint *)0x1d6c >> 0xf;
          if (6 < (int)((*(uint *)0x1d6c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d6c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d6c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = iVar4 * 6;
          }
          uVar5 = (int)*(uint *)0x1d8c >> 0xf;
          if (0x14 < (int)((*(uint *)0x1d8c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d8c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = iVar4 * 0x14;
          }
          if ((((*(int *)0x1844 + *(int *)0x1846 == 0) && (local_3b8 < 4)) && (0 < *(int *)0x1f8c))
             && (((*(int *)0x1f8c < 0x201 && (0 < *(int *)0x1fcc)) && (*(int *)0x1fcc < 0x160)))) {
            local_34e = 0;
            do {
              if (0x15f < local_dc[local_34e]) {
                local_370 = local_34e;
              }
              local_34e = local_34e + 1;
            } while (local_34e < 4);
            local_dc[local_370] = *(int *)0x1fcc + 0x1c;
            local_a[local_370] = *(int *)0x1f8c + 0x10;
            aiStack_23c[local_370] = (-(uint)(0 < *(int *)0x1d6c) & 0x28) - 0x14;
            local_3b8 = local_3b8 + 1;
          }
        }
        else {
          uVar5 = 0x120 - *(int *)0x1f8c;
          if ((int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf)) < 0x187) {
            *(int *)0x1d6c = (-(uint)(0 < *(int *)0x1d6c) & 0x2c) - 0x16;
          }
          else {
            if (*(int *)0x1f8c == 0x120) {
              iVar4 = 0;
            }
            else if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d6c = *(int *)0x1d6c + iVar4 * 2;
            *(undefined2 *)0x1d8c = 0;
            iVar4 = FUN_1000_efc8();
            *(int *)0x1824 = iVar4 % 0x160 + -0x20;
          }
          if (*(int *)0x1824 == *(int *)0x1fcc) {
            iVar4 = 0;
          }
          else if (*(int *)0x1824 == *(int *)0x1fcc || *(int *)0x1824 - *(int *)0x1fcc < 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = 1;
          }
          *(int *)0x1d8c = *(int *)0x1d8c + iVar4 * 2;
          uVar5 = (int)*(uint *)0x1d8c >> 0xf;
          if (4 < (int)((*(uint *)0x1d8c ^ uVar5) - uVar5)) {
            if (*(int *)0x1d8c == 0) {
              iVar4 = 0;
            }
            else if (*(int *)0x1d8c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = iVar4 << 2;
          }
          if (((*(int *)0x1844 + *(int *)0x1846 == 0) && (local_34a < 0x10)) &&
             ((0 < *(int *)0x1f8c && (*(int *)0x1f8c < 0x201)))) {
            local_34e = 0;
            do {
              if (0x15f < aiStack_3b4[local_34e]) {
                local_370 = local_34e;
              }
              iVar4 = local_370;
              local_34e = local_34e + 1;
            } while (local_34e < 0x10);
            aiStack_3b4[local_370] = *(int *)0x1fcc + 0x1c;
            iVar3 = *(int *)0x1f8c;
            aiStack_392[iVar4] = iVar3 + 0x10;
            iVar4 = (iVar3 + 0x10) - *(int *)0x1f8a;
            uVar5 = 0x20 - iVar4;
            if ((int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf)) < 0x33) {
              iVar4 = FUN_1000_efc8();
              auStack_fc[local_370] = iVar4 % 5 - 2;
            }
            else {
              if (iVar4 == 0x20) {
                iVar4 = 0;
              }
              else if ((int)uVar5 < 1) {
                iVar4 = -1;
              }
              else {
                iVar4 = 1;
              }
              iVar3 = FUN_1000_efc8();
              auStack_fc[local_370] = (iVar3 % 5 + 6) * iVar4;
            }
            uVar5 = (*(int *)0x1fca - aiStack_3b4[local_370]) + 0x10;
            if ((int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf)) < 0x33) goto LAB_1000_6a86;
            if (*(int *)0x1fca - aiStack_3b4[local_370] == -0x10) goto LAB_1000_6a62;
LAB_1000_6a58:
            if ((int)uVar5 < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
LAB_1000_6a64:
            iVar3 = FUN_1000_efc8();
            auStack_1e4[local_370] = (iVar3 % 5 + 6) * iVar4;
LAB_1000_6a9b:
            local_34a = local_34a + 1;
          }
        }
      }
      else {
        if (*(int *)0x1d6c != 0) {
          *(undefined2 *)0x1d6e = *(undefined2 *)0x1d6c;
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        local_34c = 1;
        do {
          iVar4 = local_34c * 2;
          if ((*(int *)(iVar4 + 0x1faa) < 10) &&
             (*(int *)(iVar4 + 0x1faa) = *(int *)(iVar4 + 0x1faa) + -1, *(int *)(iVar4 + 0x1faa) < 1
             )) {
            *(undefined2 *)(iVar4 + 0x1faa) = 0;
          }
          local_34c = local_34c + 1;
        } while (local_34c < 0xf);
        local_234 = local_234 + (uint)(*(int *)0x1844 == 0);
        if ((*(int *)0x1844 == 0) && (local_234 < 0xd)) {
          *(undefined2 *)(local_234 * -2 + 0x1fc8) = 9;
          FUN_1000_cff4(4);
        }
        if (local_234 == 0xc) {
          *(undefined1 *)0x2ba = 0;
          FUN_1000_83b5(0x2b8);
          *(undefined2 *)0x1fae = 9;
          *(undefined2 *)0x1fac = 9;
          *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2f0);
          FUN_1000_a25a();
          FUN_1000_cf2c();
          FUN_1000_cff4(4);
          FUN_1000_8425(0x2b8);
          *(undefined1 *)0x2ba = 7;
          local_234 = 0x30;
        }
      }
    }
    else if (local_3b6 == 3) {
      if (local_210 < 0x14) {
        if (*(int *)0x1fbc < 10) {
          piVar1 = (int *)0x1fbc;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            *(undefined2 *)0x1fbc = 10;
          }
        }
        if (local_234 == 0) {
          if (*(int *)0x1f8c == 0x1f2) {
            iVar4 = 0;
          }
          else if (-*(int *)0x1f8c == -0x1f2 || -*(int *)0x1f8c + 0x1f2 < 0) {
            iVar4 = -1;
          }
          else {
            iVar4 = 1;
          }
          *(int *)0x1d6c = iVar4 * 10;
          if (*(int *)0x1d8c != 0) {
            if (*(int *)0x1d8c < 1) {
              iVar4 = -1;
            }
            else {
              iVar4 = 1;
            }
            *(int *)0x1d8c = *(int *)0x1d8c - iVar4;
          }
          uVar5 = (*(int *)0x1d6c + *(int *)0x1f8c) - 0x1d2;
          uVar6 = (int)uVar5 >> 0xf;
          if ((int)((uVar5 ^ uVar6) - uVar6) < 9) {
            local_234 = 1;
            *(undefined2 *)0x1d8c = 0xfffe;
            *(undefined2 *)0x1d6c = 0;
          }
        }
        else {
          if (local_25e < 0xa2) {
            local_25e = local_25e + 1;
          }
          if (local_25e == 0xa2) {
            local_25e = 0;
            *(undefined2 *)0x1d4c = 2;
          }
          if (local_25e < 0x31) {
            if (local_25e == 0x10) {
              *(undefined2 *)0x1d4c = 0;
              *(undefined2 *)0x1d8c = 0;
              if (local_3b8 == 0) {
                local_a[2] = *(int *)0x1f90;
                local_a[0] = local_a[2];
                local_a[3] = local_a[2] + 0x20;
                local_a[1] = local_a[2] + 0x20;
                local_dc[1] = *(int *)0x1fd0 + 8;
                local_dc[0] = *(int *)0x1fd0 + 8;
                local_dc[3] = *(int *)0x1fd2 + 8;
                local_dc[2] = *(int *)0x1fd2 + 8;
                local_394 = 0;
                do {
                  aiStack_23c[local_394] = -0x10;
                  local_394 = local_394 + 1;
                } while (local_394 < 4);
                local_3b8 = 2;
              }
            }
            if (local_25e == 0x20) {
              *(undefined2 *)0x1d4c = 0xfffe;
              iVar4 = FUN_1000_efc8();
              *(int *)0x1d8c = (iVar4 % 2) * 4 + -2;
              if (9 < local_210) {
                local_25e = 0xa4;
                *(undefined2 *)0x1d4c = 0;
                *(int *)0x1d8c = *(int *)0x1d8c << 2;
              }
            }
            if (local_25e == 0x30) {
              *(undefined2 *)0x1d4c = 0;
            }
            iVar4 = *(int *)0x1d4c;
            *(int *)0x1fd0 = *(int *)0x1fd0 - iVar4;
            *(int *)0x1fd2 = *(int *)0x1fd2 + iVar4;
          }
        }
        if ((*(int *)0x1d8c + *(int *)0x1fcc < 0x21) || (0xff < *(int *)0x1d8c + *(int *)0x1fcc)) {
          *(int *)0x1d8c = -*(int *)0x1d8c;
        }
        if ((*(int *)0x1844 + *(int *)0x1846 == 0) && (local_34a < 0x10)) {
          bVar7 = local_25e == 0xa4;
          iVar4 = FUN_1000_efc8();
          iVar4 = iVar4 % (int)(4 - (uint)bVar7);
          if ((iVar4 == 0) && ((0 < *(int *)0x1f8c && (*(int *)0x1f8c < 0x201)))) {
            local_34e = iVar4;
            do {
              if (0x15f < aiStack_3b4[local_34e]) {
                local_370 = local_34e;
              }
              iVar4 = local_370;
              local_34e = local_34e + 1;
            } while (local_34e < 0x10);
            aiStack_3b4[local_370] = *(int *)0x1fcc + 0x1c;
            aiStack_392[iVar4] = *(int *)0x1f8c + 0x10;
            aiStack_346[iVar4] = (-(uint)(local_25e == 0xa4) & 0x1e) + 0x1e;
            auStack_1e4[iVar4] = 0;
            auStack_fc[iVar4] = 0;
            goto LAB_1000_6a9b;
          }
        }
      }
      else {
        local_234 = local_234 + 1;
        if (local_234 == 2) {
          FUN_1000_cf2c();
        }
        *(undefined2 *)0x1d8c = 0;
        *(undefined2 *)0x1d6c = 0;
        for (local_34c = 9; local_34c < 0x10; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          if (*(int *)(iVar4 + 0x1faa) < 10) {
            piVar1 = (int *)(local_34c * 2 + 0x1faa);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              *(undefined2 *)(local_34c * 2 + 0x1faa) = 10;
            }
          }
          else if (local_234 < 0x28) {
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1faa) = -(iVar3 % 3 + -9);
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1f8a) = iVar3 % 0x60 + *(int *)0x1f90 + 0x10;
            iVar3 = FUN_1000_efc8();
            *(int *)(iVar4 + 0x1fca) = iVar3 % 0x80 + *(int *)0x1fd0 + -0x10;
            *(undefined2 *)(iVar4 + 0x1d6a) = 0;
            *(undefined2 *)(iVar4 + 0x1d8a) = 0;
            FUN_1000_cff4(4);
          }
        }
        if (local_234 == 0x28) {
          *(undefined1 *)0x2ba = 0;
          FUN_1000_83b5(0x2b8);
          local_34c = 1;
          do {
            iVar4 = local_34c * 2;
            *(undefined2 *)(iVar4 + 0x1f9a) = *(undefined2 *)(iVar4 + 0x1f8a);
            *(undefined2 *)(iVar4 + 0x1fda) = *(undefined2 *)(iVar4 + 0x1fca);
            *(undefined2 *)(iVar4 + 0x1fba) = 9;
            local_34c = local_34c + 1;
          } while (local_34c < 6);
          *(undefined2 *)0x1fa6 = *(undefined2 *)0x1f9a;
          *(undefined2 *)0x1fe6 = *(undefined2 *)0x1fda;
          *(undefined2 *)0x1fc6 = 9;
          iVar4 = *(int *)(*(int *)0x1816 * 0x14 + 0x2f4);
          goto LAB_1000_6162;
        }
      }
    }
    if (0x32 < local_234) goto LAB_1000_804a;
    for (local_34c = 0; iVar4 = local_34c, local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
      if (-0x10 < aiStack_232[local_34c]) {
        aiStack_20e[local_34c] = aiStack_20e[local_34c] + aiStack_36e[local_34c];
        aiStack_232[local_34c] =
             aiStack_232[local_34c] + aiStack_25c[local_34c] * (*(int *)0x181e + 2) * 2;
        if (local_3b6 == 1) {
          if (((*(int *)0x1f8c <= aiStack_20e[local_34c]) &&
              (aiStack_20e[local_34c] <= *(int *)0x1f8c + 0x70)) &&
             ((*(int *)0x1fcc + -8 <= aiStack_232[local_34c] &&
              (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x58)))) {
            if ((*(int *)0x1fcc + 0x1c <= aiStack_232[local_34c]) &&
               (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x34)) {
              FUN_1000_cff4(3);
              *(undefined2 *)0x1fb8 = 9;
              *(int *)0x1fd8 = aiStack_232[iVar4] + -8;
              *(int *)0x1f98 = aiStack_20e[iVar4] + -8;
              local_210 = local_210 + 1;
              *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2ea);
              FUN_1000_a25a();
            }
            iVar4 = local_34c << 1;
LAB_1000_6e91:
            *(undefined2 *)((int)aiStack_232 + iVar4) = 0xfff0;
          }
        }
        else if (local_3b6 == 2) {
          if ((((*(int *)0x1f8c + -6 <= aiStack_20e[local_34c]) &&
               (aiStack_20e[local_34c] <= *(int *)0x1f8c + 0x36)) &&
              (*(int *)0x1fcc + 2 <= aiStack_232[local_34c])) &&
             (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x2e)) {
            FUN_1000_cff4(3);
            *(undefined2 *)0x1fc8 = 9;
            *(int *)0x1fe8 = aiStack_232[iVar4] + -8;
            *(int *)0x1fa8 = aiStack_20e[iVar4] + -8;
            local_210 = local_210 + 1;
            *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2ee);
            FUN_1000_a25a();
            aiStack_232[iVar4] = -0x10;
          }
          for (local_34e = 3; local_34e < 0xf; local_34e = local_34e + 1) {
            iVar4 = *(int *)(local_34e * 2 + 0x1f8a);
            if (((iVar4 + -0xc <= aiStack_20e[local_34c]) &&
                (aiStack_20e[local_34c] <= iVar4 + 0x1c)) &&
               ((iVar4 = *(int *)(local_34e * 2 + 0x1fca), iVar4 + -4 <= aiStack_232[local_34c] &&
                (aiStack_232[local_34c] <= iVar4 + 0x1c)))) {
              aiStack_232[local_34c] = -0x10;
            }
          }
        }
        else if (local_3b6 == 3) {
          if (((*(int *)0x1f8c + 10 <= aiStack_20e[local_34c]) &&
              (aiStack_20e[local_34c] <= *(int *)0x1f8c + 0x16)) &&
             ((*(int *)0x1fcc + -8 <= aiStack_232[local_34c] &&
              (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x38)))) {
            if ((*(int *)0x1fcc + 0xe <= aiStack_232[local_34c]) &&
               (aiStack_232[local_34c] <= *(int *)0x1fcc + 0x22)) {
              FUN_1000_cff4(3);
              *(undefined2 *)0x1fbc = 9;
              *(int *)0x1fdc = aiStack_232[iVar4] + -8;
              *(int *)0x1f9c = aiStack_20e[iVar4] + -8;
              local_210 = local_210 + 1;
              *(int *)0x1db6 = *(int *)0x1db6 + *(int *)(*(int *)0x1816 * 0x14 + 0x2f2);
              FUN_1000_a25a();
            }
            aiStack_232[local_34c] = -0x10;
          }
          iVar4 = local_34c * 2;
          if ((((*(int *)0x1f94 + -8 <= aiStack_20e[local_34c]) &&
               (aiStack_20e[local_34c] <= *(int *)0x1f94 + 0x46)) &&
              (*(int *)0x1fd4 + -8 <= aiStack_232[local_34c])) &&
             (aiStack_232[local_34c] <= *(int *)0x1fd4 + 0x78)) goto LAB_1000_6e91;
          local_34e = 3;
          do {
            iVar4 = *(int *)(local_34e * 2 + 0x1f8a);
            if (((iVar4 + -6 <= aiStack_20e[local_34c]) && (aiStack_20e[local_34c] <= iVar4 + 0x38))
               && ((iVar4 = *(int *)(local_34e * 2 + 0x1fca), iVar4 + -8 <= aiStack_232[local_34c]
                   && (aiStack_232[local_34c] <= iVar4 + 0x18)))) {
              aiStack_232[local_34c] = -0x10;
            }
            local_34e = local_34e + 1;
          } while (local_34e < 5);
        }
        if (((aiStack_20e[local_34c] < 0) || (0x26f < aiStack_20e[local_34c])) ||
           (0x15f < aiStack_232[local_34c])) {
          aiStack_232[local_34c] = -0x10;
        }
        if (aiStack_232[local_34c] < -0xf) {
          local_d4 = local_d4 + -1;
        }
      }
    }
    if (0 < local_34a) {
      for (local_34c = 0; local_34c < 0x10; local_34c = local_34c + 1) {
        if (aiStack_3b4[local_34c] < 0) {
          aiStack_3b4[local_34c] = 0x160;
        }
        iVar4 = local_34c;
        if (aiStack_3b4[local_34c] < 0x160) {
          if (0 < aiStack_346[local_34c]) {
            aiStack_346[local_34c] = aiStack_346[local_34c] + -1;
            iVar3 = *(int *)0x1f8a - aiStack_392[local_34c];
            if (iVar3 == -0x20) {
              iVar3 = 0;
            }
            else if (iVar3 == -0x20 || iVar3 + 0x20 < 0) {
              iVar3 = -1;
            }
            else {
              iVar3 = 1;
            }
            auStack_fc[local_34c] = auStack_fc[local_34c] + *(int *)0x1844 * iVar3;
            iVar3 = *(int *)0x1fca - aiStack_3b4[local_34c];
            if (iVar3 == -0x10) {
              iVar3 = 0;
            }
            else if (iVar3 == -0x10 || iVar3 + 0x10 < 0) {
              iVar3 = -1;
            }
            else {
              iVar3 = 1;
            }
            auStack_1e4[local_34c] = auStack_1e4[local_34c] + *(int *)0x1844 * iVar3;
            uVar5 = auStack_fc[local_34c];
            if (8 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
              if (uVar5 == 0) {
                iVar3 = 0;
              }
              else if ((int)uVar5 < 1) {
                iVar3 = -1;
              }
              else {
                iVar3 = 1;
              }
              auStack_fc[local_34c] = iVar3 << 3;
            }
            uVar5 = auStack_1e4[local_34c];
            if (8 < (int)((uVar5 ^ (int)uVar5 >> 0xf) - ((int)uVar5 >> 0xf))) {
              if (uVar5 == 0) {
                iVar3 = 0;
              }
              else if ((int)uVar5 < 1) {
                iVar3 = -1;
              }
              else {
                iVar3 = 1;
              }
              auStack_1e4[local_34c] = iVar3 << 3;
            }
          }
          aiStack_392[local_34c] = aiStack_392[local_34c] + auStack_fc[local_34c];
          piVar1 = aiStack_3b4 + iVar4;
          *piVar1 = *piVar1 + auStack_1e4[iVar4];
          if (((*piVar1 < 0) || (aiStack_392[iVar4] < 0)) || (0x277 < aiStack_392[iVar4])) {
            aiStack_3b4[local_34c] = 0x160;
          }
          else {
            if (*(int *)0x1faa == 10) {
              if (((*(int *)0x1f8a <= aiStack_392[local_34c]) &&
                  (aiStack_392[local_34c] <= *(int *)0x1f8a + 0x3a)) &&
                 ((*(int *)0x1fca + 6 <= aiStack_3b4[local_34c] &&
                  (aiStack_3b4[local_34c] <= *(int *)0x1fca + 0x1a)))) {
                *(undefined2 *)0x1faa = 9;
                aiStack_3b4[local_34c] = 0x160;
                FUN_1000_cff4(4);
              }
            }
            if ((aiStack_3b4[local_34c] < 0x160) && (-1 < aiStack_3b4[local_34c]))
            goto LAB_1000_7241;
          }
          local_34a = local_34a + -1;
        }
LAB_1000_7241:
      }
    }
    if (local_3b6 == 1) {
      if (0 < local_3b8) {
        for (local_34c = 0; local_34c < 4; local_34c = local_34c + 1) {
          if (local_dc[local_34c] < 0x160) {
            piVar1 = local_a + local_34c;
            *piVar1 = *piVar1 + aiStack_23c[local_34c];
            if ((*piVar1 < 0) || (0x25f < local_a[local_34c])) {
              local_dc[local_34c] = 0x160;
              local_3b8 = local_3b8 + -1;
            }
            else if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -0x14 <= local_a[local_34c])) &&
                     (local_a[local_34c] <= *(int *)0x1f8a + 0x34)) &&
                    ((*(int *)0x1fca + 6 <= local_dc[local_34c] &&
                     (local_dc[local_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              FUN_1000_cff4(4);
            }
          }
        }
      }
    }
    else if (local_3b6 == 2) {
      if (0 < local_3b8) {
        for (local_34c = 0; local_34c < 4; local_34c = local_34c + 1) {
          if (local_dc[local_34c] < 0x160) {
            piVar1 = local_a + local_34c;
            *piVar1 = *piVar1 + aiStack_23c[local_34c];
            if ((*piVar1 < 0) || (0x25f < local_a[local_34c])) {
              local_dc[local_34c] = 0x160;
              local_3b8 = local_3b8 + -1;
            }
            else if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -0x14 <= local_a[local_34c])) &&
                     (local_a[local_34c] <= *(int *)0x1f8a + 0x34)) &&
                    ((*(int *)0x1fca + 6 <= local_dc[local_34c] &&
                     (local_dc[local_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              FUN_1000_cff4(4);
            }
          }
        }
      }
    }
    else if ((local_3b6 == 3) && (0 < local_3b8)) {
      for (local_34c = 0; local_34c < 3; local_34c = local_34c + 2) {
        if (local_dc[local_34c] < 0x160) {
          local_a[local_34c] = local_a[local_34c] + aiStack_23c[local_34c];
          if ((0xa0 < local_a[local_34c + 1] - local_a[local_34c]) || (local_a[local_34c] < 0xa0)) {
            local_a[local_34c + 1] = local_a[local_34c + 1] + aiStack_23c[local_34c];
          }
          if (local_a[local_34c + 1] < 0x10) {
            local_dc[local_34c] = 0x160;
            local_3b8 = local_3b8 + -1;
          }
          else {
            if (local_a[local_34c] < 0x10) {
              local_a[local_34c] = 0;
            }
            if ((((*(int *)0x1faa == 10) && (*(int *)0x1f8a + -4 <= local_a[local_34c + 1])) &&
                (local_a[local_34c] <= *(int *)0x1f8a + 0x34)) &&
               ((*(int *)0x1fca + 6 <= local_dc[local_34c] &&
                (local_dc[local_34c] <= *(int *)0x1fca + 0x1a)))) {
              *(undefined2 *)0x1faa = 9;
              FUN_1000_cff4(4);
            }
          }
        }
      }
    }
    if (local_3b6 == 1) {
      if ((((*(int *)0x1f8c + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f8c + 0x70))
          && (*(int *)0x1fcc + -0x14 < *(int *)0x1fca)) &&
         ((*(int *)0x1fca < *(int *)0x1fcc + 0x54 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        FUN_1000_cff4(4);
      }
    }
    else if (local_3b6 == 2) {
      if ((((*(int *)0x1f8c + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f8c + 0x30))
          && (*(int *)0x1fcc + -0x14 < *(int *)0x1fca)) &&
         ((*(int *)0x1fca < *(int *)0x1fcc + 0x34 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        FUN_1000_cff4(4);
      }
      for (local_34c = 3; local_34c < 0xf; local_34c = local_34c + 1) {
        iVar4 = *(int *)(local_34c * 2 + 0x1f8a);
        if (((iVar4 + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= iVar4 + 0x10)) &&
           ((iVar4 = *(int *)(local_34c * 2 + 0x1fca), iVar4 + -0x14 <= *(int *)0x1fca &&
            ((*(int *)0x1fca <= iVar4 + 0x14 && (9 < *(int *)0x1faa)))))) {
          *(undefined2 *)0x1faa = 9;
          FUN_1000_cff4(4);
        }
      }
    }
    else if (local_3b6 == 3) {
      if (((*(int *)0x1f94 + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < *(int *)0x1f94 + 0x30)) &&
         ((*(int *)0x1fd4 + -0x14 < *(int *)0x1fca &&
          ((*(int *)0x1fca < *(int *)0x1fd4 + 0x74 && (9 < *(int *)0x1faa)))))) {
        *(undefined2 *)0x1faa = 9;
        FUN_1000_cff4(4);
      }
      if ((((*(int *)0x1f8c + -0x30 <= *(int *)0x1f8a) && (*(int *)0x1f8a <= *(int *)0x1f8c + 0x10))
          && (*(int *)0x1fcc + -0x14 <= *(int *)0x1fca)) &&
         ((*(int *)0x1fca <= *(int *)0x1fcc + 0x34 && (9 < *(int *)0x1faa)))) {
        *(undefined2 *)0x1faa = 9;
        FUN_1000_cff4(4);
      }
      for (local_34c = 3; local_34c < 5; local_34c = local_34c + 1) {
        iVar4 = *(int *)(local_34c * 2 + 0x1f8a);
        if (((iVar4 + -0x30 < *(int *)0x1f8a) && (*(int *)0x1f8a < iVar4 + 0x30)) &&
           ((iVar4 = *(int *)(local_34c * 2 + 0x1fca), iVar4 + -0x14 < *(int *)0x1fca &&
            ((*(int *)0x1fca < iVar4 + 0x14 && (9 < *(int *)0x1faa)))))) {
          *(undefined2 *)0x1faa = 9;
          FUN_1000_cff4(4);
        }
      }
    }
    *(int *)0x1f8a = *(int *)0x1f8a + *(int *)0x1d6a;
    *(int *)0x1fca = *(int *)0x1fca + *(int *)0x1d8a;
    *(byte *)0x1844 = *(byte *)0x1844 ^ 1;
    for (local_34c = 0; local_34c < 100; local_34c = local_34c + 1) {
      local_1c4[local_34c] = local_1c4[local_34c] + 5;
      if (0x160 < local_1c4[local_34c]) {
        local_1c4[local_34c] = local_1c4[local_34c] + -0x160;
      }
      if (local_dc[local_34c + 5] < 0) {
        local_dc[local_34c + 5] = local_dc[local_34c + 5] + 0x280;
      }
      if (0x27f < local_dc[local_34c + 5]) {
        local_dc[local_34c + 5] = local_dc[local_34c + 5] + -0x280;
      }
      FUN_1000_b50e(((int)*(char *)(local_1c4[local_34c] + 0xbd6) * local_480[local_34c] >> 2) +
                    local_dc[local_34c + 5],local_1c4[local_34c],local_326[local_34c]);
    }
    if (local_3b6 == 1) {
      local_34c = 0;
      do {
        iVar4 = local_34c;
        if (local_dc[local_34c] < 0x160) {
          FUN_1000_bfd6(local_a[local_34c],local_dc[local_34c],*(int *)0x1d42 + 0x34);
          FUN_1000_bfd6(local_a[iVar4] + 0x10,local_dc[iVar4],*(int *)0x1d42 + 0x35);
        }
        local_34c = local_34c + 1;
      } while (local_34c < 4);
      if (local_234 < 0x28) {
        for (local_34c = 1; local_34c < 7; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if (((-0x20 < *(int *)(iVar4 + 0x1fca)) && (*(int *)(iVar4 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)(local_34c * 2 + 0x1f8a) &&
              (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))) {
            FUN_1000_8518(local_34c);
          }
        }
      }
      for (local_34c = 7; local_34c < 0x10; local_34c = local_34c + 1) {
        iVar4 = local_34c * 2;
        if (*(int *)(iVar4 + 0x1faa) < 10) {
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if (local_234 < 0x28) {
            FUN_1000_8562(local_34c);
          }
          else {
            FUN_1000_85b8(local_34c);
          }
        }
      }
    }
    else if (local_3b6 == 2) {
      for (local_34c = 0; iVar4 = local_34c, local_34c < 4; local_34c = local_34c + 1) {
        if (local_dc[local_34c] < 0x160) {
          uVar5 = -(uint)(0 < aiStack_23c[local_34c]) & 2;
          FUN_1000_bfd6(local_a[local_34c],local_dc[local_34c],uVar5 + *(int *)0x1d42 + 0x30);
          FUN_1000_bfd6(local_a[iVar4] + 0x10,local_dc[iVar4],uVar5 + *(int *)0x1d42 + 0x31);
        }
      }
      if (local_210 < 0x14) {
        local_34c = 0xe;
        do {
          iVar4 = local_34c * 2;
          *(undefined2 *)(iVar4 + 0x1f8a) = *(undefined2 *)(iVar4 + 0x1f88);
          *(undefined2 *)(iVar4 + 0x1fca) = *(undefined2 *)(iVar4 + 0x1fc8);
          local_34c = local_34c + -1;
        } while (3 < local_34c);
        *(int *)0x1f90 = *(int *)0x1d6c + *(int *)0x1f8c + 0x10;
        *(int *)0x1fd0 = *(int *)0x1d8c + *(int *)0x1fcc + 0x14;
        for (local_34c = 0xe; 3 < local_34c; local_34c = local_34c + -1) {
          if (((-0x20 < *(int *)(local_34c * 2 + 0x1fca)) &&
              (*(int *)(local_34c * 2 + 0x1fca) < 0x160)) &&
             ((-1 < *(int *)(local_34c * 2 + 0x1f8a) && (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))
             ) {
            FUN_1000_84d6(local_34c);
          }
        }
        for (local_34c = 1; local_34c < 3; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if ((((-0x20 < *(int *)(iVar4 + 0x1fca)) && (*(int *)(iVar4 + 0x1fca) < 0x160)) &&
              (-0x21 < *(int *)(local_34c * 2 + 0x1f8a))) &&
             (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)) {
            FUN_1000_8622(local_34c,-(0 < *(int *)0x1d6c) & 2);
          }
        }
      }
      else {
        for (local_34c = 0xe; 3 < local_34c; local_34c = local_34c + -1) {
          if (((-0x20 < *(int *)(local_34c * 2 + 0x1fca)) &&
              (*(int *)(local_34c * 2 + 0x1fca) < 0x160)) &&
             ((-1 < *(int *)(local_34c * 2 + 0x1f8a) && (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))
             ) {
            if (*(int *)(local_34c * 2 + 0x1faa) < 10) {
              if (0 < *(int *)(local_34c * 2 + 0x1faa)) {
                FUN_1000_8562(local_34c);
              }
            }
            else {
              FUN_1000_84d6(local_34c);
            }
          }
        }
        for (local_34c = 1; local_34c < 3; local_34c = local_34c + 1) {
          if (((-0x20 < *(int *)(local_34c * 2 + 0x1fca)) &&
              (*(int *)(local_34c * 2 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)(local_34c * 2 + 0x1f8a) &&
              (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))) {
            if (*(int *)(local_34c * 2 + 0x1faa) < 10) {
              if (0 < *(int *)(local_34c * 2 + 0x1faa)) {
                FUN_1000_85b8(local_34c);
              }
            }
            else {
              FUN_1000_8622(local_34c,-(0 < *(int *)0x1d6e) & 2);
            }
          }
        }
      }
      if (*(int *)0x1fc8 < 10) {
        *(int *)0x1fa8 = *(int *)0x1fa8 + *(int *)0x1d6c;
        *(int *)0x1fe8 = *(int *)0x1fe8 + *(int *)0x1d8c;
        if ((((-0x20 < *(int *)0x1fe8) && (*(int *)0x1fe8 < 0x160)) && (0 < *(int *)0x1fa8)) &&
           (*(int *)0x1fa8 < 0x260)) {
          FUN_1000_8562(0xf);
        }
      }
    }
    else if (local_3b6 == 3) {
      for (local_34c = 0; iVar4 = local_34c, local_34c < 3; local_34c = local_34c + 2) {
        if (local_dc[local_34c] < 0x160) {
          FUN_1000_bfd6(local_a[local_34c],local_dc[local_34c],*(int *)0x1d42 + 0x36);
          FUN_1000_bfd6(local_a[iVar4 + 1],local_dc[iVar4 + 1],*(int *)0x1d42 + 0x37);
          for (local_34e = local_a[iVar4] + 0x10; local_34e < local_a[local_34c + 1];
              local_34e = local_34e + 0x10) {
            FUN_1000_bfd6(local_34e,local_dc[local_34c],*(int *)0x1d42 + 0x5c);
          }
        }
      }
      if (local_234 < 0x28) {
        for (local_34c = 1; local_34c < 3; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if ((((-0x20 < *(int *)(iVar4 + 0x1fca)) && (*(int *)(iVar4 + 0x1fca) < 0x160)) &&
              (-1 < *(int *)(local_34c * 2 + 0x1f8a))) && (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)
             ) {
            FUN_1000_84d6(local_34c);
          }
        }
        for (local_34c = 3; local_34c < 9; local_34c = local_34c + 1) {
          iVar4 = local_34c * 2;
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if (((-0x20 < *(int *)(iVar4 + 0x1fca)) && (*(int *)(iVar4 + 0x1fca) < 0x160)) &&
             ((-0x21 < *(int *)(local_34c * 2 + 0x1f8a) &&
              (*(int *)(local_34c * 2 + 0x1f8a) < 0x260)))) {
            FUN_1000_8518(local_34c);
          }
        }
      }
      for (local_34c = 9; local_34c < 0x10; local_34c = local_34c + 1) {
        iVar4 = local_34c * 2;
        if (*(int *)(iVar4 + 0x1faa) < 10) {
          *(int *)(iVar4 + 0x1f8a) = *(int *)(iVar4 + 0x1f8a) + *(int *)0x1d6c;
          *(int *)(iVar4 + 0x1fca) = *(int *)(iVar4 + 0x1fca) + *(int *)0x1d8c;
          if (local_234 < 0x28) {
            FUN_1000_8562(local_34c);
          }
          else {
            FUN_1000_85b8(local_34c);
          }
        }
      }
    }
    local_34e = *(int *)0x181e * 0x10 + *(int *)0x1d42 + 0x14;
    for (local_34c = 0; local_34c < *(int *)0x1d48; local_34c = local_34c + 1) {
      if (-0x10 < aiStack_232[local_34c]) {
        if (aiStack_232[local_34c] < 0) {
          FUN_1000_c322(aiStack_20e[local_34c],aiStack_232[local_34c],
                        (-(uint)(0 < aiStack_36e[local_34c]) & 3) + aiStack_25c[local_34c] +
                        local_34e);
        }
        else {
          FUN_1000_bfd6(aiStack_20e[local_34c],aiStack_232[local_34c],
                        (-(uint)(0 < aiStack_36e[local_34c]) & 3) + aiStack_25c[local_34c] +
                        local_34e);
        }
      }
    }
    if (0 < local_34a) {
      local_34e = (local_3b6 + -1) * 2 + *(int *)0x1844 + *(int *)0x1d46 + *(int *)0x1d42;
      for (local_34c = 0; local_34c < 0x10; local_34c = local_34c + 1) {
        if ((aiStack_3b4[local_34c] < 0x160) && (-1 < aiStack_3b4[local_34c])) {
          FUN_1000_bfd6(aiStack_392[local_34c],aiStack_3b4[local_34c],local_34e);
        }
      }
    }
    if (*(int *)0x1faa < 10) {
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,
                    (*(int *)(*(int *)0x1faa * 2 + 0x4ec) + 8) * 2);
      iVar4 = *(int *)(*(int *)0x1faa * 2 + 0x4ec) * 2 + 0x11;
    }
    else {
      FUN_1000_bfd6(*(undefined2 *)0x1f8a,*(undefined2 *)0x1fca,0x28);
      iVar4 = 0x29;
    }
    FUN_1000_bfd6(*(int *)0x1f8a + 0x20,*(undefined2 *)0x1fca,iVar4);
    FUN_1000_8292();
    if (local_3b6 == 1) {
      for (local_34c = 1; local_34c < 6; local_34c = local_34c + 2) {
        if ((-1 < *(int *)(local_34c * 2 + 0x1fca)) && (*(int *)(local_34c * 2 + 0x1fca) < 0x161)) {
          FUN_1000_890a(local_34c,0xf,2);
        }
      }
    }
    else if (local_3b6 == 2) {
      if ((-1 < *(int *)0x1fcc) && (*(int *)0x1fcc < 0x161)) {
        FUN_1000_890a(1,7,6);
      }
      if ((-1 < *(int *)0x1fce) && (*(int *)0x1fce < 0x161)) {
        FUN_1000_890a(2,7,6);
      }
      for (local_34c = 3; local_34c < 0xf; local_34c = local_34c + 1) {
        if ((-1 < *(int *)(local_34c * 2 + 0x1fca)) && (*(int *)(local_34c * 2 + 0x1fca) < 0x161)) {
          FUN_1000_890a(local_34c,3,6);
        }
      }
    }
    else if (local_3b6 == 3) {
      if ((-1 < *(int *)0x1fcc) && (*(int *)0x1fcc < 0x161)) {
        FUN_1000_890a(1,0xb,5);
      }
      if ((-1 < *(int *)0x1fce) && (*(int *)0x1fce < 0x161)) {
        FUN_1000_890a(2,0xb,5);
      }
      local_34c = 3;
      do {
        if ((-1 < *(int *)(local_34c * 2 + 0x1fca)) && (*(int *)(local_34c * 2 + 0x1fca) < 0x161)) {
          FUN_1000_890a(local_34c,7,5);
        }
        local_34c = local_34c + 1;
      } while (local_34c < 6);
      if ((-1 < *(int *)0x1fda) && (*(int *)0x1fda < 0x161)) {
        FUN_1000_890a(8,7,5);
      }
    }
    FUN_1000_890a(0,7,0xf);
    while (iVar4 = FUN_1000_bf8e(), iVar4 != 0) {
      FUN_1000_bf98();
    }
    FUN_1000_e538(0x2130);
    do {
      uVar5 = FUN_1000_bb38();
    } while (uVar5 < *(int *)0x1820 - 1U);
    *(undefined2 *)0xdd0 = 0;
    out(0xa4,(byte)*(undefined2 *)0x1844);
    out(0xa6,(byte)*(undefined2 *)0x1844 ^ 1);
    FUN_1000_b4ee();
  } while( true );
}


