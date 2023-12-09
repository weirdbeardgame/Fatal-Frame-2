// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TIMER_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TIMER_H

typedef long unsigned int u_long;

void SetT2(unsigned int *addr, unsigned int t);
void SetT2_COUNT(unsigned int t);
void SetT2_MODE(unsigned int t);
void SetT2_COMP(unsigned int t);
int InitTimer(u_int uiMode);
int EndTimer();
int GetTimerPreScaleFactor();
int StartTimerSystemTime();
int StopTimerSystemTime();
u_long iGetTimerSystemTime();
u_long GetTimerSystemTime();
int iAllocTimerCounter();
int AllocTimerCounter();
int iFreeTimerCounter(int id);
int FreeTimerCounter(int id);
int iGetTimerUsedUnusedCounters(int *pnUsed, int *pnUnused);
int GetTimerUsedUnusedCounters(int *pnUsed, int *pnUnused);
int iStartTimerCounter(int id);
int StartTimerCounter(int id);
int iStopTimerCounter(int id);
int StopTimerCounter(int id);
u_long SetTimerCount(int id, u_long ulNewCount);
u_long iGetTimerBaseTime(int id);
u_long GetTimerBaseTime(int id);
u_long iGetTimerCount(int id);
u_long GetTimerCount(int id);
int iSetTimerHandler(int id, u_long ulSchedule, u_long (*cbHandler)(/* parameters unknown */), void *arg);
int SetTimerHandler(int id, u_long ulSchedule, u_long (*cbHandler)(/* parameters unknown */), void *arg);
void TimerBusClock2USec(u_long ulClock, u_int *puiSec, u_int *puiUsec);
u_long TimerUSec2BusClock(u_int uiSec, u_int uiUsec);
float TimerBusClock2Freq(u_long ulClock);
u_long TimerFreq2BusClock(float fFreq);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TIMER_H
