// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SIS_MDL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SIS_MDL_H

typedef enum {
	LTP_MAYU_ATTACK_ENEMY = 0,
	LTP_MAYU_ENEMY = 1,
	LTP_MAYU_EVENT_OBJ = 2,
	LTP_MAYU_MIO_FAR = 3,
	LTP_DUMMY_TIRED = 4,
	LTP_MAYU_MIO_NEAR = 5,
	LTP_MAYU_BACKGROUND = 6,
	LTP_MAYU_ITEM = 7,
	LTP_MAYU_OBJ = 8,
	LTP_MAYU_MIO_MIDDLE = 9,
	LTP_MAYU_KAIDAN = 10,
	LTP_MAYU_LEAST = -1
} _LOOK_TARGET_PRIORITY_MAYU;

typedef _LOOK_TARGET_PRIORITY_MAYU LOOK_TARGET_PRIORITY_MAYU;
extern __vtbl_ptr_type SIS_DATA virtual table[4];
extern unsigned char SIS_DATA type_info node[12];
extern unsigned char MAN_DATA type_info node[8];

void sis_mdlInit();
void SisterDrawLock();
void SisterDrawUnlock();
int SisterIsLocked();
void* sis_mdlGetAlgAdrs();
void sis_mdlSetSave(MC_SAVE_DATA *data);
void SetupSisMdl();
int IsReadySisMdl();
void ReleaseSisMdl();
void sis_mdlMotionWork();
int sis_mdlBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d, int vol, int pitch);
int sis_mdlBankIsLoopSnd(int no);
short unsigned int GetSisterFtype();
void ReqSisterMim(int no, int rev);
void ReqSisterMimContinue(int no, int rev);
void StopSisterMim(int no);
int IsSisterMimParts(int no);
void ReqSisterAnime(u_char flame);
void sisterAnimationProc();
void DrawSister();
int SisNeckRegisterTarget(LOOK_AT_PARAM *param, LOOK_TARGET_PRIORITY_MAYU priority, float fLimitDist);
void SetSisNeckFlg(int flg);
void DbgSisLookPointCtrl();
ANI_CTRL* sis_mdlGetANI_CTRL();
ANI_CTRL* sis_mdlGetShadowANI_CTRL();
void sis_mdlGetMATRIX(float *mtx[4], int bone_no);
void sisterDrawShadow();
type_info& SIS_DATA type_info function();
type_info& MAN_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_SIS_MDL_H
