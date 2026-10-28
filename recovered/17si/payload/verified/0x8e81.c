/* NORMAL INITIALIZATION CONTEXT ONLY; CONDITIONAL NORMAL STATIC ANALYSIS: finite native CFG from original PE/TLS data; 17 private scalar exclusion requires normal owned heap and bounded helper outputs documented in proof_receipt.json. 19 uses conservative native finite sets without scalar retention. Analysis-only decompiler text, not original source. Original PE bytes unchanged; private Ghidra metadata only. */

/* WARNING: Switch with 1 destination removed at 0x08f78fae */
/* WARNING: Switch with 1 destination removed at 0x08f7919f */
/* WARNING: Switch with 1 destination removed at 0x08f79380 */
/* WARNING: Switch with 1 destination removed at 0x08f79468 */
/* WARNING: Switch with 1 destination removed at 0x08f797f5 */

void FUN_08f78e81(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  LPVOID pvVar15;
  undefined8 *puVar16;
  ulonglong unaff_R14;
  undefined8 *puVar17;
  longlong unaff_R15;
  longlong unaff_GS_OFFSET;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  LPVOID pvStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  undefined8 uStack_c8;
  ulonglong uStack_c0;
  undefined8 *puStack_b8;
  undefined8 *puStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  longlong local_58 [3];
  
  local_f4 = 0x6457cebb;
  local_100 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
               0x280);
  local_118 = (undefined8 *)&DAT_00000008;
  local_110 = (undefined8 *)0x0;
  puStack_108 = (undefined8 *)0x0;
  puVar6 = FUN_08fc693d(0,0x3a);
  uVar11 = 4;
  if (puVar6 == (undefined8 *)0x0) {
    uVar11 = 0x18;
  }
                    /* WARNING: Switch is manually overridden */
  switch(uVar11) {
  case 4:
    *(undefined8 *)((longlong)puVar6 + 0x2a) = 0x7720676e69747261;
    *(undefined8 *)((longlong)puVar6 + 0x32) = 0x5832302520687469;
    puVar6[4] = 0x20656d616e206874;
    puVar6[5] = 0x676e697472617473;
    puVar6[2] = 0x6e6f6974617a696c;
    puVar6[3] = 0x6977206570797420;
    *puVar6 = 0x7461676572676761;
    puVar6[1] = 0x616974696e692065;
    lVar8 = 0x20;
    if (param_3 == (undefined8 *)0x0) {
      lVar8 = 0x68;
    }
    break;
  case 0xc:
override_jmp_08f793e3_case_0:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  puVar12 = (undefined8 *)0x0;
  puStack_b8 = puVar6;
  puStack_b0 = param_1;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
  case 0x435:
    uStack_c0 = (ulonglong)((uint)local_100 ^ 0x6e52a597);
    puVar6 = (undefined8 *)&DAT_00000008;
    uStack_f0 = 2;
    uStack_c8 = 3;
    uStack_e8 = 1;
    puVar17 = (undefined8 *)0x0;
    puVar12 = (undefined8 *)0x0;
LAB_08f7942f:
    bVar2 = *(byte *)(param_2 + (longlong)puVar17);
    uVar7 = (ulonglong)bVar2;
    if (uVar7 < 0x30) {
      if ((0x100003600U >> (uVar7 & 0x3f) & 1) == 0) {
        if (uVar7 != 0x22) {
          if (uVar7 != 0x2f) goto LAB_08f794f2;
          puVar13 = (undefined8 *)((longlong)puVar17 + 1);
                    /* WARNING: Switch is manually overridden */
          switch((puVar13 < param_3) * '\x03') {
          case '\x01':
            goto override_jmp_08f794d2_case_2;
          case '\x02':
            goto override_jmp_08f794f0_case_0;
          case '\x03':
            lVar8 = 0x24;
            if (*(char *)(param_2 + (longlong)puVar13) != (char)(-0x4a - (char)local_100)) {
              lVar8 = 0x7c;
            }
            param_1 = puVar17;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
            case 0xffffff60:
              do {
                puVar9 = (undefined4 *)&UNK_08ffb1c8;
                if (*(char *)(param_2 + (longlong)param_1) != (char)(-0x6f - (char)local_100)) {
                  puVar9 = (undefined4 *)&UNK_08ffb1ac;
                }
                puVar13 = puVar12;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar9) {
                case 0x2a3:
                  param_1 = (undefined8 *)((longlong)param_1 + 1);
                  lVar8 = 0x24;
                  if (param_1 == param_3) {
                    lVar8 = 0x68;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
                  case 0x798:
                    goto override_jmp_08f79648_case_1;
                  }
                  break;
                case 0x369:
                  goto override_jmp_08f794d2_case_2;
                }
              } while( true );
            }
          }
          goto override_jmp_08f794d2_case_3;
        }
        pvStack_e0 = (LPVOID)0x1;
        puVar6 = (undefined8 *)((longlong)puVar17 + 1);
        uStack_d8 = 0;
        uStack_d0 = 0;
        puVar9 = (undefined4 *)&UNK_08ffb194;
        if (param_3 <= puVar6) {
          puVar9 = (undefined4 *)&UNK_08ffb164;
        }
        pvVar15 = (LPVOID)0x1;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar9) {
        case 0x3d2:
override_jmp_08f794ab_case_1:
          do {
            uVar7 = uStack_d0;
            if (*(char *)(param_2 + (longlong)puVar6) == '\\') {
              puVar17 = (undefined8 *)
                        (((ulonglong)((longlong)puVar17 + 2) ^ (ulonglong)puVar6) &
                         -(ulonglong)((undefined8 *)((longlong)puVar17 + 2) < param_3) ^
                        (ulonglong)puVar6);
              puVar9 = (undefined4 *)&UNK_08ffb1b4;
              if (param_3 <= puVar17) {
                puVar9 = (undefined4 *)&UNK_08ffb160;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar9) {
              case 0x3b6:
                goto override_jmp_08f793e3_case_0;
              }
            }
            else {
              if (*(char *)(param_2 + (longlong)puVar6) == '\"') goto override_jmp_08f795d7_case_0;
              puVar9 = (undefined4 *)&UNK_08ffb160;
              if (puVar6 < param_3) {
                puVar9 = (undefined4 *)&UNK_08ffb1b4;
              }
              puVar17 = puVar6;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar9) {
              case 0x3b6:
                goto override_jmp_08f793e3_case_0;
              }
            }
            uVar3 = *(undefined1 *)(param_2 + (longlong)puVar17);
            puVar9 = (undefined4 *)&UNK_08ffb1a8;
            if (uStack_d0 != uStack_d8) {
              puVar9 = (undefined4 *)&UNK_08ffb1dc;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar9) {
            case 0x600:
              *(undefined1 *)((longlong)pvVar15 + uStack_d0) = uVar3;
              uStack_d0 = uStack_d0 + 1;
              puVar6 = (undefined8 *)((longlong)puVar17 + 1);
              lVar8 = 0x40;
              if (param_3 <= puVar6) {
                lVar8 = 0x70;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
              case 0x3b8:
                goto override_jmp_08f795d7_case_0;
              }
              goto override_jmp_08f794ab_case_1;
            case 0x87e:
              FUN_08fd2908(&pvStack_e0);
              *(undefined1 *)((longlong)pvStack_e0 + uVar7) = uVar3;
              uStack_d0 = uVar7 + 1;
              puVar6 = (undefined8 *)((longlong)puVar17 + 1);
              lVar8 = 0x40;
              if (param_3 <= puVar6) {
                lVar8 = 0x70;
              }
            }
            pvVar15 = pvStack_e0;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
            case 0x3b8:
              goto override_jmp_08f795d7_case_0;
            }
          } while( true );
        }
        goto override_jmp_08f794ab_case_0;
      }
      param_1 = (undefined8 *)((longlong)puVar17 + 1);
      puVar13 = puVar12;
                    /* WARNING: Switch is manually overridden */
override_jmp_08f794d2_case_2:
      lVar8 = 0x68;
      if (param_1 < param_3) {
        lVar8 = 0x94;
      }
      puVar12 = puVar13;
      puVar17 = param_1;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
      case 0x2d9:
        goto override_jmp_08f79704_case_0;
      }
      goto override_jmp_08f79648_case_1;
    }
LAB_08f794f2:
    if (bVar2 == 0x7b) {
                    /* WARNING: Switch is manually overridden */
      switch(puVar12 == local_110) {
      case true:
override_jmp_08f794f0_case_1:
        FUN_08fabc65(&local_118);
        param_1 = puVar6;
                    /* WARNING: Switch is manually overridden */
      }
override_jmp_08f794f0_case_0:
      local_118[(longlong)puVar12 * 3 + 1] = 0x8000000000000000;
      puVar12 = (undefined8 *)((longlong)puVar12 + 1);
      puVar17 = (undefined8 *)((longlong)puVar17 + 1);
      lVar8 = 0x68;
      if (puVar17 < param_3) {
        lVar8 = 0x94;
      }
      puVar6 = local_118;
      puStack_108 = puVar12;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
      case 0x798:
        goto override_jmp_08f79648_case_1;
      }
    }
    else {
      if (bVar2 == 0x7d) {
                    /* WARNING: Switch is manually overridden */
        switch((puVar12 == local_110) * '\x03') {
        case '\x01':
          goto override_jmp_08f794f0_case_0;
        case '\x02':
          goto override_jmp_08f794f0_case_1;
        case '\x03':
          FUN_08fabc65(&local_118);
          puVar6 = local_118;
                    /* WARNING: Switch is manually overridden */
        case '\0':
          puVar6[(longlong)puVar12 * 3 + 1] = 0x8000000000000001;
          puVar12 = (undefined8 *)((longlong)puVar12 + 1);
          puVar17 = (undefined8 *)((longlong)puVar17 + 1);
          lVar8 = 0x94;
          if (param_3 <= puVar17) {
            lVar8 = 0x68;
          }
        }
        puStack_108 = puVar12;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
        case 0x2d9:
          goto override_jmp_08f79704_case_0;
        }
        goto override_jmp_08f79648_case_1;
      }
override_jmp_08f794d2_case_3:
      puVar13 = puVar17;
      param_1 = puVar17;
                    /* WARNING: Switch is manually overridden */
      switch(param_3 <= puVar17) {
      case false:
override_jmp_08f795f0_case_0:
        do {
          cVar1 = *(char *)(param_2 + (longlong)puVar13);
          puVar9 = (undefined4 *)&UNK_08ffb1c0;
          if (cVar1 != '\f') {
            puVar9 = &UNK_08ffb17c;
          }
          param_1 = puVar13;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar9) {
          case 0x286:
            goto override_jmp_08f790d1_case_0;
          case 0x6d0:
                    /* WARNING: Switch is manually overridden */
            switch(cVar1 == '\r') {
            case false:
              lVar8 = 0;
              if (cVar1 == '/') {
                lVar8 = 0x50;
              }
              break;
            case true:
              goto override_jmp_08f790d1_case_0;
            }
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
          case 0x642:
            puVar13 = (undefined8 *)((longlong)puVar13 + 1);
            if (puVar13 < param_3) {
              lVar8 = 0x98;
              if (*(char *)(param_2 + (longlong)puVar13) == (char)((char)local_f4 * 'A' + -0x4c)) {
                lVar8 = 0x6c;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
              case 0x286:
                goto override_jmp_08f790d1_case_0;
              }
              param_1 = param_3;
                    /* WARNING: Switch is manually overridden */
              switch(puVar13 == param_3) {
              case true:
                goto override_jmp_08f790d1_case_0;
              }
            }
            else {
              param_1 = param_3;
                    /* WARNING: Switch is manually overridden */
              switch(puVar13 == param_3) {
              case true:
                goto override_jmp_08f790d1_case_0;
              }
            }
            goto override_jmp_08f795f0_case_0;
          case 0x6b4:
                    /* WARNING: Switch is manually overridden */
            switch(cVar1 != '\"') {
            case false:
              goto override_jmp_08f790d1_case_0;
            case true:
              puVar9 = (undefined4 *)&UNK_08ffb168;
              if (cVar1 == ' ') {
                puVar9 = (undefined4 *)&UNK_08ffb1c0;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar9) {
              case 0x286:
                goto override_jmp_08f790d1_case_0;
              case 0x779:
                lVar8 = 0x6c;
                if (cVar1 != '\n') {
                  lVar8 = 8;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
                case 0x3b:
                  puVar9 = (undefined4 *)&UNK_08ffb1c0;
                  if (cVar1 != '\t') {
                    puVar9 = (undefined4 *)&UNK_08ffb190;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar9) {
                  case 0x104:
                    lVar8 = 0x1c;
                    if (cVar1 == '}') {
                      lVar8 = 0x6c;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
                    case 0x286:
                      goto override_jmp_08f790d1_case_0;
                    case 0x5e3:
                      lVar8 = 0x44;
                      if (cVar1 == '{') {
                        lVar8 = 0x6c;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
                      case 0x286:
                        goto override_jmp_08f790d1_case_0;
                      }
                    }
                    break;
                  case 0x286:
                    goto override_jmp_08f790d1_case_0;
                  }
                  break;
                case 0x286:
                  goto override_jmp_08f790d1_case_0;
                }
              }
            }
          }
          puVar13 = (undefined8 *)((longlong)puVar13 + 1);
          param_1 = param_3;
                    /* WARNING: Switch is manually overridden */
          switch(puVar13 == param_3) {
          case true:
            goto override_jmp_08f790d1_case_0;
          }
        } while( true );
      case true:
override_jmp_08f790d1_case_0:
        puVar9 = (undefined4 *)&UNK_08ffb1d4;
        if (puVar17 == param_1) {
          puVar9 = (undefined4 *)&UNK_08ffb184;
        }
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar9) {
      case 0x67f:
        puVar17 = (undefined8 *)((longlong)puVar17 + 1);
        lVar8 = 0x94;
        if (param_3 <= puVar17) {
          lVar8 = 0x68;
        }
        break;
      case 0xffffff89:
        uVar5 = 0x5c;
        if (param_1 <= param_3) {
          uVar5 = 0x38;
        }
        uVar7 = (ulonglong)uVar5;
        if (param_1 < puVar17) {
          uVar7 = 0x5c;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffb154 + uVar7)) {
        case 0x847:
          uVar5 = 0x78;
          if ((char)bVar2 <= (char)(-0x41 - (char)((uint)local_100 ^ 0x6e52a587))) {
            uVar5 = 0x5c;
          }
          uVar7 = (ulonglong)uVar5;
          if (puVar17 == (undefined8 *)(ulonglong)((uint)local_100 ^ 0x6e52a587)) {
            uVar7 = 0x78;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffb154 + uVar7)) {
          case 0x155:
                    /* WARNING: Switch is manually overridden */
            switch(param_1 != param_3) {
            case true:
              puVar9 = (undefined4 *)&UNK_08ffb1b0;
              if (-0x41 < *(char *)(param_2 + (longlong)param_1)) {
                puVar9 = (undefined4 *)&UNK_08ffb1d8;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar9) {
              case 0x3b6:
                goto override_jmp_08f793e3_case_0;
              }
            }
            FUN_08fc66b4(&uStack_70,(undefined8 *)(param_2 + (longlong)puVar17),
                         (longlong)param_1 - (longlong)puVar17);
            if (puVar12 == local_110) {
              FUN_08fabc65(&local_118);
                    /* WARNING: Switch is manually overridden */
            }
            local_118[(longlong)puVar12 * 3 + 2] = uStack_60;
            local_118[(longlong)puVar12 * 3] = uStack_70;
            (local_118 + (longlong)puVar12 * 3)[1] = uStack_68;
            puVar13 = (undefined8 *)((longlong)puVar12 + 1);
            puVar6 = local_118;
            puStack_108 = puVar13;
            goto override_jmp_08f794d2_case_2;
          }
        }
        goto override_jmp_08f793e3_case_0;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
      case 0x798:
        goto override_jmp_08f79648_case_1;
      }
    }
    break;
  case 0x798:
override_jmp_08f79648_case_1:
    puVar17 = local_110;
    puVar6 = local_118;
    FUN_08fba6b1(puStack_b8,0x3a,1,1);
    local_118 = (undefined8 *)0x0;
    FUN_08f83a5b(puStack_b0,(longlong)puVar6,(ulonglong)puVar12,(ulonglong *)&local_118);
    uVar11 = local_100;
    puVar9 = (undefined4 *)&UNK_08ffb19c;
    if (puVar12 != (undefined8 *)0x0) {
      puVar9 = (undefined4 *)&UNK_08ffb1b8;
    }
    puVar13 = (undefined8 *)0x0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar9) {
    case 0x123:
override_jmp_08f797bc_case_1:
      plVar10 = local_58 + 9;
      if (puVar17 == (undefined8 *)0x0) {
        lVar8 = 0;
      }
      else {
        lVar8 = (longlong)puVar17 * 0x18;
        unaff_R14 = 8;
        plVar10 = local_58 + 10;
      }
      *plVar10 = lVar8;
      if ((unaff_R14 == 0) || (unaff_R15 == 0)) {
        return;
      }
      FUN_08fd90fd(puVar6,unaff_R14);
      return;
    }
override_jmp_08f797bc_case_0:
    do {
      puVar16 = (undefined8 *)((longlong)puVar13 + 1);
      lVar8 = *(longlong *)
               ((ulonglong)(0x6e52a58f - (int)uVar11) + (longlong)(puVar6 + (longlong)puVar13 * 3));
      lVar14 = 0x34;
      if (lVar8 < -0x7ffffffffffffffe) {
        lVar14 = 0x90;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffb154 + lVar14)) {
      case 0x388:
        puVar9 = (undefined4 *)&UNK_08ffb1b8;
        if (puVar16 == puVar12) {
          puVar9 = (undefined4 *)&UNK_08ffb19c;
        }
        puVar13 = puVar16;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar9) {
        case 0x123:
          goto override_jmp_08f797bc_case_1;
        }
        goto override_jmp_08f797bc_case_0;
      case 0x6ec:
        FUN_08fba6b1((LPVOID)puVar6[(longlong)puVar13 * 3],lVar8,1,1);
        puVar9 = (undefined4 *)&UNK_08ffb1b8;
        if (puVar16 == puVar12) {
          puVar9 = (undefined4 *)&UNK_08ffb19c;
        }
      }
      puVar13 = puVar16;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar9) {
      case 0x123:
        goto override_jmp_08f797bc_case_1;
      }
    } while( true );
  }
override_jmp_08f79704_case_0:
  goto LAB_08f7942f;
override_jmp_08f795d7_case_0:
                    /* WARNING: Switch is manually overridden */
override_jmp_08f794ab_case_0:
  pvVar15 = pvStack_e0;
  puVar17 = (undefined8 *)((longlong)puVar17 + 2);
  FUN_08f9a7b4(&uStack_90,(longlong)pvStack_e0,uStack_d0);
  if ((char)uStack_90 == '\0') {
    FUN_08fc66b4(&puStack_a8,puStack_88,*(ulonglong *)((longlong)local_58 + (uStack_c0 - 0x38)));
                    /* WARNING: Switch is manually overridden */
  }
  else {
    uStack_98 = uStack_78;
    puStack_a8 = puStack_88;
    uStack_a0 = uStack_80;
  }
  puVar12 = puStack_108;
  if (puStack_108 == local_110) {
    FUN_08fabc65(&local_118);
  }
  param_1 = local_118;
  local_118[(longlong)puVar12 * 3 + 2] = uStack_98;
  local_118[(longlong)puVar12 * 3] = puStack_a8;
  (local_118 + (longlong)puVar12 * 3)[1] = uStack_a0;
  puVar12 = (undefined8 *)((longlong)puVar12 + 1);
  puStack_108 = puVar12;
  FUN_08fba6b1(pvVar15,uStack_d8,1,1);
  lVar8 = 0x94;
  if (param_3 <= puVar17) {
    lVar8 = 0x68;
  }
  puVar6 = param_1;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffb154 + lVar8)) {
  case 0x798:
    goto override_jmp_08f79648_case_1;
  }
  goto override_jmp_08f79704_case_0;
}

