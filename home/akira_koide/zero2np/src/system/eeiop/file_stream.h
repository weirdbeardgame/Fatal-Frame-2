// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_FILE_STREAM_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_FILE_STREAM_H

typedef _LOAD_DEF_STRUCT LOAD_DEF_STRUCT;

void FileStreamInit();
int FileStreamStart(int file_no, int ring_buf_num, int one_buf_sector);
int FileStreamRead(void *buff, int size, int block_read);
int FileStreamIsAct();
int FileStreamStop();

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_EEIOP_FILE_STREAM_H
