// STATUS: NOT STARTED

#include "wf_atan2.h"

float atan2f(float y, float x) {
  float fVar1;
  
  fVar1 = __ieee754_atan2f(y,x);
  return fVar1;
}
