// STATUS: NOT STARTED

#include "signal.h"

int _init_signal_r(_reent *ptr) {
	int i;
	
  undefined1 **ppuVar1;
  int iVar2;
  
  if (ptr->_sig_func == (undefined1 **)0x0) {
    ppuVar1 = (undefined1 **)_malloc_r(ptr,0x80);
    iVar2 = -1;
    ptr->_sig_func = ppuVar1;
    if (ppuVar1 != (undefined1 **)0x0) {
      ppuVar1 = ppuVar1 + 0x1f;
      iVar2 = 0x1f;
      do {
        iVar2 = iVar2 + -1;
        *ppuVar1 = (undefined1 *)0x0;
        ppuVar1 = ppuVar1 + -1;
      } while (-1 < iVar2);
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

_sig_func_ptr _signal_r(_reent *ptr, int sig, _sig_func_ptr func) {
	_sig_func_ptr old_func;
	
  undefined *puVar1;
  int iVar2;
  undefined1 **ppuVar3;
  
  if ((uint)sig < 0x20) {
    ppuVar3 = ptr->_sig_func;
    if (ppuVar3 == (undefined1 **)0x0) {
      iVar2 = _init_signal_r(ptr);
      if (iVar2 != 0) {
        return &_heap_size;
      }
      ppuVar3 = ptr->_sig_func;
    }
    puVar1 = ppuVar3[sig];
    ppuVar3[sig] = func;
  }
  else {
    puVar1 = &_heap_size;
    ptr->_errno = 0x16;
  }
  return puVar1;
}

int _raise_r(_reent *ptr, int sig) {
	_sig_func_ptr func;
	
  code *pcVar1;
  int iVar2;
  undefined1 **ppuVar3;
  
  if ((uint)sig < 0x20) {
    ppuVar3 = ptr->_sig_func;
    if (ppuVar3 == (undefined1 **)0x0) {
      iVar2 = _init_signal_r(ptr);
      if (iVar2 != 0) {
        return -1;
      }
      ppuVar3 = ptr->_sig_func;
    }
    pcVar1 = (code *)ppuVar3[sig];
    if (pcVar1 == (code *)0x0) {
      iVar2 = _getpid_r(ptr);
      iVar2 = _kill_r(ptr,iVar2,sig);
      return iVar2;
    }
    iVar2 = 0;
    if (pcVar1 != (code *)&GRA3DVU1MEM_VF02) {
      if (pcVar1 == (code *)&_heap_size) {
        iVar2 = 1;
        ptr->_errno = 0x16;
      }
      else {
        ppuVar3[sig] = (code *)0x0;
        (*pcVar1)(sig);
        iVar2 = 0;
      }
    }
  }
  else {
    iVar2 = -1;
    ptr->_errno = 0x16;
  }
  return iVar2;
}

int __sigtramp_r(_reent *ptr, int sig) {
	_sig_func_ptr func;
	
  code *pcVar1;
  int iVar2;
  undefined1 **ppuVar3;
  
  iVar2 = -1;
  if ((uint)sig < 0x20) {
    ppuVar3 = ptr->_sig_func;
    if (ppuVar3 == (undefined1 **)0x0) {
      iVar2 = _init_signal_r(ptr);
      if (iVar2 != 0) {
        return -1;
      }
      ppuVar3 = ptr->_sig_func;
    }
    pcVar1 = (code *)ppuVar3[sig];
    iVar2 = 1;
    if (((pcVar1 != (code *)0x0) && (iVar2 = 2, pcVar1 != (code *)&_heap_size)) &&
       (iVar2 = 3, pcVar1 != (code *)&GRA3DVU1MEM_VF02)) {
      ppuVar3[sig] = (code *)0x0;
      (*pcVar1)(sig);
      iVar2 = 0;
    }
  }
  return iVar2;
}

int raise(int sig) {
  int iVar1;
  
  iVar1 = _raise_r(_impure_ptr,sig);
  return iVar1;
}

_sig_func_ptr signal(int sig, _sig_func_ptr func) {
  undefined1 *puVar1;
  
  puVar1 = _signal_r(_impure_ptr,sig,func);
  return puVar1;
}

int _init_signal() {
  int iVar1;
  
  iVar1 = _init_signal_r(_impure_ptr);
  return iVar1;
}

int __sigtramp(int sig) {
  int iVar1;
  
  iVar1 = __sigtramp_r(_impure_ptr,sig);
  return iVar1;
}
