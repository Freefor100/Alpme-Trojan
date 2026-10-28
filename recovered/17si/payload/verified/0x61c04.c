/* CONDITIONAL NORMAL STATIC ANALYSIS: original bytes unchanged. Original PE TLS initializer, source-derived finite targets and explicit normal valid-owned-ABI premises; see accompanying JSON. Non-runnable decompiler text, not originalsource or execution evidence. */

void FUN_08fd1c04(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong *puVar18;
  ulonglong *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong unaff_GS_OFFSET;
  ulonglong local_88 [5];
  undefined8 local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ANALYST_constant_init();
  uVar3 = param_2[2];
  iVar17 = (int)*(undefined8 *)
                 (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                 0x2a0);
                    /* WARNING: Switch is manually overridden */
  switch(uVar3 == 0) {
  case false:
    uVar9 = *param_2;
    local_88[1] = param_2[1];
    local_88[3] = 0;
    local_88[2] = uVar3;
    local_60 = local_88[1];
    local_58 = uVar3;
    *(undefined8 *)((longlong)local_88 + (ulonglong)(iVar17 + 0x40e8413d)) = 0;
    local_88[0] = 1;
    break;
  case true:
    local_88[0] = 0;
    uVar9 = 0;
  }
  *(ulonglong *)((longlong)local_88 + (ulonglong)(iVar17 + 0x40e84125U)) = local_88[0];
  uVar15 = 0x60 - (iVar17 + 0x40e84125U);
  uVar13 = (ulonglong)uVar15;
  *(undefined8 *)((longlong)local_88 + uVar13) = uVar9;
  lVar16 = 0;
  lVar10 = FUN_08f72a33((byte *)local_88);
                    /* WARNING: Switch is manually overridden */
  switch(lVar10 != 0) {
  case true:
switchD_08fd1ecd_caseD_1:
    lVar16 = lVar16 + *(longlong *)(lVar10 + 0x10) + *(longlong *)(uVar13 + 0x10) + 0x10;
    lVar10 = FUN_08f72a33((byte *)local_88);
                    /* WARNING: Switch is manually overridden */
    switch(lVar10 != 0) {
    case true:
      goto switchD_08fd1ecd_caseD_1;
    }
  }
  FUN_08fcb993(local_88,lVar16 + 8U,'\0',1,1);
  uVar13 = local_88[2];
  puVar11 = &UNK_08ff98f8;
  if ((char)local_88[0] != '\0') {
    puVar11 = &UNK_08ff98ec;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar11) {
  case 0xffffff56:
    puVar4 = *(undefined8 **)((longlong)local_88 + (ulonglong)(0xbf17bf03U - iVar17));
    lVar10 = 0x3c;
    if (local_88[2] < 8) {
      lVar10 = 4;
    }
    break;
  case 0xffffffdf:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ff98d0 + lVar10)) {
  case 0xf:
override_jmp_08fd1d95_case_0:
    FUN_08fba6b1(puVar4,uVar13,1,1);
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = 0;
    break;
  case 0x173:
    uVar9 = *param_2;
    uVar14 = -iVar17 + 0xbf17bf03;
    *puVar4 = uVar9;
    uVar6 = param_2[1];
    puVar11 = (undefined4 *)&UNK_08ff98e8;
    if (uVar3 != 0) {
      puVar11 = (undefined4 *)&UNK_08ff98d0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar11) {
    case 0xfffffe71:
    }
    uVar21 = local_88[2] - 8;
    puVar18 = (ulonglong *)((ulonglong)uVar14 + (longlong)puVar4);
    if (uVar3 == 0) {
      uVar9 = 0;
    }
    puVar12 = local_88;
    uVar20 = (ulonglong)(uVar3 != 0);
    local_88[0] = uVar20;
    local_88[1] = uVar6;
    *(ulonglong *)
     ((longlong)local_88 + (ulonglong)((uVar15 ^ 0xd893b5a4) * 0x37767c6f + 0xb8c1b234)) = uVar3;
    local_88[3] = 0;
    local_88[4] = uVar20;
    *(undefined8 *)
     ((longlong)local_88 + (ulonglong)(byte)(((char)(0xbf17bf03U - iVar17) + '(') - (char)uVar14)) =
         uVar6;
    uVar15 = -iVar17 + 0xbf17bf2b;
    *(ulonglong *)((longlong)local_88 + (ulonglong)uVar15) = uVar3;
    uStack_50 = 0;
    uStack_48 = uVar9;
    puVar8 = (undefined8 *)FUN_08f72a33((byte *)local_88);
                    /* WARNING: Switch is manually overridden */
    switch(puVar8 == (undefined8 *)0x0) {
    case false:
      do {
        uVar3 = puVar8[2];
        puVar8 = (undefined8 *)*puVar8;
        puVar11 = (undefined4 *)&UNK_08ff98d8;
        if (uVar21 < 8) {
          puVar11 = (undefined4 *)&UNK_08ff9908;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar11) {
        case 0:
override_jmp_08fd1dc0_case_1:
          goto override_jmp_08fd1d95_case_0;
        case 0xffffffbe:
          *puVar18 = uVar3;
          puVar11 = (undefined4 *)&UNK_08ff9908;
          uVar20 = (uVar21 - 8) - uVar3;
          if (uVar3 <= uVar21 - 8) {
            puVar11 = (undefined4 *)&UNK_08ff98f4;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar11) {
          case 0:
            goto override_jmp_08fd1dc0_case_1;
          case 0xcb:
            puVar19 = puVar18 + 1;
            FUN_08fee630(puVar19,puVar8,uVar3);
            uVar5 = puVar12[2];
            uVar1 = uVar5 + 8;
            puVar11 = (undefined4 *)&UNK_08ff9908;
            uVar21 = uVar20 - uVar1;
            if (uVar1 <= uVar20) {
              puVar11 = (undefined4 *)&UNK_08ff98fc;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar11) {
            case 0:
              goto override_jmp_08fd1dc0_case_1;
            }
          }
        }
        puVar12 = (ulonglong *)*puVar12;
        puVar18 = (ulonglong *)((longlong)puVar19 + uVar1 + uVar3);
        uVar2 = *(ushort *)
                 (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                 0x1d8);
        uVar14 = (uint)DAT_0900c1f8;
        *(ulonglong *)((longlong)puVar19 + uVar3) = uVar5;
        FUN_08fee630((undefined8 *)
                     ((longlong)puVar19 +
                     (((uVar14 ^ uVar2 - uVar15) - uVar15) + 0x6e6a & 0xffff) + uVar3),puVar12,uVar5
                    );
        puVar8 = (undefined8 *)FUN_08f72a33((byte *)local_88);
                    /* WARNING: Switch is manually overridden */
        switch(puVar8 == (undefined8 *)0x0) {
        case true:
          goto override_jmp_08fd1d25_case_1;
        }
      } while( true );
    case true:
override_jmp_08fd1d25_case_1:
      *param_1 = puVar4;
      param_1[1] = uVar13;
      param_1[2] = (lVar16 + 8U) - uVar21;
    }
  }
  return;
}

