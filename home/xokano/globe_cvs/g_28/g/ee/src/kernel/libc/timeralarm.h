// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TIMERALARM_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TIMERALARM_H


int _InitAlarm();
int SetTimerAlarm(u_long ulClock, u_long (*cbHandler)(/* parameters unknown */), void *arg);
int iSetTimerAlarm(u_long ulClock, u_long (*cbHandler)(/* parameters unknown */), void *arg);
int ReleaseTimerAlarm(int id);
int iReleaseTimerAlarm(int id);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TIMERALARM_H
