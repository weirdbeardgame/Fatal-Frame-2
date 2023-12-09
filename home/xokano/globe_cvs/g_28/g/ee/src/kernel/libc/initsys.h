// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_INITSYS_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_INITSYS_H

extern int __sce_sema_id;
extern int __sce_eh_sema_id;

int __sceKernlGetEhSemaId();
void* GetSystemCallEntry(int no);
void _InitSys();

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_INITSYS_H
