/* NORMAL INITIALIZATION CONTEXT ONLY; stated TLS/data and valid ABI/owned-object preconditions; specimen bytes unchanged. */

/* WARNING: Switch with 1 destination removed at 0x0ec46bd1 */

void ANALYST_packet_crypto
               (longlong *param_1,undefined8 *param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  undefined4 *puVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  undefined1 (*pauVar22) [32];
  undefined1 (*pauVar23) [32];
  uint uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  longlong unaff_GS_OFFSET;
  undefined8 *puStack_2e0;
  undefined1 (*pauStack_2d0) [32];
  longlong lStack_2a0;
  undefined1 (*pauStack_298) [32];
  undefined1 (*pauStack_290) [32];
  longlong lStack_288;
  undefined8 *puStack_280;
  undefined8 *local_278;
  longlong local_270;
  undefined8 uStack_268;
  undefined1 (*pauStack_260) [32];
  undefined1 (*pauStack_258) [32];
  ulonglong uStack_250;
  undefined1 (*pauStack_248) [32];
  ulonglong uStack_240;
  undefined1 (*pauStack_238) [32];
  undefined8 *puStack_230;
  undefined1 (*pauStack_228) [32];
  longlong lStack_220;
  ulonglong uStack_218;
  longlong lStack_210;
  undefined1 (*local_208 [3]) [32];
  uint local_1f0;
  int local_1ec;
  undefined1 (*apauStack_1e8 [2]) [32];
  longlong alStack_1d8 [3];
  undefined1 (*pauStack_1c0) [32];
  undefined8 *puStack_1b8;
  undefined1 (*pauStack_1b0) [32];
  undefined1 (*pauStack_1a8) [32];
  longlong local_198;
  longlong lStack_190;
  longlong *plStack_188;
  ulonglong uStack_180;
  undefined1 (*pauStack_178) [32];
  longlong *plStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  ulonglong local_158;
  undefined8 *puStack_150;
  undefined1 (*pauStack_148) [32];
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_130;
  uint uStack_124;
  undefined1 (*pauStack_120) [32];
  longlong lStack_118;
  ulonglong uStack_110;
  uint *puStack_108;
  undefined8 uStack_100;
  ulonglong uStack_f8;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  undefined8 local_84;
  uint local_7c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  ANALYST_constant_init();
  local_130 = 0xdf9766699b2d4d4e;
  local_138 = 0x82951181bf66ab5b;
  local_1ec = -0xc;
  lVar8 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  lVar4 = *(longlong *)(lVar8 + 0x2d0);
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar13 = (uint)lVar4;
  iVar18 = -uVar13;
  uVar24 = iVar18 + 0x39ba1d94;
  local_84 = 0x3c6ef372bb67ae85;
  local_7c = uVar24 ^ 0xcf46135d;
  local_1f0 = uVar24 ^ 0xf10c8eeb;
  local_70 = 0x1f83d9ab;
  uVar16 = 0x6a09e6c3 - uVar24;
  local_88 = uVar24;
  local_78 = uVar24 ^ 0x3b07b418;
  local_74 = local_1f0;
  *(undefined4 *)((longlong)&local_c8 + (ulonglong)uVar16) = 0x5be0cd19;
  local_68 = 0;
  uStack_60 = 0;
  FUN_0ec44b79(&local_c8,param_2,
               ((ulonglong)local_1f0 - (ulonglong)(uVar24 ^ 0x3b07b418)) +
               (~*(ulonglong *)(lVar8 + 0x98) - (ulonglong)uVar16) * -0x21a70bfe63f4dc3f);
  FUN_0ec44b79(&local_c8,
               (undefined8 *)
               "Npo7l37quemwb4qweyswi2nz05st1xfrdxbgbz0l3azmeepypvi41v3suzn7vkq0qp4ta2fde5us12wiuwf2r85ilir6q1b2wivk3bti368w3zwfg2kokmw407zq5xl28xqlbupxtys2d8u63ibqevv2vn7g0z1ws1bpgo0vnek3f6rgz633ftxx000lg5p231wefgkx1i2fzdrrisbv3witv2nqf86yvsm3orm"
               ,1);
  FUN_0ec44b79(&local_c8,param_3,param_4);
  FUN_0ec451d5(&local_e8,&local_c8);
  local_198 = local_e8;
  lStack_190 = lStack_e0;
  local_278 = (undefined8 *)0x1;
  local_158 = (ulonglong)(iVar18 + 0xcfb0372d);
  local_270 = 0;
  uStack_268 = 0;
  puVar14 = &UNK_0ecb89b8;
  if (param_4 == local_158) {
    puVar14 = &UNK_0ecb8944;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar14) {
  case 0x735:
    puStack_230 = param_2;
    plStack_188 = param_1;
    uStack_168 = (ulonglong)*(byte *)((longlong)&local_e8 + (ulonglong)(uVar24 ^ 0x6a09e677));
    FUN_0ec591aa(&local_278,param_4 + (param_4 >> 3) + 0x10);
    FUN_0ec76901(local_208);
    FUN_0ec76901(&lStack_2a0);
    puStack_2e0 = FUN_0ec99abe(0,0x1000);
    puVar14 = &UNK_0ecb89c4;
    if (puStack_2e0 == (undefined8 *)0x0) {
      puVar14 = &UNK_0ecb89f8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar14) {
    case 0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    case 0xfffffa9e:
      uStack_180 = (ulonglong)(iVar18 + 0xcfb0373d);
      alStack_1d8[0] = (longlong)local_208[2];
      apauStack_1e8[0] = local_208[0];
      apauStack_1e8[1] = local_208[1];
      uVar24 = -uVar13 + 0xcfb03745;
      uVar9 = (ulonglong)uVar24;
      *(longlong *)((longlong)apauStack_1e8 + uVar9) = lStack_2a0;
      *(undefined1 (**) [32])((longlong)apauStack_1e8 + uVar9 + 8) = pauStack_298;
      plStack_170 = (longlong *)((longlong)apauStack_1e8 + uVar9);
      *(undefined1 (**) [32])((longlong)apauStack_1e8 + uVar9 + 0x10) = pauStack_290;
      puStack_1b8 = puStack_2e0;
      pauStack_1b0 = (undefined1 (*) [32])0x1000;
      uStack_250 = (ulonglong)(-uVar13 + 0xcfb0373d);
      uStack_160 = (ulonglong)(uVar24 + uVar16);
      lStack_220 = CONCAT44(lStack_220._4_4_,4);
      uStack_140 = 2;
    }
LAB_0ec45d44:
    pauStack_148 = (undefined1 (*) [32])param_4;
    pauVar27 = (undefined1 (*) [32])param_4;
    if ((undefined1 (*) [32])0xfff < param_4) {
      pauVar27 = (undefined1 (*) [32])0x1000;
    }
    puStack_150 = (undefined8 *)((longlong)*pauVar27 + (longlong)param_3);
    pauStack_178 = (undefined1 (*) [32])(param_4 - (longlong)pauVar27);
    FUN_0ecad680(apauStack_1e8[0],0xff,
                 *(longlong *)((longlong)apauStack_1e8 + uStack_250) <<
                 (((-0x26 - (char)local_158) + (char)local_1f0 + (char)uStack_250) -
                  (char)uStack_160 & 0x3fU));
    pauStack_1a8 = (undefined1 (*) [32])0x0;
    puVar14 = (undefined4 *)&UNK_0ecb89d4;
    if (pauStack_1b0 == (undefined1 (*) [32])0x0) {
      puVar14 = (undefined4 *)&UNK_0ecb8988;
    }
    pauVar23 = (undefined1 (*) [32])0x0;
    pauStack_2d0 = (undefined1 (*) [32])0x0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar14) {
    case 0x663:
      goto override_jmp_0ec45e00_case_1;
    }
override_jmp_0ec45e00_case_0:
    *(undefined1 *)((longlong)puStack_2e0 + (longlong)pauStack_2d0) = 0;
    pauStack_1a8 = (undefined1 (*) [32])((longlong)*pauStack_2d0 + 1);
    puStack_280 = (undefined8 *)((ulonglong)puStack_280 & 0xffffffff00000000);
    puVar14 = (undefined4 *)&UNK_0ecb8984;
    if (pauVar23 < pauVar27) {
      puVar14 = (undefined4 *)&UNK_0ecb8960;
    }
    uVar9 = 0;
    pauVar22 = pauVar23;
    pauVar28 = pauStack_1a8;
    pauStack_228 = pauStack_2d0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar14) {
    case 0xfffffa5d:
      goto override_jmp_0ec45b39_case_1;
    }
override_jmp_0ec45b39_case_0:
    do {
      pauStack_2d0 = pauVar28;
      puVar14 = (undefined4 *)&UNK_0ecb89ec;
      if (pauVar22 <= (undefined1 (*) [32])(1L << ((byte)lStack_220 & 0x3f))) {
        puVar14 = (undefined4 *)&UNK_0ecb8934;
      }
      uVar16 = (uint)lStack_220;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar14) {
      case 0x646:
        do {
          uVar16 = uVar16 + 1;
          puVar14 = (undefined4 *)&UNK_0ecb89ec;
          if (pauVar22 <= (undefined1 (*) [32])(1L << ((byte)uVar16 & 0x3f))) {
            puVar14 = (undefined4 *)&UNK_0ecb8934;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar14) {
          case 0x7a7:
            goto override_jmp_0ec45a68_case_1;
          }
        } while( true );
      case 0x7a7:
override_jmp_0ec45a68_case_1:
        if (0xb < uVar16) {
          uVar16 = 0xc;
        }
        pauVar23 = (undefined1 (*) [32])(1L << ((byte)(0x10 - uVar16) & 0x3f));
        puVar14 = (undefined4 *)&UNK_0ecb8974;
        if ((undefined1 (*) [32])((longlong)*pauVar22 + (ulonglong)(uVar13 ^ 0xcfb0372e)) <=
            pauVar27) {
          puVar14 = (undefined4 *)&UNK_0ecb89c0;
        }
      }
      uVar24 = (int)uVar9 + 1;
      cVar11 = (char)uVar24;
      uStack_218 = uVar9;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar14) {
      case 0x9e7:
        uVar9 = (longlong)*pauVar23 + (ulonglong)(uVar13 ^ 0xcfb0372f);
        uVar25 = (longlong)pauVar27 - (longlong)pauVar22;
        if (uVar25 <= uVar9) {
          uVar9 = uVar25;
        }
        pauStack_258 = pauVar23;
        pauStack_248 = (undefined1 (*) [32])(ulonglong)(0x10 - uVar16);
        uVar10 = FUN_0ec748fe(param_3,(ulonglong)pauVar27,(ulonglong)pauVar22);
        lVar8 = 0xdc;
        if (uVar10 < *(ulonglong *)((longlong)apauStack_1e8 + uStack_250)) {
          lVar8 = 0x30;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
        case 0x147:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uVar16 = uVar13 + 0x304fc8d7;
        uStack_240 = (ulonglong)uVar16;
        pauStack_238 = pauStack_1c0;
        lStack_210 = *plStack_170;
        pauVar23 = (undefined1 (*) [32])(ulonglong)*(uint *)(*apauStack_1e8[0] + uVar10 * uVar16);
        puVar14 = (undefined4 *)&UNK_0ecb8954;
        if (pauVar23 == (undefined1 (*) [32])0xffffffff) {
          puVar14 = (undefined4 *)&UNK_0ecb898c;
        }
        uVar10 = 0;
        pauStack_260 = (undefined1 (*) [32])0x0;
        uVar20 = 0;
        bVar7 = (byte)pauStack_248;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar14) {
        case 0x42b:
override_jmp_0ec45af0_case_0:
          puVar14 = (undefined4 *)&UNK_0ecb8974;
          if (2 < uVar10) {
            puVar14 = (undefined4 *)&UNK_0ecb89e8;
          }
          break;
        case 0x5a1:
override_jmp_0ec45af0_case_1:
          pauVar28 = (undefined1 (*) [32])((longlong)pauVar22 - (longlong)pauVar23);
          lVar8 = 0xa4;
          if (pauVar23 <= pauVar22 && pauVar28 != (undefined1 (*) [32])0x0) {
            lVar8 = 0x8c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
          case 0xfffff9eb:
                    /* WARNING: Switch is manually overridden */
            switch(pauStack_258 < pauVar28) {
            case false:
              uVar20 = uVar20 + 1;
              uVar17 = (longlong)pauVar27 - (longlong)pauVar23;
              if (pauVar27 < pauVar23) {
                uVar17 = 0;
              }
              puVar14 = (undefined4 *)&UNK_0ecb890c;
              if (uVar17 != 0) {
                puVar14 = (undefined4 *)&UNK_0ecb89f0;
              }
              uVar26 = 0;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar14) {
              case 0xfffffd44:
override_jmp_0ec46a5b_case_0:
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              do {
                puVar14 = (undefined4 *)&UNK_0ecb89c8;
                if (uVar25 == uVar26) {
                  puVar14 = (undefined4 *)&UNK_0ecb8950;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar14) {
                case 0x1b2:
                  goto override_jmp_0ec46350_case_1;
                }
                uVar19 = uVar26;
                    /* WARNING: Switch is manually overridden */
                switch(*(char *)((longlong)param_3 + (longlong)pauVar23 + uVar26) !=
                       *(char *)((longlong)param_3 + (longlong)pauVar22 + uVar26)) {
                case false:
                  lVar8 = 0x98;
                  if (uVar9 - 1 == uVar26) {
                    lVar8 = 0x20;
                  }
                  uVar19 = uVar9;
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
                  case 0x2c4:
                    uVar26 = uVar26 + 1;
                    puVar14 = (undefined4 *)&UNK_0ecb89f0;
                    if (uVar17 == uVar26) {
                      puVar14 = (undefined4 *)&UNK_0ecb890c;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar14) {
                    case 0xfffffd44:
                      goto override_jmp_0ec46a5b_case_0;
                    }
                    break;
                  case 0xfffffc4d:
                    goto override_jmp_0ec45b97_case_0;
                  }
                  break;
                case true:
                  goto override_jmp_0ec45b97_case_0;
                }
              } while( true );
            }
          }
          goto override_jmp_0ec467ae_case_1;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar14) {
        case 0xfffffc16:
          goto override_jmp_0ec469ed_case_0;
        case 0xfffffe41:
override_jmp_0ec46661_case_1:
          iVar18 = (int)pauStack_260;
          FUN_0ec591aa(&puStack_1b8,2);
          *(ushort *)((longlong)puStack_1b8 + (longlong)pauStack_1a8) =
               (ushort)(iVar18 + uVar13 + 0x3050c8d2 << (bVar7 & 0x1f)) | (short)uVar10 - 3U;
          pauStack_258 = (undefined1 (*) [32])((longlong)*pauStack_1a8 + 2);
          pauVar23 = (undefined1 (*) [32])((longlong)*pauVar22 + uVar10);
          puVar14 = (undefined4 *)&UNK_0ecb89d0;
          if (pauVar23 <= pauVar22) {
            puVar14 = (undefined4 *)&UNK_0ecb8978;
          }
          pauStack_1a8 = pauStack_258;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar14) {
          case 0x3b1:
            do {
              pauVar28 = (undefined1 (*) [32])((longlong)*pauVar22 + 1);
              FUN_0ec62055(apauStack_1e8,param_3,(ulonglong)pauVar27,(longlong)pauVar22);
              puVar14 = (undefined4 *)&UNK_0ecb89d0;
              if (pauVar28 == pauVar23) {
                puVar14 = (undefined4 *)&UNK_0ecb8978;
              }
              pauVar22 = pauVar28;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar14) {
              case 0x99d:
                goto override_jmp_0ec460bf_case_1;
              }
            } while( true );
          }
override_jmp_0ec460bf_case_1:
          puStack_280 = (undefined8 *)
                        CONCAT44(puStack_280._4_4_,
                                 (int)CONCAT71(0xecb89,'\x01' << ((byte)uStack_218 & 0x1f) |
                                                       (byte)puStack_280));
                    /* WARNING: Switch is manually overridden */
          pauStack_2d0 = pauStack_258;
          pauVar28 = pauStack_258;
                    /* WARNING: Switch is manually overridden */
          switch(cVar11 == '\b') {
          case true:
            goto override_jmp_0ec45bd5_case_1;
          }
        }
        break;
      case 0xfffffc16:
override_jmp_0ec469ed_case_0:
        FUN_0ec62055(apauStack_1e8,param_3,(ulonglong)pauVar27,(longlong)pauVar22);
        uVar2 = *(undefined1 *)((longlong)param_3 + (longlong)pauVar22);
                    /* WARNING: Switch is manually overridden */
        switch(pauStack_2d0 == pauStack_1b0) {
        case false:
          *(undefined1 *)((longlong)puStack_1b8 + (longlong)pauStack_2d0) = uVar2;
          pauStack_1a8 = (undefined1 (*) [32])((longlong)*pauStack_2d0 + 1);
          pauVar23 = (undefined1 (*) [32])((longlong)*pauVar22 + 1);
          pauStack_2d0 = pauStack_1a8;
          pauVar28 = pauStack_1a8;
                    /* WARNING: Switch is manually overridden */
          switch(cVar11 == '\b') {
          case true:
override_jmp_0ec45bd5_case_1:
            lVar8 = 0xa0;
            if (pauStack_2d0 <= pauStack_228) {
              lVar8 = 0xac;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
            case 0xfffffa11:
              goto override_jmp_0ec45c6a_case_1;
            }
override_jmp_0ec45c6a_case_0:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
          break;
        case true:
          FUN_0ec9ea3b(&puStack_1b8);
          *(undefined1 *)((longlong)puStack_1b8 + (longlong)pauStack_2d0) = uVar2;
          pauStack_1a8 = (undefined1 (*) [32])((longlong)*pauStack_2d0 + 1);
          pauVar23 = (undefined1 (*) [32])((longlong)*pauVar22 + 1);
          pauStack_2d0 = pauStack_1a8;
          pauVar28 = pauStack_1a8;
                    /* WARNING: Switch is manually overridden */
          switch(cVar11 == '\b') {
          case true:
            goto override_jmp_0ec45bd5_case_1;
          }
        }
      }
      puVar14 = (undefined4 *)&UNK_0ecb8960;
      if (pauVar27 <= pauVar23) {
        puVar14 = (undefined4 *)&UNK_0ecb8984;
      }
      uVar9 = (ulonglong)uVar24;
      pauVar22 = pauVar23;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar14) {
      case 0xfffffa5d:
override_jmp_0ec45b39_case_1:
        do {
          pauStack_2d0 = pauVar28;
          lVar8 = 0xac;
          if (pauStack_228 < pauStack_2d0) {
            lVar8 = 0xa0;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
          case 0xfffffa0f:
            goto override_jmp_0ec45c6a_case_0;
          }
override_jmp_0ec45c6a_case_1:
          puVar6 = puStack_1b8;
          *(char *)((longlong)puStack_1b8 + (longlong)pauStack_228) = (char)puStack_280;
                    /* WARNING: Switch is manually overridden */
          switch(pauVar23 < pauVar27) {
          case false:
            puStack_2e0 = puStack_1b8;
            lVar8 = 0x28;
            if (pauVar27 <= pauStack_2d0) {
              lVar8 = 0x50;
            }
            if (pauStack_148 == (undefined1 (*) [32])0x1) {
              lVar8 = 0x28;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
            case 0x477:
              FUN_0ec591aa(&local_278,(ulonglong)(uVar13 + 0x304fc8d5));
              uVar9 = uStack_180;
              lVar8 = *(longlong *)((longlong)local_208 + (uStack_180 - 0x70));
              *(short *)((longlong)local_278 + lVar8) = (short)pauVar27 + -1;
              *(ulonglong *)((longlong)local_208 + (uStack_180 - 0x70)) =
                   (ulonglong)(uVar13 + 0x304fc8d5) + lVar8;
              FUN_0ec591aa(&local_278,(ulonglong)pauVar27);
              lVar8 = *(longlong *)((longlong)local_208 + (uVar9 - 0x70));
              FUN_0ecacfd0((undefined8 *)((longlong)local_278 + lVar8),param_3,(ulonglong)pauVar27);
              uVar25 = (longlong)*pauVar27 + lVar8;
              *(ulonglong *)((longlong)local_208 + (uVar9 - 0x70)) = uVar25;
              puVar14 = (undefined4 *)&UNK_0ecb896c;
              if (pauStack_178 != (undefined1 (*) [32])(ulonglong)(uVar13 ^ 0xcfb0372d)) {
                puVar14 = (undefined4 *)&UNK_0ecb8998;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar14) {
              case 0xffffff30:
                goto override_jmp_0ec45826_case_1;
              }
              break;
            case 0xfffff587:
              FUN_0ec591aa(&local_278,2);
              uVar9 = uStack_180;
              lVar8 = *(longlong *)((longlong)local_208 + (uStack_180 - 0x70));
              *(ushort *)((longlong)local_278 + lVar8) = (short)pauStack_2d0 - 1U | 0x8000;
              *(longlong *)((longlong)local_208 + (uStack_180 - 0x70)) = lVar8 + 2;
              FUN_0ec591aa(&local_278,(ulonglong)pauStack_2d0);
              lVar8 = *(longlong *)((longlong)local_208 + (uVar9 - 0x70));
              FUN_0ecacfd0((undefined8 *)((longlong)local_278 + lVar8),puVar6,
                           (ulonglong)pauStack_2d0);
              uVar25 = (longlong)*pauStack_2d0 + lVar8;
              *(ulonglong *)((longlong)local_208 + (uVar9 - 0x70)) = uVar25;
              puVar14 = (undefined4 *)&UNK_0ecb8998;
              if (pauStack_178 == (undefined1 (*) [32])(ulonglong)(uVar13 ^ 0xcfb0372d)) {
                puVar14 = (undefined4 *)&UNK_0ecb896c;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar14) {
              case 0xffffff30:
override_jmp_0ec45826_case_1:
                switchD_0ec75e6c::caseD_ec47f80(apauStack_1e8[0],(longlong)apauStack_1e8[1],4,4);
                uVar16 = (uVar13 ^ 0xcfb0372d) + 0x20 & 0xffff;
                switchD_0ec75e6c::caseD_ec47f80
                          ((LPVOID)*plStack_170,
                           *(longlong *)((longlong)apauStack_1e8 + (ulonglong)uVar16),4,4);
                switchD_0ec75e6c::caseD_ec47f80(puVar6,(longlong)pauStack_1b0,1,1);
                FUN_0ec39148(apauStack_1e8,puStack_230,&local_198,0);
                FUN_0ec93b50(&lStack_2a0,uVar25 + (uVar16 ^ 0x28),'\0',1,1);
                lVar8 = 0x34;
                if ((byte)lStack_2a0 != '\0') {
                  lVar8 = 0x10;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
                case 0xfffffd95:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                uVar16 = (uVar16 ^ 0x23) & (uint)uStack_168;
                lStack_210 = CONCAT44(lStack_210._4_4_,uVar16);
                lVar8 = (ulonglong)(uVar16 << 4) * 3;
                lStack_118 = *(longlong *)((longlong)&lStack_2a0 + (ulonglong)(uVar13 + 0x304fc8e3))
                ;
                pauStack_120 = pauStack_298;
                uStack_110 = 0;
                uVar16 = 0x18 - (uVar13 + 0x304fc8e3);
                FUN_0ec591aa(&pauStack_120,(ulonglong)uVar16);
                puVar6 = local_278;
                *(undefined1 (**) [32])((longlong)*pauStack_120 + uStack_110) = apauStack_1e8[1];
                uStack_110 = uStack_110 + 8;
                FUN_0ec591aa(&pauStack_120,uVar25);
                uVar9 = uStack_110;
                pauVar27 = pauStack_120;
                FUN_0ecacfd0((undefined8 *)(*pauStack_120 + uStack_110),puVar6,uVar25);
                uVar25 = uVar25 + uVar9;
                pauStack_248 = pauVar27;
                uStack_110 = uVar25;
                FUN_0ec384c5(puStack_230,&local_198,(byte *)pauVar27,uVar25);
                uVar9 = *(ulonglong *)((longlong)&DAT_0ecaf0b8 + lVar8);
                pauStack_238 = *(undefined1 (**) [32])((longlong)&DAT_0ecaf0d0 + lVar8);
                pauVar27 = (undefined1 (*) [32])((longlong)*pauStack_238 + uVar9);
                FUN_0ec93b50(&lStack_2a0,(ulonglong)pauVar27,'\0',1,1);
                    /* WARNING: Switch is manually overridden */
                switch((byte)lStack_2a0 ^ 1) {
                case 0:
override_jmp_0ec46350_case_1:
                    /* WARNING: Does not return */
                  pcVar5 = (code *)invalidInstructionException();
                  (*pcVar5)();
                }
                local_208[0] = pauStack_298;
                local_208[1] = pauStack_290;
                bVar7 = ((byte)*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8
                                  ) + 0x2f0) ^ 0x5b) - (char)uVar16;
                uVar20 = (ulonglong)bVar7;
                *(undefined8 *)((longlong)local_208 + uVar20) = 0;
                uVar10 = (ulonglong)(0xf8000010 - bVar7) + (uVar25 << (0x2b - bVar7 & 0x3f)) &
                         0xffffffff00000000;
                uVar10 = (0x201 - uVar10 & -(ulonglong)((uVar20 ^ 0x1ffffffff0) < uVar25)) + uVar10;
                pauVar23 = pauStack_298;
                if ((uVar10 & 1) != 0) goto override_jmp_0ec4691f_case_0;
                lVar15 = 0x88;
                if (pauVar27 == (undefined1 (*) [32])(ulonglong)(uVar13 + 0x304fc8d3)) {
                  lVar15 = 0xd4;
                }
                pauVar28 = (undefined1 (*) [32])0x0;
                uStack_240 = uVar25;
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_0ecb8908 + lVar15)) {
                case 4:
                  uVar10 = uVar10 >> (0x4dU - (char)lVar4 & 0x3f);
                  break;
                case 0x6c9:
                  goto override_jmp_0ec45f2e_case_1;
                }
                goto LAB_0ec46202;
              }
            }
            param_3 = puStack_150;
            param_4 = (ulonglong)pauStack_178;
            goto LAB_0ec45d44;
          case true:
            puVar14 = (undefined4 *)&UNK_0ecb8988;
            if (pauStack_2d0 != pauStack_1b0) {
              puVar14 = (undefined4 *)&UNK_0ecb89d4;
            }
            puStack_2e0 = puStack_1b8;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar14) {
            case 0x663:
override_jmp_0ec45e00_case_1:
              FUN_0ec9ea3b(&puStack_1b8);
              *(undefined1 *)((longlong)puStack_1b8 + (longlong)pauStack_2d0) = 0;
              pauStack_1a8 = (undefined1 (*) [32])((longlong)*pauStack_2d0 + 1);
              puStack_280 = (undefined8 *)((ulonglong)puStack_280 & 0xffffffff00000000);
              puVar14 = (undefined4 *)&UNK_0ecb8984;
              if (pauVar23 < pauVar27) {
                puVar14 = (undefined4 *)&UNK_0ecb8960;
              }
              break;
            case 0xfffff906:
              goto override_jmp_0ec45e00_case_0;
            }
          }
          uVar9 = 0;
          pauVar22 = pauVar23;
          pauVar28 = pauStack_1a8;
          pauStack_228 = pauStack_2d0;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar14) {
          case 0xfffff85d:
            goto override_jmp_0ec45b39_case_0;
          }
        } while( true );
      }
    } while( true );
  case 0xfffffdfc:
    param_1[1] = -1;
  }
  goto LAB_0ec45ff0;
override_jmp_0ec45b97_case_0:
  puVar14 = (undefined4 *)&UNK_0ecb89b0;
  if (uVar10 < uVar19) {
    puVar14 = (undefined4 *)&UNK_0ecb8948;
  }
  uVar17 = uVar10;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar14) {
  case 0xa4f:
    uVar10 = uVar9;
    uVar17 = uVar19;
    pauStack_260 = pauVar28;
                    /* WARNING: Switch is manually overridden */
    switch(uVar19 != uVar9) {
    case false:
override_jmp_0ec467ae_case_1:
      puVar14 = (undefined4 *)&UNK_0ecb8974;
      if (2 < uVar10) {
        puVar14 = (undefined4 *)&UNK_0ecb89e8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar14) {
      case 0xfffffc16:
        goto override_jmp_0ec469ed_case_0;
      }
      goto override_jmp_0ec46661_case_1;
    }
  }
  uVar10 = uVar17;
  lVar8 = 0;
  if (pauStack_1c0 <= pauVar23) {
    lVar8 = 0x44;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
  case 0x250:
    puVar14 = (undefined4 *)&UNK_0ecb89ac;
    if (uVar20 != -uVar16 - (local_1ec - ((0xcfb03731 - uVar13) + uVar16))) {
      puVar14 = (undefined4 *)&UNK_0ecb8940;
    }
    break;
  case 0xfffffa0f:
    goto override_jmp_0ec45c6a_case_0;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar14) {
  case 0x60f:
    pauVar23 = (undefined1 (*) [32])
               (ulonglong)
               *(uint *)((longlong)pauVar23 * (ulonglong)(0xcfb03731 - uVar13) + lStack_210);
    puVar14 = (undefined4 *)&UNK_0ecb8954;
    if (pauVar23 == (undefined1 (*) [32])0xffffffff) {
      puVar14 = (undefined4 *)&UNK_0ecb898c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar14) {
    case 0x42b:
      goto override_jmp_0ec45af0_case_0;
    }
    goto override_jmp_0ec45af0_case_1;
  }
  goto override_jmp_0ec467ae_case_1;
LAB_0ec46202:
  uVar16 = (int)uVar10 + 1;
  uVar10 = (ulonglong)uVar16;
  FUN_0ec39148(&lStack_2a0,puStack_230,&local_198,uVar16);
  FUN_0ec591aa(local_208,(ulonglong)(uVar13 + 0x304fc8f3));
  pauVar23 = local_208[0];
  lVar15 = *(longlong *)((longlong)local_208 + uVar20);
  plVar1 = (longlong *)((longlong)*local_208[0] + lVar15 + 0x10);
  *plVar1 = (longlong)pauStack_290;
  plVar1[1] = lStack_288;
  plVar1 = (longlong *)((longlong)*local_208[0] + lVar15);
  *plVar1 = lStack_2a0;
  plVar1[1] = (longlong)pauStack_298;
  pauVar28 = (undefined1 (*) [32])(lVar15 + 0x20);
  *(undefined1 (**) [32])((longlong)local_208 + uVar20) = pauVar28;
  puVar14 = (undefined4 *)&UNK_0ecb89dc;
  if (pauVar28 < pauVar27) {
    puVar14 = (undefined4 *)&UNK_0ecb89a4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar14) {
  case 2:
    break;
  case 0x6c9:
    goto override_jmp_0ec45f2e_case_1;
  }
  goto LAB_0ec46202;
code_r0x0ec459df:
                    /* WARNING: Switch is manually overridden */
  switch(*puVar14) {
  case 0xfffffd99:
    goto override_jmp_0ec46b87_case_0;
  }
  goto override_jmp_0ec46b87_case_1;
override_jmp_0ec45f2e_case_1:
  uVar25 = 0x201;
  if (uStack_240 <= 0xcfb0372c - uVar13) {
    uVar25 = uStack_240 << (((char)local_138 - 0x29U ^ (byte)DAT_0ecc83e0) * '\x15' & 0x3f);
  }
  lVar15 = 0x18;
  if ((uVar25 & 1) != 0) {
    lVar15 = 0xb4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecb8908 + lVar15)) {
  case 0xfffffd46:
override_jmp_0ec4691f_case_0:
    switchD_0ec75e6c::caseD_ec47f80(pauVar23,(longlong)local_208[1],1,1);
LAB_0ec45f56:
    plStack_188[1] = -1;
    break;
  case 0xfffffed5:
    FUN_0ec93b50(&lStack_2a0,uStack_240 + 0x40,'\0',1,1);
    lVar15 = 0x54;
    if ((byte)lStack_2a0 != '\0') {
      lVar15 = 0xec;
    }
    pauStack_260 = pauVar23;
    puStack_280 = (undefined8 *)((longlong)*pauStack_238 + (longlong)*pauVar23);
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecb8908 + lVar15)) {
    case 0x1b0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    case 0x871:
      lVar15 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
      lStack_2a0 = *(longlong *)((longlong)&lStack_2a0 + *(longlong *)(lVar15 + 0xa0));
      pauStack_298 = pauStack_290;
      pauStack_290 = (undefined1 (*) [32])0x0;
      uVar3 = *(undefined4 *)((longlong)&DAT_0ecaf0c1 + lVar8);
      uVar24 = (uint)*(longlong *)(lVar15 + 0xa0);
      uStack_f8 = (ulonglong)(uVar24 ^ 0xd);
      pauStack_258 = (undefined1 (*) [32])((longlong)&uStack_100 + (ulonglong)(uVar24 + 8));
      *(undefined1 *)((longlong)&uStack_100 + (ulonglong)(uVar24 + 8) + 4) = (&DAT_0ecaf0c5)[lVar8];
      *(undefined4 *)*pauStack_258 = uVar3;
      cVar11 = (&DAT_0ecaf0c0)[lVar8];
      uVar21 = (uint)(uVar25 >> 0x20) ^ *(uint *)((longlong)&DAT_0ecaf0e0 + lVar8);
      uStack_218 = CONCAT71(uStack_218._1_7_,pauVar28 < pauVar27 || pauVar27 < pauStack_238);
      lStack_220 = (*(ulonglong *)(lVar15 + 0x378) ^ ~*(ulonglong *)(lVar15 + 0xa8)) +
                   0xe5f3f10bf6d75f4;
      uVar24 = uVar24 - 8;
      uVar25 = 0;
      uVar16 = 0xcfb03732 - uVar13;
      puVar14 = (undefined4 *)&UNK_0ecb89cc;
      if (uVar16 != 0) {
        puVar14 = (undefined4 *)&UNK_0ecb8964;
      }
    }
    uStack_250 = CONCAT44(uStack_250._4_4_,
                          uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                          uVar21 << 0x18);
                    /* WARNING: Switch is manually overridden */
    switch(*puVar14) {
    case 0x3f9:
override_jmp_0ec46b87_case_1:
      pauVar27 = pauStack_238;
      uVar10 = uStack_240;
      bVar7 = *(byte *)((longlong)*pauStack_258 + uVar25);
      bVar12 = 8;
      if (bVar7 < 5) {
        bVar12 = bVar7 ^ 4;
      }
                    /* WARNING: Switch is manually overridden */
      switch(bVar12) {
      case 0:
        puVar14 = (undefined4 *)&UNK_0ecb8970;
        if ((char)uStack_218 != '\0') {
          puVar14 = (undefined4 *)&UNK_0ecb899c;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar14) {
        case 0xfffffd97:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        FUN_0ec591aa(&lStack_2a0,uVar9);
        pauVar27 = pauStack_290;
                    /* WARNING: Switch is manually overridden */
        switch((byte)lStack_210 < (byte)lStack_220) {
        case false:
          FUN_0ecacfd0((undefined8 *)((longlong)*pauStack_290 + lStack_2a0),puStack_280,uVar9);
                    /* WARNING: Switch is manually overridden */
        }
        pauStack_290 = (undefined1 (*) [32])((longlong)*pauVar27 + uVar9);
        uVar25 = uVar25 + 1;
        uVar16 = 0xcfb03732 - uVar13;
        puVar14 = (undefined4 *)&UNK_0ecb89cc;
        if (uVar25 != uVar16) {
          puVar14 = (undefined4 *)&UNK_0ecb8964;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar14) {
        case 0xfffffd99:
          goto override_jmp_0ec46b87_case_0;
        }
        goto override_jmp_0ec46b87_case_1;
      default:
        FUN_0ec591aa(&lStack_2a0,uStack_240);
        pauVar27 = pauStack_290;
        if (uVar10 == uVar24) {
          pauStack_290 = (undefined1 (*) [32])((longlong)*pauStack_290 + uVar10);
                    /* WARNING: Switch is manually overridden */
        }
        else {
          FUN_0ecacfd0((undefined8 *)((longlong)*pauStack_290 + lStack_2a0),
                       (undefined8 *)pauStack_248,uVar10);
          pauStack_290 = (undefined1 (*) [32])((longlong)*pauVar27 + uVar10);
                    /* WARNING: Switch is manually overridden */
        }
        break;
      case 4:
        lVar8 = 0x60;
        if (pauVar28 < pauStack_238) {
          lVar8 = 0x14;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecb8908 + lVar8)) {
        case 0x113:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        case 0xfffff802:
          FUN_0ec591aa(&lStack_2a0,(ulonglong)pauStack_238);
          pauVar23 = pauStack_290;
          FUN_0ecacfd0((undefined8 *)((longlong)*pauStack_290 + lStack_2a0),
                       (undefined8 *)pauStack_260,(ulonglong)pauVar27);
          pauStack_290 = (undefined1 (*) [32])((longlong)*pauVar27 + (longlong)*pauVar23);
          uVar25 = uVar25 + 1;
          uVar16 = 0xcfb03732 - uVar13;
          puVar14 = (undefined4 *)&UNK_0ecb89cc;
          if (uVar25 != uVar16) {
            puVar14 = (undefined4 *)&UNK_0ecb8964;
          }
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar14) {
        case 0xfffffd99:
          goto override_jmp_0ec46b87_case_0;
        }
        goto override_jmp_0ec46b87_case_1;
      case 5:
        uVar16 = (uVar16 + uVar24) * ((uVar24 ^ 0xc670) * -0x6355 + uVar24) & 0xffff;
        FUN_0ec591aa(&lStack_2a0,(ulonglong)uVar16);
        plVar1 = (longlong *)((longlong)*pauStack_290 + lStack_2a0);
        *plVar1 = local_198;
        plVar1[1] = lStack_190;
        pauStack_290 = (undefined1 (*) [32])((longlong)*pauStack_290 + (ulonglong)(0x20 - uVar16));
                    /* WARNING: Switch is manually overridden */
        break;
      case 6:
        uVar16 = uVar21;
        if (cVar11 != '\0') {
          uStack_124 = uVar13 ^ 0xcfb036dc;
          puStack_108 = &uStack_124;
          uVar16 = (uint)uStack_250;
        }
        FUN_0ec591aa(&lStack_2a0,(ulonglong)(uVar13 ^ 0xcfb03729));
        *(uint *)((longlong)*pauStack_290 + lStack_2a0) = uVar16;
        pauStack_290 = (undefined1 (*) [32])((longlong)*pauStack_290 + 4);
        uVar25 = uVar25 + 1;
        uVar16 = 0xcfb03732 - uVar13;
        puVar14 = (undefined4 *)&UNK_0ecb8964;
        if (uVar25 == uVar16) {
          puVar14 = (undefined4 *)&UNK_0ecb89cc;
        }
        goto code_r0x0ec459df;
      }
      uVar25 = uVar25 + 1;
      uVar16 = 0xcfb03732 - uVar13;
      puVar14 = (undefined4 *)&UNK_0ecb8964;
      if (uVar25 == uVar16) {
        puVar14 = (undefined4 *)&UNK_0ecb89cc;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar14) {
      case 0xfffffd99:
        goto override_jmp_0ec46b87_case_0;
      }
      goto override_jmp_0ec46b87_case_1;
    }
override_jmp_0ec46b87_case_0:
    pauVar23 = pauStack_290;
    pauVar27 = pauStack_298;
    lVar8 = lStack_2a0;
    switchD_0ec75e6c::caseD_ec47f80(pauStack_260,(longlong)local_208[1],1,1);
    if (pauVar27 == (undefined1 (*) [32])(lVar4 + 0x6d9ff00f304fc8d2)) goto LAB_0ec45f56;
    plStack_188[3] = local_198;
    plStack_188[4] = lStack_190;
    *plStack_188 = lVar8;
    plStack_188[1] = (longlong)pauVar27;
    *(undefined1 (**) [32])((longlong)plStack_188 + (ulonglong)(0xcfb0373d - uVar13)) = pauVar23;
  }
  switchD_0ec75e6c::caseD_ec47f80(pauStack_120,lStack_118,1,1);
LAB_0ec45ff0:
  switchD_0ec75e6c::caseD_ec47f80(local_278,local_270,1,1);
  return;
}

