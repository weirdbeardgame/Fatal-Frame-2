// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_PHFUNPK_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_PHFUNPK_H

int UnPkGetFileNum(char *addr);
char* UnPkGetFileAddr(char *addr, int id);
char* UnPkGetFileName(char *addr, int id);
int UnPkGetPacState(char *addr, char *name);
char* UnPkGetFileAddr(char *addr, char *name);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_COMMON_PHFUNPK_H
