/* ORIGINAL NATIVE CODE/DATA PARTITION. The33-byte selector maps to exactly5 original RVA targets. Native index guard and table-byte certificate exclude the old spurious case5. Local unwind-helper analysis C; transitive effects require separate evidence. Not original source, not a buildable project. Original instruction bytes unchanged. */

void FUN_0eca8e30(undefined1 *param_1,longlong param_2)

{
  code *pcVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *in_R8;
  ulonglong uVar10;
  
  if (((longlong)*in_R8 & 4U) == 0) {
    puVar8 = param_1;
  }
  else {
    puVar8 = (undefined1 *)((ulonglong)(param_1 + in_R8[1]) & (longlong)-in_R8[2]);
  }
  pbVar6 = (byte *)(*(longlong *)(param_2 + 8) +
                   (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8));
  bVar4 = pbVar6[3];
  if ((*pbVar6 & 7) < 3) {
    if ((bVar4 & 0xf) != 0) {
LAB_0eca8fa1:
      uVar10 = (ulonglong)bVar4 & 0xfffffffffffffff0;
      goto LAB_0eca8fa5;
    }
  }
  else {
    uVar9 = bVar4 & 0x1f;
    if ((bVar4 & 0x1f) != 0) {
      if ((*pbVar6 & 0x40) == 0) {
        lVar3 = (ulonglong)uVar9 + 4;
      }
      else {
        lVar3 = (ulonglong)uVar9 * 2 + 5;
      }
      pbVar6 = pbVar6 + lVar3;
      uVar10 = 0;
      uVar5 = 0;
      pbVar7 = pbVar6;
      if (bVar4 >> 5 != 0) {
        do {
          pbVar6 = pbVar7 + 3;
          bVar2 = *pbVar7 >> 3;
          if (bVar2 != 0) {
            if ((*pbVar7 & 2) == 0) {
              pbVar6 = pbVar7 + (ulonglong)bVar2 + 6;
            }
            else {
              pbVar6 = pbVar6 + (ulonglong)bVar2 * 2 + 4;
            }
          }
          uVar5 = uVar5 + 1;
          pbVar7 = pbVar6;
        } while (uVar5 < bVar4 >> 5);
      }
      uVar5 = 0;
      if ((bVar4 & 0x1f) != 0) {
        do {
          bVar4 = *pbVar6;
          if (bVar4 < 4) {
LAB_0eca8f4f:
            if (bVar4 == 0) {
              bVar4 = pbVar6[1];
              goto LAB_0eca8fa1;
            }
            if (0x20 < bVar4) goto switchD_0eca8f6f_caseD_4;
          }
          else {
            bVar2 = bVar4 & 0xf;
            if (((byte)((bVar4 & 0xf) - 8) < 3) || (bVar2 = bVar4 & 7, (byte)((bVar4 & 7) - 4) < 4))
            {
              bVar4 = bVar2;
              goto LAB_0eca8f4f;
            }
            if ((bVar4 & 0x3f) != 0x20) goto switchD_0eca8f6f_caseD_4;
            bVar4 = 0x20;
          }
                    /* WARNING: Switch is manually overridden */
          switch(*(undefined1 *)((longlong)&UINT_0eca8fe8 + (ulonglong)bVar4)) {
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
switchD_0eca8f6f_caseD_4:
            FUN_0eca8e20();
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          pbVar6 = pbVar6 + lVar3;
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar9);
      }
      goto LAB_0eca8fa5;
    }
  }
  uVar10 = 0;
LAB_0eca8fa5:
  if ((((ulonglong)(param_1 + uVar10) ^
       *(ulonglong *)(puVar8 + ((longlong)*in_R8 & 0xfffffffffffffff8))) == DAT_0ecca440) &&
     ((short)(((ulonglong)(param_1 + uVar10) ^
              *(ulonglong *)(puVar8 + ((longlong)*in_R8 & 0xfffffffffffffff8))) >> 0x30) == 0)) {
    return;
  }
  FUN_0eca8e20();
  return;
}

