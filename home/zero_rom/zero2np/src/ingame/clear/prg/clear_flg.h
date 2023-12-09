// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_CLEAR_FLG_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_CLEAR_FLG_H

struct BIT_FLAGS<3> {
protected:
	int flag_32[1];
	
public:
	BIT_FLAGS<3>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct BIT_FLAGS<2> {
protected:
	int flag_32[1];
	
public:
	BIT_FLAGS<2>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct BIT_FLAGS<9> {
protected:
	int flag_32[1];
	
public:
	BIT_FLAGS<9>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

typedef struct {
	fixed_array<char,4> clear_cnt;
	char clear_flg;
	char comp_soul_list_flg;
	BIT_FLAGS<3> accessory_flg;
	BIT_FLAGS<2> ending_movie_flg;
	BIT_FLAGS<9> costume_flg;
	BIT_FLAGS<4> difficulty_flg;
} CLEAR_FLG_CTRL;

extern CLEAR_FLG_CTRL clear_flg_ctrl;
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void ClearFlgCtrlInit();
CLEAR_FLG_CTRL ClearFlgMerging(CLEAR_FLG_CTRL buff1, CLEAR_FLG_CTRL buff2);
void SetClearFlgCtrl(CLEAR_FLG_CTRL new_flg_ctrl);
void ClearFlg_EasyGameClearExe();
void ClearFlg_NormalGameClearExe();
void ClearFlg_HardGameClearExe();
void ClearFlg_NightMareGameClearExe();
void ClearFlg_MissionAllClearExe();
int ClearFlg_CheckMissionAllClear();
void ClearFlg_AllRankS_MissionClearExe();
int ClearFlg_CheckAllRankS_MissionClear();
void ClearFlgEndingNormalExe();
void ClearFlgEndingHardExe();
void ClearFlg_AddClearCnt(int difficulty_label);
void SetSave_ClearFlg(MC_SAVE_DATA *data);
void DebugAllClearFlgUp();
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_CLEAR_PRG_CLEAR_FLG_H
