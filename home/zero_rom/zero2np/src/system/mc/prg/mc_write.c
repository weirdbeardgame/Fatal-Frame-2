// STATUS: NOT STARTED

#include "mc_write.h"

typedef struct {
	char step;
	char retry_cnt;
	int fd;
	int size;
	int error;
	void *data_addr;
} MC_FILE_WRITE_CTRL;

static MC_FILE_WRITE_CTRL mc_file_write_ctrl;

void MemoryCardFileWriteInit(int fd, void *data_addr, int size) {
  mc_file_write_ctrl.data_addr = data_addr;
  mc_file_write_ctrl.retry_cnt = '\x04';
  mc_file_write_ctrl.fd = fd;
  mc_file_write_ctrl.size = size;
  mc_file_write_ctrl.step = '\0';
  mc_file_write_ctrl.error = 0;
  return;
}

int MemoryCardFileWriteMain() {
	int res;
	int mc_res;
	int result;
	
  int iVar1;
  int iVar2;
  int iVar3;
  int result;
  
  result = 0;
  iVar3 = 0;
  if (mc_file_write_ctrl.step == '\0') {
    iVar1 = MemoryCardFileWriteReq__FiPvi
                      (mc_file_write_ctrl.fd,mc_file_write_ctrl.data_addr,mc_file_write_ctrl.size);
    if (iVar1 == 0) {
      mc_file_write_ctrl.step = '\x01';
    }
    else if (mc_file_write_ctrl.retry_cnt < '\x01') {
      mc_file_write_ctrl.error = -10;
      MemoryCardFileCloseInit__Fi(mc_file_write_ctrl.fd);
      mc_file_write_ctrl.step = '\x02';
    }
    else if (iVar1 == -100) {
      MemoryCardAssert__FPce("Error! sceMcInit forgets");
    }
    else if (iVar1 == -200) {
      mc_file_write_ctrl.step = '\x03';
    }
    else {
      mc_file_write_ctrl.retry_cnt = mc_file_write_ctrl.retry_cnt + -1;
    }
  }
  if (mc_file_write_ctrl.step == '\x01') {
    iVar1 = MemoryCardExeEndSync__FPi(&result);
    if (iVar1 == 1) {
      iVar2 = 1;
      if ((((result < 0) && (iVar2 = result, result != -8)) &&
          (iVar3 = -0x14, iVar2 = iVar3, -9 < result)) &&
         ((-2 < result || (iVar2 = result, result < -5)))) goto LAB_001e2efc;
    }
    else {
      iVar2 = iVar3;
      if (iVar1 == -1) {
        mc_file_write_ctrl.step = '\0';
      }
    }
    iVar3 = iVar2;
  }
LAB_001e2efc:
  if ((mc_file_write_ctrl.step == '\x02') && (iVar1 = MemoryCardFileCloseMain__Fv(), iVar1 != 0)) {
    iVar3 = mc_file_write_ctrl.error;
  }
  if ((mc_file_write_ctrl.step == '\x03') &&
     (iVar1 = MemoryCardExeEndSync__FPi(&result), iVar1 != 0)) {
    mc_file_write_ctrl.step = '\0';
  }
  return iVar3;
}

int MemoryCardFileWriteReq(int fd, void *data_addr, int size) {
  int iVar1;
  
  iVar1 = sceMcWrite(fd,data_addr,size);
  return iVar1;
}
