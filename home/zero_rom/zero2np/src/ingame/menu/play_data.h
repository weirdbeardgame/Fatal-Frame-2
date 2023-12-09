// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_PLAY_DATA_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_PLAY_DATA_H

typedef struct {
	int year;
	int month;
	int day;
} DAY_INFO;

typedef struct {
	DAY_INFO day;
	TIME_INFO time;
} DATE_INFO;


void PlayData_Init();
void PlayData_PlayTimeInit();
void PlayData_PlayTimeCount();
void PlayData_ScoreCount(int score);
void SetPlayData_Score(int score);
void PlayData_PhotoNumCount();
void PlayData_BusterNumCount();
void PlayData_MaxScoreUpdate(int score);
TIME_INFO GetPlayTime();
int GetPlayData_Score();
int GetPlayData_TotalScore();
int GetPhotoNum();
int GetBusterGhostNum();
int GetMaxScore();
void GetSystemTime(DATE_INFO *date);
void SetDateInfoType(DATE_INFO *date, sceCdCLOCK *rtc);
u_int Bcd2Int(char bcd);
void SetSave_PlayData(MC_SAVE_DATA *data);
void SetSave_PlayTimer(MC_SAVE_DATA *data);
void DebugSetPlayScoreMaxNum();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_PLAY_DATA_H
