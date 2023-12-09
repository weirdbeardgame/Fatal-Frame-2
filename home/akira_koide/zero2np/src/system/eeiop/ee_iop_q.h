// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_EE_IOP_Q_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_EE_IOP_Q_H


void ee_iopQueryInit();
void QueryFileSize(int file_no, unsigned int *ps);
void ReqQueryLoadCancel();
void ReqQuerySPUTransCoreGet(int *ps);
void ReqQuerySPUTransCoreRelease(int core);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_EE_IOP_Q_H
