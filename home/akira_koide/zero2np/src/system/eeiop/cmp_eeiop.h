// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_CMP_EEIOP_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_CMP_EEIOP_H

struct _LOAD_REQ_NEW {
	FILE_LOAD_TYPE type;
	int tmp_ee_adrs;
	int adrs;
	LOAD_DEF_STRUCT ld;
};

typedef _LOAD_REQ_NEW LOAD_REQ_NEW;

void cmp_eeiopCancel();
int cmp_eeiopGetWrkSize();
void* cmp_eeiopInit(void *wrk_buffer);
LOAD_REQ_NEW cmp_eeiopCreateDecodeThread(int size, int adrs, int start_sector, int priority);
void cmp_eeiopWaitSema();
int cmp_eeiopIsLate();
void cmp_eeiopChangePriority(int priority);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_CMP_EEIOP_H
