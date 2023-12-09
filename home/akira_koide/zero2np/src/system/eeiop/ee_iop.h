// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_EE_IOP_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_EE_IOP_H

struct _IOP_STREAM_RET {
	EEIOP_STREAM_STATUS status;
	int offset;
};

typedef _IOP_STREAM_RET IOP_STREAM_RET;
typedef _IOP_COMMAND_ENUM IOP_COMMAND_ENUM;

void* ee_iopMalloc(int size);
void ee_iopFree(void *adrs);
int ee_iopGetNeedSize(EEIOP_DEF *def);
int ee_iopInit(EEIOP_DEF *def);
void WaitMainRpc();
void ee_iopMain();
void iopCommandFrameInit();
int iopCommandRegister(IOP_COMMAND_ENUM command, char *buf, int size2);
void SetCDReadMode(int mode);
int CheckEndPointThrough(int core, int voice_no);
IOP_STREAM_RET* GetStreamWrkRet(int wrk_id);
IOP_STREAM_RET* GetPCMStreamWrkRet(int wrk_id);
int GetVoiceNowAdrs(int core, int voice);
int GetVoiceLoopAdrs(int core, int voice);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_EE_IOP_H
