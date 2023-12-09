// STATUS: NOT STARTED

#include "ef_sqrt.h"

static float one = 1.f;
static float tiny = 9.99999909e-31f;

float __ieee754_sqrtf(float x) {
	float z;
	__uint32_t r;
	__uint32_t hx;
	__int32_t ix;
	__int32_t s;
	__int32_t q;
	__int32_t m;
	__int32_t t;
	
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (0x7fffff < ((uint)x & 0x7fffffff)) {
    if (-1 < (int)x) {
      uVar5 = ((int)x >> 0x17) - 0x7f;
      iVar6 = 0;
      uVar2 = 0x1000000;
      iVar3 = (((uint)x & 0x7fffff | 0x800000) << (uVar5 & 1)) << 1;
      uVar4 = 0;
      do {
        iVar1 = iVar6 + uVar2;
        if (iVar1 <= iVar3) {
          iVar3 = iVar3 - iVar1;
          iVar6 = iVar1 + uVar2;
          uVar4 = uVar4 + uVar2;
        }
        uVar2 = uVar2 >> 1;
        iVar3 = iVar3 << 1;
      } while (uVar2 != 0);
      if (iVar3 != 0) {
        uVar4 = uVar4 + (uVar4 & 1);
      }
      return (float)(((int)uVar4 >> 1) + 0x3f000000 + ((int)uVar5 >> 1) * 0x800000);
    }
    x = (x - x) / (x - x);
  }
  return x;
}
