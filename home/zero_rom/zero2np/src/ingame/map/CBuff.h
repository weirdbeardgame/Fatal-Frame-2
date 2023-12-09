// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_CBUFF_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_CBUFF_H


int CBuffGetRegistNum();
char* CBuffGetStr(int id);
int CBuffSetStr(char *str);
void CBuffReset();
void CBuffInit(int max_len, int max_num);
void CBuffTerm();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_CBUFF_H
