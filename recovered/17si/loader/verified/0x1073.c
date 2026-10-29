/* ORIGINAL NTDLL SEARCH HELPER ANALYSIS. Native85/169 instructions and3/11 computed jumps closed under normal TLS, with TLS110DWORD deliberately widenedunknown to retain both ordinary and API-junk paths. Binary-search helper also returns length in RDX; this C signature alone does not describe that Rust ABI. Not original source, not a buildable project. Original instruction bytes unchanged. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140001073(longlong param_1,ulonglong param_2)

{
  char cVar1;
  UINT CodePage;
  DWORD DVar2;
  undefined4 *puVar3;
  HWND pHVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong in_R8;
  ulonglong uVar7;
  _cpinfo a_Stack_68 [3];
  
  puVar3 = &UNK_1400762e0;
  if (param_2 != 0xeee47b33 - (int)DAT_1400d0278) {
    puVar3 = &UNK_1400762dc;
  }
  uVar6 = 0;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar3) {
  case 0:
override_jmp_1400010be_case_1:
    return 0;
  }
  do {
    while( true ) {
      uVar5 = (param_2 - uVar6 >> 1) + uVar6;
      uVar7 = (ulonglong)*(uint *)(param_1 + uVar5 * 0xc);
      cVar1 = (in_R8 < uVar7) - (uVar7 < in_R8);
      if (cVar1 == '\x01') break;
      if (cVar1 != -1) {
        if (_DAT_1400cfe88 == 0x4920209c) {
          CodePage = GetConsoleOutputCP();
          IsValidCodePage(CodePage);
          GetCPInfo(CodePage,a_Stack_68);
          pHVar4 = GetConsoleWindow();
          if ((pHVar4 != (HWND)0x0) &&
             (DVar2 = GetConsoleTitleW((LPWSTR)a_Stack_68,0x20), DVar2 != 0)) {
            GetConsoleCP();
          }
        }
        return 1;
      }
      uVar6 = uVar5 + 1;
                    /* WARNING: Switch is manually overridden */
      switch(param_2 <= uVar6) {
      case true:
        goto override_jmp_1400010be_case_1;
      }
    }
    param_2 = uVar5;
                    /* WARNING: Switch is manually overridden */
    switch(uVar5 <= uVar6) {
    case true:
      goto override_jmp_1400010be_case_1;
    }
  } while( true );
}

