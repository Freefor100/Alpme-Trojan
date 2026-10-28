/* ANALYST: Original-byte static decompiler text. The local 4809-instruction CFG reaches a fixed point with 271 resolved computed dispatch sites under normal PE TLS, independently checked helper tags, and the seven exact 8-byte phase lifetimes in 17_owned_phase_gate_proof.json. The lifetime proof explicitly requires valid, disjoint owned Vec/BTree/ReadDir Arc objects and bounded callee output ABI. The original indirect CALL remains; its actual ReadDir Err lowtag2 context bypasses the tag1 callback. This is not a proof of all transitive parser/helper semantics. Decompiler diagnostics are retained; no specimen code is executed. */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Removing unreachable block (ram,0x08fe0a66) */
/* WARNING: Removing unreachable block (ram,0x08fdce1a) */
/* WARNING: Removing unreachable block (ram,0x08fde1dd) */
/* WARNING: Removing unreachable block (ram,0x08fdfc11) */
/* WARNING: Removing unreachable block (ram,0x08fdce2c) */
/* WARNING: Switch with 1 destination removed at 0x08fdc4a4 */
/* WARNING: Switch with 1 destination removed at 0x08fdd176 */
/* WARNING: Switch with 1 destination removed at 0x08fddd03 */
/* WARNING: Switch with 1 destination removed at 0x08fdec80 */
/* WARNING: Switch with 1 destination removed at 0x08fe070f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08fdb869(longlong *param_1,ulonglong *******param_2,ulonglong *******param_3,
                 ulonglong *******param_4)

{
  ulonglong ******ppppppuVar1;
  char *pcVar2;
  ulonglong *******pppppppuVar3;
  ulonglong uVar4;
  ulonglong ******ppppppuVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined *puVar8;
  ulonglong *puVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  ulonglong *******pppppppuVar13;
  ulonglong *******pppppppuVar14;
  ulonglong uVar15;
  uint *puVar16;
  undefined8 uVar17;
  ulonglong *******pppppppuVar18;
  ulonglong *******pppppppuVar19;
  longlong *plVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  byte bVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  uint *puVar28;
  byte bVar29;
  byte bVar30;
  uint uVar31;
  byte *pbVar32;
  char *pcVar33;
  uint uVar34;
  byte bVar35;
  int iVar36;
  undefined1 *puVar37;
  undefined8 *puVar38;
  undefined1 *puVar39;
  undefined1 *puVar40;
  longlong *plVar41;
  ulonglong *******pppppppuVar42;
  byte bVar43;
  uint uVar44;
  ulonglong _Size;
  ulonglong *******pppppppuVar45;
  undefined1 *puVar46;
  uint uVar47;
  undefined8 *puVar48;
  char *pcVar49;
  ulonglong *******pppppppuVar50;
  ulonglong uVar51;
  ulonglong *******pppppppuVar52;
  ulonglong *******pppppppuVar53;
  ulonglong *******pppppppuVar54;
  ulonglong *******pppppppuVar55;
  uint uVar56;
  uint uVar57;
  longlong lVar58;
  undefined8 *puVar59;
  ulonglong uVar60;
  ulonglong *******pppppppuVar61;
  longlong unaff_GS_OFFSET;
  bool bVar62;
  ulonglong *******local_1ec8;
  uint local_1ec0;
  ulonglong *******local_1eb8;
  LPVOID local_1e90;
  ulonglong *******local_1e80;
  undefined8 *local_1e78;
  ushort local_1e70;
  ushort local_1e6e;
  undefined2 local_1e6c;
  ushort local_1e6a;
  longlong local_1e68 [2];
  undefined8 *local_1e58;
  ulonglong *******local_1e48;
  byte *local_1e40;
  undefined8 local_1e38;
  ulonglong *******local_1e30;
  uint local_1e24;
  undefined8 *local_1e20;
  longlong local_1e18;
  ulonglong uStack_1e10;
  undefined8 *local_1e08;
  ulonglong *******local_1e00;
  ulonglong *******local_1df8;
  longlong local_1df0;
  longlong local_1de8;
  ulonglong *******local_1de0;
  byte *local_1dd8;
  ulonglong local_1dd0;
  longlong *local_1dc8;
  int local_1dbc;
  int local_1db8;
  int local_1db4;
  int local_1db0;
  int local_1dac;
  ulonglong *******local_1da8;
  ulonglong *******pppppppuStack_1da0;
  undefined8 *local_1d98;
  ulonglong *******local_1d88;
  char *local_1d80;
  ulonglong local_1d78;
  ulonglong *******local_1d70;
  ulonglong *******local_1d68;
  LPVOID local_1d60;
  longlong lStack_1d58;
  undefined8 local_1d50;
  ulonglong *******local_1d48;
  ulonglong *******pppppppuStack_1d40;
  ulonglong *******local_1d38;
  ulonglong local_1d28;
  ulonglong uStack_1d20;
  ulonglong local_1d18;
  undefined *local_1d10;
  longlong local_1d08;
  longlong *local_1d00;
  ulonglong *local_1cf8;
  undefined8 *local_1cf0;
  undefined8 *local_1ce8;
  ulonglong local_1ce0;
  ulonglong ******local_1cd8;
  ulonglong ******local_1cd0;
  char *local_1cc8;
  longlong local_1cc0;
  ulonglong local_1cb8;
  ulonglong local_1cb0;
  ulonglong local_1ca8;
  longlong local_1ca0;
  ulonglong local_1c98;
  ulonglong local_1c90;
  ulonglong local_1c88;
  ulonglong local_1c80;
  undefined8 local_1c78;
  undefined8 local_1c70;
  ulonglong local_1c68;
  LPVOID local_1c60;
  ulonglong *******local_1c58;
  longlong local_1c48;
  undefined8 local_1c40;
  ulonglong local_1c38;
  undefined8 local_1c30;
  longlong local_1c28;
  byte *local_1c20 [4];
  LPVOID local_1c00;
  longlong local_1bf8;
  LPVOID local_1be8;
  longlong lStack_1be0;
  undefined8 local_1bd8;
  LPVOID local_1bd0 [3];
  byte *local_1bb8;
  longlong local_1bb0;
  byte *local_1ba8;
  ulonglong *******local_1b98;
  longlong local_1b90;
  ulonglong local_1b88;
  ulonglong *******local_1b80;
  ulonglong *******pppppppuStack_1b78;
  ulonglong *******local_1b70;
  ulonglong *puStack_1b68;
  undefined8 local_1b60;
  undefined8 uStack_1b58;
  char *local_1b50;
  ulonglong local_1b48;
  ulonglong *******local_1b40;
  ulonglong *******local_1b38 [3];
  longlong local_1b20;
  ulonglong *******local_1b18;
  undefined8 *local_1b08;
  longlong local_1b00;
  undefined8 *local_1af0;
  undefined8 *local_1ae0;
  LPVOID local_1ad8;
  longlong local_1ad0;
  undefined8 local_1ac8;
  ulonglong *******local_1ac0;
  LPVOID local_1ab8;
  ulonglong local_1ab0;
  LPVOID local_1aa0;
  longlong local_1a98;
  undefined8 local_1a80;
  longlong local_1a78;
  ulonglong *******local_1a68 [3];
  ulonglong ******local_1a50 [2];
  undefined1 local_1a40;
  undefined7 uStack_1a3f;
  char local_1a27;
  undefined8 *local_17f8 [2];
  ulonglong local_17e8;
  ulonglong *****local_17d8;
  ulonglong *****pppppuStack_17d0;
  undefined8 local_17c8;
  undefined8 uStack_17c0;
  LPVOID local_17b8;
  longlong local_17b0;
  LPVOID local_17a0;
  longlong local_1798;
  ulonglong *******local_1788;
  ulonglong *puStack_1780;
  ulonglong *******local_1778;
  ulonglong *puStack_1770;
  undefined8 local_1768;
  undefined8 uStack_1760;
  undefined8 local_1530 [78];
  ulonglong local_12c0;
  ulonglong *******local_12b8;
  ulonglong *******local_12b0;
  undefined8 local_12a8;
  ulonglong *******local_1298;
  ulonglong *******local_1290;
  undefined8 local_1288;
  ulonglong *******local_1278;
  ulonglong *******pppppppuStack_1270;
  ulonglong *******local_1268;
  ulonglong *******local_1260;
  undefined8 local_1258;
  ulonglong *******local_1250;
  ulonglong *******local_1248;
  undefined8 local_1240;
  LPVOID local_1238;
  undefined8 uStack_1230;
  undefined8 local_1228;
  LPVOID local_1208;
  longlong lStack_1200;
  undefined8 local_11f8;
  undefined8 local_1018;
  undefined8 local_1010;
  ulonglong *******local_1008;
  undefined8 local_1000 [73];
  uint local_db8 [8];
  ulonglong *******local_d98;
  undefined8 local_d90 [78];
  ulonglong *******local_b20 [2];
  ulonglong ******local_b10 [3];
  uint local_af4;
  undefined8 local_8c8 [3];
  LPVOID local_8b0;
  longlong local_8a8;
  ulonglong *******local_8a0;
  ulonglong ******local_640;
  longlong local_638;
  undefined8 local_3f8 [7];
  longlong local_3c0;
  ulonglong ******local_2c8 [80];
  undefined8 uStack_48;
  
  uStack_48 = 0x8fdb87f;
  local_1dc8 = param_1;
  local_1d88 = param_4;
  ANALYST_constant_init();
  local_1c28 = -2;
  local_1dbc = -0x3ba36320;
  local_1e6e = 0xf0f5;
  local_1e6a = 0x4d66;
  local_1c48 = 0xb;
  local_1c68 = 0xaf9a7113209c75c0;
  local_1c38 = 0x37;
  local_1c78 = 0x5a74baa7a4d0c471;
  local_1c40 = 0x362b462c5aeac2ca;
  local_1db0 = -0x5d990d1;
  local_1c30 = 0xb419ab91662803b9;
  local_1e6c = 0xa6a3;
  local_1dac = 0x10;
  local_1db4 = 0x466d686;
  local_1e70 = 0xd7a4;
  local_1c80 = 0xffffffffffffffa3;
  local_1db8 = 0x22;
  lVar27 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
  pppppppuVar3 = *(ulonglong ********)(lVar27 + 0x260);
  local_1c70 = 0xb5d9b6e8fc3fdbca;
  local_2c8[0] = (ulonglong ******)
                 (((*(ulonglong *)(lVar27 + 0x238) ^ 0xb5d9b6e8fc3fdbca) + 0x1853e912c0b68ebb) *
                 0x4a739efcbc7f516f);
  local_1278 = (ulonglong *******)&UNK_08ff6885;
  pppppppuStack_1270 = (ulonglong *******)&DAT_0000000c;
  lVar26 = 0x20;
  if (DAT_09009400 == ((uint)*(ushort *)(lVar27 + 0x1f2) * (int)local_2c8[0] & 0xffff)) {
    lVar26 = 0x1cc;
  }
  local_1268 = local_2c8;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar26)) {
  case 0x3d28:
    FUN_08fef46f(0x90093e8,&local_1278);
  }
  FUN_08fa7c6e(&local_1788,DAT_090093e8,DAT_090093f8);
  local_1e00 = param_2;
  local_1df8 = param_3;
  FUN_08f9eb17(&local_1278,param_2,(ulonglong)param_3,&local_1788);
  pppppppuVar53 = local_1278;
  uVar34 = (uint)pppppppuVar3;
  uVar60 = *(ulonglong *)((longlong)&local_1278 + (ulonglong)(-uVar34 + 0x209c75f5));
  local_2c8[0] = (ulonglong ******)0xca61cca6f806868d;
  local_1788 = (ulonglong *******)&UNK_08ff86d9;
  puStack_1780 = (ulonglong *)&DAT_0000000c;
  iVar36 = -uVar34 + 0x209c75e5;
  puVar28 = &switchD_08fe023b::switchdataD_08ffae80;
  if (DAT_090095a8 == iVar36) {
    puVar28 = &switchD_08fe023b::switchdataD_08ffaea8;
  }
  local_1778 = local_2c8;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar28) {
  case 0x1630:
    FUN_08fef46f(0x9009590,&local_1788);
  }
  FUN_08fa7c6e(&local_1788,DAT_09009590,DAT_090095a0);
  FUN_08f9eb17(local_17f8,pppppppuVar53,uVar60,&local_1788);
  FUN_08fba6b1(local_1278,(longlong)pppppppuStack_1270,1,1);
  FUN_08fc06ee(&local_1278,local_17f8[0],local_17e8);
  lVar27 = 0xcc;
  if ((uint)local_1278 == (uVar34 ^ 0x209c75e7)) {
    lVar27 = 0x3c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
  case 0x4417:
    local_8a8 = *(longlong *)((longlong)&local_1278 + (ulonglong)(uVar34 + 0xdf638a23));
    local_8b0 = (LPVOID)0x2;
                    /* WARNING: Switch is manually overridden */
switchD_08fe0ca7_caseD_2e8:
    FUN_08fabfab((int *)&local_8b0);
                    /* WARNING: Switch is manually overridden */
    goto override_jmp_08fdedd9_case_0;
  case 0xfffff932:
    FUN_08fee630(&local_8b0,&local_1278,0x270);
    uVar57 = uVar34 + 0xdf638a1d;
    puVar28 = &UINT_08ffaff8;
    if (local_8b0 == (LPVOID)(ulonglong)uVar57) {
      puVar28 = &switchD_08fe023b::switchdataD_08ffaf30;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar28) {
    case 0x2bd8:
      FUN_08fee630(local_2c8,&local_8b0,0x270);
      local_1788 = (ulonglong *******)0x8d9c275dd0b3ffb;
      local_1278 = (ulonglong *******)&UNK_08ff6398;
      pppppppuStack_1270 = (ulonglong *******)&DAT_00000018;
      *(ulonglong *********)((longlong)&local_1278 + (ulonglong)(uVar34 ^ 0x209c75f5)) = &local_1788
      ;
                    /* WARNING: Switch is manually overridden */
      switch(DAT_09009bd0 != (byte)(((char)iVar36 - (byte)uVar57 ^ 0xa0) * 'O' ^ (byte)uVar57)) {
      case true:
        FUN_08fef46f(0x9009bb8,&local_1278);
                    /* WARNING: Switch is manually overridden */
      }
      FUN_08fa7c6e(&local_8b0,DAT_09009bb8,DAT_09009bc8);
      local_1d68 = (ulonglong *******)0x0;
      local_1d78 = 0;
      FUN_08fee630(local_1530,local_2c8,0x270);
      FUN_08fee630(&local_1010,&local_1788,0x4c8);
      local_1278 = (ulonglong *******)0x0;
      local_1018 = 0;
      lVar27 = 0x4c;
      if (local_db8[0] == 2) {
        lVar27 = 0x10c;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
      case 0x25b:
        uVar12 = uVar34 + 0xdf638a23;
        uVar31 = 0x10 - uVar12;
        lVar27 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
        local_1e30 = (ulonglong *******)(ulonglong)(byte)-(*(char *)(lVar27 + 0x221) - (char)uVar31)
        ;
        uVar51 = (ulonglong)(local_1db8 + uVar57 + uVar12);
        local_1dd0 = ~local_1c80 - uVar51;
        uVar60 = (ulonglong)(uVar12 ^ 0x30);
        uVar15 = (ulonglong)
                 ((((uint)*(undefined8 *)(lVar27 + 0x2c8) ^ (uint)local_1e70) +
                  (uVar34 ^ 0x209c75f5)) - 0x7986 & 0xffff);
        local_1e38 = 1;
switchD_08fdba6e_caseD_1d4:
        do {
          puVar28 = &switchD_08fdba6e::switchdataD_08ffac48;
          FUN_08fba0d2(&local_1788,(char *)local_db8);
          pppppppuVar53 = local_1778;
          puVar16 = &UINT_08ffaf44;
          if ((uint)local_1788 == (uVar34 ^ 0x209c75e5)) {
            puVar16 = &switchD_08fe023b::switchdataD_08ffac90;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar16) {
          case 0x3dec:
            lVar27 = 0x3d4;
            if (local_db8[0] == 0x209c75e7 - uVar34) {
              lVar27 = 400;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0x2f55:
              FUN_08f75ac0((char *)local_db8);
            }
            local_db8[0] = 2;
            local_db8[1] = 0;
            goto switchD_08fdba6e_caseD_10c;
          case 0x480b:
            pppppppuVar52 = *(ulonglong ********)((longlong)&local_1788 + (ulonglong)uVar12);
            FUN_08fee630(local_1a68,&puStack_1770,0x248);
            puVar16 = &UINT_08ffaf1c;
            if (pppppppuVar52 != (ulonglong *******)0x0) {
              puVar16 = &UINT_08ffaf94;
            }
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar16) {
          case 0x1797:
                    /* WARNING: Switch is manually overridden */
            switch((uint)pppppppuVar53 & 3) {
            case 1:
              (**(code **)((longlong)pppppppuVar53 + 7))
                        ((undefined1 *)((longlong)pppppppuVar53 + -1));
              break;
            case 3:
            }
            puVar28 = &UINT_08ffad54;
            if (local_db8[0] !=
                (byte)(((char)(uVar34 ^ 0x209c75e5) * -2 + 'Z' + (char)(0x20 - uVar12) * -2) * -0x43
                      )) {
              puVar28 = &UINT_08ffae1c;
            }
            break;
          case 0xfffff792:
            *(ulonglong ********)((longlong)&local_1788 + (ulonglong)uVar31) = pppppppuVar53;
            FUN_08fee630(&local_1778,local_1a68,0x248);
            local_1788 = pppppppuVar52;
            FUN_08f9b598(&local_1bb8,(longlong *)&local_1788);
            local_1e40 = local_1bb8;
            local_1dd8 = local_1ba8;
            pbVar21 = local_1ba8;
            lVar27 = FUN_08fabfd3(local_1bb8,local_1ba8);
            puVar16 = &UINT_08ffadbc;
            if (lVar27 == 0) {
              puVar16 = &UINT_08ffb040;
            }
            pppppppuVar19 = (ulonglong *******)local_1a68;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar16) {
            case 0x2a63:
              FUN_08fc0046(local_1a68,lVar27,(ulonglong)pbVar21);
              pppppppuVar18 = local_8a0;
              puVar22 = *(undefined8 **)((longlong)local_1a68 + (ulonglong)uVar31);
              lVar27 = 0x3f8;
              if ((char)local_1a68[0] == '\0') {
                lVar27 = 0x288;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0x327c:
                lVar27 = 0x3f8;
                if (((ulonglong)pppppppuVar53 & 0x10) != 0) {
                  lVar27 = 0x37c;
                }
                lVar26 = lVar27;
                if ((uStack_1760._4_4_ >> 0x1d & 1) != 0) {
                  lVar26 = 0x3f8;
                }
                uVar57 = (uint)pppppppuVar53 & (uVar34 ^ 0x209c71e5);
                pppppppuVar53 = (ulonglong *******)(ulonglong)uVar57;
                if (uVar57 == (uVar34 ^ 0x209c75e5)) {
                  lVar26 = lVar27;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar26))
                {
                case 0x38ee:
                  puVar16 = &UINT_08ffb040;
                  pppppppuVar53 = (ulonglong *******)((longlong)local_1a68[2] - (longlong)local_8a0)
                  ;
                  if (local_8a0 <= local_1a68[2]) {
                    puVar16 = &UINT_08ffaccc;
                  }
                  pppppppuVar19 = pppppppuVar18;
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar16) {
                  case 0x966:
                    pppppppuVar45 = local_8a0;
                    local_1e78 = puVar22;
                    local_1de0 = local_1a68[2];
                    iVar36 = memcmp(local_8b0,puVar22,(size_t)local_8a0);
                    puVar16 = &UINT_08ffad3c;
                    if (iVar36 != ~((int)DAT_0900bc90 + 0x7e462a8cU) * 0x2d263193) {
                      puVar16 = &UINT_08ffb040;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar16) {
                    case 0x2322:
                      puVar28 = &switchD_08fe023b::switchdataD_08ffacb8;
                      if (pppppppuVar18 != (ulonglong *******)(ulonglong)~(uVar34 + 0xdf638a1a)) {
                        puVar28 = &UINT_08ffb02c;
                      }
                      local_1e48 = pppppppuVar53;
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar28) {
                      case 2:
                        puVar28 = &UINT_08ffae24;
                        if (pppppppuVar18 < local_1de0) {
                          puVar28 = &UINT_08ffb008;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar28) {
                        case 0x34e3:
                          lVar27 = 0x70;
                          if (*(char *)((longlong)local_1e78 + (longlong)pppppppuVar18) < -0x40) {
                            lVar27 = 0x354;
                          }
                    /* WARNING: Switch is manually overridden */
                          switch(*(undefined4 *)
                                  ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                          case 0x1f:
switchD_08fe0ca7_caseD_354:
                    /* WARNING: Does not return */
                            pcVar7 = (code *)invalidInstructionException();
                            (*pcVar7)();
                          }
                          break;
                        case 0x36fa:
                          puVar28 = &switchD_08fe023b::switchdataD_08ffacb8;
                          if (local_1de0 != pppppppuVar18) {
                            puVar28 = &UINT_08ffaf9c;
                          }
                    /* WARNING: Switch is manually overridden */
                          switch(*puVar28) {
                          case 0x1f:
                            goto switchD_08fe0ca7_caseD_354;
                          }
                        }
                      }
                      puVar22 = (undefined8 *)((longlong)local_1e78 + (longlong)pppppppuVar18);
                      local_1a68[0] = pppppppuVar53;
                      *(undefined4 *)((longlong)local_1a68 + (ulonglong)uVar31) = 0x5e;
                      local_1a68[2] = (ulonglong *******)0x0;
                      local_1a50[0] = (ulonglong ******)puVar22;
                      *(ulonglong ********)((longlong)local_1a68 + (longlong)local_1e30) =
                           pppppppuVar53;
                      local_1a40 = 1;
                      *(uint *)((longlong)local_1a68 + uVar51) = uVar34 + 0xdf638a79;
                      *(ulonglong ********)((longlong)local_1a68 + local_1dd0) = pppppppuVar53;
                      *(undefined8 *)((longlong)local_1a68 + uVar60) = 0;
                      *(undefined1 *)((longlong)local_1a68 + (ulonglong)(uVar34 + 0xdf638a5b)) = 1;
                      local_1a27 = '\0';
                      FUN_08f8e037(local_b20,
                                   (undefined4 *)((longlong)local_1a68 + (ulonglong)uVar31));
                      lVar27 = 0xa0;
                      if ((char)local_b20[0] != '\0') {
                        lVar27 = 0x19c;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)
                              ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                      case 0x84d:
                        if (local_1a27 == '\0') {
                          lVar27 = 0x2ec;
                          if (*(char *)((longlong)local_1a68 + (ulonglong)(uVar34 + 0xdf638a5b)) !=
                              '\0') {
                            lVar27 = 0x348;
                          }
                    /* WARNING: Switch is manually overridden */
                          switch(*(undefined4 *)
                                  ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                          case 0x26a6:
                            pppppppuVar53 = *(ulonglong ********)((longlong)local_1a68 + uVar60);
                    /* WARNING: Switch is manually overridden */
                            break;
                          case 0x3937:
                            pppppppuVar53 = *(ulonglong ********)((longlong)local_1a68 + uVar60);
                    /* WARNING: Switch is manually overridden */
                            switch(local_1a68[0] != pppppppuVar53) {
                            case false:
                              pppppppuVar45 = local_1a68[0];
                    /* WARNING: Switch is manually overridden */
                              switch(0x8fe0e07) {
                              case 0x8fe0e07:
                                goto switchD_08fe0ca7_caseD_270;
                              }
                              goto switchD_08fe0ca7_caseD_298;
                            }
                          }
                          pppppppuVar45 =
                               (ulonglong *******)
                               ((longlong)local_1a68[0] - (longlong)pppppppuVar53);
                          puVar28 = &switchD_08fe023b::switchdataD_08ffaeb8;
                          if ((undefined8 *)((longlong)pppppppuVar53 + (longlong)local_1a50[0]) !=
                              (undefined8 *)0x0) {
                            puVar28 = &switchD_08fe023b::switchdataD_08ffaee0;
                            puVar22 = (undefined8 *)
                                      ((longlong)pppppppuVar53 + (longlong)local_1a50[0]);
                          }
                    /* WARNING: Switch is manually overridden */
                          switch(*puVar28) {
                          case 0x4853:
                            goto switchD_08fe0ca7_caseD_270;
                          }
                        }
                        else {
                    /* WARNING: Switch is manually overridden */
                          switch(0x8fe0e07) {
                          case 0x8fe0e07:
switchD_08fe0ca7_caseD_270:
                            pppppppuVar45 = local_1e48;
                          }
                        }
                        break;
                      case 0x450e:
                        puVar59 = (undefined8 *)
                                  ((longlong)puVar22 + *(longlong *)((longlong)local_1a68 + uVar60))
                        ;
                        puVar28 = &switchD_08fe023b::switchdataD_08ffaeb8;
                        if (puVar59 != (undefined8 *)0x0) {
                          puVar28 = &switchD_08fe023b::switchdataD_08ffaee0;
                          puVar22 = puVar59;
                        }
                        pppppppuVar45 =
                             (ulonglong *******)
                             ((longlong)local_b20[1] - *(longlong *)((longlong)local_1a68 + uVar60))
                        ;
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar28) {
                        case 0x4853:
                          goto switchD_08fe0ca7_caseD_270;
                        }
                      }
switchD_08fe0ca7_caseD_298:
                      FUN_08fc66b4(local_8c8,puVar22,(ulonglong)pppppppuVar45);
                      FUN_08f9d0ba(local_1a68,(longlong)&local_1d78,local_8c8);
                      lVar27 = 0x15c;
                      if (local_1a68[1] !=
                          (ulonglong *******)(-0x50658eecdf638a1c - (longlong)pppppppuVar3)) {
                        lVar27 = 0x3a8;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)
                              ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                      case 0x213e:
                        local_b20[0] = (ulonglong *******)0x8;
                        local_b20[1] = (ulonglong *******)0x0;
                        local_b10[0] = (ulonglong ******)0x0;
                        pppppppuVar53 = (ulonglong *******)FUN_08f91c4d(local_1a68,local_b20);
                        local_640 = (ulonglong ******)0x2ee7c1dec0c02d1d;
                        local_b20[0] = (ulonglong *******)&UNK_08ff50cc;
                        local_b20[1] = (ulonglong *******)0x7;
                        *(ulonglong ********)((longlong)local_b20 + uVar15) = &local_640;
                        puVar28 = &switchD_08fde5dc::switchdataD_08ffaf60;
                        if (DAT_0900a338 == 0) {
                          puVar28 = &switchD_08fe023b::switchdataD_08ffae18;
                        }
                        pbVar21 = local_1e40;
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar28) {
                        case 0x30f7:
switchD_08fe0ca7_caseD_318:
                          pbVar21 = local_1e40;
                          FUN_08fef46f(0x900a320,local_b20);
                        }
                        break;
                      case 0x332f:
                        pppppppuVar53 =
                             (ulonglong *******)
                             (CONCAT71(uStack_1a3f,local_1a40) +
                              *(longlong *)((longlong)local_1a68 + (ulonglong)(0x20 - uVar12)) *
                              0x18 + 0x108);
                        local_640 = (ulonglong ******)0x2ee7c1dec0c02d1d;
                        local_b20[0] = (ulonglong *******)&UNK_08ff50cc;
                        local_b20[1] = (ulonglong *******)0x7;
                        *(ulonglong ********)((longlong)local_b20 + uVar15) = &local_640;
                        puVar28 = &switchD_08fde5dc::switchdataD_08ffaf60;
                        if (DAT_0900a338 == 0) {
                          puVar28 = &switchD_08fe023b::switchdataD_08ffae18;
                        }
                        pbVar21 = local_1e40;
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar28) {
                        case 0x30f7:
                          goto switchD_08fe0ca7_caseD_318;
                        }
                      }
                      FUN_08fa7c6e(local_1a68,DAT_0900a320,DAT_0900a330);
                      FUN_08f9eb17(&local_17d8,(undefined8 *)pbVar21,(ulonglong)local_1dd8,
                                   local_1a68);
                      pppppppuVar19 = pppppppuVar53 + 2;
                      puVar28 = (uint *)pppppppuVar53[2];
                      lVar27 = 0x60;
                      if ((ulonglong ******)puVar28 !=
                          *(ulonglong *******)
                           ((longlong)pppppppuVar53 + (ulonglong)(uVar34 ^ 0x209c75ed))) {
                        lVar27 = 0xc0;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)
                              ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                      case 0x1731:
                        FUN_08fa6f9e(pppppppuVar53);
                    /* WARNING: Switch is manually overridden */
                      }
                      break;
                    case 0xfffffc4a:
                      goto switchD_08fe0ed2_caseD_3f8;
                    }
                    break;
                  case 0xfffffc4a:
                    goto switchD_08fe0ed2_caseD_3f8;
                  }
                  break;
                case 0xfffffc4a:
                  goto switchD_08fe0ed2_caseD_3f8;
                }
                break;
              case 0xfffffc4a:
                goto switchD_08fe0ed2_caseD_3f8;
              }
switchD_08fdba6e_caseD_c0:
              ppppppuVar5 = *pppppppuVar53;
              lVar27 = (ulonglong)(uVar34 + 0xdf638a3b) * (longlong)puVar28;
              ppppppuVar1 = (ulonglong ******)((longlong)ppppppuVar5 + lVar27);
              *ppppppuVar1 = local_17d8;
              ppppppuVar1[1] = pppppuStack_17d0;
              puVar22 = (undefined8 *)((longlong)ppppppuVar5 + lVar27 + 0x10);
              *puVar22 = local_17c8;
              puVar22[1] = uStack_17c0;
              *pppppppuVar19 = (ulonglong ******)((longlong)puVar28 + 1);
              FUN_08fba6b1(local_1bb8,local_1bb0,1,1);
              LOCK();
              *pppppppuVar52 = (ulonglong ******)((longlong)*pppppppuVar52 - 1);
              UNLOCK();
                    /* WARNING: Switch is manually overridden */
              switch(*pppppppuVar52 == (ulonglong ******)0x0) {
              case false:
switchD_08fdbd44_caseD_0:
                lVar27 = 0x10c;
                if (local_db8[0] != (uVar34 ^ 0x209c75e7)) {
                  lVar27 = 0x284;
                }
                break;
              case true:
                goto switchD_08fdbd44_caseD_1;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0x2f75:
                goto switchD_08fdba6e_caseD_10c;
              }
              break;
            case 0xfffffc4a:
switchD_08fe0ed2_caseD_3f8:
              FUN_08fba6b1(local_1e40,local_1bb0,1,1);
              LOCK();
              *pppppppuVar52 = (ulonglong ******)((longlong)*pppppppuVar52 - 1);
              UNLOCK();
                    /* WARNING: Switch is manually overridden */
              switch((~(*pppppppuVar52 == (ulonglong ******)0x0) & 1U) * '\x02') {
              case 1:
                goto switchD_08fdba6e_caseD_c0;
              case 2:
                goto switchD_08fdbd44_caseD_0;
              }
switchD_08fdbd44_caseD_1:
              FUN_08f73b02(pppppppuVar52);
              lVar27 = 0x10c;
              if (local_db8[0] != (uVar34 ^ 0x209c75e7)) {
                lVar27 = 0x284;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0x2f75:
                goto switchD_08fdba6e_caseD_10c;
              }
            }
            goto switchD_08fdba6e_caseD_1d4;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0x2f75:
            goto switchD_08fdba6e_caseD_10c;
          }
        } while( true );
      case 0x2f75:
switchD_08fdba6e_caseD_10c:
        FUN_08fa6f3b((longlong *)&local_1278);
        puVar28 = &UINT_08ffacfc;
        if (local_1d78 ==
            ((uint)*(undefined8 *)
                    (*(longlong *)
                      (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x2c0) ^
             local_1db4 + 0xeac0cca1U ^ 0x18dec61b)) {
          puVar28 = &switchD_08fde5dc::switchdataD_08ffaf80;
        }
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar28) {
      case 0x1413:
        local_b20[0] = (ulonglong *******)((longlong)pppppppuVar3 + -0x3d169f3383e5c1fd);
        local_1a68[0] = (ulonglong *******)&UNK_08ff6f7a;
        local_1a68[1] = (ulonglong *******)0xe;
        puVar28 = &UINT_08ffacf4;
        if (DAT_090097d8 == 0) {
          puVar28 = &UINT_08ffb034;
        }
        local_1a68[2] = (ulonglong *******)local_b20;
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0x2494:
          FUN_08fef46f(0x90097c0,local_1a68);
        }
        FUN_08fa7c6e(local_1a68,DAT_090097c0,DAT_090097d0);
        FUN_08f9eb17(&local_1278,local_1e00,(ulonglong)local_1df8,local_1a68);
        pppppppuVar19 = local_1278;
        FUN_08f9a2a0(&local_1788,(longlong)local_1278,(ulonglong)local_1268);
        pppppppuVar52 = local_1778;
        puVar9 = puStack_1780;
        pppppppuVar53 = local_1788;
        pppppppuVar18 = (ulonglong *******)((longlong)pppppppuVar3 + 0x50658eecdf638a1a);
        lVar27 = 0x264;
        if ((ulonglong *******)puStack_1780 == pppppppuVar18) {
          lVar27 = 1000;
        }
        break;
      case 0xfffffef2:
                    /* WARNING: Switch is manually overridden */
        switch(local_1d68 == (ulonglong *******)0x0) {
        case false:
          pppppppuStack_1270 = local_1d70;
          iVar36 = *(int *)(*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                           0x1a8);
          uVar57 = iVar36 + 0x5c7fa83e;
          local_1268 = local_1d68;
          *(undefined8 *)((longlong)&local_1278 + (ulonglong)uVar57) = 0;
          *(ulonglong ********)((longlong)&local_1278 + (ulonglong)(uVar57 ^ 0x30)) = local_1d70;
          local_1248 = local_1d68;
          *(undefined8 *)((longlong)&local_1278 + (ulonglong)(iVar36 + 0x5c7fa85e)) = 0;
          local_1278 = (ulonglong *******)0x1;
          local_1258 = (ulonglong *******)0x1;
          local_1238 = (LPVOID)0x0;
          FUN_08fa5cff((byte *)&local_1278);
                    /* WARNING: Switch is manually overridden */
        }
        FUN_08fba6b1(local_8b0,local_8a8,1,1);
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_08fdedd9_case_0;
      }
      pppppppuVar45 = (ulonglong *******)&local_1278;
      bVar29 = (byte)pppppppuVar3;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
      case 0x497c:
        local_1ec8 = local_1788;
        FUN_08fba6b1(pppppppuVar19,(longlong)pppppppuStack_1270,1,1);
        FUN_08fc0046(pppppppuVar45,(longlong)pppppppuVar53,(ulonglong)pppppppuVar52);
        lVar27 = 0x3fc;
        if ((char)local_1278 != '\0') {
          lVar27 = 0x40;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
        case 0xd40:
          local_1788 = (ulonglong *******)0x1878521131b5665e;
          local_1278 = (ulonglong *******)&UNK_08ff6f88;
          pppppppuStack_1270 = (ulonglong *******)0x22;
          local_1ec0 = uVar34 ^ 0x209c75e5;
          puVar28 = &UINT_08ffaddc;
          if (DAT_0900bb40 == (uVar34 ^ 0x209c75e5)) {
            puVar28 = &switchD_08fe023b::switchdataD_08ffac50;
          }
          local_1268 = (ulonglong *******)&local_1788;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0x44c8:
            FUN_08fef46f(0x900bb28,&local_1278);
          }
          FUN_08fa7c6e(&local_1b98,DAT_0900bb28,DAT_0900bb38);
          pppppppuVar19 = local_1b98;
          pppppppuStack_1270 = (ulonglong *******)CONCAT44(pppppppuStack_1270._4_4_,10);
          local_1eb8 = (ulonglong *******)0x0;
          pppppppuVar55 = (ulonglong *******)0x0;
          puVar28 = (uint *)pppppppuVar53;
          local_1278 = pppppppuVar52;
                    /* WARNING: Switch is manually overridden */
          switch(0x8fdc6d0) {
          case 0x8fdc6d0:
switchD_08fdba6e_caseD_c8:
            pppppppuVar45 = (ulonglong *******)0x0;
            puVar16 = &UINT_08ffad5c;
            puVar28 = &UINT_08ffacac;
            if (pppppppuVar55 <= pppppppuVar52) {
              puVar16 = &UINT_08ffacac;
            }
            pppppppuVar42 = pppppppuVar55;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar16) {
            case 0x3ab6:
switchD_08fdba6e_caseD_114:
              lVar27 = 0x2f8;
              if (pppppppuVar52 == local_1eb8) {
                lVar27 = 0x1a4;
              }
              break;
            case 0x4748:
              do {
                puVar6 = (undefined1 *)((longlong)pppppppuVar53 + (longlong)pppppppuVar42);
                puVar46 = (undefined1 *)((longlong)pppppppuVar52 - (longlong)pppppppuVar42);
                puVar16 = &switchD_08fe023b::switchdataD_08ffad30;
                if (puVar46 < (undefined1 *)(ulonglong)(uVar34 ^ 0x209c75f5)) {
                  puVar16 = &switchD_08fe023b::switchdataD_08ffaec0;
                }
                pppppppuVar55 = pppppppuVar52;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar16) {
                case 0x22b1:
                  puVar16 = &UINT_08ffad04;
                  if (puVar46 ==
                      (undefined1 *)
                      (ulonglong)(((local_1dac - (uVar34 ^ 0x209c75f5)) - local_1ec0) * -0x75f3b3))
                  {
                    puVar16 = &switchD_08fe023b::switchdataD_08ffacf8;
                  }
                  bVar62 = false;
                  puVar39 = (undefined1 *)0x0;
                  puVar37 = (undefined1 *)0x0;
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar16) {
                  case 0x23ed:
                    do {
                      lVar27 = 0x154;
                      if (puVar6[(longlong)puVar39] == (bVar29 ^ 0xef)) {
                        lVar27 = 0xb0;
                      }
                      bVar62 = true;
                      puVar37 = puVar39;
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)
                              ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                      case 0x43d3:
                        goto switchD_08fdba6e_caseD_b0;
                      case 0x43fc:
                        puVar39 = puVar39 + 1;
                        puVar16 = &switchD_08fe023b::switchdataD_08ffacf8;
                        if (puVar39 != puVar46) {
                          puVar16 = &UINT_08ffad04;
                        }
                      }
                      bVar62 = false;
                      puVar37 = puVar46;
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar16) {
                      case 0x43d3:
                        goto switchD_08fdba6e_caseD_b0;
                      }
                    } while( true );
                  case 0x43d3:
switchD_08fdba6e_caseD_b0:
                    lVar27 = 0x114;
                    if (bVar62) {
                      lVar27 = 0x2d8;
                    }
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)
                        ) {
                  case 0x3ab6:
                    goto switchD_08fdba6e_caseD_114;
                  }
                  break;
                case 0x23c3:
                  puVar37 = puVar6;
                  uVar60 = FUN_08fd565a(10,(longlong)puVar6,(ulonglong)puVar46);
                  lVar27 = 0x114;
                  if ((uVar60 & 1) != 0) {
                    lVar27 = 0x2d8;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)
                        ) {
                  case 0x3ab6:
                    goto switchD_08fdba6e_caseD_114;
                  }
                }
                pppppppuVar61 =
                     (ulonglong *******)((longlong)pppppppuVar42 + (longlong)(puVar37 + 1));
                pppppppuVar55 = pppppppuVar61;
                    /* WARNING: Switch is manually overridden */
                switch(pppppppuVar61 == (ulonglong *******)(ulonglong)(uVar34 + 0xdf638a1b) ||
                       pppppppuVar52 < pppppppuVar61) {
                case false:
                  lVar27 = 0x1b0;
                  if (*(char *)((longlong)pppppppuVar42 +
                               (longlong)(puVar37 + (longlong)pppppppuVar53)) == '\n') {
                    lVar27 = 0x2f8;
                  }
                  bVar62 = false;
                  pppppppuVar42 = pppppppuVar61;
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)
                        ) {
                  case 0xffffff88:
                    goto switchD_08fe0ca7_caseD_2f8;
                  }
                }
                puVar16 = &UINT_08ffad5c;
                if (pppppppuVar61 <= pppppppuVar52) {
                  puVar16 = &UINT_08ffacac;
                }
                pppppppuVar42 = pppppppuVar61;
                    /* WARNING: Switch is manually overridden */
                switch(*puVar16) {
                case 0x3ab6:
                  goto switchD_08fdba6e_caseD_114;
                }
              } while( true );
            }
            bVar62 = true;
            pppppppuVar61 = pppppppuVar52;
            pppppppuVar42 = local_1eb8;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0xffffff88:
switchD_08fe0ca7_caseD_2f8:
              pppppppuVar14 = (ulonglong *******)((longlong)pppppppuVar61 - (longlong)local_1eb8);
              lVar27 = 0xb8;
              if (pppppppuVar14 == (ulonglong *******)0x0) {
                lVar27 = 0x17c;
              }
              pppppppuVar45 = pppppppuVar14;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0x2391:
                puVar16 = &switchD_08fe023b::switchdataD_08ffade8;
                puVar28 = &UINT_08ffadc4;
                if (((undefined1 *)((longlong)pppppppuVar53 + -1))[(longlong)pppppppuVar61] !=
                    (byte)(bVar29 + 0x25)) {
                  puVar16 = &UINT_08ffadc4;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar16) {
                case 0x718:
                  pppppppuVar45 = (ulonglong *******)((longlong)pppppppuVar14 + -1);
                  if (pppppppuVar45 != (ulonglong *******)(ulonglong)(0x209c75e5 - uVar34)) {
                    puVar28 = &UINT_08ffaf7c;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar28) {
                  case 0x22ee:
                    puVar28 = &switchD_08fe023b::switchdataD_08ffade0;
                    if (((undefined1 *)((longlong)pppppppuVar61 + (longlong)pppppppuVar53))
                        [(ulonglong)pppppppuVar3 ^ 0x50658eecdf638a1b] == '\r') {
                      puVar28 = &UINT_08ffad24;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar28) {
                    case 0x1ffd:
                      pppppppuVar45 = (ulonglong *******)((longlong)pppppppuVar14 + -2);
                    }
                  }
                }
              }
              puVar28 = (uint *)((longlong)local_1eb8 + (longlong)pppppppuVar53);
              uVar60 = FUN_08fbca9e((byte *)pppppppuVar19,local_1b88,puVar28,
                                    (ulonglong)pppppppuVar45);
              lVar27 = 0xf0;
              if ((char)uVar60 != '\0') {
                lVar27 = 0x2c8;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0x95:
                lVar27 = 200;
                if (bVar62) {
                  lVar27 = 0x1a4;
                }
                goto code_r0x08fdc65a;
              }
              FUN_08faab02(&local_1278,puVar28,pppppppuVar45,(undefined1 *)pppppppuVar19,local_1b88)
              ;
              FUN_08f92455((ulonglong *)&local_1788,(longlong *)&local_1278);
                    /* WARNING: Switch is manually overridden */
              switch(local_1788) {
              case (ulonglong *******)0x0:
                goto switchD_08fdba6e_caseD_ec;
              case (ulonglong *******)0x1:
                pppppppuVar55 = (ulonglong *******)(local_1b88 + (longlong)puStack_1780);
                pppppppuVar52 =
                     (ulonglong *******)
                     (ulonglong)
                     (uint)(*(int *)(*(longlong *)
                                      (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                      (ulonglong)_tls_index * 8) + 0x1a0) * -0xaf6bcd +
                           (int)pppppppuVar18 * -2);
                lVar27 = 0x30c;
                if (pppppppuVar55 == pppppppuVar52) {
                  lVar27 = 0x50;
                }
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0x34c6:
                puVar16 = &switchD_08fe023b::switchdataD_08ffaed8;
                if (pppppppuVar55 < pppppppuVar45) {
                  puVar16 = &UINT_08ffae34;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar16) {
                case 0xbc4:
                    /* WARNING: Switch is manually overridden */
                  switch((char)(bVar29 ^ 0x5a) <
                         *(char *)((longlong)puVar28 + (longlong)pppppppuVar55)) {
                  case false:
                    goto switchD_08fdba6e_caseD_ec;
                  }
                  break;
                case 0x3173:
                    /* WARNING: Switch is manually overridden */
                  switch(pppppppuVar45 == pppppppuVar55) {
                  case false:
                    goto switchD_08fdba6e_caseD_ec;
                  }
                }
              }
              pppppppuVar45 = (ulonglong *******)((longlong)pppppppuVar45 - (longlong)pppppppuVar55)
              ;
              pppppppuVar55 = (ulonglong *******)((longlong)puVar28 + (longlong)pppppppuVar55);
              local_1268 = pppppppuVar55;
              local_1260 = pppppppuVar45;
              *(undefined8 *)((longlong)&local_1278 + (ulonglong)(-uVar34 + 0x209c75ed)) = 0;
              uVar60 = (ulonglong)(-uVar34 + 0x209c760d);
              *(ulonglong ********)((longlong)&local_1278 + uVar60) = pppppppuVar45;
              local_1258 = (ulonglong *******)CONCAT44(0x2c,(undefined4)local_1258);
              local_1258 = (ulonglong *******)CONCAT71(local_1258._1_7_,1);
              local_1278 = (ulonglong *******)CONCAT44(local_1278._4_4_,0x2c);
              pppppppuVar42 = (ulonglong *******)0x0;
              uVar57 = 0x209c75f5 - uVar34;
              lVar27 = 0x164;
              if ((ulonglong *******)(ulonglong)uVar57 <= pppppppuVar45) {
                lVar27 = 0x2c;
              }
              pppppppuVar61 = pppppppuVar55;
              pppppppuVar14 = pppppppuVar55;
              pppppppuVar13 = pppppppuVar45;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0x3b0c:
                goto switchD_08fdba6e_caseD_164;
              }
switchD_08fdba6e_caseD_2c:
              uVar17 = FUN_08fd565a(0x2c,(longlong)pppppppuVar61,(ulonglong)pppppppuVar13);
              pppppppuVar14 = pppppppuVar42;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)
                      ((longlong)&switchD_08fe023b::switchdataD_08ffae50 +
                      (ulonglong)(uint)((int)uVar17 << 8))) {
              case 0x19dc:
switchD_08fe0ca7_caseD_208:
                *(undefined8 *)((longlong)local_1e68 + (ulonglong)(uVar34 ^ 0x209c75f5)) = 0;
                local_1e68[0] = 0;
override_jmp_08fdbb03_case_0:
                lVar27 = *(longlong *)
                          (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
                FUN_08fba6b1(pppppppuVar19,
                             *(longlong *)
                              ((longlong)local_1b38 +
                              ((ulonglong)
                               ((((uint)*(undefined8 *)(lVar27 + 0x248) ^
                                 (uint)*(ushort *)(lVar27 + 500)) + 0x741e) * 0x689 & 0xffff) - 0x60
                              )),1,1);
                FUN_08fba6b1(local_1ec8,(longlong)puVar9,1,1);
                break;
              case 0x49d4:
                do {
                  pppppppuVar42 =
                       (ulonglong *******)
                       ((undefined1 *)((longlong)pppppppuVar61 + (longlong)pppppppuVar14) + 1);
                  lVar27 = 0x310;
                  if (pppppppuVar45 < pppppppuVar42) {
                    lVar27 = 0x3d8;
                  }
                  if (pppppppuVar42 ==
                      (ulonglong *******)
                      ((ulonglong)uVar57 ^
                      (longlong)(uVar60 + (longlong)pppppppuVar18) *
                      (longlong)(DAT_0900bc48 + (longlong)pppppppuVar52) * (longlong)pppppppuVar18))
                  {
                    lVar27 = 0x3d8;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)
                        ) {
                  case 0x3079:
                    /* WARNING: Switch is manually overridden */
                    switch(*(char *)((longlong)pppppppuVar14 +
                                    (longlong)((longlong)pppppppuVar61 + (longlong)pppppppuVar55))
                           != ',') {
                    case false:
                      FUN_08fc66b4(&local_1c00,(undefined8 *)&UNK_08ff6ead,
                                   (ulonglong)(uVar34 + 0xdf638a49));
                      pppppppuVar52 =
                           (ulonglong *******)((longlong)pppppppuVar45 - (longlong)pppppppuVar42);
                      puVar28 = &switchD_08fe023b::switchdataD_08ffaef8;
                      if (pppppppuVar42 <= pppppppuVar45 && pppppppuVar52 != (ulonglong *******)0x0)
                      {
                        puVar28 = &switchD_08fe023b::switchdataD_08ffae08;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar28) {
                      case 0x318f:
                        if (*(char *)((longlong)pppppppuVar55 + (longlong)pppppppuVar42) <=
                            (char)(bVar29 - 0x26)) goto switchD_08fdba6e_caseD_ec;
                        break;
                      case 0x31a3:
                        if (pppppppuVar42 != pppppppuVar45) goto switchD_08fdba6e_caseD_ec;
                      }
                      pppppppuVar55 =
                           (ulonglong *******)((longlong)pppppppuVar55 + (longlong)pppppppuVar42);
                      local_1268 = pppppppuVar55;
                      local_1260 = pppppppuVar52;
                      *(undefined8 *)((longlong)&local_1278 + (ulonglong)(uVar34 + 0xdf638a23)) = 0;
                      local_1258 = (ulonglong *******)CONCAT44(0x22,(undefined4)local_1258);
                      local_1258 = (ulonglong *******)CONCAT71(local_1258._1_7_,1);
                      local_1278 = (ulonglong *******)CONCAT44(local_1278._4_4_,0x22);
                      local_1250 = pppppppuVar52;
                      FUN_08f8e037(&local_1788,&local_1278);
                      pppppppuVar45 = (ulonglong *******)((longlong)puStack_1780 + 1);
                    /* WARNING: Switch is manually overridden */
                      switch((ulonglong)local_1788 & 0xffffffff) {
                      case 0:
                        local_1e58 = (undefined8 *)0x0;
                        local_1e68[0] = 0;
                        FUN_08fba6b1(local_1c00,local_1bf8,1,1);
                    /* WARNING: Switch is manually overridden */
                        goto override_jmp_08fdbb03_case_0;
                      case 1:
                        puVar28 = &UINT_08ffafec;
                        if (pppppppuVar45 == (ulonglong *******)(ulonglong)(0x209c75e5 - uVar34)) {
                          puVar28 = &UINT_08ffaf14;
                        }
                    /* WARNING: Switch is manually overridden */
                        switch(*puVar28) {
                        case 0x1bce:
                          if (pppppppuVar45 < pppppppuVar52) {
                    /* WARNING: Switch is manually overridden */
                            switch((char)(bVar29 ^ 0x5a) <
                                   *(char *)((longlong)pppppppuVar55 + (longlong)pppppppuVar45)) {
                            case false:
                              goto switchD_08fde1ad_caseD_0;
                            }
                          }
                          else {
                    /* WARNING: Switch is manually overridden */
                            switch(pppppppuVar52 == pppppppuVar45) {
                            case false:
switchD_08fde1ad_caseD_0:
                    /* WARNING: Does not return */
                              pcVar7 = (code *)invalidInstructionException();
                              (*pcVar7)();
                            }
                          }
                        }
                        local_1ec8 = (ulonglong *******)
                                     ((longlong)pppppppuVar55 + (longlong)pppppppuVar45);
                        pppppppuVar52 =
                             (ulonglong *******)((longlong)pppppppuVar52 - (longlong)pppppppuVar45);
                        puVar28 = &UINT_08ffaf74;
                        if (pppppppuVar52 == (ulonglong *******)0x0) {
                          puVar28 = &switchD_08fe023b::switchdataD_08fface0;
                        }
                      }
                      pppppppuVar19 = (ulonglong *******)0x0;
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar28) {
                      case 0x291c:
                        goto switchD_08fdba6e_caseD_98;
                      }
                      goto switchD_08fe0ca7_caseD_32c;
                    }
                  }
                  pppppppuVar13 =
                       (ulonglong *******)((longlong)pppppppuVar45 - (longlong)pppppppuVar42);
                  lVar27 = 700;
                  if (pppppppuVar45 < pppppppuVar42) {
                    lVar27 = 0x208;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)
                        ) {
                  case 0x19dc:
                    goto switchD_08fe0ca7_caseD_208;
                  case 0xfffffcd5:
                    uVar57 = 0x209c75f5 - uVar34;
                    lVar27 = 0x2c;
                    if (pppppppuVar13 < (ulonglong *******)(ulonglong)uVar57) {
                      lVar27 = 0x164;
                    }
                  }
                  pppppppuVar61 =
                       (ulonglong *******)((longlong)pppppppuVar55 + (longlong)pppppppuVar42);
                  pppppppuVar14 = pppppppuVar61;
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)
                        ) {
                  case 0x6fe:
                    goto switchD_08fdba6e_caseD_2c;
                  case 0x3b0c:
switchD_08fdba6e_caseD_164:
                    lVar27 = 0x250;
                    if (pppppppuVar13 == (ulonglong *******)(ulonglong)(uVar34 ^ 0x209c75e5)) {
                      lVar27 = 0x368;
                    }
                    iVar36 = 0;
                    pppppppuVar50 = (ulonglong *******)0x0;
                    pppppppuVar61 = (ulonglong *******)0x0;
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)
                            ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                    case 0x415d:
                      do {
                        lVar27 = 0x3e0;
                        if (*(char *)((longlong)pppppppuVar14 + (longlong)pppppppuVar50) == ',') {
                          lVar27 = 0x368;
                        }
                        iVar36 = 1;
                        pppppppuVar61 = pppppppuVar50;
                    /* WARNING: Switch is manually overridden */
                        switch(*(undefined4 *)
                                ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                        case 0x5ab:
                          goto switchD_08fe0ca7_caseD_368;
                        case 0x2006:
                          pppppppuVar50 = (ulonglong *******)((longlong)pppppppuVar50 + 1);
                          lVar27 = 0x250;
                          if (pppppppuVar50 == pppppppuVar13) {
                            lVar27 = 0x368;
                          }
                        }
                        iVar36 = 0;
                        pppppppuVar61 = pppppppuVar13;
                    /* WARNING: Switch is manually overridden */
                        switch(*(undefined4 *)
                                ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                        case 0x5ab:
                          goto switchD_08fe0ca7_caseD_368;
                        }
                      } while( true );
                    }
switchD_08fe0ca7_caseD_368:
                    pppppppuVar14 = pppppppuVar42;
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)
                            ((longlong)&switchD_08fe023b::switchdataD_08ffae50 +
                            (ulonglong)(uint)(iVar36 << 8))) {
                    case 0x19dc:
                      goto switchD_08fe0ca7_caseD_208;
                    }
                  }
                } while( true );
              }
              goto override_jmp_08fdbf88_case_0;
            }
          }
switchD_08fdba6e_caseD_1a4:
          puVar22 = FUN_08fc693d(0,(ulonglong)(uVar34 ^ 0x209c75d7));
          pppppppuVar53 = pppppppuVar19;
                    /* WARNING: Switch is manually overridden */
          switch((puVar22 != (undefined8 *)0x0) * '\x02') {
          case '\0':
                    /* WARNING: Does not return */
            pcVar7 = (code *)invalidInstructionException();
            (*pcVar7)();
          case '\x02':
            goto switchD_08fe0c4a_caseD_1;
          }
          goto switchD_08fdba6e_caseD_1b8;
        case 0x1888:
          FUN_08fba6b1(pppppppuVar53,(longlong)puVar9,1,1);
          *(undefined8 *)((longlong)local_1e68 + (ulonglong)(uVar34 + 0xdf638a2b)) = 0;
          local_1e68[0] = 0;
        }
        break;
      case 0xfffff989:
        FUN_08fba6b1(pppppppuVar19,(longlong)pppppppuStack_1270,1,1);
        *(undefined8 *)((longlong)local_1e68 + (ulonglong)(uVar34 + 0xdf638a2b)) = 0;
        local_1e68[0] = 0;
                    /* WARNING: Switch is manually overridden */
      }
      break;
    case 0x3916:
      goto switchD_08fe0ca7_caseD_2e8;
    }
  }
  goto override_jmp_08fdbf88_case_0;
code_r0x08fdc65a:
  local_1eb8 = pppppppuVar42;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
  case 0x465f:
    goto switchD_08fdba6e_caseD_1a4;
  }
  goto switchD_08fdba6e_caseD_c8;
  do {
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
    case 0x291c:
      goto switchD_08fdba6e_caseD_98;
    case 0x3799:
switchD_08fe0ca7_caseD_32c:
      bVar23 = *(byte *)((longlong)local_1ec8 + (longlong)pppppppuVar19);
      lVar27 = 0x274;
      if (bVar23 < 0x5c) {
        lVar27 = 0x324;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
      case 0x1751:
        puVar28 = &UINT_08ffad6c;
        if (bVar23 == 0x5c) {
          puVar28 = &UINT_08ffae94;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0xfffffd96:
          pppppppuVar45 = (ulonglong *******)((longlong)pppppppuVar19 + 2);
          pppppppuVar19 = (ulonglong *******)((longlong)pppppppuVar19 + 1);
          if (pppppppuVar19 < pppppppuVar52) {
            pppppppuVar19 = pppppppuVar45;
          }
          lVar27 = 0x98;
          if (pppppppuVar19 < pppppppuVar52) {
            lVar27 = 0x32c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
          case 0x291c:
            goto switchD_08fdba6e_caseD_98;
          }
          goto switchD_08fe0ca7_caseD_32c;
        }
        break;
      case 0x30dc:
        puVar28 = &UINT_08ffad6c;
        if (bVar23 == 0x22) {
          puVar28 = &switchD_08fe023b::switchdataD_08fface0;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0x291c:
          goto switchD_08fdba6e_caseD_98;
        }
      }
      pppppppuVar19 = (ulonglong *******)((longlong)pppppppuVar19 + 1);
      lVar27 = 0x98;
      if (pppppppuVar19 < pppppppuVar52) {
        lVar27 = 0x32c;
      }
    }
  } while( true );
switchD_08fe0ca7_caseD_268:
LAB_08fdc3a7:
  pppppppuVar55 = local_1778;
  pppppppuVar45 = (ulonglong *******)puStack_1780;
  local_1e08 = (undefined8 *)0x0;
  local_1e18 = 0;
  pppppppuVar61 = (ulonglong *******)0xffffffffffffffff;
  pppppppuVar14 = (ulonglong *******)0x0;
  pppppppuVar42 = (ulonglong *******)0x160;
  if (*(char *)pppppppuVar19 == (byte)('\a' - bVar29)) {
    pppppppuVar42 = (ulonglong *******)0x244;
  }
  pppppppuVar13 = (ulonglong *******)0x1;
  pppppppuVar50 = pppppppuVar3;
  pppppppuVar54 = (ulonglong *******)0x1;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)(pppppppuVar42 + 0x11ff589)) {
  case 0x17a6:
    goto switchD_08fdba6e_caseD_160;
  }
switchD_08fe0ca7_caseD_244:
  pppppppuVar42 = pppppppuVar52;
  puVar28 = &switchD_08fe023b::switchdataD_08ffae58;
  if (pppppppuVar55 <= pppppppuVar13) {
    puVar28 = &switchD_08fe023b::switchdataD_08ffad90;
  }
  pppppppuVar54 = pppppppuVar13;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar28) {
  case 0x70:
    do {
      bVar23 = *(byte *)((longlong)pppppppuVar19 + (longlong)pppppppuVar54);
      puVar28 = &switchD_08fde5dc::switchdataD_08ffaf70;
      if (bVar23 < 0x5c) {
        puVar28 = &UINT_08ffae2c;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar28) {
      case 0x155:
        lVar27 = 0x110;
        if (bVar23 != 0x5c) {
          lVar27 = 0x1f0;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
        case 0x17f2:
          pppppppuVar54 = (ulonglong *******)((longlong)pppppppuVar54 + 1);
          lVar27 = 0x148;
          if (pppppppuVar54 < pppppppuVar55) {
            lVar27 = 0x1f0;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
          case 0x489f:
            goto switchD_08fdba6e_caseD_148;
          }
        }
        break;
      case 0x3813:
        puVar28 = &switchD_08fe023b::switchdataD_08ffae38;
        if (bVar23 == 0x22) {
          puVar28 = &switchD_08fe023b::switchdataD_08ffad90;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0x489f:
          goto switchD_08fdba6e_caseD_148;
        }
      }
      pppppppuVar54 = (ulonglong *******)((longlong)pppppppuVar54 + 1);
      puVar28 = &switchD_08fe023b::switchdataD_08ffad90;
      if (pppppppuVar54 < pppppppuVar55) {
        puVar28 = &switchD_08fe023b::switchdataD_08ffae58;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar28) {
      case 0x489f:
        goto switchD_08fdba6e_caseD_148;
      }
    } while( true );
  case 0x489f:
switchD_08fdba6e_caseD_148:
    pppppppuVar52 = pppppppuVar54;
    if (pppppppuVar55 <= pppppppuVar54) {
      pppppppuVar52 = pppppppuVar55;
    }
    puVar28 = &UINT_08ffaf64;
    puVar16 = &UINT_08ffb018;
    if (pppppppuVar52 <= pppppppuVar14) {
      puVar16 = &UINT_08ffaf64;
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar16) {
  case 0xc30:
switchD_08fe0ca7_caseD_31c:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  case 0x26ce:
    lVar27 = 0x108;
    if (pppppppuVar13 == pppppppuVar55) {
      lVar27 = 0x13c;
    }
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
  case 0x34a1:
    puVar16 = &UINT_08ffac5c;
    if (*(char *)((longlong)pppppppuVar19 + (longlong)pppppppuVar13) <= (char)(bVar29 - 0x26)) {
      puVar16 = puVar28;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar16) {
    case 0xc30:
      goto switchD_08fe0ca7_caseD_31c;
    case 0x182c:
      lVar27 = 0x13c;
      if (pppppppuVar54 < pppppppuVar55) {
        lVar27 = 0x68;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
      case 0x1e6c:
        if (-0x41 < *(char *)((longlong)pppppppuVar19 + (longlong)pppppppuVar52)) {
          puVar28 = &UINT_08ffad84;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0xc30:
          goto switchD_08fe0ca7_caseD_31c;
        }
      }
    }
  }
  FUN_08fc66b4(&local_1278,(undefined8 *)((longlong)pppppppuVar19 + (longlong)pppppppuVar13),
               (longlong)pppppppuVar52 - (longlong)pppppppuVar13);
  pppppppuVar54 =
       (ulonglong *******)((longlong)pppppppuVar54 + (ulonglong)(pppppppuVar54 < pppppppuVar55));
  puVar28 = &switchD_08fe023b::switchdataD_08ffae10;
  if (pppppppuVar61 == pppppppuVar18) {
    puVar28 = &UINT_08ffac9c;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar28) {
  case 0x1e84:
    pppppppuVar42 = local_1278;
    pppppppuVar61 = pppppppuStack_1270;
    puVar28 = (uint *)local_1268;
                    /* WARNING: Switch is manually overridden */
    goto switchD_08fdba6e_caseD_160;
  }
  local_1b38[0] = pppppppuVar42;
  *(ulonglong ********)((longlong)local_1b38 + (ulonglong)(uVar34 + 0xdf638a23)) = pppppppuVar61;
  local_1b38[2] = pppppppuVar50;
  FUN_08f731ad(&local_17b8,&local_1e18,&local_1278,local_1b38);
  pppppppuVar14 = pppppppuVar54;
                    /* WARNING: Switch is manually overridden */
  switch(local_17b0 != -1) {
  case false:
    lVar27 = 0x2f0;
    if (pppppppuVar54 < pppppppuVar55) {
      lVar27 = 0x200;
    }
    pppppppuVar61 = (ulonglong *******)0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
    case 0x1ac5:
      goto switchD_08fe0ca7_caseD_2f0;
    }
    break;
  case true:
    FUN_08fba6b1(local_17b8,local_17b0,1,1);
    lVar27 = 0x2f0;
    if (pppppppuVar54 < pppppppuVar55) {
      lVar27 = 0x200;
    }
    pppppppuVar61 = (ulonglong *******)0xffffffffffffffff;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
    case 0x1ac5:
      goto switchD_08fe0ca7_caseD_2f0;
    }
  }
  do {
    lVar27 = 0x160;
    if (*(char *)((longlong)pppppppuVar19 + (longlong)pppppppuVar14) == (byte)('\a' - bVar29)) {
      lVar27 = 0x244;
    }
    pppppppuVar13 = (ulonglong *******)((longlong)pppppppuVar14 + 1);
    puVar28 = (uint *)pppppppuVar50;
    pppppppuVar54 = pppppppuVar13;
    pppppppuVar52 = pppppppuVar42;
                    /* WARNING: Switch is manually overridden */
    switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
    case 0xd1:
      goto switchD_08fe0ca7_caseD_244;
    case 0x17a6:
switchD_08fdba6e_caseD_160:
      pppppppuVar50 = (ulonglong *******)puVar28;
      lVar27 = 0x2f0;
      if (pppppppuVar54 < pppppppuVar55) {
        lVar27 = 0x200;
      }
      pppppppuVar14 = pppppppuVar54;
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
      case 0x1ac5:
        goto switchD_08fe0ca7_caseD_2f0;
      }
    }
  } while( true );
switchD_08fe0ca7_caseD_2f0:
  local_1e58 = local_1e08;
  local_1e68[0] = local_1e18;
  local_1e68[1] = uStack_1e10;
  if (pppppppuVar61 != (ulonglong *******)0xffffffffffffffff) {
    FUN_08fba6b1(pppppppuVar42,(longlong)pppppppuVar61,1,1);
  }
  goto override_jmp_08fdc035_case_0;
LAB_08fdfd1b:
  FUN_08f9b622(&local_1b80,(byte *)&local_1278);
  lVar27 = 0x2ac;
  if (pppppppuStack_1b78 != (ulonglong *******)((ulonglong)pppppppuVar3 ^ 0x50658eecdf638a1a)) {
    lVar27 = 0x1fc;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
  case 0x28a2:
    local_1768 = local_1b60;
    uStack_1760 = uStack_1b58;
    local_1778 = local_1b70;
    puStack_1770 = puStack_1b68;
    local_1788 = local_1b80;
    puStack_1780 = (ulonglong *)pppppppuStack_1b78;
    FUN_08f7987a(local_1a68,(longlong *)&local_1d28,&local_1b80,
                 (undefined8 *)((longlong)&local_1788 + (ulonglong)(0x38 - uVar31)));
    puVar28 = &switchD_08fe023b::switchdataD_08ffacc8;
    if (*(longlong *)((longlong)local_1a68 + (longlong)local_1dc8) ==
        -0x50658eecdf638a1c - (longlong)pppppppuVar3) {
      puVar28 = &UINT_08ffafcc;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar28) {
    case 0x36f8:
      break;
    case 0x382d:
      FUN_08fba6b1(local_1a68[0],*(longlong *)((longlong)local_1a68 + (longlong)local_1dc8),1,1);
    }
    goto LAB_08fdfd1b;
  case 0xfffffbf5:
    FUN_08fabf19((byte *)&local_1278);
    FUN_08fba6b1(local_1de0,(longlong)local_1dd8,1,1);
    lVar27 = 0xe4;
    if (puVar48 == local_1e78) {
      lVar27 = 0x100;
    }
  }
  puVar59 = puVar48;
  puVar48 = local_1e78;
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
  case 0xfffffd06:
    goto switchD_08fdba6e_caseD_100;
  }
  goto switchD_08fdba6e_caseD_e4;
switchD_08fdba6e_caseD_100:
  uVar60 = local_1d28;
  FUN_08f8b478((longlong)puVar48,(ulonglong)((longlong)local_1e78 - (longlong)puVar48) >> 5);
  FUN_08fba6b1(local_1e20,local_1de8,8,0x20);
  pcVar33 = local_1d80;
  lVar27 = local_1df0;
  lVar26 = 0x120;
  if (uVar60 != (uVar34 ^ 0x209c75e5)) {
    lVar26 = 300;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar26)) {
  case 0xc82:
    local_1e90 = local_1d60;
LAB_08fdd0af:
    lVar27 = local_1df0;
    FUN_08f78dbb(&local_1d28);
    FUN_08fba6b1(local_1d48,(longlong)pppppppuStack_1d40,1,1);
    FUN_08fba6b1(local_1be8,lStack_1be0,1,1);
    FUN_08fba6b1(local_1bd0[0],*(longlong *)((longlong)local_1bd0 + local_1ce0),1,1);
    FUN_08f8dc19(lVar27,local_1d80);
    FUN_08fba6b1(local_1e90,lStack_1d58,1,1);
                    /* WARNING: Switch is manually overridden */
    break;
  case 0x42aa:
    local_1ce8[2] = local_1d38;
    *local_1ce8 = local_1d48;
    local_1ce8[1] = pppppppuStack_1d40;
    local_1cf0[2] = local_1d50;
    *local_1cf0 = local_1d60;
    local_1cf0[1] = lStack_1d58;
    local_1228 = local_1bd0[2];
    local_1238 = local_1bd0[0];
    uStack_1230 = local_1bd0[1];
    local_11f8 = local_1bd8;
    local_1208 = local_1be8;
    lStack_1200 = lStack_1be0;
    local_1cf8[2] = local_1d18;
    *local_1cf8 = local_1d28;
    local_1cf8[1] = uStack_1d20;
    local_1240 = 0x8000000000000000;
    ANALYST_result_channel(local_3f8,local_1df0,local_1d80,&local_1278);
    if (local_1c28 - ~(ulonglong)(uVar34 ^ 0x209c75e5) != local_3c0) {
      FUN_08f8360b(local_3f8);
                    /* WARNING: Switch is manually overridden */
    }
    FUN_08f8dc19(lVar27,pcVar33);
  }
override_jmp_08fdcff4_case_0:
  FUN_08fba6b1(puVar22,local_1ca0,1,1);
  goto LAB_08fe074d;
LAB_08fdc572:
  pcVar49 = pcVar49 + 1;
  lVar58 = lVar27 + 1;
  if (cVar10 == '{') {
    lVar26 = lVar26 + 1;
    puVar28 = &switchD_08fe023b::switchdataD_08ffac70;
    if (pcVar49 == pcVar33) {
      puVar28 = &switchD_08fe023b::switchdataD_08ffad80;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar28) {
    case 0x226:
      goto switchD_08fdba6e_caseD_138;
    }
  }
  else if (cVar10 == '}') {
    puVar28 = &UINT_08ffacdc;
    lVar26 = lVar26 + -1;
    if (lVar26 == 0) {
      puVar28 = &switchD_08fe023b::switchdataD_08ffad28;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar28) {
    case 0x5f3:
      puVar28 = &switchD_08fe023b::switchdataD_08ffaf28;
      if (puVar6 <= puVar40 + lVar27) {
        puVar28 = &UINT_08ffae74;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar28) {
      case 0x1f66:
        puVar39 = puVar39 + lVar27;
        puVar28 = &switchD_08fe023b::switchdataD_08ffad88;
        if (puVar39 < puVar40) {
          puVar28 = &UINT_08ffae74;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0x3097:
          puVar28 = &UINT_08ffafc8;
          if (puVar39 < puVar6) {
            puVar28 = &switchD_08fe023b::switchdataD_08ffaf00;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0x1fa1:
            lVar27 = 0x22c;
            if ((char)(-0x5c - bVar29) < *(char *)((longlong)local_1ab8 + (longlong)puVar39)) {
              lVar27 = 0x18c;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0x15ac:
              FUN_08fba6b1(puVar22,0x3e,1,1);
              break;
            case 0x318d:
              goto switchD_08fe0ca7_caseD_22c;
            }
            break;
          case 0xfffff852:
            FUN_08fba6b1(puVar22,0x3e,1,1);
            if (pcVar2 == (char *)0x0) {
              puVar28 = &UINT_08ffaf3c;
              if (puVar37 != (undefined1 *)0x0) {
                puVar28 = &UINT_08ffacb4;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar28) {
              case 0xda6:
                goto switchD_08fe0ca7_caseD_2f4;
              }
              goto switchD_08fdba6e_caseD_6c;
            }
          }
          local_640 = (ulonglong ******)0xbab8406e1dc50704;
          local_1278 = (ulonglong *******)&UNK_08ff6c27;
          *(undefined8 *)((longlong)&local_1278 + uVar60) = 6;
          uVar57 = uVar34 + 0xdf638a1b;
          puVar28 = &UINT_08ffb004;
          if (DAT_0900bbc0 == uVar57) {
            puVar28 = &switchD_08fe023b::switchdataD_08ffac80;
          }
          local_1268 = &local_640;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0x1eba:
            FUN_08fef46f(0x900bba8,&local_1278);
          }
          FUN_08fa7c6e(&local_1ad8,DAT_0900bba8,DAT_0900bbb8);
          FUN_08fb9538(&local_1b20,pcVar2,lVar58,local_1ad8,local_1ac8);
          pppppppuVar53 = local_1b18;
          lVar27 = local_1b20;
          pppppppuVar52 =
               (ulonglong *******)
               ((ulonglong)uVar57 ^
               *(longlong *)
                (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                0xd8) + 0x90b47e3de6df5e1U ^ DAT_09008aa0);
          puVar28 = &switchD_08fde5dc::switchdataD_08ffafc0;
          if (local_1b18 == pppppppuVar52) {
            puVar28 = &switchD_08fe023b::switchdataD_08ffae70;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0x4556:
            local_1e30 = *(ulonglong ********)
                          ((longlong)local_1b38 + (ulonglong)((uint)uVar60 ^ 0x18) + 0x18);
            local_1ac0 = pppppppuVar3 + 0x5bffcc8db2ea4be;
            local_1b40 = (ulonglong *******)&local_1ac0;
            local_1b50 = 
            "fIcqkSc-rsKNVB1H9VRdf-bvZiKGread non-const variable allowed constant expression would bind reference temporarydump objects with debug info defined unused typesrequested, even though error itselfwho to after me over were other move back but any"
            ;
            lVar26 = *(longlong *)
                      (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
            local_1b48 = (ulonglong)
                         ((int)pppppppuVar52 *
                          ((uint)*(undefined8 *)(lVar26 + 0x240) ^
                          *(ushort *)(lVar26 + 0x1f6) - uVar57) & 0xffff);
            puVar28 = &UINT_08ffac7c;
            if (DAT_09009d30 == -0x5ee642b - (int)local_1ac0) {
              puVar28 = &UINT_08ffad44;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar28) {
            case 0x2621:
              FUN_08fef46f(0x9009d18,&local_1b50);
                    /* WARNING: Switch is manually overridden */
            }
            FUN_08fa7c6e(&local_1d10,DAT_09009d18,DAT_09009d28);
            puVar8 = local_1d10;
            FUN_08fb9538(&local_1788,pcVar2,lVar58,local_1d10,local_1d00);
            puVar28 = &UINT_08ffaf0c;
            if (*(undefined1 **)((longlong)&local_1788 + (uVar60 & 0xffffffff)) ==
                (undefined1 *)((longlong)pppppppuVar3 + 0x50658eecdf638a1a)) {
              puVar28 = &switchD_08fe023b::switchdataD_08ffadc8;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar28) {
            case 0x89b:
              local_1278 = (ulonglong *******)lVar27;
              local_1268 = local_1e30;
              pppppppuStack_1270 = pppppppuVar53;
              FUN_08f731ad(&local_17a0,(longlong *)local_b20,&local_1278,&local_1788);
                    /* WARNING: Switch is manually overridden */
              switch(local_1798 == -1) {
              case false:
                FUN_08fba6b1(local_17a0,local_1798,1,1);
              }
              FUN_08fba6b1(puVar8,local_1d08,1,1);
              break;
            case 0x2859:
              FUN_08fba6b1(puVar8,local_1d08,1,1);
              FUN_08fba6b1((LPVOID)lVar27,(longlong)pppppppuVar53,1,1);
                    /* WARNING: Switch is manually overridden */
            }
          }
          FUN_08fba6b1(local_1ad8,local_1ad0,1,1);
          puVar28 = &UINT_08ffacb4;
          if (puVar37 == (undefined1 *)0x0) {
            puVar28 = &UINT_08ffaf3c;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0xda6:
            goto switchD_08fe0ca7_caseD_2f4;
          }
          goto switchD_08fdba6e_caseD_6c;
        }
      }
switchD_08fe0ca7_caseD_22c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    case 0x1bae:
      puVar28 = &switchD_08fe023b::switchdataD_08ffac70;
      if (pcVar49 == pcVar33) {
        puVar28 = &switchD_08fe023b::switchdataD_08ffad80;
      }
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar28) {
    case 0x226:
      goto switchD_08fdba6e_caseD_138;
    }
  }
  else {
    puVar28 = &switchD_08fe023b::switchdataD_08ffac70;
    if (pcVar49 == pcVar33) {
      puVar28 = &switchD_08fe023b::switchdataD_08ffad80;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar28) {
    case 0x226:
      goto switchD_08fdba6e_caseD_138;
    }
  }
  cVar10 = *pcVar49;
  lVar27 = lVar58;
  goto LAB_08fdc572;
switchD_08fdba6e_caseD_98:
  puVar28 = (uint *)pppppppuVar19;
  if (pppppppuVar52 <= pppppppuVar19) {
    puVar28 = (uint *)pppppppuVar52;
  }
  uVar57 = 0x128;
  if ((ulonglong *******)puVar28 == (ulonglong *******)0x0) {
    uVar57 = 0x1b8;
  }
  pppppppuVar45 =
       (ulonglong *******)(ulonglong)((ulonglong *******)puVar28 != (ulonglong *******)0x0);
  uVar60 = (ulonglong)uVar57;
  if (pppppppuVar52 <= pppppppuVar19) {
    uVar60 = 0x1b8;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + uVar60)) {
  case 0xfffffa83:
    puVar22 = (undefined8 *)
              ((ulonglong)
               (*(char *)((longlong)local_1ec8 + (longlong)puVar28) <= (char)(bVar29 ^ 0x5a)) * 2 +
              1);
                    /* WARNING: Switch is manually overridden */
    switch(puVar22) {
    case (undefined8 *)0x2:
switchD_08fe0c4a_caseD_1:
      puVar22[4] = 0x736920736e656b6f;
      puVar22[5] = 0x6973207372657573;
      puVar22[2] = 0x6574617669725020;
      puVar22[3] = 0x5420657461745320;
      *puVar22 = 0x6520736e656b6f54;
      puVar22[1] = 0x6465747375616878;
      *(undefined2 *)(puVar22 + 6) = 0x6574;
      local_1788 = (ulonglong *******)0x1;
      uVar60 = (ulonglong)(uVar34 + 0xdf638a2b);
      puStack_1780 = (ulonglong *)0x0;
      local_1778 = (ulonglong *******)0x0;
      FUN_08fa5f6a(&local_1788,0xd);
      uVar57 = (uint)*(byte *)((longlong)puVar22 + 0x31);
      puVar59 = (undefined8 *)((longlong)puVar22 + 0x31);
      lVar27 = 0x304;
      if ((char)(-0x1c - bVar29) < (char)*(byte *)((longlong)puVar22 + 0x31)) {
        lVar27 = 0x248;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
      case 0x2990:
        goto switchD_08fe0ca7_caseD_304;
      }
switchD_08fe0ca7_caseD_248:
      lVar27 = *(longlong *)((longlong)&local_1788 + uVar60);
LAB_08fdc500:
      lVar26 = 1;
      FUN_08fa5f6a(&local_1788,1);
      *(char *)((longlong)local_1788 + lVar27) = (char)uVar57;
                    /* WARNING: Switch is manually overridden */
override_jmp_08fdbee3_case_0:
      do {
        *(longlong *)((longlong)&local_1788 + uVar60) = lVar26 + lVar27;
        puVar28 = &switchD_08fe023b::switchdataD_08ffae28;
        if (puVar22 == puVar59) {
          puVar28 = &switchD_08fe023b::switchdataD_08ffad18;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0x39a0:
switchD_08fdba6e_caseD_1e0:
          pbVar21 = (byte *)((longlong)puVar59 + -1);
          uVar57 = (uint)*pbVar21;
          puVar59 = (undefined8 *)((longlong)puVar59 + -1);
          lVar27 = 0x304;
          if ((char)(-0x1c - bVar29) < (char)*pbVar21) {
            lVar27 = 0x248;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
          case 0x2990:
switchD_08fe0ca7_caseD_304:
            bVar23 = *(byte *)((longlong)puVar59 + -1);
            cVar10 = (char)local_1e6c + -0x2e;
            lVar27 = 0xd4;
            if ((char)bVar23 < (char)(cVar10 * '=' + -0x21)) {
              lVar27 = 0x7c;
            }
            break;
          case 0xffffff16:
            goto switchD_08fe0ca7_caseD_248;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
          case 0x180c:
            bVar30 = *(byte *)((longlong)puVar59 + -2);
            lVar27 = 0x224;
            if ((char)bVar30 < -0x40) {
              lVar27 = 0x104;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0xb9:
              pbVar21 = (byte *)((longlong)puVar59 + -3);
              puVar59 = (undefined8 *)((longlong)puVar59 + -3);
              uVar12 = ((uVar34 ^ 0x209c75e2) & (uint)*pbVar21) << 6 | bVar30 & 0x3f;
              break;
            case 0x3ad:
              uVar12 = bVar30 & 0xf;
              puVar59 = (undefined8 *)((longlong)puVar59 + -2);
                    /* WARNING: Switch is manually overridden */
            }
            uVar31 = uVar12 << 6 | bVar23 & 0x3f;
            bVar30 = (byte)(uVar57 & 0x3f);
            uVar57 = uVar57 & 0x3f | uVar31 << 6;
            lVar27 = *(longlong *)((longlong)&local_1788 + uVar60);
            uVar12 = 0x209c75e7 - uVar34;
            puVar28 = &switchD_08fe023b::switchdataD_08ffaef0;
            if (uVar31 < uVar12) {
              puVar28 = &UINT_08ffad0c;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar28) {
            case 0x35a6:
              goto switchD_08fe0ca7_caseD_2a8;
            }
switchD_08fdba6e_caseD_c4:
            goto LAB_08fdc500;
          case 0xfffffc8e:
            puVar59 = (undefined8 *)((longlong)puVar59 + -1);
            bVar23 = cVar10 * -0x3d & bVar23;
            uVar31 = (uint)bVar23;
            bVar30 = (byte)(uVar57 & 0x3f);
            uVar57 = uVar57 & 0x3f | (uint)bVar23 << 6;
            lVar27 = *(longlong *)((longlong)&local_1788 + uVar60);
            uVar12 = 0x209c75e7 - uVar34;
            puVar28 = &switchD_08fe023b::switchdataD_08ffaef0;
            if (uVar31 < uVar12) {
              puVar28 = &UINT_08ffad0c;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar28) {
            case 0x35a6:
switchD_08fe0ca7_caseD_2a8:
              uVar57 = local_1db0 * -0x762e31af;
              puVar28 = &switchD_08fe023b::switchdataD_08ffae60;
              if (uVar31 < ~uVar57) {
                puVar28 = &UINT_08ffb014;
              }
              break;
            case 0xffffff14:
              goto switchD_08fdba6e_caseD_c4;
            }
          }
          bVar23 = (byte)uVar31;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0x2d99:
            FUN_08fa5f6a(&local_1788,4 - (ulonglong)(uVar31 < 0x400));
            pbVar21 = (byte *)((longlong)local_1788 + lVar27);
            lVar26 = 1;
                    /* WARNING: Switch is manually overridden */
            switch((uVar31 >= 0x400) * '\x02') {
            case '\0':
              *pbVar21 = (byte)(uVar31 >> 6) | 0xe0;
              pbVar21[1] = bVar23 & 0x3f | 0x80;
              pbVar21[2] = bVar30 | 0x80;
              puVar28 = &switchD_08fe023b::switchdataD_08ffae28;
                    /* WARNING: Switch is manually overridden */
              if (puVar22 == puVar59) {
                puVar28 = &switchD_08fe023b::switchdataD_08ffad18;
              }
              *(longlong *)((longlong)&local_1788 + uVar60) = lVar27 + 3;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar28) {
              case 0xfffff4bc:
                goto switchD_08fdba6e_caseD_d0;
              }
              break;
            case '\x01':
              goto override_jmp_08fdbee3_case_0;
            case '\x02':
              bVar35 = (byte)uVar12 ^ (byte)~uVar57 ^ 0x2e;
              *pbVar21 = (byte)(uVar31 >> (bVar35 & 0x1f)) | 0xf0;
              pbVar21[1] = (byte)(uVar31 >> 6) & 0x3f | 0x80;
              pbVar21[2] = bVar23 & 0x3f | 0x80;
              pbVar21[bVar35 - 9] = bVar30 | 0x80;
              *(longlong *)((longlong)&local_1788 + uVar60) = lVar27 + 4;
              puVar28 = &switchD_08fe023b::switchdataD_08ffae28;
              if (puVar22 == puVar59) {
                puVar28 = &switchD_08fe023b::switchdataD_08ffad18;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar28) {
              case 0xfffff4bc:
                goto switchD_08fdba6e_caseD_d0;
              }
            }
            goto switchD_08fdba6e_caseD_1e0;
          case 0xfffff8e0:
            lVar26 = 2;
            FUN_08fa5f6a(&local_1788,2);
            *(byte *)((longlong)local_1788 + lVar27) = bVar23 | 0xc0;
            *(byte *)((longlong)local_1788 + lVar27 + 1) = bVar30 | 0x80;
                    /* WARNING: Switch is manually overridden */
          }
          break;
        case 0xfffff4bc:
switchD_08fdba6e_caseD_d0:
          pppppppuVar52 = local_1788;
          local_1268 = local_1778;
          local_1278 = local_1788;
          pppppppuStack_1270 = (ulonglong *******)puStack_1780;
          local_1788 = (ulonglong *******)&local_1278;
          local_1e58 = (undefined8 *)0x0;
          local_1e68[0] = 0;
          FUN_08fba6b1(pppppppuVar52,(longlong)puStack_1780,1,1);
          FUN_08fba6b1(puVar22,(ulonglong)(uVar34 + 0xdf638a4d),1,1);
          pppppppuVar19 = pppppppuVar53;
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_08fdbb03_case_0;
        }
      } while( true );
    case (undefined8 *)0x3:
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
  }
switchD_08fdba6e_caseD_1b8:
  FUN_08fcb993(&local_1278,(ulonglong)puVar28,'\0',1,1);
  pppppppuVar52 = (ulonglong *******)((longlong)puVar28 + (longlong)local_1ec8);
  if ((char)local_1278 != '\0') {
switchD_08fdba6e_caseD_ec:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  local_1788 = pppppppuStack_1270;
  puStack_1780 = (ulonglong *)local_1268;
  puVar28 = &UINT_08ffacec;
  if (((ulonglong)pppppppuVar45 & 1) != 0) {
    puVar28 = &switchD_08fe023b::switchdataD_08ffacd0;
  }
  local_1778 = (ulonglong *******)0x0;
  pppppppuVar19 = pppppppuStack_1270;
  pppppppuVar45 = local_1ec8;
                    /* WARNING: Switch is manually overridden */
  switch(*puVar28) {
  case 0x46f5:
switchD_08fdba6e_caseD_88:
    do {
      pppppppuVar55 = local_1778;
      bVar23 = *(byte *)pppppppuVar45;
      uVar57 = (uint)bVar23;
      cVar10 = ((char)local_1c40 + 'T') * '/';
      puVar28 = &switchD_08fde5dc::switchdataD_08ffaf98;
      if ((char)(cVar10 + '}') < (char)bVar23) {
        puVar28 = &UINT_08ffadb4;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar28) {
      case 0x1f7f:
        local_1ec8 = (ulonglong *******)((longlong)pppppppuVar45 + 1);
        puVar28 = &switchD_08fdf484::switchdataD_08ff91c4;
                    /* WARNING: Switch is manually overridden */
switchD_08fe0ca7_caseD_2c0:
        puVar16 = &switchD_08fe023b::switchdataD_08ffad98;
        if (uVar57 == 0x5c) {
          puVar16 = &switchD_08fe023b::switchdataD_08ffac78;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar16) {
        case 0x17bf:
          goto switchD_08fdba6e_caseD_30;
        case 0x1c56:
switchD_08fdba6e_caseD_150:
          cVar10 = -0x4c;
          puVar16 = &switchD_08fde5dc::switchdataD_08ffafa8;
          if (uVar57 < 0x80) {
            puVar16 = &UINT_08ffad8c;
          }
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar16) {
        case 0x1d2:
                    /* WARNING: Switch is manually overridden */
          switch((uVar57 < 0x800) * '\x03') {
          case '\0':
            bVar62 = uVar57 < (uVar34 ^ 0x209d75e5);
            pppppppuVar61 = (ulonglong *******)&local_1788;
            FUN_08fa5f6a(pppppppuVar61,4 - (ulonglong)bVar62);
            bVar23 = (byte)(uVar57 >> 6) & 0x3f | 0x80;
            puVar28 = (uint *)((ulonglong)uVar57 & 0xffffffffffffff3f | 0x80);
            pppppppuVar19 = (ulonglong *******)((longlong)local_1788 + (longlong)pppppppuVar55);
            uVar12 = uVar57 >> ((bVar29 ^ 0xe9) & 0x1f);
            pppppppuVar42 = (ulonglong *******)(ulonglong)uVar12;
            pppppppuVar14 = local_1788;
            pppppppuVar45 = local_1788;
                    /* WARNING: Switch is manually overridden */
            switch(bVar62 * '\x02') {
            case '\0':
              *(byte *)pppppppuVar19 = (byte)(uVar57 >> 0x12) | bVar29 ^ 0x15;
              *(byte *)((longlong)pppppppuVar19 + 1) = (byte)uVar12 & 0x3f | 0x80;
              *(byte *)((longlong)pppppppuVar19 + (ulonglong)(uVar34 ^ 0x209c75e7)) = bVar23;
              *(char *)((longlong)pppppppuVar19 + 3) = (char)puVar28;
              pppppppuVar42 = (ulonglong *******)((longlong)pppppppuVar55 + 4);
              pppppppuVar19 = local_1788;
                    /* WARNING: Switch is manually overridden */
              goto override_jmp_08fdfca4_case_0;
            case '\x02':
              goto switchD_08fdd2f2_caseD_1;
            }
            goto switchD_08fdf0a8_caseD_0;
          case '\x02':
            goto switchD_08fde943_caseD_1;
          case '\x03':
            FUN_08fa5f6a(&local_1788,(ulonglong)(uVar34 + 0xdf638a1d));
            *(byte *)((longlong)local_1788 + (longlong)pppppppuVar55) =
                 bVar29 - 0x25 | (byte)(uVar57 >> 6);
            ((undefined1 *)((longlong)local_1788 + 1))[(longlong)pppppppuVar55] =
                 (byte)uVar57 & 0x3f | 0x80;
            pppppppuVar19 = local_1788;
                    /* WARNING: Switch is manually overridden */
            goto override_jmp_08fdc10d_case_2;
          }
          break;
        case 13999:
          FUN_08fa5f6a(&local_1788,1);
          *(byte *)((longlong)local_1788 + (longlong)pppppppuVar55) = (byte)uVar57;
          pppppppuVar42 = (ulonglong *******)((longlong)pppppppuVar55 + 1);
          pppppppuVar19 = local_1788;
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_08fdfca4_case_0;
        }
switchD_08fde943_caseD_0:
        pppppppuVar61 = (ulonglong *******)((ulonglong)puVar28 & 0xff);
                    /* WARNING: Switch is manually overridden */
        goto switchD_08fdf0a8_caseD_0;
      case 0x2e78:
        bVar30 = bVar23 & bVar29 + 0x3a;
        local_1ec8 = (ulonglong *******)
                     ((ulonglong)(byte)((bVar29 + 0x3a) - (cVar10 + -0x65)) +
                     (longlong)pppppppuVar45);
        uVar12 = *(byte *)((longlong)pppppppuVar45 + 1) & 0x3f;
        puVar28 = (uint *)(ulonglong)uVar12;
        uVar57 = (uint)bVar30 << 6 | uVar12;
                    /* WARNING: Switch is manually overridden */
        switch(0xdf < bVar23) {
        case false:
          goto switchD_08fe0ca7_caseD_2c0;
        case true:
          uVar12 = uVar12 << 6 | *(byte *)local_1ec8 & 0x3f;
          puVar28 = (uint *)(ulonglong)uVar12;
          uVar57 = (uint)bVar30 << 0xc | uVar12;
          local_1ec8 = (ulonglong *******)((longlong)pppppppuVar45 + 3);
                    /* WARNING: Switch is manually overridden */
          switch((byte)(bVar29 + 10) < bVar23) {
          case false:
            goto switchD_08fe0ca7_caseD_2c0;
          case true:
            local_1ec8 = (ulonglong *******)
                         ((ulonglong)(uVar34 + 0xdf638a1f) + (longlong)pppppppuVar45);
            puVar28 = (uint *)(ulonglong)(uVar12 << 6);
            uVar57 = uVar34 + 0xdf638a5a & (uint)*(byte *)((longlong)pppppppuVar45 + 3) |
                     (uint)bVar30 << (((byte)(uVar34 + 0xdf638a1f) ^ 0x16) & 0x1f) & 0x1c0000 |
                     uVar12 << 6;
            puVar16 = &switchD_08fe023b::switchdataD_08ffad98;
            if (uVar57 == 0x5c) {
              puVar16 = &switchD_08fe023b::switchdataD_08ffac78;
            }
          }
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar16) {
        case 0x1c56:
          goto switchD_08fdba6e_caseD_150;
        }
      }
switchD_08fdba6e_caseD_30:
                    /* WARNING: Switch is manually overridden */
      switch(local_1ec8 != pppppppuVar52) {
      case false:
        local_1e08 = (undefined8 *)0x0;
        local_1e18 = 0;
        if ((ulonglong *******)(ulonglong)(0x209c75e5 - uVar34) != local_1778) goto LAB_08fdc3a7;
        local_1e58 = (undefined8 *)0x0;
        local_1e68[0] = 0;
        local_1e68[1] = uStack_1e10;
        pppppppuVar45 = (ulonglong *******)puStack_1780;
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_08fdc035_case_0;
      }
      pppppppuVar45 = (ulonglong *******)((longlong)local_1ec8 + 1);
      puVar28 = (uint *)CONCAT71((int7)((ulonglong)puVar28 >> 8),*(char *)local_1ec8);
      cVar10 = bVar29 + 0x1a;
                    /* WARNING: Switch is manually overridden */
      switch(*(char *)local_1ec8 <= cVar10) {
      case false:
        goto switchD_08fde943_caseD_0;
      }
switchD_08fde943_caseD_1:
      bVar11 = (byte)puVar28;
      uVar57 = (uint)(bVar11 & 0x1f);
      pppppppuVar14 = (ulonglong *******)((ulonglong)(uVar34 + 0xdf638a1d) + (longlong)local_1ec8);
      bVar30 = *(byte *)pppppppuVar45;
      bVar35 = (byte)(uVar34 + 0xdf638a1d);
      bVar43 = -bVar35 - 0x1f;
      bVar35 = bVar35 ^ 4;
      pppppppuVar61 = (ulonglong *******)(ulonglong)(uVar57 << (bVar35 & 0x1f) | bVar30 & 0x3f);
      bVar23 = 0xb4;
      pppppppuVar42 = pppppppuVar3;
      pppppppuVar45 = pppppppuVar14;
                    /* WARNING: Switch is manually overridden */
      switch((bVar43 < bVar11) * '\x02') {
      case '\x01':
switchD_08fdd2f2_caseD_1:
        *(byte *)pppppppuVar19 = (byte)pppppppuVar42 | 0xe0;
        *(byte *)((longlong)pppppppuVar19 + 1) = bVar23;
        *(char *)((longlong)pppppppuVar19 + 2) = (char)puVar28;
        pppppppuVar42 = (ulonglong *******)((longlong)pppppppuVar55 + 3);
        pppppppuVar19 = pppppppuVar14;
                    /* WARNING: Switch is manually overridden */
        goto override_jmp_08fdfca4_case_0;
      case '\x02':
        pppppppuVar19 = (ulonglong *******)((longlong)local_1ec8 + 3);
        lVar27 = *(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8);
        uVar12 = *(byte *)pppppppuVar14 & 0x3f |
                 (bVar30 & 0x3f) <<
                 (((byte)*(undefined8 *)(lVar27 + 0x2b0) ^
                  (char)*(undefined4 *)(lVar27 + 0x1a4) * '#' + 0x38U) - bVar43 & 0x1f);
        pppppppuVar61 = (ulonglong *******)(ulonglong)(uVar57 << 0xc | uVar12);
        pppppppuVar45 = pppppppuVar19;
                    /* WARNING: Switch is manually overridden */
        switch((bVar11 <= (byte)(bVar35 + (bVar43 + cVar10 ^ ((char)local_1c78 + 'v') * '1'))) *
               '\x02') {
        case '\0':
          pppppppuVar45 = (ulonglong *******)((longlong)local_1ec8 + 4);
          pppppppuVar61 =
               (ulonglong *******)
               (ulonglong)(*(byte *)pppppppuVar19 & 0x3f | uVar12 << 6 | (uVar57 & 7) << 0x12);
          local_1ec8 = pppppppuVar45;
                    /* WARNING: Switch is manually overridden */
          break;
        case '\x01':
override_jmp_08fdc10d_case_2:
          pppppppuVar42 = (ulonglong *******)((longlong)pppppppuVar55 + 2);
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_08fdfca4_case_0;
        }
      }
switchD_08fdf0a8_caseD_0:
      FUN_08fa5f6a(&local_1788,1);
      pppppppuVar42 = (ulonglong *******)((longlong)pppppppuVar55 + 1);
      uVar57 = (uint)pppppppuVar61;
      pppppppuVar19 = local_1788;
      local_1778 = pppppppuVar42;
      if (0x6d < (int)uVar57) {
        if (uVar57 == 0x6e) {
          *(byte *)((longlong)local_1788 + (longlong)pppppppuVar55) = -0x11 - bVar29;
          local_1ec8 = pppppppuVar45;
                    /* WARNING: Switch is manually overridden */
        }
        else if (uVar57 == 0x72) {
          *(byte *)((longlong)local_1788 + (longlong)pppppppuVar55) = bVar29 + 0x28;
          local_1ec8 = pppppppuVar45;
                    /* WARNING: Switch is manually overridden */
        }
        else if (uVar57 == 0x74) {
          *(byte *)((longlong)local_1788 + (longlong)pppppppuVar55) = bVar29 ^ 0xec;
          puVar28 = (uint *)0x8fdea07;
          local_1ec8 = pppppppuVar45;
                    /* WARNING: Switch is manually overridden */
        }
        else {
LAB_08fddb7e:
          uVar12 = uVar34 ^ 0x209c75b9;
          *(char *)((longlong)local_1788 + (longlong)pppppppuVar55) = (char)uVar12;
          puVar16 = &UINT_08ffaca4;
          if (uVar57 < 0x80) {
            puVar16 = &switchD_08fde5dc::switchdataD_08ffafa0;
          }
          bVar23 = (byte)pppppppuVar61;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar16) {
          case 0x384b:
            uVar31 = uVar34 + 0xdf63921b;
                    /* WARNING: Switch is manually overridden */
            switch((uVar31 <= uVar57) * '\x02') {
            case '\0':
              FUN_08fa5f6a(&local_1788,2);
              *(byte *)((longlong)local_1788 + (longlong)pppppppuVar42) =
                   0x24 - bVar29 ^ 0xff | (byte)((ulonglong)pppppppuVar61 >> 6);
              ((undefined1 *)((longlong)local_1788 + 1))[(longlong)pppppppuVar42] =
                   bVar23 & 0x24 - bVar29 | 0x80;
              local_1778 = (ulonglong *******)((longlong)pppppppuVar55 + 3);
              lVar27 = 0x88;
              if (pppppppuVar45 == pppppppuVar52) {
                lVar27 = 0x268;
              }
              pppppppuVar19 = local_1788;
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0xfffffd72:
                goto switchD_08fe0ca7_caseD_268;
              }
              goto switchD_08fdba6e_caseD_88;
            case '\x02':
              FUN_08fa5f6a(&local_1788,4 - (ulonglong)(uVar57 < 0x10000));
              bVar30 = bVar29 ^ 0x65;
              pbVar21 = (byte *)((longlong)local_1788 + (longlong)pppppppuVar42);
              bVar23 = (bVar23 & 0x3f) + bVar30;
              bVar30 = 0xbf - bVar30 & (byte)(uVar57 >> (0x86 - bVar30 & 0x1f)) | 0x80;
              bVar35 = (byte)(uVar57 >> 0xc);
              pppppppuVar19 = local_1788;
                    /* WARNING: Switch is manually overridden */
              switch(uVar57 >= 0x10000) {
              case false:
                *pbVar21 = bVar35 + (bVar29 ^ 5);
                pbVar21[1] = bVar30;
                puVar28 = (uint *)(ulonglong)(uVar34 ^ 0x209c75e7);
                pbVar21[(longlong)puVar28] = bVar23;
                local_1778 = (ulonglong *******)((longlong)pppppppuVar55 + 4);
                lVar27 = 0x88;
                if (pppppppuVar45 == pppppppuVar52) {
                  lVar27 = 0x268;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27))
                {
                case 0xfffffd72:
                  goto switchD_08fe0ca7_caseD_268;
                }
                break;
              case true:
                uVar60 = (ulonglong)uVar12 + (ulonglong)uVar31 ^
                         (*(ulonglong *)
                           (*(longlong *)
                             (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                           0xd0) ^ (ulonglong)uVar31) * -0x628b86f61a604fa9 - (ulonglong)uVar12;
                bVar35 = (byte)uVar60 | bVar35 & 0x3f;
                puVar28 = (uint *)CONCAT71((int7)(uVar60 >> 8),bVar35);
                *pbVar21 = (byte)(uVar57 >> 0x12) | 0xf0;
                pbVar21[1] = bVar35;
                pbVar21[2] = bVar30;
                pbVar21[3] = bVar23;
                local_1778 = (ulonglong *******)((longlong)pppppppuVar55 + 5);
                lVar27 = 0x88;
                if (pppppppuVar45 == pppppppuVar52) {
                  lVar27 = 0x268;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27))
                {
                case 0xfffffd72:
                  goto switchD_08fe0ca7_caseD_268;
                }
              }
              goto switchD_08fdba6e_caseD_88;
            }
            break;
          case 0x4920:
            FUN_08fa5f6a(&local_1788,1);
            *(byte *)((longlong)local_1788 + (longlong)pppppppuVar42) = bVar23;
            local_1778 = (ulonglong *******)((longlong)pppppppuVar55 + 2);
            lVar27 = 0x88;
            if (pppppppuVar45 == pppppppuVar52) {
              lVar27 = 0x268;
            }
            pppppppuVar19 = local_1788;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0xfffffd72:
              goto switchD_08fe0ca7_caseD_268;
            }
            goto switchD_08fdba6e_caseD_88;
          }
        }
override_jmp_08fdfca4_case_0:
        lVar27 = 0x88;
        if (local_1ec8 == pppppppuVar52) {
          lVar27 = 0x268;
        }
        pppppppuVar45 = local_1ec8;
        local_1778 = pppppppuVar42;
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
        case 0xfffffd72:
          goto switchD_08fe0ca7_caseD_268;
        }
        goto switchD_08fdba6e_caseD_88;
      }
      if (uVar57 != 0x22) {
        if (uVar57 != 0x2f) {
          if (uVar57 != 0x5c) goto LAB_08fddb7e;
          *(byte *)((longlong)local_1788 + (longlong)pppppppuVar55) = bVar29 ^ 0xb9;
          puVar28 = (uint *)0x8fdea07;
          local_1ec8 = pppppppuVar45;
                    /* WARNING: Switch is manually overridden */
          goto override_jmp_08fdfca4_case_0;
        }
        *(undefined1 *)((longlong)local_1788 + (longlong)pppppppuVar55) = 0x2f;
        lVar27 = 0x88;
        if (pppppppuVar45 == pppppppuVar52) {
          lVar27 = 0x268;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
        case 0xfffffd72:
          goto switchD_08fe0ca7_caseD_268;
        }
        goto switchD_08fdba6e_caseD_88;
      }
      *(byte *)((longlong)local_1788 + (longlong)pppppppuVar55) = bVar29 + 0x3d;
      lVar27 = 0x88;
      if (pppppppuVar45 == pppppppuVar52) {
        lVar27 = 0x268;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
      case 0xfffffd72:
        goto switchD_08fe0ca7_caseD_268;
      }
    } while( true );
  case 0xfffffa20:
    local_1e08 = (undefined8 *)0x0;
    local_1e18 = 0;
    local_1e58 = (undefined8 *)0x0;
    local_1e68[0] = 0;
    local_1e68[1] = uStack_1e10;
    pppppppuVar45 = local_1268;
                    /* WARNING: Switch is manually overridden */
  }
override_jmp_08fdc035_case_0:
  FUN_08fba6b1(pppppppuVar19,(longlong)pppppppuVar45,1,1);
  FUN_08fba6b1(local_1c00,local_1bf8,1,1);
  FUN_08fba6b1(local_1b98,local_1b90,1,1);
  FUN_08fba6b1(pppppppuVar53,(longlong)puVar9,1,1);
                    /* WARNING: Switch is manually overridden */
override_jmp_08fdbf88_case_0:
  local_b10[0] = (ulonglong ******)0x0;
  local_b20[0] = (ulonglong *******)0x0;
  local_1a68[0] = (ulonglong *******)0x9b46acab9731d40e;
  local_1278 = (ulonglong *******)&UNK_08ff4968;
  pppppppuStack_1270 = (ulonglong *******)&DAT_00000017;
  uVar57 = uVar34 + 0xdf638a2b;
  *(ulonglong *********)((longlong)&local_1278 + (ulonglong)uVar57) = local_1a68;
  puVar28 = &UINT_08ffb024;
  if (DAT_0900aa68 == 0x10 - uVar57) {
    puVar28 = &UINT_08ffaffc;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar28) {
  case 0x2537:
    FUN_08fef46f(0x900aa50,&local_1278);
  }
  FUN_08fa7c6e(&local_1278,DAT_0900aa50,DAT_0900aa60);
  FUN_08f9eb17(&local_1aa0,local_1e00,(ulonglong)local_1df8,&local_1278);
  uVar12 = 0x209c75f5 - uVar34;
  FUN_08f9a2a0(&local_1ab8,(longlong)local_1aa0,
               *(ulonglong *)((longlong)local_1a68 + ((ulonglong)uVar12 - 0x38)));
  uVar60 = (ulonglong)uVar12 ^ 0xffffffffffffffef;
                    /* WARNING: Switch is manually overridden */
  switch(local_1ab0 == uVar60 | 2) {
  case 2:
    puVar6 = *(undefined1 **)
              ((longlong)local_1a68 +
              ((ulonglong)(((uint)DAT_0900a170 ^ (uint)DAT_0900c396 * -0x3bcf + 0xc7a) & 0xffff) -
              0x50));
    FUN_08fba6b1(local_1aa0,local_1a98,1,1);
    FUN_08fc0046(&local_1278,(longlong)local_1ab8,(ulonglong)puVar6);
                    /* WARNING: Switch is manually overridden */
    switch((ulonglong)local_1278 & 0xffffffff) {
    case 0:
      local_1d00 = &local_1b20;
      local_1b20 = 0x19ac3d10df8f0b52;
      local_1d10 = &UNK_08ff862f;
      local_1d08 = ((local_1c38 ^ uVar57) - (ulonglong)uVar12 ^ (ulonglong)uVar57) - uVar60;
      if (_DAT_0900a860 != 0) {
        FUN_08fef46f(0x900a848,&local_1d10);
                    /* WARNING: Switch is manually overridden */
      }
      FUN_08fa7c6e(local_1a68,_DAT_0900a848,_DAT_0900a858);
      uVar60 = (-uVar60 - _DAT_09009610) * 0x68f795390c63afff;
      pcVar33 = (char *)((longlong)local_1ab8 + (longlong)puVar6);
      puVar37 = (undefined1 *)0x0;
      puVar46 = (undefined1 *)0x0;
                    /* WARNING: Switch is manually overridden */
      switch(0x8fdd35a) {
      case 0x8fddbbb:
        goto switchD_08fdba6e_caseD_6c;
      }
switchD_08fe0ca7_caseD_2f4:
      do {
        pppppppuVar52 = local_1a68[2];
        pppppppuVar53 = local_1a68[0];
        FUN_08faab02(&local_1278,(undefined1 *)((longlong)local_1ab8 + (longlong)puVar46),
                     (longlong)puVar6 - (longlong)puVar46,(undefined1 *)local_1a68[0],
                     (ulonglong)local_1a68[2]);
        FUN_08f92455((ulonglong *)&local_640,(longlong *)&local_1278);
        lVar27 = local_638;
        lVar26 = 0x1e8;
        if ((char)local_640 != '\0') {
          lVar26 = 0x240;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar26)) {
        case 0x670:
          puVar22 = FUN_08fc693d(0,0x3e);
          puVar28 = &UINT_08ffae04;
          if (puVar22 == (undefined8 *)0x0) {
            puVar28 = &UINT_08ffad34;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0x2fe6:
            goto switchD_08fdba6e_caseD_ec;
          case 0xfffff9d6:
            puVar39 = puVar46 + lVar27;
            puVar37 = (undefined1 *)((longlong)pppppppuVar52 + (longlong)puVar39);
            *(undefined8 *)((longlong)puVar22 + 0x2e) = 0x7220746f6e206669;
            *(undefined8 *)((longlong)puVar22 + 0x36) = 0x656d6f7320646165;
            puVar22[4] = 0x6c6c657420776f6c;
            puVar22[5] = 0x6669206e61656d20;
            puVar22[2] = 0x6120646e61207468;
            puVar22[3] = 0x6c6f662074756f62;
            *puVar22 = 0x676e696874206f74;
            puVar22[1] = 0x67697220796e6120;
            lVar27 = 0x26c;
            if (puVar39 == (undefined1 *)0x0) {
              lVar27 = 0x138;
            }
            puVar46 = puVar37;
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0x64a:
              lVar27 = 0x9c;
              if (puVar39 + -1 < puVar6) {
                lVar27 = 0x388;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
              case 0x30f5:
                    /* WARNING: Does not return */
                pcVar7 = (code *)invalidInstructionException();
                (*pcVar7)();
              }
              do {
                puVar40 = puVar39 + -1;
                bVar23 = *(byte *)((longlong)local_1ab8 + (longlong)(puVar39 + -1));
                if ((0x20 < (ulonglong)bVar23) ||
                   ((0x100002600U >> ((ulonglong)bVar23 & 0x3f) & 1) == 0)) {
                  if (bVar23 == 0x7b) {
                    puVar28 = &UINT_08ffb03c;
                    if (puVar40 == puVar6) {
                      puVar28 = &switchD_08fe023b::switchdataD_08ffad80;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar28) {
                    case 0xffffffae:
                      pcVar2 = (char *)((longlong)local_1ab8 + (longlong)puVar40);
                      cVar10 = '{';
                      lVar26 = 0;
                      pcVar49 = pcVar2;
                      lVar27 = 0;
                      goto LAB_08fdc572;
                    }
                  }
                  break;
                }
                puVar39 = puVar40;
              } while (puVar40 != (undefined1 *)(ulonglong)(0x209c75e5 - uVar34));
            }
switchD_08fdba6e_caseD_138:
            FUN_08fba6b1(puVar22,(ulonglong)(uVar34 + 0xdf638a59),1,1);
            puVar28 = &UINT_08ffaf3c;
                    /* WARNING: Switch is manually overridden */
            if (puVar37 != (undefined1 *)0x0) {
              puVar28 = &UINT_08ffacb4;
            }
          }
          break;
        case 0x3e9e:
          local_1d98 = local_b10[0];
          local_1da8 = local_b20[0];
          pppppppuStack_1da0 = local_b20[1];
          FUN_08fba6b1(pppppppuVar53,(longlong)local_1a68[1],1,1);
          FUN_08fba6b1(local_1ab8,local_1ab0,1,1);
          goto override_jmp_08fdcba5_case_0;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0x1607:
switchD_08fdba6e_caseD_6c:
          puVar28 = &switchD_08fe023b::switchdataD_08ffae68;
          if (puVar37 < puVar6) {
            puVar28 = &UINT_08ffaf84;
          }
          puVar46 = puVar37;
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0xf5:
            lVar27 = 800;
            if ((char)(-0x5c - bVar29) < *(char *)((longlong)local_1ab8 + (longlong)puVar37)) {
              lVar27 = 0x2f4;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0x163e:
              goto switchD_08fe0ca7_caseD_320;
            }
            break;
          case 0x2291:
            puVar28 = &switchD_08fde5dc::switchdataD_08ffaf68;
            if (puVar6 == puVar37) {
              puVar28 = &UINT_08ffaf3c;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*puVar28) {
            case 0x163e:
switchD_08fe0ca7_caseD_320:
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
          }
        }
      } while( true );
    case 1:
      FUN_08fba6b1(local_1ab8,local_1ab0,1,1);
      local_1d98 = local_b10[0];
      local_1da8 = local_b20[0];
      pppppppuStack_1da0 = local_b20[1];
                    /* WARNING: Switch is manually overridden */
                    /* WARNING: Switch is manually overridden */
    }
    break;
  case 3:
    FUN_08fba6b1(local_1aa0,local_1a98,1,1);
    local_1d98 = local_b10[0];
    local_1da8 = local_b20[0];
    pppppppuStack_1da0 = local_b20[1];
                    /* WARNING: Switch is manually overridden */
  }
override_jmp_08fdcba5_case_0:
  local_12c0 = (ulonglong)(local_1d68 != (ulonglong *******)0x0);
  uVar60 = 0;
  if (local_1d68 != (ulonglong *******)0x0) {
    uVar60 = local_1d78;
  }
  local_12b8 = local_1d70;
  local_12b0 = local_1d68;
  local_12a8 = 0;
  uVar31 = uVar34 + 0xdf638a3b;
  *(ulonglong *)((longlong)local_1530 + (ulonglong)uVar31 + 0x270) = local_12c0;
  local_1298 = local_1d70;
  local_1290 = local_1d68;
  local_1288 = 0;
  uVar12 = uVar31 ^ 0x60;
  *(ulonglong *)((longlong)local_1530 + (ulonglong)uVar12 + 0x270) = uVar60;
  uVar47 = 0x30 - uVar31;
  uVar57 = uVar34 + 0xdf638a23;
  uVar44 = 0x28 - uVar31;
  local_1e40 = (byte *)(ulonglong)
                       (-((uVar31 ^ uVar12) + ((uint)DAT_0900c392 * -0x6e9d - uVar31)) & 0xffff);
  local_1e30 = (ulonglong *******)
               (ulonglong)(byte)(((byte)uVar12 ^ (byte)uVar57) + DAT_0900c3be ^ (byte)uVar57);
  local_1e48 = (ulonglong *******)(ulonglong)(ushort)uVar47;
  local_1c90 = (ulonglong)uVar57;
  local_1ca8 = (ulonglong)uVar57;
  local_1ce8 = (undefined8 *)((longlong)&local_1278 + (ulonglong)(uVar31 ^ 0xa8));
  local_1cf0 = (undefined8 *)((longlong)&local_1278 + (ulonglong)(uVar31 ^ 0x80));
  local_1cf8 = (ulonglong *)((longlong)&local_1278 + (ulonglong)(uVar31 ^ 0x78));
  local_1cc0 = *local_1dc8;
  local_1cc8 = (char *)local_1dc8[1];
  local_1cd0 = *local_1d88;
  local_1cd8 = local_1d88[2];
  local_1dd0 = (ulonglong)uVar47;
  local_1c98 = (ulonglong)uVar44;
  local_1ce0 = (ulonglong)(uVar44 & 0xffff);
  local_1e38 = 1;
  local_1cb0 = (ulonglong)(uVar47 & 0xff);
  local_1cb8 = (ulonglong)(uVar31 & 0xff);
  local_1dc8 = (longlong *)(ulonglong)(uVar44 & 0xff);
LAB_08fe074d:
  FUN_08f9b622(&local_1b08,(byte *)&local_12c0);
  puVar22 = local_1b08;
  local_1ca0 = local_1b00;
  puVar28 = &UINT_08ffac4c;
  if (local_1b00 == -0x50658eecdf638a1c - (longlong)pppppppuVar3) {
    puVar28 = &UINT_08ffafe4;
  }
                    /* WARNING: Switch is manually overridden */
  switch(*puVar28) {
  case 0x6ab:
    FUN_08fa5cff((byte *)&local_12c0);
    FUN_08fabc94((longlong *)&local_1da8);
    FUN_08fabc94(local_1e68);
    FUN_08fba6b1(local_8b0,
                 *(longlong *)((longlong)local_8c8 + (ulonglong)(uVar34 ^ 0x209c75ed) + 0x18),1,1);
    break;
  case 0x2ed3:
    local_1e20 = local_1af0;
    uVar60 = *(ulonglong *)((longlong)&local_1b08 + local_1cb0);
    local_1de8 = *(longlong *)((longlong)&local_1b08 + local_1cb8);
    local_1e78 = local_1ae0;
    puVar28 = &switchD_08fe023b::switchdataD_08ffae20;
    if (local_1e58 == (undefined8 *)0x0) {
      puVar28 = &UINT_08ffae0c;
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar28) {
    case 0x1c9b:
switchD_08fdba6e_caseD_1c4:
      plVar20 = (longlong *)0x0;
      plVar41 = (longlong *)0x0;
                    /* WARNING: Switch is manually overridden */
      switch(0x8fdec2a) {
      case 0x8fde802:
switchD_08fe0ca7_caseD_1f4:
        puVar59 = (undefined8 *)*plVar20;
        plVar20 = (longlong *)plVar20[2];
        break;
      case 0x8fdec2a:
switchD_08fe0ca7_caseD_2b4:
        puVar59 = (undefined8 *)0x0;
      }
      puVar48 = puVar59;
      if (puVar59 == (undefined8 *)0x0) {
        puVar48 = puVar22;
      }
      FUN_08fc66b4(&local_1d60,puVar48,
                   (uVar60 ^ (ulonglong)plVar20) & -(ulonglong)(puVar59 == (undefined8 *)0x0) ^
                   (ulonglong)plVar20);
      local_1e90 = local_1d60;
      cVar10 = FUN_08fd214c(local_1d60,local_1d50);
      puVar28 = &switchD_08fe023b::switchdataD_08ffad20;
      if (cVar10 != '\0') {
        puVar28 = &UINT_08ffaf24;
      }
      break;
    case 0x3871:
      local_1e90 = (LPVOID)local_1e68[1];
      uVar15 = (ulonglong)*(ushort *)(local_1e58 + 0x44);
      puVar59 = local_1e58 + uVar15 * 3;
      uVar51 = 0;
      puVar48 = local_1e58;
      puVar38 = local_1e58;
                    /* WARNING: Switch is manually overridden */
      switch(local_1e58 == puVar59) {
      case true:
        goto switchD_08fe0ca7_caseD_230;
      }
switchD_08fdba6e_caseD_130:
      do {
        uVar4 = puVar48[2];
        _Size = uVar4;
        if (uVar60 < uVar4) {
          _Size = uVar60;
        }
        iVar36 = memcmp(puVar22,(void *)*puVar48,_Size);
        lVar27 = (longlong)iVar36;
        if (iVar36 == 0) {
          lVar27 = uVar60 - uVar4;
        }
        cVar10 = (0 < lVar27) - (lVar27 < 0);
                    /* WARNING: Switch is manually overridden */
        switch(cVar10 != '\x01') {
        case false:
          puVar48 = puVar48 + 3;
          uVar51 = uVar51 + 1;
                    /* WARNING: Switch is manually overridden */
          switch(puVar48 == puVar59) {
          case true:
switchD_08fe0ca7_caseD_230:
            do {
              puVar28 = &UINT_08ffae0c;
              if (local_1e90 != (LPVOID)(ulonglong)(uVar34 ^ 0x209c75e5)) {
                puVar28 = &switchD_08fe023b::switchdataD_08ffad60;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar28) {
              case 0x1c9b:
                goto switchD_08fdba6e_caseD_1c4;
              }
              local_1e90 = (LPVOID)((longlong)local_1e90 - 1);
              puVar48 = (undefined8 *)puVar38[uVar15 + 0x45];
              uVar15 = (ulonglong)*(ushort *)(puVar48 + 0x44);
              puVar59 = puVar48 + uVar15 * 3;
              uVar51 = 0;
              puVar38 = puVar48;
                    /* WARNING: Switch is manually overridden */
              switch(puVar48 == puVar59) {
              case false:
                goto switchD_08fdba6e_caseD_130;
              }
            } while( true );
          }
          break;
        case true:
          puVar28 = &UINT_08ffae9c;
          if (0 < lVar27 != lVar27 < 0) {
            puVar28 = &UINT_08ffae64;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*puVar28) {
          case 0x19bb:
            puVar28 = &switchD_08fe023b::switchdataD_08ffac58;
            if (cVar10 == -1) {
              puVar28 = &switchD_08fe023b::switchdataD_08ffae78;
            }
            uVar15 = uVar51;
                    /* WARNING: Switch is manually overridden */
            switch(*puVar28) {
            case 0:
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            goto switchD_08fe0ca7_caseD_230;
          case 0x2af6:
            plVar41 = puVar38 + uVar51 * 3 + 0x21;
            plVar20 = FUN_08fd641b((longlong)pppppppuStack_1da0,local_1d98,(void *)*plVar41,
                                   puVar38[uVar51 * 3 + 0x23]);
            if (plVar20 == (longlong *)0x0) {
              plVar20 = plVar41;
            }
            lVar27 = 500;
            if (plVar20 == (longlong *)0x0) {
              lVar27 = 0x2b4;
            }
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
          case 0x224e:
            goto switchD_08fe0ca7_caseD_1f4;
          }
          goto switchD_08fe0ca7_caseD_2b4;
        }
      } while( true );
    }
                    /* WARNING: Switch is manually overridden */
    switch(*puVar28) {
    case 0x9dd:
      FUN_08fba6b1(local_1e90,lStack_1d58,1,1);
      puVar59 = local_1e20;
      FUN_08f8b478((longlong)local_1e20,(longlong)local_1e78);
      FUN_08fba6b1(puVar59,local_1de8,8,0x20);
                    /* WARNING: Switch is manually overridden */
      break;
    case 0x12b9:
      pcVar33 = local_1cc8;
      local_1df0 = FUN_08f9ee69(local_1cc0,(longlong)local_1cc8);
      local_1d80 = pcVar33;
      FUN_08fa7c6e(local_1bd0,local_1cd0,(ulonglong)local_1cd8);
      FUN_08fd9129(&local_1278,(byte *)local_1e00,(ulonglong)local_1df8);
      pppppppuVar52 = pppppppuStack_1270;
      pppppppuVar53 = local_1278;
      FUN_08fc66b4(&local_1be8,pppppppuStack_1270,
                   (ulonglong)
                   (((longlong)local_1260 - (longlong)local_1268 &
                    -(ulonglong)((uint)local_1278 & 1)) + (longlong)local_1268));
      local_1e24 = 0x209c75e5 - uVar34;
      puVar28 = &UINT_08ffaec4;
      if (pppppppuVar53 == (ulonglong *******)(ulonglong)local_1e24) {
        puVar28 = &UINT_08ffacbc;
      }
                    /* WARNING: Switch is manually overridden */
      switch(*puVar28) {
      case 0xc94:
        FUN_08fba6b1(pppppppuVar52,(longlong)local_1268,1,1);
                    /* WARNING: Switch is manually overridden */
        switch((&switchD_08fde41e::switchdataD_08ff9110)[plVar41 != (longlong *)0x0]) {
        case 0xfffe3983:
          goto switchD_08fdba6e_caseD_58;
        case 0xfffe6b0d:
switchD_08fde41e_caseD_1:
          FUN_08fa7c6e(&local_1788,(undefined8 *)*plVar41,
                       *(ulonglong *)((longlong)plVar41 + (ulonglong)(uVar34 ^ 0x209c75f5)));
          lVar27 = 0x58;
          if ((ulonglong *******)puStack_1780 !=
              (ulonglong *******)(0xf - (ulonglong)(uVar34 ^ 0x209c75f5))) {
            lVar27 = 0x170;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
          case 0x4df:
            goto switchD_08fdba6e_caseD_58;
          case 0x4f6:
            local_1d38 = local_1778;
            local_1d48 = local_1788;
            pppppppuStack_1d40 = (ulonglong *******)puStack_1780;
          }
        }
        break;
      case 0x1e4b:
                    /* WARNING: Switch is manually overridden */
        switch((&switchD_08fde41e::switchdataD_08ff9110)[plVar41 != (longlong *)0x0]) {
        case 0xfffe6b0d:
          goto switchD_08fde41e_caseD_1;
        }
switchD_08fdba6e_caseD_58:
        FUN_08fa7c6e(&local_1d48,puVar22,uVar60);
      }
      puVar59 = local_1e20;
      local_1d18 = 0;
      local_1d28 = 0;
      uVar17 = *(undefined8 *)
                (*(longlong *)(*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) +
                0x240);
      bVar29 = (char)local_1e24 * '\x02' - ((byte)uVar17 ^ 0xf5);
      local_1c88 = CONCAT71((int7)((ulonglong)uVar17 >> 8),bVar29);
      lVar27 = 0xe4;
      if (local_1e78 == (undefined8 *)0x0) {
        lVar27 = 0x11c;
      }
      local_1e78 = (undefined8 *)(((longlong)local_1e78 << (bVar29 & 0x3f)) + (longlong)local_1e20);
                    /* WARNING: Switch is manually overridden */
      switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
      case 0xacd:
        FUN_08f8b478((longlong)local_1e20,0);
        FUN_08fba6b1(puVar59,local_1de8,8,0x20);
        break;
      case 0x2d20:
switchD_08fdba6e_caseD_e4:
        puVar48 = (undefined8 *)
                  ((((local_1c88 & 0xff) - (ulonglong)local_1e24 ^
                    local_1c68 ^
                    *(ulonglong *)
                     (*(longlong *)
                       (*(longlong *)(unaff_GS_OFFSET + 0x58) + (ulonglong)_tls_index * 8) + 0x260))
                   - (ulonglong)local_1e24) + (longlong)puVar59);
        pbVar21 = (byte *)puVar59[1];
        puVar28 = &switchD_08fe023b::switchdataD_08ffad48;
        if (pbVar21 != (byte *)-(local_1c48 + (local_1c88 & 0xff) * -2)) {
          puVar28 = &UINT_08ffafb4;
        }
                    /* WARNING: Switch is manually overridden */
        switch(*puVar28) {
        case 0x32c6:
          local_1de0 = (ulonglong *******)*puVar59;
          uVar60 = *(ulonglong *)((longlong)puVar59 + (ulonglong)(0x209c75f5 - uVar34));
          pbVar32 = (byte *)((longlong)&local_1c60 + (longlong)local_1e40);
          pbVar32[0] = 0;
          pbVar32[1] = 0;
          pbVar32[2] = 0;
          pbVar32[3] = 0;
          pbVar32[4] = 0;
          pbVar32[5] = 0;
          pbVar32[6] = 0;
          pbVar32[7] = 0;
          local_1c60 = (LPVOID)0x0;
          local_1dd8 = pbVar21;
          FUN_08fc06ee(&local_1278,local_1de0,uVar60);
          lVar27 = 0x1b4;
          if ((uint)local_1278 != (0x209c75f5 - uVar34 ^ 0x12)) {
            lVar27 = 0x3c8;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
          case 0x2cdf:
            FUN_08fee630(&local_1788,&local_1278,0x270);
            pppppppuVar53 = local_1788;
                    /* WARNING: Switch is manually overridden */
            switch(local_1788 == (ulonglong *******)(ulonglong)(uVar34 ^ 0x209c75e7)) {
            case false:
              FUN_08fee630(local_1a68,&puStack_1780,0x268);
              goto LAB_08fdfbcc;
            }
            break;
          case 0xfffffeb6:
            puStack_1780 = *(ulonglong **)((longlong)&local_1278 + local_1c98);
            local_1788 = (ulonglong *******)0x2;
                    /* WARNING: Switch is manually overridden */
          }
          FUN_08fabfab((int *)&local_1788);
          pppppppuVar53 = (ulonglong *******)0x2;
LAB_08fdfbcc:
          FUN_08fee630(local_d90,local_1a68,0x268);
          local_1278 = (ulonglong *******)0x2;
          local_1008 = (ulonglong *******)0x2;
          local_d98 = pppppppuVar53;
                    /* WARNING: Switch is manually overridden */
          switch(0x8fdfd9e) {
          case 0x8fdfd9e:
            goto switchD_08fdba6e_caseD_1a8;
          }
switchD_08fe0ca7_caseD_234:
          do {
            FUN_08fba0d2(local_1a68,(char *)&local_1008);
            pppppppuVar52 = local_1a68[2];
            pppppppuVar53 = local_1a68[1];
            lVar27 = 0x2a4;
            if ((int)local_1a68[0] == uVar34 + 0xdf638a1b) {
              lVar27 = 0x314;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0x422a:
              pppppppuVar53 = (ulonglong *******)(ulonglong)(uVar34 ^ 0x209c75e7);
              lVar27 = 0x188;
              if ((uint)local_1008 == (uVar34 ^ 0x209c75e7)) {
                lVar27 = 0x2e4;
              }
              break;
            case 0x4614:
              FUN_08fee630(&local_640,local_1a68 + 3,0x248);
              puVar28 = &switchD_08fe023b::switchdataD_08ffaf18;
              if (pppppppuVar53 == (ulonglong *******)0x0) {
                puVar28 = &UINT_08ffb038;
              }
                    /* WARNING: Switch is manually overridden */
              switch(*puVar28) {
              case 0x206b:
                goto switchD_08fe0ca7_caseD_2d0;
              case 0x35dc:
                goto switchD_08fe0ed2_caseD_3f0;
              }
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0x46b:
              puVar28 = &switchD_08fe023b::switchdataD_08ffad40;
              if (local_d98 == (ulonglong *******)((longlong)pppppppuVar3 + 0x50658eecdf638a1a)) {
                puVar28 = &UINT_08ffb00c;
              }
              local_1008 = pppppppuVar53;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar28) {
              case 0x3a84:
                goto switchD_08fe0ed2_caseD_3c4;
              }
              break;
            case 0x202b:
              FUN_08f75ac0((char *)&local_1008);
              puVar28 = &UINT_08ffb00c;
              if (local_d98 != (ulonglong *******)((longlong)pppppppuVar3 + 0x50658eecdf638a1a)) {
                puVar28 = &switchD_08fe023b::switchdataD_08ffad40;
              }
              local_1008 = pppppppuVar53;
                    /* WARNING: Switch is manually overridden */
              switch(*puVar28) {
              case 0x3a84:
                goto switchD_08fe0ed2_caseD_3c4;
              }
            }
switchD_08fdba6e_caseD_f8:
            local_1e80 = local_d98;
            FUN_08fee630(&local_1788,local_d90,0x268);
            local_d98 = (ulonglong *******)0x2;
            lVar27 = 0x364;
            if (local_1e80 == (ulonglong *******)(ulonglong)(uVar34 + 0xdf638a1d)) {
              lVar27 = 0x3ac;
            }
                    /* WARNING: Switch is manually overridden */
            switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
            case 0x226c:
switchD_08fe0ca7_caseD_364:
              local_1008 = local_1e80;
              FUN_08fee630(local_1000,&local_1788,0x268);
              break;
            case 0x267d:
              do {
                puVar28 = &UINT_08ffaf8c;
                if ((uint)local_1278 == uVar34 + 0xdf638a1d) {
                  puVar28 = &UINT_08ffb000;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar28) {
                case 0x264c:
                  FUN_08fba0d2(local_1a68,(char *)&local_1278);
                  lVar27 = 0x2a0;
                  if (local_1a68[0] != (ulonglong *******)0x0) {
                    lVar27 = 0x374;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)
                        ) {
                  case 0x49:
                    lVar27 = 0x25c;
                    if ((uint)local_1278 != (uVar34 ^ 0x209c75e7)) {
                      lVar27 = 0x14c;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*(undefined4 *)
                            ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                    case 0x2b4d:
                      FUN_08f75ac0((char *)&local_1278);
                    }
                    local_1278 = (ulonglong *******)0x2;
                    goto switchD_08fe0ed2_caseD_3b8;
                  case 0x279d:
                    pppppppuVar53 = *(ulonglong ********)((longlong)local_1a68 + (ulonglong)uVar57);
                    pppppppuVar52 = *(ulonglong ********)((longlong)local_1a68 + (ulonglong)uVar47);
                    FUN_08fee630(&local_640,local_1a68 + 3,0x248);
                    puVar28 = &switchD_08fe023b::switchdataD_08ffaf18;
                    if (pppppppuVar53 == (ulonglong *******)0x0) {
                      puVar28 = &UINT_08ffb038;
                    }
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar28) {
                  case 0x206b:
switchD_08fe0ca7_caseD_2d0:
                    local_b20[0] = pppppppuVar53;
                    local_b20[1] = pppppppuVar52;
                    FUN_08fee630(local_b20 + 2,&local_640,0x248);
                    FUN_08f9b598(local_1c20,(longlong *)local_b20);
                    uVar12 = (uint)*(undefined8 *)
                                    (*(longlong *)
                                      (*(longlong *)(unaff_GS_OFFSET + 0x58) +
                                      (ulonglong)_tls_index * 8) + 0x2d0) ^
                             (uint)local_1e6a * 0x35e1 + 0x3153;
                    uVar56 = ((local_1e6e - uVar12) + 0x130b) * 0xb7;
                    uVar24 = uVar56 & 0xffff;
                    /* WARNING: Switch is manually overridden */
                    switch((((local_af4 & 0x20000000) != uVar24 &&
                            ((uint)pppppppuVar52 & uVar12 & 0xffff) != 0) |
                           (byte)((ulonglong)pppppppuVar52 >> 4) & 1) != (byte)uVar24) {
                    case false:
                      pbVar21 = local_1c20[2];
                      lVar27 = FUN_08fabfd3(local_1c20[0],local_1c20[2]);
                      lVar26 = 0x24;
                      if (lVar27 != 0) {
                        lVar26 = 600;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*(undefined4 *)
                              ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar26)) {
                      case 0x49e:
                        FUN_08fc0046(&local_1788,lVar27,(ulonglong)pbVar21);
                        puVar9 = puStack_1780;
                        pppppppuVar52 =
                             *(ulonglong ********)((longlong)&local_1788 + (longlong)local_1e30);
                    /* WARNING: Switch is manually overridden */
                        switch((byte)local_1788 ^ 1) {
                        case 1:
                          local_1e80 = (ulonglong *******)0xba056d6e3fa53737;
                          local_1a68[0] = (ulonglong *******)0x8ff5883;
                          local_1a68[1] = (ulonglong *******)&DAT_0000000c;
                          local_1a68[2] = (ulonglong *******)&local_1e80;
                          lVar27 = 0x1c;
                          if (DAT_09009120 != uVar34 + 0xdf638a1b) {
                            lVar27 = 0x204;
                          }
                    /* WARNING: Switch is manually overridden */
                          switch(*(undefined4 *)
                                  ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                          case 0x397:
                            FUN_08fef46f(0x9009108,local_1a68);
                          }
                          FUN_08fa7c6e(&local_1788,DAT_09009108,DAT_09009118);
                          pppppppuVar19 = local_1788;
                          puVar28 = &UNK_08ffb048;
                          if (local_1778 <= pppppppuVar52) {
                            puVar28 = &UINT_08ffaedc;
                          }
                    /* WARNING: Switch is manually overridden */
                          switch(*puVar28) {
                          case 0x39c8:
                            uVar12 = memcmp(local_1788,
                                            (undefined1 *)
                                            (((longlong)pppppppuVar52 - (longlong)local_1778) +
                                            (longlong)puVar9),(size_t)local_1778);
                            FUN_08fba6b1(pppppppuVar19,(longlong)puStack_1780,1,1);
                            if (uVar12 != (byte)((char)(uVar34 + 0xdf638a1b) - (char)uVar56))
                            goto LAB_08fdffd0;
switchD_08fe0450_caseD_0:
                            pbVar32 = local_1c20[2];
                            pbVar21 = local_1c20[0];
                            FUN_08f9a2a0(&local_1a80,(longlong)local_1c20[0],
                                         (ulonglong)local_1c20[2]);
                            lVar27 = 0x24;
                            if (local_1a78 != -1) {
                              lVar27 = 0x35c;
                            }
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)
                                    ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                            case 0x43a:
                              lVar27 = FUN_08fabfd3(pbVar21,pbVar32);
                              lVar26 = 0x1f8;
                              if (lVar27 != 0) {
                                lVar26 = 0x29c;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)
                                      ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar26))
                              {
                              case 0x1cc4:
switchD_08fe0ca7_caseD_1f8:
                                local_1a68[0] = (ulonglong *******)0x1;
                                local_1a68[1] = (ulonglong *******)0x0;
                                local_1a68[2] = (ulonglong *******)0x0;
                                break;
                              case 0x3b38:
                                FUN_08fc0046(&local_1788,lVar27,(ulonglong)pbVar32);
                                puVar28 = &switchD_08fe023b::switchdataD_08ffae40;
                                if ((byte)local_1788 == '\0') {
                                  puVar28 = &UINT_08ffafe8;
                                }
                    /* WARNING: Switch is manually overridden */
                                switch(*puVar28) {
                                case 0x1cc4:
                                  goto switchD_08fe0ca7_caseD_1f8;
                                case 0x1dfa:
                                  FUN_08fc66b4(&local_1788,
                                               *(undefined8 **)((longlong)&local_1788 + local_1c90),
                                               (ulonglong)local_1778);
                                  if (*(undefined1 **)((longlong)&local_1788 + local_1ca8) ==
                                      (undefined1 *)((longlong)pppppppuVar3 + 0x50658eecdf638a1a))
                                  goto switchD_08fe0ca7_caseD_1f8;
                                  local_1a68[2] = local_1778;
                                  local_1a68[0] = local_1788;
                                  local_1a68[1] = (ulonglong *******)puStack_1780;
                                }
                              }
                              FUN_08f7987a(&local_1788,(longlong *)&local_1c60,local_1a68,
                                           &local_1a80);
                              lVar27 = 0x23c;
                              if ((ulonglong *******)puStack_1780 !=
                                  (ulonglong *******)((ulonglong)pppppppuVar3 ^ 0x50658eecdf638a1a))
                              {
                                lVar27 = 0;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)
                                      ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27))
                              {
                              case 0x3556:
                                FUN_08fba6b1(local_1788,(longlong)puStack_1780,1,1);
                              }
                            }
                            break;
                          case 0x3add:
                            FUN_08fba6b1(local_1788,(longlong)puStack_1780,1,1);
LAB_08fdffd0:
                            local_1e80 = (ulonglong *******)0x58b89fd870e4ad20;
                            local_1a68[0] = (ulonglong *******)&UNK_08ff2fa3;
                            local_1a68[1] = (ulonglong *******)0x12;
                            *(ulonglong *********)((longlong)local_1a68 + local_1dd0) = &local_1e80;
                            puVar28 = &switchD_08fe023b::switchdataD_08ffac60;
                            if (DAT_0900a2d0 != 0x209c75e5 - uVar34) {
                              puVar28 = &switchD_08fde5dc::switchdataD_08ffaf78;
                            }
                    /* WARNING: Switch is manually overridden */
                            switch(*puVar28) {
                            case 0x47d0:
                              FUN_08fef46f(0x900a2b8,local_1a68);
                            }
                            FUN_08fa7c6e(&local_1788,DAT_0900a2b8,DAT_0900a2c8);
                            pppppppuVar19 = local_1788;
                            lVar27 = 0x340;
                            if (local_1778 <= pppppppuVar52) {
                              lVar27 = 0x134;
                            }
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)
                                    ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                            case 0x3e3b:
                              iVar36 = memcmp(local_1788,
                                              (undefined1 *)
                                              (((longlong)pppppppuVar52 - (longlong)local_1778) +
                                              (longlong)puVar9),(size_t)local_1778);
                              iVar25 = local_1dbc * 0x3fc9a2c3;
                              FUN_08fba6b1(pppppppuVar19,(longlong)puStack_1780,1,1);
                    /* WARNING: Switch is manually overridden */
                              switch(iVar36 != iVar25 + -0x79b13ea0) {
                              case false:
                                goto switchD_08fe0450_caseD_0;
                              }
                              break;
                            case 0x4122:
                              FUN_08fba6b1(local_1788,(longlong)puStack_1780,1,1);
                    /* WARNING: Switch is manually overridden */
                            }
                            local_1e80 = (ulonglong *******)0x77fca37775607365;
                            local_1788 = (ulonglong *******)0x8ff5b5e;
                            puStack_1780 = (ulonglong *)(ulonglong)(uVar34 ^ 0x209c75f7);
                            local_1778 = (ulonglong *******)&local_1e80;
                            lVar27 = 0x184;
                            if (DAT_09009798 == (uVar34 ^ 0x209c75e5)) {
                              lVar27 = 0x20c;
                            }
                    /* WARNING: Switch is manually overridden */
                            switch(*(undefined4 *)
                                    ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)) {
                            case 0xc1a:
                              FUN_08fef46f(0x9009780,&local_1788);
                            }
                            FUN_08fa7c6e(local_1a68,DAT_09009780,DAT_09009790);
                            pppppppuVar18 = local_1a68[0];
                            pppppppuVar19 =
                                 *(ulonglong ********)((longlong)local_1a68 + (longlong)local_1e48);
                            puVar28 = &UINT_08ffaed4;
                            if (pppppppuVar19 <= pppppppuVar52) {
                              puVar28 = &UINT_08ffafdc;
                            }
                    /* WARNING: Switch is manually overridden */
                            switch(*puVar28) {
                            case 0x3413:
                              iVar36 = memcmp(local_1a68[0],
                                              (undefined1 *)
                                              ((longlong)puVar9 +
                                              ((longlong)pppppppuVar52 - (longlong)pppppppuVar19)),
                                              (size_t)pppppppuVar19);
                              FUN_08fba6b1(pppppppuVar18,(longlong)local_1a68[1],1,1);
                              lVar27 = 0x214;
                              if (iVar36 != 0x209c75e5 - uVar34) {
                                lVar27 = 0x24;
                              }
                    /* WARNING: Switch is manually overridden */
                              switch(*(undefined4 *)
                                      ((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27))
                              {
                              case 0x38ac:
                                goto switchD_08fe0450_caseD_0;
                              }
                              break;
                            case 0x3465:
                              FUN_08fba6b1(local_1a68[0],(longlong)local_1a68[1],1,1);
                            }
                          }
                        }
                      }
                    }
                    FUN_08fba6b1(local_1c20[0],
                                 *(longlong *)((longlong)local_1c20 + (ulonglong)(uVar44 & 0xffff)),
                                 1,1);
                    LOCK();
                    ppppppuVar1 = *pppppppuVar53;
                    *pppppppuVar53 = (ulonglong ******)((longlong)*pppppppuVar53 - 1);
                    UNLOCK();
                    puVar28 = &switchD_08fe023b::switchdataD_08ffacf0;
                    if (ppppppuVar1 != (ulonglong ******)(ulonglong)(uVar34 + 0xdf638a1c)) {
                      puVar28 = &UINT_08ffafd4;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar28) {
                    case 0x1d27:
                      puVar28 = &switchD_08fe023b::switchdataD_08ffadf0;
                      if (local_1008 != (ulonglong *******)0x2) {
                        puVar28 = &UINT_08ffae7c;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar28) {
                      case 0x2219:
                        goto switchD_08fe0ca7_caseD_234;
                      }
                      break;
                    case 0xfffffb5b:
                      FUN_08f73b02(pppppppuVar53);
                      puVar28 = &UINT_08ffae7c;
                      if (local_1008 == (ulonglong *******)0x2) {
                        puVar28 = &switchD_08fe023b::switchdataD_08ffadf0;
                      }
                    /* WARNING: Switch is manually overridden */
                      switch(*puVar28) {
                      case 0x2219:
                        goto switchD_08fe0ca7_caseD_234;
                      }
                    }
                    break;
                  case 0x35dc:
switchD_08fe0ed2_caseD_3f0:
                    FUN_08fa7d50((longlong *)0x0,(ulonglong)pppppppuVar52);
                    puVar28 = &switchD_08fe023b::switchdataD_08ffadf0;
                    /* WARNING: Switch is manually overridden */
                    if (local_1008 != (ulonglong *******)0x2) {
                      puVar28 = &UINT_08ffae7c;
                    }
                    /* WARNING: Switch is manually overridden */
                    switch(*puVar28) {
                    case 0x2219:
                      goto switchD_08fe0ca7_caseD_234;
                    }
                  }
switchD_08fdba6e_caseD_1a8:
                  puVar28 = &UINT_08ffb00c;
                  if (local_d98 != (ulonglong *******)((longlong)pppppppuVar3 + 0x50658eecdf638a1a))
                  {
                    puVar28 = &switchD_08fe023b::switchdataD_08ffad40;
                  }
                  break;
                case 0x2b61:
switchD_08fe0ed2_caseD_3b8:
                  FUN_08f730e2((int *)&local_1278);
                  pppppppuVar53 =
                       *(ulonglong ********)((longlong)&local_1c60 + (longlong)local_1e40);
                  puVar28 = &switchD_08fe023b::switchdataD_08ffaec8;
                  if (pppppppuVar53 != (ulonglong *******)0x0) {
                    puVar28 = &UINT_08ffac54;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*puVar28) {
                  case 0x36f2:
                    local_1238 = (LPVOID)0x0;
                    local_1278 = (ulonglong *******)0x0;
                    break;
                  case 0x3717:
                    pppppppuStack_1270 = local_1c58;
                    local_1260 = (ulonglong *******)0x0;
                    local_1250 = local_1c58;
                    local_1240 = 0;
                    local_1278 = (ulonglong *******)0x1;
                    local_1238 = local_1c60;
                    local_1268 = pppppppuVar53;
                    local_1248 = pppppppuVar53;
                  }
                  local_1258 = local_1278;
                  goto LAB_08fdfd1b;
                }
                    /* WARNING: Switch is manually overridden */
                switch(*puVar28) {
                case 0xa74:
                  goto switchD_08fdba6e_caseD_f8;
                case 0x3a84:
switchD_08fe0ed2_caseD_3c4:
                  local_1e80 = (ulonglong *******)0x2;
                  lVar27 = 0x364;
                  if (uVar34 == 0x209c75e5) {
                    lVar27 = 0x3ac;
                  }
                    /* WARNING: Switch is manually overridden */
                  switch(*(undefined4 *)((longlong)&switchD_08fdba6e::switchdataD_08ffac48 + lVar27)
                        ) {
                  case 0x226c:
                    goto switchD_08fe0ca7_caseD_364;
                  }
                }
              } while( true );
            }
          } while( true );
        }
        goto switchD_08fdba6e_caseD_100;
      }
      goto LAB_08fdd0af;
    }
    goto override_jmp_08fdcff4_case_0;
  }
override_jmp_08fdedd9_case_0:
  FUN_08fba6b1(local_17f8[0],*(longlong *)((longlong)local_17f8 + (ulonglong)(uVar34 ^ 0x209c75ed)),
               1,1);
  FUN_08fba6b1(*local_1d88,(longlong)local_1d88[1],1,1);
  return;
}

