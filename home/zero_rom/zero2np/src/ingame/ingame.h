// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_INGAME_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_INGAME_H

typedef enum {
	GPHASE_CONTINUE = 0,
	GPHASE_END = 1,
	GPHASE_NOFRAME = 2
} GPHASE_ENUM;

struct CVariable<char,0,24> {
private:
	char mValue;
	
public:
	CVariable<char,0,24>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct CVariable<char,0,99> {
private:
	char mValue;
	
public:
	CVariable<char,0,99>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

struct INGAME_WRK {
	CVariable<char,0,24> mChapterNo;
	CVariable<char,0,3> mDifficulty;
	CVariable<char,0,99> mClearCnt;
	u_char clear_save_flg;
private:
	int mMenuLockCnt;
	int mPauseLockCnt;
	
public:
	INGAME_WRK& operator=();
	INGAME_WRK();
	INGAME_WRK();
	void Init();
	void MenuLock();
	void MenuUnlock();
	int MenuIsLocked();
	void PauseLock();
	void PauseUnlock();
	int PauseIsLocked();
};

extern INGAME_WRK ingame_wrk;
extern CMovieRoom movie_room;
extern CFEneEntry fene_entry;
extern int iPauseLockTimer;
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void IngameSceneReq(int scene_no);
void IngameEventMsgDispReq(int flg);
void IngameEventFileDispReq(int flg);
void SendIngameGameOver(int flg);
void SendIngameGameOverPre(int flg);
void SendIngameEndingNormal(int flg);
void SendIngameEndingHard(int flg);
void SetIngameDamageMode(int flg);
void SetIngameDoorMode(int flg);
void SendIngameEventLoadEndFlg(int flg);
void SetIngameEventModeFlg(int flg);
void SetIngameEffectModeTime(int time);
void SetIngameMenuMode(int flg);
void SetIngameMapMode(int flg);
void SetIngamePauseMode(int flg);
void SetIngameDbgMenu(int flg);
void SetIngameEneDead(int flg);
void SetIngamePhoto(int flg);
void SetIngameMovieRoomMenu(int flg);
void SetIngameMission(int flg);
int CheckIngameMission();
void ResetOutReqFlg();
GPHASE_ID_ENUM IngameDecideNextPhase();
void init_Story_NowLoading();
GPHASE_ENUM pre_Story_NowLoading(GPHASE_ENUM dummy);
GPHASE_ENUM after_Story_NowLoading(GPHASE_ENUM result);
void end_Story_NowLoading();
void init_Story_Load_Mission();
void end_Story_Load_Mission();
GPHASE_ENUM one_Story_Load_Mission(GPHASE_ENUM dummy);
void init_Story_Load_Mission_Save();
void end_Story_Load_Mission_Save();
GPHASE_ENUM one_Story_Load_Mission_Save(GPHASE_ENUM dummy);
void init_Story_Load_Mission_Event();
void end_Story_Load_Mission_Event();
GPHASE_ENUM one_Story_Load_Mission_Event(GPHASE_ENUM dummy);
void init_Story_Main();
void end_Story_Main();
GPHASE_ENUM pre_Story_Main(GPHASE_ENUM dummy);
GPHASE_ENUM after_Story_Main(GPHASE_ENUM result);
void IngameCameraMain();
void IngameDrawSub();
void init_Story_Normal();
void end_Story_Normal();
GPHASE_ENUM one_Story_Normal(GPHASE_ENUM dummy);
void init_Story_Game_Over_Pre();
void end_Story_Game_Over_Pre();
GPHASE_ENUM one_Story_Game_Over_Pre(GPHASE_ENUM dummy);
void init_Story_Damage();
void end_Story_Damage();
GPHASE_ENUM one_Story_Damage(GPHASE_ENUM dummy);
void init_Story_Door_Open();
void end_Story_Door_Open();
GPHASE_ENUM one_Story_Door_Open(GPHASE_ENUM dummy);
void init_Story_Ene_Dead();
void end_Story_Ene_Dead();
GPHASE_ENUM one_Story_Ene_Dead(GPHASE_ENUM dummy);
void init_Story_Debug();
void end_Story_Debug();
GPHASE_ENUM one_Story_Debug(GPHASE_ENUM dummy);
void init_Story_Debug_Cam();
void end_Story_Debug_Cam();
GPHASE_ENUM one_Story_Debug_Cam(GPHASE_ENUM dummy);
void init_Story_Pause();
void end_Story_Pause();
GPHASE_ENUM one_Story_Pause(GPHASE_ENUM dummy);
void IngameLoopSEPause();
void IngameLoopSERestart();
void init_Story_Menu();
void end_Story_Menu();
GPHASE_ENUM one_Story_Menu(GPHASE_ENUM dummy);
void init_Story_Map();
void end_Story_Map();
GPHASE_ENUM one_Story_Map(GPHASE_ENUM dummy);
void init_Story_Mission_St();
void end_Story_Mission_St();
GPHASE_ENUM one_Story_Mission_St(GPHASE_ENUM dummy);
void init_Story_Mission_Result();
void end_Story_Mission_Result();
GPHASE_ENUM one_Story_Mission_Result(GPHASE_ENUM dummy);
void init_Story_Pause_Mission();
void end_Story_Pause_Mission();
GPHASE_ENUM one_Story_Pause_Mission(GPHASE_ENUM dummy);
void init_Story_Game_Over();
GPHASE_ENUM pre_Story_Game_Over(GPHASE_ENUM dummy);
GPHASE_ENUM after_Story_Game_Over(GPHASE_ENUM result);
void end_Story_Game_Over();
void init_Story_Effect();
void end_Story_Effect();
GPHASE_ENUM one_Story_Effect(GPHASE_ENUM dummy);
void init_Story_Puzzle();
GPHASE_ENUM pre_Story_Puzzle(GPHASE_ENUM dummy);
GPHASE_ENUM after_Story_Puzzle(GPHASE_ENUM result);
void end_Story_Puzzle();
void init_Story_SavePoint();
GPHASE_ENUM pre_Story_SavePoint(GPHASE_ENUM dummy);
GPHASE_ENUM after_Story_SavePoint(GPHASE_ENUM result);
void end_Story_SavePoint();
void init_Story_Movie_Room();
void end_Story_Movie_Room();
void init_Story_Movie_Room_Sel();
void end_Story_Movie_Room_Sel();
void IngamePlyrNoActJob();
GPHASE_ENUM one_Story_Movie_Room_Sel(GPHASE_ENUM dummy);
void InitCostume();
void IngameWrkInit(int chapter_no, int difficulty_label);
void SetIngameListnerInfo();
void SetSave_IngameWrk(MC_SAVE_DATA *data);
void fene_entrySetSave(MC_SAVE_DATA *data);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_INGAME_H
