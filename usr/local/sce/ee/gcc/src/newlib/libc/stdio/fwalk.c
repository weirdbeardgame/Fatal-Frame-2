// STATUS: NOT STARTED

#include "fwalk.h"

int _fwalk(_reent *ptr, int (*function)(/* parameters unknown */)) {
	FILE *fp;
	int n;
	int ret;
	_glue *g;
	
  uint uVar1;
  int iVar2;
  __sFILE *p_Var3;
  _glue *p_Var4;
  uint uVar5;
  
  p_Var4 = &ptr->__sglue;
  uVar5 = 0;
  if (p_Var4 != (_glue *)0x0) {
    iVar2 = (ptr->__sglue)._niobs;
    uVar5 = 0;
    while( true ) {
      p_Var3 = p_Var4->_iobs;
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        if (p_Var3->_flags != 0) {
          uVar1 = (*(code *)function)(p_Var3);
          uVar5 = uVar5 | uVar1;
        }
        p_Var3 = p_Var3 + 1;
      }
      p_Var4 = p_Var4->_next;
      if (p_Var4 == (_glue *)0x0) break;
      iVar2 = p_Var4->_niobs;
    }
  }
  return uVar5;
}
