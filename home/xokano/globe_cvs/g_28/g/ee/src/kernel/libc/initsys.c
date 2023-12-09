// STATUS: NOT STARTED

#include "initsys.h"

static int *_SyscallEntry = NULL;

static struct SysEntry[0] {
	int num;
	void *func;
} = {
};

int __sce_sema_id = 0;
int __sce_eh_sema_id = 0;

static void supplement_crt0() {
	SemaParam libc_sema;
	SemaParam eh_sema;
	
  SemaParam libc_sema;
  SemaParam eh_sema;
  
  eh_sema.initCount = 1;
  libc_sema.maxCount = 1;
  libc_sema.initCount = 1;
  eh_sema.maxCount = 1;
  __sce_sema_id = CreateSema(&libc_sema);
  __sce_eh_sema_id = CreateSema(&eh_sema);
  return;
}

int __sceKernlGetEhSemaId() {
  return __sce_eh_sema_id;
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

static void* kFindAddress(u_int *start, u_int *end, int value) {
  bool bVar1;
  
  bVar1 = start < end;
  if (*start != value) {
    if (!bVar1) {
      if (bVar1) {
        return start;
      }
      return (void *)0x0;
    }
    for (start = start + 1; bVar1 = start < end, *start != value; start = start + 1) {
      if (!bVar1) {
        if (bVar1) {
          return start;
        }
        return (void *)0x0;
      }
    }
  }
  if (!bVar1) {
    start = (uint *)0x0;
  }
  return start;
}

static void* FindAddress(u_int *start, u_int *end, int value) {
  void *in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

void* GetSystemCallEntry(int no) {
	u_int addr;
	
  uint addr;
  
  Copy(&addr,(uint *)(_SyscallEntry + no),4);
  return (void *)addr;
}

static void InitSystemCallTableAddress() {
	int *addr0;
	int *addr1;
	
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  
  setup(_SysEntry,PTR_kFindAddress_0036819c);
  setup(DAT_003681a0,PTR_kCopy_003681a4);
  pvVar2 = FindAddress((uint *)0x80000000,(uint *)0x80080000,0x286570);
  pvVar3 = FindAddress((uint *)0x80000000,(uint *)0x80080000,0x286538);
  piVar5 = (int *)((int)pvVar2 + -0x20c);
  piVar4 = (int *)((int)pvVar3 + -0x168);
  if (piVar5 != piVar4) {
    bVar1 = piVar5 < piVar4;
    do {
      if (bVar1) {
        pvVar2 = FindAddress((uint *)((int)pvVar2 + 4),(uint *)0x80080000,0x286570);
        piVar5 = (int *)((int)pvVar2 + -0x20c);
      }
      else {
        pvVar3 = FindAddress((uint *)((int)pvVar3 + 4),(uint *)0x80080000,0x286538);
        piVar4 = (int *)((int)pvVar3 + -0x168);
      }
      bVar1 = piVar5 < piVar4;
    } while (piVar5 != piVar4);
  }
  _SyscallEntry = piVar5;
  return;
}

static void setup(int n, void (*f)(/* parameters unknown */)) {
  syscall(0);
  return;
}

void _InitSys() {
  supplement_crt0();
  InitSystemCallTableAddress();
  InitAlarm();
  InitTimer(2);
  StartTimerSystemTime();
  InitThread();
  InitExecPS2();
  InitTLBFunctions();
  sceSifInitRebootNotify();
  return;
}
