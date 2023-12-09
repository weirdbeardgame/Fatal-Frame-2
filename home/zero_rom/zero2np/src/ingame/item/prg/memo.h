// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_MEMO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_MEMO_H

extern unsigned char PLYR_MEMO type_info node[8];

void PlyrMemoInit();
void UpdateMemo(int memo_label, u_char msg_step);
void ReadMemo(int memo_label);
int GetMemoState(int memo_label);
int GetMemoMsgStep(int memo_label);
int GetMemoHaveNum();
void SetSave_PlyrMemo(MC_SAVE_DATA *data);
void DebugAllFirstMemoGet();
void DebugAllSecondMemoGet();
PLYR_MEMO* PLYR_MEMO * _fixed_array_verifyrange<PLYR_MEMO>(size_t v, size_t _max);
type_info& PLYR_MEMO type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_MEMO_H
