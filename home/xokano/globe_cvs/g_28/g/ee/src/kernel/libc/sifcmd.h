// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_SIFCMD_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_SIFCMD_H

typedef void (*sceSifCmdHandler)(/* parameters unknown */);

typedef struct {
	sceSifCmdHandler func;
	void *data;
	void *gp;
} sceSifCmdData;

typedef void void;

unsigned int sceSifGetSreg(int rno);
unsigned int sceSifSetSreg(int rno, unsigned int value);
void* sceSifGetDataTable();
void sceSifInitCmd();
void sceSifExitCmd();
sceSifCmdData* sceSifSetCmdBuffer(sceSifCmdData *p, int size);
sceSifCmdData* sceSifSetSysCmdBuffer(sceSifCmdData *p, int size);
void sceSifAddCmdHandler(unsigned int i, sceSifCmdHandler cf, void *data);
void sceSifRemoveCmdHandler(unsigned int i);
unsigned int sceSifSendCmd(unsigned int fid, void *pp, int ps, void *src, void *dest, int size);
unsigned int isceSifSendCmd(unsigned int fid, void *pp, int ps, void *src, void *dest, int size);
void sceSifWriteBackDCache(void *addr, int size);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_SIFCMD_H
