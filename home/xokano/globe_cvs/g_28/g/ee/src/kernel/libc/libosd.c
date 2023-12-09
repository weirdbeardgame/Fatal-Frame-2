// STATUS: NOT STARTED

#include "libosd.h"

typedef struct {
	int num;
	void *func;
} SysEntry;

typedef struct {
	u_int Spdif : 1;
	u_int Aspct : 2;
	u_int Video : 1;
	u_int oldLang : 1;
	u_int Compval : 8;
	u_int pad0 : 3;
	u_int Language : 5;
	int TimeZone : 11;
} OsdConfigParam;

static u_int osdsrc[0] = {
};

SysEntry SysExecPS2Entry[0] = {
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

static int PatchIsNeeded() {
	OsdConfigParam p;
	OsdConfigParam back;
	
  OsdConfigParam back;
  OsdConfigParam p;
  
  GetOsdConfigParam(&back);
  p.Compval = back.Compval & 0xffff1fff | 0x2000;
  SetOsdConfigParam(&p);
  GetOsdConfigParam(&p);
  SetOsdConfigParam(&back);
  return (int)((p.Compval >> 0xd & 7) == 0);
}

void InitExecPS2() {
	int i;
	
  int iVar1;
  undefined1 *f;
  int *piVar2;
  uint uVar3;
  
  iVar1 = PatchIsNeeded();
  if (iVar1 != 0) {
    uVar3 = 2;
    piVar2 = &DAT_00368968;
    setup(_SysExecPS2Entry,PTR_kCopy_0036895c);
    Copy((uint *)0x80074000,(uint *)&osdsrc,0x7a8);
    FlushCache(0);
    FlushCache(2);
    setup(DAT_00368960,DAT_00368964);
    iVar1 = DAT_00368968;
    while( true ) {
      uVar3 = uVar3 + 1;
      f = (undefined1 *)GetEntryAddress(iVar1);
      iVar1 = *piVar2;
      piVar2 = piVar2 + 2;
      setup(iVar1,f);
      if (2 < uVar3) break;
      iVar1 = *piVar2;
    }
  }
  return;
}
