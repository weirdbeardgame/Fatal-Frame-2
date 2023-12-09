// STATUS: NOT STARTED

#include "dp-bit.h"

fp_number_type __thenan_df = {
	/* .class = */ CLASS_SNAN,
	/* .sign = */ 0,
	/* .normal_exp = */ 0,
	/* .fraction = */ {
		/* .ll = */ 0,
		/* .l = */ {
			/* [0] = */ 0,
			/* [1] = */ 0
		}
	}
};

static fp_number_type* _fpadd_parts(fp_number_type *a, fp_number_type *b, fp_number_type *tmp) {
  fp_class_type fVar1;
  fp_class_type fVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  fp_number_type__523_35 *pfVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  
  fVar1 = a->class;
  pfVar6 = a;
  if ((CLASS_QNAN < fVar1) && (fVar2 = b->class, pfVar6 = b, CLASS_QNAN < fVar2)) {
    if (fVar1 == CLASS_INFINITY) {
      if ((fVar2 == CLASS_INFINITY) && (a->sign != b->sign)) {
        return &__thenan_df;
      }
      return a;
    }
    if (fVar2 != CLASS_INFINITY) {
      if (fVar2 == CLASS_ZERO) {
        if (fVar1 != CLASS_ZERO) {
          return a;
        }
        uVar8 = a->sign;
        tmp->class = a->class;
        tmp->sign = uVar8;
        uVar4 = *(undefined4 *)&a->field_0xc;
        tmp->normal_exp = a->normal_exp;
        *(undefined4 *)&tmp->field_0xc = uVar4;
        tmp->fraction = a->fraction;
        tmp->sign = a->sign & b->sign;
        return tmp;
      }
      if (fVar1 != CLASS_ZERO) {
        iVar10 = a->normal_exp;
        iVar9 = b->normal_exp;
        uVar12 = (a->fraction).ll;
        iVar5 = iVar10 - iVar9;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        uVar11 = (b->fraction).ll;
        if (iVar5 < 0x40) {
          bVar3 = iVar10 < iVar9;
          if (iVar9 < iVar10) {
            iVar9 = iVar10 - iVar9;
            do {
              iVar9 = iVar9 + -1;
              uVar11 = uVar11 & 1 | uVar11 >> 1;
            } while (iVar9 != 0);
            bVar3 = false;
            iVar9 = iVar10;
          }
          if (bVar3) {
            do {
              iVar10 = iVar10 + 1;
              uVar12 = uVar12 & 1 | uVar12 >> 1;
            } while (iVar10 < iVar9);
            uVar8 = a->sign;
          }
          else {
            uVar8 = a->sign;
          }
        }
        else {
          if (iVar9 < iVar10) {
            uVar11 = 0;
          }
          else {
            uVar12 = 0;
            iVar10 = iVar9;
          }
          uVar8 = a->sign;
        }
        if (uVar8 == b->sign) {
          uVar12 = uVar12 + uVar11;
          tmp->sign = uVar8;
          tmp->normal_exp = iVar10;
          (tmp->fraction).ll = uVar12;
        }
        else {
          uVar7 = uVar11 - uVar12;
          if (uVar8 == 0) {
            uVar7 = uVar12 - uVar11;
          }
          if ((long)uVar7 < 0) {
            tmp->sign = 1;
            tmp->normal_exp = iVar10;
            (tmp->fraction).ll = -uVar7;
          }
          else {
            tmp->normal_exp = iVar10;
            (tmp->fraction).ll = uVar7;
            tmp->sign = 0;
          }
          uVar12 = (tmp->fraction).ll;
          while (uVar12 - 1 < 0xfffffffffffffff) {
            uVar12 = uVar12 * 2;
            tmp->normal_exp = tmp->normal_exp + -1;
            (tmp->fraction).ll = uVar12;
          }
        }
        tmp->class = CLASS_NUMBER;
        pfVar6 = tmp;
        if (0x1fffffffffffffff < uVar12) {
          (tmp->fraction).ll = uVar12 & 1 | uVar12 >> 1;
          tmp->normal_exp = tmp->normal_exp + 1;
        }
      }
    }
  }
  return pfVar6;
}

FLO_type dpadd(FLO_type arg_a, FLO_type arg_b) {
  fp_number_type__523_35 *src;
  long lVar1;
  fp_number_type__523_35 fStack_80;
  fp_number_type__523_35 fStack_60;
  fp_number_type__523_35 fStack_40;
  FLO_union_type__523_40 local_20;
  FLO_union_type__523_40 local_18;
  
  local_20.value = arg_a;
  local_18.value = arg_b;
  __unpack_d(&local_20,&fStack_80);
  __unpack_d(&local_18,&fStack_60);
  src = _fpadd_parts(&fStack_80,&fStack_60,&fStack_40);
  lVar1 = __pack_d(src);
  return lVar1;
}

FLO_type dpsub(FLO_type arg_a, FLO_type arg_b) {
  fp_number_type__523_35 *src;
  long lVar1;
  fp_number_type__523_35 fStack_80;
  fp_number_type__523_35 fStack_60;
  fp_number_type__523_35 fStack_40;
  FLO_union_type__523_40 local_20;
  FLO_union_type__523_40 local_18;
  
  local_20.value = arg_a;
  local_18.value = arg_b;
  __unpack_d(&local_20,&fStack_80);
  __unpack_d(&local_18,&fStack_60);
  fStack_60.sign = fStack_60.sign ^ 1;
  src = _fpadd_parts(&fStack_80,&fStack_60,&fStack_40);
  lVar1 = __pack_d(src);
  return lVar1;
}

FLO_type dpmul(FLO_type arg_a, FLO_type arg_b) {
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  fp_number_type__523_35 *src;
  ulong uVar4;
  ulong uVar5;
  fp_number_type__523_35 local_b0;
  fp_number_type__523_35 local_90;
  fp_number_type__523_35 local_70;
  FLO_union_type__523_40 local_50;
  FLO_union_type__523_40 local_48;
  
  src = &local_b0;
  local_50.value = arg_a;
  local_48.value = arg_b;
  __unpack_d(&local_50,&local_b0);
  __unpack_d(&local_48,&local_90);
  if (local_b0.class < CLASS_ZERO) {
LAB_0029e7cc:
    local_b0.sign = (uint)(local_b0.sign != local_90.sign);
  }
  else {
    if (CLASS_QNAN < local_90.class) {
      if (local_b0.class == CLASS_INFINITY) {
        if (local_90.class == CLASS_ZERO) {
LAB_0029e7b4:
          src = &__thenan_df;
          goto LAB_0029e96c;
        }
        goto LAB_0029e7cc;
      }
      if (local_90.class == CLASS_INFINITY) {
        if ((local_b0.class ^ CLASS_ZERO) == CLASS_SNAN) goto LAB_0029e7b4;
      }
      else {
        if ((local_b0.class ^ CLASS_ZERO) == CLASS_SNAN) goto LAB_0029e7cc;
        if (local_90.class != CLASS_ZERO) {
          uVar1 = __muldi3(local_90.fraction.ll & 0xffffffff,local_b0.fraction.ll & 0xffffffff);
          uVar2 = __muldi3(local_90.fraction.ll >> 0x20,local_b0.fraction.ll & 0xffffffff);
          lVar3 = __muldi3(local_90.fraction.ll & 0xffffffff,local_b0.fraction.ll >> 0x20);
          uVar5 = uVar2 + lVar3;
          lVar3 = __muldi3(local_90.fraction.ll >> 0x20,local_b0.fraction.ll >> 0x20);
          uVar4 = uVar1 + (uVar5 << 0x20);
          local_70.fraction.ll =
               ((ulong)(uVar5 < uVar2) << 0x20) + (ulong)(uVar4 < uVar1) + (uVar5 >> 0x20) + lVar3;
          local_70.normal_exp = local_b0.normal_exp + local_90.normal_exp + 4;
          local_70.sign = (uint)(local_b0.sign != local_90.sign);
          while (0x1fffffffffffffff < local_70.fraction.ll) {
            uVar1 = local_70.fraction.ll & 1;
            local_70.fraction.ll = local_70.fraction.ll >> 1;
            local_70.normal_exp = local_70.normal_exp + 1;
            if (uVar1 != 0) {
              uVar4 = uVar4 >> 1 | 0x8000000000000000;
            }
          }
          while (local_70.fraction.ll < 0x1000000000000000) {
            local_70.fraction.ll = local_70.fraction.ll << 1;
            local_70.normal_exp = local_70.normal_exp + -1;
            if ((uVar4 & 0x8000000000000000) != 0) {
              local_70.fraction.ll = local_70.fraction.ll | 1;
            }
            uVar4 = uVar4 << 1;
          }
          local_70.class = CLASS_NUMBER;
          src = &local_70;
          goto LAB_0029e96c;
        }
      }
    }
    local_90.sign = (uint)(local_b0.sign != local_90.sign);
    src = &local_90;
  }
LAB_0029e96c:
  lVar3 = __pack_d(src);
  return lVar3;
}

FLO_type dpdiv(FLO_type arg_a, FLO_type arg_b) {
  bool bVar1;
  fp_number_type__fraction__523_35 fVar2;
  long lVar3;
  ulong uVar4;
  fp_number_type__523_35 *src;
  fp_number_type__fraction__523_35 fVar5;
  fp_number_type__fraction__523_35 fVar6;
  fp_number_type__523_35 local_60;
  fp_number_type__523_35 local_40;
  FLO_union_type__523_40 local_20;
  FLO_union_type__523_40 local_18;
  
  local_20.value = arg_a;
  local_18.value = arg_b;
  __unpack_d(&local_20,&local_60);
  __unpack_d(&local_18,&local_40);
  src = &local_60;
  if ((CLASS_QNAN < local_60.class) && (src = &local_40, CLASS_QNAN < local_40.class)) {
    local_60.sign = local_60.sign ^ local_40.sign;
    if ((local_60.class == CLASS_INFINITY) || (local_60.class == CLASS_ZERO)) {
      src = &local_60;
      if (local_60.class == local_40.class) {
        src = &__thenan_df;
      }
    }
    else if (local_40.class == CLASS_INFINITY) {
      local_60.fraction.ll = 0;
      local_60.normal_exp = 0;
      src = &local_60;
    }
    else if (local_40.class == CLASS_ZERO) {
      local_60.class = CLASS_INFINITY;
      src = &local_60;
    }
    else {
      local_60.normal_exp = local_60.normal_exp - local_40.normal_exp;
      bVar1 = local_60.fraction.ll < local_40.fraction.ll;
      if (bVar1) {
        local_60.normal_exp = local_60.normal_exp + -1;
        local_60.fraction.ll = local_60.fraction.ll << 1;
        bVar1 = local_60.fraction.ll < local_40.fraction.ll;
      }
      uVar4 = 0x1000000000000000;
      fVar6.ll = 0;
      fVar5 = local_60.fraction;
      do {
        fVar2.ll = fVar5.ll << 1;
        if (!bVar1) {
          fVar6.ll = fVar6.ll | uVar4;
          fVar2.ll = (fVar5.ll - (long)local_40.fraction) * 2;
        }
        uVar4 = uVar4 >> 1;
        bVar1 = fVar2.ll < local_40.fraction.ll;
        fVar5 = fVar2;
        src = &local_60;
        local_60.fraction = fVar6;
      } while (uVar4 != 0);
    }
  }
  lVar3 = __pack_d(src);
  return lVar3;
}

SItype dpcmp(FLO_type arg_a, FLO_type arg_b) {
  int iVar1;
  fp_number_type__523_35 fStack_60;
  fp_number_type__523_35 fStack_40;
  FLO_union_type__523_40 local_20;
  FLO_union_type__523_40 local_18;
  
  local_20.value = arg_a;
  local_18.value = arg_b;
  __unpack_d(&local_20,&fStack_60);
  __unpack_d(&local_18,&fStack_40);
  iVar1 = __fpcmp_parts_d(&fStack_60,&fStack_40);
  return iVar1;
}

FLO_type litodp(SItype arg_a) {
  long lVar1;
  fp_number_type__fraction__523_35 fVar2;
  fp_number_type__523_35 local_30;
  
  fVar2 = (fp_number_type__fraction__523_35)(long)arg_a;
  local_30.sign = -(arg_a >> 0x1f);
  local_30.class = CLASS_NUMBER;
  if (fVar2.ll == 0) {
    local_30.class = CLASS_ZERO;
  }
  else {
    local_30.fraction = fVar2;
    if (local_30.sign != 0) {
      if (fVar2.ll == 0xffffffff80000000) {
        return -0x3e20000000000000;
      }
      local_30.fraction = (fp_number_type__fraction__523_35)(long)-arg_a;
    }
    local_30.normal_exp = 0x3c;
    for (; local_30.fraction.ll < 0x1000000000000000;
        local_30.fraction.ll = local_30.fraction.ll << 1) {
      local_30.normal_exp = local_30.normal_exp + -1;
    }
  }
  lVar1 = __pack_d(&local_30);
  return lVar1;
}

DFtype __make_dp(fp_class_type class, unsigned int sign, int exp, UDItype frac) {
  long lVar1;
  fp_number_type__523_35 local_30;
  
  local_30.class = class;
  local_30.sign = sign;
  local_30.normal_exp = exp;
  local_30.fraction.ll = frac;
  lVar1 = __pack_d(&local_30);
  return lVar1;
}

SFtype dptofp(DFtype arg_a) {
  uint uVar1;
  uint frac;
  float fVar2;
  fp_number_type__523_35 local_40;
  FLO_union_type__523_40 local_20 [2];
  
  local_20[0].value = arg_a;
  __unpack_d(local_20,&local_40);
  uVar1 = (uint)((local_40.fraction.ll << 2) >> 0x20);
  frac = uVar1 | 1;
  if ((local_40.fraction.ll & 0x3fffffff) == 0) {
    frac = uVar1;
  }
  fVar2 = __make_fp(local_40.class,local_40.sign,local_40.normal_exp,frac);
  return fVar2;
}

USItype dptoul(FLO_type arg_a) {
  uint uVar1;
  fp_number_type__523_35 local_40;
  FLO_union_type__523_40 local_20 [2];
  
  local_20[0].value = arg_a;
  __unpack_d(local_20,&local_40);
  uVar1 = 0;
  if ((((local_40.class != CLASS_ZERO) && (uVar1 = 0, CLASS_QNAN < local_40.class)) &&
      (local_40.sign == 0)) && (uVar1 = 0xffffffff, local_40.class != CLASS_INFINITY)) {
    uVar1 = 0;
    if ((-1 < local_40.normal_exp) && (uVar1 = 0xffffffff, local_40.normal_exp < 0x20)) {
      if (local_40.normal_exp < 0x3d) {
        uVar1 = (uint)(local_40.fraction.ll >> (long)(0x3c - local_40.normal_exp));
      }
      else {
        uVar1 = (uint)(local_40.fraction.ll << (long)(local_40.normal_exp + -0x3c));
      }
    }
  }
  return uVar1;
}

FLO_type __pack_d(fp_number_type *src) {
  fp_class_type fVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  fVar1 = src->class;
  uVar4 = 0;
  uVar3 = (src->fraction).ll;
  if (fVar1 < CLASS_ZERO) {
    uVar4 = 0x7ff;
    uVar3 = uVar3 | 0x8000000000000;
    goto LAB_002a24a4;
  }
  if (fVar1 != CLASS_INFINITY) {
    if (fVar1 == CLASS_ZERO) {
      uVar3 = 0;
      goto LAB_002a24a4;
    }
    if (uVar3 == 0) goto LAB_002a24a4;
    iVar2 = src->normal_exp;
    if (iVar2 < -0x3fe) {
      uVar3 = 0;
      goto LAB_002a24a4;
    }
    if (iVar2 < 0x400) {
      uVar4 = (ulong)(iVar2 + 0x3ff);
      uVar3 = uVar3 >> 8;
      goto LAB_002a24a4;
    }
  }
  uVar4 = 0x7ff;
  uVar3 = 0;
LAB_002a24a4:
  return uVar3 & 0xfffffffffffff | (uVar4 & 0x7ff) << 0x34 | (long)(int)src->sign << 0x3f;
}

void __unpack_d(FLO_union_type *src, fp_number_type *dst) {
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = src->value_raw;
  uVar3 = uVar1 >> 0x34 & 0x7ff;
  uVar2 = uVar1 & 0xfffffffffffff;
  dst->sign = (uint)(uVar1 >> 0x3f);
  if (uVar3 == 0) {
    dst->class = CLASS_ZERO;
    return;
  }
  if (uVar3 != 0x7ff) {
    (dst->fraction).ll = uVar2 << 8 | 0x1000000000000000;
    dst->normal_exp = (int)uVar3 + -0x3ff;
    dst->class = CLASS_NUMBER;
    return;
  }
  dst->normal_exp = 0x3ff;
  if (uVar2 == 0) {
    (dst->fraction).ll = 0x1000000000000000;
    dst->class = CLASS_INFINITY;
    return;
  }
  if ((uVar1 & 0x8000000000000) == 0) {
    dst->class = CLASS_SNAN;
  }
  else {
    dst->class = CLASS_QNAN;
  }
  (dst->fraction).ll = uVar2;
  return;
}

int __fpcmp_parts_d(fp_number_type *a, fp_number_type *b) {
  fp_class_type fVar1;
  fp_class_type fVar2;
  int iVar3;
  uint uVar4;
  
  fVar1 = a->class;
  if ((fVar1 < CLASS_ZERO) || (fVar2 = b->class, fVar2 < CLASS_ZERO)) {
    return 1;
  }
  if (fVar1 == CLASS_INFINITY) {
    if ((fVar2 ^ CLASS_INFINITY) == CLASS_SNAN) {
      return b->sign - a->sign;
    }
    uVar4 = a->sign;
  }
  else {
    if ((fVar2 ^ CLASS_INFINITY) == CLASS_SNAN) {
      iVar3 = 1;
      if (b->sign == 0) {
        iVar3 = -1;
      }
      return iVar3;
    }
    if (fVar1 == CLASS_ZERO) {
      if (fVar2 == CLASS_ZERO) {
        return 0;
      }
      iVar3 = -1;
      if (b->sign != 0) {
        iVar3 = 1;
      }
      return iVar3;
    }
    if (fVar2 != CLASS_ZERO) {
      uVar4 = a->sign;
      if (uVar4 == b->sign) {
        if (a->normal_exp <= b->normal_exp) {
          if (b->normal_exp <= a->normal_exp) {
            if ((b->fraction).ll < (a->fraction).ll) goto LAB_002a26b4;
            if ((b->fraction).ll <= (a->fraction).ll) {
              return 0;
            }
          }
          iVar3 = 1;
          if (uVar4 == 0) {
            iVar3 = -1;
          }
          return iVar3;
        }
      }
LAB_002a26b4:
      iVar3 = -1;
      if (uVar4 == 0) {
        iVar3 = 1;
      }
      return iVar3;
    }
    uVar4 = a->sign;
  }
  iVar3 = -1;
  if (uVar4 == 0) {
    iVar3 = 1;
  }
  return iVar3;
}

SItype dptoli(FLO_type arg_a) {
  int iVar1;
  fp_number_type__523_35 local_40;
  FLO_union_type__523_40 local_20 [2];
  
  local_20[0].value = arg_a;
  __unpack_d(local_20,&local_40);
  if (local_40.class == CLASS_ZERO) {
    return 0;
  }
  if (local_40.class < CLASS_ZERO) {
    return 0;
  }
  if (local_40.class != CLASS_INFINITY) {
    if (local_40.normal_exp < 0) {
      return 0;
    }
    if (local_40.normal_exp < 0x1f) {
      iVar1 = (int)(local_40.fraction.ll >> (long)(0x3c - local_40.normal_exp));
      if (local_40.sign == 0) {
        return iVar1;
      }
      return -iVar1;
    }
  }
  iVar1 = 0x7fffffff;
  if (local_40.sign != 0) {
    iVar1 = -0x80000000;
  }
  return iVar1;
}
