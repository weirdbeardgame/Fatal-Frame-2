// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DBFURNPRE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DBFURNPRE_H


int DbFurnPreGetNumOneType(int reg_id, int type, char *name, int flg);
float* DbFurnPreGetDat(int buff_id, char *name, int id);
int DbFurnPreGetObjNum(int buff_id, char *name);
void DbFurnPreSetBuffID(int buff_id);
void DbFurnPreProc();
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_DEBUG_DBFURNPRE_H
