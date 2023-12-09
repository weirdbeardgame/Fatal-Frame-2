// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FURNLOAD_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FURNLOAD_H


int FurnLoadGetAttr(char *name);
char* FurnLoadOne(char *furn_name, char *addr, int *file_id);
char* FurnLoadRegID(int buff_id, int reg_id, char *addr);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MAP_FURNLOAD_H
