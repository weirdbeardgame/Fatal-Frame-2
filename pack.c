// STATUS: NOT STARTED

#include "pack.h"

_type2id() {
  ulong uVar1;
  long lVar2;
  
  uVar1 = 0;
  lVar2 = 0;
  if (param_1 < 10) {
    uVar1 = *(ulong *)(&DAT_00369268 + (int)param_1 * 0x10);
    if (uVar1 == 0xffff000000) {
      lVar2 = 0x18;
    }
    else if (uVar1 < 0xffff000001) {
      if (uVar1 == 0xff00000000) {
        lVar2 = 0x20;
      }
    }
    else {
      lVar2 = 0;
    }
    uVar1 = (&_strmap)[(int)param_1 * 2] | param_2 << lVar2;
  }
  return uVar1;
}

_id2type() {
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = 0;
  uVar5 = 0;
  uVar4 = _DAT_00369268;
  puVar2 = &_strmap;
  do {
    if (uVar4 == 0xffff000000) {
      uVar4 = *puVar2;
      if (uVar4 == 0xbd88000000) {
LAB_0028f368:
        uVar3 = param_3 & 0xfff8000000;
        uVar1 = 7;
      }
      else if (uVar4 < 0xbd88000001) {
        uVar3 = param_3 & 0xffe0000000;
        if (uVar4 == 0xbd20000000) {
          uVar1 = 0x1f;
        }
        else {
          uVar3 = param_3 & 0xffff000000;
          if (uVar4 == 0xbd80000000) goto LAB_0028f368;
          uVar1 = 0;
        }
      }
      else {
        if ((uVar4 == 0xbd90000000) || (uVar3 = param_3 & 0xffff000000, uVar4 == 0xbda0000000))
        goto LAB_0028f368;
        uVar1 = 0;
      }
      if (uVar3 == uVar4) {
        uVar1 = (uint)(param_3 >> 0x18) & uVar1;
LAB_0028f3bc:
        *param_1 = uVar5;
        *param_2 = uVar1;
LAB_0028f3d0:
        iVar6 = 1;
      }
    }
    else if (uVar4 < 0xffff000001) {
      if (uVar4 == 0xff00000000) {
        uVar4 = *puVar2;
        if (uVar4 == 0xe000000000) {
          uVar3 = param_3 & 0xf000000000;
          uVar1 = 0xf;
        }
        else {
          uVar3 = param_3 & 0xff00000000;
          if (uVar4 == 0xc000000000) {
            uVar3 = param_3 & 0xe000000000;
            uVar1 = 0x1f;
          }
          else {
            uVar1 = 0;
          }
        }
        if (uVar3 == uVar4) {
          uVar1 = (uint)(param_3 >> 0x20) & uVar1;
          goto LAB_0028f3bc;
        }
      }
    }
    else if ((uVar4 == 0xffffffffff) && ((param_3 & 0xffffff0000) == *puVar2)) {
      *param_1 = uVar5;
      *param_2 = (uint)param_3 & 0xffff;
      goto LAB_0028f3d0;
    }
    uVar5 = uVar5 + 1;
    if ((9 < uVar5) || (iVar6 != 0)) {
      return iVar6;
    }
    uVar4 = puVar2[3];
    puVar2 = puVar2 + 2;
  } while( true );
}

sceMpegDemuxPssRing() {
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined auStack_160 [24];
  ulong local_148;
  undefined auStack_130 [24];
  ulong local_118 [2];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  
  lVar8 = 1;
  iVar6 = 0;
  iVar1 = *(int *)((int)param_1 + 0x40);
  local_b8 = *(int *)(iVar1 + 0x60);
  local_c0 = (code *)0x0;
  _sysbitInit(auStack_160,param_2,param_4,param_5);
  local_bc = 0;
  local_b4 = 0;
  if (*(int *)(iVar1 + 100) < 1) {
    uVar9 = (ulong)(param_3 << 3);
  }
  else {
    uVar9 = (ulong)(param_3 << 3);
    do {
      plVar3 = (long *)(iVar6 * 0x20 + local_b8);
      if (*plVar3 == 0xbdff000000) {
        local_b0 = *(undefined4 *)(plVar3 + 3);
        local_c0 = *(code **)(plVar3 + 2);
        local_bc = *(undefined4 *)((int)plVar3 + 0x14);
      }
      iVar6 = iVar6 + 1;
    } while ((local_c0 == (code *)0x0) && (iVar6 < *(int *)(iVar1 + 100)));
  }
  do {
    lVar4 = _sysbitNext(auStack_160,0x20);
    if (lVar4 == 0x1ba) {
      _pack_header(auStack_160,auStack_130);
    }
    while (((lVar4 = _sysbitNext(auStack_160,0x18), lVar4 == 1 &&
            (lVar4 = _sysbitNext(auStack_160,0x20), lVar4 != 0x1ba)) &&
           (lVar4 = _sysbitNext(auStack_160,0x20), lVar4 != 0x1b9))) {
      bVar2 = uVar9 < local_148;
      if ((uVar9 <= local_148) || (lVar8 == 0)) goto LAB_0028f6d4;
      _PES_packet(iVar1,auStack_160,local_118);
      if (local_148 <= uVar9) {
        iVar6 = *(int *)(iVar1 + 100);
        iVar7 = 0;
        if (0 < iVar6) {
          do {
            puVar5 = (ulong *)(iVar7 * 0x20 + local_b8);
            if (*puVar5 == (local_118[0] & puVar5[1])) {
              local_e0 = 6;
              local_dc = _sysbitPtr(auStack_160,local_f0);
              local_d8 = _sysbitPtr(auStack_160,local_f8);
              local_d0 = local_108;
              local_d4 = local_f4;
              local_c8 = local_100;
              lVar8 = (**(code **)(puVar5 + 2))
                                (param_1,&local_e0,*(undefined4 *)((int)puVar5 + 0x14));
              iVar6 = *(int *)(iVar1 + 100);
              break;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar6);
        }
        if ((iVar7 == iVar6) && (local_c0 != (code *)0x0)) {
          local_e0 = 6;
          local_dc = _sysbitPtr(auStack_160,local_f0);
          local_d8 = _sysbitPtr(auStack_160,local_f8);
          local_d0 = local_108;
          local_d4 = local_f4;
          local_c8 = local_100;
          lVar8 = (*local_c0)(param_1,&local_e0,local_bc);
        }
        if (lVar8 != 0) {
          local_b4 = (undefined4)((local_148 << 0x1d) >> 0x20);
        }
      }
    }
    bVar2 = uVar9 < local_148;
LAB_0028f6d4:
    if ((bVar2) || (lVar4 = _sysbitNext(auStack_160,0x20), lVar4 != 0x1ba)) {
      return local_b4;
    }
  } while( true );
}

sceMpegDemuxPss() {
  sceMpegDemuxPssRing();
  return;
}

sceMpegAddStrCallback() {
  int iVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  plVar3 = *(long **)(iVar1 + 0x60);
  lVar2 = _type2id(param_2,param_3);
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 100)) {
    if (lVar2 == *plVar3) {
      uVar5 = *(undefined4 *)(plVar3 + 2);
    }
    else {
      for (iVar4 = 1; iVar4 < *(int *)(iVar1 + 100); iVar4 = iVar4 + 1) {
        if (lVar2 == plVar3[iVar4 * 4]) {
          uVar5 = *(undefined4 *)(plVar3 + iVar4 * 4 + 2);
          break;
        }
      }
    }
  }
  if (iVar4 < 0x40) {
    plVar3 = plVar3 + iVar4 * 4;
    *plVar3 = lVar2;
    *(undefined4 *)(plVar3 + 2) = param_4;
    lVar2 = *(long *)(&DAT_00369268 + (int)param_2 * 0x10);
    *(undefined4 *)((int)plVar3 + 0x14) = param_5;
    plVar3[1] = lVar2;
    iVar4 = *(int *)(iVar1 + 100);
    *(undefined4 *)(plVar3 + 3) = 0x3f57f0;
    *(int *)(iVar1 + 100) = iVar4 + 1;
  }
  return uVar5;
}

_pack_header() {
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar7 = 0;
  _sysbitGet(param_1,0x22);
  uVar1 = _sysbitGet(param_1,3);
  _sysbitMarker(param_1);
  iVar2 = _sysbitGet(param_1,0xf);
  _sysbitMarker(param_1);
  uVar3 = _sysbitGet(param_1,0xf);
  _sysbitMarker(param_1);
  uVar4 = _sysbitGet(param_1,9);
  puVar8 = (undefined4 *)param_2;
  *puVar8 = uVar4;
  _sysbitGet(param_1,0x1e);
  uVar5 = _sysbitGet(param_1,3);
  puVar8[2] = uVar1 >> 2 & 1;
  puVar8[1] = uVar1 << 0x1e | iVar2 << 0xf | uVar3;
  if (uVar5 != 0) {
    do {
      _sysbitGet(param_1,8);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar5);
  }
  lVar6 = _sysbitNext(param_1,0x20);
  if (lVar6 == 0x1bb) {
    puVar8[3] = 1;
    _system_header(param_1,param_2);
  }
  else {
    puVar8[3] = 0;
  }
  return 1;
}

_system_header() {
  long lVar1;
  
  _sysbitGet(param_1,0x38);
  _sysbitGet(param_1,0x28);
  while (lVar1 = _sysbitNext(param_1,1), lVar1 == 1) {
    _sysbitGet(param_1,0x18);
  }
  return 1;
}

_PES_packet() {
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined auStack_c0 [8];
  undefined auStack_b8 [8];
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  
  iVar15 = (int)param_2;
  local_b0 = param_1;
  *(undefined4 *)(param_3 + 5) = *(undefined4 *)(iVar15 + 0x18);
  puVar1 = auStack_c0 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | DAT_003eaa20 >> (7 - uVar3) * 8;
  auStack_c0 = (undefined  [8])DAT_003eaa20;
  puVar1 = auStack_b8 + 7;
  uVar3 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar3) =
       *(ulong *)(puVar1 + -uVar3) & -1L << (uVar3 + 1) * 8 | _DAT_003eaa28 >> (7 - uVar3) * 8;
  auStack_b8 = (undefined  [8])_DAT_003eaa28;
  _sysbitGet(param_2,0x18);
  lVar5 = _sysbitGet(param_2,8);
  *param_3 = lVar5 << 0x20;
  uVar2 = _sysbitGet(param_2,0x10);
  uVar12 = *param_3;
  *(undefined4 *)(param_3 + 1) = uVar2;
  param_3[2] = 0xffffffffffffffff;
  param_3[3] = 0xffffffffffffffff;
  if (uVar12 == 0xbc00000000) {
LAB_0028ff10:
    iVar15 = *(int *)(param_3 + 1);
    if (uVar12 == 0xbf00000000) {
      uVar12 = _sysbitGet(param_2,0x20);
      iVar15 = iVar15 + -4;
      *param_3 = *param_3 | uVar12 & 0xffffffff;
    }
    if (iVar15 != 0) {
      _sysbitJump(param_2,iVar15);
    }
    return 1;
  }
  if ((((uVar12 == 0xbe00000000) || (uVar12 == 0xbf00000000)) || (uVar12 == 0xf000000000)) ||
     (((uVar12 == 0xf100000000 || (uVar12 == 0xff00000000)) ||
      ((uVar12 == 0xf200000000 || (uVar12 == 0xf800000000)))))) {
    if ((((uVar12 != 0xbc00000000) && (uVar12 != 0xbf00000000)) &&
        ((uVar12 != 0xf000000000 &&
         (((uVar12 != 0xf100000000 && (uVar12 != 0xff00000000)) && (uVar12 != 0xf200000000)))))) &&
       (uVar12 != 0xf800000000)) {
      if (uVar12 != 0xbe00000000) {
        return 1;
      }
      if (*(int *)(param_3 + 1) == 0) {
        return 1;
      }
      _sysbitJump(param_2);
      return 1;
    }
    goto LAB_0028ff10;
  }
  _sysbitGet(param_2,2);
  uVar2 = _sysbitGet(param_2,2);
  *(undefined4 *)((int)param_3 + 0xc) = uVar2;
  _sysbitGet(param_2,4);
  uVar12 = _sysbitGet(param_2,2);
  local_ac = _sysbitGet(param_2,1);
  lVar5 = _sysbitGet(param_2,4);
  lVar6 = _sysbitGet(param_2,1);
  local_a8 = _sysbitGet(param_2,8);
  uVar7 = *(undefined8 *)(iVar15 + 0x18);
  if ((uVar12 & 2) != 0) {
    _sysbitGet(param_2,4);
    uVar3 = _sysbitGet(param_2,3);
    _sysbitMarker(param_2);
    iVar4 = _sysbitGet(param_2,0xf);
    _sysbitMarker(param_2);
    uVar8 = _sysbitGet(param_2,0xf);
    _sysbitMarker(param_2);
    param_3[2] = ((long)(int)(uVar3 >> 2) & 1U) << 0x20 |
                 ((long)(int)(uVar3 << 0x1e | iVar4 << 0xf) | uVar8) & 0xffffffff;
  }
  if (uVar12 == 3) {
    _sysbitGet(param_2,4);
    uVar3 = _sysbitGet(param_2,3);
    _sysbitMarker(param_2);
    iVar4 = _sysbitGet(param_2,0xf);
    _sysbitMarker(param_2);
    uVar12 = _sysbitGet(param_2,0xf);
    _sysbitMarker(param_2);
    param_3[3] = ((long)(int)(uVar3 >> 2) & 1U) << 0x20 |
                 ((long)(int)(uVar3 << 0x1e | iVar4 << 0xf) | uVar12) & 0xffffffff;
  }
  if (local_ac == 1) {
    _sysbitGet(param_2,0x30);
  }
  if (lVar5 != 0) {
    _sysbitGet(param_2,auStack_c0[(int)lVar5]);
  }
  if (lVar6 == 1) {
    lVar5 = _sysbitGet(param_2,1);
    lVar6 = _sysbitGet(param_2,1);
    lVar9 = _sysbitGet(param_2,1);
    lVar10 = _sysbitGet(param_2,1);
    _sysbitGet(param_2,3);
    lVar11 = _sysbitGet(param_2,1);
    if (lVar5 == 1) {
      _sysbitGet(param_2,0x30);
      _sysbitGet(param_2,0x30);
      _sysbitGet(param_2,0x20);
    }
    if (lVar6 == 1) {
      _Error(local_b0,0x3eaa30);
      return 0;
    }
    if (lVar9 == 1) {
      _sysbitGet(param_2,0x10);
    }
    if (lVar10 == 1) {
      _sysbitGet(param_2,0x10);
    }
    if (lVar11 == 1) {
      uVar13 = 0;
      _sysbitMarker(param_2);
      uVar3 = _sysbitGet(param_2,7);
      if (uVar3 != 0) {
        do {
          _sysbitGet(param_2,8);
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar3);
        lVar5 = *(long *)(iVar15 + 0x18);
        goto LAB_0028fe0c;
      }
    }
  }
  lVar5 = *(long *)(iVar15 + 0x18);
LAB_0028fe0c:
  if (local_a8 != (int)((ulong)((lVar5 - (int)uVar7) * 0x20000000) >> 0x20)) {
    _sysbitJump(param_2);
  }
  iVar14 = *(int *)(param_3 + 1) - local_a8;
  iVar4 = iVar14 + -3;
  *(int *)((int)param_3 + 0x24) = iVar4;
  *(undefined4 *)(param_3 + 4) = *(undefined4 *)(iVar15 + 0x18);
  if (*param_3 == 0xbd00000000) {
    uVar12 = _sysbitGet(param_2,0x20);
    iVar4 = iVar14 + -7;
    *param_3 = *param_3 | uVar12 & 0xffffffff;
  }
  if (iVar4 == 0) {
    return 1;
  }
  _sysbitJump(param_2);
  return 1;
}
