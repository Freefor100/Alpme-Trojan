/* NORMAL INITIALIZATION CONTEXT ONLY; stated TLS/data and valid ABI/owned-object preconditions; specimen bytes unchanged. */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ANALYST_HTTP(void)

{
  LPVOID pvVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code **ppcVar5;
  undefined2 *puVar6;
  uint uVar7;
  code *pcVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  code *pcVar11;
  undefined2 *in_RCX;
  byte bVar12;
  code *in_RDX;
  undefined4 *puVar13;
  longlong lVar14;
  uint *puVar15;
  uint *puVar16;
  code *pcVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  code *pcVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  code *in_R8;
  longlong in_R9;
  longlong lVar26;
  longlong unaff_GS_OFFSET;
  bool bVar27;
  longlong in_stack_00000028;
  longlong in_stack_00000030;
  longlong in_stack_00000038;
  longlong in_stack_00000040;
  ulonglong in_stack_00000048;
  undefined4 uVar28;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar29;
  uint local_180;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  uint uStack_178;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined2 uStack_170;
  undefined4 uStack_16e;
  undefined2 uStack_16a;
  undefined2 uStack_168;
  undefined2 uStack_166;
  undefined2 uStack_164;
  char local_15a;
  char local_159;
  uint *puStack_158;
  ulonglong uStack_150;
  code **ppcStack_148;
  code *pcStack_140;
  longlong lStack_138;
  code *pcStack_130;
  uint uStack_124;
  code *pcStack_120;
  undefined2 *puStack_118;
  ushort local_10c;
  ushort local_10a;
  code *pcStack_108;
  code *apcStack_100 [3];
  ulonglong uStack_e8;
  uint uStack_dc;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined4 uStack_b4;
  undefined4 local_b0;
  uint local_ac;
  code *pcStack_a8;
  code *pcStack_a0;
  code *pcStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 uStack_74;
  LPVOID apvStack_70 [4];
  longlong lStack_50;
  
  uVar29 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  ANALYST_constant_init();
  local_159 = '\b';
  local_90 = 0x10000003f;
  local_10c = 0x1b5d;
  local_ac = 0xf114bf0e;
  local_80 = 0x4443c95e0efbc21;
  local_10a = 0x5a2a;
  local_88 = 0x85b083f9;
  local_15a = '%';
  uVar19 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
            0x250);
  local_b0 = 0x2d0ad5e4;
  puVar13 = &UNK_0ecb8730;
  if (DAT_0ecc8458 == 0) {
    puVar13 = &UNK_0ecb87a8;
  }
  puStack_158 = &local_180;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar13) {
  case 0x902:
    lVar14 = 0x98;
    if ((char)PTR_FUN_0ecc8448 != '\0') {
      lVar14 = 0xe0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
    case 0xc36:
override_jmp_0ec355e7_case_1:
      lVar14 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
      *(undefined8 *)
       ((longlong)in_RCX +
       (ulonglong)
       (((uint)*(undefined8 *)(lVar14 + 0x288) ^ *(uint *)(lVar14 + 0x1b0)) * -0x449ac3fd)) =
           0xffffffffffffffff;
      return;
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case 0xcc3:
    local_180 = 0xecc8448;
    uStack_17c = 0;
    uStack_17a = 0;
    FUN_0ecae072((uint *)&DAT_0ecc8458,&puStack_158,0xecaf8d8);
    lVar14 = 0x98;
    if ((char)PTR_FUN_0ecc8448 != '\0') {
      lVar14 = 0xe0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
    case 0xc36:
      goto override_jmp_0ec355e7_case_1;
    }
  }
  puStack_158 = (uint *)0x589baadfb43e9483;
  local_180 = 0xecb3544;
  uStack_17c = 0;
  uStack_17a = 0;
  uVar24 = (uint)uVar19;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_178 = uVar24 ^ 0x4a433e6e;
  lStack_138 = in_R9;
  puStack_118 = in_RCX;
  *(uint ***)((longlong)apcStack_100 + ((ulonglong)(uVar24 ^ 0x4a433e69) - 0x80)) = &puStack_158;
  puVar13 = (undefined4 *)&UNK_0ecb8754;
  if (_DAT_0ecc7bd0 ==
      (byte)(DAT_0ecca3df * (char)(uVar24 ^ 0x4a433e6e) - (char)(uVar24 ^ 0x4a433e69))) {
    puVar13 = (undefined4 *)&UNK_0ecb8810;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar13) {
  case 0x6b0:
    FUN_0ecae4d7(0xecc7bb8,(undefined8 *)&local_180);
  }
  pcStack_130 = in_RDX;
  pcStack_120 = in_R8;
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecc7bb8,_DAT_0ecc7bc8);
  uVar2 = CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  apcStack_100[0] = (code *)0x98208596ced37374;
  puStack_158 = (uint *)&UNK_0ecb2487;
  *(undefined8 *)((longlong)apcStack_100 + ((ulonglong)(0x4a433e81 - uVar24) - 0x58)) = 0x2d;
  ppcStack_148 = apcStack_100;
                    /* WARNING: Switch is manually overridden */
  switch(_DAT_0ecc7c90 == 0) {
  case false:
    FUN_0ecae4d7(0xecc7c78,&puStack_158);
  }
  FUN_0ec7473d(&puStack_158,_DAT_0ecc7c78,_DAT_0ecc7c88);
  puVar16 = puStack_158;
  pcStack_a8 = (code *)FUN_0ec3249d(-0x7a4f7bef,uVar2,-0x1ace6ed8,puStack_158);
  switchD_0ec75e6c::caseD_ec47f80(puVar16,uStack_150,1,1);
  switchD_0ec75e6c::caseD_ec47f80
            ((LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180)),
             CONCAT26(uStack_172,CONCAT24(uStack_174,uStack_178)),1,1);
  apcStack_100[0] = (code *)(-0x2e2b104e3bcdcded - uVar19);
  local_180 = 0xecb62a4;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x17;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_170 = SUB82(apcStack_100,0);
  uVar3 = uStack_170;
  uStack_16e = (undefined4)((ulonglong)apcStack_100 >> 0x10);
  uVar28 = uStack_16e;
  uStack_16a = (undefined2)((ulonglong)apcStack_100 >> 0x30);
  uVar4 = uStack_16a;
  iVar18 = 0x79eef39a - (int)apcStack_100[0];
                    /* WARNING: Switch is manually overridden */
  switch(_DAT_0ecc7840 != iVar18) {
  case true:
    FUN_0ecae4d7(0xecc7828,(undefined8 *)&local_180);
  }
  FUN_0ec7473d(&puStack_158,_DAT_0ecc7828,_DAT_0ecc7838);
  puVar16 = puStack_158;
  apcStack_100[0] = (code *)0x3cfa948ee0e9ab9a;
  local_180 = 0xecb23f1;
  uStack_17c = 0;
  uStack_17a = 0;
  *(undefined8 *)((longlong)apcStack_100 + ((ulonglong)(uVar24 ^ 0x4a433e71) - 0x80)) = 0x1f;
  lVar14 = 8;
  if (_DAT_0ecc8390 == 0) {
    lVar14 = 0xe8;
  }
  uStack_170 = uVar3;
  uStack_16e = uVar28;
  uStack_16a = uVar4;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0xfffffc6e:
    FUN_0ecae4d7(0xecc8378,(undefined8 *)&local_180);
  }
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecc8378,_DAT_0ecc8388);
  pvVar1 = (LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  pcStack_c0 = (code *)FUN_0ec3249d(-0x7a4f7bef,puVar16,-0x51ca5dfa,pvVar1);
  switchD_0ec75e6c::caseD_ec47f80(pvVar1,CONCAT26(uStack_172,CONCAT24(uStack_174,uStack_178)),1,1);
  switchD_0ec75e6c::caseD_ec47f80(puStack_158,uStack_150,1,1);
  apcStack_100[0] = (code *)(uVar19 ^ 0x34ee1ea735580e3b);
  local_180 = 0xecb364f;
  uStack_17c = 0;
  uStack_17a = 0;
  uVar23 = (uint)apcStack_100[0] ^ 0x7f1b304a;
  *(undefined8 *)((longlong)apcStack_100 + ((ulonglong)uVar23 - 0x80)) = 0x17;
  uStack_170 = uVar3;
  uStack_16e = uVar28;
  uStack_16a = uVar4;
                    /* WARNING: Switch is manually overridden */
  switch(_DAT_0ecc8170 == (_DAT_0eccaef4 * -0x16ed584d - iVar18) * 0x57676e8f) {
  case false:
    FUN_0ecae4d7(0xecc8158,(undefined8 *)&local_180);
  }
  FUN_0ec7473d(&puStack_158,_DAT_0ecc8158,_DAT_0ecc8168);
  puVar16 = puStack_158;
  apcStack_100[0] = (code *)0x9f019c2386f821b3;
  local_180 = 0xecb22e8;
  uStack_17c = 0;
  uStack_17a = 0;
  uVar7 = 0x4a433ea1 - uVar24;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_178 = uVar7;
  *(code ***)((longlong)apcStack_100 + ((ulonglong)(uVar7 ^ 0x38) - 0x80)) = apcStack_100;
  lVar14 = 0xec;
  if (_DAT_0ecc6f98 ==
      (*(int *)(*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
               0x1b4) * 0x164edfa7 - uVar23) + uVar7) {
    lVar14 = 0x1c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0xfffffe84:
    FUN_0ecae4d7(0xecc6f80,(undefined8 *)&local_180);
  }
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecc6f80,_DAT_0ecc6f90);
  pvVar1 = (LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  uVar23 = uVar24 ^ 0xcff3ba68;
  uStack_d8 = (code *)FUN_0ec3249d(uVar23,puVar16,uVar23 + 0x22210502,pvVar1);
  switchD_0ec75e6c::caseD_ec47f80(pvVar1,CONCAT26(uStack_172,CONCAT24(uStack_174,uStack_178)),1,1);
  switchD_0ec75e6c::caseD_ec47f80
            (puStack_158,
             *(longlong *)((longlong)apcStack_100 + ((ulonglong)(0x85b08419 - uVar23) - 0x58)),1,1);
  apcStack_100[0] = (code *)0xf3c7770f40957e72;
  local_180 = 0xecb120a;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x17;
  uStack_174 = 0;
  uStack_172 = 0;
  lVar14 = 0xb0;
  if (_DAT_0ecc7108 == -0x7a4f7bef - uVar23) {
    lVar14 = 0x3c;
  }
  uStack_170 = uVar3;
  uStack_16e = uVar28;
  uStack_16a = uVar4;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0x106e:
    FUN_0ecae4d7(0xecc70f0,(undefined8 *)&local_180);
  }
  FUN_0ec7473d(&puStack_158,_DAT_0ecc70f0,_DAT_0ecc7100);
  puVar16 = puStack_158;
  apcStack_100[0] = (code *)0x36d5c553398d1e42;
  local_180 = 0xecb5c91;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x24;
  uStack_174 = 0;
  uStack_172 = 0;
  bVar12 = local_15a * 'K' + 0x29;
  puVar15 = (uint *)&UNK_0ecb8804;
  if (_DAT_0ecc7188 == bVar12) {
    puVar15 = &switchD_0ec74bdc::switchdataD_0ecb8714;
  }
  uStack_170 = uVar3;
  uStack_16e = uVar28;
  uStack_16a = uVar4;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar15) {
  case 0x107f:
    FUN_0ecae4d7(0xecc7170,(undefined8 *)&local_180);
  }
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecc7170,_DAT_0ecc7180);
  pvVar1 = (LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  pcStack_a0 = (code *)FUN_0ec3249d(-0x7a4f7bef,puVar16,-0x4ac1a353,pvVar1);
  switchD_0ec75e6c::caseD_ec47f80(pvVar1,CONCAT26(uStack_172,CONCAT24(uStack_174,uStack_178)),1,1);
  uVar7 = uVar24 ^ 0x4a433e71;
  switchD_0ec75e6c::caseD_ec47f80
            (puStack_158,*(longlong *)((longlong)apcStack_100 + ((ulonglong)uVar7 - 0x58)),1,1);
  puStack_158 = (uint *)((*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                           0x90) - (ulonglong)(uVar23 + 0x22210502)) + -0x175ffd2b698fac44);
  local_180 = 0xecb114c;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x1f - uVar7;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_170 = SUB82(&puStack_158,0);
  uStack_16e = (undefined4)((ulonglong)&puStack_158 >> 0x10);
  uStack_16a = (undefined2)((ulonglong)&puStack_158 >> 0x30);
  puVar16 = (uint *)&UNK_0ecb87ac;
  if (_DAT_0ecca2f8 ==
      (((uint)_DAT_0ecca3ac * 0x4497 + (uint)bVar12 + uVar7) - (uint)bVar12 & 0xffff)) {
    puVar16 = &switchD_0ec74bdc::switchdataD_0ecb870c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar16) {
  case 0x926:
    FUN_0ecae4d7(0xecca2e0,(undefined8 *)&local_180);
  }
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecca2e0,_DAT_0ecca2f0);
  uVar2 = CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  apcStack_100[0] = (code *)0xd0e1f98a1af9cdb4;
  puStack_158 = (uint *)&UNK_0ecb3230;
  *(undefined8 *)((longlong)apcStack_100 + ((ulonglong)(uVar24 ^ 0x4a433e71) - 0x58)) = 0x22;
  puVar13 = (undefined4 *)&UNK_0ecb87f8;
  if (_DAT_0ecc8d98 == 0) {
    puVar13 = (undefined4 *)&UNK_0ecb87b0;
  }
  ppcStack_148 = apcStack_100;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar13) {
  case 0xfffffff4:
    FUN_0ecae4d7(0xecc8d80,&puStack_158);
  }
  FUN_0ec7473d(&puStack_158,DAT_0ecc8d80,DAT_0ecc8d90);
  puVar16 = puStack_158;
  uStack_e8 = uVar19;
  pcStack_d0 = (code *)FUN_0ec3249d(uVar24 + 0x3b6d4598,uVar2,0x3a0d62c6,puStack_158);
  switchD_0ec75e6c::caseD_ec47f80(puVar16,uStack_150,1,1);
  switchD_0ec75e6c::caseD_ec47f80
            ((LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180)),
             CONCAT26(uStack_172,CONCAT24(uStack_174,uStack_178)),1,1);
  apcStack_100[0] = (code *)0x4c8a930a25f87ae8;
  local_180 = 0xecb5ebd;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x17;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_170 = SUB82(apcStack_100,0);
  uVar3 = uStack_170;
  uStack_16e = (undefined4)((ulonglong)apcStack_100 >> 0x10);
  uVar28 = uStack_16e;
  uStack_16a = (undefined2)((ulonglong)apcStack_100 >> 0x30);
  uVar4 = uStack_16a;
  lVar14 = 0x8c;
  if (DAT_0ecc9328 == -0x7a4f7bef - (uVar24 + 0x3b6d4598)) {
    lVar14 = 0x48;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0x2bd:
    FUN_0ecae4d7(0xecc9310,(undefined8 *)&local_180);
  }
  FUN_0ec7473d(&puStack_158,_DAT_0ecc9310,_DAT_0ecc9320);
  puVar16 = puStack_158;
  apcStack_100[0] = (code *)0x74229eedc0b4b901;
  local_180 = 0xecb26a1;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x1d;
  uStack_174 = 0;
  uStack_172 = 0;
  lVar14 = 0x54;
  if (_DAT_0ecc96c0 == 0) {
    lVar14 = 0xf4;
  }
  uStack_170 = uVar3;
  uStack_16e = uVar28;
  uStack_16a = uVar4;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0x146e:
    FUN_0ecae4d7(0xecc96a8,(undefined8 *)&local_180);
  }
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecc96a8,_DAT_0ecc96b8);
  pvVar1 = (LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  pcStack_98 = (code *)FUN_0ec3249d(-0x7a4f7bef,puVar16,0x4cc765d1,pvVar1);
  iVar18 = (int)uStack_e8;
  uVar23 = iVar18 + 0xb5bcc18f;
  switchD_0ec75e6c::caseD_ec47f80
            (pvVar1,*(longlong *)((longlong)apcStack_100 + ((ulonglong)uVar23 - 0x80)),1,1);
  switchD_0ec75e6c::caseD_ec47f80(puStack_158,uStack_150,1,1);
  puStack_158 = (uint *)0x9941475a69fccda0;
  local_180 = 0xecb2fb6;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x17;
  uStack_174 = 0;
  uStack_172 = 0;
  uVar24 = iVar18 + 0xb5bcc197;
  *(uint ***)((longlong)apcStack_100 + ((ulonglong)uVar24 - 0x80)) = &puStack_158;
  lVar14 = 0x90;
  if (_DAT_0ecc7e78 == 8 - uVar23) {
    lVar14 = 0x6c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0x60e:
    FUN_0ecae4d7(0xecc7e60,(undefined8 *)&local_180);
  }
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecc7e60,_DAT_0ecc7e70);
  uVar2 = CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  apcStack_100[0] = (code *)0x6853023565548907;
  puStack_158 = (uint *)&DAT_0ecb33e3;
  bVar12 = (DAT_0ecca3da - ((byte)uVar24 ^ (byte)uVar23)) * -0x75;
  uStack_150 = (ulonglong)bVar12;
  *(code ***)((longlong)apcStack_100 + ((ulonglong)(bVar12 ^ 0x32) - 0x58)) = apcStack_100;
                    /* WARNING: Switch is manually overridden */
  switch(_DAT_0ecc9e10 == 0x22 - (uint)bVar12) {
  case false:
    FUN_0ecae4d7(0xecc9df8,&puStack_158);
  }
  FUN_0ec7473d(&puStack_158,_DAT_0ecc9df8,_DAT_0ecc9e08);
  puVar16 = puStack_158;
  uVar24 = uVar23 + (8 - uVar23) + (int)local_88 ^ uVar24;
  uStack_c8 = (code *)FUN_0ec3249d(uVar24,uVar2,0x25ff78d6,puStack_158);
  switchD_0ec75e6c::caseD_ec47f80(puVar16,uStack_150,1,1);
  switchD_0ec75e6c::caseD_ec47f80
            ((LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180)),
             *(longlong *)((longlong)apcStack_100 + ((ulonglong)(uVar24 + 0x7a4f7bf7) - 0x80)),1,1);
  uVar19 = uStack_e8;
  apcStack_100[0] = (code *)0x5ad19f001b06d9f7;
  local_180 = 0xecb3abb;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x17;
  uStack_174 = 0;
  uStack_172 = 0;
  uStack_170 = SUB82(apcStack_100,0);
  uStack_16e = (undefined4)((ulonglong)apcStack_100 >> 0x10);
  uStack_16a = (undefined2)((ulonglong)apcStack_100 >> 0x30);
  lVar14 = 0xd8;
  if (_DAT_0ecc7d58 == -((int)_DAT_0ecc9f98 + 0x2c586818)) {
    lVar14 = 0x9c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0xfffffdc8:
    FUN_0ecae4d7(0xecc7d40,(undefined8 *)&local_180);
  }
  FUN_0ec7473d(&puStack_158,_DAT_0ecc7d40,_DAT_0ecc7d50);
  puVar16 = puStack_158;
  apcStack_100[0] = (code *)(uVar19 ^ 0x4918c8731455be12);
  local_180 = 0xecb6bbc;
  uStack_17c = 0;
  uStack_17a = 0;
  iVar18 = (int)apcStack_100[0];
  uStack_178 = iVar18 + -0x5e16804f;
  uStack_174 = 0;
  uStack_172 = 0;
  *(code ***)((longlong)apcStack_100 + ((ulonglong)(iVar18 + 0xa1e97fa5) - 0x80)) = apcStack_100;
  iVar18 = 0x5e16806b - iVar18;
  lVar14 = 200;
  if (_DAT_0ecc6018 == iVar18) {
    lVar14 = 0x10c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0xa1c:
    FUN_0ecae4d7(0xecc6000,(undefined8 *)&local_180);
  }
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecc6000,_DAT_0ecc6010);
  pvVar1 = (LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  uVar24 = (uint)uVar19;
  iVar21 = -uVar24 + 0x158deb96;
  pcStack_140 = (code *)FUN_0ec3249d(-0x7a4f7bef,puVar16,iVar21,pvVar1);
  switchD_0ec75e6c::caseD_ec47f80(pvVar1,CONCAT26(uStack_172,CONCAT24(uStack_174,uStack_178)),1,1);
  switchD_0ec75e6c::caseD_ec47f80(puStack_158,uStack_150,1,1);
  puStack_158 = (uint *)0xcb2d105a05d1ddfd;
  local_180 = 0xecb2df8;
  uStack_17c = 0;
  uStack_17a = 0;
  uStack_178 = 0x17;
  uStack_174 = 0;
  uStack_172 = 0;
  *(uint ***)((longlong)apcStack_100 + ((ulonglong)(-uVar24 + 0x4a433e89) - 0x80)) = &puStack_158;
  lVar14 = 0xf8;
  if (_DAT_0ecc6038 == (byte)-~DAT_0ecca3e9) {
    lVar14 = 0x104;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
  case 0xd58:
    FUN_0ecae4d7(0xecc6020,(undefined8 *)&local_180);
  }
  FUN_0ec7473d((undefined8 *)&local_180,_DAT_0ecc6020,_DAT_0ecc6030);
  uVar2 = CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180));
  apcStack_100[0] = (code *)0x872606d7da29069d;
  puStack_158 = (uint *)&UNK_0ecb60c6;
  uStack_150 = 0x22;
  uVar23 = (iVar21 * 2 - iVar18) - (uint)local_10a & 0xffff;
  *(code ***)((longlong)apcStack_100 + ((ulonglong)uVar23 - 0x58)) = apcStack_100;
  puVar13 = (undefined4 *)&UNK_0ecb8758;
  if (_DAT_0ecc8088 == (uVar23 ^ 0x10)) {
    puVar13 = (undefined4 *)&UNK_0ecb87c0;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar13) {
  case 0x35b:
    FUN_0ecae4d7(0xecc8070,&puStack_158);
  }
  FUN_0ec7473d(&puStack_158,_DAT_0ecc8070,_DAT_0ecc8080);
  puVar16 = puStack_158;
  lVar14 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  uVar7 = ((uint)*(undefined8 *)(lVar14 + 0x268) ^ (int)local_80 + iVar18) * -0x448bc6a5 - iVar18;
  pcStack_108 = (code *)FUN_0ec3249d(-0x7a4f7bef,uVar2,uVar7,puStack_158);
  switchD_0ec75e6c::caseD_ec47f80(puVar16,uStack_150,1,1);
  switchD_0ec75e6c::caseD_ec47f80
            ((LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180)),
             CONCAT26(uStack_172,CONCAT24(uStack_174,uStack_178)),1,1);
  lVar26 = in_stack_00000038 + in_stack_00000030;
  local_180 = (uint)in_stack_00000030;
  uStack_17c = (undefined2)((ulonglong)in_stack_00000030 >> 0x20);
  uStack_17a = (undefined2)((ulonglong)in_stack_00000030 >> 0x30);
  uStack_178 = (uint)lVar26;
  uStack_174 = (undefined2)((ulonglong)lVar26 >> 0x20);
  uStack_172 = (undefined2)((ulonglong)lVar26 >> 0x30);
  uVar23 = 0;
  uStack_170 = 0;
  uStack_168 = 1;
  uStack_166 = 0;
  FUN_0ec592ed(apvStack_70,(longlong *)&local_180);
  local_180 = (uint)lStack_138;
  uStack_17c = (undefined2)((ulonglong)lStack_138 >> 0x20);
  uStack_17a = (undefined2)((ulonglong)lStack_138 >> 0x30);
  *(longlong *)((longlong)apcStack_100 + ((ulonglong)(uVar7 + 0xaadf7e81) - 0x80)) =
       in_stack_00000028 + lStack_138;
  uStack_170 = 0;
  *(undefined2 *)((longlong)apcStack_100 + ((ulonglong)(uVar7 + 0xaadf7e91) - 0x80)) = 1;
  *(undefined2 *)
   ((longlong)apcStack_100 +
   ((ulonglong)
    ((((uint)*(undefined8 *)(lVar14 + 0x250) ^ local_ac) * 0x35850f87 + -0x1a9af383) * -0x79793d2d)
   - 0x80)) = 0;
  FUN_0ec592ed(apvStack_70 + 3,(longlong *)&local_180);
  local_180 = (uint)pcStack_130;
  uStack_17c = (undefined2)((ulonglong)pcStack_130 >> 0x20);
  uStack_17a = (undefined2)((ulonglong)pcStack_130 >> 0x30);
  *(code **)((longlong)apcStack_100 + ((ulonglong)(0x5520818f - uVar7) - 0x80)) =
       pcStack_120 + (longlong)pcStack_130;
  *(undefined2 *)((longlong)apcStack_100 + ((ulonglong)(0x55208197 - uVar7) - 0x80)) = 0;
  *(undefined2 *)((longlong)apcStack_100 + ((ulonglong)(uVar7 ^ 0x5520819f) - 0x80)) = 1;
  uStack_166 = 0;
  FUN_0ec592ed(apcStack_100,(longlong *)&local_180);
  pcVar22 = apcStack_100[0];
  pcVar8 = pcStack_108;
  puVar6 = puStack_118;
  puVar13 = (undefined4 *)&UNK_0ecb8740;
  if (in_stack_00000048 == uVar7 + 0xaadf7e79) {
    puVar13 = (undefined4 *)&UNK_0ecb8770;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar13) {
  case 0x1195:
    break;
  case 0x11fd:
    bVar27 = 0x4a433e78 - uVar24 < in_stack_00000048;
    uVar23 = (uint)in_stack_00000048 & (uint)(-(ulonglong)bVar27 >> 0x20) ^ (uint)in_stack_00000048;
    lVar14 = 0x2c;
    if (bVar27) {
      lVar14 = 0xd0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
    case 0x339:
      *(undefined8 *)(puStack_118 + 8) = 0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
      goto override_jmp_0ec3501c_case_0;
    case 0x119f:
    }
  }
  lVar14 = (*pcStack_140)(_DAT_0ecc8450,apcStack_100[0],0x1bb,0);
  pcStack_130 = pcVar8;
  if (lVar14 == 0) {
    pcStack_130 = (code *)0x0;
  }
  lVar26 = 0x7c;
  if (lVar14 == 0) {
    lVar26 = 0xc4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar26)) {
  case 0xa2f:
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_0ec3501c_case_0;
  case 0xe03:
    uVar20 = 0;
    uVar28 = 0;
    pcStack_140 = pcVar22;
    lStack_138 = lVar14;
    pcVar11 = (code *)(*uStack_c8)(lVar14,apvStack_70[0],apvStack_70[3],0,0,0,
                                   CONCAT44(uVar29,0x800000));
    puVar16 = &UINT_0ecb8720;
    if (pcVar11 == (code *)0x0) {
      puVar16 = (uint *)&UNK_0ecb87e4;
    }
  }
  pcStack_120 = pcVar11;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar16) {
  case 0xfffffd83:
    iVar18 = (*pcStack_d0)(pcVar11,0,0,0,uVar20 & 0xffffffff00000000,CONCAT44(uVar28,uVar23),0);
    puVar13 = (undefined4 *)&UNK_0ecb87c4;
    if (iVar18 == 0) {
      puVar13 = (undefined4 *)&UNK_0ecb879c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar13) {
    case 0x8d1:
      puVar9 = FUN_0ec99abe(0,(ulonglong)(uVar24 ^ 0x4a433e52));
                    /* WARNING: Switch is manually overridden */
      switch(puVar9 == (undefined8 *)0x0) {
      case false:
        *(undefined8 *)((longlong)puVar9 + 0x1b) = 0x697720656c626974;
        *(undefined8 *)((longlong)puVar9 + 0x23) = 0x37312b2b43206874;
        puVar9[2] = 0x6f636e692073746e;
        puVar9[3] = 0x656c62697461706d;
        *puVar9 = 0x72616e6967616d69;
        puVar9[1] = 0x6174736e6f632079;
        FUN_0ec5bcd7((longlong *)&local_180,(longlong)puVar9,
                     (ulonglong)(uVar24 + 0xb5bcc1b2) + (longlong)puVar9);
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        puStack_158 = &local_180;
        switchD_0ec75e6c::caseD_ec47f80
                  ((LPVOID)CONCAT26(uStack_17a,CONCAT24(uStack_17c,local_180)),
                   CONCAT26(uStack_172,CONCAT24(uStack_174,uStack_178)),1,1);
        switchD_0ec75e6c::caseD_ec47f80(puVar9,(ulonglong)(uVar24 + 0xb5bcc1b2),1,1);
        pcVar17 = pcStack_130;
        pcVar22 = pcStack_140;
        lVar14 = lStack_138;
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
override_jmp_0ec355c3_case_0:
                    /* WARNING: Does not return */
        pcVar22 = (code *)invalidInstructionException();
        (*pcVar22)();
      }
      break;
    case 0xe62:
      uVar20 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(in_stack_00000048 == uVar7 + 0xaadf7e79) {
      case false:
        do {
          uVar7 = uVar24 + 0xb5bcc186;
          uVar23 = uVar24 + 0xb5bcc1a7;
          uVar10 = in_stack_00000048 - uVar20 << ((byte)uVar23 & 0x3f);
          lVar14 = 0x40;
          if ((ulonglong)uVar7 < in_stack_00000048 - uVar20) {
            lVar14 = 0x70;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
          case 0xffffff74:
            uVar10 = (ulonglong)
                     ((uVar7 ^ uVar23) *
                     ((uint)*(undefined8 *)
                             (*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                             0x2f0) ^ ~-(uint)local_10c)) & 0xffff;
          }
          local_180 = 0;
          iVar18 = (*pcStack_c0)(pcStack_120,in_stack_00000040 + uVar20,
                                 -(uint)((uVar10 & 1) != 0) |
                                 (uint)(uVar10 >> ((byte)uVar23 & 0x3f)),&local_180);
          uVar25 = 0x58;
          if ((ulonglong)local_180 == 0) {
            uVar25 = 0x14;
          }
          uVar10 = (ulonglong)uVar25;
          if (iVar18 == ((uint)local_90 ^ uVar23) - (uVar7 + uVar23)) {
            uVar10 = 0x14;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + uVar10)) {
          case 0x53a:
            *(undefined8 *)(puStack_118 + 8) = 0xffffffffffffffff;
            pcVar8 = pcStack_108;
            pcVar17 = pcStack_130;
            pcVar11 = pcStack_120;
            pcVar22 = pcStack_140;
            lVar14 = lStack_138;
            goto override_jmp_0ec3588c_case_0;
          }
          uVar20 = uVar20 + local_180;
                    /* WARNING: Switch is manually overridden */
          switch(in_stack_00000048 <= uVar20) {
          case true:
            goto override_jmp_0ec35b51_case_1;
          }
        } while( true );
      }
override_jmp_0ec35b51_case_1:
      pcVar11 = pcStack_120;
      pcVar8 = pcStack_120;
      iVar18 = (*uStack_d8)(pcStack_120,0);
      puVar6 = puStack_118;
                    /* WARNING: Switch is manually overridden */
      switch(iVar18 != 0) {
      case false:
        *(undefined8 *)(puStack_118 + 8) = 0xffffffffffffffff;
        pcVar8 = pcStack_108;
        pcVar17 = pcStack_130;
        pcVar22 = pcStack_140;
        lVar14 = lStack_138;
                    /* WARNING: Switch is manually overridden */
        break;
      case true:
        uStack_b4 = 0;
        uStack_74 = 4;
        uVar23 = (*pcStack_a0)(pcVar11,0x20000013,0,&uStack_b4,&uStack_74,0);
        pcVar22 = pcStack_140;
        uStack_d8 = (code *)(CONCAT44(uStack_d8._4_4_,uVar24) ^ 0x4a433e79);
                    /* WARNING: Switch is manually overridden */
        switch((uVar23 != (uVar24 ^ 0x4a433e79)) * '\x02') {
        case '\0':
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          pcVar17 = pcStack_130;
          lVar14 = lStack_138;
          pcStack_140 = pcVar8;
                    /* WARNING: Switch is manually overridden */
          break;
        case '\x01':
          goto override_jmp_0ec34b45_case_0;
        case '\x02':
          puStack_158 = (uint *)0x1;
          uVar23 = uVar24 ^ 0x4a433e71;
          pcVar8 = (code *)((longlong)apcStack_100 + ((ulonglong)uVar23 - 0x58));
          *(longlong *)pcVar8 = 0;
          *(undefined8 *)((longlong)apcStack_100 + ((ulonglong)uVar23 - 0x50)) = 0;
          uStack_124 = 0;
          iVar18 = (*pcStack_a8)(pcVar11);
          uStack_c8 = (code *)(CONCAT44(uStack_c8._4_4_,uVar24) ^ 0x4a433e71);
          pcStack_d0 = (code *)CONCAT44(pcStack_d0._4_4_,8 - uVar23);
          pcStack_140 = pcVar8;
                    /* WARNING: Switch is manually overridden */
          switch(iVar18 == 8 - uVar23) {
          case false:
            pcStack_c0 = (code *)(ulonglong)(uVar24 ^ 0x4a433e71);
            puVar16 = &UINT_0ecb8728;
            if (uStack_124 != 0x4a433e79 - uVar24) {
              puVar16 = (uint *)&UNK_0ecb87dc;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar16) {
            case 0x82e:
override_jmp_0ec35984_case_0:
              uStack_17a = SUB82(puStack_158,0);
              uStack_178 = (uint)((ulonglong)puStack_158 >> 0x10);
              uStack_174 = (undefined2)((ulonglong)puStack_158 >> 0x30);
              uStack_172 = (undefined2)uStack_150;
              uStack_170 = (undefined2)(uStack_150 >> 0x10);
              uStack_16e = (undefined4)(uStack_150 >> 0x20);
              uStack_16a = SUB82(ppcStack_148,0);
              uStack_168 = (undefined2)((ulonglong)ppcStack_148 >> 0x10);
              uStack_166 = (undefined2)((ulonglong)ppcStack_148 >> 0x20);
              uStack_164 = (undefined2)((ulonglong)ppcStack_148 >> 0x30);
              *puStack_118 = (undefined2)uStack_b4;
              *(uint *)(puStack_118 + 1) = local_180;
              *(uint *)(puStack_118 + 3) = CONCAT22(uStack_17a,uStack_17c);
              *(uint *)(puStack_118 + 5) = uStack_178;
              *(uint *)(puStack_118 + 7) = CONCAT22(uStack_172,uStack_174);
              *(ulonglong *)(puStack_118 + 8) = uStack_150;
              *(code ***)(puStack_118 + 0xc) = ppcStack_148;
              (*pcStack_108)(pcVar11);
              (*pcStack_130)(lStack_138);
              break;
            case 0xd0e:
              do {
                uVar24 = uStack_124;
                uStack_dc = 0;
                FUN_0ec93b50((undefined8 *)&local_180,(ulonglong)uStack_124,'\x01',1,1);
                puVar13 = (undefined4 *)&UNK_0ecb8780;
                if ((char)local_180 != '\0') {
                  puVar13 = (undefined4 *)&UNK_0ecb8764;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar13) {
                case 0xd3:
                  lVar14 = CONCAT26(uStack_16a,CONCAT42(uStack_16e,uStack_170));
                  puVar9 = *(undefined8 **)((longlong)&local_180 + (longlong)pcStack_c0);
                  iVar18 = (*pcStack_98)(pcVar11,puVar9,uStack_124,&uStack_dc);
                  uVar23 = uStack_dc;
                  puVar13 = (undefined4 *)&UNK_0ecb877c;
                  if (iVar18 == 0x4a433e79 - (int)uVar19) {
                    puVar13 = (undefined4 *)&UNK_0ecb8738;
                  }
                  break;
                case 0x337:
                  goto override_jmp_0ec355c3_case_0;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar13) {
                case 0xf84:
                  *(undefined8 *)((longlong)puStack_118 + (ulonglong)(0x4a433e89 - (int)uVar19)) =
                       0xffffffffffffffff;
                  switchD_0ec75e6c::caseD_ec47f80(puVar9,lVar14,1,1);
                    /* WARNING: Switch is manually overridden */
                  goto override_jmp_0ec356dd_case_0;
                case 0xfffffd5d:
                  uVar19 = (ulonglong)uStack_dc;
                  lVar26 = 0xb4;
                  if (uVar24 < uStack_dc) {
                    lVar26 = 0x84;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar26)) {
                  case 0x1ae:
                    /* WARNING: Switch is manually overridden */
                    goto override_jmp_0ec355c3_case_0;
                  case 0x894:
                    FUN_0ec591aa(&puStack_158,uVar19);
                    ppcVar5 = ppcStack_148;
                    lVar26 = 0x34;
                    if (uVar23 == ((uint)uStack_e8 ^ 0xb5bcc186) + 1) {
                      lVar26 = 0x100;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar26)) {
                    case 0xfffffa8b:
                      FUN_0ecacfd0((undefined8 *)((longlong)puStack_158 + (longlong)ppcStack_148),
                                   puVar9,uVar19);
                    }
                    ppcStack_148 = (code **)((longlong)ppcVar5 + uVar19);
                    switchD_0ec75e6c::caseD_ec47f80(puVar9,lVar14,1,1);
                    pcVar11 = pcStack_120;
                    uStack_124 = 0;
                    iVar18 = (*pcStack_a8)(pcStack_120);
                    lVar14 = 0x60;
                    if (iVar18 == 0) {
                      lVar14 = 0x88;
                    }
                    uVar19 = uStack_e8;
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)((longlong)&UINT_0ecb8708 + lVar14)) {
                    case 0x9b2:
                      goto override_jmp_0ec3492f_case_0;
                    case 0x1443:
                      puVar16 = (uint *)&UNK_0ecb87dc;
                      if (uStack_124 == 0x4a433e79U - (int)uStack_e8) {
                        puVar16 = &UINT_0ecb8728;
                      }
                    }
                  }
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar16) {
                case 0x82e:
                  goto override_jmp_0ec35984_case_0;
                }
              } while( true );
            }
            goto override_jmp_0ec3501c_case_0;
          case true:
override_jmp_0ec3492f_case_0:
            *(undefined8 *)
             ((longlong)puStack_118 +
             (ulonglong)(byte)((byte)pcStack_d0 ^ (char)uStack_d8 + (char)uStack_c8 + local_159)) =
                 0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
override_jmp_0ec356dd_case_0:
            pcVar17 = pcStack_130;
            lVar14 = lStack_138;
            switchD_0ec75e6c::caseD_ec47f80(puStack_158,*(longlong *)pcStack_140,1,1);
                    /* WARNING: Switch is manually overridden */
          }
        }
        pcVar8 = pcStack_108;
      }
    }
override_jmp_0ec3588c_case_0:
    (*pcVar8)(pcVar11);
    break;
  case 0xfffffe5d:
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
override_jmp_0ec34b45_case_0:
    pcVar17 = pcStack_130;
    pcVar22 = pcStack_140;
    lVar14 = lStack_138;
  }
  (*pcVar17)(lVar14);
override_jmp_0ec3501c_case_0:
  uVar24 = (uint)uVar19 ^ 0x4a433e71;
  switchD_0ec75e6c::caseD_ec47f80
            (pcVar22,*(longlong *)((longlong)apcStack_100 + (ulonglong)uVar24),2,
             (ulonglong)(uVar24 - 6));
  switchD_0ec75e6c::caseD_ec47f80(apvStack_70[3],lStack_50,2,(ulonglong)(uVar24 - 6));
  switchD_0ec75e6c::caseD_ec47f80
            (apvStack_70[0],*(longlong *)((longlong)apvStack_70 + (ulonglong)(uVar24 & 0xffff)),2,2)
  ;
  return;
}

