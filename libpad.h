// STATUS: NOT STARTED

#ifndef LIBPAD_H
#define LIBPAD_H

scePadInit();
scePadEnd();
scePadPortOpen();
scePadPortClose();
scePadGetFrameCount();
scePadRead();
scePadGetState();
scePadStateIntToStr();
scePadGetReqState();
scePadReqIntToStr();
scePadInfoAct();
scePadInfoComb();
scePadInfoMode();
scePadSetMainMode();
scePadSetActDirect();
scePadSetActAlign();
scePadInfoPressMode();
scePadEnterPressMode();
scePadExitPressMode();
scePadGetSlotMax();
scePadSetWarningLevel();

#endif // LIBPAD_H
