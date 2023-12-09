// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_IOPHEAP_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_IOPHEAP_H


int sceSifInitIopHeap();
void* sceSifAllocIopHeap(unsigned int size);
void* sceSifAllocSysMemory(int type, unsigned int size, void *addr);
int sceSifFreeSysMemory(void *addr);
int sceSifFreeIopHeap(void *addr);
int sceSifLoadIopHeap(char *name, void *addr);
unsigned int sceSifQueryMemSize();
unsigned int sceSifQueryMaxFreeMemSize();
unsigned int sceSifQueryTotalFreeMemSize();
void* sceSifQueryBlockTopAddress(void *addr);
unsigned int sceSifQueryBlockSize(void *addr);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_IOPHEAP_H
