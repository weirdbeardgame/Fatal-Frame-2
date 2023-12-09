// STATUS: NOT STARTED

#include "tlbfunc.h"

static u_int tlbsrc[0] = {
};

void (*_kTLBRefillHandler)(/* parameters unknown */) = NULL;

void (*_kDebugHandler[16])(/* parameters unknown */) = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ NULL,
	/* [8] = */ NULL,
	/* [9] = */ NULL,
	/* [10] = */ NULL,
	/* [11] = */ NULL,
	/* [12] = */ NULL,
	/* [13] = */ NULL,
	/* [14] = */ NULL,
	/* [15] = */ NULL
};

void *_kExecArg = NULL;

static struct SysEntry[0] {
	int num;
	void *func;
} = {
};

static TLBEntry kernelTLB[0] = {
};

static TLBEntry defaultTLB[0] = {
};

static TLBEntry extendTLB[0] = {
};

TLB TLBInfo = {
	/* .numKernel = */ 13,
	/* .numFix = */ 18,
	/* .numUnfix = */ 8,
	/* .wired = */ 0,
	/* .kernelTLB = */ kernelTLB,
	/* .fixTLB = */ defaultTLB,
	/* .unfixTLB = */ extendTLB
};

void* SetTLBHandler(void (*h)(/* parameters unknown */)) {
  _kTLBRefillHandler = h;
  SetVTLBRefillHandler(1,0x286100);
  SetVTLBRefillHandler(2,0x286100);
  SetVTLBRefillHandler(3,0x286100);
  return h;
}

void* SetDebugHandler(int i, void (*h)(/* parameters unknown */)) {
	void *p;
	
  undefined *puVar1;
  
  if (i - 1U < 0xd) {
    puVar1 = _kDebugHandler[i];
    _kDebugHandler[i] = h;
    if (i - 1U < 3) {
      SetVTLBRefillHandler(i,0x286340);
    }
    else {
      SetVCommonHandler(i,0x286340);
    }
  }
  else {
    puVar1 = &_heap_size;
  }
  return puVar1;
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

static void setup(int n, void (*f)(/* parameters unknown */)) {
  syscall(0);
  return;
}

void InitTLBFunctions() {
	int i;
	
  undefined1 *f;
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 3;
  piVar2 = &DAT_00367ed8;
  setup(_SysEntry,PTR_kCopy_00367ec4);
  Copy((uint *)0x80075000,(uint *)&tlbsrc,0x330);
  FlushCache(0);
  FlushCache(2);
  setup(DAT_00367ec8,DAT_00367ecc);
  setup(DAT_00367ed0,PTR__kExitTLBHandler_00367ed4);
  iVar1 = DAT_00367ed8;
  while( true ) {
    uVar3 = uVar3 + 1;
    f = (undefined1 *)GetEntryAddress(iVar1);
    iVar1 = *piVar2;
    piVar2 = piVar2 + 2;
    setup(iVar1,f);
    if (7 < uVar3) break;
    iVar1 = *piVar2;
  }
  _kExecArg = GetEntryAddress(3);
  return;
}

int PutTLBEntry(u_int mask, u_int hi, u_int lo0, u_int lo1) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

int iPutTLBEntry(u_int mask, u_int hi, u_int lo0, u_int lo1) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

static int _SetTLBEntry(int index, u_int mask, u_int hi, u_int lo0, u_int lo1) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

int SetTLBEntry(int index, u_int mask, u_int hi, u_int lo0, u_int lo1) {
  int iVar1;
  
  if (index - 0xdU < 0x23) {
    iVar1 = _SetTLBEntry(index,mask,hi,lo0,lo1);
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

int iSetTLBEntry(int index, u_int mask, u_int hi, u_int lo0, u_int lo1) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

int GetTLBEntry(int index, u_int *mask, u_int *hi, u_int *lo0, u_int *lo1) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

int iGetTLBEntry(int index, u_int *mask, u_int *hi, u_int *lo0, u_int *lo1) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

int ProbeTLBEntry(u_int hi, u_int *mask, u_int *lo0, u_int *lo1) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

int iProbeTLBEntry(u_int hi, u_int *mask, u_int *lo0, u_int *lo1) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

int ExpandScratchPad(u_int page) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

int InitTLB() {
  int iVar1;
  long lVar2;
  
  lVar2 = GetMemorySize();
  if (lVar2 == 0x2000000) {
    iVar1 = InitTLB32MB();
  }
  else {
    iVar1 = _InitTLB();
  }
  return iVar1;
}

static int InitTLB32MB() {
	int index;
	unsigned int hi;
	int end;
	TLBEntry *tlb;
	int k;
	int d;
	int e;
	int i;
	
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  TLBEntry *pTVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  kprintf("# TLB spad=0 kernel=1:%d default=%d:%d extended=%d:%d\n");
  Wired = 0;
  SYNC(0x10);
  lVar6 = (long)TLBInfo.numKernel;
  lVar8 = 0;
  if (0x30 < lVar6) {
    kprintf("# TLB over flow (1)");
    Exit(1);
  }
  if (lVar8 < lVar6) {
    uVar5 = (TLBInfo.kernelTLB)->pageMask;
    pTVar4 = TLBInfo.kernelTLB;
    while( true ) {
      puVar1 = &pTVar4->entryHi;
      puVar2 = &pTVar4->entryLo0;
      puVar3 = &pTVar4->entryLo1;
      pTVar4 = pTVar4 + 1;
      iVar7 = (int)lVar8;
      _SetTLBEntry(iVar7,uVar5,*puVar1,*puVar2,*puVar3);
      lVar8 = (long)(iVar7 + 1);
      if (lVar6 <= lVar8) break;
      uVar5 = pTVar4->pageMask;
    }
  }
  lVar6 = (long)((int)lVar8 + TLBInfo.numFix);
  if (0x30 < lVar6) {
    kprintf("# TLB over flow (2)");
    Exit(1);
  }
  if (lVar8 < lVar6) {
    uVar5 = (TLBInfo.fixTLB)->pageMask;
    pTVar4 = TLBInfo.fixTLB;
    while( true ) {
      puVar1 = &pTVar4->entryHi;
      puVar2 = &pTVar4->entryLo0;
      puVar3 = &pTVar4->entryLo1;
      pTVar4 = pTVar4 + 1;
      iVar7 = (int)lVar8;
      _SetTLBEntry(iVar7,uVar5,*puVar1,*puVar2,*puVar3);
      lVar8 = (long)(iVar7 + 1);
      if (lVar6 <= lVar8) break;
      uVar5 = pTVar4->pageMask;
    }
  }
  Wired = (int)lVar8;
  SYNC(0x10);
  TLBInfo.wired = Wired;
  if (0 < TLBInfo.numUnfix) {
    lVar6 = (long)(Wired + TLBInfo.numUnfix);
    if (0x30 < lVar6) {
      kprintf("# TLB over flow (3)");
      Exit(1);
    }
    if (lVar8 < lVar6) {
      uVar5 = (TLBInfo.unfixTLB)->pageMask;
      pTVar4 = TLBInfo.unfixTLB;
      while( true ) {
        puVar1 = &pTVar4->entryHi;
        puVar2 = &pTVar4->entryLo0;
        puVar3 = &pTVar4->entryLo1;
        pTVar4 = pTVar4 + 1;
        iVar7 = (int)lVar8;
        _SetTLBEntry(iVar7,uVar5,*puVar1,*puVar2,*puVar3);
        lVar8 = (long)(iVar7 + 1);
        if (lVar6 <= lVar8) break;
        uVar5 = pTVar4->pageMask;
      }
    }
  }
  iVar7 = (int)lVar8 * 0x2000;
  lVar6 = (long)iVar7;
  if (lVar8 < 0x30) {
    uVar5 = iVar7 + 0xe0000000;
    do {
      iVar7 = (int)lVar8;
      lVar8 = (long)(iVar7 + 1);
      _SetTLBEntry(iVar7,0,uVar5,0,0);
      iVar7 = (int)lVar6;
      uVar5 = uVar5 + 0x2000;
    } while (lVar8 < 0x30);
  }
  return iVar7;
}
