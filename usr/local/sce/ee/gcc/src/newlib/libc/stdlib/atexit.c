// STATUS: NOT STARTED

#include "atexit.h"

int atexit(void (*fn)(/* parameters unknown */)) {
	_atexit *p;
	
  int iVar1;
  _reent__2_83 *p_Var2;
  _atexit *p_Var3;
  
  p_Var3 = _impure_ptr->_atexit;
  if (p_Var3 == (_atexit *)0x0) {
    p_Var3 = &_impure_ptr->_atexit0;
    _impure_ptr->_atexit = p_Var3;
  }
  if (0x1f < p_Var3->_ind) {
    p_Var3 = (_atexit *)malloc(0x88);
    p_Var2 = _impure_ptr;
    if (p_Var3 == (_atexit *)0x0) {
      return -1;
    }
    p_Var3->_ind = 0;
    p_Var3->_next = p_Var2->_atexit;
    p_Var2->_atexit = p_Var3;
  }
  iVar1 = p_Var3->_ind;
  p_Var3->_ind = iVar1 + 1;
  p_Var3->_fns[iVar1] = fn;
  return 0;
}
