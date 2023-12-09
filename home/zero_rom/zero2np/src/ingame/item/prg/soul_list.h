// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_SOUL_LIST_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_SOUL_LIST_H

extern unsigned char PLYR_SOUL_LIST type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void PlyrSoulListInit();
int GetSoulList(int ghost_list_label, int get_score);
void ReadSoulList(int ghost_list_label);
char GetPlyrSoulListState(int ghost_list_label);
int GetPlyrSoulListMaxScore(int ghost_list_label);
int GetPlyrHaveSoulListNum();
int GetPlyrHaveBaseSoulListNum();
int GetPlyrHaveEnhancingSoulListNum();
void GetSoulListOrderScore(int *order, int get_num);
int GetSoulListAccomplishmentRate();
int CheckEnhancingSoulListCondition();
void SetSave_PlyrSoulList(MC_SAVE_DATA *data);
void DebugGetAllSoulList();
PLYR_SOUL_LIST* PLYR_SOUL_LIST * _fixed_array_verifyrange<PLYR_SOUL_LIST>(size_t v, size_t _max);
type_info& PLYR_SOUL_LIST type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_SOUL_LIST_H
