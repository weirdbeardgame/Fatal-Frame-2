// STATUS: NOT STARTED

#include "alarm.h"

static u_int srcfile[0] = {
};

static u_int eenull[0] = {
};

static struct SysEntry[0] {
	int num;
	void *func;
} = {
};

static void setup(int n, void (*f)(/* parameters unknown */)) {
  syscall(0);
  return;
}

static int Copy(u_int *dst, u_int *src, u_int size) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

static int kCopy(u_int *dst, u_int *src, u_int size) {
	int i;
	
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (size >> 2 != 0) {
    do {
      uVar1 = *src;
      uVar2 = uVar2 + 1;
      src = src + 1;
      *dst = uVar1;
      dst = dst + 1;
    } while (uVar2 < size >> 2);
  }
  return 0;
}

static void* GetEntryAddress(int id) {
  void *in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

void InitAlarm() {
	int i;
	
  undefined1 *f;
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = REG_RCNT3_MODE;
  if ((uVar3 & 0x100) == 0) {
    uVar3 = 2;
    piVar2 = &DAT_003690f0;
    setup(_SysEntry,PTR_kCopy_003690e4);
    Copy((uint *)0x80076000,(uint *)&srcfile,0x740);
    Copy((uint *)0x82000,(uint *)&eenull,0x28);
    FlushCache(0);
    FlushCache(2);
    setup(DAT_003690e8,DAT_003690ec);
    iVar1 = DAT_003690f0;
    while( true ) {
      uVar3 = uVar3 + 1;
      f = (undefined1 *)GetEntryAddress(iVar1);
      iVar1 = *piVar2;
      piVar2 = piVar2 + 2;
      setup(iVar1,f);
      if (7 < uVar3) break;
      iVar1 = *piVar2;
    }
  }
  return;
}
