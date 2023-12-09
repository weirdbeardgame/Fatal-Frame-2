// STATUS: NOT STARTED

#include "sf_copysign.h"

float copysignf(float x, float y) {
  return (float)((uint)x & 0x7fffffff | (uint)y & 0x80000000);
}
