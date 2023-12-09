// STATUS: NOT STARTED

#ifndef MPEG_H
#define MPEG_H

sceMpegInit();
sceMpegCreate();
sceMpegDelete();
sceMpegAddBs();
sceMpegGetPicture();
sceMpegGetPictureRAW8();
sceMpegGetPictureRAW8xy();
sceMpegGetPictureAbort();
sceMpegSetDecodeMode();
sceMpegGetDecodeMode();
sceMpegIsEnd();
sceMpegIsRefBuffEmpty();
sceMpegReset();
sceMpegClearRefBuff();
sceMpegAddCallback();
_dispatchMpegCallback();
_dispatchMpegCbNodata();
sceMpegSetDefaultPtsGap();
sceMpegResetDefaultPtsGap();
sceMpegSetImageBuff();
sceMpegDispWidth();
sceMpegDispHeight();
sceMpegDispCenterOffX();
sceMpegDispCenterOffY();
sceSetBrokenLink();
sceSetPtm();
_alalcInit();
_alalcSetDynamic();
_alalcFree();
_alalcAlloc();
_alalcRest();
_sceMpegFlush();

#endif // MPEG_H
