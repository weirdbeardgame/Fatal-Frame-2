// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VSPRINTF_H
#define USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VSPRINTF_H

int vsprintf(char *str, char *fmt, va_list ap);
int vsprintf_r(_reent *ptr, char *str, char *fmt, va_list ap);

#endif // USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDIO_VSPRINTF_H
