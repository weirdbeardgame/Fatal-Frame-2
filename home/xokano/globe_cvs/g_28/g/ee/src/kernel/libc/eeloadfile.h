// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_EELOADFILE_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_EELOADFILE_H

typedef struct {
	unsigned int epc;
	unsigned int gp;
	unsigned int sp;
	unsigned int dummy;
} sceExecData;


int sceSifLoadFileReset();
int sceSifStopModule(int modid, int args, char *argp, int *result);
int sceSifUnloadModule(int modid);
int sceSifSearchModuleByName(char *modulename);
int sceSifSearchModuleByAddress(void *addr);
int sceSifLoadModuleBuffer(void *addr, int args, char *argp);
int sceSifLoadStartModuleBuffer(void *addr, int args, char *argp, int *result);
int sceSifLoadModule(char *filename, int args, char *argp);
int sceSifLoadStartModule(char *filename, int args, char *argp, int *result);
int sceSifLoadElfPart(char *filename, char *secname, sceExecData *data);
int sceSifLoadElf(char *filename, sceExecData *data);
int sceSifGetIopAddr(void *addr, void *val, unsigned int type);
int sceSifSetIopAddr(void *addr, void *val, unsigned int type);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_EELOADFILE_H
