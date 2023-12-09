// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_SIGNAL_SIGNAL_H
#define USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_SIGNAL_SIGNAL_H

typedef void (*_sig_func_ptr)(/* parameters unknown */);
int _init_signal_r(_reent *ptr);
_sig_func_ptr _signal_r(_reent *ptr, int sig, _sig_func_ptr func);
int _raise_r(_reent *ptr, int sig);
int __sigtramp_r(_reent *ptr, int sig);
int raise(int sig);
_sig_func_ptr signal(int sig, _sig_func_ptr func);
int _init_signal();
int __sigtramp(int sig);

#endif // USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_SIGNAL_SIGNAL_H
