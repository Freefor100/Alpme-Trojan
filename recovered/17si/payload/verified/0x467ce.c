/* NORMAL INITIALIZATION CONTEXT ONLY; stated TLS/data and valid ABI/owned-object preconditions; specimen bytes unchanged. */

/* WARNING: Switch with 1 destination removed at 0x08fb77f4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ANALYST_packet_crypto
               (longlong *param_1,undefined8 param_2,undefined8 *param_3,ulonglong param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined1 (*pauVar7) [32];
  undefined1 (*pauVar8) [32];
  undefined8 *puVar9;
  byte bVar10;
  ulonglong uVar11;
  undefined4 extraout_var;
  undefined4 *puVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 (*pauVar32) [32];
  ulonglong uVar33;
  longlong unaff_GS_OFFSET;
  undefined8 *puStack_2b0;
  undefined1 (*apauStack_278 [4]) [32];
  longlong lStack_258;
  ulonglong uStack_250;
  undefined8 *apuStack_248 [3];
  undefined8 uStack_230;
  ulonglong uStack_228;
  undefined8 *local_220;
  longlong local_218;
  ulonglong uStack_210;
  ulonglong uStack_208;
  undefined1 (*pauStack_200) [32];
  undefined8 *puStack_1f8;
  undefined8 *puStack_1f0;
  undefined1 (*local_1e8 [4]) [32];
  ulonglong uStack_1c8;
  ulonglong uStack_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  int local_1ac;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong *plStack_198;
  ulonglong *puStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  ulonglong uStack_178;
  undefined8 *puStack_170;
  ulonglong uStack_168;
  ulonglong uStack_160;
  undefined8 uStack_158;
  ulonglong uStack_150;
  ulonglong uStack_148;
  undefined1 (*pauStack_140) [32];
  undefined1 (*pauStack_138) [32];
  ulonglong uStack_130;
  undefined8 local_128;
  undefined1 (*pauStack_120) [32];
  undefined1 (*pauStack_118) [32];
  undefined1 (*pauStack_110) [32];
  byte abStack_100 [4];
  undefined1 auStack_fc [4];
  ulonglong uStack_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  int iStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  longlong lStack_70;
  byte local_68;
  
  uVar33 = param_4;
  ANALYST_constant_init();
  local_128 = 2;
  local_1ac = -0x3e2e1abc;
  local_1b8 = 0x2f;
  lVar19 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  uVar4 = *(undefined8 *)(lVar19 + 0x240);
  local_1b4 = 0x53232a18;
  local_1b0 = 0xb19859bc;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0x6a09e667;
  uStack_a4 = 0xbb67ae85;
  local_a0 = 0xa54ff53a3c6ef372;
  local_98 = 0x510e527f;
  bVar13 = (byte)*(undefined8 *)(lVar19 + 0x2b0) ^ (DAT_0900c3b7 ^ 0x44) + 0x44;
  *(undefined4 *)((longlong)&local_e8 + (ulonglong)bVar13) = 0x9b05688c;
  local_90 = 0x1f83d9ab;
  iStack_8c = (0x53232a18 - (bVar13 ^ 0x5c)) * -0x33dfbe93 + 0x639d449;
  local_88 = 0;
  uStack_80 = 0;
  local_1e8[3] = (undefined1 (*) [32])param_2;
  FUN_08fb92e4((longlong)&local_e8,param_2,0x20);
  FUN_08fb92e4((longlong)&local_e8,&UNK_08ff458b,1);
  uVar18 = param_4;
  FUN_08fb92e4((longlong)&local_e8,param_3,param_4);
  FUN_08fb9ccd(&local_78,&local_e8,uVar18,uVar33);
  local_1a8 = local_78;
  lStack_1a0 = lStack_70;
  local_220 = (undefined8 *)0x1;
  local_218 = 0;
  uStack_210 = 0;
  lVar19 = 0x40;
  if (param_4 == 0) {
    lVar19 = 0xb4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
  case 0x1ed:
    param_1[1] = -1;
                    /* WARNING: Switch is manually overridden */
    break;
  case 0x719:
    uStack_178 = (ulonglong)local_68;
    FUN_08fa5f6a(&local_220,param_4 + (param_4 >> 3) + 0x10);
    FUN_08fd1a38(&pauStack_120);
    FUN_08fd1a38(local_1e8);
    puStack_2b0 = FUN_08fc693d(0,0x1000);
    pauVar32 = local_1e8[1];
                    /* WARNING: Switch is manually overridden */
    switch(puStack_2b0 == (undefined8 *)0x0) {
    case false:
      plStack_198 = param_1;
      apauStack_278[2] = pauStack_110;
      apauStack_278[0] = pauStack_120;
      apauStack_278[1] = pauStack_118;
      uVar6 = (uint)uVar4;
      uVar18 = (ulonglong)(uVar6 + 0x5eb9f80a);
      *(ulonglong *)((longlong)apauStack_278 + uVar18) = (ulonglong)local_1e8[0];
      *(undefined1 (**) [32])((longlong)apauStack_278 + uVar18 + 8) = pauVar32;
      puStack_190 = (ulonglong *)((longlong)apauStack_278 + uVar18);
      *(undefined1 (**) [32])((longlong)apauStack_278 + uVar18 + 0x10) = local_1e8[2];
      apuStack_248[0] = puStack_2b0;
      uVar15 = uVar6 + 0x5eb9f80a ^ 0x20;
      uStack_208 = (ulonglong)uVar15;
      *(ulonglong *)((longlong)apauStack_278 + (ulonglong)uVar15) =
           *(longlong *)
            (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x90
            ) + 0xc65a6fac02670e5dU ^ DAT_0900b6b8;
      uVar18 = (ulonglong)~(uVar15 * -2 + local_1b8);
      uStack_188 = (ulonglong)(uVar6 + 0x5eb9f802);
      uStack_158 = 1;
      break;
    case true:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
LAB_08fb7a6f:
    uStack_160 = param_4;
    uVar33 = param_4;
    if (0xfff < param_4) {
      uVar33 = 0x1000;
    }
    uStack_168 = param_4 - uVar33;
    puStack_170 = (undefined8 *)((longlong)param_3 + uVar33);
    FUN_08feece0(apauStack_278[0],0xff,*(longlong *)((longlong)apauStack_278 + uStack_188) << 2);
    *(undefined8 *)((longlong)apauStack_278 + uVar18) = 0;
    lVar19 = 0x80;
    if (*(longlong *)((longlong)apauStack_278 + uStack_208) != 0) {
      lVar19 = 0xe4;
    }
    uVar26 = 0;
    uVar23 = 0;
    bVar13 = (byte)uVar4;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
    case 0x8be:
      goto override_jmp_08fb7aff_case_1;
    }
override_jmp_08fb7aff_case_0:
    FUN_08fd2908(apuStack_248);
    *(undefined1 *)((longlong)apuStack_248[0] + uVar26) = 0;
    uStack_1c8 = uVar26;
    uVar26 = uVar26 + 1;
    bVar10 = 0;
    puVar12 = (undefined4 *)&UNK_08ffa0d8;
    if (uVar23 < uVar33) {
      puVar12 = (undefined4 *)&UNK_08ffa0ac;
    }
    *(ulonglong *)((longlong)apauStack_278 + uVar18) = uVar26;
    uVar20 = 0;
    uVar24 = uVar23;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar12) {
    case 0x151:
      goto override_jmp_08fb7cfe_case_1;
    }
override_jmp_08fb7cfe_case_0:
    do {
      puVar12 = (undefined4 *)&UNK_08ffa0dc;
      if (0x10 < uVar24) {
        puVar12 = (undefined4 *)&UNK_08ffa0c0;
      }
      uVar15 = 4;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar12) {
      case 0x87e:
override_jmp_08fb73f8_case_1:
        if (0xb < uVar15) {
          uVar15 = 0xc;
        }
        puVar25 = (undefined8 *)(1L << ((byte)(0x10 - uVar15) & 0x3f));
        puVar12 = (undefined4 *)&UNK_08ff9ff4;
        if (uVar24 + 3 <= uVar33) {
          puVar12 = (undefined4 *)&UNK_08ff9fec;
        }
        break;
      case 0xfffffdc1:
        do {
          uVar15 = uVar15 + 1;
          puVar12 = (undefined4 *)&UNK_08ffa0c0;
          if (uVar24 <= (ulonglong)(1L << ((byte)uVar15 & 0x3f))) {
            puVar12 = (undefined4 *)&UNK_08ffa0dc;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar12) {
          case 0x87e:
            goto override_jmp_08fb73f8_case_1;
          }
        } while( true );
      }
      uVar29 = (int)uVar20 + 1;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar12) {
      case 2:
        pauStack_120 = (undefined1 (*) [32])0x47e;
        local_1e8[0] = (undefined1 (*) [32])&pauStack_120;
                    /* WARNING: Switch is manually overridden */
override_jmp_08fb7434_case_0:
        FUN_08fdb7ba((longlong *)apauStack_278,(longlong)param_3,uVar33,uVar24);
        uVar2 = *(undefined1 *)((longlong)param_3 + uVar24);
        puVar12 = (undefined4 *)&UNK_08ffa078;
        if (uVar26 != *(ulonglong *)((longlong)apauStack_278 + uStack_208)) {
          puVar12 = (undefined4 *)&UNK_08ffa004;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar12) {
        case 0xfffffc6c:
          *(undefined1 *)((longlong)apuStack_248[0] + uVar26) = uVar2;
          uVar26 = uVar26 + 1;
          *(ulonglong *)((longlong)apauStack_278 + uVar18) = uVar26;
          uVar23 = uVar24 + 1;
          puVar12 = (undefined4 *)&UNK_08ff9ff0;
          if ((byte)uVar29 != (bVar13 ^ 6)) {
            puVar12 = (undefined4 *)&UNK_08ffa0e8;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar12) {
          case 0xfffffcec:
override_jmp_08fb70b0_case_0:
            lVar19 = 0xf4;
            if (uStack_1c8 < uVar26) {
              lVar19 = 0x50;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
            case 0x705:
override_jmp_08fb7571_case_1:
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            do {
              puVar25 = apuStack_248[0];
              *(byte *)((longlong)apuStack_248[0] + uStack_1c8) = bVar10;
              lVar19 = 0x10;
              if (uVar23 < uVar33) {
                lVar19 = 0x94;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
              case 0x76e:
                puStack_2b0 = apuStack_248[0];
                lVar19 = 0x60;
                if (uVar26 < uVar33) {
                  lVar19 = 0x9c;
                }
                if (uStack_160 == uVar6 + 0x5eb9f7f3) {
                  lVar19 = 0x9c;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
                case 0xfffffe04:
                  FUN_08fa5f6a(&local_220,(ulonglong)(uVar6 ^ 0xa146080c));
                  *(ushort *)((longlong)local_220 + uStack_210) = (short)uVar26 - 1U | 0x8000;
                  uStack_210 = uStack_210 + 2;
                  FUN_08fa5f6a(&local_220,uVar26);
                  puVar17 = (undefined8 *)((longlong)local_220 + uStack_210);
                  param_3 = puVar25;
                  break;
                case 0xfffffe78:
                  FUN_08fa5f6a(&local_220,2);
                  *(short *)((longlong)local_220 + uStack_210) = (short)uVar33 + -1;
                  uStack_210 = uStack_210 + 2;
                  FUN_08fa5f6a(&local_220,uVar33);
                  puVar17 = (undefined8 *)((longlong)local_220 + uStack_210);
                  uVar26 = uVar33;
                }
                uVar33 = uStack_210;
                FUN_08fee630(puVar17,param_3,uVar26);
                uVar33 = uVar33 + uVar26;
                uStack_210 = uVar33;
                puVar12 = (undefined4 *)&UNK_08ffa0b8;
                if (uStack_168 == (0x9faceedeU - (local_1ac + -0x3379f8c8) ^ 0x11550262)) {
                  puVar12 = (undefined4 *)&UNK_08ffa01c;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar12) {
                case 0x709:
                  param_3 = puStack_170;
                  param_4 = uStack_168;
                  goto LAB_08fb7a6f;
                case 0xfffff822:
                  uVar15 = uVar6 + 0x5eb9f7f6;
                  FUN_08fba6b1(apauStack_278[0],(longlong)apauStack_278[1],(ulonglong)uVar15,4);
                  FUN_08fba6b1((LPVOID)*puStack_190,lStack_258,(ulonglong)uVar15,4);
                  FUN_08fba6b1(puVar25,*(longlong *)((longlong)apauStack_278 + uStack_208),1,1);
                  FUN_08fdb325(&pauStack_120,local_1e8[3],&local_1a8,0);
                  FUN_08fcb993(apauStack_278,uVar33 + 8,'\0',1,1);
                  puVar12 = (undefined4 *)&UNK_08ffa0bc;
                  if ((char)apauStack_278[0] != '\0') {
                    puVar12 = (undefined4 *)&UNK_08ffa000;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar12) {
                  case 0xfffff990:
                    lVar19 = (ulonglong)(((uint)uStack_178 & 1) << 4) * 3;
                    pauStack_140 = apauStack_278[1];
                    pauStack_138 = apauStack_278[2];
                    uStack_130 = 0;
                    FUN_08fa5f6a(&pauStack_140,8);
                    puVar25 = local_220;
                    iVar28 = (int)local_128;
                    *(undefined1 (**) [32])((longlong)*pauStack_140 + uStack_130) = pauStack_118;
                    uStack_130 = uStack_130 + 8;
                    FUN_08fa5f6a(&pauStack_140,uVar33);
                    uVar26 = uStack_130;
                    pauVar32 = pauStack_140;
                    FUN_08fee630((undefined8 *)((longlong)*pauStack_140 + uStack_130),puVar25,uVar33
                                );
                    uVar26 = uVar26 + uVar33;
                    pauStack_200 = pauVar32;
                    uStack_130 = uVar26;
                    FUN_08fa9aad(local_1e8[3],&local_1a8,(byte *)pauVar32,uVar26);
                    puStack_1f0 = *(undefined8 **)
                                   ((longlong)&DAT_08ff1748 +
                                   (ulonglong)(-(iVar28 + (3 - uVar15)) ^ 0xffffffe7) + lVar19);
                    uVar18 = *(ulonglong *)((longlong)&DAT_08ff1748 + lVar19);
                    puVar25 = (undefined8 *)(uVar18 + (longlong)puStack_1f0);
                    FUN_08fcb993(apauStack_278,(ulonglong)puVar25,'\0',1,1);
                    lVar16 = 0xac;
                    if ((char)apauStack_278[0] != '\0') {
                      lVar16 = 0x54;
                    }
                    break;
                  case 0xfffffffe:
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_08ff9fec + lVar16)) {
                  case 1099:
                    /* WARNING: Does not return */
                    pcVar5 = (code *)invalidInstructionException();
                    (*pcVar5)();
                  case 0xfffff73b:
                    local_1e8[0] = apauStack_278[1];
                    local_1e8[1] = apauStack_278[2];
                    uVar23 = (ulonglong)(uVar6 + 0x5eb9f802);
                    *(undefined8 *)((longlong)local_1e8 + uVar23) = 0;
                    uStack_228 = 0x1ffffffff0 - uVar23;
                    uVar33 = 0x201;
                    if (uVar26 <= uStack_228) {
                      uVar33 = uVar26 * 0x8000000 + 0xf8000000 & 0xffffffff00000000;
                    }
                  }
                }
                pauVar32 = apauStack_278[1];
                    /* WARNING: Switch is manually overridden */
                switch((byte)uVar33 ^ 1) {
                case 0:
                  goto override_jmp_08fb6bbb_case_0;
                case 1:
                  uStack_230 = CONCAT44(uStack_230._4_4_,uVar6) ^ 0xa146080e;
                  puVar12 = (undefined4 *)&UNK_08ffa038;
                  if (puVar25 == (undefined8 *)(ulonglong)(uVar6 ^ 0xa146080e)) {
                    puVar12 = (undefined4 *)&UNK_08ffa0a8;
                  }
                }
                puVar17 = (undefined8 *)0x0;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar12) {
                case 0x70:
                  uVar33 = uVar33 >> 0x20;
                  break;
                case 0xfffffc22:
                  goto override_jmp_08fb70e6_case_0;
                }
                goto LAB_08fb7489;
              case 0x7a2:
                lVar19 = 0x80;
                if (uVar26 != *(ulonglong *)((longlong)apauStack_278 + uStack_208)) {
                  lVar19 = 0xe4;
                }
                puStack_2b0 = apuStack_248[0];
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
                case 0x815:
                  goto override_jmp_08fb7aff_case_0;
                case 0x8be:
override_jmp_08fb7aff_case_1:
                  *(undefined1 *)((longlong)puStack_2b0 + uVar26) = 0;
                  uStack_1c8 = uVar26;
                  uVar26 = uVar26 + 1;
                  bVar10 = 0;
                  puVar12 = (undefined4 *)&UNK_08ffa0d8;
                  if (uVar23 < uVar33) {
                    puVar12 = (undefined4 *)&UNK_08ffa0ac;
                  }
                }
              }
              *(ulonglong *)((longlong)apauStack_278 + uVar18) = uVar26;
              uVar20 = 0;
              uVar24 = uVar23;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar12) {
              case 0x151:
override_jmp_08fb7cfe_case_1:
                lVar19 = 0x50;
                if (uVar26 <= uStack_1c8) {
                  lVar19 = 0xf4;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
                case 0x705:
                  goto override_jmp_08fb7571_case_1;
                }
                break;
              case 0xffffffda:
                goto override_jmp_08fb7cfe_case_0;
              }
            } while( true );
          }
          break;
        case 0xfffffd19:
          FUN_08fd2908(apuStack_248);
          *(undefined1 *)((longlong)apuStack_248[0] + uVar26) = uVar2;
          uVar26 = uVar26 + 1;
          *(ulonglong *)((longlong)apauStack_278 + uVar18) = uVar26;
          uVar23 = uVar24 + 1;
          puVar12 = (undefined4 *)&UNK_08ff9ff0;
          if ((byte)uVar29 != (bVar13 ^ 6)) {
            puVar12 = (undefined4 *)&UNK_08ffa0e8;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar12) {
          case 0xfffffcec:
            goto override_jmp_08fb70b0_case_0;
          }
        }
        break;
      case 0xfffff6cf:
        pauStack_200 = (undefined1 (*) [32])CONCAT44(pauStack_200._4_4_,uVar29);
        uVar21 = uVar33 - uVar24;
        uVar30 = (longlong)puVar25 + 2;
        if (uVar21 <= uVar30) {
          uVar30 = uVar21;
        }
        puStack_1f0 = puVar25;
        uStack_150 = (ulonglong)(0x10 - uVar15);
        uStack_148 = uVar20;
        uVar15 = FUN_08f8544b((longlong)param_3,uVar33,uVar24);
        puVar12 = (undefined4 *)&UNK_08ffa020;
        if (CONCAT44(extraout_var,uVar15) < *(ulonglong *)((longlong)apauStack_278 + uStack_188)) {
          puVar12 = (undefined4 *)&UNK_08ffa0d4;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar12) {
        case 0x2e4:
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        uStack_228 = uStack_250;
        uStack_230 = *puStack_190;
        uVar15 = *(uint *)((longlong)*apauStack_278[0] +
                          CONCAT44(extraout_var,uVar15) * (ulonglong)(uVar6 ^ 0xa146080a));
        puStack_2b0 = (undefined8 *)0x1;
        uVar29 = uVar6 + 0x5eb9f7f1;
        uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar29);
        lVar19 = 0xc;
        if (uVar15 != uVar29) {
          lVar19 = 0xc4;
        }
        uVar20 = 0;
        puStack_1f8 = (undefined8 *)0x0;
        uVar23 = uVar20;
        uStack_180 = uVar26;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
        case 0xfffffd75:
override_jmp_08fb6ac9_case_0:
          uVar11 = (ulonglong)uVar15;
          puVar12 = (undefined4 *)&UNK_08ff9ff8;
          puVar25 = (undefined8 *)(uVar24 - uVar11);
          if (uVar11 <= uVar24 && puVar25 != (undefined8 *)0x0) {
            puVar12 = (undefined4 *)&UNK_08ffa08c;
          }
          uVar23 = uVar20;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar12) {
          case 0x44d:
            puVar12 = (undefined4 *)&UNK_08ffa084;
            if (puStack_1f0 < puVar25) {
              puVar12 = (undefined4 *)&UNK_08ff9ff8;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar12) {
            case 0xfffff5c3:
              uVar23 = uVar33 - uVar11;
              if (uVar33 < uVar11) {
                uVar23 = 0;
              }
              lVar19 = 0x3c;
              if (uVar23 != 0) {
                lVar19 = 0x58;
              }
              uVar27 = 0;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
              case 0x2b4:
override_jmp_08fb69f5_case_1:
                    /* WARNING: Does not return */
                pcVar5 = (code *)invalidInstructionException();
                (*pcVar5)();
              }
              do {
                puVar12 = (undefined4 *)&UNK_08ffa0c8;
                if (uVar21 == uVar27) {
                  puVar12 = (undefined4 *)&UNK_08ffa054;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar12) {
                case 0x2b4:
                  goto override_jmp_08fb69f5_case_1;
                }
                uVar31 = uVar27;
                    /* WARNING: Switch is manually overridden */
                switch(*(char *)((longlong)param_3 + uVar27 + uVar11) !=
                       *(char *)((longlong)param_3 + uVar27 + uVar24)) {
                case false:
                  puVar12 = (undefined4 *)&UNK_08ffa00c;
                  if (uVar30 - 1 != uVar27) {
                    puVar12 = (undefined4 *)&UNK_08ffa064;
                  }
                  uVar31 = uVar30;
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar12) {
                  case 0x1c2:
                    goto override_jmp_08fb7590_case_0;
                  case 0x4ae:
                    uVar27 = uVar27 + 1;
                    lVar19 = 0x3c;
                    if (uVar23 != uVar27) {
                      lVar19 = 0x58;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
                    case 0x2b4:
                      goto override_jmp_08fb69f5_case_1;
                    }
                  }
                  break;
                case true:
                  goto override_jmp_08fb7590_case_0;
                }
              } while( true );
            }
          }
        case 0x3a:
override_jmp_08fb75bc_case_1:
          lVar19 = 0x48;
          if (2 < uVar23) {
            lVar19 = 0xf8;
          }
        }
        uVar29 = (uint)pauStack_200;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
        case 0x904:
          goto override_jmp_08fb7434_case_0;
        case 0xfffff8f2:
          iVar28 = (int)puStack_1f8;
          bVar14 = (byte)uStack_150;
          FUN_08fa5f6a(apuStack_248,2);
          lVar19 = *(longlong *)((longlong)apauStack_278 + uVar18);
          *(ushort *)((longlong)apuStack_248[0] + lVar19) =
               (ushort)(iVar28 + -1 << (bVar14 & 0x1f)) | (short)uVar23 - 3U;
          uVar26 = lVar19 + 2;
          uVar23 = uVar23 + uVar24;
          lVar19 = 0x24;
          if (uVar23 <= uVar24) {
            lVar19 = 0x90;
          }
          *(ulonglong *)((longlong)apauStack_278 + uVar18) = uVar26;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
          case 0x10a:
            do {
              FUN_08fdb7ba((longlong *)apauStack_278,(longlong)param_3,uVar33,uVar24);
              puVar12 = (undefined4 *)&UNK_08ffa010;
              if (uVar24 + 1 == uVar23) {
                puVar12 = (undefined4 *)&UNK_08ffa07c;
              }
              uVar24 = uVar24 + 1;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar12) {
              case 0x3b3:
                goto override_jmp_08fb6d8a_case_1;
              }
            } while( true );
          case 0x3b3:
override_jmp_08fb6d8a_case_1:
            bVar10 = '\x01' << ((byte)uStack_148 & 0x1f) | bVar10;
            puVar12 = (undefined4 *)&UNK_08ffa0e8;
                    /* WARNING: Switch is manually overridden */
            if ((byte)pauStack_200 == (bVar13 ^ 6)) {
              puVar12 = (undefined4 *)&UNK_08ff9ff0;
            }
          }
          uVar29 = (uint)pauStack_200;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar12) {
          case 0xfffffcec:
            goto override_jmp_08fb70b0_case_0;
          }
        }
      }
      puVar12 = (undefined4 *)&UNK_08ffa0d8;
      if (uVar23 < uVar33) {
        puVar12 = (undefined4 *)&UNK_08ffa0ac;
      }
      uVar20 = (ulonglong)uVar29;
      uVar24 = uVar23;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar12) {
      case 0x151:
        goto override_jmp_08fb7cfe_case_1;
      }
    } while( true );
  }
override_jmp_08fb7606_case_0:
  FUN_08fba6b1(local_220,local_218,1,1);
  return;
override_jmp_08fb7590_case_0:
  lVar19 = 0xa8;
  if (uVar31 <= uVar20) {
    lVar19 = 100;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
  case 0x197:
    puVar12 = (undefined4 *)&UNK_08ffa050;
    if (uVar31 == uVar30) {
      puVar12 = (undefined4 *)&UNK_08ff9ff8;
    }
    uVar20 = uVar31;
    uVar23 = uVar30;
    puStack_1f8 = puVar25;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar12) {
    case 0x3a:
      goto override_jmp_08fb75bc_case_1;
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(uVar11 < uStack_250) {
  case false:
    goto override_jmp_08fb69bd_case_0;
  case true:
    lVar19 = 0xc;
    if (puStack_2b0 != (undefined8 *)(ulonglong)(uVar6 ^ 0xa146081e)) {
      lVar19 = 0x5c;
    }
  }
  uVar23 = uVar20;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
  case 0x3a:
    goto override_jmp_08fb75bc_case_1;
  case 0xffffffa3:
    uVar15 = *(uint *)(uStack_230 + uVar11 * 4);
    puStack_2b0 = (undefined8 *)((longlong)puStack_2b0 + 1);
    lVar19 = 0xc4;
    if (uVar15 == uVar29) {
      lVar19 = 0xc;
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
  case 0x3a:
    goto override_jmp_08fb75bc_case_1;
  }
  goto override_jmp_08fb6ac9_case_0;
LAB_08fb7489:
  uVar33 = (ulonglong)((int)uVar33 + 1);
  FUN_08fdb325(apauStack_278,local_1e8[3],&local_1a8,uVar33);
  FUN_08fa5f6a(local_1e8,0x20);
  pauVar32 = local_1e8[0];
  lVar16 = *(longlong *)((longlong)local_1e8 + uVar23);
  plVar1 = (longlong *)((longlong)*local_1e8[0] + lVar16);
  *plVar1 = (longlong)apauStack_278[0];
  plVar1[1] = (longlong)apauStack_278[1];
  puVar17 = (undefined8 *)((longlong)*local_1e8[0] + lVar16 + 0x10);
  *puVar17 = apauStack_278[2];
  puVar17[1] = apauStack_278[3];
  puVar17 = (undefined8 *)(lVar16 + 0x20);
  *(undefined8 **)((longlong)local_1e8 + uVar23) = puVar17;
  lVar16 = 0xbc;
  if (puVar17 < puVar25) {
    lVar16 = 0xd8;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ff9fec + lVar16)) {
  case 0x6e:
    break;
  case 0xfffffc22:
    goto override_jmp_08fb70e6_case_0;
  }
  goto LAB_08fb7489;
override_jmp_08fb70e6_case_0:
  uVar33 = 0x201;
  if (uVar26 >> 0x20 == 0) {
    uVar33 = uVar26 << 0x20;
  }
  lVar16 = 0xa4;
  if ((char)uVar33 != '\0') {
    lVar16 = 0x44;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ff9fec + lVar16)) {
  case 0x7cb:
    FUN_08fcb993(apauStack_278,uVar26 + 0x40,'\0',1,1);
    puVar9 = puStack_1f0;
    lVar16 = 0x28;
    if ((char)apauStack_278[0] != '\0') {
      lVar16 = 0xe0;
    }
    puStack_1f8 = (undefined8 *)((longlong)*pauVar32 + (longlong)puStack_1f0);
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ff9fec + lVar16)) {
    case 0:
override_jmp_08fb69bd_case_0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    case 0xfffffae5:
      apauStack_278[0] = apauStack_278[1];
      apauStack_278[1] = apauStack_278[2];
      uVar29 = ((uint)*(undefined8 *)
                       (*(longlong *)
                         (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x278
                       ) ^ (_DAT_0900c380 - 0x672e ^ (uint)uStack_230) - (int)uStack_228) & 0xffff;
      uVar23 = (ulonglong)uVar29;
      *(undefined8 *)((longlong)apauStack_278 + uVar23) = 0;
      uVar3 = *(undefined4 *)((longlong)&DAT_08ff1751 + lVar19);
      uStack_f8 = (ulonglong)(uVar29 ^ 0x15);
      auStack_fc[uVar29] = (&DAT_08ff1755)[lVar19];
      uVar22 = (uint)(uVar33 >> (bVar13 + 0x12 & 0x3f)) ^ *(uint *)(&UNK_08ff1770 + lVar19);
      uVar15 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 | uVar22 << 0x18;
      if ((&DAT_08ff1750)[lVar19] == '\0') {
        uVar15 = uVar22;
      }
    }
    uStack_228 = CONCAT44(uStack_228._4_4_,uVar15);
    *(undefined4 *)(abStack_100 + uVar29) = uVar3;
    uStack_230 = CONCAT71(uStack_230._1_7_,puVar17 < puVar25 || puVar25 < puVar9);
    uStack_1c0 = (ulonglong)(0x10 - uVar29);
    uVar33 = 0;
    lVar19 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(uVar6 != 0xa146080b) {
    case true:
override_jmp_08fb6fdc_case_1:
      do {
        puVar25 = puStack_1f0;
        bVar13 = (abStack_100 + uVar29)[uVar33];
        bVar10 = 8;
        if (bVar13 < 5) {
          bVar10 = bVar13 ^ 7;
        }
                    /* WARNING: Switch is manually overridden */
        switch(bVar10) {
        default:
          FUN_08fa5f6a(apauStack_278,uVar26);
          lVar19 = *(longlong *)((longlong)apauStack_278 + uVar23);
          if (uVar26 != uStack_1c0) {
            FUN_08fee630((undefined8 *)((longlong)*apauStack_278[0] + lVar19),
                         (undefined8 *)pauStack_200,uVar26);
                    /* WARNING: Switch is manually overridden */
          }
          lVar19 = lVar19 + uVar26;
          break;
        case 3:
          lVar19 = 0x38;
          if ((char)uStack_230 != '\0') {
            lVar19 = 0x70;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
          case 0x243:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          case 0x362:
            FUN_08fa5f6a(apauStack_278,uVar18);
            lVar19 = *(longlong *)((longlong)apauStack_278 + uVar23);
            FUN_08fee630((undefined8 *)((longlong)*apauStack_278[0] + lVar19),puStack_1f8,uVar18);
            lVar19 = lVar19 + uVar18;
          }
          break;
        case 5:
          FUN_08fa5f6a(apauStack_278,4);
          lVar19 = *(longlong *)((longlong)apauStack_278 + uVar23);
          *(int *)((longlong)*apauStack_278[0] + lVar19) = (int)uStack_228;
          lVar19 = lVar19 + 4;
          break;
        case 6:
          goto override_jmp_08fb7924_case_0;
        case 7:
          lVar19 = 0x2c;
          if (puVar17 < puStack_1f0) {
            lVar19 = 0x74;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ff9fec + lVar19)) {
          case 0x2b6:
            FUN_08fa5f6a(apauStack_278,(ulonglong)puStack_1f0);
            lVar19 = *(longlong *)((longlong)apauStack_278 + uVar23);
            FUN_08fee630((undefined8 *)((longlong)*apauStack_278[0] + lVar19),(undefined8 *)pauVar32
                         ,(ulonglong)puVar25);
            lVar19 = lVar19 + (longlong)puVar25;
            break;
          case 0x707:
                    /* WARNING: Does not return */
            pcVar5 = (code *)invalidInstructionException();
            (*pcVar5)();
          }
        }
        *(longlong *)((longlong)apauStack_278 + uVar23) = lVar19;
        uVar33 = uVar33 + 1;
                    /* WARNING: Switch is manually overridden */
        switch(uVar33 != (uVar6 ^ 0xa146080b)) {
        case false:
          goto override_jmp_08fb6fdc_case_0;
        }
      } while( true );
    }
override_jmp_08fb6fdc_case_0:
    pauVar8 = apauStack_278[1];
    pauVar7 = apauStack_278[0];
    FUN_08fba6b1(pauVar32,(longlong)local_1e8[1],1,1);
                    /* WARNING: Switch is manually overridden */
    switch(pauVar8 != (undefined1 (*) [32])0xffffffffffffffff) {
    case true:
      plStack_198[3] = local_1a8;
      plStack_198[4] = lStack_1a0;
      *plStack_198 = (longlong)pauVar7;
      plStack_198[1] = (longlong)pauVar8;
      *(longlong *)((longlong)plStack_198 + (ulonglong)(uVar6 ^ 0xa146081e)) = lVar19;
      FUN_08fba6b1(pauStack_140,(longlong)pauStack_138,1,1);
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_08fb7606_case_0;
    }
    break;
  case 0xfffffbe2:
override_jmp_08fb6bbb_case_0:
    FUN_08fba6b1(pauVar32,(longlong)local_1e8[1],1,1);
                    /* WARNING: Switch is manually overridden */
  }
  plStack_198[1] = -1;
  FUN_08fba6b1(pauStack_140,(longlong)pauStack_138,1,1);
  goto override_jmp_08fb7606_case_0;
override_jmp_08fb7924_case_0:
  FUN_08fa5f6a(apauStack_278,0x10);
  lVar19 = *(longlong *)((longlong)apauStack_278 + uVar23);
  plVar1 = (longlong *)((longlong)*apauStack_278[0] + lVar19);
  *plVar1 = local_1a8;
  plVar1[1] = lStack_1a0;
  lVar19 = lVar19 + 0x10;
  *(longlong *)((longlong)apauStack_278 + uVar23) = lVar19;
  uVar33 = uVar33 + 1;
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
  switch(uVar33 != (uVar6 ^ 0xa146080b)) {
  case false:
    goto override_jmp_08fb6fdc_case_0;
  }
  goto override_jmp_08fb6fdc_case_1;
}

