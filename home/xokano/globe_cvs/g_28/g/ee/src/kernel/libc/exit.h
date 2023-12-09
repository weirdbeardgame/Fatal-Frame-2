// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_EXIT_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_EXIT_H


int ExecPS2(void *addr, void *gp, int argc, char **argv);
void LoadExecPS2(char *name, int argc, char **args);
void Exit(int n);
void ExecOSD(int argc, char **argv);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_EXIT_H
