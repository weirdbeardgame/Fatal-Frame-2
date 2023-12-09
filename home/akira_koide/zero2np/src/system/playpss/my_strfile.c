// STATUS: NOT STARTED

#include "my_strfile.h"

static int pss_block_read;

int MyStrStart(int file_no, int ring_buf_num, int one_buf_sector) {
  int iVar1;
  
  pss_block_read = 0;
  iVar1 = FileStreamStart(file_no,ring_buf_num,one_buf_sector);
  return iVar1;
}

int MyStrRead(void *buff, int size) {
  int iVar1;
  int iVar2;
  
  if (pss_block_read == 0) {
    FileStreamRead(buff,size,0);
    pss_block_read = 1;
  }
  iVar1 = FileStreamIsAct();
  iVar2 = 0;
  if (iVar1 == 0) {
    pss_block_read = 0;
    iVar2 = size;
  }
  return iVar2;
}

int MyStrStop() {
  int iVar1;
  
  iVar1 = FileStreamStop();
  return iVar1;
}
