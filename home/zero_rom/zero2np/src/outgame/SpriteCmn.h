// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_SPRITECMN_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_SPRITECMN_H


void SpCmnStart(SPRT_DAT *pSprDat);
void SpCmnSetSprite(DISP_SPRT *ds, int iLabel, int off_x, int off_y, u_char alpha, int iFlg);
void SpCmnDrawSprite(int iLabel, int off_x, int off_y, u_char alpha, int iFlg);
void SpCmnDrawSpriteScale(int iLabel, int iOffX, int iOffY, float fScaleW, float fScaleH, u_char ucAlpha, int iFlg);
void SpCmnDrawRange(int st, int en, int off_x, int off_y, u_char alpha, int iFlg);
void SpCmnBlackOut(u_char ucAlpha);
void SpCmnPrintNumber_NK(int iData, int iNum, int iX, int iY, u_char ucColLabel, u_char ucAlpha, int iPri, u_char ucMsgType, int ucZeroFlg);
void SpCmnPrintMsg_K(int iMsgType, int iMsgID, int iX, int iY, int iColLabel, int iAlpha, int iPri);
int SpCmnGetCenterX(int iGroupLabel, int iMsgLabel, int iCenX);
void* SpCmnTexMemLoad(int iFileNo);
void* SpCmnTexMemReleaseSub(void *pTexAddr);
void* SpCmnGetScreen();
void SpCmnDrawScreen(void *pScrAddr, int iVramAddr);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_SPRITECMN_H
