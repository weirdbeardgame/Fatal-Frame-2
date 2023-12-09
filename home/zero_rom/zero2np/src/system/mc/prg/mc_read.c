// STATUS: NOT STARTED

#include "mc_read.h"

typedef struct {
	char step;
	char retry_cnt;
	int fd;
	int size;
	int error;
	void *data_addr;
} MC_FILE_READ_CTRL;

static MC_FILE_READ_CTRL mc_file_read_ctrl;

void MemoryCardFileReadInit(int fd, void *data_addr, int size) {
  mc_file_read_ctrl.data_addr = data_addr;
  mc_file_read_ctrl.retry_cnt = '\x04';
  mc_file_read_ctrl.fd = fd;
  mc_file_read_ctrl.size = size;
  mc_file_read_ctrl.step = '\0';
  mc_file_read_ctrl.error = 0;
  return;
}

int MemoryCardFileReadMain() {
	int res;
	int mc_res;
	int result;
	
  int iVar1;
  int iVar2;
  int result;
  
  result = 0;
  iVar2 = 0;
  if (mc_file_read_ctrl.step == '\0') {
    iVar1 = MemoryCardFileReadReq__FiPvi
                      (mc_file_read_ctrl.fd,mc_file_read_ctrl.data_addr,mc_file_read_ctrl.size);
    if (iVar1 == 0) {
      mc_file_read_ctrl.step = '\x01';
    }
    else if (mc_file_read_ctrl.retry_cnt < '\x01') {
      mc_file_read_ctrl.error = 1;
      MemoryCardFileCloseInit__Fi(mc_file_read_ctrl.fd);
      mc_file_read_ctrl.step = '\x02';
    }
    else if (iVar1 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
    }
    else if (iVar1 == -200) {
      mc_file_read_ctrl.step = '\x03';
    }
    else {
      mc_file_read_ctrl.retry_cnt = mc_file_read_ctrl.retry_cnt + -1;
    }
  }
  if (mc_file_read_ctrl.step == '\x01') {
    iVar1 = MemoryCardExeEndSync__FPi(&result);
    if (iVar1 == 1) {
      if (result < 0) {
        iVar2 = -0x14;
        if ((result < -1) && (iVar2 = result, result < -5)) {
          iVar2 = -0x14;
        }
      }
      else if (mc_file_read_ctrl.size == result) {
        iVar2 = 1;
      }
      else {
        mc_file_read_ctrl.error = -3;
        MemoryCardFileCloseInit__Fi(mc_file_read_ctrl.fd);
        mc_file_read_ctrl.step = '\x02';
      }
    }
    else if (iVar1 == -1) {
      mc_file_read_ctrl.step = '\0';
    }
  }
  if ((mc_file_read_ctrl.step == '\x02') && (iVar1 = MemoryCardFileCloseMain__Fv(), iVar1 != 0)) {
    iVar2 = mc_file_read_ctrl.error;
  }
  if ((mc_file_read_ctrl.step == '\x03') && (iVar1 = MemoryCardExeEndSync__FPi(&result), iVar1 != 0)
     ) {
    mc_file_read_ctrl.step = '\0';
  }
  return iVar2;
}

int MemoryCardFileReadReq(int fd, void *data_addr, int size) {
  int iVar1;
  
  iVar1 = sceMcRead(fd,data_addr,size);
  return iVar1;
}
