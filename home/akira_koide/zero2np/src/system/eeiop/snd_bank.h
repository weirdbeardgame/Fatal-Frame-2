// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_BANK_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_BANK_H

typedef _SND_BANK_STATUS SND_BANK_STATUS;

void SndBankSetLoadPriority(int iNewPriority);
int SndBankGetLoadPriority();
int SndBankGetOneWrkSize();
void* SndBankInitAll(void *wrk_buffer, int num, int load_priority);
int SndBankGetFreeBankNum();
int SndBankNew(int file_no, int header_file_no, int size);
int SndBankIsReady(int bank_no);
void SndBankPrintStatus();
int SndBankGetInfo(int bank_no, int *num, SOUND_INFO **info);
int SndBankRelease(int bank_no);
int SndBankSet3D(int bank_no, float *pos);
int SndBankIsLoopSnd(int bank_no, int no);
int SndBankPlay(int bank_no, int no, int effect, int loop, int vol, int pitch, int fade_time, SND_3D_SET *s3s);
SND_BANK_STATUS SndBankGetFileNo(int bank_no, int *file_no);

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_BANK_H
