// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_FILE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_FILE_H


void AllPlyrFileInit();
void FileGet(int file_type, int file_id);
void FileLost(int file_type, int file_id);
int FileRead(int file_type, int file_id);
int GetFileTexId(int file_type, int file_id);
char GetPlyrFileState(int file_type, int file_id);
int GetPlyrFileTotalNum(int file_type);
int GetFileTypeMaxNum(int type);
void SetPlyrFileState(int file_type, int file_id, char state);
void SetSave_PlyrFile(MC_SAVE_DATA *data);
void DebugAllFileGet();
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_FILE_H
