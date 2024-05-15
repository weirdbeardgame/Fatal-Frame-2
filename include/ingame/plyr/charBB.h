#ifndef CHARBB_H
#define CHARBB_H
#include "motion.h"

struct CHARBBDATA
{ // 0x30
    /* 0x00 */ float vMin[4];
    /* 0x10 */ float vMax[4];
    /* 0x20 */ int iProxyId;
};

CHARBBDATA *_GetCharBBDataRef(/* s0 16 */ int iModelId);
int charbbGet(/* s3 19 */ float *avBB[4], /* s0 16 */ ANI_CTRL *pAC, /* s4 20 */ float *matLocalWorld[4]);

#endif // CHARBB_H
