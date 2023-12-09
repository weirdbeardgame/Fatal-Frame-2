// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_FILESTUB_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_FILESTUB_H

struct sce_stat {
	unsigned int st_mode;
	unsigned int st_attr;
	unsigned int st_size;
	unsigned char st_ctime[8];
	unsigned char st_atime[8];
	unsigned char st_mtime[8];
	unsigned int st_hisize;
	unsigned int st_private[6];
};

extern int _sceFs_q[32];

int* scePowerOffHandler(void (*func)(/* parameters unknown */), void *addr);
int sceFsInit();
int sceFsReset();
int sceOpen(char *name, int flag);
int sceClose(int fd);
int sceLseek(int fd, int offset, int how);
int sceRead(int fd, void *addr, int size);
int sceWrite(int fd, void *addr, int size);
int sceIoctl(int fd, int cmd, void *arg);
int sceIoctl2(int fd, int cmd, void *arg, size_t arglen, void *bufp, size_t buflen);
int sceRemove(char *name);
int sceMkdir(char *name, int flag);
int sceRmdir(char *name);
int sceFormat(char *path, char *blkdevname, void *arg, int arglen);
int sceAddDrv(void *addr);
int sceDelDrv(char *name);
int sceDopen(char *name);
int sceDclose(int fd);
int sceDread(int fd, sce_dirent *dp);
int sceGetstat(char *name, sce_stat *dp);
int sceChstat(char *name, sce_stat *dp, unsigned int cbit);
int sceRename(char *oldname, char *newname);
int sceChdir(char *name);
int sceSync(char *path, int flag);
int sceMount(char *fsdevname, char *blkdevname, int flag, void *arg, int arglen);
int sceUmount(char *name);
long int sceLseek64(int fd, long int offset, int how);
int sceDevctl(char *path, int cmd, void *arg, size_t arglen, void *bufp, size_t buflen);
int sceSymlink(char *existing, char *new);
int sceReadlink(char *path, char *buf, size_t bufsize);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_FILESTUB_H
