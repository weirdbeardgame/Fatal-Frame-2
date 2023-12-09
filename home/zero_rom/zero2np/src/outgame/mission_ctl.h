// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_CTL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_CTL_H


int MisProc();
void MisSetScore(int iTotalScore);
int MisGetRankLast(int iMissionID, int iTime, int iScore, int iShot);
void MisSetClearType(int iType);
int MisStSubInit();
int MisStSubLoadWait();
int MisStSubEnd();
int MisStSubExec();
int MisStInit();
void MisStTerm();
void MisCtlSetDisp(int iInDisp, int iOutDisp);
void* MisGetTexPtr();
int MisGetScore();
int MisGetShot();
int MisCheckClearAll();
int MisEnSubInit();
int MisEnSubLoadWait();
int MisEnSubEnd();
int MisEnSubMiss();
int MisEnSubExec();
int MisEnSubAllClear();
int MisEnSubAllClearS();
int MisEnInit();
void MisEnTerm();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_CTL_H
