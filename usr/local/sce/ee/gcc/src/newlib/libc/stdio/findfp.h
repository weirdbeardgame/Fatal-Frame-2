// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_FINDFP_H
#define USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_FINDFP_H

struct _glue {
	_glue *_next;
	int _niobs;
	__sFILE *_iobs;
};

_glue* __sfmoreglue(_reent *d, int n);
FILE* __sfp(_reent *d);
void _cleanup_r(_reent *ptr);
void _cleanup();
void __sinit(_reent *s);

#endif // USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_FINDFP_H
