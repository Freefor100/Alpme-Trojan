/* ANALYST: Original-byte static decompiler text. The local 2181-instruction CFG reaches a fixed point with zero computed dispatch sites under normal PE TLS and independently checked helper tags. The original indirect CALL remains; its actual ReadDir Err lowtag2 context bypasses the tag1 callback. Selected synthetic UTF-8 prefs cases and the complete fixed keyword literal are checked separately. This is not a proof of all transitive parser/helper semantics. Decompiler diagnostics are retained; no specimen code is executed. */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Type propagation algorithm not settling */

void FUN_0ec7a55a(longlong *param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulonglong ******ppppppuVar6;
  ulonglong ******ppppppuVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong *******pppppppuVar13;
  longlong *plVar14;
  ulonglong *******pppppppuVar15;
  undefined8 *puVar16;
  byte bVar17;
  uint uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulonglong *******pppppppuVar21;
  ulonglong *******pppppppuVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  byte bVar25;
  undefined1 *puVar26;
  ulonglong ******ppppppuVar27;
  char *pcVar28;
  ulonglong *******pppppppuVar29;
  undefined1 *puVar30;
  byte *pbVar31;
  ulonglong *******pppppppuVar32;
  uint uVar33;
  longlong lVar34;
  ulonglong *******pppppppuVar35;
  ulonglong *******pppppppuVar36;
  undefined1 *puVar37;
  ulonglong uVar38;
  ulonglong ******ppppppuVar39;
  longlong lVar40;
  byte *pbVar41;
  ulonglong *******pppppppuVar42;
  ulonglong *******pppppppuVar43;
  ulonglong uVar44;
  ulonglong *******pppppppuVar45;
  bool bVar46;
  ulonglong *******local_1670;
  undefined8 *puStack_1668;
  undefined8 *local_1660;
  ulonglong *******local_1658;
  ulonglong *******local_1650;
  ulonglong *******local_1648;
  undefined8 local_1640;
  ulonglong *******local_1638;
  undefined8 *puStack_1630;
  undefined8 *puStack_1628;
  ulonglong *******local_1618;
  ulonglong *******pppppppuStack_1610;
  ulonglong *******local_1608;
  ulonglong local_15f8;
  byte *local_15f0;
  longlong local_15e8;
  longlong local_15e0;
  longlong local_15d8;
  ulonglong *******local_15d0;
  ulonglong *******local_15c8;
  ulonglong *******local_15c0;
  ulonglong *******local_15b8;
  ulonglong *******pppppppuStack_15b0;
  undefined8 local_15a8;
  ulonglong *******local_15a0;
  ulonglong *******local_1598;
  ulonglong *******local_1590;
  undefined8 local_1588;
  longlong local_1580;
  undefined8 *local_1578;
  char *local_1570;
  longlong local_1568;
  longlong local_1560;
  char *local_1558;
  longlong local_1550;
  undefined8 uStack_1548;
  undefined8 local_1540;
  undefined8 *local_1538;
  longlong lStack_1530;
  ulonglong local_1528;
  ulonglong ******local_1520;
  longlong local_1518;
  ulonglong *******local_1508;
  ulonglong *******pppppppuStack_1500;
  ulonglong *******local_14f8;
  ulonglong *******local_14e8;
  ulonglong *******pppppppuStack_14e0;
  ulonglong *******local_14d8;
  void *local_14d0;
  longlong local_14c8;
  ulonglong *******local_14c0;
  longlong *local_14b8;
  undefined8 *local_14b0;
  undefined8 *local_14a8;
  ulonglong ******local_14a0;
  longlong local_1498;
  ulonglong ******local_1490;
  undefined8 *local_1488;
  longlong local_1480;
  longlong local_1478;
  longlong local_1470;
  ulonglong *******local_1468;
  ulonglong *******local_1460;
  LPVOID local_1458;
  longlong lStack_1450;
  undefined8 local_1448;
  LPVOID local_1440;
  longlong lStack_1438;
  undefined8 local_1430;
  undefined8 *local_1428;
  longlong local_1420;
  ulonglong local_1418;
  ulonglong *******local_1410;
  ulonglong *******pppppppuStack_1408;
  ulonglong *******local_1400;
  undefined8 uStack_13f8;
  undefined8 local_13f0;
  ulonglong uStack_13e8;
  undefined8 *local_13e0;
  longlong local_13d8;
  ulonglong local_13d0;
  ulonglong *******local_13c0;
  ulonglong *******pppppppuStack_13b8;
  ulonglong *******local_13b0 [2];
  undefined8 local_13a0;
  ulonglong *******local_1398;
  ulonglong *******local_1390;
  longlong local_1388;
  longlong local_1380;
  undefined8 local_1160;
  undefined8 local_1158;
  ulonglong *******local_1150;
  undefined8 local_1148 [73];
  longlong local_f00 [4];
  ulonglong *******local_ee0;
  undefined8 local_ed8 [77];
  ulonglong *******local_c70;
  ulonglong *******pppppppuStack_c68;
  ulonglong *******local_c60;
  longlong alStack_c58 [2];
  longlong local_c48;
  ulonglong *******local_a08;
  ulonglong *******pppppppuStack_a00;
  ulonglong *******local_9f8;
  undefined8 uStack_9f0;
  undefined8 local_9e8;
  undefined8 uStack_9e0;
  undefined8 local_9d0;
  LPVOID local_9c8;
  longlong lStack_9c0;
  undefined8 local_9b8;
  longlong local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  LPVOID local_998;
  longlong lStack_990;
  undefined8 local_988;
  ulonglong *******local_980;
  ulonglong *******pppppppuStack_978;
  ulonglong *******local_970;
  undefined8 *local_968;
  longlong lStack_960;
  ulonglong local_958;
  undefined8 local_7b0 [78];
  ulonglong *******local_540;
  ulonglong *******local_538;
  ulonglong *******local_530;
  longlong local_2f8;
  char *local_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  ulonglong ******local_2c8 [80];
  undefined8 uStack_48;
  
  uStack_48 = 0xec7a570;
  local_1568 = *param_1;
  local_1570 = (char *)param_1[1];
  local_2e8 = param_1[2];
  lStack_2e0 = param_1[3];
  local_2d8 = param_1[4];
  lStack_2d0 = param_1[5];
  local_14b8 = param_1;
  local_2f8 = local_1568;
  local_2f0 = local_1570;
  FUN_0ec3f830(&local_2e8);
  FUN_0ec9e57e();
  if (DAT_0ecc83f8 == 0) {
LAB_0ec7d023:
    FUN_0ec76522(local_1568,local_1570);
    plVar14 = (longlong *)local_14b8[6];
    if (plVar14[3] != 0) {
      FUN_0ec39285((LPVOID)plVar14[4],(undefined8 *)plVar14[5]);
    }
    plVar14[3] = 1;
    plVar14[4] = 0;
    LOCK();
    *plVar14 = *plVar14 + -1;
    UNLOCK();
    if (*plVar14 == 0) {
      FUN_0ec344cd(plVar14);
    }
    return;
  }
  local_14b0 = (undefined8 *)(PTR_FUN_0ecc83e8 + DAT_0ecc83f8 * 0x38);
  puVar11 = (undefined8 *)PTR_FUN_0ecc83e8;
LAB_0ec7a618:
  pbVar31 = (byte *)*puVar11;
  uVar38 = puVar11[2];
  local_14a8 = puVar11;
  FUN_0ec7473d(&local_1428,(undefined8 *)puVar11[4],puVar11[6]);
  local_2c8[0] = (ulonglong ******)0x1acd1991d30476d1;
  local_13c0 = (ulonglong *******)&UNK_0ecb158c;
  pppppppuStack_13b8 = (ulonglong *******)0xf;
  local_13b0[0] = local_2c8;
  if (DAT_0ecc73c0 != 0) {
    FUN_0ecae4d7(0xecc73a8,&local_13c0);
  }
  FUN_0ec7473d(&local_a08,DAT_0ecc73a8,DAT_0ecc73b8);
  local_15f8 = uVar38;
  local_15f0 = pbVar31;
  FUN_0ec4aa4b(&local_13c0,(undefined8 *)pbVar31,uVar38,&local_a08);
  pppppppuVar15 = local_13b0[0];
  pppppppuVar13 = local_13c0;
  local_2c8[0] = (ulonglong ******)0x866dfc4c2f1ba93b;
  local_a08 = (ulonglong *******)&UNK_0ecb5fb6;
  pppppppuStack_a00 = (ulonglong *******)0xf;
  local_9f8 = local_2c8;
  if (DAT_0ecc8150 != 0) {
    FUN_0ecae4d7(0xecc8138,&local_a08);
  }
  FUN_0ec7473d(&local_a08,DAT_0ecc8138,DAT_0ecc8148);
  FUN_0ec4aa4b(&local_13e0,pppppppuVar13,(ulonglong)pppppppuVar15,&local_a08);
  switchD_0ec75e6c::caseD_ec47f80(local_13c0,(longlong)pppppppuStack_13b8,1,1);
  FUN_0ec3a4e0(&local_13c0,local_13e0,local_13d0);
  if ((int)local_13c0 != 2) {
    FUN_0ecacfd0(&local_a08,&local_13c0,0x270);
    if (local_a08 == (ulonglong *******)0x2) goto LAB_0ec7a7bf;
    FUN_0ecacfd0(local_2c8,&local_a08,0x270);
    local_15c8 = (ulonglong *******)0x0;
    local_15d8 = 0;
    local_a08 = (ulonglong *******)0xa370293450c42692;
    local_13c0 = (ulonglong *******)&UNK_0ecb0d80;
    pppppppuStack_13b8 = (ulonglong *******)0x1d;
    local_13b0[0] = (ulonglong *******)&local_a08;
    if (DAT_0ecc6fc0 != 0) {
      FUN_0ecae4d7(0xecc6fa8,&local_13c0);
    }
    FUN_0ec7473d(&local_14d0,DAT_0ecc6fa8,DAT_0ecc6fb8);
    puVar11 = FUN_0ec99abe(0,0x41);
    if (puVar11 == (undefined8 *)0x0) goto LAB_0ec7b760;
    local_1578 = puVar11;
    FUN_0ecacfd0(puVar11,(undefined8 *)&UNK_0ecb68f5,0x41);
    FUN_0ecacfd0(local_7b0,local_2c8,0x270);
    FUN_0ecacfd0(&local_1158,&local_a08,0x4c8);
    local_13c0 = (ulonglong *******)0x0;
    local_1160 = 0;
    while ((int)local_f00[0] != 2) {
LAB_0ec7afb3:
      FUN_0ec3dda5(&local_a08,(int *)local_f00);
      pppppppuVar15 = local_9f8;
      pppppppuVar13 = pppppppuStack_a00;
      if (local_a08 == (ulonglong *******)0x0) {
        if ((int)local_f00[0] != 2) {
          FUN_0ec5b1e8(local_f00);
        }
        local_f00[0] = 2;
        break;
      }
      FUN_0ecacfd0(&local_c70,&uStack_9f0,0x248);
      uVar33 = (uint)pppppppuVar15;
      if (pppppppuVar13 != (ulonglong *******)0x0) {
        pppppppuStack_a00 = pppppppuVar15;
        FUN_0ecacfd0(&local_9f8,&local_c70,0x248);
        local_a08 = pppppppuVar13;
        FUN_0ec7a4bb(&local_540,(longlong *)&local_a08);
        pppppppuVar22 = local_530;
        pppppppuVar15 = local_540;
        pppppppuVar32 = local_530;
        lVar12 = FUN_0ec9e8f2((byte *)local_540,(byte *)local_530);
        if (lVar12 != 0) {
          FUN_0ec9e6b6(&local_c70,lVar12,(ulonglong)pppppppuVar32);
          pppppppuVar21 = local_c60;
          pppppppuVar43 = pppppppuStack_c68;
          pppppppuVar32 = local_14c0;
          if (((((char)local_c70 == '\0') &&
               ((((uStack_9e0 & 0x2000000000000000) == 0 || (uVar33 >> 10 & 1) == 0) &
                (byte)((uVar33 & 0x10) >> 4)) != 0)) &&
              (pppppppuVar35 = (ulonglong *******)((longlong)local_c60 - (longlong)local_14c0),
              local_14c0 <= local_c60)) &&
             (iVar10 = memcmp(local_14d0,pppppppuStack_c68,(size_t)local_14c0), iVar10 == 0)) {
            if (pppppppuVar32 != (ulonglong *******)0x0) {
              if (pppppppuVar32 < pppppppuVar21) {
                if (*(char *)((longlong)pppppppuVar43 + (longlong)pppppppuVar32) < -0x40)
                goto LAB_0ec7b760;
              }
              else if (pppppppuVar21 != pppppppuVar32) goto LAB_0ec7b760;
            }
            puVar11 = (undefined8 *)((longlong)pppppppuVar43 + (longlong)pppppppuVar32);
            pppppppuStack_c68 = (ulonglong *******)CONCAT44(pppppppuStack_c68._4_4_,0x5e);
            pppppppuVar43 = (ulonglong *******)0x0;
            pppppppuVar32 = local_c60;
            local_c70 = pppppppuVar35;
            do {
              puVar30 = (undefined1 *)((longlong)puVar11 + (longlong)pppppppuVar43);
              puVar37 = (undefined1 *)((longlong)pppppppuVar35 - (longlong)pppppppuVar43);
              if (puVar37 < (undefined1 *)0x10) {
                puVar19 = (undefined1 *)0x0;
                if (puVar37 != (undefined1 *)0x0) {
                  do {
                    if (puVar30[(longlong)puVar19] == '^') {
                      uVar38 = 1;
                      puVar30 = puVar19;
                      goto LAB_0ec7bc2b;
                    }
                    puVar19 = puVar19 + 1;
                  } while (puVar19 != puVar37);
                  puVar19 = puVar37;
                }
                uVar38 = 0;
                puVar30 = puVar19;
              }
              else {
                uVar38 = FUN_0ec7607d(0x5e,(longlong)puVar30,(ulonglong)puVar37);
              }
LAB_0ec7bc2b:
              pppppppuVar21 = pppppppuVar35;
              if ((uVar38 & 1) == 0) goto LAB_0ec7bc6f;
              pppppppuVar21 = (ulonglong *******)(puVar30 + (longlong)pppppppuVar43);
              pppppppuVar43 = (ulonglong *******)((longlong)pppppppuVar21 + 1);
              pppppppuVar32 = pppppppuVar43;
              if (((pppppppuVar43 <= pppppppuVar35 && pppppppuVar43 != (ulonglong *******)0x0) &&
                  (*(char *)((longlong)puVar11 + (longlong)pppppppuVar21) == '^')) ||
                 (pppppppuVar21 = pppppppuVar35, pppppppuVar35 < pppppppuVar43)) goto LAB_0ec7bc6f;
            } while( true );
          }
        }
        switchD_0ec75e6c::caseD_ec47f80(pppppppuVar15,(longlong)local_538,1,1);
        LOCK();
        *pppppppuVar13 = (ulonglong ******)((longlong)*pppppppuVar13 - 1);
        ppppppuVar39 = *pppppppuVar13;
        UNLOCK();
        goto LAB_0ec7b0f0;
      }
      if ((1 < (uVar33 & 3) - 2) && (((ulonglong)pppppppuVar15 & 3) != 0)) {
        (**(code **)((longlong)pppppppuVar15 + 7))((undefined1 *)((longlong)pppppppuVar15 + -1));
      }
    }
LAB_0ec7b137:
    FUN_0ec62150((longlong *)&local_13c0);
    if (local_15d8 == 0) {
      switchD_0ec75e6c::caseD_ec47f80(local_1578,0x41,1,1);
      switchD_0ec75e6c::caseD_ec47f80(local_14d0,local_14c8,1,1);
      if (local_15c8 != (ulonglong *******)0x0) {
        pppppppuStack_13b8 = local_15d0;
        local_13b0[0] = local_15c8;
        local_13b0[1] = (ulonglong *******)0x0;
        local_1398 = local_15d0;
        local_1390 = local_15c8;
        local_1388 = 0;
        local_13c0 = (ulonglong *******)0x1;
        local_13a0 = (ulonglong *******)0x1;
        local_1380 = local_15d8;
        FUN_0ec61fca((byte *)&local_13c0);
      }
      goto LAB_0ec7a7c7;
    }
    local_9f8 = (ulonglong *******)0x0;
    local_a08 = (ulonglong *******)0x0;
    pppppppuVar13 = FUN_0ec99abe(0,0x32);
    pbVar31 = local_15f0;
    uVar38 = local_15f8;
    if (pppppppuVar13 == (ulonglong *******)0x0) goto LAB_0ec7b760;
    pppppppuVar13[4] = (ulonglong ******)0x736920736e656b6f;
    pppppppuVar13[5] = (ulonglong ******)0x6973207372657573;
    pppppppuVar13[2] = (ulonglong ******)0x6574617669725020;
    pppppppuVar13[3] = (ulonglong ******)0x5420657461745320;
    *pppppppuVar13 = (ulonglong ******)0x6520736e656b6f54;
    pppppppuVar13[1] = (ulonglong ******)0x6465747375616878;
    *(undefined2 *)(pppppppuVar13 + 6) = 0x6574;
    local_15c0 = (ulonglong *******)0x8e46d12959c43e4e;
    local_c70 = (ulonglong *******)&UNK_0ecb5e28;
    pppppppuStack_c68 = (ulonglong *******)&DAT_0000001c;
    local_c60 = (ulonglong *******)&local_15c0;
    if (DAT_0ecc65b8 != 0) {
      FUN_0ecae4d7(0xecc65a0,&local_c70);
    }
    FUN_0ec7473d(&local_c70,DAT_0ecc65a0,DAT_0ecc65b0);
    FUN_0ec4aa4b(&local_13c0,(undefined8 *)pbVar31,uVar38,&local_c70);
    pppppppuVar15 = local_13c0;
    FUN_0ec986e7(&local_540,(longlong)local_13c0,(ulonglong)local_13b0[0]);
    pppppppuVar43 = local_530;
    pppppppuVar32 = local_538;
    pppppppuVar22 = local_540;
    if (local_538 == (ulonglong *******)0xffffffffffffffff) {
      pppppppuVar32 = pppppppuStack_13b8;
LAB_0ec7acd2:
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar15,(longlong)pppppppuVar32,1,1);
      local_14d8 = local_9f8;
      local_14e8 = local_a08;
      pppppppuStack_14e0 = pppppppuStack_a00;
    }
    else {
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar15,(longlong)pppppppuStack_13b8,1,1);
      FUN_0ec9e6b6(&local_13c0,(longlong)pppppppuVar22,(ulonglong)pppppppuVar43);
      if ((char)local_13c0 != '\0') {
        pppppppuVar15 = pppppppuVar22;
        goto LAB_0ec7acd2;
      }
      local_c70 = (ulonglong *******)0x2e52e406765f1168;
      local_13c0 = (ulonglong *******)&UNK_0ecb0d3c;
      pppppppuStack_13b8 = (ulonglong *******)0xa;
      local_13b0[0] = (ulonglong *******)&local_c70;
      if (DAT_0ecc8bd0 != 0) {
        FUN_0ecae4d7(0xecc8bb8,&local_13c0);
      }
      FUN_0ec7473d(&local_14a0,DAT_0ecc8bb8,DAT_0ecc8bc8);
      pppppppuVar15 = (ulonglong *******)0x0;
LAB_0ec7c51f:
      ppppppuVar6 = local_1490;
      ppppppuVar39 = local_14a0;
      if (pppppppuVar15 != (ulonglong *******)0x0) {
        if (pppppppuVar15 < pppppppuVar43) {
          if (*(char *)((longlong)pppppppuVar22 + (longlong)pppppppuVar15) < -0x40)
          goto LAB_0ec7b760;
        }
        else if (pppppppuVar43 != pppppppuVar15) goto LAB_0ec7b760;
      }
      FUN_0ec36531(&local_13c0,(undefined1 *)((longlong)pppppppuVar22 + (longlong)pppppppuVar15),
                   (longlong)pppppppuVar43 - (longlong)pppppppuVar15,(undefined1 *)local_14a0,
                   (ulonglong)local_1490);
      FUN_0ec416ad((ulonglong *)&local_c70,(longlong *)&local_13c0);
      if ((char)local_c70 != '\0') {
        pppppppuVar21 = (ulonglong *******)((longlong)pppppppuVar15 + (longlong)pppppppuStack_c68);
        pppppppuVar15 = (ulonglong *******)((longlong)ppppppuVar6 + (longlong)pppppppuVar21);
        if (pppppppuVar21 != (ulonglong *******)0x0) {
          if (pppppppuVar43 <= (ulonglong *******)((longlong)pppppppuVar21 + -1)) goto LAB_0ec7b760;
          do {
            pppppppuVar35 = (ulonglong *******)((longlong)pppppppuVar21 + -1);
            bVar8 = ((undefined1 *)((longlong)pppppppuVar22 + -1))[(longlong)pppppppuVar21];
            if ((0x20 < (ulonglong)bVar8) || ((0x100002600U >> ((ulonglong)bVar8 & 0x3f) & 1) == 0))
            {
              if ((bVar8 == 0x7b) && (pppppppuVar35 != pppppppuVar43)) {
                cVar9 = '{';
                lVar40 = 0;
                lVar12 = 0;
                goto LAB_0ec7c565;
              }
              break;
            }
            pppppppuVar21 = pppppppuVar35;
          } while (pppppppuVar35 != (ulonglong *******)0x0);
        }
        goto LAB_0ec7c51f;
      }
      local_14d8 = local_9f8;
      local_14e8 = local_a08;
      pppppppuStack_14e0 = pppppppuStack_a00;
      switchD_0ec75e6c::caseD_ec47f80(ppppppuVar39,local_1498,1,1);
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar22,(longlong)pppppppuVar32,1,1);
    }
    switchD_0ec75e6c::caseD_ec47f80(pppppppuVar13,0x32,1,1);
    local_540 = (ulonglong *******)0xcef6e35c9891d475;
    local_a08 = (ulonglong *******)&UNK_0ecb4143;
    pppppppuStack_a00 = (ulonglong *******)&DAT_00000010;
    local_9f8 = (ulonglong *******)&local_540;
    if (DAT_0ecc7880 != 0) {
      FUN_0ecae4d7(0xecc7868,&local_a08);
    }
    FUN_0ec7473d(&local_a08,DAT_0ecc7868,DAT_0ecc7878);
    FUN_0ec4aa4b(&local_13c0,(undefined8 *)local_15f0,local_15f8,&local_a08);
    pppppppuVar13 = local_13c0;
    FUN_0ec986e7(&local_c70,(longlong)local_13c0,(ulonglong)local_13b0[0]);
    pppppppuVar32 = local_c60;
    pppppppuVar22 = pppppppuStack_c68;
    pppppppuVar15 = local_c70;
    if (pppppppuStack_c68 != (ulonglong *******)0xffffffffffffffff) {
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar13,(longlong)pppppppuStack_13b8,1,1);
      FUN_0ec9e6b6(&local_13c0,(longlong)pppppppuVar15,(ulonglong)pppppppuVar32);
      if ((char)local_13c0 != '\0') {
        pppppppuVar13 = pppppppuVar15;
        goto LAB_0ec7bc0a;
      }
      local_a08 = (ulonglong *******)0x84b2e51a556c8896;
      local_13c0 = (ulonglong *******)&UNK_0ecb3359;
      pppppppuStack_13b8 = (ulonglong *******)0x28;
      local_13b0[0] = (ulonglong *******)&local_a08;
      if (DAT_0ecc9b50 != 0) {
        FUN_0ecae4d7(0xecc9b38,&local_13c0);
      }
      FUN_0ec7473d(&local_15c0,DAT_0ecc9b38,DAT_0ecc9b48);
      pppppppuVar13 = pppppppuStack_15b0;
      local_13c0 = pppppppuVar32;
      pppppppuStack_13b8 = (ulonglong *******)CONCAT44(pppppppuStack_13b8._4_4_,10);
      local_1648 = local_15c0;
      bVar46 = false;
      pppppppuVar21 = (ulonglong *******)0x0;
      pppppppuVar43 = (ulonglong *******)0x0;
      do {
        pppppppuVar35 = pppppppuVar43;
        if (bVar46) goto LAB_0ec7bdb8;
        do {
          pppppppuVar45 = pppppppuVar21;
          if (pppppppuVar32 < pppppppuVar45) {
LAB_0ec7b647:
            bVar46 = true;
            pppppppuVar42 = pppppppuVar32;
            pppppppuVar43 = pppppppuVar35;
            pppppppuVar21 = pppppppuVar45;
            if (pppppppuVar35 == pppppppuVar32) goto LAB_0ec7bdb8;
            goto LAB_0ec7b658;
          }
          puVar30 = (undefined1 *)((longlong)pppppppuVar15 + (longlong)pppppppuVar45);
          puVar37 = (undefined1 *)((longlong)pppppppuVar32 - (longlong)pppppppuVar45);
          if (puVar37 < (undefined1 *)0x10) {
            if (puVar37 == (undefined1 *)0x0) {
              uVar38 = 0;
              puVar30 = (undefined1 *)0x0;
            }
            else {
              puVar19 = (undefined1 *)0x0;
              do {
                if (puVar30[(longlong)puVar19] == '\n') {
                  uVar38 = 1;
                  puVar30 = puVar19;
                  goto LAB_0ec7bb96;
                }
                puVar19 = puVar19 + 1;
              } while (puVar37 != puVar19);
              uVar38 = 0;
              puVar30 = puVar37;
            }
          }
          else {
            uVar38 = FUN_0ec7607d(10,(longlong)puVar30,(ulonglong)puVar37);
          }
LAB_0ec7bb96:
          if ((uVar38 & 1) == 0) {
            pppppppuVar45 = pppppppuVar32;
            goto LAB_0ec7b647;
          }
          pppppppuVar42 = (ulonglong *******)((longlong)pppppppuVar45 + (longlong)(puVar30 + 1));
          pppppppuVar21 = pppppppuVar42;
        } while ((pppppppuVar32 < pppppppuVar42 || pppppppuVar42 == (ulonglong *******)0x0) ||
                (*(char *)((longlong)pppppppuVar45 + (longlong)(puVar30 + (longlong)pppppppuVar15))
                 != '\n'));
        bVar46 = false;
        pppppppuVar43 = pppppppuVar42;
LAB_0ec7b658:
        puVar30 = (undefined1 *)((longlong)pppppppuVar42 - (longlong)pppppppuVar35);
        if ((puVar30 != (undefined1 *)0x0) &&
           (((undefined1 *)((longlong)pppppppuVar15 + -1))[(longlong)pppppppuVar42] == '\n')) {
          puVar37 = puVar30 + -1;
          if (puVar37 == (undefined1 *)0x0) {
            puVar30 = puVar37;
          }
          else {
            puVar30 = puVar30 + -2;
            if (((undefined1 *)((longlong)pppppppuVar15 + -2))[(longlong)pppppppuVar42] != '\r') {
              puVar30 = puVar37;
            }
          }
        }
        puVar37 = (undefined1 *)((longlong)pppppppuVar15 + (longlong)pppppppuVar35);
        uVar38 = FUN_0ec5b8e5((byte *)local_1648,(ulonglong)pppppppuVar13,puVar37,(ulonglong)puVar30
                             );
      } while ((char)uVar38 == '\0');
      FUN_0ec36531(&local_13c0,puVar37,puVar30,(undefined1 *)local_1648,(ulonglong)pppppppuVar13);
      FUN_0ec416ad((ulonglong *)&local_a08,(longlong *)&local_13c0);
      if ((char)local_a08 == '\0') goto LAB_0ec7b760;
      puVar19 = (undefined1 *)((longlong)pppppppuVar13 + (longlong)pppppppuStack_a00);
      if (puVar19 != (undefined1 *)0x0) {
        if (puVar19 < puVar30) {
          if ((char)puVar37[(longlong)puVar19] < -0x40) goto LAB_0ec7b760;
        }
        else if (puVar30 != puVar19) goto LAB_0ec7b760;
      }
      pppppppuVar32 = (ulonglong *******)(puVar37 + (longlong)puVar19);
      pppppppuVar43 = (ulonglong *******)(puVar30 + -(longlong)puVar19);
      pppppppuStack_13b8 = (ulonglong *******)0x0;
      local_13a0 = (ulonglong *******)CONCAT44(0x2c,(undefined4)local_13a0);
      local_13a0 = (ulonglong *******)CONCAT71(local_13a0._1_7_,1);
      local_13c0 = (ulonglong *******)CONCAT44(local_13c0._4_4_,0x2c);
      pppppppuVar13 = (ulonglong *******)0x0;
      local_13b0[0] = pppppppuVar32;
      local_13b0[1] = pppppppuVar43;
      local_1398 = pppppppuVar43;
      do {
        puVar37 = (undefined1 *)((longlong)pppppppuVar43 - (longlong)pppppppuVar13);
        if (puVar37 < (undefined1 *)0x10) {
          if (puVar37 == (undefined1 *)0x0) {
            puVar37 = (undefined1 *)0x0;
          }
          else {
            puVar20 = (undefined1 *)0x0;
            do {
              if (*(char *)((longlong)pppppppuVar13 +
                           (longlong)
                           ((longlong)pppppppuVar15 +
                           (longlong)
                           ((longlong)pppppppuVar35 + (longlong)(puVar20 + (longlong)puVar19)))) ==
                  ',') {
                uVar38 = 1;
                goto LAB_0ec7bd85;
              }
              puVar20 = puVar20 + 1;
            } while (puVar37 != puVar20);
          }
          puVar20 = puVar37;
          uVar38 = 0;
        }
        else {
          puVar20 = (undefined1 *)((longlong)pppppppuVar13 + (longlong)pppppppuVar32);
          uVar38 = FUN_0ec7607d(0x2c,(longlong)puVar20,(ulonglong)puVar37);
        }
LAB_0ec7bd85:
        if ((uVar38 & 1) == 0) break;
        pppppppuVar21 = (ulonglong *******)((longlong)pppppppuVar13 + (longlong)(puVar20 + 1));
        if (((pppppppuVar21 != (ulonglong *******)0x0) && (pppppppuVar21 <= pppppppuVar43)) &&
           (*(char *)((longlong)pppppppuVar13 + (longlong)(puVar20 + (longlong)pppppppuVar32)) ==
            ',')) {
          pppppppuVar45 = (ulonglong *******)((longlong)pppppppuVar43 - (longlong)pppppppuVar21);
          if (pppppppuVar43 < pppppppuVar21 || pppppppuVar45 == (ulonglong *******)0x0) {
            if (pppppppuVar45 != (ulonglong *******)0x0) goto LAB_0ec7b760;
          }
          else if (*(char *)((longlong)pppppppuVar32 + (longlong)pppppppuVar21) < -0x40)
          goto LAB_0ec7b760;
          pppppppuVar32 = (ulonglong *******)((longlong)pppppppuVar32 + (longlong)pppppppuVar21);
          pppppppuStack_13b8 = (ulonglong *******)0x0;
          local_13a0 = (ulonglong *******)CONCAT44(0x22,(undefined4)local_13a0);
          local_13a0 = (ulonglong *******)CONCAT71(local_13a0._1_7_,1);
          local_13c0 = (ulonglong *******)CONCAT44(local_13c0._4_4_,0x22);
          pppppppuVar43 = (ulonglong *******)0x0;
          local_13b0[0] = pppppppuVar32;
          local_13b0[1] = pppppppuVar45;
          local_1398 = pppppppuVar45;
          goto LAB_0ec7c0fb;
        }
        pppppppuVar13 = pppppppuVar21;
      } while (pppppppuVar21 <= pppppppuVar43);
      goto LAB_0ec7bdb8;
    }
    pppppppuVar22 = pppppppuStack_13b8;
LAB_0ec7bc0a:
    ppppppuVar39 = (ulonglong ******)0x1;
    switchD_0ec75e6c::caseD_ec47f80(pppppppuVar13,(longlong)pppppppuVar22,1,1);
    local_1608 = (ulonglong *******)0x0;
    local_1618 = (ulonglong *******)0x0;
    goto LAB_0ec7be06;
  }
  pppppppuStack_a00 = pppppppuStack_13b8;
  local_a08 = (ulonglong *******)0x2;
LAB_0ec7a7bf:
  FUN_0ec4829d((longlong *)&local_a08);
  goto LAB_0ec7a7c7;
LAB_0ec7bc6f:
  local_c60 = pppppppuVar32;
  FUN_0ec371df(&local_14a0,puVar11,(ulonglong)pppppppuVar21);
  FUN_0ec95a9a(&local_c70,(longlong)&local_15d8,&local_14a0);
  if (pppppppuStack_c68 == (ulonglong *******)0xffffffffffffffff) {
    plVar14 = (longlong *)(local_c48 + alStack_c58[0] * 0x18 + 0x108);
  }
  else {
    local_15c0 = (ulonglong *******)&DAT_00000008;
    local_15b8 = (ulonglong *******)0x0;
    pppppppuStack_15b0 = (ulonglong *******)0x0;
    plVar14 = FUN_0ec51bd5(&local_c70,&local_15c0);
  }
  local_1520 = (ulonglong ******)0xc0ca87286260d54c;
  local_c70 = (ulonglong *******)&UNK_0ecb61f9;
  pppppppuStack_c68 = (ulonglong *******)&DAT_00000008;
  local_c60 = &local_1520;
  if (DAT_0ecc93b0 != 0) {
    FUN_0ecae4d7(0xecc9398,&local_c70);
  }
  FUN_0ec7473d(&local_15c0,DAT_0ecc9398,DAT_0ecc93a8);
  FUN_0ec4aa4b(&local_c70,pppppppuVar15,(ulonglong)pppppppuVar22,&local_15c0);
  lVar12 = plVar14[2];
  if (lVar12 == plVar14[1]) {
    FUN_0ec748cf(plVar14);
  }
  lVar40 = *plVar14;
  puVar11 = (undefined8 *)(lVar40 + 0x10 + lVar12 * 0x20);
  *puVar11 = local_c60;
  puVar11[1] = alStack_c58[0];
  puVar11 = (undefined8 *)(lVar40 + lVar12 * 0x20);
  *puVar11 = local_c70;
  puVar11[1] = pppppppuStack_c68;
  plVar14[2] = lVar12 + 1;
  switchD_0ec75e6c::caseD_ec47f80(local_540,(longlong)local_538,1,1);
  LOCK();
  *pppppppuVar13 = (ulonglong ******)((longlong)*pppppppuVar13 - 1);
  ppppppuVar39 = *pppppppuVar13;
  UNLOCK();
LAB_0ec7b0f0:
  if (ppppppuVar39 == (ulonglong ******)0x0) {
    FUN_0ec527f4(pppppppuVar13);
  }
  if ((int)local_f00[0] == 2) goto LAB_0ec7b137;
  goto LAB_0ec7afb3;
LAB_0ec7c565:
  lVar34 = lVar12 + 1;
  if (cVar9 == '{') {
    lVar40 = lVar40 + 1;
  }
  else if ((cVar9 == '}') && (lVar40 = lVar40 + -1, lVar40 == 0)) {
    if (((pppppppuVar43 <= (ulonglong *******)(lVar12 + (longlong)pppppppuVar35)) ||
        (pppppppuVar21 = (ulonglong *******)(lVar12 + (longlong)pppppppuVar21),
        pppppppuVar21 < pppppppuVar35)) ||
       ((pppppppuVar21 < pppppppuVar43 &&
        (*(char *)((longlong)pppppppuVar22 + (longlong)pppppppuVar21) < -0x40)))) goto LAB_0ec7b760;
    local_c70 = (ulonglong *******)0x9e1c2b78ac569869;
    local_13c0 = (ulonglong *******)&UNK_0ecb1afb;
    pppppppuStack_13b8 = (ulonglong *******)&DAT_00000007;
    local_13b0[0] = (ulonglong *******)&local_c70;
    if (DAT_0ecc82c8 != 0) {
      FUN_0ecae4d7(0xecc82b0,&local_13c0);
    }
    FUN_0ec7473d(&local_1670,DAT_0ecc82b0,DAT_0ecc82c0);
    FUN_0ec75cdf(&local_540,(longlong)pppppppuVar35 + (longlong)pppppppuVar22,lVar34,
                 (ulonglong)local_1670,local_1660);
    pppppppuVar42 = local_530;
    pppppppuVar45 = local_538;
    pppppppuVar21 = local_540;
    if (local_538 != (ulonglong *******)0xffffffffffffffff) {
      local_15c0 = (ulonglong *******)0x460b8d44f146e72d;
      local_13c0 = (ulonglong *******)0xecb76c5;
      pppppppuStack_13b8 = (ulonglong *******)0xa;
      local_13b0[0] = (ulonglong *******)&local_15c0;
      local_1648 = pppppppuVar13;
      if (DAT_0ecc92c8 != 0) {
        FUN_0ecae4d7(0xecc92b0,&local_13c0);
      }
      FUN_0ec7473d(&local_c70,DAT_0ecc92b0,DAT_0ecc92c0);
      pppppppuVar13 = local_c70;
      FUN_0ec75cdf(&local_1520,(longlong)((longlong)pppppppuVar35 + (longlong)pppppppuVar22),lVar34,
                   (ulonglong)local_c70,local_c60);
      if (local_1518 == -1) {
        switchD_0ec75e6c::caseD_ec47f80(pppppppuVar13,(longlong)pppppppuStack_c68,1,1);
      }
      else {
        local_15c0 = pppppppuVar21;
        local_15b8 = pppppppuVar45;
        pppppppuStack_15b0 = pppppppuVar42;
        FUN_0ec9dc25(&local_13c0,(longlong *)&local_a08,&local_15c0,&local_1520);
        if (pppppppuStack_13b8 != (ulonglong *******)0xffffffffffffffff) {
          switchD_0ec75e6c::caseD_ec47f80(local_13c0,(longlong)pppppppuStack_13b8,1,1);
        }
        pppppppuVar21 = pppppppuVar13;
        pppppppuVar45 = pppppppuStack_c68;
      }
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar21,(longlong)pppppppuVar45,1,1);
      pppppppuVar13 = local_1648;
    }
    switchD_0ec75e6c::caseD_ec47f80(local_1670,(longlong)puStack_1668,1,1);
    goto LAB_0ec7c51f;
  }
  if ((undefined1 *)((longlong)pppppppuVar21 + (lVar12 - (longlong)pppppppuVar43)) ==
      (undefined1 *)0x0) goto LAB_0ec7c51f;
  cVar9 = ((undefined1 *)((longlong)pppppppuVar21 + (longlong)pppppppuVar22))[lVar12];
  lVar12 = lVar34;
  goto LAB_0ec7c565;
  while( true ) {
    pppppppuVar21 = (ulonglong *******)((longlong)pppppppuVar43 + (longlong)(puVar26 + 1));
    if (((pppppppuVar21 != (ulonglong *******)0x0) && (pppppppuVar21 <= pppppppuVar45)) &&
       (*(char *)((longlong)pppppppuVar43 + (longlong)(puVar26 + (longlong)pppppppuVar32)) == '\"'))
    {
      if (pppppppuVar21 < pppppppuVar45) {
        if (*(char *)((longlong)pppppppuVar32 + (longlong)pppppppuVar21) < -0x40) goto LAB_0ec7b760;
      }
      else if (pppppppuVar45 != pppppppuVar21) goto LAB_0ec7b760;
      pbVar31 = (byte *)((longlong)pppppppuVar32 + (longlong)pppppppuVar21);
      uVar38 = (longlong)pppppppuVar45 - (longlong)pppppppuVar21;
      if (uVar38 != 0) {
        uVar44 = 0;
        goto LAB_0ec7b782;
      }
      uVar44 = 0;
      goto LAB_0ec7b7a0;
    }
    pppppppuVar43 = pppppppuVar21;
    if (pppppppuVar45 < pppppppuVar21) break;
LAB_0ec7c0fb:
    puVar37 = (undefined1 *)((longlong)pppppppuVar45 - (longlong)pppppppuVar43);
    if (puVar37 < (undefined1 *)0x10) {
      if (puVar37 == (undefined1 *)0x0) {
        puVar37 = (undefined1 *)0x0;
      }
      else {
        puVar26 = (undefined1 *)0x0;
        do {
          if (*(char *)((longlong)pppppppuVar43 +
                       (longlong)
                       ((longlong)pppppppuVar13 +
                       (longlong)
                       ((longlong)pppppppuVar15 +
                       (longlong)
                       ((longlong)pppppppuVar35 +
                       (longlong)(puVar26 + (longlong)(puVar20 + (longlong)puVar19 + 1)))))) == '\"'
             ) {
            uVar38 = 1;
            goto LAB_0ec7c04e;
          }
          puVar26 = puVar26 + 1;
        } while (puVar26 !=
                 puVar30 + (((~(ulonglong)puVar19 - (longlong)puVar20) - (longlong)pppppppuVar13) -
                           (longlong)pppppppuVar43));
      }
      uVar38 = 0;
      puVar26 = puVar37;
    }
    else {
      puVar26 = (undefined1 *)((longlong)pppppppuVar43 + (longlong)pppppppuVar32);
      uVar38 = FUN_0ec7607d(0x22,(longlong)puVar26,(ulonglong)puVar37);
    }
LAB_0ec7c04e:
    if ((uVar38 & 1) == 0) break;
  }
LAB_0ec7bdb8:
  local_1608 = (ulonglong *******)0x0;
  local_1618 = (ulonglong *******)0x0;
  switchD_0ec75e6c::caseD_ec47f80(local_1648,(longlong)local_15b8,1,1);
  ppppppuVar39 = (ulonglong ******)0x1;
  switchD_0ec75e6c::caseD_ec47f80(pppppppuVar15,(longlong)pppppppuVar22,1,1);
LAB_0ec7be06:
  local_1580 = 0;
  if (local_15c8 != (ulonglong *******)0x0) {
    local_1580 = local_15d8;
  }
  local_15c0 = (ulonglong *******)(ulonglong)(local_15c8 != (ulonglong *******)0x0);
  local_15b8 = local_15d0;
  pppppppuStack_15b0 = local_15c8;
  local_15a8 = 0;
  local_1598 = local_15d0;
  local_1590 = local_15c8;
  local_1588 = 0;
  local_15a0 = local_15c0;
  while( true ) {
    FUN_0ec96cb4(&local_14a0,(byte *)&local_15c0);
    lVar12 = local_1478;
    puVar11 = local_1488;
    ppppppuVar7 = local_1490;
    ppppppuVar6 = local_14a0;
    if (local_1498 == -1) break;
    local_15e0 = local_1498;
    local_15e8 = local_1480;
    if (local_1608 != (ulonglong *******)0x0) {
      pppppppuVar15 = pppppppuStack_1610;
      pppppppuVar13 = local_1608;
      do {
        uVar38 = (ulonglong)*(ushort *)(pppppppuVar13 + 0x44);
        lVar40 = (ulonglong)((uint)*(ushort *)(pppppppuVar13 + 0x44) * 8) * 3;
        uVar44 = 0xffffffffffffffff;
        pppppppuVar22 = pppppppuVar13;
        do {
          if (lVar40 == 0) goto LAB_0ec7c9cd;
          ppppppuVar27 = pppppppuVar22[2];
          ppppppuVar39 = ppppppuVar27;
          if (ppppppuVar7 < ppppppuVar27) {
            ppppppuVar39 = ppppppuVar7;
          }
          iVar10 = memcmp(ppppppuVar6,*pppppppuVar22,(size_t)ppppppuVar39);
          lVar34 = (longlong)ppppppuVar7 - (longlong)ppppppuVar27;
          if (iVar10 != 0) {
            lVar34 = (longlong)iVar10;
          }
          lVar40 = lVar40 + -0x18;
          uVar44 = uVar44 + 1;
          pppppppuVar22 = pppppppuVar22 + 3;
        } while ((char)((0 < lVar34) - (lVar34 < 0)) == '\x01');
        uVar38 = uVar44;
        if (0 < lVar34 == lVar34 < 0) {
          pppppppuVar13 = pppppppuVar13 + uVar44 * 3 + 0x21;
          ppppppuVar39 = *pppppppuVar13;
          pppppppuVar15 =
               (ulonglong *******)
               FUN_0ec95c06((longlong)pppppppuStack_14e0,local_14d8,ppppppuVar39,
                            (ulonglong)pppppppuVar13[2]);
          goto LAB_0ec7c9e5;
        }
LAB_0ec7c9cd:
        bVar46 = pppppppuVar15 == (ulonglong *******)0x0;
        pppppppuVar15 = (ulonglong *******)((longlong)pppppppuVar15 + -1);
        if (bVar46) break;
        pppppppuVar13 = (ulonglong *******)pppppppuVar13[uVar38 + 0x45];
      } while( true );
    }
    pppppppuVar15 = (ulonglong *******)0x0;
    pppppppuVar13 = (ulonglong *******)0x0;
LAB_0ec7c9e5:
    if (pppppppuVar15 == (ulonglong *******)0x0) {
      pppppppuVar15 = pppppppuVar13;
    }
    if (pppppppuVar15 == (ulonglong *******)0x0) {
      ppppppuVar27 = (ulonglong ******)0x0;
    }
    else {
      ppppppuVar27 = *pppppppuVar15;
      ppppppuVar39 = pppppppuVar15[2];
    }
    if (ppppppuVar27 == (ulonglong ******)0x0) {
      ppppppuVar39 = ppppppuVar7;
      ppppppuVar27 = ppppppuVar6;
    }
    FUN_0ec371df(&local_1538,ppppppuVar27,(ulonglong)ppppppuVar39);
    puVar16 = local_1538;
    cVar9 = FUN_0ec41453(local_1538,local_1528);
    if (cVar9 == '\0') {
      FUN_0ec7621c(&local_13c0,local_15f0,local_15f8);
      pppppppuVar22 = pppppppuStack_13b8;
      pppppppuVar15 = local_13c0;
      FUN_0ec371df(&local_1440,pppppppuStack_13b8,(ulonglong)local_13b0[(uint)local_13c0 & 1]);
      if (pppppppuVar15 != (ulonglong *******)0x0) {
        switchD_0ec75e6c::caseD_ec47f80(pppppppuVar22,(longlong)local_13b0[0],1,1);
      }
      pcVar28 = local_1570;
      local_1560 = FUN_0ec43900(local_1568,(longlong)local_1570);
      local_1558 = pcVar28;
      if ((pppppppuVar13 == (ulonglong *******)0x0) ||
         (FUN_0ec7473d(&local_13c0,*pppppppuVar13,(ulonglong)pppppppuVar13[2]),
         pppppppuStack_13b8 == (ulonglong *******)0xffffffffffffffff)) {
        FUN_0ec7473d(&local_1508,ppppppuVar6,(ulonglong)ppppppuVar7);
      }
      else {
        local_14f8 = local_13b0[0];
        local_1508 = local_13c0;
        pppppppuStack_1500 = pppppppuStack_13b8;
      }
      FUN_0ec7473d(&local_1458,local_1428,local_1418);
      local_1540 = 0;
      local_1550 = 0;
      if (lVar12 == 0) {
        FUN_0ec3eb3f((longlong)puVar11,0);
        switchD_0ec75e6c::caseD_ec47f80(puVar11,local_15e8,8,0x20);
        puVar11 = puVar16;
LAB_0ec7ce28:
        pcVar28 = local_1558;
        lVar12 = local_1560;
        FUN_0ec3a44c(&local_1550);
        switchD_0ec75e6c::caseD_ec47f80(local_1458,lStack_1450,1,1);
        switchD_0ec75e6c::caseD_ec47f80(local_1508,(longlong)pppppppuStack_1500,1,1);
        FUN_0ec76522(lVar12,pcVar28);
        switchD_0ec75e6c::caseD_ec47f80(local_1440,lStack_1438,1,1);
        lVar40 = 1;
        uVar38 = 1;
        lVar12 = lStack_1530;
        goto LAB_0ec7ceb5;
      }
      puVar23 = puVar11 + lVar12 * 4;
      puVar16 = puVar11;
      while( true ) {
        puVar24 = puVar16 + 4;
        if ((ulonglong *******)puVar16[1] == (ulonglong *******)0xffffffffffffffff) break;
        puVar3 = (undefined8 *)*puVar16;
        local_1460 = (ulonglong *******)0x0;
        local_1470 = 0;
        local_1648 = (ulonglong *******)puVar16[1];
        FUN_0ec3a4e0(&local_13c0,puVar3,puVar16[2]);
        if ((int)local_13c0 == 2) {
          pppppppuStack_a00 = pppppppuStack_13b8;
          local_a08 = (ulonglong *******)0x2;
LAB_0ec7cc42:
          FUN_0ec4829d((longlong *)&local_a08);
          pppppppuVar13 = (ulonglong *******)0x2;
        }
        else {
          FUN_0ecacfd0(&local_a08,&local_13c0,0x270);
          pppppppuVar13 = local_a08;
          if (local_a08 == (ulonglong *******)0x2) goto LAB_0ec7cc42;
          FUN_0ecacfd0(&local_c70,&pppppppuStack_a00,0x268);
        }
        FUN_0ecacfd0(local_ed8,&local_c70,0x268);
        local_13c0 = (ulonglong *******)0x2;
        local_1150 = (ulonglong *******)0x2;
        local_ee0 = pppppppuVar13;
LAB_0ec7c37a:
        if (local_1150 == (ulonglong *******)0x2) goto LAB_0ec7c615;
LAB_0ec7c5b7:
        FUN_0ec3dda5(&local_c70,(int *)&local_1150);
        if (local_c70 != (ulonglong *******)0x0) goto LAB_0ec7b45e;
        if ((int)local_1150 != 2) {
          FUN_0ec5b1e8((longlong *)&local_1150);
        }
        local_1150 = (ulonglong *******)0x2;
LAB_0ec7c615:
        pppppppuVar13 = (ulonglong *******)&local_1670;
        if (local_ee0 != (ulonglong *******)0xffffffffffffffff) {
          local_1670 = local_ee0;
          FUN_0ecacfd0(&local_a08,local_ed8,0x268);
          pppppppuVar13 = (ulonglong *******)&local_ee0;
        }
        *pppppppuVar13 = (ulonglong ******)0x2;
        if (local_1670 != (ulonglong *******)0x2) goto LAB_0ec7c599;
        if ((int)local_13c0 != 2) {
          FUN_0ec3dda5(&local_c70,(int *)&local_13c0);
          if (local_c70 != (ulonglong *******)0x0) goto LAB_0ec7b45e;
          if ((int)local_13c0 != 2) {
            FUN_0ec5b1e8((longlong *)&local_13c0);
          }
          local_13c0 = (ulonglong *******)0x2;
        }
        FUN_0ec5a0a5((longlong *)&local_13c0);
        if (local_1460 == (ulonglong *******)0x0) {
          local_1380 = 0;
        }
        else {
          pppppppuStack_13b8 = local_1468;
          local_13b0[0] = local_1460;
          local_13b0[1] = (ulonglong *******)0x0;
          local_1398 = local_1468;
          local_1390 = local_1460;
          local_1388 = 0;
          local_1380 = local_1470;
        }
        local_13c0 = (ulonglong *******)(ulonglong)(local_1460 != (ulonglong *******)0x0);
        local_13a0 = local_13c0;
        while (FUN_0ec96cb4(&local_1410,(byte *)&local_13c0),
              pppppppuStack_1408 != (ulonglong *******)0xffffffffffffffff) {
          local_9e8 = local_13f0;
          uStack_9e0 = uStack_13e8;
          local_9f8 = local_1400;
          uStack_9f0 = uStack_13f8;
          local_a08 = local_1410;
          pppppppuStack_a00 = pppppppuStack_1408;
          FUN_0ec3779f(&local_c70,&local_1550,&local_1410,&uStack_9f0);
          if (pppppppuStack_c68 != (ulonglong *******)0xffffffffffffffff) {
            switchD_0ec75e6c::caseD_ec47f80(local_c70,(longlong)pppppppuStack_c68,1,1);
          }
        }
        FUN_0ec95809((byte *)&local_13c0);
        switchD_0ec75e6c::caseD_ec47f80(puVar3,(longlong)local_1648,1,1);
        puVar16 = puVar24;
        if (puVar24 == puVar23) {
          puVar24 = puVar23;
          break;
        }
      }
      lVar40 = local_1550;
      FUN_0ec3eb3f((longlong)puVar24,(ulonglong)((longlong)puVar23 - (longlong)puVar24) >> 5);
      switchD_0ec75e6c::caseD_ec47f80(puVar11,local_15e8,8,0x20);
      pcVar28 = local_1558;
      lVar12 = local_1560;
      if (lVar40 == 0) {
        puVar11 = local_1538;
        goto LAB_0ec7ce28;
      }
      local_970 = local_14f8;
      local_980 = local_1508;
      pppppppuStack_978 = pppppppuStack_1500;
      local_958 = local_1528;
      local_968 = local_1538;
      lStack_960 = lStack_1530;
      local_9b8 = local_1448;
      local_9c8 = local_1458;
      lStack_9c0 = lStack_1450;
      local_988 = local_1430;
      local_998 = local_1440;
      lStack_990 = lStack_1438;
      local_9a0 = local_1540;
      local_9b0 = local_1550;
      uStack_9a8 = uStack_1548;
      local_9d0 = 0x8000000000000000;
      ANALYST_result_channel(&local_13c0,local_1560,local_1558,&local_a08);
      if (local_1388 != -1) {
        FUN_0ec9d888(&local_13c0);
      }
      FUN_0ec76522(lVar12,pcVar28);
    }
    else {
      switchD_0ec75e6c::caseD_ec47f80(puVar16,lStack_1530,1,1);
      FUN_0ec3eb3f((longlong)puVar11,lVar12);
      uVar38 = 8;
      lVar40 = 0x20;
      lVar12 = local_15e8;
LAB_0ec7ceb5:
      switchD_0ec75e6c::caseD_ec47f80(puVar11,lVar12,uVar38,lVar40);
    }
    ppppppuVar39 = (ulonglong ******)0x1;
    switchD_0ec75e6c::caseD_ec47f80(ppppppuVar6,local_15e0,1,1);
  }
  FUN_0ec61fca((byte *)&local_15c0);
  FUN_0ec98d44((longlong *)&local_1618);
  FUN_0ec98d44((longlong *)&local_14e8);
  switchD_0ec75e6c::caseD_ec47f80(local_1578,0x41,1,1);
  switchD_0ec75e6c::caseD_ec47f80(local_14d0,local_14c8,1,1);
LAB_0ec7a7c7:
  puVar11 = local_14a8 + 7;
  switchD_0ec75e6c::caseD_ec47f80(local_13e0,local_13d8,1,1);
  switchD_0ec75e6c::caseD_ec47f80(local_1428,local_1420,1,1);
  if (puVar11 == local_14b0) goto LAB_0ec7d023;
  goto LAB_0ec7a618;
LAB_0ec7c599:
  local_1150 = local_1670;
  FUN_0ecacfd0(local_1148,&local_a08,0x268);
  goto LAB_0ec7c5b7;
LAB_0ec7b45e:
  pppppppuVar15 = local_c60;
  pppppppuVar13 = pppppppuStack_c68;
  FUN_0ecacfd0(&local_540,alStack_c58,0x248);
  if (pppppppuVar13 == (ulonglong *******)0x0) {
    FUN_0ec5b8b9((longlong *)0x0,(ulonglong)pppppppuVar15);
    goto LAB_0ec7c37a;
  }
  local_a08 = pppppppuVar13;
  pppppppuStack_a00 = pppppppuVar15;
  FUN_0ecacfd0(&local_9f8,&local_540,0x248);
  FUN_0ec7a4bb(&local_c70,(longlong *)&local_a08);
  if (!((byte)((uStack_9e0._7_1_ & 0x20) >> 5 & (byte)((ulonglong)pppppppuVar15 >> 10)) == 0 &&
       ((ulonglong)pppppppuVar15 >> 4 & 1) == 0)) goto LAB_0ec7b4be;
  pppppppuVar15 = local_c60;
  lVar12 = FUN_0ec9e8f2((byte *)local_c70,(byte *)local_c60);
  if (lVar12 == 0) goto LAB_0ec7b4be;
  FUN_0ec9e6b6(&local_1670,lVar12,(ulonglong)pppppppuVar15);
  puVar5 = local_1660;
  puVar16 = puStack_1668;
  if ((char)local_1670 != '\0') goto LAB_0ec7b4be;
  local_1640 = 0x7826f25642ec9ba9;
  local_1638 = (ulonglong *******)&UNK_0ecb3c15;
  puStack_1630 = (undefined8 *)0xf;
  puStack_1628 = &local_1640;
  if (DAT_0ecc8c78 != 0) {
    FUN_0ecae4d7(0xecc8c60,&local_1638);
  }
  FUN_0ec7473d(&local_1670,DAT_0ecc8c60,DAT_0ecc8c70);
  pppppppuVar15 = local_1670;
  if (puVar5 < local_1660) {
    switchD_0ec75e6c::caseD_ec47f80(local_1670,(longlong)puStack_1668,1,1);
LAB_0ec7c74e:
    local_1660 = &local_1640;
    local_1640 = 0xea781d8ce0ad38a2;
    local_1670 = (ulonglong *******)0xecb3cfc;
    puStack_1668 = (undefined8 *)0x15;
    if (DAT_0ecc6e78 != 0) {
      FUN_0ecae4d7(0xecc6e60,&local_1670);
    }
    FUN_0ec7473d(&local_1638,DAT_0ecc6e60,DAT_0ecc6e70);
    pppppppuVar15 = local_1638;
    if (puVar5 < puStack_1628) {
      switchD_0ec75e6c::caseD_ec47f80(local_1638,(longlong)puStack_1630,1,1);
    }
    else {
      iVar10 = memcmp(local_1638,
                      (void *)(((longlong)puVar5 - (longlong)puStack_1628) + (longlong)puVar16),
                      (size_t)puStack_1628);
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar15,(longlong)puStack_1630,1,1);
      if (iVar10 == 0) goto LAB_0ec7c897;
    }
    puStack_1628 = &local_1640;
    local_1640 = 0x53f2d8c63fd9468;
    local_1638 = (ulonglong *******)&UNK_0ecb12b9;
    puStack_1630 = (undefined8 *)0x15;
    if (DAT_0ecc79a8 != 0) {
      FUN_0ecae4d7(0xecc7990,&local_1638);
    }
    FUN_0ec7473d(&local_1670,DAT_0ecc7990,DAT_0ecc79a0);
    pppppppuVar15 = local_1670;
    if (local_1660 <= puVar5) {
      iVar10 = memcmp(local_1670,
                      (void *)((longlong)puVar16 + ((longlong)puVar5 - (longlong)local_1660)),
                      (size_t)local_1660);
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar15,(longlong)puStack_1668,1,1);
      if (iVar10 != 0) goto LAB_0ec7b4be;
      goto LAB_0ec7c897;
    }
  }
  else {
    iVar10 = memcmp(local_1670,
                    (void *)(((longlong)puVar5 - (longlong)local_1660) + (longlong)puVar16),
                    (size_t)local_1660);
    switchD_0ec75e6c::caseD_ec47f80(pppppppuVar15,(longlong)puStack_1668,1,1);
    if (iVar10 != 0) goto LAB_0ec7c74e;
LAB_0ec7c897:
    pppppppuVar22 = local_c60;
    pppppppuVar15 = local_c70;
    FUN_0ec986e7(&local_1520,(longlong)local_c70,(ulonglong)local_c60);
    if (local_1518 == -1) goto LAB_0ec7b4be;
    lVar12 = FUN_0ec9e8f2((byte *)pppppppuVar15,(byte *)pppppppuVar22);
    if (lVar12 == 0) {
LAB_0ec7c939:
      local_1638 = (ulonglong *******)0x1;
      puStack_1630 = (undefined8 *)0x0;
      puStack_1628 = (undefined8 *)0x0;
    }
    else {
      FUN_0ec9e6b6(&local_1670,lVar12,(ulonglong)pppppppuVar22);
      if (((char)local_1670 != '\0') ||
         (FUN_0ec371df(&local_1670,puStack_1668,(ulonglong)local_1660),
         puStack_1668 == (undefined8 *)0xffffffffffffffff)) goto LAB_0ec7c939;
      puStack_1628 = local_1660;
      local_1638 = local_1670;
      puStack_1630 = puStack_1668;
    }
    FUN_0ec3779f(&local_1670,&local_1470,&local_1638,&local_1520);
    if (puStack_1668 == (undefined8 *)0xffffffffffffffff) goto LAB_0ec7b4be;
  }
  switchD_0ec75e6c::caseD_ec47f80(local_1670,(longlong)puStack_1668,1,1);
LAB_0ec7b4be:
  switchD_0ec75e6c::caseD_ec47f80(local_c70,(longlong)pppppppuStack_c68,1,1);
  LOCK();
  *pppppppuVar13 = (ulonglong ******)((longlong)*pppppppuVar13 - 1);
  UNLOCK();
  if (*pppppppuVar13 == (ulonglong ******)0x0) {
    FUN_0ec527f4(pppppppuVar13);
  }
  goto LAB_0ec7c37a;
LAB_0ec7b782:
  do {
    if (pbVar31[uVar44] == 0x5c) {
      uVar1 = uVar44 + 1;
      uVar44 = uVar44 + 2;
      if (uVar38 <= uVar1) {
        uVar44 = uVar1;
      }
    }
    else {
      if (pbVar31[uVar44] == 0x22) break;
      uVar44 = uVar44 + 1;
    }
  } while (uVar44 < uVar38);
LAB_0ec7b7a0:
  if (((uVar38 <= uVar44) || (uVar38 = uVar44, uVar44 == 0)) || (-0x41 < (char)pbVar31[uVar44])) {
    FUN_0ec93b50(&local_a08,uVar38,'\0',1,1);
    if ((char)local_a08 == '\0') {
      local_13c0 = pppppppuStack_a00;
      pppppppuStack_13b8 = local_9f8;
      local_13b0[0] = (ulonglong *******)0x0;
      if (uVar38 == 0) {
LAB_0ec7aa95:
        local_9f8 = (ulonglong *******)0x0;
        local_a08 = (ulonglong *******)0x0;
        local_1608 = (ulonglong *******)0x0;
        local_1618 = (ulonglong *******)0x0;
        pppppppuStack_1610 = pppppppuStack_a00;
        pppppppuVar32 = pppppppuStack_13b8;
        pppppppuVar13 = local_13c0;
      }
      else {
        pbVar41 = pbVar31 + uVar38;
        do {
          pppppppuVar13 = local_13b0[0];
          bVar8 = *pbVar31;
          uVar33 = (uint)bVar8;
          if ((char)bVar8 < '\0') {
            pbVar2 = pbVar31 + 1;
            if (bVar8 < 0xe0) {
              pbVar31 = pbVar31 + 2;
              uVar33 = (uVar33 & 0x1f) << 6 | *pbVar2 & 0x3f;
            }
            else {
              uVar18 = (*pbVar2 & 0x3f) << 6 | pbVar31[2] & 0x3f;
              if (bVar8 < 0xf0) {
                pbVar31 = pbVar31 + 3;
                uVar33 = uVar18 | (uVar33 & 0x1f) << 0xc;
              }
              else {
                pbVar2 = pbVar31 + 3;
                pbVar31 = pbVar31 + 4;
                uVar33 = *pbVar2 & 0x3f | uVar18 << 6 | (uVar33 & 7) << 0x12;
              }
            }
          }
          else {
            pbVar31 = pbVar31 + 1;
          }
          if (uVar33 == 0x5c) {
            if (pbVar31 == pbVar41) {
              if (local_13b0[0] == (ulonglong *******)0x0) goto LAB_0ec7aa95;
              break;
            }
            bVar8 = *pbVar31;
            uVar33 = (uint)bVar8;
            if ((char)bVar8 < '\0') {
              pbVar2 = pbVar31 + 1;
              if (bVar8 < 0xe0) {
                pbVar31 = pbVar31 + 2;
                uVar33 = (uVar33 & 0x1f) << 6 | *pbVar2 & 0x3f;
              }
              else {
                uVar18 = (*pbVar2 & 0x3f) << 6 | pbVar31[2] & 0x3f;
                if (bVar8 < 0xf0) {
                  pbVar31 = pbVar31 + 3;
                  uVar33 = uVar18 | (uVar33 & 0x1f) << 0xc;
                }
                else {
                  pbVar2 = pbVar31 + 3;
                  pbVar31 = pbVar31 + 4;
                  uVar33 = *pbVar2 & 0x3f | uVar18 << 6 | (uVar33 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar31 = pbVar31 + 1;
            }
            FUN_0ec591aa(&local_13c0,1);
            pppppppuVar32 = (ulonglong *******)((longlong)pppppppuVar13 + 1);
            if (uVar33 < 0x6e) {
              if (uVar33 == 0x22) {
                *(undefined1 *)((longlong)local_13c0 + (longlong)pppppppuVar13) = 0x22;
              }
              else if (uVar33 == 0x2f) {
                *(undefined1 *)((longlong)local_13c0 + (longlong)pppppppuVar13) = 0x2f;
              }
              else {
                if (uVar33 != 0x5c) goto LAB_0ec7c2e8;
                *(undefined1 *)((longlong)local_13c0 + (longlong)pppppppuVar13) = 0x5c;
              }
            }
            else if (uVar33 == 0x6e) {
              *(undefined1 *)((longlong)local_13c0 + (longlong)pppppppuVar13) = 10;
            }
            else if (uVar33 == 0x72) {
              *(undefined1 *)((longlong)local_13c0 + (longlong)pppppppuVar13) = 0xd;
            }
            else {
              if (uVar33 != 0x74) {
LAB_0ec7c2e8:
                *(undefined1 *)((longlong)local_13c0 + (longlong)pppppppuVar13) = 0x5c;
                bVar8 = (byte)uVar33;
                local_13b0[0] = pppppppuVar32;
                if (uVar33 < 0x80) {
                  pppppppuVar13 = (ulonglong *******)0x1;
                  FUN_0ec591aa(&local_13c0,1);
                  *(byte *)((longlong)local_13c0 + (longlong)pppppppuVar32) = bVar8;
                }
                else if (uVar33 < 0x800) {
                  pppppppuVar13 = (ulonglong *******)0x2;
                  FUN_0ec591aa(&local_13c0,2);
                  *(byte *)((longlong)local_13c0 + (longlong)pppppppuVar32) =
                       (byte)(uVar33 >> 6) | 0xc0;
                  ((undefined1 *)((longlong)local_13c0 + 1))[(longlong)pppppppuVar32] =
                       bVar8 & 0x3f | 0x80;
                }
                else {
                  FUN_0ec591aa(&local_13c0,4 - (ulonglong)(uVar33 < 0x10000));
                  bVar17 = (byte)(uVar33 >> 6) & 0x3f | 0x80;
                  bVar25 = bVar8 & 0x3f | 0x80;
                  bVar8 = (byte)(uVar33 >> 0xc);
                  if (uVar33 < 0x10000) {
                    *(byte *)((longlong)local_13c0 + (longlong)pppppppuVar32) = bVar8 | 0xe0;
                    ((undefined1 *)((longlong)local_13c0 + 1))[(longlong)pppppppuVar32] = bVar17;
                    ((undefined1 *)((longlong)local_13c0 + 2))[(longlong)pppppppuVar32] = bVar25;
                    pppppppuVar13 = (ulonglong *******)0x3;
                  }
                  else {
                    *(byte *)((longlong)local_13c0 + (longlong)pppppppuVar32) =
                         (byte)(uVar33 >> 0x12) | 0xf0;
                    ((undefined1 *)((longlong)local_13c0 + 1))[(longlong)pppppppuVar32] =
                         bVar8 & 0x3f | 0x80;
                    ((undefined1 *)((longlong)local_13c0 + 2))[(longlong)pppppppuVar32] = bVar17;
                    ((undefined1 *)((longlong)local_13c0 + 3))[(longlong)pppppppuVar32] = bVar25;
                    pppppppuVar13 = (ulonglong *******)0x4;
                  }
                }
                goto LAB_0ec7b355;
              }
              *(undefined1 *)((longlong)local_13c0 + (longlong)pppppppuVar13) = 9;
            }
          }
          else {
            bVar8 = (byte)uVar33;
            if (uVar33 < 0x80) {
              pppppppuVar32 = (ulonglong *******)0x1;
              FUN_0ec591aa(&local_13c0,1);
              *(byte *)((longlong)local_13c0 + (longlong)pppppppuVar13) = bVar8;
            }
            else if (uVar33 < 0x800) {
              pppppppuVar32 = (ulonglong *******)0x2;
              FUN_0ec591aa(&local_13c0,2);
              *(byte *)((longlong)local_13c0 + (longlong)pppppppuVar13) = (byte)(uVar33 >> 6) | 0xc0
              ;
              ((undefined1 *)((longlong)local_13c0 + 1))[(longlong)pppppppuVar13] =
                   bVar8 & 0x3f | 0x80;
            }
            else {
              FUN_0ec591aa(&local_13c0,4 - (ulonglong)(uVar33 < 0x10000));
              bVar8 = bVar8 & 0x3f | 0x80;
              bVar25 = (byte)(uVar33 >> 6) & 0x3f | 0x80;
              bVar17 = (byte)(uVar33 >> 0xc);
              if (uVar33 < 0x10000) {
                *(byte *)((longlong)local_13c0 + (longlong)pppppppuVar13) = bVar17 | 0xe0;
                ((undefined1 *)((longlong)local_13c0 + 1))[(longlong)pppppppuVar13] = bVar25;
                ((undefined1 *)((longlong)local_13c0 + 2))[(longlong)pppppppuVar13] = bVar8;
                pppppppuVar32 = (ulonglong *******)0x3;
              }
              else {
                *(byte *)((longlong)local_13c0 + (longlong)pppppppuVar13) =
                     (byte)(uVar33 >> 0x12) | 0xf0;
                ((undefined1 *)((longlong)local_13c0 + 1))[(longlong)pppppppuVar13] =
                     bVar17 & 0x3f | 0x80;
                ((undefined1 *)((longlong)local_13c0 + 2))[(longlong)pppppppuVar13] = bVar25;
                ((undefined1 *)((longlong)local_13c0 + 3))[(longlong)pppppppuVar13] = bVar8;
                pppppppuVar32 = (ulonglong *******)0x4;
              }
            }
LAB_0ec7b355:
            pppppppuVar32 = (ulonglong *******)((longlong)pppppppuVar13 + (longlong)pppppppuVar32);
          }
          local_13b0[0] = pppppppuVar32;
        } while (pbVar31 != pbVar41);
        pppppppuVar32 = local_13b0[0];
        pppppppuVar13 = local_13c0;
        local_9f8 = (ulonglong *******)0x0;
        local_a08 = (ulonglong *******)0x0;
        pppppppuVar45 = (ulonglong *******)0xffffffffffffffff;
        pppppppuVar21 = (ulonglong *******)0x0;
        pppppppuVar43 = local_1650;
        pppppppuVar35 = local_1658;
        local_1648 = pppppppuStack_13b8;
        do {
          pppppppuVar42 = (ulonglong *******)((longlong)pppppppuVar21 + 1);
          pppppppuVar29 = pppppppuVar42;
          if (*(char *)((longlong)pppppppuVar13 + (longlong)pppppppuVar21) == '\"') {
            for (; pppppppuVar29 < pppppppuVar32;
                pppppppuVar29 = (ulonglong *******)((longlong)pppppppuVar29 + 1)) {
              if (*(char *)((longlong)pppppppuVar13 + (longlong)pppppppuVar29) == '\\') {
                pppppppuVar29 = (ulonglong *******)((longlong)pppppppuVar29 + 1);
                if (pppppppuVar32 <= pppppppuVar29) break;
              }
              else if (*(char *)((longlong)pppppppuVar13 + (longlong)pppppppuVar29) == '\"') break;
            }
            pppppppuVar36 = pppppppuVar29;
            if (pppppppuVar32 <= pppppppuVar29) {
              pppppppuVar36 = pppppppuVar32;
            }
            if ((pppppppuVar36 <= pppppppuVar21) ||
               ((pppppppuVar42 != pppppppuVar32 &&
                ((*(char *)((longlong)pppppppuVar13 + (longlong)pppppppuVar42) < -0x40 ||
                 ((pppppppuVar29 < pppppppuVar32 &&
                  (*(char *)((longlong)pppppppuVar13 + (longlong)pppppppuVar36) < -0x40))))))))
            goto LAB_0ec7b760;
            FUN_0ec371df(&local_540,
                         (undefined8 *)((longlong)pppppppuVar42 + (longlong)pppppppuVar13),
                         (longlong)pppppppuVar36 - (longlong)pppppppuVar42);
            pppppppuVar21 =
                 (ulonglong *******)
                 ((longlong)pppppppuVar29 + (ulonglong)(pppppppuVar29 < pppppppuVar32));
            if (pppppppuVar45 == (ulonglong *******)0xffffffffffffffff) {
              pppppppuVar43 = local_540;
              pppppppuVar35 = local_530;
              pppppppuVar45 = local_538;
            }
            else {
              local_c70 = pppppppuVar43;
              pppppppuStack_c68 = pppppppuVar45;
              local_c60 = pppppppuVar35;
              FUN_0ec9dc25(&local_13c0,(longlong *)&local_a08,&local_540,&local_c70);
              if (pppppppuStack_13b8 != (ulonglong *******)0xffffffffffffffff) {
                switchD_0ec75e6c::caseD_ec47f80(local_13c0,(longlong)pppppppuStack_13b8,1,1);
              }
              pppppppuVar45 = (ulonglong *******)0xffffffffffffffff;
            }
          }
          else {
            pppppppuVar21 = pppppppuVar42;
          }
        } while (pppppppuVar21 < pppppppuVar32);
        local_1608 = local_9f8;
        local_1618 = local_a08;
        pppppppuStack_1610 = pppppppuStack_a00;
        local_1658 = pppppppuVar35;
        local_1650 = pppppppuVar43;
        if (pppppppuVar45 != (ulonglong *******)0xffffffffffffffff) {
          switchD_0ec75e6c::caseD_ec47f80(pppppppuVar43,(longlong)pppppppuVar45,1,1);
        }
        pppppppuVar32 = local_1648;
      }
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar13,(longlong)pppppppuVar32,1,1);
      switchD_0ec75e6c::caseD_ec47f80(local_15c0,(longlong)local_15b8,1,1);
      ppppppuVar39 = (ulonglong ******)0x1;
      switchD_0ec75e6c::caseD_ec47f80(pppppppuVar15,(longlong)pppppppuVar22,1,1);
      goto LAB_0ec7be06;
    }
  }
LAB_0ec7b760:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}

