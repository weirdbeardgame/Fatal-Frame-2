// STATUS: NOT STARTED

#include "ef_fmod.h"

static float one = 1.f;

static float Zero[0] = {
};

float __ieee754_fmodf(float x, float y) {
	__int32_t n;
	__int32_t hx;
	__int32_t hy;
	__int32_t hz;
	__int32_t ix;
	__int32_t iy;
	__int32_t sx;
	
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar4 = (uint)y & 0x7fffffff;
  uVar7 = (uint)x & 0x80000000;
  uVar3 = (uint)x ^ uVar7;
  if (uVar4 < 0x800000) {
    x = (x * y) / (x * y);
  }
  else if ((int)uVar4 <= (int)uVar3) {
    if (uVar3 != uVar4) {
      iVar6 = ((int)uVar3 >> 0x17) + -0x7f;
      iVar5 = ((int)uVar4 >> 0x17) + -0x7f;
      if (iVar6 < -0x7e) {
        uVar3 = uVar3 << (-iVar6 - 0x7eU & 0x1f);
      }
      else {
        uVar3 = uVar3 & 0x7fffff | 0x800000;
      }
      bVar1 = iVar5 < -0x7e;
      if (bVar1) {
        uVar4 = uVar4 << (-iVar5 - 0x7eU & 0x1f);
      }
      else {
        uVar4 = (uint)y & 0x7fffff | 0x800000;
      }
      iVar6 = iVar6 - iVar5;
      while( true ) {
        iVar6 = iVar6 + -1;
        uVar2 = uVar3 - uVar4;
        if (iVar6 == -1) break;
        uVar3 = uVar3 << 1;
        if (-1 < (int)uVar2) {
          if (uVar2 == 0) goto LAB_002993fc;
          uVar3 = uVar2 * 2;
        }
      }
      if (-1 < (int)uVar2) {
        uVar3 = uVar2;
      }
      if (uVar3 != 0) {
        if ((int)uVar3 < 0x800000) {
          do {
            uVar3 = uVar3 << 1;
            iVar5 = iVar5 + -1;
          } while ((int)uVar3 < 0x800000);
          bVar1 = iVar5 < -0x7e;
        }
        if (!bVar1) {
          return (float)(uVar3 - 0x800000 | (iVar5 + 0x7f) * 0x800000 | uVar7);
        }
        return (float)((int)uVar3 >> (-iVar5 - 0x7eU & 0x1f) | uVar7);
      }
    }
LAB_002993fc:
    x = *(float *)(&Zero + ((int)x >> 0x1f) * -4);
  }
  return x;
}
