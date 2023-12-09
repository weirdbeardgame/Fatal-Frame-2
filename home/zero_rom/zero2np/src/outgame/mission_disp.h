// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_DISP_H


void MisDispSetTime(int iTime);
int MisDispGetTime();
void MisDispNum(int iNum, int iKeta, int iOffX, int iOffY, u_char ucAlpha, int iFlg);
void MisDispTime(int iHour, int iMin, int iSec, int iOffX, int iOffY, u_char ucAlpha);
u_char MisDispGetAnimAlpha(ALPHA_ANIM_TBL *pAnimList, int iTime);
void MisDispTimeInit();
int MisDispGetTimerCnt();
void MisDispSetFlg(int iFlg);
void MisDispDeleteFlg(int iFlg);
void MisDispTimeProc();
void MisDispStartInit();
void MisDispStart(u_char ucAlpha, void *pTexPtr);
void MisDispClearInit();
void MisDispClear(u_char ucAlpha, int iTime, int iScore, int iShot, void *pMissionTex, void *pRsCmnTex);
void MisDispClearAll(u_char ucAlpha, int iTime, int iScore, int iShot, void *pMissionTex, void *pRsCmnTex);
void MisDispClearAllS(u_char ucAlpha, int iTime, int iScore, int iShot, void *pMissionTex, void *pRsCmnTex);
void MisDispBadEnd(u_char ucAlpha, int iTime, int iScore, int iShot, void *pMissionTex, void *pRsCmnTex);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_DISP_H
