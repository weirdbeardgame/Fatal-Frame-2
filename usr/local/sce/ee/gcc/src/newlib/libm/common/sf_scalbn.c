// STATUS: NOT STARTED

#include "sf_scalbn.h"

static float two25 = 33554432.f;
static float twom25 = 2.98023224e-08f;
static float huge = 9.99999939e+29f;
static float tiny = 9.99999909e-31f;

float scalbnf(float x, int n) {
	__int32_t k;
	__uint32_t hx;
	
  int iVar1;
  float fVar2;
  float x_00;
  
  iVar1 = (((uint)x & 0x7fffffff) >> 0x17) + n;
  if (0x7fffff < ((uint)x & 0x7fffffff)) {
    if (iVar1 < 0x100) {
      if (0 < iVar1) {
        return (float)((uint)x & 0x807fffff | iVar1 * 0x800000);
      }
      if (n < 0xc351) {
        x_00 = 9.999999e-31;
      }
      else {
        x_00 = 9.999999e+29;
      }
    }
    else {
      x_00 = 9.999999e+29;
    }
    fVar2 = copysignf(x_00,x);
    x = fVar2 * x_00;
  }
  return x;
}
