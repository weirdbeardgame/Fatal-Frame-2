// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_IOPNOTIFY_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_IOPNOTIFY_H

typedef void (*sceSifRebootNotifyHandler)(/* parameters unknown */);

typedef struct {
	sceSifRebootNotifyHandler func;
	void *data;
	void *gp;
	void *reserve;
} sceSifRebootNotifyData;


void sceSifInitRebootNotify();
sceSifRebootNotifyData* sceSifSetRebootNotifyBuffer(sceSifRebootNotifyData *p, int size);
int sceSifAddRebootNotifyHandler(u_int pos, sceSifRebootNotifyHandler pFunc, void *data);
int sceSifRemoveRebootNotifyHandler(u_int pos);
void sceSifExecNotifyHandler(int sys, int mode);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_IOPNOTIFY_H
