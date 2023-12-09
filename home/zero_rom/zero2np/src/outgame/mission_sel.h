// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_SEL_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_SEL_H

extern unsigned char PLYR_ITEM type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

int MissionGetTimePal(int *pHour, int *pMin, int *pSec, int iFrame);
int MissionSetTimePal(int iHour, int iMin, int iSec);
int MissionGetYesNo();
int MissionGetID();
int MissionCheckEnd();
int MissionGetPrize(int iMissionID);
int MissionGetType(int iMissionID);
int MissionGetTassei(int iClearType);
int MissionSetStat(int iMissionID, int iStat);
int MissionGetScore(int iMissionID);
int MissionGetStat(int iMissionID, int iType);
int MissionGetRankPoint(int iMissionID, int iNum);
int MissionGetRank(int iMissionID, int iNum);
int MissionGetRank3(int iMissionID);
int MissionCheckRecord(int iMissionID, int iType, int iNum);
void MissionSetNewRecord(int iMissionID, int iType, int iNum);
void MissionSelSave(MC_SAVE_DATA *data);
void MissionSelTblInit();
void MissionReleaseSaveData();
void MissionSetItem(int iMissionID);
void MissionSetPlyrStat(int iMissionID);
void PlayMissionSelBGM();
void MissionSelInit();
void MissionSelEnd();
void MissionSelMain();
void MissionSelDisp();
PLYR_ITEM* PLYR_ITEM * _fixed_array_verifyrange<PLYR_ITEM>(size_t v, size_t _max);
type_info& PLYR_ITEM type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_OUTGAME_MISSION_SEL_H
