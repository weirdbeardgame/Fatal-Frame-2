// STATUS: NOT STARTED

#include "rand.h"

void srand(unsigned int seed) {
  *(ulong *)((int)&_impure_ptr->_new + 0x50) = (ulong)seed;
  return;
}

int rand() {
  _reent__2_83 *p_Var1;
  long lVar2;
  
  p_Var1 = _impure_ptr;
  lVar2 = __muldi3((_impure_ptr->_new)._reent._rand_next,0x5851f42d4c957f2d);
  (p_Var1->_new)._reent._rand_next = lVar2 + 1U;
  return (uint)(lVar2 + 1U >> 0x20) & 0x7fffffff;
}
