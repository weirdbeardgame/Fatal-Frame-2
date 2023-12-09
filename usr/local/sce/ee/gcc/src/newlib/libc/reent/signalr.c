// STATUS: NOT STARTED

#include "signalr.h"

int _kill_r(_reent *ptr, int pid, int sig) {
	int ret;
	
  int iVar1;
  
  errno = 0;
  iVar1 = kill(pid,sig);
  if ((iVar1 == -1) && (errno != 0)) {
    ptr->_errno = errno;
  }
  return iVar1;
}

int _getpid_r(_reent *ptr) {
  __pid_t _Var1;
  
  _Var1 = getpid();
  return _Var1;
}
