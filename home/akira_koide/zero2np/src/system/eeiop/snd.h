// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_H

extern int eff_use_size_tbl[0];

int sndGetNeedSize(EEIOP_DEF *def);
void* SndInit(EEIOP_DEF *def, void *buffer);
void SndInitAfter_ee_iopInit();
void SndMain();
void SndFremaAfterMain();
void SndSetEffect(int core, int eff_vol, int mode);
void SndSetStereo();
void SndSetMono();
int SndIsMono();
void SndSetGroupVolume(int type, int vol);
int SndGetGroupVolume(int type);
void SndCalcValue(int vol, int pan, int bvol, int pitch, int bpitch, int type, void *s3d, VOLSET *volset, short int *pPitch, float play_speed);
short int SndGetFrameAddVol(int target, int now, int time);
int SndAddFadeVol(int vol, int target_vol, int spd);
void SndAllStop();
int GetFreeVoiceNum();
int IsExistFreeVoice();

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_SND_H
