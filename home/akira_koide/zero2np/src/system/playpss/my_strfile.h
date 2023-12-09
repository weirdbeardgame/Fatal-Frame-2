// STATUS: NOT STARTED

#ifndef HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_MY_STRFILE_H
#define HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_MY_STRFILE_H


int MyStrStart(int file_no, int ring_buf_num, int one_buf_sector);
int MyStrRead(void *buff, int size);
int MyStrStop();

#endif // HOME_AKIRA_KOIDE_ZERO2NP_SRC_SYSTEM_PLAYPSS_MY_STRFILE_H
