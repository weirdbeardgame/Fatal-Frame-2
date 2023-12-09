// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_DAT_H

struct CSND_BUF_PLAY {
protected:
	int play_id;
	
public:
	CSND_BUF_PLAY& operator=();
	CSND_BUF_PLAY();
	CSND_BUF_PLAY();
	void Fade();
	void PitchFade();
	int IsPlaying();
	void Stop();
};

struct CSYSTEM_SND_BUF_PLAY : CSND_BUF_PLAY {
	CSYSTEM_SND_BUF_PLAY& operator=();
	CSYSTEM_SND_BUF_PLAY();
	CSYSTEM_SND_BUF_PLAY();
	void Play();
};

typedef struct {
	MB_OUT_SECTION head;
	int type;
	char ModelName[36];
	float Pos[3];
	float Rot[3];
	int HitCheck;
	int PhotoAble;
	int Visible;
	int Action;
	int ActionType;
	int Weight;
	int Attribute;
} MDAT_OBJ;

struct PhotoData {
	float Top;
	float Bottom;
	float Dist;
	short unsigned int Point;
	short int image;
	short int mestype;
	short int mesnuma;
	short unsigned int f_finder : 1;
	short unsigned int f_filament : 1;
	short unsigned int f_deform : 1;
	short unsigned int f_sound : 1;
	short unsigned int f_seal_ghost : 1;
	short unsigned int f_unlock_ghost : 1;
	short int ghost_list_rel_no;
};

extern float photo_rng_tbl[1];
extern short unsigned int photo_frame_tbl[1][2];
extern float photo_dist_ratio[10];
extern float photo_center_ratio[10];
extern float photo_charge_ratio[4];
extern PhotoData photo_dat[72];
extern CSYSTEM_SND_BUF_PLAY furn_sound_player[2];
extern SPRT_DAT hint_dat[4];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

int GetPhotoDatNum();
void photo_datSetSave(MC_SAVE_DATA *save);
void photo_datInit();
void photo_datFlgUp(int photo_dat_no);
int photo_datIsUp(int photo_dat_no);
void photo_datFlgDown(int photo_dat_no);
void photo_datObjStart(MDAT_OBJ *p_obj);
void photo_datRelease();
void CheckHintSE(MDAT_OBJ *plyr_wrk_nearest_furn, float *plyr_wrk_nearest_furn_pos);
float photo_datGetFurnPowerDegree();
void photo_datObjInit();
void photo_datObjSetSave(MC_SAVE_DATA *save);
void photo_datObjMain();
MDAT_OBJ* photo_datObjIsPhotoAble();
int photo_datObjIsRespondFilament();
void photo_datObjRelease();
void photo_datObjFadeOutSE(int iFrame);
void photo_datObjEnd(MDAT_OBJ *p_obj);
void photo_datObjSealGhostDrawLock();
void CWrkVariable<short, 0, 128>::Work();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_DAT_H
