/* ANALYST: Original-byte static decompiler text. The local 155-instruction CFG has seven computed dispatch sites resolved under normal PE TLS; the separately checked fixed literal contains 276 terms. ASCII byte folding and substring-veto semantics are recorded in keyword19_forward_proof.json. This does not establish every transitive helper for arbitrary malformed input. Decompiler diagnostics are retained; no specimen code is executed. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulonglong FUN_0ec41453(longlong param_1,ulonglong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined **ppuVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong unaff_GS_OFFSET;
  undefined **local_60;
  undefined **ppuStack_58;
  ulonglong uStack_50;
  undefined ***pppuStack_48;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x250
           );
  FUN_0ec93b50(&local_60,param_2,'\0',1,1);
  puVar4 = &UINT_0ecb8a74;
  if ((char)local_60 == '\0') {
    puVar4 = &UINT_0ecb8a68;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar4) {
  case 0xfffffffe:
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar11 = uStack_50;
  local_60 = ppuStack_58;
  uStack_50 = 0;
  ppuStack_58 = (undefined **)lVar11;
  FUN_0ec591aa(&local_60,param_2);
  ppuVar3 = local_60;
  uVar6 = 0;
  iVar7 = (int)uVar1;
  uVar8 = uStack_50;
                    /* WARNING: Switch is manually overridden */
  switch(param_2 != 0) {
  case false:
override_jmp_0ec415ab_case_1:
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_0ecc8bb0 != 0x4a433e79 - iVar7) {
    case true:
      local_60 = &PTR_FUN_0ecc8b98;
      pppuStack_48 = &local_60;
      FUN_0ecae072((uint *)&DAT_0ecc8bb0,&pppuStack_48,0xecafaa0);
    }
    break;
  case true:
    do {
      bVar9 = 0x20;
      if ((byte)((byte)uVar1 ^ 99) <= (byte)(*(byte *)(param_1 + uVar6) + 0xbf)) {
        bVar9 = 0;
      }
      *(byte *)((longlong)local_60 + uVar8) = bVar9 | *(byte *)(param_1 + uVar6);
      uVar8 = uVar8 + 1;
      uVar6 = uVar6 + 1;
                    /* WARNING: Switch is manually overridden */
      switch(uVar6 != param_2) {
      case false:
        goto override_jmp_0ec415ab_case_1;
      }
    } while( true );
  }
  lVar11 = (ulonglong)(0x4a433e91 - iVar7) * DAT_0ecc8ba8;
  puVar10 = (undefined8 *)PTR_FUN_0ecc8b98;
                    /* WARNING: Switch is manually overridden */
  switch(lVar11 != 0) {
  case false:
override_jmp_0ec41553_case_0:
    switchD_0ec75e6c::caseD_ec47f80(ppuVar3,(longlong)ppuStack_58,1,1);
    return CONCAT71((int7)(uVar8 >> 8),lVar11 != 0) & 0xffffffff;
  }
  do {
    uVar6 = FUN_0ec5b8e5((byte *)*puVar10,puVar10[2],ppuVar3,uVar8);
    lVar5 = 0x1c;
    if ((char)uVar6 != '\0') {
      lVar5 = 8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&UINT_0ecb8a68 + lVar5)) {
    case 0xf6:
      goto override_jmp_0ec41553_case_0;
    }
    puVar10 = puVar10 + 3;
    lVar11 = lVar11 + -0x18;
                    /* WARNING: Switch is manually overridden */
    switch(lVar11 != 0) {
    case false:
      goto override_jmp_0ec41553_case_0;
    }
  } while( true );
}

