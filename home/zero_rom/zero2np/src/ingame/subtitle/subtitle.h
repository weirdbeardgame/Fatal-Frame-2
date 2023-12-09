// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SUBTITLE_SUBTITLE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SUBTITLE_SUBTITLE_H

extern SUBTITLE_CTRL SubTitleCtrl;

void SubTitleInit();
void SubTitleMain(int DrawFlg);
void SubTitleReq(int SubTitleNo);
void SubTitleReq3D(int SubTitleNo, float *Position);
void SubTitleReq3DObj(int SubTitleNo, int ObjType, int ObjId);
void SubTitleReqAutoEnemy(int SubTitleNo, int StreamId);
void SubTitleStop();
int SubTitleIsEnd();
int SubTitleStreamFileNoGet(int SubTitleNo);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_SUBTITLE_SUBTITLE_H
