// STATUS: NOT STARTED

#include "wf_sqrt.h"

float sqrtf(float x) {
  float fVar1;
  
  fVar1 = __ieee754_sqrtf(x);
  return fVar1;
}
