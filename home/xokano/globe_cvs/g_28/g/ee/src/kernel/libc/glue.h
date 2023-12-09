// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_GLUE_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_GLUE_H

typedef long int time_t;
typedef char *caddr_t;
typedef short unsigned int ino_t;
typedef short int dev_t;
typedef short unsigned int uid_t;
typedef short unsigned int gid_t;
typedef unsigned int mode_t;
typedef short unsigned int nlink_t;

struct stat {
	dev_t st_dev;
	ino_t st_ino;
	mode_t st_mode;
	nlink_t st_nlink;
	uid_t st_uid;
	gid_t st_gid;
	dev_t st_rdev;
	off_t st_size;
	time_t st_atime;
	long int st_spare1;
	time_t st_mtime;
	long int st_spare2;
	time_t st_ctime;
	long int st_spare3;
	long int st_blksize;
	long int st_blocks;
	long int st_spare4[2];
};


void sceResetttyinit();
void VSync();
long int VSync2();
int write(int fd, char *buf, int nbytes);
int read(int fd, char *buf, int nbytes);
int open(char *buf, int flags, int mode);
int close(int fd);
int ioctl(int fd, int cmd, int arg);
int lseek(int fd, int offset, int whence);
caddr_t sbrk(int nbytes);
int isatty(int fd);
int fstat(int fd, stat *buf);
int getpid();
int kill(int pid, int sig);
int stat(char *path, stat *buf);
int unlink(char *path);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_GLUE_H
