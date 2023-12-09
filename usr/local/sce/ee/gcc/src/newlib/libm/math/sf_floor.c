// STATUS: NOT STARTED

#include "sf_floor.h"

static float huge = 9.99999939e+29f;

float floorf(float x) {
	__int32_t i0;
	__int32_t j0;
	__uint32_t i;
	__uint32_t ix;
	
  uint uVar1;
  uint uVar2;
  
  uVar1 = (((uint)x & 0x7fffffff) >> 0x17) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      if (0.0 < x + 9.999999e+29) {
        if ((int)x < 0) {
          if (0x7fffff < ((uint)x & 0x7fffffff)) {
            x = -1.0;
          }
        }
        else {
          x = 0.0;
        }
      }
    }
    else {
      uVar2 = 0x7fffff >> (uVar1 & 0x1f);
      if ((((uint)x & uVar2) != 0) && (0.0 < x + 9.999999e+29)) {
        if ((int)x < 0) {
          x = (float)((int)x + (0x800000 >> (uVar1 & 0x1f)));
        }
        x = (float)((uint)x & ~uVar2);
      }
    }
  }
  return x;
}
