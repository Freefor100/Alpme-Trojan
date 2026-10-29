/* ORIGINAL NTDLL SEARCH HELPER ANALYSIS. Native85/169 instructions and3/11 computed jumps closed under normal TLS, with TLS110DWORD deliberately widenedunknown to retain both ordinary and API-junk paths. Binary-search helper also returns length in RDX; this C signature alone does not describe that Rust ABI. Not original source, not a buildable project. Original instruction bytes unchanged. */

undefined8 FUN_140008319(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  byte bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  uint uVar8;
  longlong lVar9;
  longlong in_R8;
  longlong in_R9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  _union_552 local_80 [2];
  _FILETIME local_78;
  _FILETIME local_70 [6];
  
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar2 = *(undefined8 *)(lVar9 + 0xc0);
  uVar5 = 0;
  uVar13 = 0;
  if (param_2 >= 5) {
    uVar13 = param_2 - 5;
  }
                    /* WARNING: Switch is manually overridden */
  switch(param_2 < 5 || param_2 - 5 == 0) {
  case true:
switchD_140008384_caseD_1:
    return uVar5;
  }
  uVar8 = (uint)uVar2;
  if (*(int *)(lVar9 + 0x110) == -0x59f8c402) {
    GetPhysicallyInstalledSystemMemory((PULONGLONG)&local_80[0].dwOemId);
    GetNativeSystemInfo((LPSYSTEM_INFO)&local_80[0].s);
    GetSystemPowerStatus((LPSYSTEM_POWER_STATUS)&local_80[0].s);
    GetSystemTimes(local_70,&local_78,(LPFILETIME)&local_80[0].s);
    local_80[0].dwOemId = 0x40;
    GlobalMemoryStatusEx((LPMEMORYSTATUSEX)&local_80[0].s);
    GetLargePageMinimum();
    GetSystemInfo((LPSYSTEM_INFO)&local_80[0].s);
    lVar9 = in_R8 + (ulonglong)(uVar8 ^ 0x8bca506);
    puVar7 = &UNK_1400762f0;
    if (param_2 != 0) {
      puVar7 = &UNK_1400762e4;
    }
    uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar7) {
    case 0x122:
override_jmp_14000839d_case_1:
      do {
        bVar4 = (byte)uVar2 ^ 6;
        uVar1 = uVar6 + 1;
                    /* WARNING: Switch is manually overridden */
        switch(*(char *)(param_1 + uVar6) == (byte)(((char)DAT_1400d0088 * bVar4 ^ bVar4) * bVar4))
        {
        case true:
                    /* WARNING: Switch is manually overridden */
          switch(uVar1 < param_2) {
          case false:
override_jmp_140008442_case_1:
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          uVar11 = (uVar8 + 0xf7435aff) + uVar6;
                    /* WARNING: Switch is manually overridden */
          switch(param_2 <= uVar11) {
          case false:
            lVar10 = 0x14;
            if (uVar6 + 3 < param_2) {
              lVar10 = 0x28;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&UNK_1400762e4 + lVar10)) {
            case 0xd6:
              goto override_jmp_140008442_case_1;
            case 0xffffff81:
              uVar12 = (uVar8 ^ 0x8bca507) + uVar6;
                    /* WARNING: Switch is manually overridden */
              switch(uVar12 < param_2) {
              case false:
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              lVar10 = 0x10;
              if ((longlong)
                  CONCAT13(*(undefined1 *)(param_1 + uVar12),
                           CONCAT12(*(undefined1 *)(param_1 + 3 + uVar6),
                                    CONCAT11(*(undefined1 *)(param_1 + uVar11),
                                             *(undefined1 *)(param_1 + 1 + uVar6)))) + uVar6 + lVar9
                  == in_R9) {
                lVar10 = 0x24;
              }
            }
            uVar5 = 1;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&UNK_1400762e4 + lVar10)) {
            case 0xffffffed:
              goto switchD_140008384_caseD_1;
            }
            break;
          case true:
            goto override_jmp_14000839d_case_0;
          }
        }
        lVar10 = 0x38;
        if (uVar1 == uVar13) {
          lVar10 = 0x24;
        }
        uVar5 = 0;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&UNK_1400762e4 + lVar10)) {
        case 0xffffff67:
          puVar7 = &UNK_1400762f0;
          if (uVar1 != param_2) {
            puVar7 = &UNK_1400762e4;
          }
          break;
        case 0xffffffed:
          goto switchD_140008384_caseD_1;
        }
        uVar6 = uVar1;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar7) {
        case 0xd4:
          goto override_jmp_14000839d_case_0;
        }
      } while( true );
    }
  }
  else {
    lVar9 = in_R8 + (ulonglong)(uVar8 ^ 0x8bca506);
    puVar7 = &UNK_1400762f0;
    if (param_2 != 0) {
      puVar7 = &UNK_1400762e4;
    }
    uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar7) {
    case 0x122:
      goto override_jmp_14000839d_case_1;
    }
  }
override_jmp_14000839d_case_0:
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}

