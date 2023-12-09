// STATUS: NOT STARTED

#ifndef USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_STRTOUL_H
#define USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_STRTOUL_H

long unsigned int _strtoul_r(_reent *rptr, char *nptr, char **endptr, int base);
long unsigned int strtoul(char *s, char **ptr, int base);

#endif // USR_LOCAL_SCE_EE_GCC_SRC_NEWLIB_LIBC_STDLIB_STRTOUL_H
