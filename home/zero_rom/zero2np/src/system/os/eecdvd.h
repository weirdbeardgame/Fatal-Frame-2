// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_OS_EECDVD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_OS_EECDVD_H

int LoadReq(int file_no, unsigned int addr);
unsigned int LoadReqGetAddr(int file_no, unsigned int addr, int *id);
int LoadReqSe(int file_no, unsigned char se_type);
int IsLoadEndAll();
int IsLoadEnd(int id);
int FileLoadReqEE_L(int file_no, void *adrs, int priority, void (*func)(/* parameters unknown */), void *arg);
int FileLoadIsEnd2_L(int file_no, void *adrs);
unsigned int GetFileSize_L(int file_no);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_OS_EECDVD_H
