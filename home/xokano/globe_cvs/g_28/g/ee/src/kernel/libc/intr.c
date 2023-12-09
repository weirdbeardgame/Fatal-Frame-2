// STATUS: NOT STARTED

#include "intr.h"

int QueryIntrContext() {
	int status;
	
  return (Status ^ 1) & 1;
}

int DisableIntc(int n) {
	u_int stat;
	int rv;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  iVar1 = _DisableIntc(n);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return iVar1;
}

int EnableIntc(int n) {
	u_int stat;
	int rv;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  iVar1 = _EnableIntc(n);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return iVar1;
}

int DisableDmac(int n) {
	u_int stat;
	int rv;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  iVar1 = _DisableDmac(n);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return iVar1;
}

int EnableDmac(int n) {
	u_int stat;
	int rv;
	
  int iVar1;
  uint uVar2;
  
  uVar2 = Status & 0x10000;
  if (uVar2 != 0) {
    DIntr();
  }
  iVar1 = _EnableDmac(n);
  SYNC(0);
  if (uVar2 != 0) {
    EIntr();
  }
  return iVar1;
}

int iEnableIntc(int n) {
  int iVar1;
  
  iVar1 = _iEnableIntc(n);
  SYNC(0);
  return iVar1;
}

int iDisableIntc(int n) {
  int iVar1;
  
  iVar1 = _iDisableIntc(n);
  SYNC(0);
  return iVar1;
}

int iEnableDmac(int n) {
  int iVar1;
  
  iVar1 = _iEnableDmac(n);
  SYNC(0);
  return iVar1;
}

int iDisableDmac(int n) {
  int iVar1;
  
  iVar1 = _iDisableDmac(n);
  SYNC(0);
  return iVar1;
}
