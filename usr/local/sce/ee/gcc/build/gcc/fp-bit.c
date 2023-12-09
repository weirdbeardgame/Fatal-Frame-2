// STATUS: NOT STARTED

#include "fp-bit.h"

DFtype fptodp(SFtype arg_a) {
  long lVar1;
  fp_number_type__522_35 local_30;
  FLO_union_type__522_40 local_20 [4];
  
  local_20[0].value = arg_a;
  __unpack_f(local_20,&local_30);
  lVar1 = __make_dp(local_30.class,local_30.sign,local_30.normal_exp,
                    (ulong)local_30.fraction.ll << 0x1e);
  return lVar1;
}

void __unpack_f(FLO_union_type *src, fp_number_type *dst) {
  uint uVar1;
  uint uVar2;
  
  uVar1 = src->value_raw;
  uVar2 = uVar1 >> 0x17 & 0xff;
  dst->sign = uVar1 >> 0x1f;
  if (uVar2 == 0) {
    dst->class = CLASS_ZERO;
    return;
  }
  dst->normal_exp = uVar2 - 0x7f;
  dst->class = CLASS_NUMBER;
  (dst->fraction).ll = (uVar1 & 0x7fffff) << 7 | 0x40000000;
  return;
}

SFtype __make_fp(fp_class_type class, unsigned int sign, int exp, USItype frac) {
  float fVar1;
  fp_number_type__522_35 local_20;
  
  local_20.class = class;
  local_20.sign = sign;
  local_20.normal_exp = exp;
  local_20.fraction.ll = frac;
  fVar1 = __pack_f(&local_20);
  return fVar1;
}

FLO_type __pack_f(fp_number_type *src) {
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = (src->fraction).ll;
  if (src->class != CLASS_ZERO) {
    if (uVar2 == 0) goto LAB_002a2748;
    iVar1 = src->normal_exp;
    if (iVar1 < -0x7e) {
      uVar2 = 0;
      goto LAB_002a2748;
    }
    if (iVar1 < 0x81) {
      uVar3 = iVar1 + 0x7f;
      if (iVar1 != 0x80) {
        uVar2 = uVar2 >> 7;
        goto LAB_002a2748;
      }
      if (-1 < (int)uVar2) {
        uVar2 = uVar2 >> 7;
        goto LAB_002a2748;
      }
      uVar3 = 0xff;
    }
    else {
      uVar3 = 0xff;
    }
  }
  uVar2 = 0;
LAB_002a2748:
  return (float)(uVar2 & 0x7fffff | (uVar3 & 0xff) << 0x17 | src->sign << 0x1f);
}
