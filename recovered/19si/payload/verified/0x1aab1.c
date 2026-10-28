/* VERIFIED CONDITIONAL NORMAL STATIC ANALYSIS: original PE TLS/data plus explicitly audited API/callee/owned-object ABI; complete native5392/231 and independent source-byte lifetime gate PASS. Analysis-only non-runnable decompiler text. Original PE bytes unchanged; only private copied project metadata is changed. */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x0ec4dc77) */
/* WARNING: Removing unreachable block (ram,0x0ec508e9) */
/* WARNING: Switch with 1 destination removed at 0x0ec4b35d */
/* WARNING: Switch with 1 destination removed at 0x0ec4b9d6 */
/* WARNING: Switch with 1 destination removed at 0x0ec4baff */
/* WARNING: Switch with 1 destination removed at 0x0ec4bee7 */
/* WARNING: Switch with 1 destination removed at 0x0ec4cfbd */
/* WARNING: Switch with 1 destination removed at 0x0ec4d08f */
/* WARNING: Switch with 1 destination removed at 0x0ec4d852 */
/* WARNING: Switch with 1 destination removed at 0x0ec4ddf8 */
/* WARNING: Switch with 1 destination removed at 0x0ec4e41f */
/* WARNING: Switch with 1 destination removed at 0x0ec4f33e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ANALYST_memory_helper(undefined8 *param_1,undefined4 param_2)

{
  code cVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ulonglong *puVar5;
  byte bVar6;
  undefined8 uVar7;
  LPVOID pvVar8;
  undefined1 uVar9;
  byte *pbVar10;
  longlong *plVar11;
  undefined2 uVar12;
  undefined1 uVar13;
  char *pcVar14;
  byte bVar15;
  uint uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  HANDLE hFile;
  code *pcVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  code *pcVar23;
  code *pcVar24;
  code *pcVar25;
  code *pcVar26;
  ulonglong uVar27;
  code *pcVar28;
  ulonglong *puVar29;
  undefined4 *puVar30;
  longlong lVar31;
  byte *pbVar32;
  longlong lVar33;
  ulonglong *puVar34;
  longlong lVar35;
  undefined4 *puVar36;
  byte *pbVar37;
  bool bVar38;
  uint uVar39;
  int iVar40;
  ulonglong *puVar41;
  byte bVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  code **ppcVar46;
  undefined8 *puVar47;
  char cVar48;
  longlong **pplVar49;
  ulonglong uVar50;
  ulonglong uVar51;
  int iVar52;
  uint uVar53;
  uint uVar54;
  LPVOID pvVar55;
  code **ppcVar56;
  uint uVar57;
  char *pcVar58;
  longlong lVar59;
  longlong lVar60;
  byte bVar61;
  uint uVar62;
  longlong lVar63;
  ulonglong *puVar64;
  ulonglong uVar65;
  longlong *plVar66;
  longlong unaff_GS_OFFSET;
  bool bVar67;
  LPVOID *in_stack_ffffffffffffed88;
  undefined4 uVar69;
  LPVOID *ppvVar68;
  code *pcStack_1268;
  ulonglong uStack_1260;
  LPVOID pvStack_1258;
  code *pcStack_1250;
  ulonglong *puStack_1248;
  longlong lStack_1230;
  ulonglong *puStack_1220;
  ulonglong *puStack_1218;
  ulonglong *puStack_1208;
  code *pcStack_1200;
  ulonglong *puStack_11f8;
  byte *pbStack_11f0;
  ulonglong *puStack_11e8;
  ulonglong *puStack_11e0;
  code **ppcStack_11d8;
  ulonglong uStack_11d0;
  ulonglong *puStack_11c8;
  longlong lStack_11c0;
  longlong lStack_11b8;
  code **ppcStack_11b0;
  ulonglong *puStack_11a8;
  code *pcStack_11a0;
  code *pcStack_1198;
  undefined8 uStack_1190;
  code *pcStack_1188;
  uint uStack_117c;
  ulonglong *puStack_1178;
  ulonglong uStack_1170;
  code *pcStack_1168;
  undefined8 uStack_1160;
  ulonglong uStack_1158;
  ulonglong uStack_1150;
  ushort local_113e;
  ushort local_113c;
  ushort local_113a;
  undefined2 local_1138;
  ushort local_1136;
  ushort local_1134;
  ushort local_1132;
  ushort local_1130;
  ushort local_112e;
  ushort local_112c;
  undefined2 local_112a;
  LPVOID pvStack_1128;
  code *pcStack_1120;
  undefined8 uStack_1118;
  undefined8 uStack_1110;
  ulonglong uStack_1100;
  undefined8 *local_10f8;
  ulonglong uStack_10f0;
  ulonglong uStack_10e8;
  code *pcStack_10e0;
  ulonglong *puStack_10d8;
  ulonglong uStack_10d0;
  ulonglong uStack_10c8;
  longlong **pplStack_10c0;
  ulonglong uStack_10b8;
  ulonglong uStack_10b0;
  code *pcStack_10a8;
  code *pcStack_10a0;
  ulonglong *puStack_1098;
  ulonglong uStack_1090;
  int *local_1088;
  ulonglong uStack_1080;
  ulonglong uStack_1078;
  ulonglong *puStack_1070;
  ulonglong uStack_1068;
  ulonglong uStack_1060;
  ulonglong uStack_1058;
  code *pcStack_1050;
  ulonglong uStack_1048;
  ulonglong *puStack_1040;
  ulonglong uStack_1038;
  code *pcStack_1030;
  uint uStack_1024;
  uint uStack_1020;
  uint local_101c;
  int local_1018;
  undefined4 local_1014;
  int local_1010;
  int local_100c;
  uint local_1008;
  uint local_1004;
  code *pcStack_1000;
  undefined8 uStack_ff8;
  ulonglong *puStack_ff0;
  ulonglong local_fe8;
  longlong local_fe0;
  ulonglong uStack_fd8;
  longlong local_fd0;
  ulonglong local_fc8;
  longlong local_fc0;
  ulonglong local_fb8;
  longlong local_fb0;
  longlong local_fa8;
  longlong local_fa0;
  ulonglong local_f98;
  undefined8 local_f90;
  longlong local_f88;
  longlong *aplStack_f80 [7];
  longlong lStack_f48;
  longlong alStack_f38 [2];
  undefined8 uStack_f28;
  undefined1 uStack_f20;
  undefined8 local_f18;
  undefined1 local_f10;
  undefined1 uStack_f0f;
  undefined2 uStack_f0e;
  undefined4 uStack_f0c;
  undefined1 local_f08;
  undefined1 uStack_f07;
  undefined2 uStack_f06;
  undefined4 uStack_f04;
  undefined4 uStack_f00;
  undefined2 uStack_efc;
  ushort uStack_efa;
  undefined1 uStack_ef8;
  undefined7 uStack_ef7;
  ulonglong uStack_ef0;
  undefined8 uStack_ee8;
  undefined8 uStack_ee0;
  undefined8 uStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined2 uStack_ec0;
  undefined6 uStack_ebe;
  undefined2 uStack_eb8;
  undefined8 uStack_eb6;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 uStack_a38;
  undefined8 uStack_a30;
  char cStack_a19;
  longlong lStack_a18;
  longlong lStack_a10;
  longlong lStack_a08;
  longlong lStack_a00;
  char *local_9f8;
  ulonglong uStack_9f0;
  code ***pppcStack_9e8;
  longlong lStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined4 uStack_9c8;
  ulonglong *puStack_900;
  code **ppcStack_528;
  code *pcStack_520;
  code *apcStack_518 [154];
  undefined8 uStack_48;
  
  uStack_48 = 0xec4aac7;
  lVar31 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  local_1088 = (int *)(lVar31 + 0x248);
  local_10f8 = param_1;
  ANALYST_constant_init();
  local_fa8 = 0x716726628b46586f;
  local_f90 = 0xb083304946f78de7;
  local_113a = 0x3e15;
  local_1018 = -0x6d38db2b;
  local_fb8 = 0x7d113b5f9fb2973d;
  local_1004 = 0x7d7d6957;
  local_1014 = 0x1a16dd29;
  local_fc0 = -0x1eb129dff86177b6;
  local_fe8 = 0x3a40f577a0861559;
  local_100c = 0x7066d4bb;
  local_fe0 = -0xe8801d952c6408;
  local_113c = 0xb21f;
  local_112c = 0xa651;
  local_1132 = 0xb498;
  local_1136 = 0x10;
  local_fc8 = 0xe269a8d5ee9173cc;
  local_112e = 0;
  local_1130 = 0xfff5;
  local_1138 = 0xffcf;
  local_fa0 = 0x6dfe71e50dfcf4e;
  local_f88 = 0x6f0ca8d49574483c;
  local_113e = 0xfff7;
  local_112a = 8;
  local_1134 = 25000;
  local_1010 = 0x57aab6d5;
  local_fd0 = 0x14cd8090125414a0;
  local_1008 = 0x10;
  local_101c = 0xffffffd7;
  local_f98 = 0xffffffffffffffff;
  local_fb0 = 0x644bae8779e686c6;
  puVar5 = *(ulonglong **)(lVar31 + 0x240);
  pcVar58 = (char *)((ulonglong)puVar5 ^ 0xf626f54b5c29481);
  local_f18._0_1_ = '\x17';
  local_f18._1_1_ = 0x41;
  local_f18._2_2_ = 0xecb;
  local_f18._4_4_ = 0;
  local_f10 = 0x18;
  uStack_f0f = 0;
  uStack_f0e = 0;
  uStack_f0c = 0;
  local_f08 = SUB81(&local_9f8,0);
  uStack_f07 = (undefined1)((ulonglong)&local_9f8 >> 8);
  uStack_f06 = (undefined2)((ulonglong)&local_9f8 >> 0x10);
  uStack_f04 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
  lVar31 = 0x48;
  if (DAT_0ecc7a28 == (int)pcVar58 + -0x52ec26b2) {
    lVar31 = 0x2e8;
  }
  local_9f8 = pcVar58;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecba780 + lVar31)) {
  case 0x40a5:
    FUN_0ecae4d7(0xecc7a10,&local_f18);
  }
  uStack_10b8 = CONCAT44(uStack_10b8._4_4_,param_2);
  FUN_0ec7473d(&local_f18,DAT_0ecc7a10,DAT_0ecc7a20);
  uVar22 = CONCAT44(local_f18._4_4_,
                    CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
  pppcStack_9e8 = &ppcStack_528;
  ppcStack_528 = (code **)0x9ae2ce76fde61ea0;
  local_9f8 = &UNK_0ecb1733;
  uVar57 = (uint)puVar5;
  uVar62 = uVar57 ^ 0xe72eb224;
  uStack_9f0 = (ulonglong)uVar62;
  puVar36 = &UNK_0ecbac00;
  if (DAT_0ecc75e8 == uVar62 - 0x17) {
    puVar36 = &UNK_0ecba8dc;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar36) {
  case 0x39d6:
    FUN_0ecae4d7(0xecc75d0,&local_9f8);
  }
  FUN_0ec7473d(&local_9f8,_DAT_0ecc75d0,_DAT_0ecc75e0);
  pcVar14 = local_9f8;
  uVar45 = uVar57 ^ 0xb08504e8;
  pcVar28 = (code *)FUN_0ec3249d(uVar45,uVar22,-0x240c4334,local_9f8);
  bVar61 = -(((char)uVar62 - (char)uVar45) -
            *(char *)(*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x237))
  ;
  switchD_0ec75e6c::caseD_ec47f80
            (pcVar14,*(longlong *)((longlong)&local_9f8 + (ulonglong)bVar61),1,1);
  switchD_0ec75e6c::caseD_ec47f80
            ((LPVOID)CONCAT44(local_f18._4_4_,
                              CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18))),
             *(longlong *)((longlong)&local_f18 + (ulonglong)bVar61),1,1);
  uVar69 = (int)uStack_10b8;
  lVar31 = (*pcVar28)(0x1fffff,0,uStack_10b8 & 0xffffffff);
  lVar35 = 0x3bc;
  if (lVar31 == 0) {
    lVar35 = 0x224;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
  case 0x4ee2:
    FUN_0ec95e62(&local_f18,(undefined8 *)&UNK_0ecb5cd4,0x34);
    local_9f8 = (char *)&local_f18;
    switchD_0ec75e6c::caseD_ec47f80
              ((LPVOID)CONCAT44(local_f18._4_4_,
                                CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)))
               ,CONCAT44(uStack_f0c,CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10))),1,1);
    local_10f8[1] = 0xfffffffffffffffe;
    return;
                    /* WARNING: Switch is manually overridden */
  }
  uVar21 = (ulonglong)(uVar57 + 0x18d14dd5);
  alStack_f38[0] = lVar31;
  *(undefined4 *)((longlong)alStack_f38 + uVar21) = uVar69;
  uStack_f28 = 0;
  uStack_f20 = 0;
  ppcVar56 = (code **)(uVar21 ^ 0x1f7cf63e156fd73c);
  *(undefined4 *)((longlong)alStack_f38 + ((uVar21 - uVar45) * local_fb0 - (longlong)pcVar58)) = 0;
  local_f18._0_1_ = -0x78;
  local_f18._1_1_ = 0x18;
  local_f18._2_2_ = 0xecb;
  local_f18._4_4_ = 0;
  local_f10 = 0x18;
  uStack_f0f = 0;
  uStack_f0e = 0;
  uStack_f0c = 0;
  local_f08 = SUB81(&ppcStack_528,0);
  uVar9 = local_f08;
  uStack_f07 = (undefined1)((ulonglong)&ppcStack_528 >> 8);
  uVar13 = uStack_f07;
  uStack_f06 = (undefined2)((ulonglong)&ppcStack_528 >> 0x10);
  uVar12 = uStack_f06;
  uStack_f04 = (undefined4)((ulonglong)&ppcStack_528 >> 0x20);
  uVar69 = uStack_f04;
  ppcStack_528 = ppcVar56;
                    /* WARNING: Switch is manually overridden */
  switch(_DAT_0ecca018 == 0) {
  case false:
    FUN_0ecae4d7(0xecca000,&local_f18);
  }
  FUN_0ec7473d(&local_9f8,_DAT_0ecca000,_DAT_0ecca010);
  pcVar58 = local_9f8;
  ppcStack_528 = (code **)0x6bae83b47f39bb91;
  local_f18._0_1_ = '\x02';
  local_f18._1_1_ = 0x76;
  local_f18._2_2_ = 0xecb;
  local_f18._4_4_ = 0;
  iVar52 = -uVar57 + -0x18d14db1;
  local_f10 = (undefined1)iVar52;
  uStack_f0f = (undefined1)((uint)iVar52 >> 8);
  uStack_f0e = (undefined2)((uint)iVar52 >> 0x10);
  uStack_f0c = 0;
  iVar52 = -uVar57 + -0x18d14dcd;
  puVar36 = (undefined4 *)&UNK_0ecbab18;
  if (_DAT_0ecc69b8 == iVar52) {
    puVar36 = (undefined4 *)&UNK_0ecba834;
  }
  local_f08 = uVar9;
  uStack_f07 = uVar13;
  uStack_f06 = uVar12;
  uStack_f04 = uVar69;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar36) {
  case 0x1211:
    FUN_0ecae4d7(0xecc69a0,&local_f18);
  }
  FUN_0ec7473d(&local_f18,_DAT_0ecc69a0,_DAT_0ecc69b0);
  pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                             CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
  pcVar28 = (code *)FUN_0ec3249d(uVar57 ^ 0xb08504e8,pcVar58,0x36a2db3d,pvVar55);
  switchD_0ec75e6c::caseD_ec47f80
            (pvVar55,*(longlong *)
                      ((longlong)&local_f18 +
                      ~((longlong)ppcVar56 + ((local_f98 ^ (ulonglong)ppcVar56) - (ulonglong)bVar61)
                       )),1,1);
  switchD_0ec75e6c::caseD_ec47f80(local_9f8,uStack_9f0,1,1);
  local_9f8 = (char *)0x94349f1b23949a31;
  local_f18._0_1_ = 0xd5;
  local_f18._1_1_ = 99;
  local_f18._2_2_ = 0xecb;
  local_f18._4_4_ = 0;
  local_f10 = 0x18;
  uStack_f0f = 0;
  uStack_f0e = 0;
  uStack_f0c = 0;
  *(char ***)((longlong)&local_f18 + (ulonglong)(uVar57 ^ 0xe72eb223)) = &local_9f8;
  lVar35 = 0x1cc;
  if (_DAT_0ecc8c10 == 0) {
    lVar35 = 0x474;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
  case 0x20a:
    FUN_0ecae4d7(0xecc8bf8,&local_f18);
  }
  FUN_0ec7473d(&local_f18,_DAT_0ecc8bf8,_DAT_0ecc8c08);
  uVar22 = CONCAT44(local_f18._4_4_,
                    CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
  ppcStack_528 = (code **)0x65292c55c351c9cb;
  local_9f8 = 
  "qom0om12g2n32t86p4o75uv3b4z18a02xqy4mlznyedyuvw0z0ktfo8qthink some like large because what end we from ot"
  ;
  uVar62 = -uVar57 + 0xe72eb23b;
  *(ulonglong *)((longlong)&local_9f8 + (ulonglong)uVar62) = (ulonglong)(uVar62 ^ 0x28);
  *(code ****)((longlong)&local_9f8 + (ulonglong)(0x18 - uVar62)) = &ppcStack_528;
  iVar40 = -uVar57 + -0x18d14dcd;
  lVar35 = 0x434;
  if (_DAT_0ecc6408 == iVar40) {
    lVar35 = 0x214;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
  case 0x191e:
    FUN_0ecae4d7(0xecc63f0,&local_9f8);
  }
  FUN_0ec7473d(&local_9f8,_DAT_0ecc63f0,_DAT_0ecc6400);
  pcVar58 = local_9f8;
  uVar45 = uVar57 ^ 0x29d8b4d8;
  pcStack_1250 = (code *)FUN_0ec3249d(0x57abb6db,uVar22,uVar45,local_9f8);
  switchD_0ec75e6c::caseD_ec47f80
            (pcVar58,*(longlong *)
                      ((longlong)&local_9f8 +
                      (ulonglong)
                      (byte)(((char)iVar52 +
                             *(char *)(*(longlong *)
                                        (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                        (ulonglong)_tls_index * 8) + 0x238)) -
                            ((char)iVar40 + (char)(uVar62 ^ 0x28)))),1,1);
  switchD_0ec75e6c::caseD_ec47f80
            ((LPVOID)CONCAT44(local_f18._4_4_,
                              CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18))),
             CONCAT44(uStack_f0c,CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10))),1,1);
  aplStack_f80[0] = (longlong *)&DAT_00000008;
  aplStack_f80[1] = (longlong *)0x0;
  aplStack_f80[2] = (longlong *)0x0;
  uStack_9d8 = 0;
  uStack_9d0 = 0;
  pppcStack_9e8 = (code ***)0x0;
  lStack_9e0 = 0;
  local_9f8 = (char *)0x0;
  uStack_9f0 = 0;
  puVar41 = (ulonglong *)0x0;
  uVar21 = (*pcVar28)(lVar31,0,&local_9f8,0x30);
  puVar36 = (undefined4 *)&UNK_0ecbac04;
  if (uVar21 == 0xcef606eb - uVar45) {
    puVar36 = (undefined4 *)&UNK_0ecba780;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar36) {
  case 21000:
    uVar22 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x388);
    puVar41 = (ulonglong *)0x0;
    puVar36 = (undefined4 *)&UNK_0ecbaae8;
    if (local_9f8 + lStack_9e0 == (char *)0x0) {
      puVar36 = (undefined4 *)&UNK_0ecba780;
    }
    plVar66 = (longlong *)&DAT_00000008;
    pcVar58 = local_9f8 + lStack_9e0;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x1df7:
      do {
        lVar35 = lStack_9e0;
        pcVar14 = local_9f8;
        lVar33 = 0x470;
        if (*(int *)((longlong)&local_9f8 +
                    (ulonglong)
                    (byte)(((byte)uVar22 ^ 0xca) - ((byte)uVar45 + (char)(0xcef606eb - uVar45)))) ==
            0x20000 && (int)uStack_9d8 == 0x1000) {
          lVar33 = 0x230;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecba780 + lVar33)) {
        case 0x557f:
          if ((uStack_9d8._4_4_ & 0x1ff) == uVar57 + 0x18d14dd1) {
            if (puVar41 == (ulonglong *)aplStack_f80[1]) {
              FUN_0ec97337(aplStack_f80);
              plVar66 = aplStack_f80[0];
            }
            plVar66[(longlong)puVar41 * 2] = (longlong)pcVar14;
            plVar66[(longlong)puVar41 * 2 + 1] = lVar35;
            puVar41 = (ulonglong *)((longlong)puVar41 + 1);
            aplStack_f80[2] = (longlong *)puVar41;
          }
        }
        uVar21 = (*pcVar28)(lVar31,pcVar58,&local_9f8,0x30);
        puVar36 = (undefined4 *)&UNK_0ecba780;
        if (uVar21 != (byte)(*(char *)(*(longlong *)
                                        (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                        (ulonglong)_tls_index * 8) + 0x239) - 0x24)) {
          puVar36 = (undefined4 *)&UNK_0ecba868;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar36) {
        case 0x194e:
          puVar36 = (undefined4 *)&UNK_0ecbaae8;
          if (local_9f8 + lStack_9e0 <= pcVar58) {
            puVar36 = (undefined4 *)&UNK_0ecba780;
          }
          break;
        case 0xfffffbfd:
          goto override_jmp_0ec4d431_case_0;
        }
        pcVar58 = local_9f8 + lStack_9e0;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar36) {
        case 0xfffffbfd:
          goto override_jmp_0ec4d431_case_0;
        }
      } while( true );
    }
  }
override_jmp_0ec4d431_case_0:
  ppcVar56 = FUN_0ec99abe(8,0x800010);
  plVar11 = aplStack_f80[1];
  plVar66 = aplStack_f80[0];
  puVar36 = (undefined4 *)&UNK_0ecba938;
  if (ppcVar56 == (code **)0x0) {
    puVar36 = (undefined4 *)&UNK_0ecbaac4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar36) {
  case 0x2ab3:
    goto override_jmp_0ec4be5f_case_0;
  case 0x5175:
    bVar61 = (byte)uVar45 ^
             (byte)*(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x2a8) ^
             0xf9;
    uStack_1160 = (ulonglong *)(ulonglong)bVar61;
    uStack_1158 = 0;
    uStack_1150 = 0;
    puVar29 = (ulonglong *)aplStack_f80[1];
    puVar36 = (undefined4 *)&UNK_0ecba820;
    if (puVar41 == (ulonglong *)(ulonglong)(8 - bVar61)) {
      puVar36 = (undefined4 *)&UNK_0ecba968;
    }
    bVar6 = (byte)puVar5;
    ppcStack_11b0 = ppcVar56;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x1c45:
      puStack_1220 = (ulonglong *)&DAT_00000008;
LAB_0ec4d7a3:
      uVar21 = uStack_1150;
      switchD_0ec75e6c::caseD_ec47f80(plVar66,(longlong)plVar11,8,0x10);
      pcStack_10a0 = (code *)&DAT_00000008;
      puStack_1098 = (ulonglong *)0x0;
      uStack_1090 = 0;
      lVar35 = 0x1b0;
      if (uVar21 == ~(uVar57 + 0x18d14dcc)) {
        lVar35 = 0x2e4;
      }
      break;
    case 0x4dc6:
      uStack_1190 = (code *)(((longlong)puVar41 << (bVar61 - 4 & 0x3f)) + (longlong)aplStack_f80[0])
      ;
      pcStack_1188 = (code *)(aplStack_f80[0] + 2);
      uVar21 = aplStack_f80[0][1];
      puVar36 = (undefined4 *)&UNK_0ecbaaac;
      if (uVar21 != 0) {
        puVar36 = (undefined4 *)&UNK_0ecba7d0;
      }
      lStack_1230 = *aplStack_f80[0];
      uVar50 = 0;
                    /* WARNING: Switch is manually overridden */
      switch(*puVar36) {
      case 0x105:
        goto override_jmp_0ec4d399_case_1;
      }
override_jmp_0ec4d399_case_0:
      do {
        uVar17 = (uVar57 ^ 0xe7aeb233) + uVar50;
        uVar65 = uVar50 + 0x800010;
        if (uVar21 <= uVar50 + 0x800010) {
          uVar65 = uVar21;
        }
        local_f18._0_1_ = 0;
        local_f18._1_1_ = 0;
        local_f18._2_2_ = 0;
        local_f18._4_4_ = 0;
        in_stack_ffffffffffffed88 = (LPVOID *)&local_f18;
        iVar52 = (*pcStack_1250)(lVar31,uVar50 + lStack_1230,ppcVar56,uVar65 - uVar50,
                                 in_stack_ffffffffffffed88);
        uVar65 = CONCAT44(local_f18._4_4_,
                          CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
        lVar35 = 0x2b0;
        if (uVar65 < 4) {
          lVar35 = 0x424;
        }
        if (iVar52 == 0) {
          lVar35 = 0x424;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
        case 0xffffff66:
          uVar62 = uVar57 + 0x19514ddd;
          puVar36 = (undefined4 *)&UNK_0ecba81c;
          if (uVar65 <= uVar62) {
            puVar36 = (undefined4 *)&UNK_0ecbabdc;
          }
          lVar35 = 0;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar36) {
          case 0x4e:
            break;
          case 0x36f4:
override_jmp_0ec4f6d6_case_1:
            do {
              uVar51 = uStack_1150;
              cVar48 = *(char *)((longlong)ppcVar56 + lVar35);
              cVar2 = *(char *)((longlong)ppcVar56 + lVar35 + 1);
              bVar42 = (byte)(uVar57 ^ 0xe7aeb233);
              bVar15 = ((bVar42 ^ 0x2a) * -0x43 ^ bVar42) + bVar42;
              uVar27 = (ulonglong)bVar15;
              bVar61 = *(byte *)((longlong)ppcVar56 + uVar27 + lVar35);
              puVar36 = (undefined4 *)&UNK_0ecba9c4;
              if (*(char *)((longlong)ppcVar56 +
                           ((uVar27 - local_fa0 ^ DAT_0ecc81f8) - (uVar62 + uVar27)) + lVar35) ==
                  '\0') {
                puVar36 = (undefined4 *)&UNK_0ecba7f8;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar36) {
              case 0x3bfa:
override_jmp_0ec4f711_case_1:
                puVar36 = (undefined4 *)&UNK_0ecbaba4;
                if ((ulonglong)(uVar57 ^ 0xe72eb237) + lVar35 + 8 <= uVar65) {
                  puVar36 = (undefined4 *)&UNK_0ecbabdc;
                }
                lVar35 = lVar35 + 8;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar36) {
                case 0xffffff94:
                  goto override_jmp_0ec4f6d6_case_0;
                }
                goto override_jmp_0ec4f6d6_case_1;
              case 0x3c25:
                if (cVar48 != 'a') {
                  if (cVar48 == 'v') {
                    /* WARNING: Switch is manually overridden */
                    switch(bVar61 == 0x30 && (byte)((bVar6 ^ 0xfc) + cVar2) < 2) {
                    case true:
                      goto override_jmp_0ec4f711_case_0;
                    }
                  }
                  goto override_jmp_0ec4f711_case_1;
                }
                    /* WARNING: Switch is manually overridden */
                switch((byte)~((char)local_1138 - (bVar42 + bVar15) ^ bVar15) == bVar61 &&
                       (byte)(((byte)_DAT_0ecca3a8 ^ (byte)uVar62 ^ bVar15) + bVar15) == cVar2) {
                case false:
                  goto override_jmp_0ec4f711_case_1;
                case true:
override_jmp_0ec4f711_case_0:
                  puVar36 = (undefined4 *)&UNK_0ecba79c;
                  if (uStack_1150 == uStack_1158) {
                    puVar36 = (undefined4 *)&UNK_0ecba8c4;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar36) {
                  case 0x5633:
                    FUN_0ec97337(&uStack_1160);
                  }
                  lVar33 = uVar51 * 0x10;
                  uStack_1160[uVar51 * 2] = lVar35 + uVar50 + lStack_1230;
                  *(char *)((longlong)uStack_1160 + (ulonglong)(0xe72eb23b - uVar57) + lVar33) =
                       cVar48;
                  *(char *)((longlong)uStack_1160 +
                           (ulonglong)
                           (byte)((byte)*(undefined8 *)
                                         (*(longlong *)
                                           (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                           (ulonglong)_tls_index * 8) + 0x338) ^
                                 ~((((byte)uVar62 - (char)(0xe72eb23b - uVar57)) + 'X') - bVar42)) +
                           lVar33) = cVar2;
                  *(byte *)((longlong)uStack_1160 + lVar33 + 10) = bVar61;
                  uStack_1150 = uVar51 + 1;
                  puVar36 = (undefined4 *)&UNK_0ecbaba4;
                  if ((ulonglong)(uVar57 ^ 0xe72eb237) + lVar35 + 8 <= uVar65) {
                    puVar36 = (undefined4 *)&UNK_0ecbabdc;
                  }
                }
              }
              lVar35 = lVar35 + 8;
              ppcVar56 = ppcStack_11b0;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar36) {
              case 0xffffff94:
                goto override_jmp_0ec4f6d6_case_0;
              }
            } while( true );
          }
          goto override_jmp_0ec4be5f_case_0;
        case 0xffffff94:
override_jmp_0ec4f6d6_case_0:
          puVar36 = (undefined4 *)&UNK_0ecba7d0;
          if (uVar21 <= uVar17) {
            puVar36 = (undefined4 *)&UNK_0ecbaaac;
          }
          uVar50 = uVar17;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar36) {
          case 0x105:
override_jmp_0ec4d399_case_1:
            do {
              lVar35 = 0x1bc;
              if (pcStack_1188 == uStack_1190) {
                lVar35 = 0x110;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
              case 0x18b1:
                uVar21 = *(ulonglong *)(pcStack_1188 + 8);
                puVar36 = (undefined4 *)&UNK_0ecbaaac;
                if (uVar21 != 0) {
                  puVar36 = (undefined4 *)&UNK_0ecba7d0;
                }
                break;
              case 0x1cce:
                puStack_1220 = uStack_1160;
                puStack_1218 = puVar29;
                goto LAB_0ec4d7a3;
              }
              lStack_1230 = *(longlong *)pcStack_1188;
              pcStack_1188 = pcStack_1188 + 0x10;
              uVar50 = 0;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar36) {
              case 0xfffff292:
                goto override_jmp_0ec4d399_case_0;
              }
            } while( true );
          }
        }
      } while( true );
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0xfc5:
      puStack_1070 = puStack_1220 + uVar21 * 2;
      uVar62 = -uVar57 + 0xe72eb23b;
      uStack_1038 = (ulonglong)uVar62;
      uStack_1024 = 0x18 - uVar62;
      uStack_1058 = (ulonglong)uStack_1024;
      uStack_1170 = (ulonglong)(0x10 - uVar62);
      uStack_10d0 = (ulonglong)uStack_1024;
      uStack_1020 = -uVar57 + 0xe72eb24b;
      puStack_1178 = (ulonglong *)((longlong)&pcStack_10a0 + (ulonglong)uStack_1024);
      uStack_1060 = (ulonglong)(0x10 - uVar62);
      puStack_1040 = (ulonglong *)(0xdf30e592bfe7a0b6 - (longlong)puVar5);
      uStack_1078 = (ulonglong)puVar5 ^ 0xe557d51d4d841898;
      uStack_1080 = 2;
      uStack_10e8 = 1;
      uStack_1068 = 0xe7fdffb7e72db233 - (longlong)puVar5;
      uStack_1048 = (ulonglong)uStack_1024;
      pcStack_10e0 = (code *)(ulonglong)uStack_1020;
      do {
        pcStack_520 = (code *)(ulonglong)(0xe72eb235 - uVar57);
        apcStack_518[0] = (code *)&DAT_00000018;
        apcStack_518[1] = (code *)0x20;
        uStack_1190 = (code *)(CONCAT44(uStack_1190._4_4_,uVar57) ^ 0xe72eb231);
        puVar36 = (undefined4 *)&UNK_0ecba96c;
        if (uVar57 == 0xe72eb231) {
          puVar36 = (undefined4 *)&UNK_0ecba7a4;
        }
        ppcVar56 = (code **)0x0;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar36) {
        case 0x192c:
override_jmp_0ec4c112_case_1:
          puVar41 = puStack_1178;
          puStack_1220 = puStack_1220 + 2;
          lVar35 = 0x24c;
          if (puStack_1220 != puStack_1070) {
            lVar35 = 0x37c;
          }
          break;
        case 0xfffff4c7:
override_jmp_0ec4c112_case_0:
          ppvVar68 = &pvStack_1128;
          ppcVar46 = (code **)((longlong)ppcVar56 + 1);
          ppcStack_528 = ppcVar46;
          uStack_1260 = (ulonglong)puVar5 & 0xffffffff ^ 0xe72eb23b;
          pcVar28 = (code *)*puStack_1220;
          ppcVar56 = (code **)((longlong)apcStack_518 +
                              (ulonglong)(uVar57 ^ 0xe72eb23b) * (longlong)ppcVar56);
          lVar33 = (longlong)pcVar28 - (longlong)*ppcVar56;
          lVar35 = 0x488;
          if (pcVar28 < *ppcVar56) {
            lVar35 = 0x238;
          }
          ppcVar56 = ppcVar46;
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
          case 0xfffff324:
            uVar21 = puStack_1220[1];
            pcStack_1188 = (code *)CONCAT44(pcStack_1188._4_4_,
                                            (uint)*(byte *)((longlong)puStack_1220 + 10));
            puStack_11c8 = puStack_1040;
            local_f18._0_1_ = 'Q';
            local_f18._1_1_ = 0x1f;
            local_f18._2_2_ = 0xecb;
            local_f18._4_4_ = 0;
            local_f10 = 0x18;
            uStack_f0f = 0;
            uStack_f0e = 0;
            uStack_f0c = 0;
            local_f08 = SUB81(&puStack_11c8,0);
            uStack_f07 = (undefined1)((ulonglong)&puStack_11c8 >> 8);
            uStack_f06 = (undefined2)((ulonglong)&puStack_11c8 >> 0x10);
            uStack_f04 = (undefined4)((ulonglong)&puStack_11c8 >> 0x20);
            puVar36 = (undefined4 *)&UNK_0ecba7ac;
            if (DAT_0ecc7eb8 != 0) {
              puVar36 = (undefined4 *)&UNK_0ecbabb0;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar36) {
            case 0x2a9a:
              FUN_0ecae4d7(0xecc7ea0,&local_f18);
            }
            FUN_0ec7473d(ppvVar68,DAT_0ecc7ea0,DAT_0ecc7eb0);
            pvVar55 = pvStack_1128;
            puStack_11c8 = (ulonglong *)0xacde7cd998ed2a7b;
            local_f18._0_1_ = 0x6c;
            local_f18._1_1_ = 0x38;
            local_f18._2_2_ = 0xecb;
            local_f18._4_4_ = 0;
            *(ulonglong *)((longlong)&local_f18 + uStack_1038) = (ulonglong)(uVar57 + 0x18d14ded);
            *(ulonglong ***)((longlong)&local_f18 + uStack_1048) = &puStack_11c8;
            puVar36 = (undefined4 *)&UNK_0ecba8a8;
            if (DAT_0ecc8a70 == 0x20 - (uVar57 + 0x18d14ded)) {
              puVar36 = (undefined4 *)&UNK_0ecba7f4;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar36) {
            case 0x2cee:
              FUN_0ecae4d7(0xecc8a58,&local_f18);
            }
            FUN_0ec7473d(&local_f18,DAT_0ecc8a58,DAT_0ecc8a68);
            pvVar8 = (LPVOID)CONCAT44(local_f18._4_4_,
                                      CONCAT22(local_f18._2_2_,
                                               CONCAT11(local_f18._1_1_,(byte)local_f18)));
            pcVar24 = (code *)FUN_0ec3249d(0x57abb6db,pvVar55,uVar57 ^ 0x29d8b4d8,pvVar8);
            switchD_0ec75e6c::caseD_ec47f80
                      (pvVar8,CONCAT44(uStack_f0c,
                                       CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10))),1,1);
            switchD_0ec75e6c::caseD_ec47f80(pvStack_1128,(longlong)pcStack_1120,1,1);
            FUN_0ecad680((undefined1 (*) [32])&local_f18,0,0x200);
            pvStack_1128 = (LPVOID)0x0;
            (*pcVar24)(lVar31,lVar33,(undefined1 (*) [32])&local_f18,0x11f,ppvVar68);
            pvVar55 = (LPVOID)(ulonglong)(0xcef6072a - (uVar57 ^ 0x29d8b4d8));
            puVar36 = (undefined4 *)&UNK_0ecbaa98;
            if (pvStack_1128 <= pvVar55) {
              puVar36 = (undefined4 *)&UNK_0ecba888;
            }
            in_stack_ffffffffffffed88 = ppvVar68;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar36) {
            case 0x38ce:
              puVar36 = (undefined4 *)&UNK_0ecba96c;
              if (ppcVar46 == (code **)((ulonglong)uStack_1190 & 0xffffffff)) {
                puVar36 = (undefined4 *)&UNK_0ecba7a4;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar36) {
              case 0x192c:
                goto override_jmp_0ec4c112_case_1;
              }
              goto override_jmp_0ec4c112_case_0;
            case 0x4629:
              uVar50 = CONCAT44(local_f18._4_4_,
                                CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)))
              ;
              puVar41 = (ulonglong *)
                        CONCAT44(uStack_f04,CONCAT22(uStack_f06,CONCAT11(uStack_f07,local_f08)));
              puVar36 = (undefined4 *)&UNK_0ecba9a8;
              if (uVar50 != 0xe72eb233 - uVar57) {
                puVar36 = (undefined4 *)&UNK_0ecba948;
              }
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar36) {
            case 0x3ef0:
              uVar50 = 0x454;
              if (0x3f < (longlong)puVar41 - 1U) {
                uVar50 = 0x238;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecba780 + uVar50)) {
              case 0xfffffb2a:
override_jmp_0ec4b3f6_case_0:
                FUN_0ec98746((undefined1 *)&local_f18,lVar31,pcVar28);
                uVar12 = local_f18._2_2_;
                uVar9 = local_f18._1_1_;
                lVar35 = 0x158;
                if ((byte)local_f18 != 0) {
                  lVar35 = 0x268;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                case 0x40e:
                  in_stack_ffffffffffffed88 = ppvVar68;
                    /* WARNING: Switch is manually overridden */
                  break;
                case 0x4405:
                  cVar48 = (char)uStack_f00._0_1_;
                  puStack_11c8 = (ulonglong *)0xf73365dad8b8ee83;
                  local_f18._0_1_ = 'Q';
                  local_f18._1_1_ = 0x1f;
                  local_f18._2_2_ = 0xecb;
                  local_f18._4_4_ = 0;
                  local_f10 = 0x18;
                  uStack_f0f = 0;
                  uStack_f0e = 0;
                  uStack_f0c = 0;
                  local_f08 = SUB81(&puStack_11c8,0);
                  uStack_f07 = (undefined1)((ulonglong)&puStack_11c8 >> 8);
                  uStack_f06 = (undefined2)((ulonglong)&puStack_11c8 >> 0x10);
                  uStack_f04 = (undefined4)((ulonglong)&puStack_11c8 >> 0x20);
                  puVar36 = (undefined4 *)&UNK_0ecba818;
                  if (DAT_0ecc7eb8 != 8 - (0xe72eb23b - uVar57)) {
                    puVar36 = (undefined4 *)&UNK_0ecba7b8;
                  }
                  puStack_11a8 = puVar41;
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar36) {
                  case 0x661:
                    FUN_0ecae4d7(0xecc7ea0,&local_f18);
                  }
                  lVar33 = lVar33 + (ulonglong)(0xe72eb23b - uVar57);
                  FUN_0ec7473d(&pvStack_1128,DAT_0ecc7ea0,DAT_0ecc7eb0);
                  pvVar8 = pvStack_1128;
                  puStack_11c8 = (ulonglong *)0xacde7cd998ed2a7b;
                  local_f18._0_1_ = 0x6c;
                  local_f18._1_1_ = 0x38;
                  local_f18._2_2_ = 0xecb;
                  local_f18._4_4_ = 0;
                  lVar35 = *(longlong *)
                            (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
                  uVar50 = ~((*(longlong *)(lVar35 + 0x158) - (longlong)pvVar55) -
                            (ulonglong)(0xe72eb233 - uVar57)) ^ *(ulonglong *)(lVar35 + 0x280);
                  local_f10 = (undefined1)uVar50;
                  uStack_f0f = (undefined1)(uVar50 >> 8);
                  uStack_f0e = (undefined2)(uVar50 >> 0x10);
                  uStack_f0c = (undefined4)(uVar50 >> 0x20);
                  *(ulonglong ***)((longlong)&local_f18 + uStack_1058) = &puStack_11c8;
                  lVar35 = 0x300;
                  if (DAT_0ecc8a70 != 0) {
                    lVar35 = 0x464;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                  case 0x2ab8:
                    FUN_0ecae4d7(0xecc8a58,&local_f18);
                  }
                  FUN_0ec7473d(&local_f18,DAT_0ecc8a58,DAT_0ecc8a68);
                  pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                                             CONCAT22(local_f18._2_2_,
                                                      CONCAT11(local_f18._1_1_,(byte)local_f18)));
                  uVar45 = uVar57 + 0x707d04a8;
                  pcVar28 = (code *)FUN_0ec3249d(uVar45,pvVar8,-0x3109f915,pvVar55);
                  switchD_0ec75e6c::caseD_ec47f80
                            (pvVar55,*(longlong *)((longlong)&local_f18 + uStack_1060),1,1);
                  switchD_0ec75e6c::caseD_ec47f80(pvStack_1128,(longlong)pcStack_1120,1,1);
                  FUN_0ecad680((undefined1 (*) [32])&local_f18,0,0x200);
                  pvStack_1128 = (LPVOID)0x0;
                  in_stack_ffffffffffffed88 = &pvStack_1128;
                  (*pcVar28)(lVar31,lVar33,(undefined1 (*) [32])&local_f18,0xe7,
                             in_stack_ffffffffffffed88);
                  uVar62 = 0x57abb6e2 - uVar45;
                  lVar35 = 0x44c;
                  if ((LPVOID)(ulonglong)uVar62 < pvStack_1128) {
                    lVar35 = 0x420;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                  case 0x186b:
                    puVar36 = (undefined4 *)&UNK_0ecba7a4;
                    if (ppcVar46 != (code **)((ulonglong)uStack_1190 & 0xffffffff)) {
                      puVar36 = (undefined4 *)&UNK_0ecba96c;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar36) {
                    case 0x192c:
                      goto override_jmp_0ec4c112_case_1;
                    }
                    goto override_jmp_0ec4c112_case_0;
                  case 0x3035:
                    uStack_10f0 = CONCAT44(local_f18._4_4_,
                                           CONCAT22(local_f18._2_2_,
                                                    CONCAT11(local_f18._1_1_,(byte)local_f18)));
                    lVar35 = 0x41c;
                    if (uStack_10f0 == 0) {
                      lVar35 = 0x400;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                    case 0x219c:
                      uVar62 = 0x238;
                      if (cVar48 == (byte)('6' - bVar6)) {
                        uVar62 = 0x130;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + uVar62)) {
                      case 0x491c:
override_jmp_0ec4dc9a_case_1:
                        puVar36 = (undefined4 *)&UNK_0ecbabc0;
                        if ((uint)CONCAT21(uVar12,uVar9) !=
                            ((uint)(ushort)uVar21 | ((uint)pcStack_1188 & 0xff) << 0x10)) {
                          puVar36 = (undefined4 *)&UNK_0ecba9b8;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar36) {
                        case 0x3e3d:
                          pbStack_11f0 = &DAT_00000008;
                          puStack_11e8 = (ulonglong *)0x0;
                          puStack_11e0 = (ulonglong *)0x0;
                          puVar41 = FUN_0ec99abe(0,(ulonglong)(0xe72eb23b - uVar57));
                          lVar35 = 0x1fc;
                          if (puVar41 != (ulonglong *)0x0) {
                            lVar35 = 700;
                          }
                    /* WARNING: Switch is manually overridden */
                          switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                          case 0x534d:
                            *puVar41 = uStack_10f0;
                            puStack_11c8 = puVar41;
                            *(undefined8 *)((longlong)&puStack_11c8 + uStack_1170) = 1;
                            pvStack_1128 = (LPVOID)0x0;
                            *(undefined8 *)((longlong)&pvStack_1128 + uStack_10d0) = 0;
                            lStack_11b8 = 0;
                            uStack_10b0 = CONCAT44(uStack_10b0._4_4_,uVar57 + 0x18d14dd5);
                            puVar36 = (undefined4 *)&UNK_0ecba910;
                            if (puStack_11e0 < (ulonglong *)0x40) {
                              puVar36 = (undefined4 *)&UNK_0ecbaa9c;
                            }
                            uVar21 = *puStack_11c8;
                            pcStack_1168 = pcStack_11a0;
                            pvStack_1258 = (LPVOID)0x0;
                            puStack_1248 = (ulonglong *)0x0;
                            puVar41 = (ulonglong *)0x0;
                    /* WARNING: Switch is manually overridden */
                            switch(*puVar36) {
                            case 0xb31:
                              goto override_jmp_0ec4f2d1_case_1;
                            }
override_jmp_0ec4f2d1_case_0:
                            pcVar28 = pcStack_1250;
                            puVar36 = (undefined4 *)&UNK_0ecba9a0;
                            if (puVar41 != (ulonglong *)0x0) {
                              puVar36 = (undefined4 *)&UNK_0ecba7fc;
                            }
                            pcStack_1050 = (code *)0x0;
                            puStack_11f8 = puVar5;
                            uStack_10c8 = uVar21;
                    /* WARNING: Switch is manually overridden */
                            switch(*puVar36) {
                            case 0x376:
override_jmp_0ec4bcbb_case_0:
                              puStack_1248 = FUN_0ec99abe(0,0x70);
                              puVar36 = (undefined4 *)&UNK_0ecbac18;
                              if (puStack_1248 != (ulonglong *)0x0) {
                                puVar36 = (undefined4 *)&UNK_0ecba808;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*puVar36) {
                              case 0:
                                goto override_jmp_0ec4be5f_case_0;
                              case 0x4f52:
                                puStack_1248[0xc] = 0;
                                *(undefined2 *)
                                 ((longlong)puStack_1248 + (ulonglong)(0xe72eb29b - uVar57)) = 0;
                                pcStack_1120 = (code *)0x0;
                                *(ulonglong **)((longlong)&pvStack_1128 + uStack_10d0) =
                                     puStack_1248;
                                *(undefined2 *)
                                 ((longlong)puStack_1248 + (ulonglong)(0xe72eb29b - uVar57)) = 1;
                                *puStack_1248 = uVar21;
                                pcStack_1200 = (code *)0x0;
                                pcStack_11a0 = pcStack_1168;
                                puStack_1208 = puStack_1218;
                                puStack_10d8 = puStack_1218;
                                pcStack_1268 = (code *)uStack_11d0;
                    /* WARNING: Switch is manually overridden */
                              }
                              break;
                            case 0x25c9:
                              uVar50 = (ulonglong)(ushort)puVar41[0xd];
                              puVar29 = puVar41 + uVar50;
                              lVar35 = 0x378;
                              if (puVar41 != puVar29) {
                                lVar35 = 0x68;
                              }
                              pcStack_1268 = pcStack_1250;
                              uVar65 = 0;
                              puVar34 = puVar41;
                              puStack_1248 = puVar41;
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                              case 0x45f9:
                                goto override_jmp_0ec4e193_case_1;
                              }
override_jmp_0ec4e7d6_case_1:
                              lVar35 = 0xc;
                              if (pcStack_1268 == (code *)(ulonglong)(uVar57 ^ 0xe72eb233)) {
                                lVar35 = 0x234;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                              case 0x3b65:
                                lVar35 = 0x44;
                                if (puStack_1248 == (ulonglong *)0x0) {
                                  lVar35 = 0x220;
                                }
                                break;
                              case 0x55b4:
                                pcStack_1268 = pcStack_1268 + -1;
                                puVar34 = *(ulonglong **)
                                           ((longlong)puStack_1248 +
                                           uVar50 * (~((uint)*(ushort *)
                                                              (*(longlong *)
                                                                (*(longlong *)
                                                                  (unaff_GS_OFFSET + 0x58) +
                                                                (ulonglong)_tls_index * 8) + 0x222)
                                                      * 0x6215) * 0x3b0b + (0xe72eb2a3 - uVar57) &
                                                    0xffff) + (ulonglong)(0xe72eb2a3 - uVar57));
                                uVar50 = (ulonglong)(ushort)puVar34[0xd];
                                puVar29 = puVar34 + uVar50;
                                lVar35 = 0x378;
                                if (puVar34 != puVar29) {
                                  lVar35 = 0x68;
                                }
                                uVar65 = 0;
                                puStack_1248 = puVar34;
                    /* WARNING: Switch is manually overridden */
                                switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                case 0x45f9:
override_jmp_0ec4e193_case_1:
                                  do {
                                    bVar67 = uVar21 < *puVar34;
                                    bVar38 = *puVar34 < uVar21;
                                    cVar48 = bVar38 - bVar67;
                                    puVar36 = (undefined4 *)&UNK_0ecba7bc;
                                    if (bVar38 != bVar67) {
                                      puVar36 = (undefined4 *)&UNK_0ecba8c0;
                                    }
                    /* WARNING: Switch is manually overridden */
                                    switch(*puVar36) {
                                    case 0x1c9e:
                                      puVar36 = (undefined4 *)&UNK_0ecbaa84;
                                      if (cVar48 != -1) {
                                        puVar36 = (undefined4 *)&UNK_0ecbaaf0;
                                      }
                                      break;
                                    case 0x2eaa:
                                      puStack_1248 = puVar41;
                    /* WARNING: Switch is manually overridden */
                                      switch(bVar38 != bVar67) {
                                      case false:
                                        goto override_jmp_0ec4f2d1_case_1;
                                      case true:
override_jmp_0ec4e7d6_case_0:
                                      }
                                      goto override_jmp_0ec4be5f_case_0;
                                    }
                    /* WARNING: Switch is manually overridden */
                                    switch(*puVar36) {
                                    case 0x983:
                                      lVar35 = 0x14c;
                                      if (cVar48 != '\x01') {
                                        lVar35 = 0x1d0;
                                      }
                    /* WARNING: Switch is manually overridden */
                                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                      case 0x26bf:
                                        uVar65 = uVar65 + 1;
                                        puVar34 = (ulonglong *)((longlong)puVar34 + uStack_1260);
                                        lVar35 = 0x68;
                                        if (puVar34 == puVar29) {
                                          lVar35 = 0x378;
                                        }
                                        break;
                                      case 0xfffffff4:
                                        goto override_jmp_0ec4e7d6_case_0;
                                      }
                                      break;
                                    case 0x2d07:
                                      lVar35 = 0x1d0;
                                      if (cVar48 == -1) {
                                        lVar35 = 0x378;
                                      }
                                      uVar50 = uVar65;
                    /* WARNING: Switch is manually overridden */
                                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                      case 0xfffffff4:
                                        goto override_jmp_0ec4e7d6_case_0;
                                      }
                                      goto override_jmp_0ec4e7d6_case_1;
                                    }
                    /* WARNING: Switch is manually overridden */
                                    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                    case 0x2376:
                                      goto override_jmp_0ec4e7d6_case_1;
                                    }
                                  } while( true );
                                }
                                goto override_jmp_0ec4e7d6_case_1;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                              case 0x376:
                                goto override_jmp_0ec4bcbb_case_0;
                              case 0x145e:
                                puVar29 = puStack_1248 + 0xd;
                                lVar35 = 0x27c;
                                if ((ushort)((short)puVar5 + 0x4dd8U) <= (ushort)puStack_1248[0xd])
                                {
                                  lVar35 = 0x2d0;
                                }
                              }
                              puStack_10d8 = puVar29;
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                              case 0x7e3:
                                puVar36 = (undefined4 *)&UNK_0ecbaa10;
                                if (uVar50 < (uVar57 ^ 0xe72eb236)) {
                                  puVar36 = (undefined4 *)&UNK_0ecbaa8c;
                                }
                                bVar38 = false;
                                uVar21 = 4;
                    /* WARNING: Switch is manually overridden */
                                switch(*puVar36) {
                                case 0xfa7:
                                  lVar35 = 0x80;
                                  if (5 < uVar50) {
                                    lVar35 = 0x314;
                                  }
                    /* WARNING: Switch is manually overridden */
                                  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                  case 0xa4e:
                                    bVar38 = false;
                    /* WARNING: Switch is manually overridden */
                                    switch((uVar50 != 6) * '\x02') {
                                    case '\0':
                                      uVar50 = 0;
                                      bVar38 = true;
                                      uVar21 = 5;
                                      break;
                                    case '\x02':
                                      goto override_jmp_0ec4b4cb_case_1;
                                    }
                                    break;
                                  case 0xfffff9f0:
                                    bVar38 = false;
                                    uVar21 = uVar50;
                    /* WARNING: Switch is manually overridden */
                                    switch(uVar50 != 5) {
                                    case true:
override_jmp_0ec4b4cb_case_1:
                                      uVar21 = 6;
                                      uVar50 = uVar50 - 7;
                                      bVar38 = true;
                                    }
                                  }
                                }
                                puStack_11f8 = FUN_0ec99abe(0,0x70);
                                lVar35 = 0x310;
                                if (puStack_11f8 != (ulonglong *)0x0) {
                                  lVar35 = 0x170;
                                }
                    /* WARNING: Switch is manually overridden */
                                switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                case 0x15de:
                                  goto override_jmp_0ec50784_case_0;
                                case 0x375d:
                                  uVar62 = uVar57 + 0x18d14e2d;
                                  *(undefined8 *)((longlong)puStack_11f8 + (ulonglong)uVar62) = 0;
                                  *(undefined2 *)((longlong)puStack_11f8 + (ulonglong)(uVar62 ^ 8))
                                       = 0;
                                  uVar65 = ~uVar21 + (ulonglong)(ushort)*puVar29;
                                  *(short *)((longlong)puStack_11f8 + (ulonglong)(uVar62 ^ 8)) =
                                       (short)uVar65;
                                  lVar35 = 0x348;
                                  if ((uVar62 ^ 0x6c) <= uVar65) {
                                    lVar35 = 0xbc;
                                  }
                    /* WARNING: Switch is manually overridden */
                                  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                  case 0x34:
                                    goto override_jmp_0ec4be5f_case_0;
                                  case 0x40be:
                                    pcVar24 = (code *)puStack_1248[uVar21];
                                    FUN_0ecacfd0(puStack_11f8,
                                                 (undefined8 *)
                                                 ((longlong)puStack_1248 +
                                                 uStack_1260 * uVar21 +
                                                 (ulonglong)((uint)uStack_1260 & 0xff)),
                                                 uVar65 << (((byte)uStack_1260 ^ 0xb) & 0x3f));
                                    *(ushort *)(puStack_1248 + 0xd) = (ushort)uVar21;
                                    puVar29 = puStack_1248;
                                    if (bVar38) {
                                      puVar29 = puStack_11f8;
                                    }
                                    uVar4 = (ushort)puVar29[0xd];
                                    puVar36 = (undefined4 *)&UNK_0ecba844;
                                    if (uVar50 + 1 <= (ulonglong)uVar4) {
                                      puVar36 = (undefined4 *)&UNK_0ecba7ec;
                                    }
                    /* WARNING: Switch is manually overridden */
                                    switch(*puVar36) {
                                    case 0x3820:
                                      FUN_0ecacfd0((ulonglong *)
                                                   ((uVar50 + 1) *
                                                    (ulonglong)((uint)uStack_1260 & 0xffff) +
                                                   (longlong)puVar29),
                                                   (ulonglong *)
                                                   (uStack_1260 * uVar50 + (longlong)puVar29),
                                                   (uVar4 - uVar50) * 8);
                    /* WARNING: Switch is manually overridden */
                                    }
                                    pcStack_1268 = (code *)0x0;
                                    pcStack_1200 = pcStack_1250;
                                    *(ulonglong *)
                                     ((longlong)puVar29 + (uStack_10b0 & 0xffffffff) * uVar50) =
                                         uStack_10c8;
                                    *(ushort *)(puVar29 + 0xd) = uVar4 + 1;
                                    puStack_1208 = puStack_1248;
                                    pcVar26 = (code *)puStack_1248[0xc];
                                    lVar35 = 0x33c;
                                    if (pcVar26 != (code *)0x0) {
                                      lVar35 = 1000;
                                    }
                                    pcVar23 = (code *)0x0;
                                    pcStack_11a0 = pcVar24;
                    /* WARNING: Switch is manually overridden */
                                    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                    case 0x4e1b:
                                      uVar4 = (ushort)puStack_1248[0xb];
                                      pcVar23 = (code *)0x0;
                    /* WARNING: Switch is manually overridden */
                                      switch(0xec4bb47) {
                                      case 0xec4babb:
override_jmp_0ec4bda9_case_0:
                                        break;
                                      case 0xec4bb47:
                                        do {
                                          pplVar49 = (longlong **)(ulonglong)(uint)uVar4;
                                          uVar62 = uVar57 + 0x18d14e35;
                                          uVar3 = *(ushort *)(pcVar26 + uVar62);
                                          lVar35 = 0x1b4;
                                          if (10 < (ulonglong)uVar3) {
                                            lVar35 = 0x490;
                                          }
                    /* WARNING: Switch is manually overridden */
                                          switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                          case 0x66:
                                            uStack_117c = uVar57 ^ 0xe72eb236;
                                            lVar35 = 0x438;
                                            if (uVar4 < (ushort)uStack_117c) {
                                              lVar35 = 0x2d4;
                                            }
                    /* WARNING: Switch is manually overridden */
                                            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                            case 0x9a3:
                                              if (pplVar49 == (longlong **)0x5) {
                                                ppcStack_11d8 = &pcStack_1000;
                                                pcStack_1250 = (code *)0x5;
                                              }
                                              else if (uVar4 == 6) {
                                                pcStack_1250 = (code *)0x5;
                                                ppcStack_11d8 = (code **)&local_f18;
                                                pplVar49 = (longlong **)0x0;
                                              }
                                              else {
                                                pplVar49 = (longlong **)((longlong)pplVar49 + -7);
                                                pcStack_1250 = (code *)0x6;
                                                ppcStack_11d8 = (code **)&local_f18;
                                              }
                                              pplStack_10c0 = pplVar49;
                                              break;
                                            case 0x9ce:
                                              pcStack_1250 = (code *)0x4;
                                              ppcStack_11d8 = &pcStack_1000;
                                              pplStack_10c0 = pplVar49;
                                            }
                                            pcStack_1198 = pcVar23 + 1;
                                            puVar20 = FUN_0ec99abe(0,0xd0);
                    /* WARNING: Switch is manually overridden */
                                            switch(puVar20 == (undefined8 *)0x0) {
                                            case false:
                                              uVar45 = 0xe72eb293 - uVar57;
                                              *(undefined8 *)((longlong)puVar20 + (ulonglong)uVar45)
                                                   = 0;
                                              *(undefined2 *)(puVar20 + 0xd) = 0;
                                              uVar21 = ~(ulonglong)pcStack_1250 +
                                                       (ulonglong)*(ushort *)(pcVar26 + uVar62);
                                              *(short *)(puVar20 + 0xd) = (short)uVar21;
                                              lVar35 = 0x18;
                                              if (uVar21 < 0x6c - uVar45) {
                                                lVar35 = 0x278;
                                              }
                                              break;
                                            case true:
                                              goto override_jmp_0ec4be5f_case_0;
                                            }
                                            pcStack_1030 = pcVar24;
                    /* WARNING: Switch is manually overridden */
                                            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                            case 0x4b9f:
                                              pcStack_10a8 = *(code **)(pcVar26 +
                                                                       uStack_1260 *
                                                                       (longlong)pcStack_1250);
                                              FUN_0ecacfd0(puVar20,(undefined8 *)
                                                                   (pcVar26 +
                                                                   (longlong)pcStack_1250 * 8 + 8),
                                                           uVar21 << (((byte)uStack_1260 ^ 0xb) &
                                                                     0x3f));
                                              *(short *)(pcVar26 + uVar62) = (short)pcStack_1250;
                                              uVar4 = *(ushort *)(puVar20 + 0xd);
                                              uVar44 = (uint)uVar4;
                                              bVar61 = (byte)uStack_117c;
                                              pcStack_1188 = pcVar26;
                    /* WARNING: Switch is manually overridden */
                                              switch(uVar4 < (ushort)(((short)uVar62 +
                                                                      (short)uStack_117c) *
                                                                      ((local_1134 ^ (ushort)uVar45)
                                                                      + 0xb18c) * -0x510d)) {
                                              case false:
                                                goto override_jmp_0ec4be5f_case_0;
                                              case true:
                                                lVar35 = (ulonglong)uVar3 - (longlong)pcStack_1250;
                                                puVar36 = (undefined4 *)&UNK_0ecbaba8;
                                                if ((int)lVar35 == uVar44 + 1) {
                                                  puVar36 = (undefined4 *)&UNK_0ecbab0c;
                                                }
                    /* WARNING: Switch is manually overridden */
                                                switch(*puVar36) {
                                                case 0x1fb6:
                                                  plVar66 = (longlong *)
                                                            ((longlong)puVar20 +
                                                            (ulonglong)
                                                            (byte)((bVar61 ^ *(byte *)(*(longlong *)
                                                                                        (*(longlong 
                                                  *)(unaff_GS_OFFSET + 0x58) +
                                                  (ulonglong)_tls_index * 8) + 0x23a)) - 0x1f));
                                                  FUN_0ecacfd0(plVar66,(undefined8 *)
                                                                       (pcVar26 +
                                                                       (longlong)pcStack_1250 * 8 +
                                                                       0x78),
                                                               lVar35 << ((char)(0x6c - uVar45) +
                                                                          bVar61 + ~((byte)
                                                  local_112a ^ bVar61) & 0x3f));
                                                  uVar21 = 1;
                                                  lVar35 = *plVar66;
                                                  *(undefined8 **)(lVar35 + 0x60) = puVar20;
                                                  *(undefined2 *)(lVar35 + 0x58) = 0;
                                                  puVar36 = (undefined4 *)&UNK_0ecbab30;
                                                  if ((ulonglong)uVar44 == 0) {
                                                    puVar36 = (undefined4 *)&UNK_0ecba838;
                                                  }
                    /* WARNING: Switch is manually overridden */
                                                  switch(*puVar36) {
                                                  case 0x15f9:
                                                    do {
                                                      lVar35 = plVar66[uVar21];
                                                      *(undefined8 **)(lVar35 + 0x60) = puVar20;
                                                      *(short *)(lVar35 + 0x58) = (short)uVar21;
                                                      puVar36 = (undefined4 *)&UNK_0ecbab30;
                                                      if (uVar44 == uVar21) {
                                                        puVar36 = (undefined4 *)&UNK_0ecba838;
                                                      }
                                                      uVar21 = uVar21 + 1;
                    /* WARNING: Switch is manually overridden */
                                                      switch(*puVar36) {
                                                      case 0x47f9:
                                                        goto override_jmp_0ec4d0cb_case_1;
                                                      }
                                                    } while( true );
                                                  case 0x47f9:
override_jmp_0ec4d0cb_case_1:
                                                    pcStack_1000 = pcStack_1188;
                                                    local_f18._0_1_ = (byte)puVar20;
                                                    local_f18._1_1_ =
                                                         (undefined1)((ulonglong)puVar20 >> 8);
                                                    local_f18._2_2_ =
                                                         (undefined2)((ulonglong)puVar20 >> 0x10);
                                                    local_f18._4_4_ =
                                                         (undefined4)((ulonglong)puVar20 >> 0x20);
                                                    FUN_0ec3e926((longlong)pplStack_10c0,
                                                                 (longlong)*ppcStack_11d8,
                                                                 pcStack_1030,puStack_11f8);
                                                    puVar29 = (ulonglong *)
                                                              CONCAT44(local_f18._4_4_,
                                                                       CONCAT22(local_f18._2_2_,
                                                                                CONCAT11(local_f18.
                                                                                         _1_1_,(byte
                                                  )local_f18)));
                                                  puVar36 = (undefined4 *)&UNK_0ecba7d8;
                                                  if (puVar29 ==
                                                      (ulonglong *)
                                                      (ulonglong)
                                                      (~(uint)local_113e - (uint)uStack_1260 &
                                                      0xffff)) {
                                                    puVar36 = (undefined4 *)&UNK_0ecba8b4;
                                                  }
                                                  }
                                                  puStack_1248 = puVar41;
                    /* WARNING: Switch is manually overridden */
                                                  switch(*puVar36) {
                                                  case 0xc26:
                                                    goto override_jmp_0ec505b3_case_0;
                                                  case 0x1da1:
                                                    pcVar26 = *(code **)(pcStack_1000 + 0x60);
                                                    lVar35 = 0x33c;
                                                    if (pcVar26 != (code *)0x0) {
                                                      lVar35 = 0x408;
                                                    }
                                                  }
                                                  break;
                                                case 0xfffffffe:
                                                  goto override_jmp_0ec4be5f_case_0;
                                                }
                                              }
                                              break;
                                            case 0xfffffff6:
                                              goto override_jmp_0ec4be5f_case_0;
                                            }
                                            break;
                                          case 0xd49:
                                            FUN_0ec3e926((longlong)pplVar49,(longlong)pcVar26,
                                                         pcVar24,puStack_11f8);
                                            puStack_1248 = puVar41;
                                            goto override_jmp_0ec505b3_case_0;
                                          }
                                          pcVar24 = pcStack_10a8;
                                          pcVar23 = pcStack_1198;
                                          puStack_11f8 = puVar29;
                    /* WARNING: Switch is manually overridden */
                                          switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                          case 0x2d3:
                                            uVar4 = *(ushort *)(pcStack_1000 + 0x58);
                    /* WARNING: Switch is manually overridden */
                                            switch(0xec4bb47) {
                                            case 0xec4babb:
                                              goto override_jmp_0ec4bda9_case_0;
                                            }
                                            break;
                                          case 0x353a:
                                            goto override_jmp_0ec4b58c_case_0;
                                          }
                                        } while( true );
                                      }
                                      goto override_jmp_0ec4be5f_case_0;
                                    }
override_jmp_0ec4b58c_case_0:
                    /* WARNING: Switch is manually overridden */
                                    switch(puVar41 == (ulonglong *)0x0) {
                                    case false:
                                      puStack_1248 = FUN_0ec99abe(0,(ulonglong)(uVar57 + 0x18d14e9d)
                                                                 );
                    /* WARNING: Switch is manually overridden */
                                      switch(puStack_1248 == (ulonglong *)0x0) {
                                      case false:
                                        puStack_1248[0xc] = 0;
                                        *(ushort *)(puStack_1248 + 0xd) = 0;
                                        uVar62 = 0xe72eb2a3 - uVar57;
                                        *(ulonglong **)((longlong)puStack_1248 + (ulonglong)uVar62)
                                             = puVar41;
                                        pcStack_1200 = pcVar28 + 1;
                                        puVar36 = (undefined4 *)&UNK_0ecba7e0;
                                        if (pcStack_1200 == (code *)(ulonglong)(uVar62 ^ 0x70)) {
                                          puVar36 = (undefined4 *)&UNK_0ecbab74;
                                        }
                    /* WARNING: Switch is manually overridden */
                                        switch(*puVar36) {
                                        case 0x1495:
                                          puVar41[0xc] = (ulonglong)puStack_1248;
                                          *(ushort *)(puVar41 + 0xb) = 0;
                                          pcStack_1120 = pcStack_1200;
                                          *(ulonglong **)((longlong)&pvStack_1128 + uStack_10d0) =
                                               puStack_1248;
                                          lVar35 = 0x1f0;
                                          if (pcVar23 == pcVar28) {
                                            lVar35 = 0x124;
                                          }
                    /* WARNING: Switch is manually overridden */
                                          switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                          case 6:
                                            goto override_jmp_0ec4be5f_case_0;
                                          case 0x132:
                                            uVar4 = (ushort)puStack_1248[0xd];
                                            uVar21 = (ulonglong)uVar4;
                                            lVar35 = 0x3e0;
                                            if (10 < uVar21) {
                                              lVar35 = 0x468;
                                            }
                    /* WARNING: Switch is manually overridden */
                                            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                            case 0x1980:
                                              goto override_jmp_0ec4be5f_case_0;
                                            case 0x4a97:
                                              *(ushort *)(puStack_1248 + 0xd) = uVar4 + 1;
                                              puStack_1248[uVar21] = (ulonglong)pcVar24;
                                              *(ulonglong **)
                                               ((longlong)puStack_1248 +
                                               uVar21 * 8 + (ulonglong)uVar62 + 8) = puStack_11f8;
                                              *(ulonglong **)
                                               ((longlong)puStack_11f8 +
                                               (ulonglong)(uVar57 ^ 0xe72eb253)) = puStack_1248;
                                              *(ushort *)(puStack_11f8 + 0xb) = uVar4 + 1;
                                              puStack_11f8 = puVar5;
                    /* WARNING: Switch is manually overridden */
                                            }
                                          }
                                          break;
                                        case 0x40a0:
                                          goto override_jmp_0ec4be5f_case_0;
                                        }
                                        break;
                                      case true:
                                        goto override_jmp_0ec4be5f_case_0;
                                      }
                                      break;
                                    case true:
                                      goto override_jmp_0ec4be5f_case_0;
                                    }
                                  }
                                }
                                break;
                              case 0x3500:
                                uVar21 = (ulonglong)(ushort)puStack_1248[0xd] + 1;
                    /* WARNING: Switch is manually overridden */
                                switch(uVar50 + 1 < uVar21) {
                                case true:
                                  uVar62 = -uVar57 + 0xe72eb23b;
                                  FUN_0ecacfd0((ulonglong *)
                                               ((ulonglong)(0x10 - uVar62) * (uVar50 + 1) +
                                               (longlong)puStack_1248),
                                               (ulonglong *)
                                               (uVar62 * uVar50 + (longlong)puStack_1248),
                                               ~uVar50 + uVar21 << ((char)-uVar57 + 0x36U & 0x3f));
                                }
                                puStack_1248[uVar50] = uStack_10c8;
                                *(ushort *)puStack_10d8 = (ushort)uVar21;
                                pcStack_1200 = pcStack_1250;
                                pcStack_11a0 = pcStack_1168;
                                puStack_1208 = puStack_1218;
                                pcStack_1268 = (code *)uStack_11d0;
                                puStack_1248 = puVar41;
                              }
                            }
override_jmp_0ec505b3_case_0:
                            pvStack_1258 = (LPVOID)((longlong)pvStack_1258 + 1);
                            pvStack_1128 = pvStack_1258;
                            FUN_0ec3871d(&local_f18,lVar31,uStack_10c8,(ulonglong)puStack_11f8);
                            uVar21 = uStack_ef0;
                            bVar61 = (byte)local_f18;
                            lVar59 = lStack_11b8;
                            lVar35 = *(longlong *)
                                      (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                      (ulonglong)_tls_index * 8);
                            uVar62 = (uint)*(undefined8 *)(lVar35 + 0x2d0) ^
                                     (uint)*(undefined8 *)(lVar35 + 0x2f8) ^
                                     *(uint *)(lVar35 + 0x1ec);
                            lVar35 = 0x40c;
                            if (*(code *)((longlong)&local_f18 + (longlong)pcStack_10e0) ==
                                SUB41(uVar62,0)) {
                              lVar35 = 0x19c;
                            }
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                            case 0x52cb:
                              uVar50 = CONCAT44(local_f18._4_4_,
                                                CONCAT22(local_f18._2_2_,
                                                         CONCAT11(local_f18._1_1_,(byte)local_f18)))
                              ;
                              uStack_a38 = CONCAT26(uStack_efa,CONCAT24(uStack_efc,uStack_f00));
                              uStack_a30 = CONCAT71(uStack_ef7,uStack_ef8);
                              uStack_a48 = CONCAT44(uStack_f0c,
                                                    CONCAT22(uStack_f0e,
                                                             CONCAT11(uStack_f0f,local_f10)));
                              uStack_a40 = CONCAT44(uStack_f04,
                                                    CONCAT22(uStack_f06,
                                                             CONCAT11(uStack_f07,local_f08)));
                              lVar35 = 0x364;
                              if (uStack_ef0 ==
                                  local_f88 * -0x16d92bfc6498da91 + (ulonglong)uVar62 * 2) {
                                lVar35 = 0x2a8;
                              }
                              break;
                            case 0xfffffeb9:
                              pcStack_1250 = pcStack_1200;
                              pcStack_1168 = pcStack_11a0;
                              puStack_1218 = puStack_1208;
                              uStack_11d0 = (ulonglong)pcStack_1268;
                    /* WARNING: Switch is manually overridden */
override_jmp_0ec4f2d1_case_1:
                              do {
                                lVar35 = 0x3fc;
                                if (lStack_11b8 == 0) {
                                  lVar35 = 0x250;
                                }
                                puStack_1208 = puStack_1218;
                                pcVar28 = pcStack_1168;
                                pcStack_1268 = (code *)uStack_11d0;
                    /* WARNING: Switch is manually overridden */
                                switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                case 0x3680:
                                  goto override_jmp_0ec4c628_case_0;
                                case 0x37b1:
override_jmp_0ec4c628_case_1:
                                  lStack_11b8 = lStack_11b8 + -1;
                                  uVar21 = *(ulonglong *)
                                            ((longlong)puStack_11c8 +
                                            (uStack_10b0 & 0xffffffff) * lStack_11b8);
                                  puVar36 = (undefined4 *)&UNK_0ecbaa9c;
                                  if ((ulonglong *)0x3f < puStack_11e0) {
                                    puVar36 = (undefined4 *)&UNK_0ecba910;
                                  }
                                }
                                puVar41 = puStack_1248;
                                uStack_11d0 = (ulonglong)pcStack_1268;
                                pcStack_1168 = pcVar28;
                    /* WARNING: Switch is manually overridden */
                                switch(*puVar36) {
                                case 0x1d8:
                                  goto override_jmp_0ec4f2d1_case_0;
                                }
                              } while( true );
                            }
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                            case 0x677:
override_jmp_0ec4f67e_case_0:
                              puVar36 = (undefined4 *)&UNK_0ecbab94;
                              if (lStack_11b8 ==
                                  *(longlong *)((longlong)&puStack_11c8 + uStack_1170)) {
                                puVar36 = (undefined4 *)&UNK_0ecba810;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*puVar36) {
                              case 0x75d:
                                puStack_11c8[lStack_11b8] = uStack_ef0;
                                lStack_11b8 = lStack_11b8 + 1;
                                puVar36 = (undefined4 *)&UNK_0ecba874;
                                if (uVar50 == 0) {
                                  puVar36 = (undefined4 *)&UNK_0ecba840;
                                }
                    /* WARNING: Switch is manually overridden */
                                switch(*puVar36) {
                                case 0x3587:
                                  goto override_jmp_0ec4b26c_case_1;
                                }
                                goto override_jmp_0ec4b26c_case_0;
                              case 0xfffff769:
                                FUN_0ec392c4(&puStack_11c8);
                                puStack_11c8[lVar59] = uVar21;
                                lStack_11b8 = lVar59 + 1;
                                puVar36 = (undefined4 *)&UNK_0ecba874;
                                if (uVar50 == 0) {
                                  puVar36 = (undefined4 *)&UNK_0ecba840;
                                }
                    /* WARNING: Switch is manually overridden */
                                switch(*puVar36) {
                                case 0x2266:
                                  goto override_jmp_0ec4b26c_case_0;
                                case 0x3587:
override_jmp_0ec4b26c_case_1:
                                  lVar35 = 0x324;
                                  if ((bVar61 & 7) == 0) {
                                    lVar35 = 0xc0;
                                  }
                                  if (0x7ffffffeffff <
                                      (-0x1802804818d24dcd - (longlong)puVar5) + uVar50) {
                                    lVar35 = 0x324;
                                  }
                    /* WARNING: Switch is manually overridden */
                                  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                  case 10:
                                    puVar36 = (undefined4 *)&UNK_0ecbaadc;
                                    if (puStack_11e0 == puStack_11e8) {
                                      puVar36 = (undefined4 *)&UNK_0ecba980;
                                    }
                                    break;
                                  case 0x2266:
                                    goto override_jmp_0ec4b26c_case_0;
                                  }
                                }
                              }
                              puVar41 = puStack_11e0;
                    /* WARNING: Switch is manually overridden */
                              switch(*puVar36) {
                              case 0x1d6b:
                                goto override_jmp_0ec4bae5_case_0;
                              }
                              break;
                            case 0x3b8f:
                              uVar62 = 0x2a8;
                              if (((uint)uStack_ef0 & 7) != (int)uStack_1068 + 0x10000U) {
                                uVar62 = 0x1d8;
                              }
                              uVar65 = (ulonglong)uVar62;
                              if (uStack_1068 <= uStack_ef0 - 0x10000) {
                                uVar65 = 0x1d8;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)(&UNK_0ecba780 + uVar65)) {
                              case 0x677:
                                goto override_jmp_0ec4f67e_case_0;
                              case 0x296e:
                                puVar36 = (undefined4 *)&UNK_0ecba874;
                                if (uVar50 == 0) {
                                  puVar36 = (undefined4 *)&UNK_0ecba840;
                                }
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*puVar36) {
                              case 0x3587:
                                goto override_jmp_0ec4b26c_case_1;
                              }
override_jmp_0ec4b26c_case_0:
                              lVar35 = lStack_11b8;
                              lVar59 = 0x3cc;
                              if (lStack_11b8 ==
                                  *(longlong *)((longlong)&puStack_11c8 + uStack_1170)) {
                                lVar59 = 0x168;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)(&UNK_0ecba780 + lVar59)) {
                              case 0x35c7:
                                FUN_0ec392c4(&puStack_11c8);
                                puStack_11c8[lVar35] = uVar50;
                                lStack_11b8 = lVar35 + 1;
                                puVar36 = (undefined4 *)&UNK_0ecba980;
                                if (puStack_11e0 != puStack_11e8) {
                                  puVar36 = (undefined4 *)&UNK_0ecbaadc;
                                }
                                puVar41 = puStack_11e0;
                    /* WARNING: Switch is manually overridden */
                                switch(*puVar36) {
                                case 0x1d6b:
                                  goto override_jmp_0ec4bae5_case_0;
                                }
                                break;
                              case 0xffffff25:
                                puStack_11c8[lStack_11b8] = uVar50;
                                lStack_11b8 = lStack_11b8 + 1;
                                puVar36 = (undefined4 *)&UNK_0ecba980;
                                if (puStack_11e0 != puStack_11e8) {
                                  puVar36 = (undefined4 *)&UNK_0ecbaadc;
                                }
                                puVar41 = puStack_11e0;
                    /* WARNING: Switch is manually overridden */
                                switch(*puVar36) {
                                case 0x1d6b:
override_jmp_0ec4bae5_case_0:
                                  puVar41 = puStack_11e0;
                                  FUN_0ec901eb(&pbStack_11f0);
                    /* WARNING: Switch is manually overridden */
                                }
                              }
                            }
                            lVar35 = (longlong)puVar41 * 0x30;
                            *(ulonglong *)(pbStack_11f0 + lVar35) = uVar50;
                            *(undefined8 *)(pbStack_11f0 + lVar35 + 8) = uStack_a48;
                            *(undefined8 *)(pbStack_11f0 + lVar35 + 8 + 8) = uStack_a40;
                            *(undefined8 *)(pbStack_11f0 + lVar35 + 0x18) = uStack_a38;
                            *(undefined8 *)(pbStack_11f0 + lVar35 + 0x18 + 8) = uStack_a30;
                            *(ulonglong *)(pbStack_11f0 + lVar35 + 0x28) = uVar21;
                            puStack_11e0 = (ulonglong *)((longlong)puVar41 + 1);
                            lVar35 = 0x3fc;
                            if (lStack_11b8 == 0) {
                              lVar35 = 0x250;
                            }
                            puStack_1218 = puStack_1208;
                            pcVar28 = pcStack_11a0;
                            pcStack_1250 = pcStack_1200;
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                            case 0x37b1:
                              goto override_jmp_0ec4c628_case_1;
                            }
override_jmp_0ec4c628_case_0:
                            puVar41 = puStack_1178;
                            pbVar10 = pbStack_11f0;
                            puStack_1218 = (ulonglong *)pbStack_11f0;
                            lVar35 = 0x180;
                            if (puStack_11e0 != puStack_11a8) {
                              lVar35 = 0x3f8;
                            }
                            pcStack_11a0 = pcVar28;
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                            case 0x436:
                              pbVar18 = pbStack_11f0 + (longlong)puStack_11a8 * 0x30;
                              puVar36 = (undefined4 *)&UNK_0ecbabc8;
                              if (pbStack_11f0 == pbVar18) {
                                puVar36 = (undefined4 *)&UNK_0ecbab78;
                              }
                              pbVar32 = pbStack_11f0;
                    /* WARNING: Switch is manually overridden */
                              switch(*puVar36) {
                              case 0x2294:
                                goto override_jmp_0ec4bf0f_case_0;
                              }
                              break;
                            case 0x2294:
override_jmp_0ec4bf0f_case_0:
                              FUN_0ec538fc((longlong *)&pvStack_1128);
                              switchD_0ec75e6c::caseD_ec47f80
                                        (puStack_11c8,
                                         *(longlong *)((longlong)&puStack_11c8 + uStack_1170),8,8);
                              switchD_0ec75e6c::caseD_ec47f80(pbVar10,(longlong)puStack_11e8,8,0x30)
                              ;
                              uStack_11d0 = (ulonglong)pcStack_1268;
                              puStack_1218 = puStack_1208;
                    /* WARNING: Switch is manually overridden */
                              goto override_jmp_0ec4ddf8_case_0;
                            }
                            do {
                              lVar35 = 0x198;
                              if (*(ulonglong *)
                                   (pbVar32 + ((uint)_DAT_0ecca3c4 * 0x192ed4b + 0x2340 & 0xffff))
                                  != uStack_10f0) {
                                lVar35 = 0x36c;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                              case 0x50:
                                pbVar32 = pbVar32 + 0x30;
                                puVar36 = (undefined4 *)&UNK_0ecbabc8;
                                if (pbVar32 == pbVar18) {
                                  puVar36 = (undefined4 *)&UNK_0ecbab78;
                                }
                    /* WARNING: Switch is manually overridden */
                                switch(*puVar36) {
                                case 0x2294:
                                  goto override_jmp_0ec4bf0f_case_0;
                                }
                                break;
                              case 0x21e9:
                                if (*(longlong *)(pbVar32 + 0x10) != lVar33)
                                goto override_jmp_0ec4bf0f_case_0;
                                lVar35 = 0x2ec;
                                if (puStack_11a8 != (ulonglong *)(ulonglong)_DAT_0eccaefc) {
                                  lVar35 = 0x54;
                                }
                                pbVar32 = pbStack_11f0;
                    /* WARNING: Switch is manually overridden */
                                switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                                case 0x45c6:
                                  goto override_jmp_0ec4e079_case_0;
                                }
                                goto override_jmp_0ec4e079_case_1;
                              }
                            } while( true );
                          case 0xfffffffa:
                          }
                          goto override_jmp_0ec4be5f_case_0;
                        }
                      }
                      break;
                    case 0xfffff8ac:
                    /* WARNING: Switch is manually overridden */
                      switch(0x7ffffffeffff < ((ulonglong)puVar5 ^ 0x1802804818d1b233) + uStack_10f0
                            ) {
                      case false:
                        uVar44 = 0x130;
                        if (cVar48 != (byte)('6' - bVar6)) {
                          uVar44 = 0x238;
                        }
                        uVar50 = (ulonglong)uVar44;
                        if ((CONCAT11(local_f18._1_1_,(byte)local_f18) & 7) !=
                            ((local_1010 - (int)((ulonglong)puVar5 ^ 0x1802804818d1b233)) + uVar62)
                            - (uVar45 ^ uVar62)) {
                          uVar50 = 0x238;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*(undefined4 *)(&UNK_0ecba780 + uVar50)) {
                        case 0x491c:
                          goto override_jmp_0ec4dc9a_case_1;
                        }
                      }
                    }
                  }
                }
              }
              break;
            case 0x49bf:
              puVar36 = (undefined4 *)&UNK_0ecbaa48;
              if ((0xe7fd7fb7e72db233U - (longlong)puVar5 ^ 0xffff800000000000) <=
                  uVar50 + (0xe7fd7fb7e72db233U - (longlong)puVar5)) {
                puVar36 = (undefined4 *)&UNK_0ecba9b8;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar36) {
              case 0xfffff915:
                uVar62 = 0x238;
                if (((byte)local_f18 & 7) == 0) {
                  uVar62 = 0x454;
                }
                uVar50 = (ulonglong)uVar62;
                if (0x3f < (longlong)puVar41 - 1U) {
                  uVar50 = 0x238;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)(&UNK_0ecba780 + uVar50)) {
                case 0xfffffb2a:
                  goto override_jmp_0ec4b3f6_case_0;
                }
              }
            }
          }
override_jmp_0ec4ddf8_case_0:
          puVar36 = (undefined4 *)&UNK_0ecba96c;
          if (ppcVar46 == (code **)((ulonglong)uStack_1190 & 0xffffffff)) {
            puVar36 = (undefined4 *)&UNK_0ecba7a4;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar36) {
          case 0x192c:
            goto override_jmp_0ec4c112_case_1;
          }
          goto override_jmp_0ec4c112_case_0;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
        case 0xe94:
          break;
        case 0xfffffe50:
          goto override_jmp_0ec4d3ff_case_0;
        }
      } while( true );
    case 0x2347:
      puVar41 = &uStack_1090;
      pvStack_1258 = (LPVOID)uStack_1158;
                    /* WARNING: Switch is manually overridden */
    }
  }
override_jmp_0ec4cf9e_case_0:
  iVar52 = (int)*(undefined8 *)
                 (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                 0x148);
  uVar62 = iVar52 * -0x2a7a0705;
  uVar65 = (ulonglong)(uVar62 + 9);
  uVar17 = (ulonglong)(uVar62 ^ 0xffffffef);
  switchD_0ec75e6c::caseD_ec47f80(puStack_1220,(longlong)pvStack_1258,uVar65,uVar17);
  uVar21 = *puVar41;
  uVar50 = (ulonglong)(iVar52 * 0x2a7a0705 + 1);
  puVar36 = (undefined4 *)&UNK_0ecbab98;
  if (uVar21 < uVar50) {
    puVar36 = (undefined4 *)&UNK_0ecbabe0;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar36) {
  case 0x2a02:
    if (uVar21 < 0x15) {
      pcVar28 = pcStack_10a0 + (uVar57 ^ 0xe72eb223);
      uVar51 = *(ulonglong *)(pcVar28 + 8);
      lVar35 = 0x3f0;
      if (uVar51 < *(ulonglong *)(pcVar28 + -8)) {
        lVar35 = 0x3ac;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
      case 0x18e8:
        goto override_jmp_0ec4e4b3_case_1;
      }
override_jmp_0ec4e4b3_case_0:
      pcVar28 = pcVar28 + (~(local_fd0 - (uVar50 + uVar65) ^
                            *(ulonglong *)
                             (*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                             0x280)) - uVar65);
      lVar35 = 0x10;
      if (pcVar28 == pcStack_10a0 + uVar21 * 0x10) {
        lVar35 = 0x460;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
      case 0x29df:
        uVar51 = *(ulonglong *)(pcVar28 + 8);
        lVar35 = 0x3f0;
        if (uVar51 < *(ulonglong *)(pcVar28 + -8)) {
          lVar35 = 0x3ac;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
        case 0x18e8:
override_jmp_0ec4e4b3_case_1:
          cVar1 = *pcVar28;
          *(undefined8 *)pcVar28 = *(undefined8 *)(pcVar28 + -0x10);
          *(undefined8 *)(pcVar28 + 8) = *(undefined8 *)(pcVar28 + -8);
          puVar36 = (undefined4 *)&UNK_0ecbaad8;
          if (pcVar28 + -0x10 != pcStack_10a0) {
            puVar36 = (undefined4 *)&UNK_0ecba8fc;
          }
          pcVar24 = pcVar28;
          pcVar26 = pcVar28 + -0x10;
          pcVar23 = pcStack_10a0;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar36) {
          case 0x2166:
            do {
              lVar35 = 0x358;
              if (uVar51 < *(ulonglong *)(pcVar24 + (-0x1802804818d14de5 - (longlong)puVar5))) {
                lVar35 = 0x104;
              }
              pcVar23 = pcVar26;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
              case 0x25ff:
                *(undefined8 *)pcVar26 = *(undefined8 *)(pcVar26 + -0x10);
                *(undefined8 *)(pcVar26 + 8) = *(undefined8 *)(pcVar26 + -8);
                puVar36 = (undefined4 *)&UNK_0ecbaad8;
                if (pcVar26 + -0x10 != pcStack_10a0) {
                  puVar36 = (undefined4 *)&UNK_0ecba8fc;
                }
                break;
              case 0xfffff6cb:
                goto override_jmp_0ec4dc4d_case_0;
              }
              pcVar24 = pcVar26;
              pcVar26 = pcVar26 + -0x10;
              pcVar23 = pcStack_10a0;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar36) {
              case 0xfffff6cb:
                goto override_jmp_0ec4dc4d_case_0;
              }
            } while( true );
          case 0xfffff6cb:
override_jmp_0ec4dc4d_case_0:
            *pcVar23 = cVar1;
            lVar35 = *(longlong *)
                      (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
            *(ulonglong *)
             (pcVar24 +
             (-0x528416f61d53e0f4 -
             ((*(ulonglong *)(lVar35 + 0x150) ^ *(ulonglong *)(lVar35 + 0x328)) - uVar17))) = uVar51
            ;
          }
        }
        goto override_jmp_0ec4e4b3_case_0;
      }
    }
    else {
      FUN_0ec3fb0d((undefined8 *)pcStack_10a0,uVar21);
    }
  }
  FUN_0ec7f188((longlong *)&pcStack_10a0);
  pcStack_1198 = pcStack_10a0;
  uVar21 = *(ulonglong *)((longlong)&pcStack_10a0 + (ulonglong)(uVar57 + 0x18d14ddd));
  puVar41 = puStack_1098;
LAB_0ec4e4f8:
  switchD_0ec75e6c::caseD_ec47f80(ppcStack_11b0,0x800010,1,1);
  lVar35 = 0x13c;
  if (uVar21 == (uVar57 ^ 0xe72eb233)) {
    lVar35 = 0xac;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
  case 0x1abc:
    local_10f8[1] = (longlong)puVar5 + 0x1802804818d14dcb;
    pcVar28 = pcStack_1198;
    break;
  case 0xfffff5ed:
    ppcStack_528 = (code **)0x5ffa894476685a17;
    local_f18._0_1_ = -0x4e;
    local_f18._1_1_ = 0x3d;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    local_f10 = 0x18;
    uStack_f0f = 0;
    uStack_f0e = 0;
    uStack_f0c = 0;
    local_f08 = SUB81(&ppcStack_528,0);
    uVar9 = local_f08;
    uStack_f07 = (undefined1)((ulonglong)&ppcStack_528 >> 8);
    uVar13 = uStack_f07;
    uStack_f06 = (undefined2)((ulonglong)&ppcStack_528 >> 0x10);
    uVar12 = uStack_f06;
    uStack_f04 = (undefined4)((ulonglong)&ppcStack_528 >> 0x20);
    uVar69 = uStack_f04;
    lVar35 = 0x30;
    if (_DAT_0ecc9620 == -0x18d14dcd - uVar57) {
      lVar35 = 0xf0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0x5498:
      FUN_0ecae4d7(0xecc9608,&local_f18);
    }
    puStack_11a8 = puVar41;
    FUN_0ec7473d(&local_9f8,_DAT_0ecc9608,_DAT_0ecc9618);
    pcVar58 = local_9f8;
    ppcStack_528 = (code **)0xabb2566f8c13c6a6;
    local_f18._0_1_ = -0x80;
    local_f18._1_1_ = 0x14;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    *(undefined8 *)((longlong)&local_f18 + (ulonglong)(0xe72eb23b - uVar57)) = 0x18;
    lVar35 = 0x26c;
    if (_DAT_0ecca238 == 0) {
      lVar35 = 0x210;
    }
    local_f08 = uVar9;
    uStack_f07 = uVar13;
    uStack_f06 = uVar12;
    uStack_f04 = uVar69;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0xe86:
      FUN_0ecae4d7(0xecca220,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecca220,_DAT_0ecca230);
    pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                               CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    pcVar28 = (code *)FUN_0ec3249d(uVar57 ^ 0xb08504e8,pcVar58,0x34108993,pvVar55);
    switchD_0ec75e6c::caseD_ec47f80
              (pvVar55,*(longlong *)((longlong)&local_f18 + (ulonglong)(uVar57 ^ 0xe72eb23b)),1,1);
    switchD_0ec75e6c::caseD_ec47f80(local_9f8,uStack_9f0,1,1);
    ppcStack_528 = (code **)(0x447599e053c6220c - (ulonglong)(uVar57 ^ 0xb08504e8));
    local_f18._0_1_ = -0x33;
    local_f18._1_1_ = 0x2f;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    local_f10 = 0x18;
    uStack_f0f = 0;
    uStack_f0e = 0;
    uStack_f0c = 0;
    *(code ****)((longlong)&local_f18 + (ulonglong)(uVar57 ^ 0xe72eb223)) = &ppcStack_528;
    puVar36 = (undefined4 *)&UNK_0ecbaaa8;
    if (_DAT_0ecc7318 == 0) {
      puVar36 = (undefined4 *)&UNK_0ecbab48;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x5057:
      FUN_0ecae4d7(0xecc7300,&local_f18);
    }
    FUN_0ec7473d(&local_9f8,_DAT_0ecc7300,_DAT_0ecc7310);
    pcVar58 = local_9f8;
    ppcStack_528 = (code **)((ulonglong)puVar5 ^ 0x34b6a8f0f87a7be2);
    local_f18._0_1_ = -0x34;
    local_f18._1_1_ = 0x16;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    uVar62 = 0x1f54c9ed - (int)ppcStack_528;
    local_f10 = (undefined1)uVar62;
    uStack_f0f = (undefined1)(uVar62 >> 8);
    uStack_f0e = (undefined2)(uVar62 >> 0x10);
    uStack_f0c = 0;
    lVar35 = 0x8c;
    if (_DAT_0ecc6db8 == 0x1f54c9d1 - (int)ppcStack_528) {
      lVar35 = 0x40;
    }
    local_f08 = uVar9;
    uStack_f07 = uVar13;
    uStack_f06 = uVar12;
    uStack_f04 = uVar69;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0x224d:
      FUN_0ecae4d7(0xecc6da0,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecc6da0,_DAT_0ecc6db0);
    pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                               CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    pcVar24 = (code *)FUN_0ec3249d(0x57abb6db,pcVar58,0x79329b95,pvVar55);
    uVar45 = uVar57 ^ 0xe72eb23b;
    switchD_0ec75e6c::caseD_ec47f80
              (pvVar55,*(longlong *)((longlong)&local_f18 + (ulonglong)uVar45),1,1);
    switchD_0ec75e6c::caseD_ec47f80(local_9f8,uStack_9f0,1,1);
    local_9f8 = (char *)0x387ca4fce4a819a1;
    local_f18._0_1_ = -0x1e;
    local_f18._1_1_ = 0x72;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    uVar62 = -(local_1130 ^ uVar62) & 0xffff;
    local_f10 = (undefined1)uVar62;
    uStack_f0f = (undefined1)(uVar62 >> 8);
    uStack_f0e = 0;
    uStack_f0c = 0;
    *(char ***)((longlong)&local_f18 + (ulonglong)(uVar45 + 8)) = &local_9f8;
    lVar35 = 0x150;
    if (_DAT_0ecc9768 == 0) {
      lVar35 = 0x1d4;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0x1d5a:
      FUN_0ecae4d7(0xecc9750,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecc9750,_DAT_0ecc9760);
    pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                               CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    uVar22 = (*pcVar28)(pvVar55);
    switchD_0ec75e6c::caseD_ec47f80
              (pvVar55,CONCAT44(uStack_f0c,CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10))),1,1)
    ;
    pcVar58 = (char *)((ulonglong)puVar5 ^ 0x430b326f3e789db5);
    local_f18._0_1_ = -0x5a;
    local_f18._1_1_ = 0x73;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    uVar62 = (uint)pcVar58;
    local_9f8 = pcVar58;
    *(ulonglong *)
     ((longlong)&local_f18 + (ulonglong)(byte)((DAT_0ecca3d5 + (char)uVar45 * -2) - (char)pcVar58))
         = (ulonglong)(0xd9562fab - uVar62);
    local_f08 = SUB81(&local_9f8,0);
    uVar9 = local_f08;
    uStack_f07 = (undefined1)((ulonglong)&local_9f8 >> 8);
    uVar13 = uStack_f07;
    uStack_f06 = (undefined2)((ulonglong)&local_9f8 >> 0x10);
    uVar12 = uStack_f06;
    uStack_f04 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
    uVar69 = uStack_f04;
    if ((uVar62 ^ 0xd9562f86) != _DAT_0ecc92e8) {
      FUN_0ecae4d7(0xecc92d0,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecc92d0,_DAT_0ecc92e0);
    pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                               CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    uVar22 = (*pcVar24)(uVar22,pvVar55);
    switchD_0ec75e6c::caseD_ec47f80
              (pvVar55,CONCAT44(uStack_f0c,CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10))),1,1)
    ;
    local_9f8 = (char *)0xee311c7d7fef6353;
    local_f18._0_1_ = '\x13';
    local_f18._1_1_ = 0x6a;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    local_f10 = 0x18;
    uStack_f0f = 0;
    uStack_f0e = 0;
    uStack_f0c = 0;
    uVar45 = (uint)local_112e;
    puVar36 = (undefined4 *)&UNK_0ecbaab8;
    if (_DAT_0ecc64d0 == uVar45) {
      puVar36 = (undefined4 *)&UNK_0ecba998;
    }
    local_f08 = uVar9;
    uStack_f07 = uVar13;
    uStack_f06 = uVar12;
    uStack_f04 = uVar69;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x38c0:
      FUN_0ecae4d7(0xecc64b8,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecc64b8,_DAT_0ecc64c8);
    uVar7 = CONCAT44(local_f18._4_4_,
                     CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    uVar50 = *(ulonglong *)
              (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x338);
    local_9f8 = &UNK_0ecb6147;
    ppcStack_528 = (code **)(pcVar58 + ((local_fc8 ^ uVar50) - (ulonglong)(uVar62 ^ 0xd9562f86)));
    *(undefined8 *)
     ((longlong)&local_9f8 + (ulonglong)(((uVar62 - uVar45) + _DAT_0ecca330) * -0x7269222f)) = 0x1a;
    iVar52 = (int)(pcVar58 + ((local_fc8 ^ uVar50) - (ulonglong)(uVar62 ^ 0xd9562f86)));
    *(code ****)((longlong)&local_9f8 + (ulonglong)(0x5f3e70f0 - iVar52)) = &ppcStack_528;
    puVar36 = (undefined4 *)&UNK_0ecba7b4;
    if (_DAT_0ecc7080 == 0x5f3e70e0 - iVar52) {
      puVar36 = (undefined4 *)&UNK_0ecba858;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x1c56:
      FUN_0ecae4d7(0xecc7068,&local_9f8);
    }
    FUN_0ec7473d(&local_9f8,_DAT_0ecc7068,_DAT_0ecc7078);
    pcVar58 = local_9f8;
    uVar62 = uVar57 + 0xeeb5ad1b;
    pcVar28 = (code *)FUN_0ec3249d(0x57abb6db,uVar7,uVar62,local_9f8);
    switchD_0ec75e6c::caseD_ec47f80(pcVar58,uStack_9f0,1,1);
    uVar44 = uVar62 ^ 0xd5e45f46;
    switchD_0ec75e6c::caseD_ec47f80
              ((LPVOID)CONCAT44(local_f18._4_4_,
                                CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)))
               ,*(longlong *)((longlong)&local_f18 + (ulonglong)uVar44),1,1);
    local_9f8 = (char *)((ulonglong)uVar62 + 0x1b80032346169758);
    local_f18._0_1_ = 'M';
    local_f18._1_1_ = 0x3c;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    *(ulonglong *)((longlong)&local_f18 + (ulonglong)uVar44) =
         (ulonglong)(uVar45 + local_1136 + uVar44 & 0xffff);
    local_f08 = SUB81(&local_9f8,0);
    uStack_f07 = (undefined1)((ulonglong)&local_9f8 >> 8);
    uStack_f06 = (undefined2)((ulonglong)&local_9f8 >> 0x10);
    uStack_f04 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
    puVar36 = (undefined4 *)&UNK_0ecba8ec;
    if (_DAT_0ecc77b8 == uVar57 + 0x18d14dcd) {
      puVar36 = (undefined4 *)&UNK_0ecba830;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x824:
      FUN_0ecae4d7(0xecc77a0,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecc77a0,_DAT_0ecc77b0);
    uVar7 = CONCAT44(local_f18._4_4_,
                     CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    ppcStack_528 = (code **)0xed90279163b9e389;
    local_9f8 = &UNK_0ecb171c;
    uStack_9f0 = 0x17;
    lVar35 = 0xa4;
    if (_DAT_0ecc9b30 == -0x18d14dcd - uVar57) {
      lVar35 = 0x47c;
    }
    pppcStack_9e8 = &ppcStack_528;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0x3b11:
      FUN_0ecae4d7(0xecc9b18,&local_9f8);
    }
    FUN_0ec7473d(&local_9f8,_DAT_0ecc9b18,_DAT_0ecc9b28);
    pcVar58 = local_9f8;
    pcVar24 = (code *)FUN_0ec3249d(0x57abb6db,uVar7,0x63cc9b1f,local_9f8);
    uVar44 = uVar57 ^ 0xe72eb23b;
    ppcStack_11b0 = (code **)(ulonglong)uVar44;
    switchD_0ec75e6c::caseD_ec47f80
              (pcVar58,*(longlong *)((longlong)&local_9f8 + (ulonglong)uVar44),1,1);
    switchD_0ec75e6c::caseD_ec47f80
              ((LPVOID)CONCAT44(local_f18._4_4_,
                                CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)))
               ,*(longlong *)((longlong)&local_f18 + (ulonglong)uVar44),1,1);
    ppcStack_528 = (code **)0xd7e4b1ad17fc37c6;
    local_f18._0_1_ = 'R';
    local_f18._1_1_ = 0x5a;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    local_f10 = 0x18;
    uStack_f0f = 0;
    uStack_f0e = 0;
    uStack_f0c = 0;
    uVar62 = uVar44 + 8;
    *(code ****)((longlong)&local_f18 + (ulonglong)uVar62) = &ppcStack_528;
    uVar45 = 8 - uVar44;
    puVar36 = (undefined4 *)&UNK_0ecbab04;
    if (_DAT_0ecc8ee0 == uVar45) {
      puVar36 = (undefined4 *)&UNK_0ecba7f0;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0xcab:
      FUN_0ecae4d7(0xecc8ec8,&local_f18);
    }
    FUN_0ec7473d(&local_9f8,_DAT_0ecc8ec8,_DAT_0ecc8ed8);
    pcVar58 = local_9f8;
    ppcStack_528 = (code **)0xaee2f2a7f135a3b9;
    local_f18._0_1_ = -0x10;
    local_f18._1_1_ = 0x74;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    local_f10 = 0x2c;
    uStack_f0f = 0;
    uStack_f0e = 0;
    uStack_f0c = 0;
    *(code ****)((longlong)&local_f18 + (ulonglong)(uVar57 + 0x18d14ddd)) = &ppcStack_528;
    uVar43 = uVar57 + 0x18d14dcd;
    puVar36 = (undefined4 *)&UNK_0ecbaa74;
    if (_DAT_0ecc9950 == uVar43) {
      puVar36 = (undefined4 *)&UNK_0ecba8b8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x2ec4:
      FUN_0ecae4d7(0xecc9938,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecc9938,_DAT_0ecc9948);
    pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                               CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    iVar52 = -uVar57;
    uVar54 = iVar52 + 0x3eda690e;
    pcVar26 = (code *)FUN_0ec3249d(uVar54,pcVar58,0x46ac56a3,pvVar55);
    lVar35 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
    switchD_0ec75e6c::caseD_ec47f80
              (pvVar55,*(longlong *)
                        ((longlong)&local_f18 +
                        (ulonglong)
                        (((uint)*(undefined8 *)(lVar35 + 0x288) ^
                         (uVar62 ^ uVar44) + local_1132 + uVar43 + uVar45) & 0xffff)),1,1);
    switchD_0ec75e6c::caseD_ec47f80(local_9f8,uStack_9f0,1,1);
    ppcStack_528 = (code **)((((ulonglong)uVar62 + (longlong)ppcStack_11b0 +
                              *(longlong *)(lVar35 + 0x160)) - (ulonglong)uVar45) *
                             -0x244c3e9ae7f85179 - (ulonglong)uVar43);
    local_f18._0_1_ = 't';
    local_f18._1_1_ = 0x15;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    *(undefined8 *)((longlong)&local_f18 + (ulonglong)(iVar52 + 0xe72eb23b)) = 0x18;
    *(code ****)((longlong)&local_f18 + (ulonglong)(iVar52 + 0xe72eb243)) = &ppcStack_528;
    puVar36 = (undefined4 *)&UNK_0ecba8e0;
    if (_DAT_0ecc6b48 == (uVar54 ^ 0x57abb6db)) {
      puVar36 = (undefined4 *)&UNK_0ecba9ac;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x816:
      FUN_0ecae4d7(0xecc6b30,&local_f18);
    }
    FUN_0ec7473d(&local_9f8,_DAT_0ecc6b30,_DAT_0ecc6b40);
    pcVar58 = local_9f8;
    ppcStack_528 = (code **)0x6fc8648da768ec18;
    local_f18._0_1_ = '\x10';
    local_f18._1_1_ = 0x5e;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    uVar45 = -uVar57 + 0xe72eb23b;
    uVar62 = -uVar57 + 0xe72eb24b;
    *(ulonglong *)((longlong)&local_f18 + (ulonglong)uVar45) = (ulonglong)uVar62;
    local_f08 = SUB81(&ppcStack_528,0);
    uStack_f07 = (undefined1)((ulonglong)&ppcStack_528 >> 8);
    uStack_f06 = (undefined2)((ulonglong)&ppcStack_528 >> 0x10);
    uStack_f04 = (undefined4)((ulonglong)&ppcStack_528 >> 0x20);
    puVar36 = (undefined4 *)&UNK_0ecbabac;
    if (_DAT_0ecc6348 == (byte)((char)(uVar54 ^ 0x57abb6db) + (char)uVar54 + '%')) {
      puVar36 = (undefined4 *)&UNK_0ecba8c8;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x2022:
      FUN_0ecae4d7(0xecc6330,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecc6330,_DAT_0ecc6340);
    pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                               CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    uVar50 = (ulonglong)(iVar52 + 0xe72eb243) ^
             *(ulonglong *)
              (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
              0x168);
    iVar52 = (int)uVar50;
    pcVar23 = (code *)FUN_0ec3249d(0x57abb6db,pcVar58,iVar52,pvVar55);
    switchD_0ec75e6c::caseD_ec47f80
              (pvVar55,CONCAT44(uStack_f0c,CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10))),1,1)
    ;
    switchD_0ec75e6c::caseD_ec47f80
              (local_9f8,*(longlong *)((longlong)&local_9f8 + (ulonglong)(iVar52 + 0xe6e7fffd)),1,1)
    ;
    ppcStack_528 = (code **)(ulonglong)(((uint)DAT_0ecc7340 ^ -(uint)local_112c) & 0xffff);
    pcStack_520 = (code *)0x0;
    apcStack_518[0] = (code *)0x0;
    lVar35 = (*pcVar26)(4,0);
    uVar69 = (undefined4)((ulonglong)in_stack_ffffffffffffed88 >> 0x20);
    lVar33 = 0x208;
    if (lVar35 - 1U < 0x19180009 - uVar50) {
      lVar33 = 0x260;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar33)) {
    case 0x2c46:
      ppcStack_11d8 = (code **)0x4;
      pcVar26 = (code *)0x0;
      pcVar28 = (code *)0x0;
      break;
    case 0x4b02:
      FUN_0ec95e62(&local_9f8,(undefined8 *)&UNK_0ecb60e8,0x47);
      local_f18._0_1_ = (byte)&local_9f8;
      local_f18._1_1_ = (undefined1)((ulonglong)&local_9f8 >> 8);
      local_f18._2_2_ = (undefined2)((ulonglong)&local_9f8 >> 0x10);
      local_f18._4_4_ = 0;
      local_f10 = 0;
      uStack_f0f = 0;
      uStack_f0e = 0;
      uStack_f0c = 0;
      local_f08 = 0;
      uStack_f07 = 0;
      uStack_f06 = 0;
      uStack_f04 = 0;
      uStack_f00 = 0;
      switchD_0ec75e6c::caseD_ec47f80(local_9f8,uStack_9f0,1,1);
      local_f18._0_1_ = '\x1c';
      local_f18._1_1_ = 0;
      local_f18._2_2_ = 0;
      uVar44 = (*pcVar28)(lVar35,&local_f18);
      uVar69 = (undefined4)((ulonglong)in_stack_ffffffffffffed88 >> 0x20);
      uVar43 = uVar57 ^ 0xe72eb233;
      puVar36 = (undefined4 *)&UNK_0ecba92c;
      if (uVar44 == uVar43) {
        puVar36 = (undefined4 *)&UNK_0ecba9d4;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar36) {
      case 0x2e8e:
        ppcStack_11d8 = (code **)0x4;
        pcVar28 = (code *)0x0;
        pcVar26 = (code *)0x0;
        break;
      case 0x3626:
        ppcVar56 = (code **)0x4;
        pcVar28 = (code *)0x0;
        uVar50 = (ulonglong)
                 ((((uint)*(undefined8 *)
                           (*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                           0x240) ^ local_113c ^ uVar45) - (uVar62 ^ uVar43)) + uVar43 & 0xffff);
        iVar52 = (int)uStack_10b8;
        lVar33 = 0x390;
        if (*(int *)((longlong)&local_f18 + uVar50) == (int)uStack_10b8) {
          lVar33 = 0x404;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecba780 + lVar33)) {
        case 0x1985:
          goto override_jmp_0ec4d8a8_case_1;
        }
override_jmp_0ec4d8a8_case_0:
        iVar40 = (*pcVar23)(lVar35,&local_f18);
        uVar69 = (undefined4)((ulonglong)in_stack_ffffffffffffed88 >> 0x20);
        lVar33 = 0x354;
        if (iVar40 == uVar57 + 0x18d14dcd) {
          lVar33 = 0x444;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecba780 + lVar33)) {
        case 0x1dd7:
          lVar33 = 0x390;
          if (*(int *)((longlong)&local_f18 + uVar50) == iVar52) {
            lVar33 = 0x404;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_0ecba780 + lVar33)) {
          case 0x1985:
override_jmp_0ec4d8a8_case_1:
            uVar69 = CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10));
            lVar33 = 0xd4;
            if (pcVar28 == pcStack_520) {
              lVar33 = 0x284;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_0ecba780 + lVar33)) {
            case 0x50d:
              FUN_0ec772dd(&ppcStack_528);
              ppcVar56 = ppcStack_528;
            }
            *(undefined4 *)
             ((longlong)ppcVar56 + (ulonglong)(uVar57 ^ 0xe72eb237) * (longlong)pcVar28) = uVar69;
            pcVar28 = pcVar28 + 1;
            apcStack_518[0] = pcVar28;
          }
          goto override_jmp_0ec4d8a8_case_0;
        case 0x2d5a:
          ppcStack_11d8 = ppcStack_528;
          pcVar26 = pcStack_520;
        }
      }
      (*pcVar24)(lVar35);
    }
    local_9f8 = (char *)(-0x617f22e8e4be9ae5 - (longlong)puVar5);
    local_f18._0_1_ = -0x36;
    local_f18._1_1_ = 0x3d;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    local_f10 = 0x18;
    uStack_f0f = 0;
    uStack_f0e = 0;
    uStack_f0c = 0;
    local_f08 = SUB81(&local_9f8,0);
    uStack_f07 = (undefined1)((ulonglong)&local_9f8 >> 8);
    uStack_f06 = (undefined2)((ulonglong)&local_9f8 >> 0x10);
    uStack_f04 = (undefined4)((ulonglong)&local_9f8 >> 0x20);
    lVar35 = 8;
    if (_DAT_0ecc87d0 == 0x3412b2e8 - (int)local_9f8) {
      lVar35 = 0x458;
    }
    pcStack_10e0 = pcVar26;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0x4164:
      FUN_0ecae4d7(0xecc87b8,&local_f18);
    }
    pcStack_10a8 = pcVar28;
    FUN_0ec7473d(&local_f18,_DAT_0ecc87b8,_DAT_0ecc87c8);
    uVar7 = CONCAT44(local_f18._4_4_,
                     CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    ppcStack_528 = (code **)0xeefabb3852579f5a;
    local_9f8 = &UNK_0ecb1287;
    uStack_9f0 = 0x1a;
    puVar36 = (undefined4 *)&UNK_0ecba860;
    if (_DAT_0ecc7668 == 0) {
      puVar36 = (undefined4 *)&UNK_0ecbaa08;
    }
    pppcStack_9e8 = &ppcStack_528;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x52a:
      FUN_0ecae4d7(0xecc7650,&local_9f8);
    }
    FUN_0ec7473d(&local_9f8,_DAT_0ecc7650,_DAT_0ecc7660);
    pcVar58 = local_9f8;
    ppcStack_11b0 = (code **)FUN_0ec3249d(0x57abb6db,uVar7,uVar57 ^ 0x5c89d080,local_9f8);
    switchD_0ec75e6c::caseD_ec47f80(pcVar58,uStack_9f0,1,1);
    switchD_0ec75e6c::caseD_ec47f80
              ((LPVOID)CONCAT44(local_f18._4_4_,
                                CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)))
               ,CONCAT44(uStack_f0c,CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10))),1,1);
    ppcVar56 = (code **)(local_fe0 * 0xdea3e97b511f23 ^ DAT_0ecc83e0);
    local_f18._0_1_ = 'y';
    local_f18._1_1_ = 0x20;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    local_f10 = 0x18;
    uStack_f0f = 0;
    uStack_f0e = 0;
    uStack_f0c = 0;
    local_f08 = SUB81(&ppcStack_528,0);
    uStack_f07 = (undefined1)((ulonglong)&ppcStack_528 >> 8);
    uStack_f06 = (undefined2)((ulonglong)&ppcStack_528 >> 0x10);
    uStack_f04 = (undefined4)((ulonglong)&ppcStack_528 >> 0x20);
    uVar62 = 0xbba762b3 - (uVar57 ^ 0x5c89d080);
    ppcStack_528 = ppcVar56;
                    /* WARNING: Switch is manually overridden */
    switch(_DAT_0ecc9748 == uVar62) {
    case false:
      FUN_0ecae4d7(0xecc9730,&local_f18);
    }
    FUN_0ec7473d(&local_9f8,_DAT_0ecc9730,_DAT_0ecc9740);
    pcVar58 = local_9f8;
    ppcStack_528 = (code **)0xf2fb63120e6f976;
    local_f18._0_1_ = 0xef;
    local_f18._1_1_ = 0xe;
    local_f18._2_2_ = 0xecb;
    local_f18._4_4_ = 0;
    local_f10 = 0x1c;
    uStack_f0f = 0;
    uStack_f0e = 0;
    uStack_f0c = 0;
    uVar45 = 0xe72eb243 - uVar57;
    *(code ****)((longlong)&local_f18 + (ulonglong)uVar45) = &ppcStack_528;
    lVar35 = 0x2f0;
    if (_DAT_0ecc7f68 == 0x10 - uVar45) {
      lVar35 = 0x388;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0x15e3:
      FUN_0ecae4d7(0xecc7f50,&local_f18);
    }
    FUN_0ec7473d(&local_f18,_DAT_0ecc7f50,_DAT_0ecc7f60);
    pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                               CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18)));
    pcVar28 = (code *)FUN_0ec3249d(0x57abb6db,pcVar58,0x3db48152,pvVar55);
    switchD_0ec75e6c::caseD_ec47f80
              (pvVar55,*(longlong *)
                        ((longlong)&local_f18 +
                        (ulonglong)((int)ppcVar56 + ~(local_100c * 0x19045cf3) + uVar45)),1,1);
    switchD_0ec75e6c::caseD_ec47f80(local_9f8,uStack_9f0,1,1);
    puVar41 = (ulonglong *)(*pcVar28)(lVar31,0,0x10000,0x3000,CONCAT44(uVar69,0x40));
                    /* WARNING: Switch is manually overridden */
    switch(puVar41 == (ulonglong *)0x0) {
    case false:
      ppcStack_528 = (code **)(uVar62 ^ local_fe8 ^
                              *(ulonglong *)
                               (*(longlong *)
                                 (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8)
                               + 0x370));
      local_f18._0_1_ = -0x58;
      local_f18._1_1_ = 0x3b;
      local_f18._2_2_ = 0xecb;
      local_f18._4_4_ = 0;
      local_f10 = 0x18;
      uStack_f0f = 0;
      uStack_f0e = 0;
      uStack_f0c = 0;
      local_f08 = SUB81(&ppcStack_528,0);
      uVar9 = local_f08;
      uStack_f07 = (undefined1)((ulonglong)&ppcStack_528 >> 8);
      uVar13 = uStack_f07;
      uStack_f06 = (undefined2)((ulonglong)&ppcStack_528 >> 0x10);
      uVar12 = uStack_f06;
      uStack_f04 = (undefined4)((ulonglong)&ppcStack_528 >> 0x20);
      uVar69 = uStack_f04;
      puVar36 = (undefined4 *)&UNK_0ecbabd0;
      if (_DAT_0ecc8a90 == 0) {
        puVar36 = (undefined4 *)&UNK_0ecbab24;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar36) {
      case 0xb18:
        FUN_0ecae4d7(0xecc8a78,&local_f18);
      }
      FUN_0ec7473d(&local_9f8,_DAT_0ecc8a78,_DAT_0ecc8a88);
      pcVar58 = local_9f8;
      ppcVar56 = (code **)((longlong)puVar5 + 0x713c41aa67878d32);
      local_f18._0_1_ = 'd';
      local_f18._1_1_ = 0x74;
      local_f18._2_2_ = 0xecb;
      local_f18._4_4_ = 0;
      ppcStack_528 = ppcVar56;
      *(ulonglong *)((longlong)&local_f18 + (ulonglong)(uVar57 + 0x18d14dd5)) =
           (ulonglong)(0x4eb63f87 - (uint)ppcVar56);
      uVar62 = (uint)ppcVar56 ^ 0x4eb63f65;
      local_f08 = uVar9;
      uStack_f07 = uVar13;
      uStack_f06 = uVar12;
      uStack_f04 = uVar69;
                    /* WARNING: Switch is manually overridden */
      switch(_DAT_0ecc8950 == uVar62) {
      case false:
        FUN_0ecae4d7(0xecc8938,&local_f18);
      }
      FUN_0ec7473d(&local_f18,_DAT_0ecc8938,_DAT_0ecc8948);
      pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                                 CONCAT22(local_f18._2_2_,CONCAT11(local_f18._1_1_,(byte)local_f18))
                                );
      uVar45 = uVar57 + 0x707d04a8;
      pcVar28 = (code *)FUN_0ec3249d(uVar45,pcVar58,-0xce5738c,pvVar55);
      switchD_0ec75e6c::caseD_ec47f80
                (pvVar55,*(longlong *)((longlong)&local_f18 + (ulonglong)(uVar45 ^ 0x57abb6d3)),1,1)
      ;
      switchD_0ec75e6c::caseD_ec47f80
                (local_9f8,
                 *(longlong *)((longlong)&local_9f8 + (ulonglong)((uVar45 ^ 0x57abb6d3) & 0xffff)),1
                 ,1);
      local_f18._0_1_ = 0x48;
      local_f18._1_1_ = 0xb9;
      local_f18._2_2_ = SUB82(puVar41,0);
      local_f18._4_4_ = (undefined4)((ulonglong)puVar41 >> 0x10);
      local_f10 = (undefined1)((ulonglong)puVar41 >> 0x30);
      uStack_f0f = (undefined1)((ulonglong)puVar41 >> 0x38);
      lVar35 = ((ulonglong)uVar62 + (local_fc0 - (ulonglong)(uVar57 + 0x18d14dd5))) *
               (longlong)ppcVar56;
      *(undefined4 *)((longlong)&local_f18 + lVar35) = 0x20ba;
      *(undefined1 *)((longlong)&local_f18 + lVar35 + 4) = 0;
      *(undefined2 *)((longlong)&local_f18 + (ulonglong)(uVar57 + 0x18d14ddc)) = 0x3145;
      *(undefined1 *)((longlong)&local_f18 + (ulonglong)(uVar57 + 0x18d14ddc) + 2) = 0xc0;
      uStack_f06 = 0xb848;
      lVar35 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
      uVar62 = (uint)*(undefined8 *)(lVar35 + 0x318) ^ *(uint *)(lVar35 + 0x1f0) ^ 0x75322e99;
      *(undefined8 *)((longlong)&local_f18 + (ulonglong)uVar62) = uVar22;
      uStack_efc = 0xd0ff;
      uStack_efa = (short)local_1014 + 0x21d6U ^ (ushort)uVar62;
      local_9f8 = (char *)0x0;
      iVar52 = (*pcVar28)(lVar31,puVar41 + 0x40,&local_f18,0x20,&local_9f8);
      if ((iVar52 != 0x57abb6db - uVar45) && ((char *)(ulonglong)(0x57abb6fb - uVar45) == local_9f8)
         ) {
        puStack_11c8 = puVar41;
        lStack_11c0 = lVar31;
        uVar43 = ~(local_1004 ^ 0xac3f40d8);
        uVar54 = -(uVar43 + 0xd1422980);
        *(ulonglong **)((longlong)&puStack_11c8 + (ulonglong)uVar54) = puVar41;
        uVar62 = uVar54 + 0x10;
        local_1088 = (int *)(ulonglong)uVar62;
        *(undefined8 *)((longlong)aplStack_f80 + (longlong)(ulonglong)uVar62) = 0xffffffffffffffff;
        lStack_f48 = -1;
        aplStack_f80[1] = (longlong *)0xffffffffffffffff;
        uVar45 = uVar54 - 8;
        uVar44 = uVar43 + 0xd1422998;
        uStack_1060 = (ulonglong)uVar54;
        lVar35 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
        uVar22 = *(undefined8 *)(lVar35 + 0x2e0);
        iVar52 = _DAT_0ecca398 + -0x2a8c1365;
        puStack_1040 = (ulonglong *)(ulonglong)uVar44;
        uStack_1068 = (ulonglong)uVar45;
        uStack_1048 = (ulonglong)uVar45;
        pcStack_1030 = (code *)(ulonglong)(uVar54 + 0x88);
        uStack_1038 = (ulonglong)uVar54;
        uStack_10f0 = (ulonglong)uVar44;
        uStack_1058 = (ulonglong)uVar45;
        puStack_1070 = (ulonglong *)(ulonglong)uVar44;
        puStack_1178 = (ulonglong *)(ulonglong)(uVar54 & 0xffff);
        pcVar24 = pcStack_1198 + (uVar21 << ((byte)(uVar54 ^ 0x14) & 0x3f));
        pcStack_11a0 = (code *)(ulonglong)(uVar44 & 0xff);
        uStack_10e8 = (ulonglong)(uVar54 + 0x20);
        uStack_10b0 = (ulonglong)uVar45;
        uStack_10c8 = (ulonglong)uVar45;
        ppcStack_11b0 =
             (code **)((longlong)ppcStack_11d8 +
                      ((longlong)pcStack_10a8 <<
                      ((byte)uVar44 + (char)uVar54 +
                       ((byte)*(undefined8 *)(lVar35 + 0x170) ^ (byte)(uVar54 + 0x88)) & 0x3f)));
        pcStack_1050 = (code *)(ulonglong)(uVar54 ^ 0x10);
        uStack_1078 = 0x91fcfc94f96af854 - (longlong)puVar5;
        uStack_1080 = (ulonglong)puVar5 ^ 0x7710c1052dde7141;
        uStack_10b8 = (ulonglong)puVar5 ^ 0x1ce7ca23be01e6fa;
        uStack_1170 = 1;
        puStack_10d8 = (ulonglong *)0x2;
        uStack_10d0 = (ulonglong)(byte)uVar44;
        uStack_117c = uVar57 + 0x18d14dd5;
        uVar21 = (ulonglong)(uVar57 + 0x18d14dd5);
        pcVar28 = pcStack_1198;
        do {
          cVar1 = *pcVar28;
          pcVar26 = pcVar28 + uVar21;
          lVar35 = 0x2a0;
          if (cVar1 == (code)0x0) {
            lVar35 = 0x23c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
          case 0xfffffd31:
            pplVar49 = aplStack_f80 + 3;
            break;
          case 0xfffffda5:
            pplVar49 = aplStack_f80;
            if (cVar1 != (code)0x2) {
              lVar35 = 0x1e4;
              if (cVar1 == (code)0x1) {
                lVar35 = 0x3dc;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
              case 0xfffffd3b:
                pplVar49 = (longlong **)((longlong)aplStack_f80 + (ulonglong)(uVar43 + 0xd14229c0));
                break;
              case 0xfffffff8:
                goto override_jmp_0ec4be5f_case_0;
              }
            }
          }
          pcVar28 = pcVar28 + 0x10;
          puVar36 = (undefined4 *)&UNK_0ecbaacc;
          if (*(longlong *)((longlong)pplVar49 + uVar21) ==
              ((uVar21 * 2 ^ local_fb8) + uVar21) * 0x580566b60555bce3) {
            puVar36 = (undefined4 *)&UNK_0ecba974;
          }
          uVar50 = uVar21;
          iVar40 = (int)uVar21;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar36) {
          case 0xfffffa1a:
            uStack_11d0 = CONCAT44(uStack_11d0._4_4_,(int)uVar21);
            pplStack_10c0 = pplVar49;
            FUN_0ec90fce((undefined1 *)&local_f18,lVar31,*(undefined8 *)pcVar26);
            puVar36 = (undefined4 *)&UNK_0ecba894;
            if ((byte)local_f18 == 0) {
              puVar36 = (undefined4 *)&UNK_0ecbabf8;
            }
            uStack_1190 = (code *)0x0;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar36) {
            case 0x121f:
                    /* WARNING: Switch is manually overridden */
              break;
            case 0x450f:
              uStack_1118 = CONCAT17(uStack_f00._0_1_,
                                     CONCAT43(uStack_f04,CONCAT21(uStack_f06,uStack_f07)));
              uStack_1110 = CONCAT17(uStack_ef8,
                                     CONCAT25(uStack_efa,CONCAT23(uStack_efc,uStack_f00._1_3_)));
              pvStack_1128 = (LPVOID)CONCAT17(local_f10,
                                              CONCAT43(local_f18._4_4_,
                                                       CONCAT21(local_f18._2_2_,local_f18._1_1_)));
              pcStack_1120 = (code *)CONCAT17(local_f08,
                                              CONCAT43(uStack_f0c,CONCAT21(uStack_f0e,uStack_f0f)));
              puVar36 = (undefined4 *)&UNK_0ecba984;
              if (uVar57 != 0xe72eb253) {
                puVar36 = (undefined4 *)&UNK_0ecba920;
              }
              uVar50 = 0;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar36) {
              case 0x34cd:
                do {
                  puVar36 = (undefined4 *)&UNK_0ecbab28;
                  if (*(char *)((longlong)&pvStack_1128 + uVar50) != (char)(uVar57 + 0x18d14dcd)) {
                    puVar36 = (undefined4 *)&UNK_0ecbab58;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar36) {
                  case 0x4304:
                    uVar50 = uVar50 + 1;
                    puVar36 = (undefined4 *)&UNK_0ecba984;
                    if (uVar50 != 0xe72eb253 - uVar57) {
                      puVar36 = (undefined4 *)&UNK_0ecba920;
                    }
                    break;
                  case 0x4d60:
                    pbStack_11f0 = (byte *)0xa948f79f0e3f1f49;
                    local_f18._0_1_ = -0x7f;
                    local_f18._1_1_ = 0x69;
                    local_f18._2_2_ = 0xecb;
                    local_f18._4_4_ = 0;
                    local_f10 = 0x18;
                    uStack_f0f = 0;
                    uStack_f0e = 0;
                    uStack_f0c = 0;
                    local_f08 = SUB81(&pbStack_11f0,0);
                    uStack_f07 = (undefined1)((ulonglong)&pbStack_11f0 >> 8);
                    uStack_f06 = (undefined2)((ulonglong)&pbStack_11f0 >> 0x10);
                    uStack_f04 = (undefined4)((ulonglong)&pbStack_11f0 >> 0x20);
                    puVar36 = (undefined4 *)&UNK_0ecba85c;
                    if (_DAT_0ecca078 == 0) {
                      puVar36 = (undefined4 *)&UNK_0ecba848;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar36) {
                    case 0x116d:
                      FUN_0ecae4d7(0xecca060,&local_f18);
                    }
                    FUN_0ec7473d(&local_f18,_DAT_0ecca060,_DAT_0ecca070);
                    uVar7 = CONCAT44(local_f18._4_4_,
                                     CONCAT22(local_f18._2_2_,
                                              CONCAT11(local_f18._1_1_,(byte)local_f18)));
                    uStack_1100 = 0x4e6399e82f74e1fc;
                    pbStack_11f0 = &UNK_0ecb3405;
                    *(ulonglong *)((longlong)&pbStack_11f0 + uStack_1058) =
                         (ulonglong)(uVar57 + 0x18d14def);
                    puStack_11e0 = &uStack_1100;
                    lVar35 = 0x1c4;
                    if (_DAT_0ecc7db8 != 0x22 - (uVar57 + 0x18d14def)) {
                      lVar35 = 0x28;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                    case 0x455c:
                      FUN_0ecae4d7(0xecc7da0,&pbStack_11f0);
                    }
                    FUN_0ec7473d(&pbStack_11f0,_DAT_0ecc7da0,_DAT_0ecc7db0);
                    pbVar10 = pbStack_11f0;
                    pcVar26 = (code *)FUN_0ec3249d(0x57abb6db,uVar7,-0xce5738c,pbStack_11f0);
                    switchD_0ec75e6c::caseD_ec47f80(pbVar10,(longlong)puStack_11e8,1,1);
                    switchD_0ec75e6c::caseD_ec47f80
                              ((LPVOID)CONCAT44(local_f18._4_4_,
                                                CONCAT22(local_f18._2_2_,
                                                         CONCAT11(local_f18._1_1_,(byte)local_f18)))
                               ,*(longlong *)((longlong)&local_f18 + uStack_10f0),1,1);
                    uStack_eb8 = 0;
                    uStack_eb6 = 0;
                    uStack_ec8 = 0;
                    uStack_ec0 = 0;
                    uStack_ebe = 0;
                    uStack_ed8 = 0;
                    uStack_ed0 = 0;
                    uStack_ee8 = 0;
                    uStack_ee0 = 0;
                    uStack_ef8 = 0;
                    uStack_ef7 = 0;
                    uStack_ef0 = 0;
                    local_f08 = (undefined1)uStack_1118;
                    uStack_f07 = (undefined1)((ulonglong)uStack_1118 >> 8);
                    uStack_f06 = (undefined2)((ulonglong)uStack_1118 >> 0x10);
                    uStack_f04 = (undefined4)((ulonglong)uStack_1118 >> 0x20);
                    uStack_f00 = (undefined4)uStack_1110;
                    uStack_efc = (undefined2)((ulonglong)uStack_1110 >> 0x20);
                    uStack_efa = (ushort)((ulonglong)uStack_1110 >> 0x30);
                    local_f18._0_1_ = (byte)pvStack_1128;
                    local_f18._1_1_ = (undefined1)((ulonglong)pvStack_1128 >> 8);
                    local_f18._2_2_ = (undefined2)((ulonglong)pvStack_1128 >> 0x10);
                    local_f18._4_4_ = (undefined4)((ulonglong)pvStack_1128 >> 0x20);
                    local_f10 = SUB81(pcStack_1120,0);
                    uStack_f0f = (undefined1)((ulonglong)pcStack_1120 >> 8);
                    uStack_f0e = (undefined2)((ulonglong)pcStack_1120 >> 0x10);
                    uStack_f0c = (undefined4)((ulonglong)pcStack_1120 >> 0x20);
                    puVar36 = FUN_0ec99abe(0,0x1e);
                    puVar30 = (undefined4 *)&UNK_0ecba928;
                    if (puVar36 != (undefined4 *)0x0) {
                      puVar30 = (undefined4 *)&UNK_0ecba814;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar30) {
                    case 2:
                      goto override_jmp_0ec4be5f_case_0;
                    case 0x5783:
                      *(undefined8 *)((longlong)puVar36 + 0xe) = 0x696c2079616c7020;
                      *(undefined8 *)((longlong)puVar36 + 0x16) = 0x20736920656c7474;
                      *puVar36 = 0x706c6568;
                      puVar36[1] = 0x74697720;
                      puVar36[2] = 0x616e2068;
                      puVar36[3] = 0x7020656d;
                      pbStack_11f0 = (byte *)0x0;
                      (*pcVar26)(lVar31,puVar41,&local_f18,0x6a,&pbStack_11f0);
                      switchD_0ec75e6c::caseD_ec47f80(puVar36,0x1e,1,1);
                      uStack_1100 = 0x6039c4f399e5b979;
                      local_f18._0_1_ = '\f';
                      local_f18._1_1_ = 0x1c;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      *(undefined8 *)((longlong)&local_f18 + (longlong)puStack_1070) = 0x18;
                      *(ulonglong **)((longlong)&local_f18 + uStack_1060) = &uStack_1100;
                      lVar35 = 0x3d0;
                      if (_DAT_0ecc7c70 == uVar57 + 0x18d14dcd) {
                        lVar35 = 0x494;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0x2bd:
                        FUN_0ecae4d7(0xecc7c58,&local_f18);
                      }
                      FUN_0ec7473d(&pbStack_11f0,_DAT_0ecc7c58,_DAT_0ecc7c68);
                      pbVar10 = pbStack_11f0;
                      uStack_1100 = uStack_1078;
                      local_f18._0_1_ = -0x4a;
                      local_f18._1_1_ = 0xc;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      uVar45 = (uint)uStack_1078 ^ 0x123c4636;
                      local_f10 = (undefined1)uVar45;
                      uStack_f0f = (undefined1)(uVar45 >> 8);
                      uStack_f0e = (undefined2)(uVar45 >> 0x10);
                      uStack_f0c = 0;
                      uVar9 = 0;
                      uStack_f07 = (undefined1)((ulonglong)&uStack_1100 >> 8);
                      uVar13 = uStack_f07;
                      uStack_f06 = (undefined2)((ulonglong)&uStack_1100 >> 0x10);
                      uVar12 = uStack_f06;
                      uStack_f04 = (undefined4)((ulonglong)&uStack_1100 >> 0x20);
                      uVar69 = uStack_f04;
                      puVar36 = (undefined4 *)&UNK_0ecbab40;
                      if (_DAT_0ecc7d18 != ((uint)uStack_1078 ^ 0x123c4621)) {
                        puVar36 = (undefined4 *)&UNK_0ecba8f8;
                      }
                      local_f08 = uVar9;
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar36) {
                      case 0x414b:
                        FUN_0ecae4d7(0xecc7d00,&local_f18);
                      }
                      FUN_0ec7473d(&local_f18,_DAT_0ecc7d00,_DAT_0ecc7d10);
                      pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                                                 CONCAT22(local_f18._2_2_,
                                                          CONCAT11(local_f18._1_1_,(byte)local_f18))
                                                );
                      uVar45 = -uVar57 + 0x3eda690e;
                      pcVar26 = (code *)FUN_0ec3249d(uVar45,pbVar10,uVar45 ^ 0x34672dc4,pvVar55);
                      switchD_0ec75e6c::caseD_ec47f80
                                (pvVar55,CONCAT44(uStack_f0c,
                                                  CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10)
                                                          )),1,1);
                      switchD_0ec75e6c::caseD_ec47f80(pbStack_11f0,(longlong)puStack_11e8,1,1);
                      uStack_1100 = 0xcc0f9f32eb191c3;
                      local_f18._0_1_ = -0x4c;
                      local_f18._1_1_ = 0x18;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      iVar40 = -uVar57 + -0x18d14db5;
                      local_f10 = (undefined1)iVar40;
                      uStack_f0f = (undefined1)((uint)iVar40 >> 8);
                      uStack_f0e = (undefined2)((uint)iVar40 >> 0x10);
                      uStack_f0c = 0;
                      lVar35 = 4;
                      if (_DAT_0ecc6d98 == 0) {
                        lVar35 = 0x2d8;
                      }
                      local_f08 = uVar9;
                      uStack_f07 = uVar13;
                      uStack_f06 = uVar12;
                      uStack_f04 = uVar69;
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0xfffffd8f:
                        FUN_0ecae4d7(0xecc6d80,&local_f18);
                      }
                      FUN_0ec7473d(&pbStack_11f0,_DAT_0ecc6d80,_DAT_0ecc6d90);
                      pbVar10 = pbStack_11f0;
                      uStack_1100 = uStack_1080;
                      local_f18._0_1_ = 'Z';
                      local_f18._1_1_ = 0x20;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      local_f10 = 0x1f;
                      uStack_f0f = 0;
                      uStack_f0e = 0;
                      uStack_f0c = 0;
                      *(ulonglong **)((longlong)&local_f18 + (longlong)puStack_1178) = &uStack_1100;
                      lVar35 = 0x4c;
                      if (_DAT_0ecc9c70 != (int)uStack_1080 + 0x350f3c8e) {
                        lVar35 = 0x350;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0x26e2:
                        FUN_0ecae4d7(0xecc9c58,&local_f18);
                      }
                      FUN_0ec7473d(&local_f18,_DAT_0ecc9c58,_DAT_0ecc9c68);
                      pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                                                 CONCAT22(local_f18._2_2_,
                                                          CONCAT11(local_f18._1_1_,(byte)local_f18))
                                                );
                      pcStack_1168 = (code *)FUN_0ec3249d(0x57abb6db,pbVar10,uVar57 ^ 0xdd3fa6b3,
                                                          pvVar55);
                      switchD_0ec75e6c::caseD_ec47f80
                                (pvVar55,CONCAT44(uStack_f0c,
                                                  CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10)
                                                          )),1,1);
                      switchD_0ec75e6c::caseD_ec47f80
                                (pbStack_11f0,*(longlong *)((longlong)&pbStack_11f0 + uStack_1068),1
                                 ,1);
                      pbStack_11f0 = (byte *)0x5fb93f1d064ed0d0;
                      local_f18._0_1_ = '{';
                      local_f18._1_1_ = 0x21;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      local_f10 = 0x18;
                      uStack_f0f = 0;
                      uStack_f0e = 0;
                      uStack_f0c = 0;
                      local_f08 = SUB81(&pbStack_11f0,0);
                      uStack_f07 = (undefined1)((ulonglong)&pbStack_11f0 >> 8);
                      uStack_f06 = (undefined2)((ulonglong)&pbStack_11f0 >> 0x10);
                      uStack_f04 = (undefined4)((ulonglong)&pbStack_11f0 >> 0x20);
                      puVar36 = (undefined4 *)&UNK_0ecba804;
                      if (_DAT_0ecca118 == (uVar57 ^ 0xe72eb233)) {
                        puVar36 = (undefined4 *)&UNK_0ecba89c;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar36) {
                      case 0xffffffdb:
                        FUN_0ecae4d7(0xecca100,&local_f18);
                      }
                      FUN_0ec7473d(&uStack_1160,_DAT_0ecca100,_DAT_0ecca110);
                      puVar29 = uStack_1160;
                      uStack_fd8 = uStack_10b8;
                      pcStack_1000 = (code *)&UNK_0ecb1ea1;
                      uStack_ff8 = 0x18;
                      puStack_ff0 = &uStack_fd8;
                      lVar35 = 100;
                      if (_DAT_0ecc8478 == 0) {
                        lVar35 = 0x2c4;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0x293d:
                        FUN_0ecae4d7(0xecc8460,&pcStack_1000);
                    /* WARNING: Switch is manually overridden */
                      }
                      FUN_0ec7473d(&local_f18,_DAT_0ecc8460,_DAT_0ecc8470);
                      pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                                                 CONCAT22(local_f18._2_2_,
                                                          CONCAT11(local_f18._1_1_,(byte)local_f18))
                                                );
                      pcVar23 = (code *)FUN_0ec3249d(uVar57 ^ 0xb08504e8,puVar29,0x3a6ef154,pvVar55)
                      ;
                      switchD_0ec75e6c::caseD_ec47f80
                                (pvVar55,CONCAT44(uStack_f0c,
                                                  CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10)
                                                          )),1,1);
                      switchD_0ec75e6c::caseD_ec47f80(uStack_1160,uStack_1158,1,1);
                      pbStack_11f0 = (byte *)0xff2d6b3dd33be2ca;
                      local_f18._0_1_ = -0x29;
                      local_f18._1_1_ = 0x13;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      local_f10 = 0x18;
                      uStack_f0f = 0;
                      uStack_f0e = 0;
                      uStack_f0c = 0;
                      local_f08 = SUB81(&pbStack_11f0,0);
                      uVar9 = local_f08;
                      uStack_f07 = (undefined1)((ulonglong)&pbStack_11f0 >> 8);
                      uVar13 = uStack_f07;
                      uStack_f06 = (undefined2)((ulonglong)&pbStack_11f0 >> 0x10);
                      uVar12 = uStack_f06;
                      uStack_f04 = (undefined4)((ulonglong)&pbStack_11f0 >> 0x20);
                      uVar69 = uStack_f04;
                      lVar35 = 0xec;
                      if (_DAT_0ecc7948 == (uVar57 ^ 0xe72eb233)) {
                        lVar35 = 0x1dc;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0xe0c:
                        FUN_0ecae4d7(0xecc7930,&local_f18);
                      }
                      FUN_0ec7473d(&uStack_1160,_DAT_0ecc7930,_DAT_0ecc7940);
                      puVar29 = uStack_1160;
                      pbStack_11f0 = (byte *)0xf3e842a33bfc211c;
                      local_f18._0_1_ = '5';
                      local_f18._1_1_ = 0x2c;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      iVar40 = -0x18d14db8 - uVar57;
                      local_f10 = (undefined1)iVar40;
                      uStack_f0f = (undefined1)((uint)iVar40 >> 8);
                      uStack_f0e = (undefined2)((uint)iVar40 >> 0x10);
                      uStack_f0c = 0;
                      *(byte ***)
                       ((longlong)&local_f18 +
                       (ulonglong)
                       (((uVar54 ^ 0x14) - uVar62) + ((uint)uVar22 ^ iVar52 * 0x66eb8f41))) =
                           &pbStack_11f0;
                      lVar35 = 0xa8;
                      if (_DAT_0ecc93d0 == 0x15 - iVar40) {
                        lVar35 = 0x2f8;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0x2d44:
                        FUN_0ecae4d7(0xecc93b8,&local_f18);
                      }
                      FUN_0ec7473d(&local_f18,_DAT_0ecc93b8,_DAT_0ecc93c8);
                      pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                                                 CONCAT22(local_f18._2_2_,
                                                          CONCAT11(local_f18._1_1_,(byte)local_f18))
                                                );
                      pcVar25 = (code *)FUN_0ec3249d(0x3eda690e - uVar57,puVar29,-0x4ae269cf,pvVar55
                                                    );
                      switchD_0ec75e6c::caseD_ec47f80
                                (pvVar55,*(longlong *)((longlong)&local_f18 + uStack_1048),1,1);
                      switchD_0ec75e6c::caseD_ec47f80(uStack_1160,uStack_1158,1,1);
                      pbStack_11f0 = (byte *)0x3dcb929cbf336413;
                      local_f18._0_1_ = -0x30;
                      local_f18._1_1_ = 0x27;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      *(undefined8 *)((longlong)&local_f18 + (longlong)(ulonglong)uVar44) = 0x18;
                      *(byte ***)((longlong)&local_f18 + uStack_1038) = &pbStack_11f0;
                      lVar35 = 0x270;
                      if (_DAT_0ecc8238 == 0) {
                        lVar35 = 0x360;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0x17c9:
                        FUN_0ecae4d7(0xecc8220,&local_f18);
                      }
                      FUN_0ec7473d(&uStack_1160,_DAT_0ecc8220,_DAT_0ecc8230);
                      puVar29 = uStack_1160;
                      pbStack_11f0 = (byte *)0x16e99f9172e4bac7;
                      local_f18._0_1_ = '8';
                      local_f18._1_1_ = 0x60;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      *(undefined8 *)((longlong)&local_f18 + (longlong)puStack_1040) = 0x1a;
                      *(byte ***)((longlong)&local_f18 + (ulonglong)uVar54) = &pbStack_11f0;
                      lVar35 = 0x308;
                      if (_DAT_0ecc6598 == (uVar57 ^ 0xe72eb233)) {
                        lVar35 = 0x2b4;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0x15a6:
                        FUN_0ecae4d7(0xecc6580,&local_f18);
                      }
                      FUN_0ec7473d(&local_f18,_DAT_0ecc6580,_DAT_0ecc6590);
                      pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                                                 CONCAT22(local_f18._2_2_,
                                                          CONCAT11(local_f18._1_1_,(byte)local_f18))
                                                );
                      uVar45 = -uVar57 + 0x7e5def72;
                      pcVar19 = (code *)FUN_0ec3249d(0x57abb6db,puVar29,uVar45,pvVar55);
                      switchD_0ec75e6c::caseD_ec47f80
                                (pvVar55,CONCAT44(uStack_f0c,
                                                  CONCAT22(uStack_f0e,CONCAT11(uStack_f0f,local_f10)
                                                          )),1,1);
                      switchD_0ec75e6c::caseD_ec47f80(uStack_1160,uStack_1158,1,1);
                      pbStack_11f0 = (byte *)0x430920a52e1138cb;
                      local_f18._0_1_ = 'J';
                      local_f18._1_1_ = 0x69;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      *(ulonglong *)((longlong)&local_f18 + uStack_10d0) =
                           (ulonglong)(-uVar57 + 0xe72eb24b);
                      lVar35 = 0x3e4;
                      if (_DAT_0ecc94d8 != -0x68d0c2c1 - uVar45) {
                        lVar35 = 0x280;
                      }
                      local_f08 = uVar9;
                      uStack_f07 = uVar13;
                      uStack_f06 = uVar12;
                      uStack_f04 = uVar69;
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                      case 0xd69:
                        FUN_0ecae4d7(0xecc94c0,&local_f18);
                      }
                      FUN_0ec7473d(&uStack_1160,_DAT_0ecc94c0,_DAT_0ecc94d0);
                      puVar29 = uStack_1160;
                      pbStack_11f0 = (byte *)0xb6bd6607d5be127f;
                      local_f18._0_1_ = 0xaf;
                      local_f18._1_1_ = 0x29;
                      local_f18._2_2_ = 0xecb;
                      local_f18._4_4_ = 0;
                      uVar53 = uVar57 ^ 0xe72eb22c;
                      *(ulonglong *)((longlong)&local_f18 + (longlong)pcStack_11a0) =
                           (ulonglong)uVar53;
                      puVar36 = (undefined4 *)&UNK_0ecbaa1c;
                      if (_DAT_0ecca1d8 == 0) {
                        puVar36 = (undefined4 *)&UNK_0ecba84c;
                      }
                      local_f08 = uVar9;
                      uStack_f07 = uVar13;
                      uStack_f06 = uVar12;
                      uStack_f04 = uVar69;
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar36) {
                      case 0x239e:
                        FUN_0ecae4d7(0xecca1c0,&local_f18);
                      }
                      FUN_0ec7473d(&local_f18,_DAT_0ecca1c0,_DAT_0ecca1d0);
                      pvVar55 = (LPVOID)CONCAT44(local_f18._4_4_,
                                                 CONCAT22(local_f18._2_2_,
                                                          CONCAT11(local_f18._1_1_,(byte)local_f18))
                                                );
                      pcStack_1188 = (code *)FUN_0ec3249d(0x57abb6db,puVar29,0x3a58c4d4,pvVar55);
                      switchD_0ec75e6c::caseD_ec47f80
                                (pvVar55,*(longlong *)((longlong)&local_f18 + uStack_10b0),1,1);
                      switchD_0ec75e6c::caseD_ec47f80
                                (uStack_1160,*(longlong *)((longlong)&uStack_1160 + uStack_10c8),1,1
                                );
                      lVar35 = 0x204;
                      if (pcStack_10a8 != pcStack_1050) {
                        lVar35 = 0x39c;
                      }
                    }
                    ppcVar56 = ppcStack_11d8;
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
                    case 0xfffff554:
                      goto override_jmp_0ec4dc17_case_0;
                    }
                    goto override_jmp_0ec4df24_case_1;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar36) {
                  case 0x4175:
                    goto override_jmp_0ec4df24_case_1;
                  }
                } while( true );
              }
            }
override_jmp_0ec4df24_case_1:
            cStack_a19 = '\0';
            lVar35 = 0x334;
            if (pcVar28 == pcVar24) {
              lVar35 = 0x2a4;
            }
            uVar50 = (ulonglong)uStack_117c;
            iVar40 = (int)uStack_11d0;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
            case 0x4c54:
              goto override_jmp_0ec4fc74_case_1;
            }
            break;
          case 0xffffffc2:
override_jmp_0ec4b840_case_1:
            lVar35 = 0x334;
            if (pcVar28 == pcVar24) {
              lVar35 = 0x2a4;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
            case 0x4c54:
              goto override_jmp_0ec4fc74_case_1;
            }
          }
override_jmp_0ec4fc74_case_0:
          uVar21 = uVar50;
        } while( true );
      }
      (*(code *)ppcStack_11b0)(lVar31,puVar41,0,0x8000);
                    /* WARNING: Switch is manually overridden */
      break;
    case true:
      puVar20 = FUN_0ec99abe(0,(ulonglong)(0xe72eb23d - uVar57));
      if (puVar20 == (undefined8 *)0x0) {
override_jmp_0ec50784_case_0:
override_jmp_0ec4be5f_case_0:
                    /* WARNING: Does not return */
        pcVar28 = (code *)invalidInstructionException();
        (*pcVar28)();
      }
      *puVar20 = 0x776c61207473756a;
      *(undefined2 *)(puVar20 + 1) = 0x7961;
      local_f18._0_1_ = (byte)puVar20;
      local_f18._1_1_ = (undefined1)((ulonglong)puVar20 >> 8);
      local_f18._2_2_ = (undefined2)((ulonglong)puVar20 >> 0x10);
      local_f18._4_4_ = (undefined4)((ulonglong)puVar20 >> 0x20);
      local_f10 = 10;
      uStack_f0f = 0;
      uStack_f0e = 0;
      uStack_f0c = 0;
      local_f08 = 10;
      uStack_f07 = 0;
      uStack_f06 = 0;
      uStack_f04 = 0;
      local_9f8 = (char *)&local_f18;
      switchD_0ec75e6c::caseD_ec47f80(puVar20,10,1,1);
    }
    pcVar28 = pcStack_1198;
    local_10f8[1] = (longlong)puVar5 + 0x1802804818d14dcb;
    switchD_0ec75e6c::caseD_ec47f80
              (ppcStack_11d8,(longlong)pcStack_10e0,4,
               (ulonglong)(2 - (int)((longlong)puVar5 + 0x1802804818d14dcb)));
    puVar41 = puStack_11a8;
  }
  switchD_0ec75e6c::caseD_ec47f80(pcVar28,(longlong)puVar41,8,0x10);
                    /* WARNING: Switch is manually overridden */
override_jmp_0ec4d5b9_case_0:
  FUN_0ec62ccd(alStack_f38);
  return;
  do {
    pbVar32 = pbVar37;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x45c6:
override_jmp_0ec4e079_case_0:
      bVar61 = (byte)(uVar57 + 0x18d14de5);
      pbVar37 = pbVar32 + 0x30;
      lVar35 = 0x25c;
      if (pbVar32[uVar57 + 0x18d14de5] != (bVar61 ^ 0xe7)) {
        lVar35 = 0x380;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
      case 0x25ab:
        puVar36 = (undefined4 *)&UNK_0ecbaa6c;
        if (pbVar37 != pbVar18) {
          puVar36 = (undefined4 *)&UNK_0ecba7d4;
        }
        pbVar32 = pbVar37;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar36) {
        case 0x4755:
          goto override_jmp_0ec4e079_case_1;
        }
        break;
      case 0x43b6:
        uVar22 = *(undefined8 *)(pbVar32 + 0x20);
        *(byte *)puStack_1218 = pbVar32[uVar57 + 0x18d14de5];
        *(undefined8 *)((longlong)puStack_1218 + (ulonglong)(byte)(bVar61 - 0x10)) = uVar22;
        puStack_1218 = (ulonglong *)((longlong)puStack_1218 + 0x10);
        puVar36 = (undefined4 *)&UNK_0ecbaa6c;
        if (pbVar37 != pbVar18) {
          puVar36 = (undefined4 *)&UNK_0ecba7d4;
        }
      }
      break;
    case 0x4755:
      goto override_jmp_0ec4e079_case_1;
    }
  } while( true );
override_jmp_0ec4e079_case_1:
  uVar65 = (longlong)puStack_1218 - (longlong)pbStack_11f0;
  uVar50 = uVar65 >> 4;
  lVar35 = (longlong)puStack_11e8 * 3;
  FUN_0ec538fc((longlong *)&pvStack_1128);
  switchD_0ec75e6c::caseD_ec47f80
            (puStack_11c8,*(longlong *)((longlong)&puStack_11c8 + uStack_1170),8,8);
  uVar21 = *puVar41;
  uStack_11d0 = uVar21;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecb8080 + (ulonglong)((longlong)puStack_1098 - uVar21 < uVar50) * 4))
  {
  case 0xfff93f16:
    puVar41 = puStack_1178;
    if (puStack_1218 != (ulonglong *)pbVar10) goto LAB_0ec4c059;
    break;
  case 0xfff97fa8:
    in_stack_ffffffffffffed88 = (LPVOID *)0x0;
    lVar33 = FUN_0ec3833d(&pcStack_10a0,uVar21,uVar50,(undefined8 *)&DAT_00000008,0x10);
    puVar36 = (undefined4 *)&UNK_0ecba8d4;
    if (lVar33 == -1) {
      puVar36 = (undefined4 *)&UNK_0ecba88c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x53b:
      if ((*local_1088 == 0x2b777194) &&
         (hFile = GetStdHandle(0xfffffff4), ((longlong)hFile + 1U & 0xfffffffffffffffe) != 0)) {
        GetFileType(hFile);
        GetConsoleMode(hFile,(LPDWORD)&local_f18);
        GetNumberOfConsoleInputEvents(hFile,(LPDWORD)&local_f18);
      }
      uVar21 = *puStack_1178;
      break;
    case 0xffffffc0:
      goto override_jmp_0ec4be5f_case_0;
    }
LAB_0ec4c059:
    puVar41 = puStack_1178;
    FUN_0ecacfd0((undefined8 *)(pcStack_10a0 + uVar21 * 0x10),(undefined8 *)pbVar10,uVar65);
  }
  *puVar41 = uVar50 + uVar21;
  switchD_0ec75e6c::caseD_ec47f80(pbVar10,lVar35,8,0x10);
  puVar36 = (undefined4 *)&UNK_0ecba7a4;
  if (ppcVar46 != (code **)((ulonglong)uStack_1190 & 0xffffffff)) {
    puVar36 = (undefined4 *)&UNK_0ecba96c;
  }
  uStack_11d0 = (ulonglong)pcStack_1268;
  puStack_1218 = puStack_1208;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar36) {
  case 0x192c:
    goto override_jmp_0ec4c112_case_1;
  }
  goto override_jmp_0ec4c112_case_0;
override_jmp_0ec4d3ff_case_0:
  uVar21 = *puStack_1178;
  uVar50 = 0xeffd7fb7e72eb233 - (longlong)puVar5;
                    /* WARNING: Switch is manually overridden */
  switch(-(uint)(uVar21 == 0)) {
  case 0:
    if (uVar21 != 1) {
      lVar35 = 0x374;
      if (uVar21 < 0x15) {
        lVar35 = 0x3ec;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
      case 0x45e:
        FUN_0ec3fb0d((undefined8 *)pcStack_10a0,uVar21);
        break;
      case 0x5118:
        pcVar28 = pcStack_10a0 + 0x10;
        uVar50 = *(ulonglong *)(pcStack_10a0 + 0x18);
        lVar35 = -0x1802804818d14dd5 - (longlong)puVar5;
        puVar36 = (undefined4 *)&UNK_0ecbabbc;
        if (*(ulonglong *)(pcVar28 + lVar35) <= uVar50) {
          puVar36 = (undefined4 *)&UNK_0ecbab90;
        }
        lVar33 = 0x10;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar36) {
        case 0x1b08:
          goto override_jmp_0ec4e6f7_case_1;
        }
override_jmp_0ec4e6f7_case_0:
        pcVar28 = pcVar28 + 0x10;
        lVar59 = 800;
        if (pcVar28 == pcStack_10a0 + uVar21 * (0xe72eb243 - uVar57)) {
          lVar59 = 0x100;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecba780 + lVar59)) {
        case 0x2c2c:
          do {
            lVar33 = lVar33 + 0x10;
            uVar50 = *(ulonglong *)(pcVar28 + 8);
            puVar36 = (undefined4 *)&UNK_0ecbabbc;
            if (*(ulonglong *)(pcVar28 + lVar35) <= uVar50) {
              puVar36 = (undefined4 *)&UNK_0ecbab90;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar36) {
            case 0x1b08:
override_jmp_0ec4e6f7_case_1:
              cVar1 = *pcVar28;
              pcVar24 = pcStack_10a0 + lVar33;
              uVar22 = *(undefined8 *)(pcStack_10a0 + lVar33 + -0x10 + 8);
              *(undefined8 *)(pcStack_10a0 + lVar33) =
                   *(undefined8 *)(pcStack_10a0 + lVar33 + -0x10);
              *(undefined8 *)(pcStack_10a0 + lVar33 + 8) = uVar22;
              lVar59 = 0xfc;
              if (lVar33 == 0x10) {
                lVar59 = 0x5c;
              }
              lVar60 = lVar33;
              pcVar26 = pcStack_10a0;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecba780 + lVar59)) {
              case 0x2cc8:
                do {
                  if (*(ulonglong *)(pcStack_10a0 + lVar60 + -0x18) <= uVar50) {
                    pcVar26 = pcStack_10a0 + lVar60 + -0x10;
                    /* WARNING: Switch is manually overridden */
                    goto override_jmp_0ec4b17b_case_0;
                  }
                  lVar59 = lVar60 + -0x10;
                  pcVar24 = pcStack_10a0 + lVar59;
                  uVar22 = *(undefined8 *)(pcStack_10a0 + lVar60 + -0x20 + 8);
                  lVar63 = 0xfc;
                  if (lVar59 == 0x10) {
                    lVar63 = 0x5c;
                  }
                  *(undefined8 *)(pcStack_10a0 + lVar59) =
                       *(undefined8 *)(pcStack_10a0 + lVar60 + -0x20);
                  *(undefined8 *)(pcStack_10a0 + lVar59 + 8) = uVar22;
                  lVar60 = lVar59;
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)(&UNK_0ecba780 + lVar63)) {
                  case 0xfffff5b8:
                    goto override_jmp_0ec4b17b_case_0;
                  }
                } while( true );
              case 0xfffff5b8:
override_jmp_0ec4b17b_case_0:
                *pcVar26 = cVar1;
                pcVar28 = pcVar28 + 0x10;
                lVar59 = 800;
                if (pcVar28 == pcStack_10a0 + uVar21 * (0xe72eb243 - uVar57)) {
                  lVar59 = 0x100;
                }
              }
              *(ulonglong *)(pcVar24 + lVar35) = uVar50;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecba780 + lVar59)) {
              case 0x463:
                goto override_jmp_0ec4b09d_case_0;
              }
              break;
            case 0xfffffe8e:
              goto override_jmp_0ec4e6f7_case_0;
            }
          } while( true );
        }
      }
    }
override_jmp_0ec4b09d_case_0:
    FUN_0ec7f188((longlong *)&pcStack_10a0);
    puVar41 = puStack_1098;
    pcVar28 = pcStack_10a0;
    uVar21 = *puStack_1178;
    switchD_0ec75e6c::caseD_ec47f80(uStack_1160,uStack_1158,8,(ulonglong)(0xe72eb243 - uVar57));
    pcStack_1198 = pcVar28;
                    /* WARNING: Switch is manually overridden */
    break;
  case 0xffffffff:
    pvStack_1258 = (LPVOID)uStack_1158;
    puStack_1220 = uStack_1160;
    puVar29 = uStack_1160 + uStack_1150 * 2;
                    /* WARNING: Switch is manually overridden */
    switch(uStack_1150 == (uVar57 ^ 0xe72eb233)) {
    case false:
      uVar62 = uStack_1020 - (int)uVar50 ^ ~local_101c ^ uStack_1024;
      puVar34 = uStack_1160;
      do {
        puVar64 = (ulonglong *)((ulonglong)local_1008 + (longlong)puVar34);
        lVar35 = 0x3d4;
        if (*puVar34 <= (ulonglong)(0x2f - local_1008)) {
          lVar35 = 0x118;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
        case 0x14d4:
          lVar35 = 0x2b8;
          if (puVar64 == puVar29) {
            lVar35 = 300;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
          case 0xfffffb68:
            goto override_jmp_0ec4cf9e_case_0;
          }
          break;
        case 0xfffff645:
          FUN_0ec3871d(&local_f18,lVar31,*puVar34 + (longlong)puVar5 + 0x1802804818d14dad,uVar50);
          cVar1 = uStack_f00._0_1_;
          puVar36 = (undefined4 *)&UNK_0ecbab20;
          if ((byte)((byte)((longlong)puVar5 + 0x1802804818d14dad) ^ 0x1d) < (byte)uStack_f00._0_1_)
          {
            puVar36 = (undefined4 *)&UNK_0ecba978;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar36) {
          case 0x2e75:
            lVar35 = 0x2b8;
            if (puVar64 == puVar29) {
              lVar35 = 300;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
            case 0xfffffb68:
              goto override_jmp_0ec4cf9e_case_0;
            }
            break;
          case 0x42cc:
            uVar22 = *(undefined8 *)((longlong)&local_f18 + (ulonglong)uVar62);
            puVar34 = (ulonglong *)*puVar41;
            puVar36 = (undefined4 *)&UNK_0ecba8e4;
            if (puVar34 != puStack_1098) {
              puVar36 = (undefined4 *)&UNK_0ecba794;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar36) {
            case 0xfffff3a6:
              FUN_0ec97337(&pcStack_10a0);
            }
            pcStack_10a0[(longlong)puVar34 * 0x10] = cVar1;
            *(undefined8 *)
             (pcStack_10a0 +
             (ulonglong)
             (byte)~((byte)*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                            0x298) ^ 0xc) + (longlong)puVar34 * 0x10) = uVar22;
            *puVar41 = (longlong)puVar34 + 1;
            lVar35 = 300;
            if (puVar64 != puVar29) {
              lVar35 = 0x2b8;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
            case 0xfffffb68:
              goto override_jmp_0ec4cf9e_case_0;
            }
          }
        }
        puVar34 = puVar64;
      } while( true );
    }
    goto override_jmp_0ec4cf9e_case_0;
  }
  goto LAB_0ec4e4f8;
code_r0x0ec4e45a:
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
  case 0xfffff554:
override_jmp_0ec4dc17_case_0:
    ppcVar46 = (code **)((longlong)ppcVar56 +
                        (ulonglong)
                        (~(((uint)*(undefined8 *)
                                   (*(longlong *)
                                     (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                     (ulonglong)_tls_index * 8) + 0x340) ^ local_113a - uVar53) *
                          uVar53) & 0xffff));
    lVar35 = (*pcVar25)(0x1a,0,*(undefined4 *)ppcVar56);
    puVar36 = (undefined4 *)&UNK_0ecbaa18;
    if (lVar35 != 0) {
      puVar36 = (undefined4 *)&UNK_0ecba7a0;
    }
    ppcVar56 = ppcVar46;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0x3ac8:
      iVar40 = (*pcVar19)(lVar35);
      lVar33 = 0x48c;
      if (iVar40 == (uVar45 ^ uVar53) +
                    (*(int *)(*(longlong *)
                               (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                             500) * 0x40d1923 - uVar53)) {
        lVar33 = 0xf8;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)(&UNK_0ecba780 + lVar33)) {
      case 0xfffff945:
        FUN_0ecad680((undefined1 (*) [32])&local_9f8,0,0x4d0);
        uStack_9c8 = 0x10000b;
        iVar40 = (*pcStack_1188)(lVar35);
        puVar36 = (undefined4 *)&UNK_0ecbabec;
        if (iVar40 != uVar57 + 0x18d14dcd) {
          puVar36 = (undefined4 *)&UNK_0ecba850;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar36) {
        case 0x15bf:
          (*pcVar23)(lVar35);
                    /* WARNING: Switch is manually overridden */
          break;
        case 0xfffff434:
          FUN_0ecacfd0(&ppcStack_528,(undefined8 *)&local_9f8,0x4d0);
          puStack_900 = puVar41 + 0x40;
          *(ulonglong *)((longlong)&local_9f8 + (longlong)pcStack_1030) =
               *(longlong *)((longlong)&local_9f8 + (longlong)pcStack_1030) +
               ((ulonglong)puVar5 ^ 0x1802804818d14deb) & 0xfffffffffffffff0;
          uVar16 = (*pcStack_1168)(lVar35);
          uVar39 = -(int)((ulonglong)puVar5 ^ 0x1802804818d14deb) - 0x28;
          (*pcVar23)(lVar35);
          puVar36 = (undefined4 *)&UNK_0ecba8a0;
          if (uVar16 != uVar39) {
            puVar36 = (undefined4 *)&UNK_0ecba864;
          }
          uVar50 = 0;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar36) {
          case 0x14ed:
                    /* WARNING: Switch is manually overridden */
            break;
          case 0x4e57:
            do {
              FUN_0ec90fce((undefined1 *)&uStack_1160,lVar31,puVar41);
              puVar36 = (undefined4 *)&UNK_0ecba960;
              if ((char)uStack_1160 == '\0') {
                puVar36 = (undefined4 *)&UNK_0ecbab44;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar36) {
              case 0x132c:
                iVar40 = memcmp((void *)((longlong)&uStack_1160 + 1),&pvStack_1128,
                                (ulonglong)(uVar57 ^ 0xe72eb213));
                puVar36 = (undefined4 *)&UNK_0ecbab44;
                if (iVar40 != 0) {
                  puVar36 = (undefined4 *)&UNK_0ecba99c;
                }
                bVar38 = true;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar36) {
                case 0xfffff508:
                  goto override_jmp_0ec4ce23_case_0;
                }
              }
              uVar50 = uVar50 + 1;
              FUN_0ec90ed7(1000000);
              lVar33 = 0x21c;
              if (uVar50 != (uVar57 ^ 0xe72eb217)) {
                lVar33 = 0xe4;
              }
              bVar38 = false;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)(&UNK_0ecba780 + lVar33)) {
              case 0xfffff508:
                goto override_jmp_0ec4ce23_case_0;
              }
            } while( true );
          }
        }
      }
      (*pcVar26)(lVar35);
      lVar35 = 0x39c;
      if (ppcVar46 == ppcStack_11b0) {
        lVar35 = 0x204;
      }
      goto code_r0x0ec4e45a;
    }
    goto override_jmp_0ec4b069_case_0;
  }
  goto override_jmp_0ec4df24_case_1;
override_jmp_0ec4ce23_case_0:
  uVar16 = (*pcVar19)(lVar35);
                    /* WARNING: Switch is manually overridden */
  switch(uVar16 == ~((uint)local_f90 ^ 0x46f78de7)) {
  case false:
    FUN_0ecacfd0(&local_f18,&ppcStack_528,0x4d0);
    *(uint *)((longlong)&local_f18 + uStack_10e8) = uVar57 ^ 0xe73eb238;
    (*pcStack_1168)(lVar35);
    (*pcVar23)(lVar35);
                    /* WARNING: Switch is manually overridden */
  }
  (*pcVar26)(lVar35);
  puVar36 = (undefined4 *)&UNK_0ecbaa18;
  if (bVar38) {
    puVar36 = (undefined4 *)&UNK_0ecbaa4c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar36) {
  case 0x2143:
override_jmp_0ec4b069_case_0:
    lVar35 = 0x204;
    if (ppcVar46 != ppcStack_11b0) {
      lVar35 = 0x39c;
    }
    break;
  case 0x44a3:
    FUN_0ec90fce(&cStack_a19,lVar31,puVar41);
    puVar36 = (undefined4 *)&UNK_0ecba9c8;
    if (cStack_a19 == '\0') {
      puVar36 = (undefined4 *)&UNK_0ecbaacc;
    }
    iVar40 = (int)uStack_11d0;
    uVar50 = (ulonglong)uStack_117c;
                    /* WARNING: Switch is manually overridden */
    switch(*puVar36) {
    case 0xffffffc2:
      goto override_jmp_0ec4b840_case_1;
    }
    plVar66 = FUN_0ec99abe(0,(ulonglong)(uVar57 ^ 0xe72eb213));
                    /* WARNING: Switch is manually overridden */
    switch(plVar66 != (longlong *)0x0) {
    case false:
      goto override_jmp_0ec4be5f_case_0;
    case true:
      plVar66[2] = lStack_a08;
      plVar66[3] = lStack_a00;
      *plVar66 = lStack_a18;
      plVar66[1] = lStack_a10;
      if (*(ulonglong *)((longlong)pplStack_10c0 + uVar21) !=
          ((ulonglong)puVar5 ^ 0x1802804818d14dcc)) {
        switchD_0ec75e6c::caseD_ec47f80
                  (*pplStack_10c0,*(ulonglong *)((longlong)pplStack_10c0 + uVar21),1,1);
      }
      *pplStack_10c0 = plVar66;
      *(undefined8 *)((longlong)pplStack_10c0 + uVar21) = 0x20;
      *(ulonglong *)((longlong)pplStack_10c0 + (ulonglong)(0xe72eb243 - uVar57)) =
           (ulonglong)(uVar39 ^ uVar57 ^ 0xe72eb213) ^ local_fa8 + 0x8e98d99d74b9a791U;
      lVar35 = 0x334;
      if (pcVar28 == pcVar24) {
        lVar35 = 0x2a4;
      }
    }
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
    case 0x2936:
      goto override_jmp_0ec4fc74_case_0;
    }
    goto override_jmp_0ec4fc74_case_1;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecba780 + lVar35)) {
  case 0x4175:
    goto override_jmp_0ec4df24_case_1;
  }
  goto override_jmp_0ec4dc17_case_0;
override_jmp_0ec4fc74_case_1:
  uVar57 = 0xe72eb232 - uVar57;
  switchD_0ec75e6c::caseD_ec47f80
            (pcStack_1198,(longlong)puStack_11a8,8,(ulonglong)(uVar57 ^ 0xffffffef));
  puVar20 = FUN_0ec99abe(0,(ulonglong)(0x43 - uVar57));
  lVar31 = 0x184;
  if (puVar20 == (undefined8 *)0x0) {
    lVar31 = 0x2fc;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(&UNK_0ecba780 + lVar31)) {
  case 0x495a:
    FUN_0ecacfd0(puVar20,(undefined8 *)&UNK_0ecb3018,0x44);
                    /* WARNING: Switch is manually overridden */
    switch((ulonglong *)((longlong)puVar5 + 0x1802804818d14dcc) != (ulonglong *)aplStack_f80[1] ||
           (lStack_f48 != -1 ||
           *(ulonglong **)((longlong)aplStack_f80 + (longlong)local_1088) !=
           (ulonglong *)((longlong)puVar5 + 0x1802804818d14dcc))) {
    case false:
      local_10f8[1] = (longlong)puVar5 + 0x1802804818d14dcb;
      switchD_0ec75e6c::caseD_ec47f80(puVar20,0x44,1,1);
      FUN_0ec5a0f8((longlong)&puStack_11c8);
      switchD_0ec75e6c::caseD_ec47f80(ppcStack_11d8,(longlong)pcStack_10e0,4,4);
      FUN_0ec62ccd(alStack_f38);
      return;
                    /* WARNING: Switch is manually overridden */
    case true:
      pplVar49 = aplStack_f80;
      puVar47 = local_10f8;
    }
    for (lVar31 = 9; lVar31 != 0; lVar31 = lVar31 + -1) {
      *puVar47 = *pplVar49;
      pplVar49 = pplVar49 + 1;
      puVar47 = puVar47 + 1;
    }
    switchD_0ec75e6c::caseD_ec47f80(puVar20,0x44,1,1);
    FUN_0ec5a0f8((longlong)&puStack_11c8);
    uVar57 = -((local_1018 - uVar57) - iVar40) ^ 0x6d38db36;
    switchD_0ec75e6c::caseD_ec47f80
              (ppcStack_11d8,(longlong)pcStack_10e0,(ulonglong)uVar57,(ulonglong)uVar57);
    goto override_jmp_0ec4d5b9_case_0;
  }
  goto override_jmp_0ec50784_case_0;
}

