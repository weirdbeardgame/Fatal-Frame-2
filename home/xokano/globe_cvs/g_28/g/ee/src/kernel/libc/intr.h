// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_INTR_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_INTR_H

int QueryIntrContext();
int DisableIntc(int n);
int EnableIntc(int n);
int DisableDmac(int n);
int EnableDmac(int n);
int iEnableIntc(int n);
int iDisableIntc(int n);
int iEnableDmac(int n);
int iDisableDmac(int n);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_INTR_H
