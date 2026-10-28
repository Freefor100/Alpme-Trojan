/* ANALYSIS ONLY. Verified original-byte normal PE/TLS control flow under the named valid owned Rust Vec/BTree, compiler private-frame and Windows API ABI contracts in17_2f497_final_normal_gate.json. Not original source, an arbitrary-corrupted-memory proof or a runnable implementation. Original PE text bytes unchanged. */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x08fa00b6) */
/* WARNING: Removing unreachable block (ram,0x08fa23d9) */
/* WARNING: Removing unreachable block (ram,0x08fa439d) */
/* WARNING: Switch with 1 destination removed at 0x08f9fb03 */
/* WARNING: Switch with 1 destination removed at 0x08fa0385 */
/* WARNING: Switch with 1 destination removed at 0x08fa1545 */
/* WARNING: Switch with 1 destination removed at 0x08fa15d3 */
/* WARNING: Switch with 1 destination removed at 0x08fa1725 */
/* WARNING: Switch with 1 destination removed at 0x08fa1c87 */
/* WARNING: Switch with 1 destination removed at 0x08fa2b87 */
/* WARNING: Switch with 1 destination removed at 0x08fa36fb */
/* WARNING: Switch with 1 destination removed at 0x08fa45a7 */
/* WARNING: Switch with 1 destination removed at 0x08fa4f5a */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ANALYST_memory_helper(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte bVar9;
  LPVOID pvVar10;
  undefined4 uVar11;
  bool bVar12;
  int3 iVar13;
  undefined *puVar14;
  ulonglong uVar15;
  undefined2 uVar16;
  undefined1 uVar17;
  short sVar18;
  byte bVar19;
  uint uVar20;
  int iVar21;
  code *******pppppppcVar22;
  code *pcVar23;
  ulonglong *puVar24;
  code *pcVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  code *pcVar28;
  undefined8 *puVar29;
  longlong lVar30;
  code *******pppppppcVar31;
  code *pcVar32;
  code *pcVar33;
  longlong lVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  ulonglong uVar37;
  code *******pppppppcVar38;
  code **ppcVar39;
  code *******pppppppcVar40;
  uint uVar41;
  uint uVar42;
  code ******ppppppcVar43;
  uint uVar44;
  ulonglong uVar45;
  code ******ppppppcVar46;
  longlong lVar47;
  int iVar48;
  char *pcVar49;
  code *******pppppppcVar50;
  code ******ppppppcVar51;
  int iVar52;
  code *******pppppppcVar53;
  code *******pppppppcVar54;
  longlong unaff_GS_OFFSET;
  longlong alStackY_f4236 [124397];
  code *******pppppppcStack_12b0;
  longlong lStack_12a0;
  undefined8 uStack_1298;
  code *******pppppppcStack_1288;
  undefined8 uStack_1280;
  longlong lStack_1278;
  code *******pppppppcStack_1270;
  code *******pppppppcStack_1258;
  code *******pppppppcStack_1250;
  code *******pppppppcStack_1248;
  ulonglong uStack_1240;
  undefined1 local_1238;
  char local_1237;
  char local_1236;
  byte local_1235;
  byte local_1234;
  char local_1233;
  byte local_1232;
  char local_1231;
  code *******pppppppcStack_1230;
  undefined8 uStack_1228;
  code *******pppppppcStack_1220;
  code *******pppppppcStack_1218;
  code ******ppppppcStack_1210;
  code *******pppppppcStack_1208;
  code *******pppppppcStack_1200;
  code *******pppppppcStack_11f8;
  code *******pppppppcStack_11f0;
  code *******pppppppcStack_11e8;
  code **ppcStack_11e0;
  code *******pppppppcStack_11d8;
  code *******pppppppcStack_11d0;
  short local_11c2;
  undefined2 local_11c0;
  undefined2 local_11be;
  ushort local_11bc;
  ushort local_11ba;
  code *******apppppppcStack_11b8 [2];
  code *pcStack_11a8;
  code *******pppppppcStack_11a0;
  ulonglong uStack_1198;
  code *******pppppppcStack_1190;
  undefined8 *local_1188;
  ulonglong uStack_1180;
  ulonglong uStack_1178;
  code *******pppppppcStack_1170;
  code *******pppppppcStack_1168;
  code *******pppppppcStack_1160;
  ulonglong uStack_1158;
  int local_114c;
  code *******pppppppcStack_1148;
  ulonglong uStack_1140;
  ulonglong uStack_1138;
  undefined8 uStack_1130;
  ulonglong uStack_1120;
  ulonglong uStack_1118;
  char *pcStack_1110;
  code **ppcStack_1108;
  code *******pppppppcStack_1100;
  code *******pppppppcStack_10f8;
  code **ppcStack_10f0;
  code *******pppppppcStack_10e8;
  code ******ppppppcStack_10e0;
  code *******pppppppcStack_10d8;
  code ******ppppppcStack_10d0;
  ulonglong uStack_10c8;
  ulonglong uStack_10c0;
  ulonglong uStack_10b8;
  code *******pppppppcStack_10b0;
  code ******ppppppcStack_10a8;
  code *******pppppppcStack_10a0;
  code *******pppppppcStack_1098;
  uint uStack_108c;
  undefined4 uStack_1088;
  int local_1084;
  int local_1080;
  int local_107c;
  int local_1078;
  undefined4 local_1074;
  code *******pppppppcStack_1070;
  code *******pppppppcStack_1068;
  code *******pppppppcStack_1060;
  undefined8 *puStack_1058;
  code *******pppppppcStack_1050;
  ulonglong uStack_1048;
  code *******pppppppcStack_1040;
  code *******pppppppcStack_1038;
  longlong lStack_1030;
  ulonglong uStack_1028;
  code ******appppppcStack_1020 [4];
  longlong lStack_1000;
  undefined4 *puStack_ff0;
  longlong lStack_fe8;
  code ******ppppppcStack_fe0;
  code ******ppppppcStack_fd8;
  code ******ppppppcStack_fd0;
  code *******pppppppcStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  ulonglong local_fa8;
  longlong local_fa0;
  code ******ppppppcStack_f98;
  ulonglong local_f90;
  longlong local_f88;
  longlong local_f80;
  longlong local_f78;
  ulonglong local_f70;
  undefined8 local_f68;
  undefined8 local_f60;
  ulonglong uStack_f58;
  int iStack_f50;
  undefined8 uStack_f48;
  undefined1 uStack_f40;
  undefined4 uStack_f3c;
  undefined8 local_f38;
  byte local_f30;
  undefined1 uStack_f2f;
  undefined2 uStack_f2e;
  undefined4 uStack_f2c;
  undefined1 local_f28;
  undefined1 uStack_f27;
  short sStack_f26;
  undefined4 uStack_f24;
  byte bStack_f20;
  undefined3 uStack_f1f;
  undefined4 uStack_f1c;
  undefined1 auStack_f18 [8];
  code ******ppppppcStack_f10;
  undefined4 uStack_f08;
  char cStack_a59;
  code *****pppppcStack_a58;
  code *****pppppcStack_a50;
  code *****pppppcStack_a48;
  code *****pppppcStack_a40;
  code ******ppppppcStack_a38;
  code ******ppppppcStack_a30;
  code ******ppppppcStack_a28;
  code ******ppppppcStack_a20;
  LPVOID apvStack_a10 [3];
  code *******local_9f8;
  ulonglong uStack_9f0;
  code *******pppppppcStack_9e8;
  code ******ppppppcStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  code ******appppppcStack_528 [2];
  ulonglong auStack_518 [4];
  undefined4 uStack_4f8;
  code *******pppppppcStack_430;
  undefined8 uStack_48;
  
  uStack_48 = 0x8f9f4ad;
  local_1188 = param_1;
  local_114c = param_2;
  ANALYST_constant_init();
  local_f90 = 0x3db92cd3faddf330;
  local_f68 = 0x5a7877bb66aa69bb;
  local_f78 = 0x3e623ef3cdf69821;
  local_107c = -0x79c77a86;
  local_1080 = 0x3c9dce88;
  local_1235 = 0xf5;
  local_11bc = 0x4cfc;
  local_1231 = -0x61;
  local_fa0 = -0x7b785a4f6029af2f;
  local_1234 = 0x4e;
  local_fa8 = 0xca8cb5f9dedeee97;
  local_1236 = '\a';
  local_11c0 = 0xffff;
  local_1078 = 4;
  local_f60 = 0xd6d3ba8ac1f2b0ef;
  local_11ba = 0xffef;
  local_1233 = -5;
  local_1238 = 0x7c;
  local_11be = 0x999b;
  local_11c2 = 0x6ce7;
  local_1232 = 0x2a;
  local_1237 = '\b';
  local_1084 = 0x35c9d087;
  local_fb0 = 0xbdadfb6dea6db088;
  local_f80 = -0x7c258b2837163e30;
  local_f70 = 0xe4a77eea85cdb0c8;
  local_1074 = 0x8417fa35;
  local_f88 = 0x3057c5b5aef30a5b;
  uVar45 = *(ulonglong *)
            (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
            0x298);
  local_9f8 = (code *******)0x195e665402ed01b6;
  local_f38._0_1_ = 0x70;
  local_f38._1_1_ = 0x5b;
  local_f38._2_2_ = 0x8ff;
  local_f38._4_4_ = 0;
  local_f30 = 0x14;
  uStack_f2f = 0;
  uStack_f2e = 0;
  uStack_f2c = 0;
  local_f28 = SUB81(&local_9f8,0);
  uStack_f27 = (undefined1)((ulonglong)&local_9f8 >> 8);
  sStack_f26 = (short)((ulonglong)&local_9f8 >> 0x10);
  uStack_f24 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
  uVar8 = (uint)uVar45;
  uVar41 = uVar8 + 0x22384e3;
  lVar34 = 0x268;
  if (DAT_090082e0 == uVar41) {
    lVar34 = 0x28c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffd3bf:
    FUN_08fef46f(0x90082c8,&local_f38);
  }
  FUN_08fa7c6e(&local_f38,DAT_090082c8,DAT_090082d8);
  appppppcStack_528[0] = (code ******)0x44ad431c8e2d93a0;
  local_9f8 = (code *******)0x8ff57ee;
  uStack_9f0 = local_f88 * -0x4494b33818616157 - (ulonglong)uVar41;
  uVar20 = (uint)uStack_9f0;
  *(code ********)((longlong)apvStack_a10 + (ulonglong)(uVar20 ^ 3) + 0x18) = appppppcStack_528;
  puVar35 = &UNK_08ffc6f4;
  if (DAT_0900b0e0 == (uVar20 ^ 0x13)) {
    puVar35 = &UNK_08ffc438;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xffffdd46:
    FUN_08fef46f(0x900b0c8,&local_9f8);
  }
  FUN_08fa7c6e(&local_9f8,_DAT_0900b0c8,_DAT_0900b0d8);
  pppppppcVar38 = local_9f8;
  pcVar28 = (code *)FUN_08f9c44b();
  FUN_08fba6b1(pppppppcVar38,uStack_9f0,1,1);
  FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)))
               ,CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1);
  iVar52 = local_114c;
  uStack_1240 = (*pcVar28)(0x1fffff,0,local_114c);
  puVar35 = (undefined4 *)&UNK_08ffc378;
  if (uStack_1240 == 0) {
    puVar35 = (undefined4 *)&UNK_08ffc6b0;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xffffbd18:
    uStack_f48 = 0;
    uStack_f40 = 0;
    uStack_f3c = 0;
    appppppcStack_528[0] = (code ******)0x7f338503202751b;
    local_f38._0_1_ = 0x82;
    local_f38._1_1_ = 0x50;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    uVar20 = 0xfddc7b31 - uVar8;
    local_f30 = (byte)uVar20;
    uStack_f2f = (undefined1)(uVar20 >> 8);
    uStack_f2e = (undefined2)(uVar20 >> 0x10);
    uStack_f2c = 0;
    local_f28 = SUB81(appppppcStack_528,0);
    uVar5 = local_f28;
    uStack_f27 = (undefined1)((ulonglong)appppppcStack_528 >> 8);
    uVar17 = uStack_f27;
    sStack_f26 = (short)((ulonglong)appppppcStack_528 >> 0x10);
    sVar18 = sStack_f26;
    uStack_f24 = (undefined4)((ulonglong)appppppcStack_528 >> 0x20);
    uVar11 = uStack_f24;
    lVar34 = (ulonglong)uVar41 +
             (*(ulonglong *)
               (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
               0x268) ^ local_f70 ^ uVar20);
    puVar35 = (undefined4 *)&UNK_08ffc33c;
    if (_DAT_0900aa28 == (int)lVar34) {
      puVar35 = (undefined4 *)&UNK_08ffc648;
    }
    break;
  case 0xfffff047:
    local_1188[1] = 0xfffffffffffffffe;
    return;
                    /* WARNING: Switch is manually overridden */
  }
  uStack_f58 = uStack_1240;
  iStack_f50 = iVar52;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xffffbf3b:
    FUN_08fef46f(0x900aa10,&local_f38);
  }
  FUN_08fa7c6e(&local_9f8,_DAT_0900aa10,_DAT_0900aa20);
  appppppcStack_528[0] = (code ******)(uVar45 + 0x7d35fdd1507f7fdc);
  local_f38._0_1_ = 0x8e;
  local_f38._1_1_ = 0x69;
  local_f38._2_2_ = 0x8ff;
  local_f38._4_4_ = 0;
  uVar42 = (uint)appppppcStack_528[0];
  uVar41 = 0x4e5bfb01 - uVar42;
  *(undefined8 *)((longlong)&local_f38 + (ulonglong)uVar41) = 0x17;
  puVar35 = (undefined4 *)&UNK_08ffc594;
  if (_DAT_090085a8 == (uVar42 ^ 0x4e5bfaf9)) {
    puVar35 = (undefined4 *)&UNK_08ffc55c;
  }
  local_f28 = uVar5;
  uStack_f27 = uVar17;
  sStack_f26 = sVar18;
  uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xffffdcf3:
    FUN_08fef46f(0x9008590,&local_f38);
  }
  FUN_08fa7c6e(&local_f38,_DAT_09008590,_DAT_090085a0);
  pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                             CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)));
  pcVar28 = (code *)FUN_08f9c44b();
  lVar30 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  lVar34 = (lVar34 - (ulonglong)uVar20) +
           (-0x5a3640926c28c97e - (*(ulonglong *)(lVar30 + 0x240) ^ *(ulonglong *)(lVar30 + 0x128)))
  ;
  FUN_08fba6b1(pvVar10,*(longlong *)((longlong)register0x00000020 + lVar34 + -0xf38),1,1);
  FUN_08fba6b1(local_9f8,uStack_9f0,1,1);
  appppppcStack_528[0] =
       (code ******)
       ((local_f80 - (ulonglong)(uVar42 ^ 0x4e5bfaf9)) * 0x24abe254912c4f0d + 0x30a32b54a05cd231 ^
       0x56a5c37b4b701c1a);
  local_f38._0_1_ = 0x35;
  local_f38._1_1_ = 0x66;
  local_f38._2_2_ = 0x8ff;
  local_f38._4_4_ = 0;
  iVar52 = (int)lVar34 + 0xc;
  local_f30 = (byte)iVar52;
  uStack_f2f = (undefined1)((uint)iVar52 >> 8);
  uStack_f2e = (undefined2)((uint)iVar52 >> 0x10);
  uStack_f2c = 0;
  local_f28 = SUB81(appppppcStack_528,0);
  uStack_f27 = (undefined1)((ulonglong)appppppcStack_528 >> 8);
  sStack_f26 = (short)((ulonglong)appppppcStack_528 >> 0x10);
  uStack_f24 = (undefined4)((ulonglong)appppppcStack_528 >> 0x20);
  lVar34 = 0x2d8;
  if (_DAT_090089b0 == (uVar41 ^ uVar42) * (int)local_fb0 - uVar41) {
    lVar34 = 300;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffe588:
    FUN_08fef46f(0x9008998,&local_f38);
  }
  FUN_08fa7c6e(&local_9f8,_DAT_09008998,_DAT_090089a8);
  uVar27 = uStack_1240;
  local_f38._0_1_ = '\x1b';
  local_f38._1_1_ = 0x42;
  local_f38._2_2_ = 0x8ff;
  local_f38._4_4_ = 0;
  local_f30 = 0x1b;
  uStack_f2f = 0;
  uStack_f2e = 0;
  uStack_f2c = 0;
  appppppcStack_528[0] = (code ******)(uVar45 + 0x876714f313077580);
  *(code ********)
   ((longlong)&local_f38 + (ulonglong)((uVar41 ^ uVar42) + -local_1084 * uVar42 * -0x749d5331)) =
       appppppcStack_528;
  lVar34 = 0x5c;
  if (_DAT_090081f8 == (int)(code ******)(uVar45 + 0x876714f313077580) + -0x10e3f09d) {
    lVar34 = 0x358;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffb6ca:
    FUN_08fef46f(0x90081e0,&local_f38);
  }
  FUN_08fa7c6e(&local_f38,_DAT_090081e0,_DAT_090081f0);
  pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                             CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)));
  pcVar23 = (code *)FUN_08f9c44b();
  FUN_08fba6b1(pvVar10,CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1)
  ;
  FUN_08fba6b1(local_9f8,uStack_9f0,1,1);
  pppppppcStack_1070 = (code *******)&DAT_00000008;
  pppppppcStack_1068 = (code *******)0x0;
  pppppppcStack_1060 = (code *******)0x0;
  uStack_9d8 = 0;
  uStack_9d0 = 0;
  pppppppcStack_9e8 = (code *******)0x0;
  ppppppcStack_9e0 = (code ******)0x0;
  local_9f8 = (code *******)0x0;
  uStack_9f0 = 0;
  puVar35 = FUN_08fc693d(0,0x3d);
  puVar36 = (undefined4 *)&UNK_08ffc5bc;
  if (puVar35 == (undefined4 *)0x0) {
    puVar36 = (undefined4 *)&UNK_08ffc2c0;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar36) {
  case 0xffffb5db:
    *(undefined8 *)((longlong)puVar35 + 0x2d) = 0x6c626d6573736120;
    *(undefined8 *)((longlong)puVar35 + 0x35) = 0x74757074756f2079;
    *(undefined8 *)(puVar35 + 8) = 0x7277206e65687720;
    *(undefined8 *)(puVar35 + 10) = 0x736120676e697469;
    *(undefined8 *)(puVar35 + 4) = 0x75646f6d20676e69;
    *(undefined8 *)(puVar35 + 6) = 0x73656c696620656c;
    *puVar35 = 0x6e757270;
    puVar35[1] = 0x6f6e2065;
    puVar35[2] = 0x66612d6e;
    puVar35[3] = 0x74636566;
    pppppppcVar38 = (code *******)0x0;
    puStack_ff0 = puVar35;
    lVar34 = (*pcVar28)(uVar27,0,&local_9f8,0x30);
    puVar35 = (undefined4 *)&UNK_08ffc30c;
    if (lVar34 == 0) {
      puVar35 = (undefined4 *)&UNK_08ffc5a0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xfffff6ad:
      pppppppcVar38 = (code *******)0x0;
      lVar34 = 0x2e8;
      if ((char *)((longlong)local_9f8 + (longlong)ppppppcStack_9e0) != (char *)0x0) {
        lVar34 = 0x1e4;
      }
      pppppppcVar31 = (code *******)&DAT_00000008;
      pcVar49 = (char *)((longlong)local_9f8 + (longlong)ppppppcStack_9e0);
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
      case 0xfffff2fe:
        do {
          ppppppcVar43 = ppppppcStack_9e0;
          pppppppcVar54 = local_9f8;
          if (((int)uStack_9d0 == 0x20000 && (int)uStack_9d8 == 0x1000) &&
             ((uVar8 ^ 0xfddc7b19) ==
              (*(uint *)((longlong)apvStack_a10 + (ulonglong)(0xfddc7b41 - uVar8) + 0x18) & 0x1ff)))
          {
            lVar34 = 0x1c0;
            if (pppppppcVar38 == pppppppcStack_1068) {
              lVar34 = 0xd8;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
            case 0xffffdacc:
              FUN_08fba61a(&pppppppcStack_1070);
              pppppppcVar31 = pppppppcStack_1070;
            }
            pppppppcVar31[(longlong)pppppppcVar38 * 2] = (code ******)pppppppcVar54;
            pppppppcVar31[(longlong)pppppppcVar38 * 2 + 1] = ppppppcVar43;
            pppppppcVar38 = (code *******)((longlong)pppppppcVar38 + 1);
            pppppppcStack_1060 = pppppppcVar38;
          }
          uVar27 = (*pcVar28)(uStack_1240,pcVar49,&local_9f8,0x30);
          puVar35 = (undefined4 *)&UNK_08ffc5a0;
          if ((uVar8 ^ 0xfddc7b1d) != uVar27) {
            puVar35 = (undefined4 *)&UNK_08ffc5ac;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar35) {
          case 0x500:
            goto override_jmp_08f9fcc1_case_1;
          case 0xffffd2a0:
            lVar34 = 0x2e8;
            if (pcVar49 < (char *)((longlong)local_9f8 + (longlong)ppppppcStack_9e0)) {
              lVar34 = 0x1e4;
            }
          }
          pcVar49 = (char *)((longlong)local_9f8 + (longlong)ppppppcStack_9e0);
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0x500:
            goto override_jmp_08f9fcc1_case_1;
          }
        } while( true );
      }
    }
override_jmp_08f9fcc1_case_1:
    pppppppcVar31 = FUN_08fc693d(8,(ulonglong)(uVar8 ^ 0xfd5c7b0d));
    pppppppcVar54 = pppppppcStack_1070;
    puVar35 = (undefined4 *)&UNK_08ffc67c;
    if (pppppppcVar31 == (code *******)0x0) {
      puVar35 = (undefined4 *)&UNK_08ffc584;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffc125:
      goto override_jmp_08fa1a2c_case_0;
    case 0xffffe0b6:
      pppppppcStack_1038 = (code *******)&DAT_00000008;
      lStack_1030 = 0;
      uStack_1028 = 0;
      puVar35 = (undefined4 *)&UNK_08ffc34c;
      if (pppppppcVar38 == (code *******)(ulonglong)(0xfddc7b1d - uVar8)) {
        puVar35 = (undefined4 *)&UNK_08ffc3b8;
      }
      pppppppcStack_1258 = pppppppcVar31;
      bVar9 = (byte)uVar45;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar35) {
      case 0xffffd543:
        pppppppcStack_1248 = pppppppcStack_1068;
        pppppppcStack_1230 = pppppppcStack_1070 + (longlong)pppppppcVar38 * 2;
        uVar37 = (ulonglong)(0xfddc7b2d - uVar8);
        uStack_1298 = (code *******)(CONCAT44(uStack_1298._4_4_,uVar8) ^ 0xfddc7b1d);
        uStack_1158 = CONCAT44(uStack_1158._4_4_,uVar8 + 0x22384e3);
        pppppppcVar38 = pppppppcStack_1070;
        uVar27 = uStack_1240;
        do {
          uStack_1228 = (code *******)*pppppppcVar38;
          pppppppcStack_1160 = pppppppcVar38;
          ppppppcVar43 = pppppppcVar38[1];
          lVar34 = 0x90;
          if (ppppppcVar43 != (code ******)((ulonglong)uStack_1298 & 0xffffffff)) {
            lVar34 = 0x3bc;
          }
          ppppppcVar51 = (code ******)0x0;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xffffb996:
            do {
              ppppppcVar46 = ppppppcVar51 + 0x100002;
              if (ppppppcVar43 <= ppppppcVar51 + 0x100002) {
                ppppppcVar46 = ppppppcVar43;
              }
              local_f38._0_1_ = '\0';
              local_f38._1_1_ = 0;
              local_f38._2_2_ = 0;
              local_f38._4_4_ = 0;
              pcVar49 = (char *)((longlong)uStack_1228 + (longlong)ppppppcVar51);
              uVar41 = (*pcVar23)(uVar27,pcVar49,pppppppcVar31,
                                  (longlong)ppppppcVar46 - (longlong)ppppppcVar51);
              uVar15 = uStack_1158;
              uVar27 = CONCAT44(local_f38._4_4_,
                                CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)))
              ;
                    /* WARNING: Switch is manually overridden */
              switch(uVar27 < (local_1078 - (uint)uStack_1158 ^ (uint)uStack_1158) ||
                     uVar41 == (uint)uStack_1158) {
              case false:
                lVar34 = 0x478;
                if (uVar27 < 0x800011) {
                  lVar34 = 0x10;
                }
                lVar30 = 0;
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                case 0xffffbe10:
override_jmp_08fa07ec_case_0:
                  do {
                    bVar19 = *(byte *)((longlong)pppppppcVar31 + lVar30);
                    bVar2 = *(byte *)((longlong)pppppppcVar31 + lVar30 + 1);
                    bVar3 = *(byte *)((longlong)pppppppcVar31 + lVar30 + 2);
                    lVar34 = 0x13c;
                    if (*(byte *)((longlong)pppppppcVar31 + lVar30 + 3) ==
                        (byte)~((char)local_11c0 - (char)uVar15)) {
                      lVar34 = 0x114;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                    case 0xffffe5d3:
                      puVar35 = (undefined4 *)&UNK_08ffc6b8;
                      if (0x75 < bVar19) {
                        puVar35 = (undefined4 *)&UNK_08ffc2dc;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar35) {
                      case 0xffffb88c:
                    /* WARNING: Switch is manually overridden */
                        switch(bVar19 != 0x61) {
                        case false:
                    /* WARNING: Switch is manually overridden */
                          switch((byte)(0x4e - bVar9 ^ 1) != bVar3 || bVar2 != (byte)(0x4e - bVar9))
                          {
                          case false:
override_jmp_08fa0279_case_1:
                            lVar34 = *(longlong *)((longlong)appppppcStack_1020 + (uVar37 - 0x18));
                            puVar35 = (undefined4 *)&UNK_08ffc66c;
                            if (lVar34 == lStack_1030) {
                              puVar35 = (undefined4 *)&UNK_08ffc524;
                            }
                    /* WARNING: Switch is manually overridden */
                            switch(*puVar35) {
                            case 0xffffc915:
                              FUN_08fba61a(&pppppppcStack_1038);
                            }
                            lVar47 = (ulonglong)(uVar8 ^ 0xfddc7b0d) * lVar34;
                            *(char **)((longlong)pppppppcStack_1038 + lVar47) = pcVar49 + lVar30;
                            *(byte *)((longlong)pppppppcStack_1038 + lVar47 + 8) = bVar19;
                            *(byte *)((longlong)pppppppcStack_1038 + lVar47 + 9) = bVar2;
                            *(byte *)((longlong)pppppppcStack_1038 +
                                     (ulonglong)(uVar8 ^ 0xfddc7b17) + lVar47) = bVar3;
                            lVar47 = 0x10;
                            if (uVar27 < lVar30 + 0xcU) {
                              lVar47 = 0x378;
                            }
                            *(longlong *)((longlong)appppppcStack_1020 + (uVar37 - 0x18)) =
                                 lVar34 + 1;
                            pppppppcVar31 = pppppppcStack_1258;
                            lVar30 = lVar30 + 8;
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar47)) {
                            case 0xffffc8e0:
                              goto override_jmp_08fa009e_case_1;
                            }
                            goto override_jmp_08fa07ec_case_0;
                          }
                        }
                        break;
                      case 0xffffc1be:
                    /* WARNING: Switch is manually overridden */
                        switch(bVar19 == 0x76) {
                        case true:
                    /* WARNING: Switch is manually overridden */
                          switch(bVar3 != 0x30 || (byte)(bVar9 ^ 0x1f) <= (byte)(bVar2 - 0x31)) {
                          case false:
                            goto override_jmp_08fa0279_case_1;
                          }
                        }
                      }
                    }
                    lVar34 = 0x378;
                    if (lVar30 + 0xcU <= uVar27) {
                      lVar34 = 0x10;
                    }
                    lVar30 = lVar30 + 8;
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                    case 0xffffc8e0:
                      goto override_jmp_08fa009e_case_1;
                    }
                  } while( true );
                case 0xffffc1a6:
override_jmp_08f9f8a6_case_1:
                }
                goto override_jmp_08fa1a2c_case_0;
              case true:
override_jmp_08fa009e_case_1:
                ppppppcVar51 = ppppppcVar51 + 0x100000;
                lVar34 = 0x90;
                if (ppppppcVar51 < ppppppcVar43) {
                  lVar34 = 0x3bc;
                }
              }
              uVar27 = uStack_1240;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
              case 0xffffcc6b:
                goto override_jmp_08fa0f82_case_1;
              }
            } while( true );
          case 0xffffcc6b:
override_jmp_08fa0f82_case_1:
            pppppppcVar38 = pppppppcStack_1160 + 2;
            lVar34 = 0x290;
            if (pppppppcVar38 == pppppppcStack_1230) {
              lVar34 = 0x98;
            }
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xffffd61a:
            break;
          case 0xfffff4e9:
            goto override_jmp_08fa1302_case_1;
          }
        } while( true );
      case 0xfffff4df:
        uVar27 = 0;
        pppppppcVar38 = pppppppcStack_1068;
      }
    }
    break;
  case 0xffffc157:
    goto override_jmp_08fa1a2c_case_0;
  }
LAB_08fa3b7a:
  pppppppcVar22 = pppppppcStack_1038;
  FUN_08fba6b1(pppppppcVar54,(longlong)pppppppcVar38,8,(ulonglong)(uVar8 + 0x22384f3));
  apppppppcStack_11b8[0] = (code *******)&DAT_00000008;
  apppppppcStack_11b8[1] = (code *******)0x0;
  pcStack_11a8 = (code *)0x0;
  puVar35 = (undefined4 *)&UNK_08ffc37c;
  if (uVar27 == (uVar8 + 0x22384f3 ^ 0x10)) {
    puVar35 = (undefined4 *)&UNK_08ffc2e8;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xfffff0a4:
    pppppppcStack_fc8 = pppppppcVar22 + uVar27 * 2;
    uStack_108c = uVar8 ^ 0xfddc7b15;
    uStack_1120 = (ulonglong)uStack_108c;
    uVar41 = 0x10 - uStack_108c;
    uStack_10b8 = (ulonglong)uVar41;
    uStack_1118 = (ulonglong)(uStack_108c + 8);
    uStack_10c0 = (ulonglong)(uStack_108c + 8);
    pppppppcStack_10e8 = (code *******)(ulonglong)(0x20 - uStack_108c);
    uStack_1158 = (ulonglong)uVar41;
    uStack_10c8 = (ulonglong)(uVar41 & 0xff);
    pppppppcStack_1160 = (code *******)(uVar45 ^ 0x986e0df0ffa646e6);
    ppppppcStack_10d0 = (code ******)(0x247132010056b918 - uVar45);
    pppppppcStack_10d8 = (code *******)(-0x39b4d7ad8507b09b - uVar45);
    pppppppcStack_1190 = (code *******)(0x6e4b9b48fddc7b1e - uVar45);
    lStack_fe8 = uVar45 + 0xa45f0f61acce2f8e;
    uStack_1198 = 1;
    uStack_fc0 = 2;
    ppppppcStack_fd0 = (code ******)(uVar45 + 0xa1b4e4b7022284e3);
    ppppppcStack_fd8 = (code ******)(0x5e4c1b48fddb7b1d - uVar45);
    uStack_1180 = (ulonglong)(uVar41 & 0xff);
    ppcStack_10f0 = &pcStack_11a8;
    pppppppcStack_11a0 = (code *******)CONCAT44(pppppppcStack_11a0._4_4_,uVar8 + 0x22384f3);
    pppppppcVar38 = pppppppcVar22;
    do {
      uStack_1088 = pppppppcStack_11a0._0_4_;
      pppppppcStack_10b0 =
           (code *******)((longlong)pppppppcVar38 + ((ulonglong)pppppppcStack_11a0 & 0xffffffff));
      appppppcStack_528[1] = (code ******)0x2;
      auStack_518[0] = 0x18;
      auStack_518[1] = 0x20;
      ppppppcVar43 = (code ******)0x0;
override_jmp_08fa2eed_case_0:
      pppppppcVar22 = pppppppcStack_1038;
      pppppppcVar31 = pppppppcStack_1258;
      lVar34 = 0x4b0;
      if (ppppppcVar43 != (code ******)(ulonglong)(byte)((DAT_0900c3c0 + -0x4c) * 'q')) {
        lVar34 = 0x34;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
      case 0xffffc353:
        lVar34 = 0x438;
        if (pppppppcStack_10b0 == pppppppcStack_fc8) {
          lVar34 = 500;
        }
        break;
      case 0xfffff4a8:
        appppppcStack_528[0] = (code ******)((longlong)ppppppcVar43 + 1);
        ppppppcVar51 = *pppppppcVar38;
        lVar34 = (longlong)ppppppcVar51 - auStack_518[(longlong)ppppppcVar43];
        puVar35 = (undefined4 *)&UNK_08ffc2f4;
        if (ppppppcVar51 < (code ******)auStack_518[(longlong)ppppppcVar43]) {
          puVar35 = (undefined4 *)&UNK_08ffc65c;
        }
        ppppppcVar43 = appppppcStack_528[0];
                    /* WARNING: Switch is manually overridden */
        switch(*puVar35) {
        case 0xffffe18f:
          iVar13 = *(int3 *)(pppppppcVar38 + 1);
          uStack_1280 = pppppppcStack_1160;
          local_f38._0_1_ = -0x44;
          local_f38._1_1_ = 0x3d;
          local_f38._2_2_ = 0x8ff;
          local_f38._4_4_ = 0;
          local_f30 = 0x14;
          uStack_f2f = 0;
          uStack_f2e = 0;
          uStack_f2c = 0;
          local_f28 = SUB81(&uStack_1280,0);
          uStack_f27 = (undefined1)((ulonglong)&uStack_1280 >> 8);
          sStack_f26 = (short)((ulonglong)&uStack_1280 >> 0x10);
          uStack_f24 = (undefined4)((ulonglong)&uStack_1280 >> 0x20);
          lVar30 = 0x1a4;
          if (DAT_09008b40 != 0x27a3dfb - (int)pppppppcStack_1160) {
            lVar30 = 0x170;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
          case 0xffffd765:
            FUN_08fef46f(0x9008b28,&local_f38);
          }
          FUN_08fa7c6e(&local_f38,DAT_09008b28,DAT_09008b38);
          pppppppcStack_1148 = (code *******)0x67ff8d097d1bd448;
          uStack_1280 = (code *******)&DAT_08ff6f4c;
          lStack_1278 = 0x1b;
          pppppppcStack_1270 = (code *******)&pppppppcStack_1148;
          uStack_1228 = (code *******)(CONCAT44(uStack_1228._4_4_,uVar8) ^ 0xfddc7b1d);
          lVar30 = 0x360;
          if (DAT_09008c60 != (uVar8 ^ 0xfddc7b1d)) {
            lVar30 = 0x23c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
          case 0xffffc9d0:
            FUN_08fef46f(0x9008c48,&uStack_1280);
          }
          FUN_08fa7c6e(&uStack_1280,DAT_09008c48,DAT_09008c58);
          puVar14 = (undefined *)uStack_1280;
          pcVar28 = (code *)FUN_08f9c44b();
          FUN_08fba6b1(puVar14,*(longlong *)((longlong)&uStack_1280 + uStack_1158),1,1);
          FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                        CONCAT22(local_f38._2_2_,
                                                 CONCAT11(local_f38._1_1_,(char)local_f38))),
                       CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1)
          ;
          FUN_08feece0((undefined1 (*) [32])&local_f38,0,0x200);
          uStack_1280 = (code *******)0x0;
          (*pcVar28)(uStack_1240,lVar34,(undefined1 (*) [32])&local_f38,0xb3);
          puVar35 = (undefined4 *)&UNK_08ffc404;
          if ((ulonglong *)(ulonglong)(uVar8 ^ 0xfddc7b22) < uStack_1280) {
            puVar35 = (undefined4 *)&UNK_08ffc358;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar35) {
          case 0xffffd779:
            uVar41 = CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38));
            uVar27 = CONCAT44(local_f38._4_4_,uVar41);
            uVar37 = CONCAT44(uStack_f24,CONCAT22(sStack_f26,CONCAT11(uStack_f27,local_f28)));
            puVar35 = (undefined4 *)&UNK_08ffc58c;
            if (uVar27 != 0xfddc7b1d - uVar8) {
              puVar35 = (undefined4 *)&UNK_08ffc388;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar35) {
            case 0xffffe852:
              puVar35 = (undefined4 *)&UNK_08ffc394;
              if (0x7ffffffe < uVar27 - 0x10000 >> 0x10) {
                puVar35 = (undefined4 *)&UNK_08ffc65c;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar35) {
              case 0xf58:
                uVar20 = 0x3a4;
                if ((uVar41 & (uVar8 ^ 0xfddc7b1a)) == (uVar8 ^ 0xfddc7b1a) - 7) {
                  uVar20 = 0xc;
                }
                uVar27 = (ulonglong)uVar20;
                if ((ulonglong)(uVar8 ^ 0xfddc7b5d) <= uVar37 - 1) {
                  uVar27 = 0x3a4;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ffc2b8 + uVar27)) {
                case 0xfffff249:
                  goto override_jmp_08fa2eed_case_0;
                }
                break;
              case 0xfffff249:
                goto override_jmp_08fa2eed_case_0;
              }
              break;
            case 0xfffffc56:
              lVar30 = 0xc;
              if ((ulonglong)(uVar8 ^ 0xfddc7b5d) <= uVar37 - 1) {
                lVar30 = 0x3a4;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
              case 0xfffff249:
                goto override_jmp_08fa2eed_case_0;
              }
            }
            FUN_08fc0b2c((undefined1 *)&local_f38,uStack_1240,ppppppcVar51);
            uVar16 = local_f38._2_2_;
            uVar5 = local_f38._1_1_;
            if ((char)local_f38 != '\0') {
              bVar19 = bStack_f20;
              pppppppcStack_1148 = (code *******)ppppppcStack_10d0;
              local_f38._0_1_ = 0xbc;
              local_f38._1_1_ = 0x3d;
              local_f38._2_2_ = 0x8ff;
              local_f38._4_4_ = 0;
              *(undefined8 *)((longlong)&local_f38 + uStack_1120) = 0x14;
              *(code *********)((longlong)&local_f38 + uStack_1118) = &pppppppcStack_1148;
              puVar35 = (undefined4 *)&UNK_08ffc424;
              if (DAT_09008b40 != (int)ppppppcStack_10d0 + -0x27a3dfb) {
                puVar35 = (undefined4 *)&UNK_08ffc664;
              }
              uStack_1178 = uVar37;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar35) {
              case 0xfffffa30:
                FUN_08fef46f(0x9008b28,&local_f38);
              }
              ppppppcVar51 = (code ******)(lVar34 + 8);
              FUN_08fa7c6e(&uStack_1280,DAT_09008b28,DAT_09008b38);
              pppppppcStack_1148 = pppppppcStack_10d8;
              local_f38._0_1_ = 'L';
              local_f38._1_1_ = 0x6f;
              local_f38._2_2_ = 0x8ff;
              local_f38._4_4_ = 0;
              *(undefined8 *)((longlong)&local_f38 + uStack_10b8) = 0x1b;
              *(code *********)((longlong)&local_f38 + uStack_10c0) = &pppppppcStack_1148;
              if (0x7d1bd448U - (int)pppppppcStack_10d8 != DAT_09008c60) {
                FUN_08fef46f(0x9008c48,&local_f38);
              }
              FUN_08fa7c6e(&local_f38,DAT_09008c48,DAT_09008c58);
              pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                                         CONCAT22(local_f38._2_2_,
                                                  CONCAT11(local_f38._1_1_,(char)local_f38)));
              pcVar28 = (code *)FUN_08f9c44b();
              FUN_08fba6b1(pvVar10,CONCAT44(uStack_f2c,
                                            CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1
                          );
              FUN_08fba6b1(uStack_1280,*(longlong *)((longlong)&uStack_1280 + uStack_10c8),1,1);
              FUN_08feece0((undefined1 (*) [32])&local_f38,0,0x200);
              uStack_1280 = (code *******)0x0;
              (*pcVar28)(uStack_1240,ppppppcVar51,(undefined1 (*) [32])&local_f38,0x7b);
              puVar35 = (undefined4 *)&UNK_08ffc640;
              if (uStack_1280 <= (ulonglong *)(ulonglong)(uVar8 + 0x22384ea)) {
                puVar35 = (undefined4 *)&UNK_08ffc48c;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar35) {
              case 0xffffc379:
                ppppppcVar46 = (code ******)
                               CONCAT44(local_f38._4_4_,
                                        CONCAT22(local_f38._2_2_,
                                                 CONCAT11(local_f38._1_1_,(char)local_f38)));
                puVar35 = (undefined4 *)&UNK_08ffc41c;
                if (ppppppcVar46 != (code ******)0x0) {
                  puVar35 = (undefined4 *)&UNK_08ffc4cc;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar35) {
                case 0xffffdd54:
                  lVar34 = 0xd4;
                  if (bVar19 != '\x03') {
                    lVar34 = 0x3a4;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                  case 0xfffff249:
                    goto override_jmp_08fa2eed_case_0;
                  }
                  break;
                case 0xffffff3a:
                  puVar35 = (undefined4 *)&UNK_08ffc744;
                  if ((uVar45 ^ 0x5e4be4b702237b1d) <=
                      (longlong)ppppppcVar46 + (uVar45 ^ 0xa1b464b702237b1d)) {
                    puVar35 = (undefined4 *)&UNK_08ffc65c;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar35) {
                  case 0xb55:
                    lVar34 = 0xd4;
                    if (bVar19 != '\x03') {
                      lVar34 = 0x3a4;
                    }
                    if ((CONCAT11(local_f38._1_1_,(char)local_f38) & 7) != uVar8 + 0x22384e3) {
                      lVar34 = 0x3a4;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                    case 0xfffff249:
                      goto override_jmp_08fa2eed_case_0;
                    }
                    break;
                  case 0xfffff249:
                    goto override_jmp_08fa2eed_case_0;
                  }
                }
                puVar35 = (undefined4 *)&UNK_08ffc65c;
                if (CONCAT21(uVar16,uVar5) == iVar13) {
                  puVar35 = (undefined4 *)&UNK_08ffc514;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar35) {
                case 0xffffbe42:
                  pppppppcStack_1148 = (code *******)&DAT_00000008;
                  uStack_1140 = 0;
                  uStack_1138 = 0;
                  puVar24 = FUN_08fc693d(0,8);
                  lVar34 = 0x120;
                  if (puVar24 == (ulonglong *)0x0) {
                    lVar34 = 0x24c;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                  case 0xffffbdd4:
                    break;
                  case 0xffffe01e:
                    *puVar24 = (ulonglong)ppppppcVar46;
                    uStack_1280 = (code *******)puVar24;
                    ppppppcStack_10e0 = ppppppcVar46;
                    *(undefined8 *)((longlong)&uStack_1280 + uStack_1180) = 1;
                    ppcStack_1108 = (code **)0x0;
                    pppppppcStack_10f8 = (code *******)0x0;
                    puVar29 = FUN_08fc693d(0,0x23);
                    puVar35 = (undefined4 *)&UNK_08ffc3c8;
                    if (puVar29 != (undefined8 *)0x0) {
                      puVar35 = (undefined4 *)&UNK_08ffc694;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar35) {
                    case 0xffffbffa:
                      puVar29[2] = 0x2064656c69616620;
                      puVar29[3] = 0x7272652068746977;
                      *puVar29 = 0x6572632064616f4c;
                      puVar29[1] = 0x736c6169746e6564;
                      *(undefined4 *)((longlong)puVar29 + 0x1f) = 0x3a726f72;
                      pppppppcStack_1270 = (code *******)0x1;
                      pppppppcStack_12b0 = pppppppcStack_1248;
                      pppppppcStack_1250 = pppppppcStack_1288;
                      ppcVar39 = (code **)0x0;
                      pppppppcStack_11f0 = pppppppcStack_1230;
                      pppppppcStack_1288 = (code *******)0x0;
                      pppppppcStack_1208 = pppppppcStack_1218;
                      pppppppcStack_11f8 = pppppppcStack_1200;
                      puStack_1058 = puVar29;
                      ppppppcStack_fe0 = ppppppcVar51;
LAB_08fa0703:
                      pppppppcStack_1270 = (code *******)((longlong)pppppppcStack_1270 - 1);
                      ppppppcVar51 = *(code *******)
                                      ((longlong)uStack_1280 +
                                      (ulonglong)(9 - (int)pppppppcStack_1190) *
                                      (longlong)pppppppcStack_1270);
                      lVar34 = 0x464;
                      if (uStack_1138 < 0x40) {
                        lVar34 = 0xcc;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                      case 0xffffffcc:
                        puVar35 = (undefined4 *)&UNK_08ffc56c;
                        if (pppppppcStack_1288 != (code *******)0x0) {
                          puVar35 = (undefined4 *)&UNK_08ffc434;
                        }
                        ppcStack_11e0 = ppcVar39;
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0xffffbeed:
                          pppppppcVar31 = pppppppcStack_1288;
                          pppppppcStack_12b0 = uStack_1298;
                          do {
                            uVar41 = uVar8 ^ 0xfddc7b75;
                            uVar6 = *(ushort *)((longlong)pppppppcVar31 + (ulonglong)uVar41);
                            uVar27 = (ulonglong)((uint)uVar6 * 8);
                            lVar34 = 0x38;
                            if (uVar27 != 0) {
                              lVar34 = 0x11c;
                            }
                            pppppppcStack_1250 = (code *******)0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                            case 0xffffd33d:
                              do {
                                ppppppcVar46 = pppppppcVar31
                                               [(longlong)((longlong)pppppppcStack_1250 + 1)];
                                pppppppcStack_1250 =
                                     (code *******)((longlong)pppppppcStack_1250 + 1);
                                if ((char)((ppppppcVar46 < ppppppcVar51) -
                                          (ppppppcVar51 < ppppppcVar46)) != '\x01') {
                                  if (ppppppcVar46 < ppppppcVar51 == ppppppcVar51 < ppppppcVar46) {
                                    goto override_jmp_08fa0750_case_0;
                                  }
                                  lVar34 = 0xb4;
                                  if (pppppppcStack_12b0 ==
                                      (code *******)((ulonglong)uStack_1228 & 0xffffffff)) {
                                    lVar34 = 0x1b0;
                                  }
                    /* WARNING: Switch is manually overridden */
                                  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                                  case 0xffffbe84:
                                    goto override_jmp_08fa190c_case_0;
                                  }
                                  goto override_jmp_08fa190c_case_1;
                                }
                                uVar27 = uVar27 - 8;
                                lVar34 = 0x38;
                                if (uVar27 != 0) {
                                  lVar34 = 0x11c;
                                }
                    /* WARNING: Switch is manually overridden */
                                switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                                case 0xfffff9b3:
                                  goto override_jmp_08fa05a7_case_1;
                                }
                              } while( true );
                            case 0xfffff9b3:
override_jmp_08fa05a7_case_1:
                              lVar34 = 0x1b0;
                              if (pppppppcStack_12b0 !=
                                  (code *******)((ulonglong)uStack_1228 & 0xffffffff)) {
                                lVar34 = 0xb4;
                              }
                            }
                            pppppppcStack_1250 = (code *******)(ulonglong)uVar6;
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                            case 0xffffbe84:
override_jmp_08fa190c_case_0:
                              pppppppcStack_12b0 = (code *******)((longlong)pppppppcStack_12b0 + -1)
                              ;
                              pppppppcVar31 =
                                   (code *******)
                                   pppppppcVar31[(longlong)((longlong)pppppppcStack_1250 + 0xe)];
                              break;
                            case 0xffffd9a7:
                              goto override_jmp_08fa190c_case_1;
                            }
                          } while( true );
                        }
                        goto override_jmp_08fa204e_case_1;
                      }
                      goto override_jmp_08fa0750_case_0;
                    case 0xffffc14b:
                    }
                  }
                  goto override_jmp_08fa1a2c_case_0;
                }
                break;
              case 0xfffffed1:
                pppppppcStack_1250 = pppppppcStack_1248;
                pppppppcStack_1208 = pppppppcStack_1218;
                    /* WARNING: Switch is manually overridden */
              }
            }
            break;
          case 0xfffff08e:
          }
        }
        goto override_jmp_08fa2eed_case_0;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
      case 0xffffe51a:
        pppppppcVar38 = pppppppcStack_10b0;
        break;
      case 0xffffec18:
        goto override_jmp_08fa09e6_case_1;
      }
    } while( true );
  case 0xfffff5dd:
    lStack_12a0 = lStack_1030;
  }
override_jmp_08fa0790_case_1:
  FUN_08fba6b1(pppppppcVar22,lStack_12a0,8,0x10);
  puVar35 = (undefined4 *)&UNK_08ffc2e0;
  if (pcStack_11a8 < (code *******)(ulonglong)(uVar8 + 0x22384e5)) {
    puVar35 = (undefined4 *)&UNK_08ffc5dc;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xffffe970:
    puVar35 = (undefined4 *)&UNK_08ffc470;
    if (pcStack_11a8 < (code *******)(ulonglong)(uVar8 + 0x22384f8)) {
      puVar35 = (undefined4 *)&UNK_08ffc5d4;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffcd47:
      FUN_08f78643((ulonglong *)apppppppcStack_11b8[0],(ulonglong)pcStack_11a8);
      break;
    case 0xffffe209:
      pppppppcVar38 = apppppppcStack_11b8[0] + 2;
      ppppppcVar43 = apppppppcStack_11b8[0][3];
      lVar34 = 0x3ec;
      if (ppppppcVar43 < apppppppcStack_11b8[0][1]) {
        lVar34 = 900;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
      case 0xc08:
        goto override_jmp_08fa28a2_case_1;
      }
override_jmp_08fa28a2_case_0:
      pppppppcVar38 = pppppppcVar38 + 2;
      lVar34 = 0x20;
      if (pppppppcVar38 == apppppppcStack_11b8[0] + (longlong)pcStack_11a8 * 2) {
        lVar34 = 0x324;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
      case 0xffffebf6:
        do {
          ppppppcVar43 = pppppppcVar38[1];
          lVar34 = 0x3ec;
          if (ppppppcVar43 < pppppppcVar38[-1]) {
            lVar34 = 900;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xc08:
override_jmp_08fa28a2_case_1:
            uVar5 = *(undefined1 *)pppppppcVar38;
            uVar27 = uVar45 ^ 0xa1b464b7022384ed;
            ppppppcVar51 = (code ******)((undefined8 *)((longlong)pppppppcVar38 + uVar27))[1];
            *pppppppcVar38 = *(code *******)((longlong)pppppppcVar38 + uVar27);
            pppppppcVar38[1] = ppppppcVar51;
            lVar34 = 0x1a0;
            if ((code *******)((longlong)pppppppcVar38 + uVar27) == apppppppcStack_11b8[0]) {
              lVar34 = 0x3c0;
            }
            pppppppcVar31 = pppppppcVar38;
            pppppppcVar54 = apppppppcStack_11b8[0];
            pppppppcVar22 = (code *******)((longlong)pppppppcVar38 + uVar27);
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
            case 0xffffbdd9:
override_jmp_08fa2faa_case_1:
              *(undefined1 *)pppppppcVar54 = uVar5;
              pppppppcVar31[-1] = ppppppcVar43;
              pppppppcVar38 = pppppppcVar38 + 2;
              lVar34 = 0x20;
              if (pppppppcVar38 == apppppppcStack_11b8[0] + (longlong)pcStack_11a8 * 2) {
                lVar34 = 0x324;
              }
              break;
            case 0xffffe91c:
              do {
                puVar35 = (undefined4 *)&UNK_08ffc678;
                if (ppppppcVar43 < pppppppcVar31[-3]) {
                  puVar35 = (undefined4 *)&UNK_08ffc484;
                }
                pppppppcVar54 = pppppppcVar22;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar35) {
                case 0xffffb247:
                  ppppppcVar51 = (code ******)((undefined8 *)((longlong)pppppppcVar22 + uVar27))[1];
                  *pppppppcVar22 = *(code *******)((longlong)pppppppcVar22 + uVar27);
                  pppppppcVar22[1] = ppppppcVar51;
                  lVar34 = 0x1a0;
                  if ((code *******)((longlong)pppppppcVar22 + uVar27) == apppppppcStack_11b8[0]) {
                    lVar34 = 0x3c0;
                  }
                  break;
                case 0xffffbdd9:
                  goto override_jmp_08fa2faa_case_1;
                }
                pppppppcVar31 = pppppppcVar22;
                pppppppcVar54 = apppppppcStack_11b8[0];
                pppppppcVar22 = (code *******)((longlong)pppppppcVar22 + uVar27);
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                case 0xffffbdd9:
                  goto override_jmp_08fa2faa_case_1;
                }
              } while( true );
            }
            pppppppcVar31 = pppppppcStack_1258;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
            case 0xffffcd90:
              goto override_jmp_08fa2c3f_case_0;
            }
            break;
          case 0xffffe5b2:
            goto override_jmp_08fa28a2_case_0;
          }
        } while( true );
      }
    }
  }
override_jmp_08fa2c3f_case_0:
  FUN_08fa5b79((longlong *)apppppppcStack_11b8);
  pppppppcStack_1190 = apppppppcStack_11b8[0];
  pppppppcVar54 = apppppppcStack_11b8[1];
  pppppppcVar38 = (code *******)pcStack_11a8;
                    /* WARNING: Switch is manually overridden */
LAB_08fa2e31:
  FUN_08fba6b1(pppppppcVar31,0x800010,1,1);
  FUN_08fba6b1(puStack_ff0,0x3d,1,1);
  puVar35 = (undefined4 *)&UNK_08ffc6d0;
  if (pppppppcVar38 == (code *******)(ulonglong)-(-0x22384e3 - uVar8)) {
    puVar35 = (undefined4 *)&UNK_08ffc374;
  }
  pppppppcStack_11e8 = pppppppcVar54;
  pppppppcStack_11d0 = pppppppcVar38;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xffffc61f:
    local_9f8 = (code *******)0xac40cc4aee676739;
    local_f38._0_1_ = 0x35;
    local_f38._1_1_ = 0x2f;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x14;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    local_f28 = SUB81(&local_9f8,0);
    uStack_f27 = (undefined1)((ulonglong)&local_9f8 >> 8);
    sStack_f26 = (short)((ulonglong)&local_9f8 >> 0x10);
    uStack_f24 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
    lVar34 = 0x2c;
    if (_DAT_090089f8 == 0) {
      lVar34 = 0x318;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffcc52:
      FUN_08fef46f(0x90089e0,&local_f38);
    }
    FUN_08fa7c6e(&local_f38,_DAT_090089e0,_DAT_090089f0);
    appppppcStack_528[0] = (code ******)0xed408fb8e6e31191;
    local_9f8 = (code *******)&UNK_08ff4832;
    uVar41 = -uVar8 + 0xfddc7b25;
    *(undefined8 *)((longlong)apvStack_a10 + (ulonglong)uVar41 + 0x18) = 0x14;
    *(code ********)((longlong)apvStack_a10 + (ulonglong)(-uVar8 + 0xfddc7b2d) + 0x18) =
         appppppcStack_528;
    lVar34 = 0x3f0;
    if (_DAT_0900bbe0 == (uVar41 ^ 8)) {
      lVar34 = 0x4a0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffd5d1:
      FUN_08fef46f(0x900bbc8,&local_9f8);
    }
    FUN_08fa7c6e(&local_9f8,_DAT_0900bbc8,_DAT_0900bbd8);
    pppppppcVar38 = local_9f8;
    pcVar28 = (code *)FUN_08f9c44b();
    iVar52 = (*(int *)(*(longlong *)
                        (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x1c8)
             - (-0x22384e3 - uVar8)) + -0x5003dc6;
    uVar20 = iVar52 * -0x4e8d816b;
    FUN_08fba6b1(pppppppcVar38,*(longlong *)((longlong)apvStack_a10 + (ulonglong)uVar20 + 0x18),1,1)
    ;
    FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                  CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)
                                          )),
                 CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1);
    appppppcStack_528[0] = (code ******)0x97e5cc0f54f07d87;
    local_f38._0_1_ = 0xb7;
    local_f38._1_1_ = 0x3b;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x14;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    local_f28 = SUB81(appppppcStack_528,0);
    uVar5 = local_f28;
    uStack_f27 = (undefined1)((ulonglong)appppppcStack_528 >> 8);
    uVar17 = uStack_f27;
    sStack_f26 = (short)((ulonglong)appppppcStack_528 >> 0x10);
    sVar18 = sStack_f26;
    uStack_f24 = (undefined4)((ulonglong)appppppcStack_528 >> 0x20);
    uVar11 = uStack_f24;
    puVar35 = (undefined4 *)&UNK_08ffc40c;
    if (_DAT_0900ad98 == iVar52 * 0x4e8d816b + 8) {
      puVar35 = (undefined4 *)&UNK_08ffc770;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffb50d:
      FUN_08fef46f(0x900ad80,&local_f38);
    }
    FUN_08fa7c6e(&local_9f8,_DAT_0900ad80,_DAT_0900ad90);
    appppppcStack_528[0] = (code ******)0x71214a58be15e035;
    local_f38._0_1_ = 0xa3;
    local_f38._1_1_ = 0x58;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = (char)uVar20 + (char)(uVar41 ^ 8) * -3 + (char)uVar41 + local_1236;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    local_f28 = uVar5;
    uStack_f27 = uVar17;
    sStack_f26 = sVar18;
    uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_09008628 != 0x17 - (uint)local_f30) {
    case true:
      FUN_08fef46f(0x9008610,&local_f38);
    }
    FUN_08fa7c6e(&local_f38,_DAT_09008610,_DAT_09008620);
    pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                               CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)));
    pcVar23 = (code *)FUN_08f9c44b();
    FUN_08fba6b1(pvVar10,CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,
                 1);
    FUN_08fba6b1(local_9f8,uStack_9f0,1,1);
    local_9f8 = (code *******)0x6a7283e00167279;
    local_f38._0_1_ = 0xa7;
    local_f38._1_1_ = 0x66;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    uVar41 = uVar8 + 0x22384eb;
    *(undefined8 *)((longlong)&local_f38 + (ulonglong)uVar41) = 0x13;
    local_f28 = SUB81(&local_9f8,0);
    uStack_f27 = (undefined1)((ulonglong)&local_9f8 >> 8);
    sStack_f26 = (short)((ulonglong)&local_9f8 >> 0x10);
    uStack_f24 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
    puVar35 = (undefined4 *)&UNK_08ffc46c;
    if (_DAT_090086a8 == 8 - uVar41) {
      puVar35 = (undefined4 *)&UNK_08ffc3b4;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffc9b7:
      FUN_08fef46f(0x9008690,&local_f38);
    }
    FUN_08fa7c6e(&local_f38,_DAT_09008690,_DAT_090086a0);
    pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                               CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)));
    uVar26 = (*pcVar28)(pvVar10);
    uVar20 = 0xfddc7b25 - uVar8;
    FUN_08fba6b1(pvVar10,*(longlong *)((longlong)&local_f38 + (ulonglong)uVar20),1,1);
    appppppcStack_528[0] = (code ******)0x1b194311fc67ca3;
    local_f38._0_1_ = 0x38;
    local_f38._1_1_ = 0x52;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    *(ulonglong *)((longlong)&local_f38 + (ulonglong)uVar20) = (ulonglong)(uVar20 ^ 0x17);
    *(code ********)((longlong)&local_f38 + (ulonglong)(0x18 - uVar20)) = appppppcStack_528;
    lVar34 = 0x2a0;
    if (_DAT_0900c150 == 8 - uVar20) {
      lVar34 = 0x2f0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffec65:
      FUN_08fef46f(0x900c138,&local_f38);
                    /* WARNING: Switch is manually overridden */
    }
    FUN_08fa7c6e(&local_9f8,_DAT_0900c138,_DAT_0900c148);
    pppppppcVar38 = local_9f8;
    uVar26 = (*pcVar23)(uVar26,local_9f8);
    FUN_08fba6b1(pppppppcVar38,uStack_9f0,1,1);
    local_9f8 = (code *******)((uVar41 ^ local_fa8) - (ulonglong)(uVar20 ^ 0x17 ^ 8 - uVar20));
    local_f38._0_1_ = 0x8f;
    local_f38._1_1_ = 0x58;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x14;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    local_f28 = SUB81(&local_9f8,0);
    uStack_f27 = (undefined1)((ulonglong)&local_9f8 >> 8);
    sStack_f26 = (short)((ulonglong)&local_9f8 >> 0x10);
    uStack_f24 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
    lVar34 = 0x234;
    if (_DAT_09009d90 == -0x21211180 - (int)local_9f8) {
      lVar34 = 0x218;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffdbc0:
      FUN_08fef46f(0x9009d78,&local_f38);
    }
    FUN_08fa7c6e(&local_f38,_DAT_09009d78,_DAT_09009d88);
    appppppcStack_528[0] = (code ******)0xc3a208f906eb0257;
    local_9f8 = (code *******)&UNK_08ff3da1;
    uStack_9f0 = 0x13;
    pppppppcStack_9e8 = appppppcStack_528;
    lVar34 = 0x460;
    if (_DAT_0900ae40 == 0) {
      lVar34 = 0x1f8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffb239:
      FUN_08fef46f(0x900ae28,&local_9f8);
    }
    FUN_08fa7c6e(&local_9f8,_DAT_0900ae28,_DAT_0900ae38);
    pppppppcVar38 = local_9f8;
    pcVar28 = (code *)FUN_08f9c44b();
    FUN_08fba6b1(pppppppcVar38,uStack_9f0,1,1);
    FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                  CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)
                                          )),
                 CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1);
    local_9f8 = (code *******)0xf3e180aa34e8958;
    local_f38._0_1_ = 0x40;
    local_f38._1_1_ = 0x30;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x14;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    local_f28 = SUB81(&local_9f8,0);
    uStack_f27 = (undefined1)((ulonglong)&local_9f8 >> 8);
    sStack_f26 = (short)((ulonglong)&local_9f8 >> 0x10);
    uStack_f24 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
    puVar35 = (undefined4 *)&UNK_08ffc6d4;
    if (_DAT_0900a380 == (byte)(~local_1234 + 0x4f)) {
      puVar35 = (undefined4 *)&UNK_08ffc634;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffbf54:
      FUN_08fef46f(0x900a368,&local_f38);
    }
    FUN_08fa7c6e(&local_f38,_DAT_0900a368,_DAT_0900a378);
    appppppcStack_528[0] = (code ******)0x3d07a7f7db4388c3;
    local_9f8 = (code *******)&UNK_08ff34ab;
    uStack_9f0 = 0x16;
    lVar34 = 0x3a0;
    if (_DAT_09009908 == (uVar8 ^ 0xfddc7b1d)) {
      lVar34 = 0x488;
    }
    pppppppcStack_9e8 = appppppcStack_528;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffc342:
      FUN_08fef46f(0x90098f0,&local_9f8);
    }
    FUN_08fa7c6e(&local_9f8,_DAT_090098f0,_DAT_09009900);
    pppppppcVar38 = local_9f8;
    pppppppcStack_1258 = (code *******)FUN_08f9c44b();
    FUN_08fba6b1(pppppppcVar38,
                 *(longlong *)((longlong)apvStack_a10 + (ulonglong)(0xfddc7b25 - uVar8) + 0x18),1,1)
    ;
    FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                  CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)
                                          )),
                 CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1);
    appppppcStack_528[0] = (code ******)0x1a7e1845ad5f9095;
    local_f38._0_1_ = 0xab;
    local_f38._1_1_ = 0x2d;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x14;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    local_f28 = SUB81(appppppcStack_528,0);
    uVar5 = local_f28;
    uStack_f27 = (undefined1)((ulonglong)appppppcStack_528 >> 8);
    uVar17 = uStack_f27;
    sStack_f26 = (short)((ulonglong)appppppcStack_528 >> 0x10);
    sVar18 = sStack_f26;
    uStack_f24 = (undefined4)((ulonglong)appppppcStack_528 >> 0x20);
    uVar11 = uStack_f24;
    lVar34 = 0x44;
    if (_DAT_09008668 == 0) {
      lVar34 = 0x470;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffe59e:
      FUN_08fef46f(0x9008650,&local_f38);
    }
    FUN_08fa7c6e(&local_9f8,_DAT_09008650,_DAT_09008660);
    appppppcStack_528[0] = (code ******)0xfb23ff79a0adbea8;
    local_f38._0_1_ = 0x73;
    local_f38._1_1_ = 0x4f;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x14;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    puVar35 = (undefined4 *)&UNK_08ffc4f0;
    if (_DAT_090087f0 == (uVar8 ^ 0xfddc7b1d)) {
      puVar35 = (undefined4 *)&UNK_08ffc354;
    }
    local_f28 = uVar5;
    uStack_f27 = uVar17;
    sStack_f26 = sVar18;
    uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffd19a:
      FUN_08fef46f(0x90087d8,&local_f38);
    }
    FUN_08fa7c6e(&local_f38,_DAT_090087d8,_DAT_090087e8);
    pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                               CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)));
    pcVar23 = (code *)FUN_08f9c44b();
    FUN_08fba6b1(pvVar10,CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,
                 1);
    FUN_08fba6b1(local_9f8,uStack_9f0,1,1);
    appppppcStack_528[0] = (code ******)0x48caa337e831c8f7;
    local_f38._0_1_ = 0x60;
    local_f38._1_1_ = 0x60;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x14;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    lVar34 = 0x354;
    if (_DAT_0900bd30 == 0) {
      lVar34 = 0x408;
    }
    local_f28 = uVar5;
    uStack_f27 = uVar17;
    sStack_f26 = sVar18;
    uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xc81:
      FUN_08fef46f(0x900bd18,&local_f38);
    }
    FUN_08fa7c6e(&local_9f8,_DAT_0900bd18,_DAT_0900bd28);
    appppppcStack_528[0] = (code ******)(uVar45 ^ 0x292fe40c7cadb5e0);
    local_f38._0_1_ = 0x5e;
    local_f38._1_1_ = 0x70;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x24;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    lVar34 = 0xf8;
    if (_DAT_0900a468 == 0) {
      lVar34 = 0x280;
    }
    local_f28 = uVar5;
    uStack_f27 = uVar17;
    sStack_f26 = sVar18;
    uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffc7f2:
      FUN_08fef46f(0x900a450,&local_f38);
    }
    FUN_08fa7c6e(&local_f38,_DAT_0900a450,_DAT_0900a460);
    pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                               CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)));
    pcVar25 = (code *)FUN_08f9c44b();
    FUN_08fba6b1(pvVar10,CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,
                 1);
    FUN_08fba6b1(local_9f8,uStack_9f0,1,1);
    local_9f8 = (code *******)0x4;
    uVar27 = (ulonglong)(0x5db3477b - uVar8 ^ 0x5fd6cc56);
    *(undefined8 *)((longlong)apvStack_a10 + uVar27 + 0x18) = 0;
    *(undefined8 *)((longlong)&uStack_9f0 + uVar27) = 0;
    lVar34 = (*pcVar25)(4,0);
    lVar30 = 0x220;
    if (lVar34 - 1U < (ulonglong)(0x5db3477b - uVar8) - 0x5fd6cc60) {
      lVar30 = 0x2ec;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
    case 0xffffc183:
      pppppppcStack_11d8 = (code *******)0x4;
      uStack_1298 = (code *******)0x0;
      pppppppcVar38 = (code *******)0x0;
      break;
    case 0xfffffbe3:
      appppppcStack_528[0] = (code ******)CONCAT44(appppppcStack_528[0]._4_4_,0xfdddcf8b - uVar8);
      local_f38._4_4_ = (undefined4)((ulonglong)appppppcStack_528 >> 0x20);
      uVar37 = (ulonglong)(0xfdddcf8b - uVar8 ^ 0x1546a);
      *(undefined8 *)((longlong)&local_f38 + uVar37) = 0;
      *(undefined8 *)(auStack_f18 + (uVar37 - 0x18)) = 0;
      *(undefined8 *)(auStack_f18 + (uVar37 - 0x10)) = 0;
      local_f38._0_1_ = 0x1c;
      local_f38._1_1_ = 0;
      local_f38._2_2_ = 0;
      iVar21 = (*(code *)pppppppcStack_1258)(lVar34,&local_f38);
      iVar52 = local_114c;
      lVar30 = 0x370;
      if (iVar21 == 0) {
        lVar30 = 0;
      }
      puVar29 = (undefined8 *)((longlong)apvStack_a10 + uVar27 + 0x18);
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
      case 0xffffc1dc:
        pppppppcStack_11d8 = (code *******)0x4;
        pppppppcVar38 = (code *******)0x0;
        uStack_1298 = (code *******)0x0;
LAB_08fa0881:
        (*pcVar28)(lVar34);
        break;
      case 0xffffd7c1:
        uStack_1298 = (code *******)0x0;
        puVar35 = (undefined4 *)&UNK_08ffc310;
        if (uStack_f2c == local_114c) {
          puVar35 = (undefined4 *)&UNK_08ffc6bc;
        }
        pppppppcVar38 = (code *******)0x4;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar35) {
        case 0xffffeb8b:
          goto override_jmp_08fa1336_case_1;
        }
override_jmp_08fa1336_case_0:
        do {
          iVar21 = (*pcVar23)(lVar34,&local_f38);
          puVar35 = (undefined4 *)&UNK_08ffc5c8;
          if (iVar21 == 0) {
            puVar35 = (undefined4 *)&UNK_08ffc654;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar35) {
          case 0xffffc1f7:
            pppppppcStack_11d8 = local_9f8;
            pppppppcVar38 = (code *******)*puVar29;
            goto LAB_08fa0881;
          case 0xffffccb3:
            puVar35 = (undefined4 *)&UNK_08ffc6bc;
            if (uStack_f2c != iVar52) {
              puVar35 = (undefined4 *)&UNK_08ffc310;
            }
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar35) {
          case 0xffffd8dc:
            goto override_jmp_08fa1336_case_0;
          case 0xffffeb8b:
override_jmp_08fa1336_case_1:
            uVar11 = CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30));
                    /* WARNING: Switch is manually overridden */
            switch(uStack_1298 != (code *******)*puVar29) {
            case false:
              FUN_08fd5ce6(&local_9f8);
              pppppppcVar38 = local_9f8;
            }
            *(undefined4 *)
             ((longlong)pppppppcVar38 + (ulonglong)(uVar8 + 0x22384e7) * (longlong)uStack_1298) =
                 uVar11;
            uStack_1298 = (code *******)((longlong)uStack_1298 + 1);
            pppppppcStack_9e8 = uStack_1298;
          }
        } while( true );
      }
    }
    appppppcStack_528[0] = (code ******)(uVar45 + 0x7aeb8517804bf3d3);
    local_f38._0_1_ = 2;
    local_f38._1_1_ = 0x67;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    uVar41 = (uint)appppppcStack_528[0];
    uVar20 = uVar41 ^ 0x7e286ee4;
    local_f30 = (byte)uVar20;
    uStack_f2f = (undefined1)(uVar20 >> 8);
    uStack_f2e = (undefined2)(uVar20 >> 0x10);
    uStack_f2c = 0;
    *(code ********)((longlong)&local_f38 + (ulonglong)(0x7e286f00 - uVar41)) = appppppcStack_528;
    puVar35 = (undefined4 *)&UNK_08ffc754;
    if (_DAT_09008810 == (uVar41 ^ 0x7e286ef0)) {
      puVar35 = (undefined4 *)&UNK_08ffc568;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffcd7a:
      FUN_08fef46f(0x90087f8,&local_f38);
    }
    FUN_08fa7c6e(&local_9f8,_DAT_090087f8,_DAT_09008808);
    appppppcStack_528[0] = (code ******)((ulonglong)uVar20 ^ -local_fa0);
    local_f38._0_1_ = 0x84;
    local_f38._1_1_ = 0x5b;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = (local_1231 - (char)(0x7e286f00 - uVar41)) * '\r' + -0x2d;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    uVar41 = (uint)appppppcStack_528[0];
    *(code ********)((longlong)&local_f38 + (ulonglong)(uVar41 ^ 0x6029af2b)) = appppppcStack_528;
    lVar34 = 0x344;
    if (_DAT_09009bb0 == (uVar41 ^ 0x6029af3b)) {
      lVar34 = 0x194;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0x604:
      FUN_08fef46f(0x9009b98,&local_f38);
    }
    pppppppcStack_11a0 = pppppppcVar38;
    FUN_08fa7c6e(&local_f38,_DAT_09009b98,_DAT_09009ba8);
    pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                               CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)));
    uVar41 = uVar8 ^ 0xde421c15;
    pcVar28 = (code *)FUN_08f9c44b();
    FUN_08fba6b1(pvVar10,*(longlong *)((longlong)&local_f38 + (ulonglong)(uVar41 + 0xdc619900)),1,1)
    ;
    FUN_08fba6b1(local_9f8,uStack_9f0,1,1);
    appppppcStack_528[0] = (code ******)0x96966443956d8b32;
    local_f38._0_1_ = 0x7d;
    local_f38._1_1_ = 0x88;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    *(ulonglong *)((longlong)&local_f38 + (ulonglong)(uVar8 ^ 0xfddc7b15)) =
         (ulonglong)(uVar41 + 0xdc61990c);
    *(code ********)((longlong)&local_f38 + (ulonglong)(uVar8 ^ 0xfddc7b0d)) = appppppcStack_528;
    puVar35 = (undefined4 *)&UNK_08ffc670;
    if (_DAT_0900a1d0 ==
        (int)*(undefined8 *)
              (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x130) * -0x72d3f36f) {
      puVar35 = (undefined4 *)&UNK_08ffc608;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffdbd9:
      FUN_08fef46f(0x900a1b8,&local_f38);
    }
    FUN_08fa7c6e(&local_9f8,_DAT_0900a1b8,_DAT_0900a1c8);
    appppppcStack_528[0] = (code ******)0x3f96de0b053685ff;
    local_f38._0_1_ = '\x03';
    local_f38._1_1_ = 0x47;
    local_f38._2_2_ = 0x8ff;
    local_f38._4_4_ = 0;
    local_f30 = 0x17;
    uStack_f2f = 0;
    uStack_f2e = 0;
    uStack_f2c = 0;
    uVar20 = uVar8 ^ 0xfddc7b0d;
    *(code ********)((longlong)&local_f38 + (ulonglong)uVar20) = appppppcStack_528;
    lVar34 = 0x364;
    if (_DAT_09008368 == 0) {
      lVar34 = 0x140;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0x53e:
      FUN_08fef46f(0x9008350,&local_f38);
    }
    FUN_08fa7c6e(&local_f38,_DAT_09008350,_DAT_09008360);
    pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                               CONCAT22(local_f38._2_2_,CONCAT11(local_f38._1_1_,(char)local_f38)));
    lVar34 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    uVar7 = *(undefined8 *)(lVar34 + 0x250);
    iVar52 = (int)_DAT_0900b8c0;
    pcVar23 = (code *)FUN_08f9c44b();
    FUN_08fba6b1(pvVar10,*(longlong *)
                          ((longlong)&local_f38 +
                          (ulonglong)(~(*(int *)(lVar34 + 0x1cc) + 0xa83ee370U) + 0xe74633e2)),1,1);
    FUN_08fba6b1(local_9f8,uStack_9f0,1,1);
    pppppppcVar38 = (code *******)(*pcVar23)(uStack_1240,0,0x2000,0x3000);
    lVar34 = 0x18;
    if (pppppppcVar38 == (code *******)0x0) {
      lVar34 = 0xf4;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffc763:
      pppppppcStack_1200 = pppppppcVar38 + 0x240;
      pppppppcVar31 = pppppppcVar38 + 0x200;
      appppppcStack_528[0] = (code ******)0x514f5ca9c78f3c5c;
      local_9f8 = (code *******)&UNK_08ff2c20;
      uStack_9f0 = 0x14;
      iVar21 = uVar8 + 0x22384e3;
      pppppppcStack_1258 = pppppppcVar38;
      pppppppcStack_9e8 = appppppcStack_528;
                    /* WARNING: Switch is manually overridden */
      switch((_DAT_0900bd90 == iVar21) * '\x02') {
      case '\0':
        FUN_08fef46f(0x900bd78,&local_9f8);
      case '\x02':
        FUN_08fa7c6e(&local_f38,_DAT_0900bd78,_DAT_0900bd88);
        ppppppcVar43 = (code ******)(0xfdb0485cea47d27f - uVar45);
        local_9f8 = (code *******)&UNK_08ff3b9b;
        uStack_9f0 = 0x1c;
        lVar34 = 0x3e0;
        if (_DAT_09009cb0 ==
            ((iVar52 * 0x245b3887 - uVar20) - uVar41 ^ (uint)uVar7) + uVar20 +
            ((uint)*(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x2b8) ^
            _DAT_0900c32c * -0x6345ff31) + 0x92e6de06) {
          lVar34 = 0x4a4;
        }
        pppppppcStack_9e8 = appppppcStack_528;
        appppppcStack_528[0] = ppppppcVar43;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
        case 0xfffffd49:
          FUN_08fef46f(0x9009c98,&local_9f8);
        }
        FUN_08fa7c6e(&local_9f8,_DAT_09009c98,_DAT_09009ca8);
        pppppppcVar38 = local_9f8;
        pcVar23 = (code *)FUN_08f9c44b();
        FUN_08fba6b1(pppppppcVar38,uStack_9f0,1,1);
        FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                      CONCAT22(local_f38._2_2_,
                                               CONCAT11(local_f38._1_1_,(char)local_f38))),
                     CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1);
        uVar27 = uStack_1240;
        iVar48 = -uVar8 + -0x222cb9b;
        local_f38._0_1_ = (char)iVar48;
        local_f38._1_1_ = (undefined1)((uint)iVar48 >> 8);
        local_f38._2_2_ = SUB82(pppppppcVar31,0);
        local_f38._4_4_ = (undefined4)((ulonglong)pppppppcVar31 >> 0x10);
        local_f30 = (byte)((ulonglong)pppppppcVar31 >> 0x30);
        uStack_f2f = (undefined1)((ulonglong)pppppppcVar31 >> 0x38);
        uVar37 = (ulonglong)
                 (((*(ushort *)
                     (*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x206)
                   + 0x57c6) - (int)ppppppcVar43) + iVar21 & 0xffff);
        *(undefined4 *)((longlong)&local_f38 + uVar37) = 0x20ba;
        *(undefined1 *)((longlong)&local_f38 + uVar37 + 4) = 0;
        uStack_f27 = 0xc0;
        uStack_f2c._3_1_ = 0x45;
        local_f28 = 0x31;
        sStack_f26 = (short)-uVar8 + 0x3365;
        uStack_f24 = (undefined4)uVar26;
        _bStack_f20 = (undefined4)((ulonglong)uVar26 >> 0x20);
        *(undefined2 *)
         ((longlong)&local_f38 + (ulonglong)(((uint)local_11bc - iVar21) * -0x76c7 & 0xffff)) =
             0xd0ff;
        *(undefined2 *)((longlong)&local_f38 + (ulonglong)(uint)~(_DAT_0900c364 * 0x1cb1c0d3)) =
             0xfeeb;
        local_9f8 = (code *******)0x0;
        iVar52 = (*pcVar23)(uStack_1240,pppppppcStack_1200,&local_f38,0x20);
        lVar34 = 0x38c;
        if (local_9f8 != (code *******)&DAT_00000020) {
          lVar34 = 0x210;
        }
        if (iVar52 == 0xb948 - iVar48) {
          lVar34 = 0x210;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
        case 0x458:
          (*pcVar28)(uVar27,pppppppcStack_1258,0,0x8000);
                    /* WARNING: Switch is manually overridden */
          break;
        case 0xffffec94:
          pppppppcStack_1040 = pppppppcStack_1258;
          uVar20 = uVar8 ^ 0xfddc7b3d;
          ppppppcStack_10e0 = (code ******)(ulonglong)uVar20;
          *(undefined8 *)((longlong)appppppcStack_1020 + (longlong)(ppppppcStack_10e0 + -3)) =
               0xffffffffffffffff;
          lStack_1000 = -1;
          uVar44 = 0x28 - uVar20;
          pppppppcStack_1208 = (code *******)(ulonglong)uVar44;
          pcVar49 = (char *)((longlong)&pppppppcStack_1038 + (longlong)pppppppcStack_1208);
          pcVar49[0] = -1;
          pcVar49[1] = -1;
          pcVar49[2] = -1;
          pcVar49[3] = -1;
          pcVar49[4] = -1;
          pcVar49[5] = -1;
          pcVar49[6] = -1;
          pcVar49[7] = -1;
          pppppppcStack_11f0 = (code *******)(ulonglong)uVar44;
          uVar41 = uVar20 - 0x18;
          pppppppcStack_11f8 = (code *******)(ulonglong)uVar41;
          pppppppcStack_1170 = (code *******)(ulonglong)(ushort)uVar41;
          pppppppcStack_1250 = (code *******)(ulonglong)(uVar8 ^ 0xfddc7b0d);
          uStack_1178 = (ulonglong)(uVar8 ^ 0xfddc7b0d);
          pppppppcStack_1168 = (code *******)(ulonglong)(0xb8 - uVar20);
          uStack_1118 = (ulonglong)uVar41;
          uVar42 = uVar8 ^ 0xfddc7b15;
          uStack_1120 = (ulonglong)uVar42;
          uStack_1198 = (ulonglong)uVar41 & 0xff;
          uStack_10b8 = (ulonglong)uVar42;
          pppppppcVar38 =
               (code *******)
               ((longlong)pppppppcStack_1190 +
               ((longlong)pppppppcStack_11d0 << ((bVar9 ^ 0x19) & 0x3f)));
          uStack_10c0 = (ulonglong)uVar41;
          uStack_10c8 = (ulonglong)uVar44;
          pppppppcStack_1098 = (code *******)(ulonglong)uVar42;
          pppppppcVar22 =
               (code *******)
               ((longlong)pppppppcStack_11d8 +
               ((longlong)uStack_1298 << (0x22U - (char)uVar20 & 0x3f)));
          pppppppcStack_10a0 = (code *******)(ulonglong)(uVar20 - 0x20);
          ppppppcStack_10a8 = (code ******)(0x6db4eff83157ffc6 - uVar45);
          ppppppcStack_10d0 = (code ******)(0x2ff276be7d3f68a7 - uVar45);
          ppcStack_11e0 = (code **)0x1;
          pppppppcStack_10d8 = (code *******)(ulonglong)(byte)uVar41;
          pppppppcStack_1230 = (code *******)((ulonglong)uVar41 & 0xff);
          pppppppcStack_1220 = (code *******)(ulonglong)(uVar42 & 0xff);
          pppppppcVar54 = pppppppcStack_1190;
          pppppppcStack_11d0 = pppppppcVar38;
          pppppppcStack_10e8 = pppppppcStack_1208;
          pppppppcStack_10b0 = pppppppcStack_1250;
          pppppppcStack_1050 = pppppppcVar31;
          uStack_1048 = uVar27;
LAB_08fa3a23:
          uVar41 = local_107c + 0x79c77a96;
          cVar4 = *(char *)pppppppcVar54;
          ppppppcVar43 = pppppppcVar54[1];
          puVar29 = FUN_08fc693d(0,0x2a);
                    /* WARNING: Switch is manually overridden */
          switch(puVar29 != (undefined8 *)0x0) {
          case false:
            break;
          case true:
            *(undefined8 *)((longlong)puVar29 + 0x1a) = 0x7461657267206564;
            *(undefined8 *)((longlong)puVar29 + 0x22) = 0x65646f6e20747365;
            puVar29[2] = 0x20746f6f7220646e;
            puVar29[3] = 0x6572672065646f6e;
            *puVar29 = 0x4365657254426b54;
            puVar29[1] = 0x756f66206b636568;
            FUN_08fab1bd(&local_f38,puVar29,
                         ((local_f78 + 0xe313a0f24e792f9) - (ulonglong)uVar41) * -0x209ecbfcd8b442af
                        );
            uStack_1280 = (code *******)&local_f38;
            pppppppcStack_1258 = appppppcStack_1020;
            if ((cVar4 != '\0') && (pppppppcStack_1258 = appppppcStack_1020 + 3, cVar4 != '\x01')) {
              pppppppcStack_1258 = (code *******)&pppppppcStack_1038;
            }
            uStack_1228 = (code *******)((longlong)pppppppcVar54 + (ulonglong)uVar41);
            FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                          CONCAT22(local_f38._2_2_,
                                                   CONCAT11(local_f38._1_1_,(char)local_f38))),
                         *(longlong *)((longlong)&local_f38 + (longlong)pppppppcStack_1230),1,1);
            FUN_08fba6b1(puVar29,0x2a,1,1);
            pppppppcVar54 = (code *******)(ulonglong)(uVar8 ^ 0xfddc7b15);
            puVar35 = (undefined4 *)&UNK_08ffc59c;
            if (*(longlong *)((longlong)pppppppcStack_1258 + (longlong)pppppppcVar54) !=
                7 - (longlong)pppppppcVar54) {
              puVar35 = (undefined4 *)&UNK_08ffc300;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar35) {
            case 0xffffff7e:
              pppppppcStack_1218 = pppppppcVar54;
              FUN_08f9d2f8((undefined1 *)&local_f38,uVar27,ppppppcVar43);
              lVar34 = 0x27c;
              if ((char)local_f38 == '\0') {
                lVar34 = 0x314;
              }
              pppppppcStack_1248 = (code *******)0x0;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
              case 0xffffdfda:
                    /* WARNING: Switch is manually overridden */
                break;
              case 0xfffffd02:
                uStack_1138 = CONCAT17(bStack_f20,
                                       CONCAT43(uStack_f24,CONCAT21(sStack_f26,uStack_f27)));
                uStack_1130 = CONCAT17(auStack_f18[0],CONCAT43(uStack_f1c,uStack_f1f));
                pppppppcStack_1148 =
                     (code *******)
                     CONCAT17(local_f30,
                              CONCAT43(local_f38._4_4_,CONCAT21(local_f38._2_2_,local_f38._1_1_)));
                uStack_1140 = CONCAT17(local_f28,
                                       CONCAT43(uStack_f2c,CONCAT21(uStack_f2e,uStack_f2f)));
                lVar34 = 0;
                    /* WARNING: Switch is manually overridden */
                switch(0x8fa3646) {
                case 0x8fa3646:
                  do {
                    lVar30 = 0x30c;
                    if (*(char *)((longlong)&pppppppcStack_1148 + lVar34) != '\0') {
                      lVar30 = 0x274;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
                    case 0xffffcd64:
                      lVar34 = lVar34 + 1;
                      puVar35 = (undefined4 *)&UNK_08ffc4fc;
                      if (lVar34 != 0x20) {
                        puVar35 = (undefined4 *)&UNK_08ffc5f4;
                      }
                      break;
                    case 0xfffff6ef:
                      ppppppcStack_1210 = (code ******)0x9dfa5bd47e98c0e4;
                      local_f38._0_1_ = 0x49;
                      local_f38._1_1_ = 0x66;
                      local_f38._2_2_ = 0x8ff;
                      local_f38._4_4_ = 0;
                      local_f30 = 0x14;
                      uStack_f2f = 0;
                      uStack_f2e = 0;
                      uStack_f2c = 0;
                      local_f28 = SUB81(&ppppppcStack_1210,0);
                      uVar5 = local_f28;
                      uStack_f27 = (undefined1)((ulonglong)&ppppppcStack_1210 >> 8);
                      uVar17 = uStack_f27;
                      sStack_f26 = (short)((ulonglong)&ppppppcStack_1210 >> 0x10);
                      sVar18 = sStack_f26;
                      uStack_f24 = (undefined4)((ulonglong)&ppppppcStack_1210 >> 0x20);
                      uVar11 = uStack_f24;
                      puVar35 = (undefined4 *)&UNK_08ffc370;
                      if (_DAT_0900ab30 != (uVar8 ^ 0xfddc7b1d)) {
                        puVar35 = (undefined4 *)&UNK_08ffc500;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar35) {
                      case 0xffffc4ba:
                        FUN_08fef46f(0x900ab18,&local_f38);
                      }
                      FUN_08fa7c6e(&uStack_1280,_DAT_0900ab18,_DAT_0900ab28);
                      ppppppcStack_1210 = ppppppcStack_10a8;
                      local_f38._0_1_ = 0xf1;
                      local_f38._1_1_ = 0x43;
                      local_f38._2_2_ = 0x8ff;
                      local_f38._4_4_ = 0;
                      local_f30 = 0x1c;
                      uStack_f2f = 0;
                      uStack_f2e = 0;
                      uStack_f2c = 0;
                      puVar35 = (undefined4 *)&UNK_08ffc4a0;
                      if (_DAT_0900a2b0 == 0) {
                        puVar35 = (undefined4 *)&UNK_08ffc4c4;
                      }
                      local_f28 = uVar5;
                      uStack_f27 = uVar17;
                      sStack_f26 = sVar18;
                      uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar35) {
                      case 0xffffc1aa:
                        FUN_08fef46f(0x900a298,&local_f38);
                      }
                      FUN_08fa7c6e(&local_f38,_DAT_0900a298,_DAT_0900a2a8);
                      pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                                                 CONCAT22(local_f38._2_2_,
                                                          CONCAT11(local_f38._1_1_,(char)local_f38))
                                                );
                      pcVar28 = (code *)FUN_08f9c44b();
                      FUN_08fba6b1(pvVar10,CONCAT44(uStack_f2c,
                                                    CONCAT22(uStack_f2e,
                                                             CONCAT11(uStack_f2f,local_f30))),1,1);
                      FUN_08fba6b1(uStack_1280,lStack_1278,1,1);
                      FUN_08feece0((undefined1 (*) [32])auStack_f18,0,0xbe);
                      local_f38._0_1_ = (char)pppppppcStack_1148;
                      local_f38._1_1_ = (undefined1)((ulonglong)pppppppcStack_1148 >> 8);
                      local_f38._2_2_ = (undefined2)((ulonglong)pppppppcStack_1148 >> 0x10);
                      local_f38._4_4_ = pppppppcStack_1148._4_4_;
                      local_f30 = (byte)uStack_1140;
                      uStack_f2f = (undefined1)(uStack_1140 >> 8);
                      uStack_f2e = (undefined2)(uStack_1140 >> 0x10);
                      uStack_f2c = uStack_1140._4_4_;
                      local_f28 = (undefined1)uStack_1138;
                      uStack_f27 = (undefined1)(uStack_1138 >> 8);
                      sStack_f26 = (short)(uStack_1138 >> 0x10);
                      uStack_f24 = uStack_1138._4_4_;
                      _bStack_f20 = (undefined4)uStack_1130;
                      uStack_f1c = uStack_1130._4_4_;
                      uStack_1280 = (code *******)0x0;
                      (*pcVar28)(uVar27,pppppppcVar31,&local_f38,0xde);
                      pcVar49 = FUN_08fc693d(0,0x28);
                      lVar34 = 0x3d4;
                      if (pcVar49 == (char *)0x0) {
                        lVar34 = 400;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                      case 0xffffdbef:
                        goto override_jmp_08fa1a2c_case_0;
                      case 0xfffff879:
                        builtin_strncpy(pcVar49,"GNUstep Objective-C runtime kind version",0x28);
                        ppppppcStack_1210 = ppppppcStack_10d0;
                        local_f38._0_1_ = 0xac;
                        local_f38._1_1_ = 0x2e;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        pcVar1 = (char *)((longlong)&local_f38 + (longlong)pppppppcStack_11f0);
                        pcVar1[0] = '\x14';
                        pcVar1[1] = '\0';
                        pcVar1[2] = '\0';
                        pcVar1[3] = '\0';
                        pcVar1[4] = '\0';
                        pcVar1[5] = '\0';
                        pcVar1[6] = '\0';
                        pcVar1[7] = '\0';
                        local_f28 = SUB81(&ppppppcStack_1210,0);
                        uVar5 = local_f28;
                        uStack_f27 = (undefined1)((ulonglong)&ppppppcStack_1210 >> 8);
                        uVar17 = uStack_f27;
                        sStack_f26 = (short)((ulonglong)&ppppppcStack_1210 >> 0x10);
                        sVar18 = sStack_f26;
                        uStack_f24 = (undefined4)((ulonglong)&ppppppcStack_1210 >> 0x20);
                        uVar11 = uStack_f24;
                        lVar34 = 0x490;
                        if (_DAT_0900a0a8 == ((uint)ppppppcStack_10d0 ^ 0x7f62ed8a)) {
                          lVar34 = 0x278;
                        }
                        pcStack_1110 = pcVar49;
                    /* WARNING: Switch is manually overridden */
                        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                        case 0xffffd376:
                          FUN_08fef46f(0x900a090,&local_f38);
                        }
                        FUN_08fa7c6e(&uStack_1280,_DAT_0900a090,_DAT_0900a0a0);
                        ppppppcStack_1210 = (code ******)0x4c4fee6ae4e41ee;
                        local_f38._0_1_ = 0x1e;
                        local_f38._1_1_ = 0x5b;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        local_f30 = 0x1a;
                        uStack_f2f = 0;
                        uStack_f2e = 0;
                        uStack_f2c = 0;
                        puVar35 = (undefined4 *)&UNK_08ffc614;
                        if (_DAT_09008750 != (uVar8 ^ 0xfddc7b1d)) {
                          puVar35 = (undefined4 *)&UNK_08ffc318;
                        }
                        local_f28 = uVar5;
                        uStack_f27 = uVar17;
                        sStack_f26 = sVar18;
                        uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0xc9a:
                          FUN_08fef46f(0x9008738,&local_f38);
                        }
                        FUN_08fa7c6e(&local_f38,_DAT_09008738,_DAT_09008748);
                        pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                                                   CONCAT22(local_f38._2_2_,
                                                            CONCAT11(local_f38._1_1_,(char)local_f38
                                                                    )));
                        pcVar28 = (code *)FUN_08f9c44b();
                        FUN_08fba6b1(pvVar10,*(longlong *)((longlong)&local_f38 + uStack_1198),1,1);
                        FUN_08fba6b1(uStack_1280,*(longlong *)((longlong)&uStack_1280 + uStack_10b8)
                                     ,1,1);
                        uStack_1280 = (code *******)0x2feafd220472ecd9;
                        local_f38._0_1_ = 0xd3;
                        local_f38._1_1_ = 0x2e;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        *(ulonglong *)((longlong)&local_f38 + (longlong)pppppppcStack_1208) =
                             (ulonglong)(uVar8 ^ 0xfddc7b09);
                        local_f28 = SUB81(&uStack_1280,0);
                        uStack_f27 = (undefined1)((ulonglong)&uStack_1280 >> 8);
                        sStack_f26 = (short)((ulonglong)&uStack_1280 >> 0x10);
                        uStack_f24 = (undefined4)((ulonglong)&uStack_1280 >> 0x20);
                        lVar34 = 0x448;
                        if (_DAT_0900c220 == 0) {
                          lVar34 = 1000;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                        case 0x151:
                          FUN_08fef46f(0x900c208,&local_f38);
                        }
                        FUN_08fa7c6e(&local_f38,_DAT_0900c208,_DAT_0900c218);
                        ppppppcStack_1210 = (code ******)0xc5e21efd04447157;
                        uStack_1280 = (code *******)&UNK_08ff8aa7;
                        uVar41 = 0xfddc7b37 - uVar8;
                        *(ulonglong *)((longlong)&uStack_1280 + uStack_1118) = (ulonglong)uVar41;
                        puVar35 = (undefined4 *)&UNK_08ffc4b8;
                        if (_DAT_0900ad38 != 0) {
                          puVar35 = (undefined4 *)&UNK_08ffc3dc;
                        }
                        pppppppcStack_1270 = &ppppppcStack_1210;
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0xfffff031:
                          FUN_08fef46f(0x900ad20,&uStack_1280);
                        }
                        FUN_08fa7c6e(&uStack_1280,_DAT_0900ad20,_DAT_0900ad30);
                        puVar14 = (undefined *)uStack_1280;
                        pppppppcStack_1160 = (code *******)FUN_08f9c44b();
                        FUN_08fba6b1(puVar14,lStack_1278,1,1);
                        FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                                      CONCAT22(local_f38._2_2_,
                                                               CONCAT11(local_f38._1_1_,
                                                                        (char)local_f38))),
                                     CONCAT44(uStack_f2c,
                                              CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1
                                     ,1);
                        ppppppcStack_1210 = (code ******)0x9f7068633d13036f;
                        local_f38._0_1_ = 0xa8;
                        local_f38._1_1_ = 0x31;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        local_f30 = 0x14;
                        uStack_f2f = 0;
                        uStack_f2e = 0;
                        uStack_f2c = 0;
                        local_f28 = SUB81(&ppppppcStack_1210,0);
                        uVar5 = local_f28;
                        uStack_f27 = (undefined1)((ulonglong)&ppppppcStack_1210 >> 8);
                        uVar17 = uStack_f27;
                        sStack_f26 = (short)((ulonglong)&ppppppcStack_1210 >> 0x10);
                        sVar18 = sStack_f26;
                        uStack_f24 = (undefined4)((ulonglong)&ppppppcStack_1210 >> 0x20);
                        uVar11 = uStack_f24;
                        uVar20 = ((uint)*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                           (ulonglong)_tls_index * 8) + 600) ^ (uint)local_f68) +
                                 0xe34d219e;
                        puVar35 = (undefined4 *)&UNK_08ffc540;
                        if (_DAT_0900a088 != uVar20) {
                          puVar35 = (undefined4 *)&UNK_08ffc3bc;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0x5f0:
                          FUN_08fef46f(0x900a070,&local_f38);
                        }
                        FUN_08fa7c6e(&uStack_1280,_DAT_0900a070,_DAT_0900a080);
                        ppppppcVar43 = (code ******)
                                       ((ulonglong)(uVar41 ^ uVar8 + 0x25c1ebeb) ^
                                       (local_f90 ^ 0xf7b3770fc5bf1c57) - (ulonglong)uVar41);
                        local_f38._0_1_ = 0xc6;
                        local_f38._1_1_ = 100;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        pcVar49 = (char *)((longlong)&local_f38 + (longlong)pppppppcStack_11f8);
                        pcVar49[0] = '\x16';
                        pcVar49[1] = '\0';
                        pcVar49[2] = '\0';
                        pcVar49[3] = '\0';
                        pcVar49[4] = '\0';
                        pcVar49[5] = '\0';
                        pcVar49[6] = '\0';
                        pcVar49[7] = '\0';
                        lVar34 = 0x3d8;
                        if (_DAT_09008a58 == 0) {
                          lVar34 = 0x148;
                        }
                        ppppppcStack_1210 = ppppppcVar43;
                        local_f28 = uVar5;
                        uStack_f27 = uVar17;
                        sStack_f26 = sVar18;
                        uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
                        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                        case 0xffffd7fa:
                          FUN_08fef46f(0x9008a40,&local_f38);
                        }
                        FUN_08fa7c6e(&local_f38,_DAT_09008a40,_DAT_09008a50);
                        pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                                                   CONCAT22(local_f38._2_2_,
                                                            CONCAT11(local_f38._1_1_,(char)local_f38
                                                                    )));
                        pcVar23 = (code *)FUN_08f9c44b();
                        FUN_08fba6b1(pvVar10,*(longlong *)((longlong)&local_f38 + uStack_10c0),1,1);
                        FUN_08fba6b1(uStack_1280,lStack_1278,1,1);
                        ppppppcStack_1210 = (code ******)0xc07153b75ee4f1fc;
                        local_f38._0_1_ = 0x40;
                        local_f38._1_1_ = 0x33;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        local_f30 = 0x14;
                        uStack_f2f = 0;
                        uStack_f2e = 0;
                        uStack_f2c = 0;
                        uVar41 = uVar8 + 0x22384e3;
                        local_f28 = uVar5;
                        uStack_f27 = uVar17;
                        sStack_f26 = sVar18;
                        uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
                        switch(_DAT_0900b030 == uVar41) {
                        case false:
                          FUN_08fef46f(0x900b018,&local_f38);
                        }
                        FUN_08fa7c6e(&uStack_1280,_DAT_0900b018,_DAT_0900b028);
                        ppppppcStack_1210 = (code ******)0x86285c48e34525e5;
                        local_f38._0_1_ = 0xa5;
                        local_f38._1_1_ = 0x68;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        local_f30 = 0x12;
                        uStack_f2f = 0;
                        uStack_f2e = 0;
                        uStack_f2c = 0;
                        puVar35 = (undefined4 *)&UNK_08ffc64c;
                        if (_DAT_090083a8 ==
                            ((uVar20 ^ (_DAT_0900ceb4 ^ uVar41) * (int)ppppppcVar43 *
                                       (int)ppppppcVar43) & 0xffff)) {
                          puVar35 = (undefined4 *)&UNK_08ffc430;
                        }
                        local_f28 = uVar5;
                        uStack_f27 = uVar17;
                        sStack_f26 = sVar18;
                        uStack_f24 = uVar11;
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0xffffc331:
                          FUN_08fef46f(0x9008390,&local_f38);
                        }
                        FUN_08fa7c6e(&local_f38,_DAT_09008390,_DAT_090083a0);
                        pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                                                   CONCAT22(local_f38._2_2_,
                                                            CONCAT11(local_f38._1_1_,(char)local_f38
                                                                    )));
                        pcVar25 = (code *)FUN_08f9c44b();
                        FUN_08fba6b1(pvVar10,*(longlong *)((longlong)&local_f38 + uStack_10c8),1,1);
                        FUN_08fba6b1(uStack_1280,*(longlong *)((longlong)&uStack_1280 + uStack_1120)
                                     ,1,1);
                        uStack_1280 = (code *******)0x86c50b87c6e70b01;
                        local_f38._0_1_ = 0x7e;
                        local_f38._1_1_ = 0x43;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        pcVar49 = (char *)((longlong)&local_f38 + (longlong)pppppppcStack_1170);
                        pcVar49[0] = '\x14';
                        pcVar49[1] = '\0';
                        pcVar49[2] = '\0';
                        pcVar49[3] = '\0';
                        pcVar49[4] = '\0';
                        pcVar49[5] = '\0';
                        pcVar49[6] = '\0';
                        pcVar49[7] = '\0';
                        *(undefined8 **)((longlong)&local_f38 + (longlong)pppppppcStack_10b0) =
                             &uStack_1280;
                        lVar34 = 0x1d8;
                        if (_DAT_09009f90 != 0) {
                          lVar34 = 0x260;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                        case 0xffffb8a8:
                          FUN_08fef46f(0x9009f78,&local_f38);
                        }
                        FUN_08fa7c6e(&pppppppcStack_1070,_DAT_09009f78,_DAT_09009f88);
                        uStack_fb8 = 0x2df5d7fbc9e5ea6b;
                        ppcStack_1108 = (code **)&UNK_08ff2e98;
                        pcVar49 = (char *)((longlong)&ppcStack_1108 + (longlong)pppppppcStack_10d8);
                        pcVar49[0] = '\x14';
                        pcVar49[1] = '\0';
                        pcVar49[2] = '\0';
                        pcVar49[3] = '\0';
                        pcVar49[4] = '\0';
                        pcVar49[5] = '\0';
                        pcVar49[6] = '\0';
                        pcVar49[7] = '\0';
                        *(undefined8 **)((longlong)&ppcStack_1108 + uStack_1178) = &uStack_fb8;
                        lVar34 = 0x36c;
                        if (_DAT_0900afd0 == uVar41) {
                          lVar34 = 0x128;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                        case 0xffffe4e2:
                          FUN_08fef46f(0x900afb8,&ppcStack_1108);
                    /* WARNING: Switch is manually overridden */
                        }
                        FUN_08fa7c6e(&local_f38,_DAT_0900afb8,_DAT_0900afc8);
                        pvVar10 = (LPVOID)CONCAT44(local_f38._4_4_,
                                                   CONCAT22(local_f38._2_2_,
                                                            CONCAT11(local_f38._1_1_,(char)local_f38
                                                                    )));
                        pcVar33 = (code *)FUN_08f9c44b();
                        FUN_08fba6b1(pvVar10,CONCAT44(uStack_f2c,
                                                      CONCAT22(uStack_f2e,
                                                               CONCAT11(uStack_f2f,local_f30))),1,1)
                        ;
                        FUN_08fba6b1(pppppppcStack_1070,(longlong)pppppppcStack_1068,1,1);
                        uStack_1280 = (code *******)0xcd8e82c6d1d242ea;
                        local_f38._0_1_ = -0x44;
                        local_f38._1_1_ = 0x31;
                        local_f38._2_2_ = 0x8ff;
                        local_f38._4_4_ = 0;
                        local_f30 = 0x14;
                        uStack_f2f = 0;
                        uStack_f2e = 0;
                        uStack_f2c = 0;
                        *(undefined8 **)((longlong)&local_f38 + (longlong)pppppppcStack_1250) =
                             &uStack_1280;
                        puVar35 = (undefined4 *)&UNK_08ffc39c;
                        if (_DAT_09008fe0 == 0) {
                          puVar35 = (undefined4 *)&UNK_08ffc6ac;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0xffffb87b:
                          FUN_08fef46f(0x9008fc8,&local_f38);
                        }
                        FUN_08fa7c6e(appppppcStack_528,_DAT_09008fc8,_DAT_09008fd8);
                        ppppppcStack_f98 = (code ******)0x8f672de23dacaf08;
                        local_9f8 = (code *******)&UNK_08ff2fc5;
                        uVar41 = uVar8 + 0x22384f6;
                        uStack_9f0 = (ulonglong)uVar41;
                        pppppppcStack_9e8 = &ppppppcStack_f98;
                        uStack_1158 = CONCAT44(uStack_1158._4_4_,uVar41);
                        puVar35 = (undefined4 *)&UNK_08ffc760;
                        if (_DAT_09009630 != 0x13 - uVar41) {
                          puVar35 = (undefined4 *)&UNK_08ffc554;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0xffffd5e2:
                          FUN_08fef46f(0x9009618,&local_9f8);
                    /* WARNING: Switch is manually overridden */
                        }
                        FUN_08fa7c6e(apvStack_a10,_DAT_09009618,_DAT_09009628);
                        pvVar10 = apvStack_a10[0];
                        pcVar32 = (code *)FUN_08f9c44b();
                        FUN_08fba6b1(pvVar10,*(longlong *)
                                              ((longlong)apvStack_a10 + (longlong)pppppppcStack_1220
                                              ),1,1);
                        FUN_08fba6b1(appppppcStack_528[0],
                                     *(longlong *)
                                      ((longlong)appppppcStack_528 + (longlong)pppppppcStack_1098),1
                                     ,1);
                        lVar34 = 0x2c0;
                        if (uStack_1298 != pppppppcStack_10a0) {
                          lVar34 = 0x250;
                        }
                      }
                      pppppppcVar38 = pppppppcStack_11d8;
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                      case 0xffffdd04:
                        goto override_jmp_08fa40e6_case_0;
                      }
                      goto override_jmp_08fa40e6_case_1;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar35) {
                    case 0xfffff06e:
                      goto override_jmp_08fa13e7_case_1;
                    }
                  } while( true );
                }
              }
override_jmp_08fa13e7_case_1:
              cStack_a59 = '\0';
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
            }
            goto override_jmp_08fa4f5a_case_0;
          }
          goto override_jmp_08fa1a2c_case_0;
        }
        break;
      case '\x01':
        goto override_jmp_08fa0e5f_case_0;
      }
    }
override_jmp_08fa4af4_case_0:
    puVar29 = FUN_08fc693d(0,(ulonglong)
                             (byte)(((byte)*(undefined8 *)
                                            (*(longlong *)
                                              (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                              (ulonglong)_tls_index * 8) + 0x2c8) ^ local_1235) +
                                   0x59));
                    /* WARNING: Switch is manually overridden */
    switch(puVar29 != (undefined8 *)0x0) {
    case false:
override_jmp_08fa1a2c_case_0:
                    /* WARNING: Does not return */
      pcVar28 = (code *)invalidInstructionException();
      (*pcVar28)();
    case true:
      puVar29[4] = 0x69796c7265646e75;
      puVar29[5] = 0x736570797420676e;
      puVar29[2] = 0x707974203a646574;
      puVar29[3] = 0x2065766168207365;
      *puVar29 = 0x6f6974617265704f;
      puVar29[1] = 0x656c706d6f63206e;
      FUN_08fab1bd(&local_f38,puVar29,0x30);
      iVar52 = local_1080;
      *(undefined8 *)((longlong)local_1188 + (ulonglong)(uint)(local_1080 * -0x2d30c0cf)) =
           0xfffffffffffffffe;
      uStack_1280 = (code *******)&local_f38;
      FUN_08fba6b1((LPVOID)CONCAT44(local_f38._4_4_,
                                    CONCAT22(local_f38._2_2_,
                                             CONCAT11(local_f38._1_1_,(char)local_f38))),
                   CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30))),1,1);
      FUN_08fba6b1(puVar29,(ulonglong)(iVar52 * 0x2d30c0cf + 0x38),1,1);
      FUN_08fba6b1(pppppppcStack_11d8,(longlong)pppppppcStack_11a0,
                   (ulonglong)(iVar52 * 0x2d30c0cf + 0xc),4);
    }
    break;
  case 0xfffff75b:
    *(undefined8 *)
     ((longlong)local_1188 +
     *(longlong *)
      (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x138) *
     0x71476390afecc8ef + 0x77e736e94fb8de49) = 0xfffffffffffffffe;
                    /* WARNING: Switch is manually overridden */
  }
  uVar27 = 0x10;
  uVar45 = 8;
  pppppppcVar38 = pppppppcStack_1190;
  pppppppcVar31 = pppppppcStack_11e8;
LAB_08fa2201:
  FUN_08fba6b1(pppppppcVar38,(longlong)pppppppcVar31,uVar45,uVar27);
override_jmp_08fa49a8_case_0:
  FUN_08f71005(&uStack_f58);
override_jmp_08fa0e5f_case_0:
  return;
override_jmp_08fa1302_case_1:
  uVar27 = *(ulonglong *)((longlong)appppppcStack_1020 + (uVar37 - 0x18));
  pppppppcVar38 = pppppppcStack_1248;
  pppppppcStack_1288 = pppppppcVar54;
  goto LAB_08fa3b7a;
override_jmp_08fa190c_case_1:
  puVar35 = (undefined4 *)&UNK_08ffc56c;
  if (pppppppcVar31 != (code *******)0x0) {
    puVar35 = (undefined4 *)&UNK_08ffc340;
  }
  pppppppcStack_12b0 = (code *******)0x0;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xc4e:
override_jmp_08fa204e_case_1:
    pppppppcStack_1288 = FUN_08fc693d(0,0x70);
    lVar34 = 600;
    if (pppppppcStack_1288 == (code *******)0x0) {
      lVar34 = 0x118;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffc14d:
      goto override_jmp_08fa1a2c_case_0;
    case 0xffffced8:
      pppppppcStack_1288[0xc] = (code ******)0x0;
      pcVar49 = (char *)((longlong)pppppppcStack_1288 + (ulonglong)(uVar8 + 0x223854b));
      pcVar49[0] = '\0';
      pcVar49[1] = '\0';
      pppppppcStack_1100 = (code *******)0x0;
      pcVar49 = (char *)((longlong)pppppppcStack_1288 + (ulonglong)(uVar8 + 0x223854b));
      pcVar49[0] = '\x01';
      pcVar49[1] = '\0';
      *pppppppcStack_1288 = ppppppcVar51;
      pppppppcStack_1220 = pppppppcStack_1208;
      pppppppcStack_1170 = pppppppcStack_1208;
      uStack_1298 = (code *******)0x0;
      pppppppcVar31 = pppppppcStack_11f8;
      pppppppcStack_11e8 = pppppppcStack_11f0;
      pppppppcStack_10f8 = pppppppcStack_1288;
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case 0xffffe11d:
    pppppppcStack_1170 = (code *******)((longlong)pppppppcVar31 + (ulonglong)uVar41);
    uVar6 = *(ushort *)((longlong)pppppppcVar31 + (ulonglong)uVar41);
    puVar35 = (undefined4 *)&UNK_08ffc308;
    if ((ushort)(0x73U - (short)uVar41) <= uVar6) {
      puVar35 = (undefined4 *)&UNK_08ffc32c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffb654:
      pcVar49 = (char *)((ulonglong)uVar6 + 1);
                    /* WARNING: Switch is manually overridden */
      switch(pcVar49 <= (char *)((longlong)pppppppcStack_1250 + 1)) {
      case false:
        FUN_08fee630(pppppppcVar31 + (longlong)pppppppcStack_1250 + 1,
                     pppppppcVar31 + (longlong)pppppppcStack_1250,
                     (longlong)(pcVar49 + ~(ulonglong)pppppppcStack_1250) * 8);
                    /* WARNING: Switch is manually overridden */
      }
      pppppppcVar31[(longlong)pppppppcStack_1250] = ppppppcVar51;
      *(ushort *)pppppppcStack_1170 = (ushort)pcVar49;
      pppppppcStack_1220 = pppppppcStack_1208;
      pppppppcStack_11e8 = pppppppcStack_11f0;
      pppppppcVar31 = pppppppcStack_11f8;
LAB_08fa3036:
      pppppppcStack_12b0 = (code *******)0x0;
      break;
    case 0xfffff658:
      uVar20 = (uint)(byte)((local_1232 ^ 0x44) - ((char)pppppppcStack_1190 + (char)uVar41)) +
               (int)uStack_1228;
      pppppppcStack_12b0 = (code *******)0x4;
      bVar12 = false;
      pppppppcStack_1248 = pppppppcStack_1250;
                    /* WARNING: Switch is manually overridden */
      switch((code *******)(ulonglong)(uVar20 & 0xff) <= pppppppcStack_1250) {
      case true:
        puVar35 = (undefined4 *)&UNK_08ffc494;
        if (pppppppcStack_1250 != (code *******)0x5) {
          puVar35 = (undefined4 *)&UNK_08ffc50c;
        }
        bVar12 = false;
        pppppppcStack_12b0 = pppppppcStack_1250;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar35) {
        case 0x487:
                    /* WARNING: Switch is manually overridden */
          switch(pppppppcStack_1250 == (code *******)0x6 | 2) {
          case 2:
            pppppppcStack_1248 = (code *******)((longlong)pppppppcStack_1250 + -7);
            bVar12 = true;
            pppppppcStack_12b0 = (code *******)0x6;
            break;
          case 3:
            bVar12 = true;
            pppppppcStack_12b0 = (code *******)0x5;
            pppppppcStack_1248 = (code *******)0x0;
          }
        }
      }
      pppppppcStack_1220 = pppppppcVar31;
      pppppppcVar22 = FUN_08fc693d(0,0x70);
      pppppppcVar54 = pppppppcStack_1170;
      pppppppcVar31 = pppppppcStack_1220;
      puVar35 = (undefined4 *)&UNK_08ffc5e4;
      if (pppppppcVar22 == (code *******)0x0) {
        puVar35 = (undefined4 *)&UNK_08ffc4b4;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar35) {
      case 0x10cd:
        pppppppcVar22[0xc] = (code ******)0x0;
        *(ushort *)(pppppppcVar22 + 0xd) = 0;
        uVar27 = ~(ulonglong)pppppppcStack_12b0 + (ulonglong)*(ushort *)pppppppcStack_1170;
        *(ushort *)(pppppppcVar22 + 0xd) = (ushort)uVar27;
        lVar34 = 0x2c8;
        if ((byte)(((char)uVar20 +
                   *(char *)(*(longlong *)
                              (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                            0x226)) - (char)uVar41) <= uVar27) {
          lVar34 = 0x410;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
        case 0xa55:
          pppppppcStack_11e8 = (code *******)pppppppcStack_1220[(longlong)pppppppcStack_12b0];
          FUN_08fee630(pppppppcVar22,pppppppcStack_1220 + (longlong)pppppppcStack_12b0 + 1,
                       uVar27 * 8);
          if (bVar12) {
            pppppppcVar31 = pppppppcVar22;
          }
          *(ushort *)pppppppcVar54 = (ushort)pppppppcStack_12b0;
          uVar6 = *(ushort *)(pppppppcVar31 + 0xd);
          puVar35 = (undefined4 *)&UNK_08ffc588;
          if ((char *)((longlong)pppppppcStack_1248 + 1U) <= (char *)(ulonglong)uVar6) {
            puVar35 = (undefined4 *)&UNK_08ffc474;
          }
          pppppppcStack_1230 = pppppppcVar22;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar35) {
          case 0xffffd6ba:
            FUN_08fee630(pppppppcVar31 + (longlong)((longlong)pppppppcStack_1248 + 1U),
                         pppppppcVar31 + (longlong)pppppppcStack_1248,
                         ((longlong)(ulonglong)uVar6 - (longlong)pppppppcStack_1248) * 8);
          }
          pppppppcVar31[(longlong)pppppppcStack_1248] = ppppppcVar51;
          *(ushort *)(pppppppcVar31 + 0xd) = uVar6 + 1;
          pppppppcVar31 = (code *******)pppppppcStack_1220[0xc];
          lVar34 = 0x80;
          if (pppppppcVar31 != (code *******)0x0) {
            lVar34 = 0x44c;
          }
          pppppppcVar54 = (code *******)0x0;
          pppppppcVar22 = pppppppcStack_11e8;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xffffe406:
            ppppppcStack_10a8 = (code ******)CONCAT44(ppppppcStack_10a8._4_4_,uVar8 + 0x22384e3);
            pppppppcVar54 = (code *******)0x1;
            puVar35 = (undefined4 *)&UNK_08ffc42c;
            if (uVar8 + 0x22384e3 == 0) {
              puVar35 = (undefined4 *)&UNK_08ffc680;
            }
            uVar6 = *(ushort *)(pppppppcStack_1220 + 0xb);
                    /* WARNING: Switch is manually overridden */
            switch(*puVar35) {
            case 0xffffb3ef:
              do {
                pppppppcVar53 = (code *******)(ulonglong)uVar6;
                pcVar49 = (char *)(ulonglong)(ushort)(~(local_11c2 + 0x9d6eU) * -0x688f + 0x4a5e);
                pppppppcStack_1248 =
                     (code *******)
                     (ulonglong)*(ushort *)((longlong)pppppppcVar31 + (longlong)pcVar49);
                lVar34 = 0x298;
                if (&DAT_0000000a < pppppppcStack_1248) {
                  lVar34 = 0x454;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                case 0xffffe710:
                  pppppppcStack_1218 =
                       (code *******)CONCAT44(pppppppcStack_1218._4_4_,uVar8 + 0x22384e8);
                  puVar35 = (undefined4 *)&UNK_08ffc6dc;
                  if (uVar6 < (ushort)(uVar8 + 0x22384e8)) {
                    puVar35 = (undefined4 *)&UNK_08ffc418;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar35) {
                  case 0xffffb496:
                    lVar34 = 0x3d0;
                    if (uVar6 < 6) {
                      lVar34 = 800;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                    case 0xffffcc95:
                      pppppppcVar50 = (code *******)&pppppppcStack_1050;
                      pppppppcStack_12b0 = (code *******)0x5;
                      pppppppcVar40 = (code *******)0x5;
                      if (uVar6 != 5) {
LAB_08fa134c:
                        pppppppcVar40 = (code *******)((longlong)pppppppcVar53 + -7);
                        pppppppcStack_12b0 = (code *******)0x6;
                        pppppppcVar50 = (code *******)&local_f38;
                      }
                      break;
                    case 0xffffcd4e:
                      if (uVar6 != 6) goto LAB_08fa134c;
                      pppppppcStack_12b0 = (code *******)0x5;
                      pppppppcVar40 = (code *******)0x0;
                      pppppppcVar50 = (code *******)&local_f38;
                    }
                    break;
                  case 0xffffccc9:
                    pppppppcStack_12b0 = (code *******)0x4;
                    pppppppcVar50 = (code *******)&pppppppcStack_1050;
                    pppppppcVar40 = pppppppcVar53;
                  }
                  puVar29 = FUN_08fc693d(0,0xd0);
                    /* WARNING: Switch is manually overridden */
                  switch(puVar29 != (undefined8 *)0x0) {
                  case false:
                    goto override_jmp_08fa1a2c_case_0;
                  case true:
                    puVar29[0xc] = 0;
                    *(undefined2 *)(puVar29 + 0xd) = 0;
                    uVar27 = ~(ulonglong)pppppppcStack_12b0 +
                             (ulonglong)*(ushort *)((longlong)pppppppcVar31 + (longlong)pcVar49);
                    *(short *)(puVar29 + 0xd) = (short)uVar27;
                    pppppppcStack_1200 = pppppppcVar40;
                    pppppppcStack_11d0 = pppppppcVar50;
                    pppppppcStack_1168 = pppppppcVar22;
                    pppppppcStack_1098 = pppppppcVar54;
                    /* WARNING: Switch is manually overridden */
                    switch(uVar27 < (uVar8 ^ 0xfddc7b11)) {
                    case false:
                      goto override_jmp_08f9f8a6_case_1;
                    case true:
                      pppppppcVar54 = pppppppcVar31 + (longlong)pppppppcStack_12b0;
                      pppppppcStack_10a0 = (code *******)*pppppppcVar54;
                      uVar41 = uVar8 + 0x22384eb;
                      bVar19 = 0xb - (char)uVar41;
                      FUN_08fee630(puVar29,(undefined8 *)
                                           ((longlong)pppppppcVar54 + (ulonglong)uVar41),
                                   uVar27 << (bVar19 & 0x3f));
                      *(short *)((longlong)pppppppcVar31 + (longlong)pcVar49) =
                           (short)pppppppcStack_12b0;
                      uVar27 = (ulonglong)*(ushort *)(puVar29 + 0xd);
                      puVar35 = (undefined4 *)&UNK_08ffc720;
                      if (0xb < uVar27) {
                        puVar35 = (undefined4 *)&UNK_08ffc3c4;
                      }
                    }
                    pppppppcStack_11d8 = pppppppcVar31;
                    pcStack_1110 = pcVar49;
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar35) {
                    case 0xffffc151:
                      goto override_jmp_08fa1a2c_case_0;
                    case 0xffffe530:
                      lVar34 = 0x440;
                      if ((int)((longlong)pppppppcStack_1248 - (longlong)pppppppcStack_12b0) !=
                          *(ushort *)(puVar29 + 0xd) + 1) {
                        lVar34 = 0x428;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                      case 0xffffc161:
                        goto override_jmp_08fa1a2c_case_0;
                      case 0xfffff7cc:
                        FUN_08fee630(puVar29 + 0xe,
                                     (undefined8 *)
                                     ((longlong)pppppppcVar54 + (ulonglong)(0x80 - uVar41)),
                                     (longlong)pppppppcStack_1248 - (longlong)pppppppcStack_12b0 <<
                                     ((bVar19 - (char)(uVar8 ^ 0xfddc7b11)) +
                                      (char)local_11be * (char)pppppppcStack_1218 +
                                      (char)pppppppcStack_1218 & 0x3f));
                        uVar37 = 1;
                        lVar34 = puVar29[0xe];
                        *(undefined8 **)(lVar34 + 0x60) = puVar29;
                        *(undefined2 *)(lVar34 + (ulonglong)(uVar8 + 0x223853b)) = 0;
                        puVar35 = (undefined4 *)&UNK_08ffc4a4;
                        if (uVar27 == 0) {
                          puVar35 = (undefined4 *)&UNK_08ffc69c;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0xffffd61f:
override_jmp_08fa3ac0_case_0:
                          pppppppcStack_1050 = pppppppcStack_11d8;
                          local_f38._0_1_ = (char)puVar29;
                          local_f38._1_1_ = (undefined1)((ulonglong)puVar29 >> 8);
                          local_f38._2_2_ = (undefined2)((ulonglong)puVar29 >> 0x10);
                          local_f38._4_4_ = (undefined4)((ulonglong)puVar29 >> 0x20);
                          FUN_08f8b4bb((longlong)pppppppcStack_1200,(longlong)*pppppppcStack_11d0,
                                       pppppppcStack_1168,pppppppcStack_1230);
                          pppppppcStack_1230 =
                               (code *******)
                               CONCAT44(local_f38._4_4_,
                                        CONCAT22(local_f38._2_2_,
                                                 CONCAT11(local_f38._1_1_,(char)local_f38)));
                          puVar35 = (undefined4 *)&UNK_08ffc3a4;
                          if (pppppppcStack_1230 ==
                              (code *******)((ulonglong)ppppppcStack_10a8 & 0xffffffff)) {
                            puVar35 = (undefined4 *)&UNK_08ffc4e8;
                          }
                          break;
                        case 0xfffff42a:
                          do {
                            lVar34 = puVar29[uVar37 + 0xe];
                            *(undefined8 **)(lVar34 + 0x60) = puVar29;
                            *(short *)(lVar34 + (ulonglong)(uVar8 + 0x223853b)) = (short)uVar37;
                            puVar35 = (undefined4 *)&UNK_08ffc4a4;
                            if (uVar27 == uVar37) {
                              puVar35 = (undefined4 *)&UNK_08ffc69c;
                            }
                            uVar37 = uVar37 + 1;
                    /* WARNING: Switch is manually overridden */
                            switch(*puVar35) {
                            case 0xffffd61f:
                              goto override_jmp_08fa3ac0_case_0;
                            }
                          } while( true );
                        }
                        pppppppcStack_12b0 = (code *******)0x0;
                        pppppppcVar31 = (code *******)0x0;
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar35) {
                        case 0xffffc9e6:
                          pppppppcVar31 =
                               *(code ********)
                                ((longlong)pppppppcStack_1050 + (ulonglong)(uVar8 + 0x2238543));
                          lVar34 = 0x34c;
                          if (pppppppcVar31 == (code *******)0x0) {
                            lVar34 = 0x80;
                          }
                          break;
                        case 0xffffe9cc:
                          goto override_jmp_08fa15d3_case_0;
                        }
                      }
                    }
                  }
                  break;
                case 0xffffe999:
                  FUN_08f8b4bb((longlong)pppppppcVar53,(longlong)pppppppcVar31,pppppppcVar22,
                               pppppppcStack_1230);
                  pppppppcVar31 = (code *******)0x0;
                  goto LAB_08fa3036;
                }
                pppppppcVar54 = pppppppcStack_1098;
                pppppppcVar22 = pppppppcStack_10a0;
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
                case 0xffffba31:
                  pppppppcVar54 = (code *******)((longlong)pppppppcStack_1098 + 1);
                  uVar6 = *(ushort *)(pppppppcStack_1050 + 0xb);
                    /* WARNING: Switch is manually overridden */
                  switch(0x8f9fa5e) {
                  case 0x8fa0792:
                    goto override_jmp_08fa00c7_case_1;
                  }
                  break;
                case 0xfffff40a:
                  goto override_jmp_08fa1095_case_1;
                }
              } while( true );
            case 0xffffc123:
override_jmp_08fa00c7_case_1:
            }
            goto override_jmp_08fa1a2c_case_0;
          case 0xfffff40a:
override_jmp_08fa1095_case_1:
            lVar34 = 0x2fc;
            if (pppppppcStack_1288 == (code *******)0x0) {
              lVar34 = 0x4b4;
            }
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xffffc17f:
            goto override_jmp_08fa1a2c_case_0;
          case 0xffffd50c:
            pppppppcVar53 = FUN_08fc693d(0,(ulonglong)(0xfddc7bed - uVar8));
            puVar35 = (undefined4 *)&UNK_08ffc53c;
            if (pppppppcVar53 != (code *******)0x0) {
              puVar35 = (undefined4 *)&UNK_08ffc62c;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar35) {
            case 0xffffc15f:
              goto override_jmp_08fa1a2c_case_0;
            case 0xffffde37:
              pppppppcVar53[0xc] = (code ******)0x0;
              *(ushort *)(pppppppcVar53 + 0xd) = 0;
              uVar41 = uVar8 + 0x2238553;
              *(code ********)((longlong)pppppppcVar53 + (ulonglong)uVar41) = pppppppcStack_1288;
              pppppppcVar50 = (code *******)((longlong)uStack_1298 + 1);
              lVar34 = 4;
              if (pppppppcVar50 != (code *******)(ulonglong)(uVar41 ^ 0x70)) {
                lVar34 = 0x47c;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
              case 0xffffc14f:
                goto override_jmp_08fa1a2c_case_0;
              case 0xffffd387:
                pppppppcStack_1288[0xc] = (code ******)pppppppcVar53;
                *(ushort *)(pppppppcStack_1288 + 0xb) = 0;
                puVar35 = (undefined4 *)&UNK_08ffc4c0;
                if (pppppppcVar54 == uStack_1298) {
                  puVar35 = (undefined4 *)&UNK_08ffc4f8;
                }
                pppppppcStack_1100 = pppppppcVar50;
                pppppppcStack_10f8 = pppppppcVar53;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar35) {
                case 0xffffc153:
                  goto override_jmp_08fa1a2c_case_0;
                case 0xffffcbba:
                  uVar6 = *(ushort *)(pppppppcVar53 + 0xd);
                  puVar35 = (undefined4 *)&UNK_08ffc750;
                  if ((ushort)(0x7b28U - (short)uVar45) <= uVar6) {
                    puVar35 = (undefined4 *)&UNK_08ffc668;
                  }
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar35) {
                case 0xffffc15b:
                  goto override_jmp_08fa1a2c_case_0;
                case 0xffffc715:
                  *(ushort *)(pppppppcVar53 + 0xd) = uVar6 + 1;
                  pppppppcVar53[uVar6] = (code ******)pppppppcVar22;
                  *(code ********)
                   ((longlong)pppppppcVar53 + (ulonglong)uVar6 * 8 + (ulonglong)uVar41 + 8) =
                       pppppppcStack_1230;
                  pppppppcStack_1230[0xc] = (code ******)pppppppcVar53;
                  *(ushort *)(pppppppcStack_1230 + 0xb) = uVar6 + 1;
                  pppppppcStack_12b0 = (code *******)0x0;
                  pppppppcVar31 = (code *******)0x0;
                  pppppppcStack_1288 = pppppppcVar53;
                  uStack_1298 = pppppppcVar50;
                    /* WARNING: Switch is manually overridden */
                }
              }
            }
          }
          break;
        case 0xffffbf6a:
          goto override_jmp_08fa1a2c_case_0;
        }
        break;
      case 0xffffc1a8:
        goto override_jmp_08fa1a2c_case_0;
      }
    }
  }
override_jmp_08fa15d3_case_0:
  ppcVar39 = (code **)((longlong)ppcStack_11e0 + 1);
  ppcStack_1108 = ppcVar39;
  FUN_08fa6230();
  ppppppcVar51 = ppppppcStack_f10;
  pppppppcVar54 = pppppppcStack_1270;
  lVar34 = 0x144;
  if (*(char *)((longlong)&local_f38 + (longlong)pppppppcStack_10e8) != -2) {
    lVar34 = 0x22c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffd068:
    pppppppcStack_1208 = pppppppcStack_1220;
    pppppppcStack_11f0 = pppppppcStack_11e8;
    pppppppcStack_11f8 = pppppppcVar31;
                    /* WARNING: Switch is manually overridden */
override_jmp_08fa0750_case_0:
    uVar41 = 0xfddc7b1d - uVar8;
    lVar34 = 0x3fc;
    if (pppppppcStack_1270 == (code *******)(ulonglong)uVar41) {
      lVar34 = 0x158;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffd94a:
      goto override_jmp_08f9f83a_case_1;
    }
    goto override_jmp_08f9f83a_case_0;
  case 0xfffff453:
    uVar6 = CONCAT11(local_f38._1_1_,(char)local_f38);
    ppppppcVar46 = (code ******)CONCAT44(local_f38._4_4_,CONCAT22(local_f38._2_2_,uVar6));
    ppppppcStack_a28 = (code ******)CONCAT44(uStack_f1c,_bStack_f20);
    ppppppcStack_a20 = (code ******)CONCAT71(auStack_f18._1_7_,auStack_f18[0]);
    ppppppcStack_a38 =
         (code ******)CONCAT44(uStack_f2c,CONCAT22(uStack_f2e,CONCAT11(uStack_f2f,local_f30)));
    ppppppcStack_a30 =
         (code ******)CONCAT44(uStack_f24,CONCAT22(sStack_f26,CONCAT11(uStack_f27,local_f28)));
    puVar35 = (undefined4 *)&UNK_08ffc3f0;
    if (ppppppcStack_f10 != (code ******)((ulonglong)uStack_1228 & 0xffffffff)) {
      puVar35 = (undefined4 *)&UNK_08ffc5f8;
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xffffbeb9:
override_jmp_08fa1f49_case_0:
    ppcStack_11e0 = ppcVar39;
    puVar35 = (undefined4 *)&UNK_08ffc4bc;
    if (pppppppcStack_1270 == *(code ********)((longlong)&uStack_1280 + uStack_1180)) {
      puVar35 = (undefined4 *)&UNK_08ffc6cc;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0x4ae:
      FUN_08f78548(&uStack_1280);
      uStack_1280[(longlong)pppppppcVar54] = ppppppcVar51;
      pppppppcStack_1270 = (code *******)((longlong)pppppppcVar54 + 1);
      puVar35 = (undefined4 *)&UNK_08ffc710;
      if (ppppppcVar46 == (code ******)0x0) {
        puVar35 = (undefined4 *)&UNK_08ffc368;
      }
      ppcVar39 = ppcStack_11e0;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar35) {
      case 0xffffb8bc:
        goto override_jmp_08fa0b27_case_0;
      }
      goto override_jmp_08f9ff67_case_1;
    case 0xffffbb62:
      uStack_1280[(longlong)pppppppcStack_1270] = ppppppcStack_f10;
      pppppppcStack_1270 = (code *******)((longlong)pppppppcStack_1270 + 1);
      puVar35 = (undefined4 *)&UNK_08ffc368;
      if (ppppppcVar46 != (code ******)0x0) {
        puVar35 = (undefined4 *)&UNK_08ffc710;
      }
      ppcVar39 = ppcStack_11e0;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar35) {
      case 0x42c:
        goto override_jmp_08f9ff67_case_1;
      case 0xffffb8bc:
override_jmp_08fa0b27_case_0:
        lVar34 = 0xb0;
        if ((uVar6 & 7) != (int)ppppppcStack_fd0 + 0x10000U) {
          lVar34 = 0x368;
        }
        if (ppppppcStack_fd0 <= ppppppcVar46 + -0x2000) {
          lVar34 = 0x368;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
        case 0x42c:
          goto override_jmp_08f9ff67_case_1;
        }
      }
    }
    break;
  case 0xffffd898:
    uVar41 = 0x2f8;
    if (((uint)ppppppcStack_f10 & 7) == ((uint)ppppppcStack_fd8 ^ 0xffff0000)) {
      uVar41 = 0x138;
    }
    uVar27 = (ulonglong)uVar41;
    if (ppppppcStack_fd8 <= ppppppcStack_f10 + -0x2000) {
      uVar27 = 0x2f8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + uVar27)) {
    case 0xffffbeb9:
      goto override_jmp_08fa1f49_case_0;
    case 0xffffc498:
      puVar35 = (undefined4 *)&UNK_08ffc710;
      if (ppppppcVar46 == (code ******)0x0) {
        puVar35 = (undefined4 *)&UNK_08ffc368;
      }
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffb8bc:
      goto override_jmp_08fa0b27_case_0;
    }
override_jmp_08f9ff67_case_1:
    pppppppcVar54 = pppppppcStack_1270;
    puVar35 = (undefined4 *)&UNK_08ffc6c4;
    if (pppppppcStack_1270 == *(code ********)((longlong)&uStack_1280 + uStack_1180)) {
      puVar35 = (undefined4 *)&UNK_08ffc598;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0x58:
      uStack_1280[(longlong)pppppppcStack_1270] = ppppppcVar46;
      pppppppcStack_1270 = (code *******)((longlong)pppppppcStack_1270 + 1);
                    /* WARNING: Switch is manually overridden */
      break;
    case 0xffffc684:
      FUN_08f78548(&uStack_1280);
      uStack_1280[(longlong)pppppppcVar54] = ppppppcVar46;
      pppppppcStack_1270 = (code *******)((longlong)pppppppcVar54 + 1);
                    /* WARNING: Switch is manually overridden */
    }
  }
  uVar27 = uStack_1138;
  lVar34 = 100;
  if (uStack_1138 != uStack_1140) {
    lVar34 = 0x70;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffb10c:
    FUN_08fd90ce(&pppppppcStack_1148);
  }
  pppppppcStack_1148[uVar27 * 6] = ppppppcVar46;
  pppppppcStack_1148[uVar27 * 6 + 1] = ppppppcStack_a38;
  (pppppppcStack_1148 + uVar27 * 6 + 1)[1] = ppppppcStack_a30;
  pppppppcStack_1148[uVar27 * 6 + 3] = ppppppcStack_a28;
  (pppppppcStack_1148 + uVar27 * 6 + 3)[1] = ppppppcStack_a20;
  pppppppcStack_1148[uVar27 * 6 + 5] = ppppppcVar51;
  uStack_1138 = uVar27 + 1;
  uVar41 = 0xfddc7b1d - uVar8;
  lVar34 = 0x3fc;
  if (pppppppcStack_1270 == (code *******)(ulonglong)uVar41) {
    lVar34 = 0x158;
  }
  pppppppcStack_11f0 = pppppppcStack_11e8;
  pppppppcStack_1208 = pppppppcStack_1220;
  pppppppcStack_11f8 = pppppppcVar31;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffd94a:
    goto override_jmp_08f9f83a_case_1;
  }
override_jmp_08f9f83a_case_0:
  goto LAB_08fa0703;
override_jmp_08f9f83a_case_1:
  pppppppcVar31 = pppppppcStack_1148;
  lVar34 = 0x184;
  if (uStack_1138 == uStack_1178) {
    lVar34 = 0x3a8;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffce66:
    pppppppcVar54 = pppppppcStack_1148 + uStack_1178 * 6;
    lVar34 = 0xa4;
    if (pppppppcStack_1148 == pppppppcVar54) {
      lVar34 = 0x184;
    }
    pppppppcVar22 = pppppppcStack_1148;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffbe95:
      do {
        puVar35 = (undefined4 *)&UNK_08ffc6ec;
        if (pppppppcVar22[1] != ppppppcStack_10e0) {
          puVar35 = (undefined4 *)&UNK_08ffc2f8;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar35) {
        case 0xffffc4cb:
          lVar34 = 0x450;
          if (pppppppcVar22[2] != ppppppcStack_fe0) {
            lVar34 = 0x184;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xffffe44f:
            lVar34 = 0xa8;
            if (uStack_1178 == 0) {
              lVar34 = 0x480;
            }
            pppppppcVar22 = pppppppcStack_1148;
            pppppppcVar53 = pppppppcStack_1148;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
            case 0xffffc0e3:
              goto override_jmp_08fa13b3_case_0;
            }
            goto override_jmp_08fa13b3_case_1;
          }
          goto override_jmp_08fa1504_case_0;
        case 0xffffee7a:
          pppppppcVar22 = pppppppcVar22 + 6;
          lVar34 = 0xa4;
          if (pppppppcVar22 == pppppppcVar54) {
            lVar34 = 0x184;
          }
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
        case 0xffffbc0c:
          goto override_jmp_08fa1504_case_0;
        }
      } while( true );
    }
  }
override_jmp_08fa1504_case_0:
  FUN_08fba6b1(puStack_1058,(ulonglong)(uVar8 + 0x2238506),1,1);
  FUN_08f9ddde((longlong *)&ppcStack_1108);
  FUN_08fba6b1(uStack_1280,*(longlong *)((longlong)&uStack_1280 + uStack_1180),8,8);
  FUN_08fba6b1(pppppppcVar31,uStack_1140,(ulonglong)(uVar8 + 0x22384eb),
               (ulonglong)(0x53 - (uVar8 + 0x2238506)));
  pppppppcStack_1230 = pppppppcStack_11f0;
  uStack_1228 = pppppppcStack_1250;
  pppppppcStack_1288 = pppppppcStack_1250;
  pppppppcStack_1248 = pppppppcStack_12b0;
  pppppppcStack_1218 = pppppppcStack_1208;
  pppppppcStack_1200 = pppppppcStack_11f8;
                    /* WARNING: Switch is manually overridden */
  goto override_jmp_08fa2eed_case_0;
  do {
    pppppppcVar22 = pppppppcVar50;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffc0e3:
override_jmp_08fa13b3_case_0:
      lVar34 = 0xe8;
      if (*(char *)(pppppppcVar22 + 3) == -1) {
        lVar34 = 0x4ac;
      }
      pppppppcVar50 = pppppppcVar22 + 6;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
      case 0x849:
        ppppppcVar51 = *(code *******)((longlong)pppppppcVar22 + (ulonglong)(-uVar8 + 0xfddc7b3d));
        *(char *)pppppppcVar53 = *(char *)(pppppppcVar22 + 3);
        pppppppcVar53[1] = ppppppcVar51;
        pppppppcVar53 = (code *******)((longlong)pppppppcVar53 + (ulonglong)(-uVar8 + 0xfddc7b2d));
        puVar35 = (undefined4 *)&UNK_08ffc360;
        if (pppppppcVar50 == pppppppcVar54) {
          puVar35 = (undefined4 *)&UNK_08ffc738;
        }
        break;
      case 0xffffcd2a:
        puVar35 = (undefined4 *)&UNK_08ffc738;
        if (pppppppcVar50 != pppppppcVar54) {
          puVar35 = (undefined4 *)&UNK_08ffc360;
        }
        pppppppcVar22 = pppppppcVar50;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar35) {
        case 0xffffe358:
          goto override_jmp_08fa13b3_case_1;
        }
        break;
      }
      break;
    case 0xffffe358:
      goto override_jmp_08fa13b3_case_1;
    }
  } while( true );
override_jmp_08fa13b3_case_1:
  uVar27 = (longlong)pppppppcVar53 - (longlong)pppppppcStack_1148;
  bVar19 = ~((char)uVar41 + local_1233);
  uVar41 = (uint)bVar19;
  pppppppcVar22 = (code *******)(uVar27 >> (bVar19 & 0x3f));
  pppppppcVar54 = (code *******)(uStack_1140 * 3);
  FUN_08fba6b1(puStack_1058,(ulonglong)(uVar41 + 0x1f),1,1);
  FUN_08f9ddde((longlong *)&ppcStack_1108);
  FUN_08fba6b1(uStack_1280,*(longlong *)((longlong)&uStack_1280 + uStack_1180),8,
               (ulonglong)(0xc - uVar41));
  puVar35 = (undefined4 *)&UNK_08ffc54c;
  if ((code *******)((longlong)apppppppcStack_11b8[1] - (longlong)pcStack_11a8) < pppppppcVar22) {
    puVar35 = (undefined4 *)&UNK_08ffc324;
  }
  uStack_1228 = pppppppcVar54;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0xffffe236:
    puVar29 = (undefined8 *)(ulonglong)uStack_108c;
    pppppppcStack_1168 = pppppppcVar22;
    lVar34 = FUN_08f8b55f(apppppppcStack_11b8,(ulonglong)pcStack_11a8,(ulonglong)pppppppcVar22,
                          puVar29,(ulonglong)
                                  ((~(local_11ba - uStack_108c) + uVar41) - (uStack_108c ^ uVar41) &
                                  0xffff));
    lVar30 = 0x334;
    if (lVar34 == 7 - (longlong)puVar29) {
      lVar30 = 0x264;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
    case 0xe50:
      pppppppcStack_1230 = pppppppcStack_11f8;
      pppppppcStack_1248 = pppppppcStack_1250;
      pppppppcStack_1218 = pppppppcStack_1208;
      pppppppcStack_1200 = pppppppcStack_12b0;
      pppppppcVar22 = pppppppcStack_1168;
                    /* WARNING: Switch is manually overridden */
      break;
    case 0xffffc153:
      goto override_jmp_08fa1a2c_case_0;
    }
    break;
  case 0xfffff566:
    puVar35 = (undefined4 *)&UNK_08ffc344;
    if (pppppppcVar53 != pppppppcVar31) {
      puVar35 = (undefined4 *)&UNK_08ffc330;
    }
    pppppppcVar53 = pppppppcStack_11f0;
    pppppppcVar54 = pppppppcStack_11f8;
    pppppppcVar50 = (code *******)pcStack_11a8;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xfffff32a:
override_jmp_08fa29c5_case_0:
      pcStack_11a8 = (code *)((longlong)pppppppcVar22 + (longlong)pppppppcVar50);
      FUN_08fba6b1(pppppppcVar31,(longlong)uStack_1228,(ulonglong)(uVar8 + 0x22384eb),0x10);
      pppppppcStack_1288 = pppppppcStack_1250;
      pppppppcStack_1230 = pppppppcVar53;
      pppppppcStack_1248 = pppppppcStack_12b0;
      pppppppcStack_1218 = pppppppcStack_1208;
      pppppppcStack_1200 = pppppppcVar54;
      goto override_jmp_08fa2eed_case_0;
    }
  }
  pppppppcVar50 = (code *******)pcStack_11a8;
  pppppppcVar53 = pppppppcStack_11f0;
  pppppppcVar54 = pppppppcStack_11f8;
  FUN_08fee630((code *******)
               ((longlong)apppppppcStack_11b8[0] +
               ((ulonglong)pppppppcStack_11a0 & 0xffffffff) * (longlong)pcStack_11a8),pppppppcVar31,
               uVar27);
  pppppppcStack_1230 = pppppppcStack_12b0;
  pppppppcStack_1248 = pppppppcVar53;
  pppppppcStack_1218 = pppppppcVar31;
  pppppppcStack_1200 = pppppppcVar54;
                    /* WARNING: Switch is manually overridden */
  goto override_jmp_08fa29c5_case_0;
override_jmp_08fa09e6_case_1:
  lVar34 = 0x2c4;
  if ((code *******)pcStack_11a8 ==
      (code *******)
      (ulonglong)(byte)-(((local_1237 - (char)uStack_1088) - (char)uStack_1120) + (char)uStack_1118)
     ) {
    lVar34 = 0x14;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffcc0d:
    lStack_12a0 = lStack_1030;
    lVar34 = 0x42c;
    if (uStack_1028 == uVar8 + 0x22384e3) {
      lVar34 = 0x1c8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xffffe491:
      pppppppcVar54 = pppppppcStack_1038 + uStack_1028 * 2;
      pppppppcVar38 = pppppppcStack_1038;
      do {
        pppppppcVar53 = (code *******)((longlong)pppppppcVar38 + (ulonglong)(0xfddc7b2d - uVar8));
        lVar34 = 0x188;
        if ((code ******)(ulonglong)(0xfddc7b2d - uVar8 ^ 0xf) < *pppppppcVar38) {
          lVar34 = 0x2b8;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
        case 0xffffc10f:
          lVar34 = 0x380;
          if (pppppppcVar53 == pppppppcVar54) {
            lVar34 = 0x1c8;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xfffff5ed:
            goto override_jmp_08fa0790_case_1;
          }
          break;
        case 0xffffc6cc:
          FUN_08fa6230();
          pcVar28 = pcStack_11a8;
          bVar19 = bStack_f20;
          lVar34 = 0x444;
          if (bStack_f20 < 0xfe) {
            lVar34 = 0x398;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xffffba9a:
            ppppppcVar43 = *(code *******)((longlong)&local_f38 + (ulonglong)(uVar8 ^ 0xfddc7b3d));
                    /* WARNING: Switch is manually overridden */
            switch((code *******)pcStack_11a8 == apppppppcStack_11b8[1]) {
            case false:
              *(byte *)(apppppppcStack_11b8[0] + (longlong)pcStack_11a8 * 2) = bStack_f20;
              apppppppcStack_11b8[0][(longlong)pcStack_11a8 * 2 + 1] = ppppppcVar43;
              pcStack_11a8 = (code *)((longlong)pcStack_11a8 + 1);
              lVar34 = 0x1c8;
              if (pppppppcVar53 != pppppppcVar54) {
                lVar34 = 0x380;
              }
              pppppppcVar31 = pppppppcStack_1258;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
              case 0xfffff5ed:
                goto override_jmp_08fa0790_case_1;
              }
              break;
            case true:
              FUN_08fba61a(apppppppcStack_11b8);
              *(byte *)(apppppppcStack_11b8[0] + (longlong)pcVar28 * 2) = bVar19;
              apppppppcStack_11b8[0][(longlong)pcVar28 * 2 + 1] = ppppppcVar43;
              pcStack_11a8 = (code *)((longlong)pcVar28 + 1);
              lVar34 = 0x380;
              if (pppppppcVar53 == pppppppcVar54) {
                lVar34 = 0x1c8;
              }
              pppppppcVar31 = pppppppcStack_1258;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
              case 0xfffff5ed:
                goto override_jmp_08fa0790_case_1;
              }
            }
            break;
          case 0xffffea7f:
            lVar34 = 0x1c8;
            if (pppppppcVar53 != pppppppcVar54) {
              lVar34 = 0x380;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
            case 0xfffff5ed:
              goto override_jmp_08fa0790_case_1;
            }
          }
        }
        pppppppcVar38 = pppppppcVar53;
      } while( true );
    }
    break;
  case 0xffffeff0:
    if ((code *******)(ulonglong)(uVar8 + 0x22384e4) != (code *******)pcStack_11a8) {
      ppcStack_10f0 = &pcStack_11a8;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ff9758 + (ulonglong)(pcStack_11a8 < (code *******)0x15) * 4)) {
      case 0xfffa9797:
        pppppppcVar54 =
             (code *******)
             ((longlong)apppppppcStack_11b8[0] +
             (ulonglong)(uVar8 + 0x22384f3) * (longlong)pcStack_11a8);
        uVar27 = uVar45 ^ 0xa1b464b7022384ed;
        pppppppcVar38 = apppppppcStack_11b8[0];
        do {
          pppppppcVar22 = pppppppcVar38 + 2;
          ppppppcVar43 = *(code *******)((longlong)pppppppcVar22 + (ulonglong)(0xfddc7b25 - uVar8));
          lVar34 = 0x19c;
          if (*(code *******)((longlong)pppppppcVar22 + ((ulonglong)(0xfddc7b25 - uVar8) - 0x10)) <=
              ppppppcVar43) {
            lVar34 = 0x68;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
          case 0xffffd2fc:
            puVar35 = (undefined4 *)&UNK_08ffc528;
            if (pppppppcVar38 + 4 == pppppppcVar54) {
              puVar35 = (undefined4 *)&UNK_08ffc600;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar35) {
            case 0xffffe766:
              goto override_jmp_08fa0248_case_1;
            }
            break;
          case 0xffffe2a9:
            uVar5 = *(undefined1 *)pppppppcVar22;
            ppppppcVar51 = (code ******)((undefined8 *)((longlong)pppppppcVar22 + uVar27))[1];
            *pppppppcVar22 = *(code *******)((longlong)pppppppcVar22 + uVar27);
            pppppppcVar38[3] = ppppppcVar51;
            puVar35 = (undefined4 *)&UNK_08ffc5e8;
            if ((code *******)((longlong)pppppppcVar22 + uVar27) != apppppppcStack_11b8[0]) {
              puVar35 = (undefined4 *)&UNK_08ffc47c;
            }
            pppppppcVar53 = pppppppcVar22;
            pppppppcVar50 = (code *******)((longlong)pppppppcVar22 + uVar27);
            pppppppcVar40 = apppppppcStack_11b8[0];
                    /* WARNING: Switch is manually overridden */
            switch(*puVar35) {
            case 0xffffbb9d:
override_jmp_08fa27fc_case_0:
              *(undefined1 *)pppppppcVar40 = uVar5;
              pppppppcVar53[-1] = ppppppcVar43;
              puVar35 = (undefined4 *)&UNK_08ffc528;
              if (pppppppcVar38 + 4 == pppppppcVar54) {
                puVar35 = (undefined4 *)&UNK_08ffc600;
              }
              break;
            case 0xffffebd6:
              do {
                puVar35 = (undefined4 *)&UNK_08ffc714;
                if (pppppppcVar53[-3] <= ppppppcVar43) {
                  puVar35 = (undefined4 *)&UNK_08ffc5e8;
                }
                pppppppcVar40 = pppppppcVar50;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar35) {
                case 0xffffbb9d:
                  goto override_jmp_08fa27fc_case_0;
                case 0xffffe15a:
                  ppppppcVar51 = (code ******)((undefined8 *)((longlong)pppppppcVar50 + uVar27))[1];
                  *pppppppcVar50 = *(code *******)((longlong)pppppppcVar50 + uVar27);
                  pppppppcVar50[1] = ppppppcVar51;
                  puVar35 = (undefined4 *)&UNK_08ffc5e8;
                  if ((code *******)((longlong)pppppppcVar50 + uVar27) != apppppppcStack_11b8[0]) {
                    puVar35 = (undefined4 *)&UNK_08ffc47c;
                  }
                }
                pppppppcVar53 = pppppppcVar50;
                pppppppcVar50 = (code *******)((longlong)pppppppcVar50 + uVar27);
                pppppppcVar40 = apppppppcStack_11b8[0];
                    /* WARNING: Switch is manually overridden */
                switch(*puVar35) {
                case 0xffffbb9d:
                  goto override_jmp_08fa27fc_case_0;
                }
              } while( true );
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar35) {
            case 0xffffe766:
              goto override_jmp_08fa0248_case_1;
            }
          }
          pppppppcVar38 = pppppppcVar22;
        } while( true );
      case 0xfffa9872:
        FUN_08f78643((ulonglong *)apppppppcStack_11b8[0],(ulonglong)pcStack_11a8);
      }
    }
    goto LAB_08fa2ddd;
  }
  goto override_jmp_08fa0790_case_1;
override_jmp_08fa0248_case_1:
LAB_08fa2ddd:
  FUN_08fa5b79((longlong *)apppppppcStack_11b8);
  pppppppcVar54 = apppppppcStack_11b8[1];
  pppppppcStack_1190 = apppppppcStack_11b8[0];
  pppppppcVar38 = (code *******)*ppcStack_10f0;
  FUN_08fba6b1(pppppppcStack_1038,lStack_1030,(ulonglong)(uVar8 ^ 0xfddc7b15),0x10);
  goto LAB_08fa2e31;
code_r0x08fa07b2:
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0x887:
override_jmp_08fa40e6_case_1:
    cStack_a59 = '\0';
    FUN_08fba6b1(pcStack_1110,0x28,1,1);
    uVar27 = uStack_1240;
    pppppppcVar38 = pppppppcStack_11d0;
                    /* WARNING: Switch is manually overridden */
    break;
  case 0xffffdd04:
override_jmp_08fa40e6_case_0:
    do {
      pppppppcVar54 = (code *******)((longlong)pppppppcVar38 + (ulonglong)(uVar8 ^ 0xfddc7b19));
      lVar34 = (*pcVar25)(0x1a,0,*(undefined4 *)pppppppcVar38);
      pppppppcVar38 = pppppppcVar54;
                    /* WARNING: Switch is manually overridden */
      switch(lVar34 != 0) {
      case false:
        goto override_jmp_08fa23b3_case_1;
      case true:
        iVar52 = (*pcVar23)(lVar34);
        lVar30 = 0xf0;
        if (iVar52 != uVar8 + 0x22384e2) {
          lVar30 = 0x420;
        }
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
      case 0x121e:
        FUN_08feece0((undefined1 (*) [32])appppppcStack_528,0,0x4d0);
        uStack_4f8 = 0x10000b;
        uVar41 = (*(code *)pppppppcStack_1160)(lVar34,(undefined1 (*) [32])appppppcStack_528);
        lVar30 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
        lVar47 = 700;
        if (uVar41 != ((((uint)*(undefined8 *)(lVar30 + 0x250) ^ (uint)*(ushort *)(lVar30 + 0x208))
                       - (uint)uStack_1158) * -0x2a2fc4b & 0xffff)) {
          lVar47 = 200;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar47)) {
        case 0xacb:
          FUN_08fee630(&local_9f8,(undefined8 *)appppppcStack_528,0x4d0);
          pppppppcStack_430 = pppppppcStack_1200;
          *(ulonglong *)((longlong)appppppcStack_528 + (longlong)pppppppcStack_1168) =
               *(longlong *)((longlong)appppppcStack_528 + (longlong)pppppppcStack_1168) - 0x28U &
               0xfffffffffffffff0;
          uVar41 = (*pcVar28)(lVar34,(undefined1 (*) [32])appppppcStack_528);
          (*pcVar33)(lVar34);
          lVar30 = 0x3cc;
          if (uVar41 != (uVar8 ^ 0xfddc7b1d)) {
            lVar30 = 0x484;
          }
          lVar47 = 0;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
          case 0xffffc127:
            (*pcVar32)(lVar34);
            puVar35 = (undefined4 *)&UNK_08ffc508;
            if (pppppppcVar54 == pppppppcVar22) {
              puVar35 = (undefined4 *)&UNK_08ffc578;
            }
            break;
          case 0xffffe07d:
            do {
              FUN_08f9d2f8((undefined1 *)&uStack_1280,uStack_1240,pppppppcVar31);
              puVar35 = (undefined4 *)&UNK_08ffc3e8;
              if ((char)uStack_1280 == '\0') {
                puVar35 = (undefined4 *)&UNK_08ffc304;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar35) {
              case 0xfffff276:
                iVar52 = memcmp((void *)((longlong)&uStack_1280 + 1),&pppppppcStack_1148,
                                (ulonglong)(uVar8 + 0x2238503));
                puVar35 = (undefined4 *)&UNK_08ffc304;
                if (uVar8 + 0x22384e3 != iVar52) {
                  puVar35 = (undefined4 *)&UNK_08ffc5e0;
                }
                bVar12 = true;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar35) {
                case 0x9de:
                  goto override_jmp_08fa10cc_case_1;
                }
              }
              lVar47 = lVar47 + 1;
              FUN_08fbe059(uVar8 + 0x232c723);
              lVar30 = 0x484;
              if (lVar47 == 0x22) {
                lVar30 = 0x328;
              }
              bVar12 = false;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar30)) {
              case 0x9de:
                goto override_jmp_08fa10cc_case_1;
              }
            } while( true );
          }
          goto code_r0x08fa07b2;
        case 0xffffcbe2:
          (*pcVar33)(lVar34);
          (*pcVar32)(lVar34);
          puVar35 = (undefined4 *)&UNK_08ffc508;
          if (pppppppcVar54 == pppppppcVar22) {
            puVar35 = (undefined4 *)&UNK_08ffc578;
          }
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar35) {
        case 0x887:
          goto override_jmp_08fa40e6_case_1;
        }
        break;
      case 0xfffffa55:
        (*pcVar32)(lVar34);
        puVar35 = (undefined4 *)&UNK_08ffc508;
        if (pppppppcVar54 == pppppppcVar22) {
          puVar35 = (undefined4 *)&UNK_08ffc578;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar35) {
        case 0x887:
          goto override_jmp_08fa40e6_case_1;
        }
      }
    } while( true );
  }
override_jmp_08fa4f5a_case_0:
  lVar34 = 0x15c;
  if (uStack_1228 != pppppppcVar38) {
    lVar34 = 0x7c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xeda:
override_jmp_08fa4020_case_1:
    lVar34 = lStack_1000;
    uVar27 = *(ulonglong *)((longlong)appppppcStack_1020 + (longlong)(ppppppcStack_10e0 + -3));
    uVar37 = *(ulonglong *)((longlong)&pppppppcStack_1038 + (longlong)pppppppcStack_10e8);
    FUN_08fba6b1(pppppppcStack_1190,(longlong)pppppppcStack_11e8,8,0x10);
                    /* WARNING: Switch is manually overridden */
    switch((uVar37 == (uVar45 ^ 0xa1b464b7022384e2) &&
           (uVar27 == (uVar45 ^ 0xa1b464b7022384e2) && lVar34 == -1)) * '\x02') {
    case '\0':
      pppppppcVar38 = (code *******)&pppppppcStack_1038;
      puVar29 = local_1188;
      for (lVar34 = 9; lVar34 != 0; lVar34 = lVar34 + -1) {
        *puVar29 = *pppppppcVar38;
        pppppppcVar38 = pppppppcVar38 + 1;
        puVar29 = puVar29 + 1;
      }
      FUN_08f9c138();
      FUN_08fba6b1(pppppppcStack_11d8,(longlong)pppppppcStack_11a0,4,4);
                    /* WARNING: Switch is manually overridden */
      break;
    case '\x01':
      goto override_jmp_08fa4af4_case_0;
    case '\x02':
      local_1188[1] = 0xfffffffffffffffe;
      FUN_08f9c138();
      uVar45 = 4;
      uVar27 = (ulonglong)(uVar8 ^ 0xfddc7b19);
      pppppppcVar38 = pppppppcStack_11d8;
      pppppppcVar31 = pppppppcStack_11a0;
      goto LAB_08fa2201;
    }
    break;
  case 0xfffff428:
override_jmp_08fa4020_case_0:
    pppppppcVar54 = uStack_1228;
    goto LAB_08fa3a23;
  }
  goto override_jmp_08fa49a8_case_0;
override_jmp_08fa10cc_case_1:
  iVar52 = (*pcVar23)(lVar34);
  if (iVar52 != -1) {
    FUN_08fee630(&local_f38,&local_9f8,0x4d0);
    uStack_f08 = 0x10000b;
    (*pcVar28)(lVar34,&local_f38);
    (*pcVar33)(lVar34);
  }
  (*pcVar32)(lVar34);
  uVar27 = uStack_1240;
  lVar34 = 0x300;
  if (!bVar12) {
    lVar34 = 0x46c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
  case 0xffffefab:
override_jmp_08fa23b3_case_1:
    puVar35 = (undefined4 *)&UNK_08ffc578;
    if (pppppppcVar54 != pppppppcVar22) {
      puVar35 = (undefined4 *)&UNK_08ffc508;
    }
    break;
  case 0xfffffc8d:
    FUN_08f9d2f8(&cStack_a59,uStack_1240,pppppppcVar31);
    puVar35 = (undefined4 *)&UNK_08ffc300;
    if (cStack_a59 != '\0') {
      puVar35 = (undefined4 *)&UNK_08ffc408;
    }
    FUN_08fba6b1(pcStack_1110,0x28,1,1);
    pppppppcVar38 = pppppppcStack_11d0;
    pppppppcVar54 = pppppppcStack_1218;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0x8ed:
      ppppppcVar43 = FUN_08fc693d(0,0x20);
      puVar35 = (undefined4 *)&UNK_08ffc4dc;
      if (ppppppcVar43 == (code ******)0x0) {
        puVar35 = (undefined4 *)&UNK_08ffc3ec;
      }
      break;
    case 0xfffffa08:
      goto override_jmp_08fa4f5a_case_0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar35) {
    case 0xffffb03f:
      ppppppcVar43[2] = pppppcStack_a48;
      ppppppcVar43[3] = pppppcStack_a40;
      *ppppppcVar43 = pppppcStack_a58;
      ppppppcVar43[1] = pppppcStack_a50;
      uVar37 = *(ulonglong *)((longlong)pppppppcStack_1258 + (longlong)pppppppcVar54);
      puVar35 = (undefined4 *)&UNK_08ffc4a8;
      if (uVar37 != (uVar45 ^ 0xa1b464b7022384e2)) {
        puVar35 = (undefined4 *)&UNK_08ffc420;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar35) {
      case 0xffffce98:
        FUN_08fba6b1(*pppppppcStack_1258,uVar37,1,1);
                    /* WARNING: Switch is manually overridden */
      }
      *pppppppcStack_1258 = ppppppcVar43;
      pcVar49 = (char *)((longlong)pppppppcStack_1258 + (longlong)pppppppcVar54);
      pcVar49[0] = ' ';
      pcVar49[1] = '\0';
      pcVar49[2] = '\0';
      pcVar49[3] = '\0';
      pcVar49[4] = '\0';
      pcVar49[5] = '\0';
      pcVar49[6] = '\0';
      pcVar49[7] = '\0';
      pppppppcStack_1258[2] = (code ******)(ulonglong)(0xfddc7b3d - uVar8);
      lVar34 = 0x15c;
      if (uStack_1228 != pppppppcVar38) {
        lVar34 = 0x7c;
      }
      break;
    case 0xffffc159:
      goto override_jmp_08fa1a2c_case_0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_08ffc2b8 + lVar34)) {
    case 0xfffff428:
      goto override_jmp_08fa4020_case_0;
    }
    goto override_jmp_08fa4020_case_1;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar35) {
  case 0x887:
    goto override_jmp_08fa40e6_case_1;
  }
  goto override_jmp_08fa40e6_case_0;
}

