// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_CACHE_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_CACHE_H

void _sceSDC(u_int x, u_int y);
void SyncDCache(void *p, void *q);
void iSyncDCache(void *p, void *q);
void _sceIDC(u_int x, u_int y);
void InvalidDCache(void *p, void *q);
void iInvalidDCache(void *p, void *q);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_CACHE_H
