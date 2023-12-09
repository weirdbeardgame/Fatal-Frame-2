// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MIS_SEL_DISP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MIS_SEL_DISP_H


void MissionDrawTime(int iHour, int iMin, int iSec, int iOffX, int iOffY, u_char ucAlpha);
void MissionCaptionDisp(int off_x, int off_y, u_char alpha);
void MissionDrawSelect(void *pMisTexAddr, int iTopID, int iCsr, u_char ucAlpha);
void MissionDrawMiniMenu(void *pOutGameTex, void *pMisTexAddr, int iCsr, u_char ucMstAlpha, float fMove, int iSelCsr, int iFlg);
int MisFadeSetMsg(int iNewMsg);
void MisFadeProc(u_char ucMstAlpha);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MIS_SEL_DISP_H
