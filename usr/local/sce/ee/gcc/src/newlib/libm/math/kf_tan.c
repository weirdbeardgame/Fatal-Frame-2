// STATUS: NOT STARTED

#include "kf_tan.h"

static float one = 1.f;
static float pio4 = 0.785398126f;
static float pio4lo = 3.77489435e-08f;

static float T[0] = {
};

float __kernel_tanf(float x, float y, int iy) {
	float z;
	float r;
	float v;
	float w;
	float s;
	__int32_t ix;
	float a;
	float t;
	
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = (uint)x & 0x7fffffff;
  if ((uVar2 < 0x31800000) && ((int)x == 0)) {
    if ((uVar2 | iy + 1U) == 0) {
      fVar3 = fabsf(x);
      x = 1.0 / fVar3;
    }
    else if (iy != 1) {
      x = -1.0 / x;
    }
  }
  else {
    if (uVar2 < 0x3f2ca140) {
      fVar3 = x * x;
      fVar4 = x;
    }
    else {
      fVar3 = x;
      if ((int)x < 0) {
        fVar3 = -x;
        y = -y;
      }
      fVar4 = 3.774894e-08 - y;
      y = 0.0;
      fVar4 = (0.7853981 - fVar3) + fVar4;
      fVar3 = fVar4 * fVar4;
    }
    fVar5 = fVar3 * fVar3;
    fVar3 = y + fVar3 * (fVar3 * fVar4 *
                         (DAT_003eb5d4 +
                          fVar5 * (DAT_003eb5dc +
                                  fVar5 * (DAT_003eb5e4 +
                                          fVar5 * (DAT_003eb5ec +
                                                  fVar5 * (DAT_003eb5f4 + fVar5 * DAT_003eb5fc)))) +
                         fVar3 * (DAT_003eb5d8 +
                                 fVar5 * (DAT_003eb5e0 +
                                         fVar5 * (DAT_003eb5e8 +
                                                 fVar5 * (DAT_003eb5f0 +
                                                         fVar5 * (DAT_003eb5f8 +
                                                                 fVar5 * DAT_003eb600)))))) + y) +
            _T * fVar3 * fVar4;
    fVar5 = fVar4 + fVar3;
    if (uVar2 < 0x3f2ca140) {
      x = fVar5;
      if (iy != 1) {
        fVar1 = (float)((uint)(-1.0 / fVar5) & 0xfffff000);
        x = fVar1 + (-1.0 / fVar5) *
                    (fVar1 * (float)((uint)fVar5 & 0xfffff000) + 1.0 +
                    fVar1 * (fVar3 - ((float)((uint)fVar5 & 0xfffff000) - fVar4)));
      }
    }
    else {
      fVar4 = fVar4 - ((fVar5 * fVar5) / (fVar5 + (float)iy) - fVar3);
      x = (float)(1 - ((int)x >> 0x1e & 2U)) * ((float)iy - (fVar4 + fVar4));
    }
  }
  return x;
}
