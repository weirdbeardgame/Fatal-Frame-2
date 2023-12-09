// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_DECI2_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_DECI2_H


int sceDeci2Open(short unsigned int protocol, void *opt, void (*handler)(/* parameters unknown */));
int sceDeci2Close(int s);
int sceDeci2ReqSend(int s, char dest);
void sceDeci2Poll(int s);
int sceDeci2GrpOpen(unsigned char grp, void *opt, int (*handler)(/* parameters unknown */));
int sceDeci2GrpClose(int g);
int sceDeci2ExRecv(int s, void *buf, u_short len);
int sceDeci2ExSend(int s, void *buf, u_short len);
int sceDeci2ExReqSend(int s, char dest);
int sceDeci2ExLock(int s);
int sceDeci2ExUnLock(int s);
int kputs(char *str);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_DECI2_H
