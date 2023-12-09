// STATUS: NOT STARTED

#include "ef_acos.h"

static float one = 1.f;
static float pi = 3.1415925f;
static float pio2_hi = 1.57079625f;
static float pio2_lo = 7.54978942e-08f;
static float pS0 = 0.166666657f;
static float pS1 = -0.325565785f;
static float pS2 = 0.201212525f;
static float pS3 = -0.0400555357f;
static float pS4 = 0.000791535f;
static float pS5 = 3.47933092e-05f;
static float qS1 = -2.4033947f;
static float qS2 = 2.02094555f;
static float qS3 = -0.68828392f;
static float qS4 = 0.0770381466f;

float __ieee754_acosf(float x) {
	float z;
	float p;
	float q;
	float r;
	float w;
	float s;
	float c;
	float df;
	__int32_t ix;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  float x_00;
  
  uVar1 = (uint)x & 0x7fffffff;
  if (uVar1 == 0x3f800000) {
    fVar2 = 0.0;
    if ((int)x < 1) {
      fVar2 = 3.141593;
    }
  }
  else if (uVar1 < 0x3f800001) {
    if (uVar1 < 0x3f000000) {
      fVar2 = 1.570796;
      if (0x23000000 < uVar1) {
        fVar2 = x * x;
        fVar2 = 1.570796 -
                (x - (7.549789e-08 -
                     x * ((fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * (fVar2 * 3.479331e-05 +
                                                                       0.000791535) + -0.04005554) +
                                                     0.2012125) + -0.3255658) + 0.1666667)) /
                         (fVar2 * (fVar2 * (fVar2 * (fVar2 * 0.07703815 + -0.6882839) + 2.020946) +
                                  -2.403395) + 1.0))));
      }
    }
    else if ((int)x < 0) {
      fVar3 = (x + 1.0) * 0.5;
      fVar2 = __ieee754_sqrtf(fVar3);
      fVar2 = fVar2 + (((fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * (fVar3 * 3.479331e-05 +
                                                                     0.000791535) + -0.04005554) +
                                                   0.2012125) + -0.3255658) + 0.1666667)) /
                       (fVar3 * (fVar3 * (fVar3 * (fVar3 * 0.07703815 + -0.6882839) + 2.020946) +
                                -2.403395) + 1.0)) * fVar2 - 7.549789e-08);
      fVar2 = 3.141593 - (fVar2 + fVar2);
    }
    else {
      x_00 = (1.0 - x) * 0.5;
      fVar3 = __ieee754_sqrtf(x_00);
      fVar2 = (float)((uint)fVar3 & 0xfffff000);
      fVar2 = fVar2 + ((x_00 * (x_00 * (x_00 * (x_00 * (x_00 * (x_00 * 3.479331e-05 + 0.000791535) +
                                                       -0.04005554) + 0.2012125) + -0.3255658) +
                               0.1666667)) /
                      (x_00 * (x_00 * (x_00 * (x_00 * 0.07703815 + -0.6882839) + 2.020946) +
                              -2.403395) + 1.0)) * fVar3 + (x_00 - fVar2 * fVar2) / (fVar3 + fVar2);
      fVar2 = fVar2 + fVar2;
    }
  }
  else {
    fVar2 = (x - x) / (x - x);
  }
  return fVar2;
}
