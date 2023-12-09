// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_THREAD_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_THREAD_H


int InitThread();
int iWakeupThread(int tid);
int iRotateThreadReadyQueue(int prio);
int iSuspendThread(int tid);
int DelayThread(u_int uiUsec);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_THREAD_H
