// STATUS: NOT STARTED

#include "exit.h"

void exit(int code) {
	_atexit *p;
	int n;
	
  code *pcVar1;
  int iVar2;
  undefined1 **ppuVar4;
  _atexit *p_Var5;
  int iVar3;
  
  p_Var5 = _impure_ptr->_atexit;
  if (p_Var5 != (_atexit *)0x0) {
    iVar3 = p_Var5->_ind;
    while( true ) {
      iVar2 = iVar3 + -1;
      if (-1 < iVar2) {
        ppuVar4 = p_Var5->_fns + iVar3 + -1;
        pcVar1 = (code *)*ppuVar4;
        while( true ) {
          ppuVar4 = ppuVar4 + -1;
          iVar2 = iVar2 + -1;
          (*pcVar1)();
          if (iVar2 < 0) break;
          pcVar1 = (code *)*ppuVar4;
        }
      }
      p_Var5 = p_Var5->_next;
      if (p_Var5 == (_atexit *)0x0) break;
      iVar3 = p_Var5->_ind;
    }
  }
  if ((code *)_impure_ptr->__cleanup != (code *)0x0) {
    (*(code *)_impure_ptr->__cleanup)();
  }
  _exit(code);
  return;
}
