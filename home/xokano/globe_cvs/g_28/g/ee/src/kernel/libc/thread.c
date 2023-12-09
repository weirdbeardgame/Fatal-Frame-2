// STATUS: NOT STARTED

#include "thread.h"

struct rqueue {
	int top;
	int btm;
	struct {
		u_char type;
		u_char id;
	} que[512];
};

static int topId = 0;
static int topSema;
static rqueue topArg;

static void topThread(void *arg) {
	rqueue *r;
	int idx;
	
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  
  do {
    while( true ) {
      while( true ) {
        WaitSema(topSema);
                    /* WARNING: Load size is inaccurate */
        iVar2 = (*arg & 0x1ff) * 2;
        *(uint *)arg = (*arg & 0x1ff) + 1;
        puVar3 = (undefined *)((int)arg + iVar2 + 9);
        bVar1 = *(byte *)((int)arg + iVar2 + 8);
        if (bVar1 != 1) break;
        RotateThreadReadyQueue(*puVar3);
      }
      if (1 < bVar1) break;
      if (bVar1 == 0) {
        WakeupThread(*puVar3);
      }
      else {
LAB_0027e998:
        kprintf("## internel error in libkernl.a!\n");
      }
    }
    if (bVar1 != 2) goto LAB_0027e998;
    SuspendThread(*(undefined *)((int)arg + iVar2 + 9));
  } while( true );
}

int InitThread() {
	ThreadParam tp;
	SemaParam sp;
	static char stack[1024];
	
  long lVar1;
  undefined8 uVar2;
  ThreadParam tp;
  SemaParam sp;
  
  if (topId < 1) {
    sp.initCount = 0;
    sp.maxCount = 0xff;
    lVar1 = CreateSema(&sp);
    topSema = (int)lVar1;
    if (-1 < lVar1) {
      tp.entry = topThread;
      tp.stack = &stack_15;
      tp.stackSize = 0x400;
      tp.gpReg = &ChrSortFlyList[3].hdl;
      tp.initPriority = 0;
      lVar1 = CreateThread(&tp);
      topId = (int)lVar1;
      if (-1 < lVar1) {
        topArg.top = 0;
        topArg.btm = 0;
        StartThread(lVar1,0x4c33f8);
        uVar2 = GetThreadId();
        ChangeThreadPriority(uVar2,1);
        return topId;
      }
      DeleteSema(topSema);
    }
  }
  return -1;
}

int iWakeupThread(int tid) {
	int idx;
	int val;
	
  int iVar1;
  uint in_v0_lo;
  uint uVar2;
  
  iVar1 = topSema;
  syscall(0);
  if (in_v0_lo == tid) {
    if ((in_v0_lo < 0x100) && (topId != 0)) {
      uVar2 = topArg.btm & 0x1ff;
      topArg.btm = uVar2 + 1;
      topArg.que[uVar2].type = '\0';
      topArg.que[uVar2].id = (uchar)in_v0_lo;
      iSignalSema(iVar1);
    }
    else {
      in_v0_lo = 0xffffffff;
    }
  }
  else {
    in_v0_lo = _iWakeupThread();
  }
  return in_v0_lo;
}

int iRotateThreadReadyQueue(int prio) {
	int idx;
	
  int iVar1;
  uint uVar2;
  
  iVar1 = topSema;
  if (((uint)prio < 0x80) && (topId != 0)) {
    uVar2 = topArg.btm & 0x1ff;
    topArg.btm = uVar2 + 1;
    topArg.que[uVar2].type = '\x01';
    topArg.que[uVar2].id = (uchar)prio;
    iSignalSema(iVar1);
  }
  else {
    prio = -1;
  }
  return prio;
}

int iSuspendThread(int tid) {
	int idx;
	int val;
	
  int iVar1;
  uint in_v0_lo;
  uint uVar2;
  
  iVar1 = topSema;
  syscall(0);
  if (in_v0_lo == tid) {
    if ((in_v0_lo < 0x100) && (topId != 0)) {
      uVar2 = topArg.btm & 0x1ff;
      topArg.btm = uVar2 + 1;
      topArg.que[uVar2].type = '\x02';
      topArg.que[uVar2].id = (uchar)in_v0_lo;
      iSignalSema(iVar1);
    }
    else {
      in_v0_lo = 0xffffffff;
    }
  }
  else {
    in_v0_lo = _iSuspendThread();
  }
  return in_v0_lo;
}

int DelayThread(u_int uiUsec) {
	SemaParam sp;
	int sid;
	int aid;
	int status;
	
  int iVar1;
  long lVar2;
  ulong ulClock;
  SemaParam sp;
  
  if ((Status & 0x10000) == 0) {
    iVar1 = -0x7fff7ff8;
  }
  else {
    sp.maxCount = 1;
    sp.option = (uint)s_DelayThread_003ea1f0;
    sp.initCount = 0;
    lVar2 = CreateSema(&sp);
    if (lVar2 < 0) {
      iVar1 = -0x7fff7ffd;
    }
    else {
      ulClock = TimerUSec2BusClock(0,uiUsec);
      iVar1 = SetTimerAlarm(ulClock,_DelayThreadHandler,(void *)lVar2);
      if (iVar1 < 0) {
        DeleteSema(lVar2);
      }
      else {
        WaitSema(lVar2);
        DeleteSema(lVar2);
        iVar1 = 0;
      }
    }
  }
  return iVar1;
}

static u_long _DelayThreadHandler(int id, u_long ulSchedule, u_long ulActual, void *arg, void *addr) {
  iSignalSema(arg);
  SYNC(0);
  EI();
  return 0;
}
