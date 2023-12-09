// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_PLYR_MDL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_PLYR_MDL_H

typedef enum {
	LTP_MIO_ATTACK_ENEMY = 0,
	LTP_MIO_ENEMY = 1,
	LTP_MIO_EVENT_OBJ = 2,
	LTP_DUMMY_MIO_TIRED = 3,
	LTP_MIO_SPOT_LIGHT = 4,
	LTP_MIO_KAIDAN = 5,
	LTP_MIO_DOOR = 6,
	LTP_MIO_MAYU = 7,
	LTP_MIO_LEAST = -1
} _LOOK_TARGET_PRIORITY_MIO;

typedef _LOOK_TARGET_PRIORITY_MIO LOOK_TARGET_PRIORITY_MIO;
extern int g_iMaxPlayerAlpha;
extern int g_iMinPlayerAlpha;
extern unsigned char G3DLIGHT type_info node[8];
extern unsigned char GRA3DLIGHTSTATUS type_info node[8];
extern __vtbl_ptr_type PLYR_PLYR_DATA virtual table[4];
extern unsigned char PLYR_PLYR_DATA type_info node[12];
extern unsigned char MAN_DATA type_info node[8];

void plyr_mdlInit();
void plyr_mdlResetReq();
void SetupPlyrMdl(int mdl_no, int anm_no, int smdl_no, int acs_no);
int IsReadyPlyrMdl();
void ReleasePlyrMdl();
void ReqPlayerMim(int no, int rev);
void ReqPlayerMimContinue(int no, int rev);
void StopPlayerMim(int no);
int IsPlayerMimParts(int no);
void plyr_mdlSetSave(MC_SAVE_DATA *data);
u_short GetPlyrFtype();
void ReqPlayerAnime(u_char flame);
void plyr_mdlMotionWork();
void plyr_mdlGetMATRIX(float *mtx[4], int bone_no);
void CalcGirlCoord(int pause_flg);
void playerUseDoorLight(int b);
void playerSetLight(float *vPosition, GRA3DEMULATIONLIGHTDATACREATIONDATA *pData);
GRA3DEMULATIONLIGHTDATACREATIONDATA& _GetEmulationLightdataCreationDataRef();
int playerCalcAlpha(ANI_CTRL *pAC);
void playerDrawShadow();
void PlayerDrawLock();
void PlayerDrawUnlock();
void DrawGirl();
ANI_CTRL* plyr_mdlGetANI_CTRL();
ANI_CTRL* plyr_mdlGetShadowANI_CTRL();
int PlyrNeckRegisterTarget(LOOK_AT_PARAM *param, LOOK_TARGET_PRIORITY_MIO priority);
void SetPlyrNeckFlg(int flg);
int plyr_mdlBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d, int vol, int pitch);
int plyr_mdlBankIsLoopSnd(int no);
int GetPlyrMdlNo();
void SetPlyrMdlNo(int iMdlNo);
int GetPlyrAcsNo();
void SetPlyrAcsNo(int iMdlNo);
int GetSisterMdlNo();
void SetSisterMdlNo(int iMdlNo);
int GetSisterAcsNo();
void SetSisterAcsNo(int iAcsNo);
void CostumeSetSave(MC_SAVE_DATA *data);
G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max);
GRA3DLIGHTSTATUS* GRA3DLIGHTSTATUS * _fixed_array_verifyrange<GRA3DLIGHTSTATUS>(size_t v, size_t _max);
type_info& G3DLIGHT type_info function();
type_info& GRA3DLIGHTSTATUS type_info function();
type_info& PLYR_PLYR_DATA type_info function();
type_info& MAN_DATA type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PLYR_PLYR_MDL_H
