// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_PUZZLE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_PUZZLE_H


void PuzzleInit();
void PuzzleStartReq(int puzzle_id);
void PuzzleRelease();
void* GetPzlTexDataAddr();
int GetPzlSndBankID();
void PuzzleClear(int puzzle_id);
u_char GetPuzzleClearInfo(int puzzle_id);
void SetSave_ClearPuzzle(MC_SAVE_DATA *data);
void init_Puzzle_InConf();
GPHASE_ENUM one_Puzzle_InConf(GPHASE_ENUM dummy);
void end_Puzzle_InConf();
void init_Puzzle_CrossFade();
GPHASE_ENUM one_Puzzle_CrossFade(GPHASE_ENUM dummy);
void end_Puzzle_CrossFade();
void init_Puzzle_Hina();
GPHASE_ENUM one_Puzzle_Hina(GPHASE_ENUM dummy);
void end_Puzzle_Hina();
void init_Puzzle_Roku();
GPHASE_ENUM one_Puzzle_Roku(GPHASE_ENUM dummy);
void end_Puzzle_Roku();
void init_Puzzle_Kaza();
GPHASE_ENUM one_Puzzle_Kaza(GPHASE_ENUM dummy);
void end_Puzzle_Kaza();
void init_Puzzle_Kaza2();
GPHASE_ENUM one_Puzzle_Kaza2(GPHASE_ENUM dummy);
void end_Puzzle_Kaza2();
void init_Puzzle_Kai1();
GPHASE_ENUM one_Puzzle_Kai1(GPHASE_ENUM dummy);
void end_Puzzle_Kai1();
void init_Puzzle_Kai2();
GPHASE_ENUM one_Puzzle_Kai2(GPHASE_ENUM dummy);
void end_Puzzle_Kai2();
u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_PUZZLE_H
