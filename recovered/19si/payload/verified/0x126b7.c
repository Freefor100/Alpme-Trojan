/* NORMAL INITIALIZATION CONTEXT ONLY; CONDITIONAL NORMAL STATIC ANALYSIS: finite native CFG from original PE/TLS data; 17 private scalar exclusion requires normal owned heap and bounded helper outputs documented in proof_receipt.json. 19 uses conservative native finite sets without scalar retention. Analysis-only decompiler text, not original source. Original PE bytes unchanged; private Ghidra metadata only. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_0ec426b7(longlong *param_1,ulonglong param_2,char param_3)

{
  undefined8 uVar1;
  size_t _Size;
  byte bVar2;
  LPVOID pvVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined *_Buf1;
  void *_Buf2;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  char cVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong unaff_GS_OFFSET;
  bool bVar22;
  LPVOID pvStack_70;
  ulonglong uStack_68;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong local_48;
  
  ANALYST_constant_init();
  local_48 = -0x1febe28ffc737852;
  local_50 = 0xcac8621fe93a44f;
  uVar1 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x240
           );
  uVar16 = (uint)uVar1;
  uVar14 = (ulonglong)(0xe72eb263 - uVar16);
  uVar20 = *(ulonglong *)((longlong)param_1 + uVar14);
  uVar15 = param_1[4];
  lVar12 = 0x74;
  if (uVar15 < uVar20) {
    lVar12 = 0x14;
  }
  puVar18 = (undefined4 *)&UNK_0ecb9fe8;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar12)) {
  case 0xf4:
    while (((ulonglong)*(byte *)(param_1[5] + uVar15) < 0x21 &&
           ((0x100002600U >> ((ulonglong)*(byte *)(param_1[5] + uVar15) & 0x3f) & 1) != 0))) {
      uVar15 = uVar15 + 1;
      puVar9 = &UNK_0ecba07c;
      if (uVar15 == uVar20) {
        puVar9 = (undefined4 *)&UNK_0ecb9fe8;
      }
      param_1[4] = uVar15;
      uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar9) {
      case 0x135:
        break;
      case 0xfffffcd8:
        goto override_jmp_0ec42dba_case_1;
      }
    }
  }
  puVar9 = &UNK_0ecba070;
  if (uVar20 <= uVar15) {
    puVar9 = (undefined4 *)&UNK_0ecb9fe8;
  }
  uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar9) {
  case 0xfffffcd8:
    goto override_jmp_0ec42dba_case_1;
  }
  uVar21 = (ulonglong)(uVar16 ^ 0xe72eb21b);
  lVar12 = *(longlong *)((longlong)param_1 + uVar21);
  bVar4 = *(byte *)(lVar12 + uVar15);
  bVar2 = (byte)uVar1;
                    /* WARNING: Switch is manually overridden */
  switch(bVar4 < 0x66) {
  case false:
                    /* WARNING: Switch is manually overridden */
    switch(bVar4 < 0x74) {
    case false:
      puVar9 = (undefined4 *)&UNK_0ecba074;
      if (bVar4 < 0x7b) {
        puVar9 = (undefined4 *)&UNK_0ecba080;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar9) {
      case 0xfffff8e6:
        if (bVar4 == 0x74) {
          uVar8 = FUN_0ec9026a((longlong)param_1,&UNK_0ecb15fd,4);
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_0ec42dba_case_1;
        }
        goto override_jmp_0ec42ad1_case_0;
      }
      break;
    case true:
                    /* WARNING: Switch is manually overridden */
      switch(-(uint)(bVar4 < 0x6e)) {
      case 0:
                    /* WARNING: Switch is manually overridden */
        switch((bVar4 == 0x6e) * '\x02') {
        case '\x01':
          goto override_jmp_0ec43240_case_0;
        case '\x02':
          _Buf1 = &UNK_0ecb16b9;
          uVar20 = 4;
          goto LAB_0ec42a92;
        }
        break;
      case 0xffffffff:
                    /* WARNING: Switch is manually overridden */
        switch(bVar4 == 0x66) {
        case true:
override_jmp_0ec43240_case_0:
          _Buf1 = &UNK_0ecb23d8;
          uVar20 = 5;
LAB_0ec42a92:
          local_50 = 0xcac8621dd008390;
          uStack_58 = CONCAT26(0xffe0,(undefined6)uStack_58);
          uVar1 = *(undefined8 *)
                   (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8)
                   + 0x2c8);
          iVar6 = -(int)uVar1;
          uVar16 = iVar6 + 0xf42a3d7e;
          uVar15 = param_1[6];
          uVar10 = (iVar6 + 0xf42b3d5eU ^ uVar16) & 0xffff;
          uVar14 = *(ulonglong *)((longlong)param_1 + (ulonglong)uVar10);
          switch(uVar14 == (uVar16 ^ 0x28)) {
          case false:
            switch(uVar14 < uVar15) {
            case false:
              switch(uVar15 == uVar14) {
              case false:
                goto switchD_0ec9039c_caseD_0;
              }
              break;
            case true:
              switch((char)((char)uVar1 + 'i') <
                     *(char *)(*(longlong *)((longlong)param_1 + (ulonglong)uVar16) + uVar14)) {
              case false:
                goto switchD_0ec9039c_caseD_0;
              }
            }
          }
          switch(uVar20 <= uVar15 - uVar14) {
          case true:
            iVar6 = memcmp(_Buf1,(void *)(*(longlong *)((longlong)param_1 + (ulonglong)uVar16) +
                                         uVar14),uVar20);
            bVar22 = iVar6 != (int)local_50 * 0x22ebcde5 + (uVar16 * 2 - uVar10) + (uVar16 ^ 0x28);
            uVar16 = (&switchD_0ec903d7::switchdataD_0ecba0d0)[(ulonglong)bVar22 * 2];
            switch(bVar22) {
            case false:
              *(ulonglong *)((longlong)param_1 + (ulonglong)uVar10) = uVar14 + uVar20;
              return CONCAT71((int7)(int3)(uVar16 >> 8),1);
            }
          }
switchD_0ec9039c_caseD_0:
          return 0;
        }
      }
      goto override_jmp_0ec42ad1_case_0;
    }
                    /* WARNING: Switch is manually overridden */
    switch((bVar4 != 0x7b) * '\x02') {
    case '\0':
override_jmp_0ec42ad1_case_1:
      uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(0x7f < param_2) {
      case true:
        goto override_jmp_0ec42dba_case_1;
      }
      break;
    case '\x01':
override_jmp_0ec42aef_case_0:
      uVar13 = uVar15 + 1;
      param_1[4] = uVar13;
      lVar7 = 0x50;
                    /* WARNING: Switch is manually overridden */
      if (uVar13 < uVar20) {
        lVar7 = 0xe0;
      }
      uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
      case 0xfffffcd8:
        goto override_jmp_0ec42dba_case_1;
      }
      goto override_jmp_0ec4335f_case_1;
    case '\x02':
      goto override_jmp_0ec42ad1_case_0;
    }
override_jmp_0ec42ecb_case_0:
    uVar10 = ((uint)*(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x298)
             ^ 0xed9b156f) + 0x9e7;
    bVar22 = bVar4 == (byte)uVar10;
    uVar15 = uVar15 + 1;
    param_1[4] = uVar15;
    uVar11 = 0xd8 - (uVar10 & 0xffff);
    cVar19 = (char)uVar11;
    cVar19 = (0x7dU - cVar19 & -bVar22) + cVar19;
    puVar18 = (undefined4 *)&UNK_0ecba060;
    if (uVar15 < uVar20) {
      puVar18 = (undefined4 *)&UNK_0ecba000;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar18) {
    case 0xfffff4aa:
      do {
        cVar5 = *(char *)(lVar12 + uVar15);
        lVar7 = 0x30;
        if (cVar5 == '\r') {
          lVar7 = 0xf4;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
        case 0x1f:
          puVar9 = (undefined4 *)&UNK_0ecb9fd4;
          puVar18 = (undefined4 *)&UNK_0ecba08c;
          if (cVar5 == '\t') {
            puVar9 = (undefined4 *)&UNK_0ecba08c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar9) {
          case 0xfffffa7a:
            if (cVar5 != '\n') {
              puVar18 = (undefined4 *)&UNK_0ecb9fec;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar18) {
            case 0xfffffdee:
              lVar7 = 200;
              if (cVar5 == ' ') {
                lVar7 = 0xf4;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
              case 0xfffff7d1:
                goto override_jmp_0ec428c4_case_1;
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
        lVar7 = 0x68;
        if (uVar15 == uVar20) {
          lVar7 = 0x90;
        }
        param_1[4] = uVar15;
        uVar13 = uVar20;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
        case 0xfffff7fd:
          goto override_jmp_0ec42b3b_case_1;
        }
      } while( true );
    }
override_jmp_0ec428c4_case_1:
    uVar13 = uVar15;
    if (uVar15 < uVar20) {
                    /* WARNING: Switch is manually overridden */
      switch(*(char *)(lVar12 + uVar15) == cVar19) {
      case true:
        param_1[4] = uVar15 + 1;
        FUN_0ec371df(&pvStack_70,(undefined8 *)&DAT_0ecb11e9,(ulonglong)(0xe72eb254 - uVar16));
        switchD_0ec75e6c::caseD_ec47f80(pvStack_70,uStack_68,1,1);
        uVar8 = 1;
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_0ec42dba_case_1;
      }
    }
override_jmp_0ec42b3b_case_1:
    uStack_58 = (ulonglong)(uVar16 + 0x18d14ddd);
    lVar7 = 0xf0;
    if (uVar13 < uVar20) {
      lVar7 = 100;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
    case 0xbd:
      goto override_jmp_0ec42b80_case_1;
    }
override_jmp_0ec42b80_case_0:
    do {
      if ((0x20 < (ulonglong)*(byte *)(lVar12 + uVar13)) ||
         ((0x100002600U >> ((ulonglong)*(byte *)(lVar12 + uVar13) & 0x3f) & 1) == 0))
      goto override_jmp_0ec42b80_case_1;
      uVar13 = uVar13 + 1;
      param_1[4] = uVar13;
      puVar18 = (undefined4 *)&UNK_0ecb9ffc;
      if (uVar13 == uVar20) {
        puVar18 = (undefined4 *)&UNK_0ecba088;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar18) {
      case 0xbd:
override_jmp_0ec42b80_case_1:
        do {
          puVar18 = (undefined4 *)&UNK_0ecb9fd8;
          if (bVar22) {
            puVar18 = (undefined4 *)&UNK_0ecba03c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar18) {
          case 0xfffff44f:
            FUN_0ec99af2((longlong)&pvStack_70,(longlong)param_1);
            uVar20 = uStack_68;
            pvVar3 = pvStack_70;
            uVar15 = (ulonglong)uVar11;
            lVar12 = 0xec;
            if (uStack_68 ==
                (((local_48 - (uVar15 - ((ulonglong)uVar10 & 0xffff))) + -0x2fe8126d42dc5bc2) *
                 uVar15 ^ uVar15)) {
              lVar12 = 0x4c;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar12)) {
            case 0xfffffd2f:
              _Size = *(size_t *)((longlong)&pvStack_70 + uStack_58);
              uVar15 = *(ulonglong *)((longlong)param_1 + uVar14);
              uVar8 = param_1[4];
              puVar18 = (undefined4 *)&UNK_0ecb9fc0;
              if (uVar8 < uVar15) {
                puVar18 = (undefined4 *)&UNK_0ecb9ff0;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar18) {
              case 0xfffffa93:
                lVar12 = *(longlong *)((longlong)param_1 + uVar21);
                while ((uVar13 = (ulonglong)*(byte *)(lVar12 + uVar8), uVar13 < 0x21 &&
                       ((0x100002600U >> (uVar13 & 0x3f) & 1) != 0))) {
                  uVar8 = uVar8 + 1;
                  param_1[4] = uVar8;
                    /* WARNING: Switch is manually overridden */
                  switch(uVar8 != uVar15) {
                  case false:
                    goto override_jmp_0ec42e30_case_1;
                  case true:
                  }
                }
              }
              lVar12 = 0xc4;
              if (uVar8 < uVar15) {
                lVar12 = 0xa8;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar12)) {
              case 0xfffff83f:
                puVar18 = (undefined4 *)&UNK_0ecba05c;
                if (*(char *)(*(longlong *)((longlong)param_1 + uVar21) + uVar8) == ':') {
                  puVar18 = (undefined4 *)&UNK_0ecba050;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar18) {
                case 0xfffff422:
                  param_1[4] = uVar8 + 1;
                  _Buf2 = (void *)*param_1;
                  lVar12 = 0xb0;
                  if (_Buf2 == (void *)0x0) {
                    lVar12 = 0x60;
                  }
                  if (param_3 == '\0') {
                    lVar12 = 0x60;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar12)) {
                  case 0xfffffaef:
                    /* WARNING: Switch is manually overridden */
                    switch((_Size == param_1[3]) * '\x02') {
                    case '\0':
                      goto override_jmp_0ec430ea_case_0;
                    case '\x01':
override_jmp_0ec430ea_case_1:
                      break;
                    case '\x02':
                      _Buf2 = (void *)param_1[2];
                    }
                    iVar6 = memcmp(pvStack_70,_Buf2,_Size);
                    uVar17 = (undefined4)CONCAT71((int7)((ulonglong)pvVar3 >> 8),iVar6 == 0);
                    break;
                  case 0xfffffd8b:
                    /* WARNING: Switch is manually overridden */
                    switch(_Size == param_1[1]) {
                    case true:
                      goto override_jmp_0ec430ea_case_1;
                    }
override_jmp_0ec430ea_case_0:
                    uVar17 = 0;
                  }
                  switchD_0ec75e6c::caseD_ec47f80(pvVar3,uVar20,1,1);
                  goto LAB_0ec42d52;
                }
              }
override_jmp_0ec42e30_case_1:
              switchD_0ec75e6c::caseD_ec47f80(pvStack_70,uStack_68,1,1);
              break;
            case 0xffffff63:
              uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
              goto override_jmp_0ec42dba_case_1;
            }
            goto override_jmp_0ec42ce6_case_1;
          case 0xfffff9d3:
            uVar17 = 0;
LAB_0ec42d52:
            cVar5 = FUN_0ec426b7(param_1,param_2 + 1,uVar17);
            puVar18 = (undefined4 *)&UNK_0ecb9fc4;
            if (cVar5 == '\0') {
              puVar18 = (undefined4 *)&UNK_0ecb9fe8;
            }
            uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar18) {
            case 0xfffffcd8:
              goto override_jmp_0ec42dba_case_1;
            case 0xfffffe66:
              uVar20 = *(ulonglong *)((longlong)param_1 + uVar14);
              uVar13 = param_1[4];
              puVar18 = (undefined4 *)&UNK_0ecb9fcc;
              if (uVar20 <= uVar13) {
                puVar18 = (undefined4 *)&UNK_0ecba018;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar18) {
              case 0x73:
override_jmp_0ec43491_case_1:
                puVar18 = (undefined4 *)&UNK_0ecb9fdc;
                if (uVar20 <= uVar13) {
                  puVar18 = (undefined4 *)&UNK_0ecb9fe8;
                }
                break;
              case 0xfffffbcd:
                lVar12 = *(longlong *)((longlong)param_1 + uVar21);
                bVar4 = *(byte *)(lVar12 + uVar13);
                lVar7 = 0x70;
                if (bVar4 < 0xd) {
                  lVar7 = 0xc0;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
                case 0xfffffcee:
                  goto override_jmp_0ec42f3a_case_1;
                }
                do {
                    /* WARNING: Switch is manually overridden */
                  switch(bVar4 < 10) {
                  case false:
                    puVar18 = (undefined4 *)&UNK_0ecb9ff4;
                    if (bVar4 != 10) {
                      puVar18 = (undefined4 *)&UNK_0ecba018;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar18) {
                    case 0x73:
                      goto override_jmp_0ec43491_case_1;
                    }
                    break;
                  case true:
                    puVar18 = (undefined4 *)&UNK_0ecb9ff4;
                    if (bVar4 != 9) {
                      puVar18 = (undefined4 *)&UNK_0ecba018;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar18) {
                    case 0x73:
                      goto override_jmp_0ec43491_case_1;
                    }
                  }
override_jmp_0ec43491_case_0:
                  uVar13 = uVar13 + 1;
                  puVar18 = (undefined4 *)&UNK_0ecba020;
                  if (uVar13 == uVar20) {
                    puVar18 = (undefined4 *)&UNK_0ecb9fe8;
                  }
                  param_1[4] = uVar13;
                  uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar18) {
                  case 0xfffffcd8:
                    goto override_jmp_0ec42dba_case_1;
                  case 0xfffffe08:
                    bVar4 = *(byte *)(lVar12 + uVar13);
                    lVar7 = 0x70;
                    if (bVar4 < 0xd) {
                      lVar7 = 0xc0;
                    }
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
                  case 0xfffffcee:
override_jmp_0ec42f3a_case_1:
                    /* WARNING: Switch is manually overridden */
                    switch(0x1f < bVar4) {
                    case false:
                      lVar7 = 0x80;
                      if (bVar4 == 0xd) {
                        lVar7 = 0x5c;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
                      case 0x73:
                        goto override_jmp_0ec43491_case_1;
                      }
                      break;
                    case true:
                      puVar18 = (undefined4 *)&UNK_0ecb9ff4;
                      if (bVar4 != 0x20) {
                        puVar18 = (undefined4 *)&UNK_0ecba018;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar18) {
                      case 0x73:
                        goto override_jmp_0ec43491_case_1;
                      }
                    }
                    goto override_jmp_0ec43491_case_0;
                  }
                } while( true );
              }
              uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar18) {
              case 0xfffff866:
                lVar12 = *(longlong *)((longlong)param_1 + uVar21);
                puVar18 = (undefined4 *)&UNK_0ecb9fbc;
                if (*(char *)(lVar12 + uVar13) == cVar19) {
                  puVar18 = (undefined4 *)&UNK_0ecba030;
                }
                break;
              case 0xfffffcd8:
                goto override_jmp_0ec42dba_case_1;
              }
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar18) {
            case 0xfffffa60:
              uVar8 = 0;
              lVar7 = 0x50;
              if (*(char *)(lVar12 + uVar13) == ',') {
                lVar7 = 0;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
              case 0xfffffb3d:
                uVar13 = uVar13 + 1;
                param_1[4] = uVar13;
                lVar7 = 0xf0;
                if (uVar13 < uVar20) {
                  lVar7 = 100;
                }
                break;
              case 0xfffffcd8:
                goto override_jmp_0ec42dba_case_1;
              }
              break;
            case 0xfffffec5:
              param_1[4] = uVar13 + 1;
              uVar8 = 1;
                    /* WARNING: Switch is manually overridden */
              goto override_jmp_0ec42dba_case_1;
            }
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
          case 0x3e:
            goto override_jmp_0ec42b80_case_0;
          }
        } while( true );
      }
    } while( true );
  case true:
    puVar9 = (undefined4 *)&UNK_0ecb9f9c;
    if (bVar4 < 0x2d) {
      puVar9 = (undefined4 *)&UNK_0ecba014;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar9) {
    case 0xfffff76a:
      if (bVar4 < 0x5b) {
                    /* WARNING: Switch is manually overridden */
        switch(bVar4 != 0x2d) {
        case false:
          goto override_jmp_0ec42aef_case_0;
        }
      }
      else {
                    /* WARNING: Switch is manually overridden */
        switch(bVar4 == 0x5b | 2) {
        case 3:
          goto override_jmp_0ec42ad1_case_1;
        }
      }
      break;
    case 0xfffff93b:
      if (bVar4 == 0x22) {
        FUN_0ec99af2((longlong)&pvStack_70,(longlong)param_1);
        lVar12 = *(longlong *)((longlong)&pvStack_70 + (ulonglong)(0xe72eb23b - uVar16));
                    /* WARNING: Switch is manually overridden */
        switch(lVar12 + (uVar21 * -2 -
                        ~*(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                          0x100)) + uVar14 == 0) {
        case false:
          uVar15 = (ulonglong)(-uVar16 + 0xe72eb243);
          lVar7 = *(longlong *)((longlong)&pvStack_70 + uVar15);
          uVar20 = (ulonglong)(-uVar16 + 0xe72eb273);
          if ((param_3 == '\0') ||
             ((uVar15 ^ 0xffffffffffffffef) != *(ulonglong *)((longlong)param_1 + uVar20))) {
            lVar7 = switchD_0ec75e6c::caseD_ec47f80(pvStack_70,lVar12,1,1);
          }
          else {
            param_1[7] = (longlong)pvStack_70;
            *(longlong *)((longlong)param_1 + uVar20) = lVar12;
            param_1[9] = lVar7;
          }
          uVar8 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
          break;
        case true:
override_jmp_0ec42ce6_case_1:
          uVar8 = 0;
        }
        goto override_jmp_0ec42dba_case_1;
      }
    }
override_jmp_0ec42ad1_case_0:
    puVar9 = (undefined4 *)&UNK_0ecb9fa0;
    if ((byte)(0x3d - bVar2) <= (byte)(bVar4 - 0x30)) {
      puVar9 = (undefined4 *)&UNK_0ecb9fe8;
    }
    uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar9) {
    case 0:
      lVar7 = 0x50;
      if (uVar15 < uVar20) {
        lVar7 = 0xe0;
      }
      uVar8 = 0;
      uVar13 = uVar15;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
      case 0xfffffcd8:
        goto override_jmp_0ec42dba_case_1;
      }
      break;
    case 0xfffffcd8:
      goto override_jmp_0ec42dba_case_1;
    }
override_jmp_0ec4335f_case_1:
    lVar7 = 0x38;
    if (*(char *)(lVar12 + uVar13) == (byte)(bVar2 - 3)) {
      lVar7 = 0x84;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
    case 0xfffff662:
      uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(((byte)(((-0x76 - (bVar2 + 0x9c + (bVar2 - 3))) - (char)(uVar16 ^ 0xe72eb21b)) * -0x5d)
             <= (byte)(*(char *)(lVar12 + uVar13) + bVar2 + 0x9c)) * '\x02') {
      case '\0':
        puVar9 = (undefined4 *)&UNK_0ecba068;
        if ((byte)(*(char *)(lVar12 + -1 + uVar13 + 1) - 0x30U) < (byte)(0x3d - bVar2)) {
          puVar9 = (undefined4 *)&UNK_0ecba010;
        }
        uVar14 = uVar13 + 1;
        uVar15 = uVar13;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar9) {
        case 0xfffffc31:
          do {
            uVar8 = uVar14;
            puVar9 = (undefined4 *)&UNK_0ecba054;
            if (uVar20 == uVar8) {
              puVar9 = (undefined4 *)&UNK_0ecba068;
            }
            param_1[4] = uVar8;
            uVar15 = uVar20;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar9) {
            case 0xfffff613:
              puVar9 = (undefined4 *)&UNK_0ecba010;
              if ((byte)(0x3d - bVar2) <= (byte)(*(char *)(lVar12 + -1 + uVar8 + 1) - 0x30U)) {
                puVar9 = (undefined4 *)&UNK_0ecba068;
              }
              break;
            case 0xfffffbb0:
              goto override_jmp_0ec431a6_case_0;
            }
            uVar14 = uVar8 + 1;
            uVar15 = uVar8;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar9) {
            case 0xfffffbb0:
              goto override_jmp_0ec431a6_case_0;
            }
          } while( true );
        }
override_jmp_0ec431a6_case_0:
        uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecb7e64 + (ulonglong)(uVar15 <= uVar13) * 4)) {
        case 0xfff8b1b7:
          goto override_jmp_0ec42dba_case_1;
        }
        break;
      case '\x01':
        goto override_jmp_0ec42ecb_case_0;
      case '\x02':
        goto override_jmp_0ec42dba_case_1;
      }
      break;
    case 0xfffffa40:
      uVar15 = uVar13 + 1;
      param_1[4] = uVar15;
                    /* WARNING: Switch is manually overridden */
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(uVar20 <= uVar15) {
  case false:
    uVar8 = 1;
                    /* WARNING: Switch is manually overridden */
    switch((*(byte *)(lVar12 + uVar15) == (bVar2 ^ 0x1d)) * '\x02') {
    case '\0':
      goto override_jmp_0ec433e5_case_1;
    case '\x02':
      uVar14 = uVar15 + 1;
      param_1[4] = uVar14;
      lVar7 = 0x50;
      if (uVar14 < uVar20) {
        lVar7 = 0x18;
      }
      uVar8 = 0;
      uVar21 = uVar14;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
      case 0xfffffe8b:
        do {
          bVar4 = 0x44 - (char)_DAT_0ecca344;
          lVar7 = 0x9c;
          if ((byte)(bVar4 + *(char *)(lVar12 + uVar21)) < (bVar4 ^ 0xda)) {
            lVar7 = 0xb4;
          }
          uVar15 = uVar21;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
          case 0xdc:
            goto override_jmp_0ec43206_case_1;
          case 0xffffff3c:
            uVar21 = uVar21 + 1;
            puVar9 = (undefined4 *)&UNK_0ecb9fb0;
            if (uVar21 == uVar20) {
              puVar9 = (undefined4 *)&UNK_0ecba034;
            }
          }
          param_1[4] = uVar21;
          uVar15 = uVar20;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar9) {
          case 0xdc:
            goto override_jmp_0ec43206_case_1;
          }
        } while( true );
      }
    }
    goto override_jmp_0ec42dba_case_1;
  case true:
override_jmp_0ec433e5_case_1:
    uVar8 = 1;
                    /* WARNING: Switch is manually overridden */
    switch(uVar20 <= uVar15) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(*(char *)(lVar12 + uVar15) != 'E') {
      case true:
        if (*(char *)(lVar12 + uVar15) == 'e') {
          puVar18 = (undefined4 *)&UNK_0ecba024;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar18) {
        case 0xfffffcd8:
          goto override_jmp_0ec42dba_case_1;
        }
      }
      uVar14 = uVar15 + 1;
      param_1[4] = uVar14;
                    /* WARNING: Switch is manually overridden */
      switch(uVar14 < uVar20) {
      case true:
        if ((*(char *)(lVar12 + uVar14) == '-') || (*(char *)(lVar12 + uVar14) == '+')) {
          uVar14 = uVar15 + (*(ulonglong *)
                              (*(longlong *)
                                (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8)
                              + 0x2f8) ^ 0xf35379de016c5bb0);
          param_1[4] = uVar14;
                    /* WARNING: Switch is manually overridden */
        }
      }
      lVar7 = 0x6c;
      if (uVar14 < uVar20) {
        lVar7 = 0x48;
      }
      uVar15 = uVar14;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar7)) {
      case 0xfffff4ca:
        do {
          uVar8 = uVar15;
                    /* WARNING: Switch is manually overridden */
          switch((byte)(bVar2 - 0x29) <= (byte)(*(char *)(lVar12 + uVar15) - 0x30U)) {
          case false:
            uVar15 = uVar15 + 1;
            puVar18 = (undefined4 *)&UNK_0ecb9fe0;
            if (uVar15 == uVar20) {
              puVar18 = (undefined4 *)&UNK_0ecb9fb4;
            }
            break;
          case true:
            goto override_jmp_0ec42836_case_0;
          }
          param_1[4] = uVar15;
          uVar8 = uVar20;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar18) {
          case 0xfffffca3:
            goto override_jmp_0ec42836_case_0;
          }
        } while( true );
      }
      break;
    case true:
      goto override_jmp_0ec42dba_case_1;
    }
  }
override_jmp_0ec432e3_case_1:
  uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_0ec42dba_case_1:
  return uVar8 & 0xffffffffffffff01;
override_jmp_0ec43206_case_1:
  puVar9 = (undefined4 *)&UNK_0ecba06c;
  if (uVar15 <= uVar14) {
    puVar9 = (undefined4 *)&UNK_0ecb9fe8;
  }
  uVar8 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar9) {
  case 0xfffffcd8:
    goto override_jmp_0ec42dba_case_1;
  }
  goto override_jmp_0ec433e5_case_1;
override_jmp_0ec42836_case_0:
  lVar12 = 0x6c;
  if (uVar14 < uVar8) {
    lVar12 = 0x50;
  }
  uVar8 = CONCAT71((int7)(int3)((uint)*(undefined4 *)(&UNK_0ecb9f98 + lVar12) >> 8),1);
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecb9f98 + lVar12)) {
  case 0xfffffcd8:
    goto override_jmp_0ec42dba_case_1;
  }
  goto override_jmp_0ec432e3_case_1;
}

