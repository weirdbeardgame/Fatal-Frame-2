// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VFPRINTF_H
#define USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VFPRINTF_H

// warning: multiple differing types with the same name (#580, type name not equal)
typedef void *__gnuc_va_list;
typedef __sFILE FILE;
typedef __gnuc_va_list va_list;
int vfiprintf(FILE *fp, char *fmt0, va_list ap);
int _vfiprintf_r(_reent *data, FILE *fp, char *fmt0, va_list ap);
int vfprintf(FILE *fp, char *fmt0, va_list ap);
int _vfprintf_r(_reent *data, FILE *fp, char *fmt0, va_list ap);

#endif // USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VFPRINTF_H
