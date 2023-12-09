// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_OS_SYSTEM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_OS_SYSTEM_H

struct _SND_3D_ENV {
	float front;
	float side;
	float back;
	float vol_min;
	float farthest_dist;
	float nearest_dist;
};

typedef _SND_3D_ENV SND_3D_ENV;
// warning: multiple differing types with the same name (#355, descriptor not equal)
typedef void sceGsDrawEnv1;
extern SND_3D_ENV s3d_env;
extern sceGsDrawEnv1 *pdrawenv;
extern sceGsDBuff gdb;
extern int system_sound_bank_id;

HEAP_WRK* GetSystemHeapWrkP();
void SetVBlankWaitNum(int iWaitNum);
void* systemGetMem(int size);
void systemFreeMem(void *adrs);
int GetVifEndTimer(int ch);
void InitSystemON();
void ChangeVideoMode(u_char mode);
int GetPALMode();
void SystemSetVCallback();
void SetFrameBuffer();
void SetDisplayPos();
void SetGsResetGraph(int n);
void SetPCRTC(int frame);
void GetNowClock(sceCdCLOCK *nc);
void SendDMASub(Q_WORDDATA *packet_buf);
void SendDMAMain();
sceGsDrawEnv1* GetDrawEnv(int id);
void SystemBankSetup();
int SystemBankIsReady();
int SystemBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d, int vol, int pitch);
void SystemBankRelease();
int SystemBankIsLoopSnd(int no);
void SetLanguage(u_char language);
u_char GetLanguage();
u_char GetSystemLanguage();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_SYSTEM_OS_SYSTEM_H
