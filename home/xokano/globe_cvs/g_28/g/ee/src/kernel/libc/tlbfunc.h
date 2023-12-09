// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TLBFUNC_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TLBFUNC_H

struct TLBEntry {
	u_int pageMask;
	u_int entryHi;
	u_int entryLo0;
	u_int entryLo1;
};

struct TLB {
	int numKernel;
	int numFix;
	int numUnfix;
	int wired;
	TLBEntry *kernelTLB;
	TLBEntry *fixTLB;
	TLBEntry *unfixTLB;
};

extern void (*_kTLBRefillHandler)(/* parameters unknown */);
extern void (*_kDebugHandler[16])(/* parameters unknown */);
extern void *_kExecArg;
extern TLB TLBInfo;

void* SetTLBHandler(void (*h)(/* parameters unknown */));
void* SetDebugHandler(int i, void (*h)(/* parameters unknown */));
void InitTLBFunctions();
int PutTLBEntry(u_int mask, u_int hi, u_int lo0, u_int lo1);
int iPutTLBEntry(u_int mask, u_int hi, u_int lo0, u_int lo1);
int SetTLBEntry(int index, u_int mask, u_int hi, u_int lo0, u_int lo1);
int iSetTLBEntry(int index, u_int mask, u_int hi, u_int lo0, u_int lo1);
int GetTLBEntry(int index, u_int *mask, u_int *hi, u_int *lo0, u_int *lo1);
int iGetTLBEntry(int index, u_int *mask, u_int *hi, u_int *lo0, u_int *lo1);
int ProbeTLBEntry(u_int hi, u_int *mask, u_int *lo0, u_int *lo1);
int iProbeTLBEntry(u_int hi, u_int *mask, u_int *lo0, u_int *lo1);
int ExpandScratchPad(u_int page);
int InitTLB();

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_TLBFUNC_H
