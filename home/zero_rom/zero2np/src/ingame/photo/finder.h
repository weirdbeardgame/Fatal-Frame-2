// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FINDER_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FINDER_H

typedef struct {
	u_long tex0;
	float u1;
	float v1;
	float u2;
	float v2;
	float w;
	float h;
	float x;
	float y;
	int pri;
	u_char alpha;
} SPRT_DAT2;

extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern ENEDMGLINE_WRK enedmgline_wrk;
extern INFO_WRK info_wrk;

void FinderBattleAlphaMain();
void ReqHPDispIn();
void ReqHPDispOut();
void HPDispInit();
void HPDispMain();
void RTFillamentModeOn(int type, int time);
void RTFillamentModeOff();
void FilamentDrawLock();
void FilamentDrawUnlock();
void ReqFinderDispIn();
void ReqFinderDispOut();
void FinderDispInit();
void FinderDispMain();
void SPChanceMain();
void FinderDrawLock();
void FinderDrawUnlock();
void ReqFinderFadeIn();
void ReqFinderFadeOut();
void InformationDispInit();
void InfoDispPause();
void InfoDispRestart();
int isDispLamp();
void DispChara(int label, u_char ptyp, float x, float y, u_char z, u_char alp, u_char atyp, u_char bln);
void DispCharaRGB(int label, u_char ptyp, float x, float y, u_char z, u_char r, u_char g, u_char b, u_char alp, u_char atyp, int bln);
void SetNumerousDisp(SPRT_DAT *sprt, int n, int alpha, int chara_width, int pos_x, int pos_y, float scale, int iZeroDispFigure, int bAddAlphaFlg);
void DispPointNumberNew(int number, short int adj_x, short int adj_y, u_char malp);
void DispCameraCharge(short int pos_x, short int pos_y, int battle_master_alp);
void ChargeDispReset();
void DispCaptureCircleNew(short int pos_x, short int pos_y);
void finderTriggerEneLifeDecrease(float new_hp_per);
void finderSetEneLifePercentage(float new_hp_per);
void finderEneLifeLen(float len);
void DispFinderMessageMain();
void PutSpriteYW(u_short top_label, u_short end_label, float pos_x, float pos_y, float rot, int rgb, float alp, float scl_x, float scl_y, u_char scl_mode, int pri, u_char by, u_char blnd, u_char z_sw);
void SD1toSD2(SPRT_DAT *sd, SPRT_DAT2 *sd2);
void FinderBankSetup();
int FinderBankIsReady();
int FinderBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d, int vol, int pitch);
void FinderBankRelease();
int FinderBankIsLoopSnd(int no);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_FINDER_H
