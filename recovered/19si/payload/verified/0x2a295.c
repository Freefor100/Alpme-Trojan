/* CONDITIONAL NORMAL STATIC ANALYSIS: original bytes unchanged. Original PE TLS initializer, source-derived finite targets and explicit normal valid-owned-ABI premises; see accompanying JSON. Non-runnable decompiler text, not originalsource or execution evidence. */

/* WARNING: Switch with 1 destination removed at 0x0ec5a5f5 */
/* WARNING: Switch with 1 destination removed at 0x0ec5abf1 */

void FUN_0ec5a295(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *in_RCX;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong *in_RDX;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  ulonglong *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong unaff_GS_OFFSET;
  undefined8 auStackY_f4237 [124943];
  longlong *plStack_180;
  longlong lStack_178;
  ulonglong local_168 [5];
  ulonglong local_140;
  ulonglong local_138;
  ulonglong uStack_128;
  undefined *local_110;
  ulonglong local_108;
  longlong local_100;
  undefined2 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  longlong local_e0;
  char acStack_d8 [8];
  longlong lStack_d0;
  longlong lStack_c8;
  ulonglong local_c0 [11];
  longlong lStack_68;
  longlong lStack_58;
  longlong lStack_48;
  
  ANALYST_constant_init();
  local_e8 = 0xfe87169447d14dd;
  local_e0 = 0x3f5fcdab692f0ff0;
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x2c8
           );
  local_168[1] = 0;
  local_168[2] = 0;
  local_168[3] = local_168[3] & 0xffffffffffffff00;
  local_168[0] = 1;
  uVar16 = (uint)lVar1;
  uVar17 = 0xf42a3d77 - uVar16;
  local_168[4] = (ulonglong)uVar17;
  local_140 = CONCAT62(local_140._2_6_,0x101);
  local_138 = 0;
  local_110 = &UNK_0ecb631e;
  local_108 = (ulonglong)uVar17;
  local_100 = 0;
  local_f8 = 0x100;
  local_f0 = 0x21;
  FUN_0ec416ad(local_c0,(longlong *)local_168);
  lVar14 = local_100;
  puVar7 = &UNK_0ecb8238;
  if ((char)local_c0[0] == '\0') {
    puVar7 = &UNK_0ecb81dc;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar7) {
  case 0x2b1:
    puVar5 = &UNK_0ecb631e;
    lVar19 = local_c0[1] - local_100;
    local_100 = local_c0[2];
                    /* WARNING: Switch is manually overridden */
LAB_0ec5a424:
    plVar8 = FUN_0ec99abe(0,0x40);
    puVar7 = (undefined4 *)&UNK_0ecb8248;
    if (plVar8 == (longlong *)0x0) {
      puVar7 = (undefined4 *)&UNK_0ecb823c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar7) {
    case 0xbd:
      *plVar8 = (longlong)(puVar5 + lVar14);
      plVar8[1] = lVar19;
      plStack_180 = plVar8;
      lVar14 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
      uVar17 = ((uint)*(undefined8 *)(lVar14 + 0x290) ^ (uint)*(ushort *)(lVar14 + 0x1fc)) + uVar17
               & 0xffff;
      plVar13 = (longlong *)((longlong)local_168 + ((ulonglong)uVar17 - 0x18));
      *plVar13 = 4;
      plVar10 = (longlong *)((longlong)local_168 + ((ulonglong)(uVar17 ^ 0x18) - 0x18));
      *plVar10 = 1;
      puVar18 = local_168;
      puVar26 = local_c0;
      for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
        *puVar26 = *puVar18;
        puVar18 = puVar18 + 1;
        puVar26 = puVar26 + 1;
      }
      pbVar21 = (byte *)((longlong)local_c0 + (ulonglong)(byte)(DAT_0ecca3e4 * -0x75 ^ 0x37));
      lVar19 = 1;
                    /* WARNING: Switch is manually overridden */
      switch(-(uint)*pbVar21) {
      case 0:
        lVar19 = 1;
        do {
          lVar14 = lStack_68;
          FUN_0ec416ad((ulonglong *)acStack_d8,(longlong *)local_c0);
          lVar9 = 0x20;
          if (acStack_d8[0] == '\0') {
            lVar9 = 0x50;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar9)) {
          case 0x244:
            lVar14 = lVar14 + lStack_58;
            lVar24 = lStack_d0 - lStack_58;
            lStack_58 = lStack_c8;
            lVar9 = 0x58;
            if (lVar19 != *plVar13) {
              lVar9 = 4;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar9)) {
            case 0xfffffd81:
              goto override_jmp_0ec5a415_case_0;
            }
            break;
          case 0xfffffe78:
            lVar14 = 0x48;
            if (*pbVar21 == 0) {
              lVar14 = 0x14;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar14)) {
            case 0x458:
              *pbVar21 = 1;
              lVar24 = lStack_48 - lStack_58;
              lVar14 = lStack_58 + lStack_68;
              lVar9 = 0x58;
                    /* WARNING: Switch is manually overridden */
              if (lVar19 != *plVar13) {
                lVar9 = 4;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar9)) {
              case 0xfffffd81:
override_jmp_0ec5a415_case_0:
                FUN_0ec4141b(&plStack_180,1);
                plVar8 = plStack_180;
              }
              break;
            case 0xfffffcdc:
              goto override_jmp_0ec5a55d_case_0;
            }
          }
          lVar9 = (ulonglong)(uVar16 + 0xbd5c2ba) * lVar19;
          *(longlong *)((longlong)plVar8 + lVar9) = lVar14;
          *(longlong *)((longlong)plVar8 + (ulonglong)(0x18 - (uVar16 + 0xbd5c2ba)) + lVar9) =
               lVar24;
          lVar19 = lVar19 + 1;
          *plVar10 = lVar19;
          puVar7 = (undefined4 *)&UNK_0ecb8250;
          if (*pbVar21 == 0) {
            puVar7 = (undefined4 *)&UNK_0ecb81e4;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar7) {
          case 0xfffffcdc:
            goto override_jmp_0ec5a55d_case_0;
          case 0xfffffeaf:
          }
        } while( true );
      case 0xffffffff:
override_jmp_0ec5a55d_case_0:
        lVar14 = *plVar13;
        plVar8 = plStack_180;
      }
      break;
    case 0xfffffe76:
      goto override_jmp_0ec5a456_case_0;
    }
    break;
  case 0xfffffe91:
    lVar19 = 0x30;
    if ((char)local_f8 != '\0') {
      lVar19 = 0x24;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar19)) {
    case 0x472:
      lVar19 = 0;
                    /* WARNING: Switch is manually overridden */
      lVar14 = lVar19;
      plVar8 = (longlong *)&DAT_00000008;
      break;
    case 0xfffffe52:
                    /* WARNING: Switch is manually overridden */
      local_f8 = CONCAT11(local_f8._1_1_,1);
      lVar19 = local_f0 - local_100;
                    /* WARNING: Switch is manually overridden */
      puVar5 = local_110;
      goto LAB_0ec5a424;
    }
  }
  FUN_0ec3a2d6((longlong *)&plStack_180,plVar8,lVar19,&UNK_0ecb3a29);
  switchD_0ec75e6c::caseD_ec47f80(plVar8,lVar14,8,0x10);
  uVar2 = in_RDX[2];
  lVar19 = 0x68;
  if (uVar2 == 0) {
    lVar19 = 0x40;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar19)) {
  case 0xffffff1c:
    lVar14 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    uVar17 = (uint)*(undefined8 *)(lVar14 + 0x348) ^ ~(*(int *)(lVar14 + 400) + 0xc60667b8U);
    uVar6 = uVar17 + 0xf7954278;
    lVar14 = *(longlong *)((longlong)in_RDX + (ulonglong)uVar6);
    uVar12 = *in_RDX;
    *(longlong *)((longlong)local_168 + (ulonglong)uVar6) = lVar14;
    *(ulonglong *)((longlong)local_168 + (ulonglong)(uVar17 + 0xf7954280)) = uVar2;
    local_168[3] = 0;
    *(longlong *)((longlong)local_168 + (ulonglong)(0x30 - uVar6)) = lVar14;
    local_138 = uVar2;
    *(undefined8 *)((longlong)local_168 + (ulonglong)(uVar17 + 0xf79542a8)) = 0;
    local_168[0] = 1;
    break;
  case 0xffffffd1:
    local_168[0] = 0;
    uVar12 = 0;
  }
  lVar24 = 0;
  local_168[4] = local_168[0];
  uStack_128 = uVar12;
  lVar19 = FUN_0ec373c3((byte *)local_168);
  lVar9 = 0x38;
  if (lVar19 == 0) {
    lVar9 = 100;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar9)) {
  case 0x167:
    do {
      lVar24 = -0x5dab8a80 -
               (((-0x5dab8a90 - lVar24) - *(longlong *)(lVar19 + (ulonglong)(uVar16 + 0xbd5c2ba))) -
               *(longlong *)(lVar14 + 0x10));
      lVar19 = FUN_0ec373c3((byte *)local_168);
      lVar9 = 0x38;
      if (lVar19 == 0) {
        lVar9 = 100;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar9)) {
      case 0x1a7:
        goto override_jmp_0ec5a750_case_1;
      }
    } while( true );
  case 0x1a7:
override_jmp_0ec5a750_case_1:
    FUN_0ec93b50(local_168,lVar24 + 8U,'\0',1,1);
    uVar12 = *(ulonglong *)((longlong)local_168 + (ulonglong)(0xf42a3d66 - uVar16));
    lVar14 = 0x10;
    if ((char)local_168[0] != '\0') {
      lVar14 = 0x28;
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar14)) {
  case 0x1f6:
    puVar7 = (undefined4 *)&UNK_0ecb824c;
    if (uVar12 < 8) {
      puVar7 = (undefined4 *)&UNK_0ecb8230;
    }
    uVar27 = (ulonglong)
             (byte)(((char)(0xf42a3d66 - uVar16) +
                    *(char *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                             0x226) * -99) * -0xd);
    puVar18 = *(ulonglong **)((longlong)local_168 + uVar27);
                    /* WARNING: Switch is manually overridden */
    switch(*puVar7) {
    case 0x2e9:
      uVar3 = *in_RDX;
      uVar17 = uVar16 ^ 0xf42a3d5e;
      puVar15 = (undefined8 *)(ulonglong)uVar17;
      uVar28 = ((ulonglong)puVar15 ^ 0xfffffffffffffff0) + uVar12;
      *puVar18 = uVar3;
      uVar22 = (ulonglong)(uVar2 != 0);
      uVar25 = in_RDX[1];
      local_168[0] = uVar22;
      *(ulonglong *)((longlong)local_168 + (ulonglong)uVar17) = uVar25;
      uVar23 = ~*(ulonglong *)
                 (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                 0x50);
      local_168[2] = uVar2;
      *(undefined8 *)((longlong)register0x00000020 + uVar23 + 0xc37aa27a331dc0c1) = 0;
      *(ulonglong *)((longlong)local_168 + (ulonglong)(0x28 - uVar17)) = uVar22;
      local_140 = uVar25;
      *(ulonglong *)((longlong)local_168 + (ulonglong)(0x38 - uVar17)) = uVar2;
      puVar26 = (ulonglong *)((longlong)puVar18 + (longlong)puVar15);
      *(undefined8 *)
       ((longlong)local_168 +
       uVar27 + ((local_e0 + (ulonglong)uVar17) * 0x375c1100acae95fb ^ uVar23 + 0xc37aa27a331dc229))
           = 0;
      *(ulonglong *)((longlong)local_168 + (ulonglong)(0x48 - uVar17)) = uVar3 & -uVar22;
      do {
        puVar11 = (undefined8 *)FUN_0ec373c3((byte *)local_168);
        lVar14 = 0x78;
        if (puVar11 != (undefined8 *)0x0) {
          lVar14 = 0x34;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar14)) {
        case 0:
          uVar2 = puVar11[2];
          puVar11 = (undefined8 *)*puVar11;
          lVar14 = 0x4c;
          if (7 < uVar28) {
            lVar14 = 0x18;
          }
          break;
        case 0xfffffd4b:
          *in_RCX = puVar18;
          in_RCX[1] = uVar12;
          in_RCX[2] = (lVar24 + 8U) - uVar28;
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_0ec5a500_case_0;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&UNK_0ecb81dc + lVar14)) {
        case 0x73:
          uVar28 = uVar28 + lVar1 + -0xef75b81f42a3d5e;
          *puVar26 = uVar2;
          uVar27 = uVar28 - uVar2;
                    /* WARNING: Switch is manually overridden */
          switch(uVar28 < uVar2) {
          case false:
            uVar17 = uVar16 + 0xbd5c2b2;
            puVar20 = (undefined8 *)((longlong)puVar26 + (ulonglong)uVar17);
            FUN_0ecacfd0(puVar20,puVar11,uVar2);
            uVar3 = *(ulonglong *)((longlong)puVar15 + (ulonglong)(uVar17 ^ 0x18));
            uVar25 = (0x10 - uVar17) + uVar3;
            uVar28 = uVar27 - uVar25;
                    /* WARNING: Switch is manually overridden */
            switch(uVar27 < uVar25) {
            case false:
              puVar15 = (undefined8 *)*puVar15;
              puVar26 = (ulonglong *)((longlong)puVar20 + uVar25 + uVar2);
              *(ulonglong *)((longlong)puVar20 + uVar2) = uVar3;
              FUN_0ecacfd0((ulonglong *)((longlong)puVar20 + uVar2) + 1,puVar15,uVar3);
              break;
            case true:
              goto override_jmp_0ec5a5aa_case_0;
            }
            break;
          case true:
            goto override_jmp_0ec5a5aa_case_0;
          }
          break;
        case 0x28b:
          goto override_jmp_0ec5a5aa_case_0;
        }
      } while( true );
    }
override_jmp_0ec5a9c2_case_0:
    switchD_0ec75e6c::caseD_ec47f80(puVar18,uVar12,1,1);
    *in_RCX = 1;
    puVar15 = (undefined8 *)((longlong)in_RCX + (ulonglong)(uVar16 + 0xbd5c2b2));
    *puVar15 = 0;
    puVar15[1] = 0;
override_jmp_0ec5a500_case_0:
    switchD_0ec75e6c::caseD_ec47f80(plStack_180,lStack_178,1,1);
    return;
  }
override_jmp_0ec5a456_case_0:
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
override_jmp_0ec5a5aa_case_0:
                    /* WARNING: Switch is manually overridden */
  goto override_jmp_0ec5a9c2_case_0;
}

