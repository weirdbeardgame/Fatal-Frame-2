// STATUS: NOT STARTED

#include "file_stream.h"

enum _FILE_STREAM_REQ_ENUM {
	REQ_STM_START = 0,
	REQ_STM_READ = 1,
	REQ_STM_STOP = 2
};

typedef _FILE_STREAM_REQ_ENUM FILE_STREAM_REQ_ENUM;

struct _strSTM_START {
	LOAD_DEF_STRUCT ld;
};

typedef _strSTM_START strSTM_START;

struct _strSTM_READ {
	int read_size;
	void *ee_buf;
};

typedef _strSTM_READ strSTM_READ;
static char iop_file_stm_ret[64];
static char iop_file_stm_arg[320];
static sceSifClientData sif_cli_data_s;
static int file_stream_lock;

void FileStreamInit() {
	int i;
	
  bool bVar1;
  int iVar2;
  
  do {
    iVar2 = sceSifBindRpc(&sif_cli_data_s,4,0);
    if (iVar2 < 0) {
      printf("error: sceSifBindRpc QUERY\n");
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    iVar2 = 0x270b;
    do {
      bVar1 = iVar2 != -1;
      iVar2 = iVar2 + -4;
    } while (bVar1);
  } while (sif_cli_data_s.serve == (_sif_serve_data *)0x0);
  file_stream_lock = 0;
  return;
}

int FileStreamStart(int file_no, int ring_buf_num, int one_buf_sector) {
	strSTM_START *stm;
	
  GetFileNameBuffer(file_no,iop_file_stm_arg + 0x10);
  iop_file_stm_arg._8_4_ = GetFileStartSector(file_no);
  iop_file_stm_arg._0_4_ = one_buf_sector << 0xb;
  iop_file_stm_arg._4_4_ = ring_buf_num;
  iop_file_stm_arg._12_4_ = GetFileSize(file_no);
  sceSifCallRpc(&sif_cli_data_s,0,0,iop_file_stm_arg,0x140,iop_file_stm_ret,0x40,(undefined1 *)0x0,
                (void *)0x0);
  file_stream_lock = 1;
  return 1;
}

int FileStreamRead(void *buff, int size, int block_read) {
	strSTM_READ *stm;
	
  int iVar1;
  
  if ((size & 0x7ffU) != 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("FileStreamRead ReadSize Is Not Sector Align");
  }
  iVar1 = FileStreamIsAct();
  if (iVar1 != 0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("FileStreamRead Overlap Call");
  }
  iop_file_stm_arg._0_4_ = size;
  iop_file_stm_arg._4_4_ = buff;
  FlushCache(0);
  if (block_read == 0) {
    sceSifCallRpc(&sif_cli_data_s,1,1,iop_file_stm_arg,0x140,iop_file_stm_ret,0x40,(undefined1 *)0x0
                  ,(void *)0x0);
  }
  else {
    sceSifCallRpc(&sif_cli_data_s,1,0,iop_file_stm_arg,0x140,iop_file_stm_ret,0x40,(undefined1 *)0x0
                  ,(void *)0x0);
  }
  iVar1._0_1_ = iop_file_stm_ret[0];
  iVar1._1_1_ = iop_file_stm_ret[1];
  iVar1._2_1_ = iop_file_stm_ret[2];
  iVar1._3_1_ = iop_file_stm_ret[3];
  return iVar1;
}

int FileStreamIsAct() {
  int iVar1;
  
  iVar1 = sceSifCheckStatRpc(&sif_cli_data_s.rpcd);
  return (int)(iVar1 != 0);
}

int FileStreamStop() {
  int iVar1;
  
  do {
    iVar1 = sceSifCheckStatRpc(&sif_cli_data_s.rpcd);
  } while (iVar1 != 0);
  sceSifCallRpc(&sif_cli_data_s,2,0,iop_file_stm_arg,0x140,iop_file_stm_ret,0x40,(undefined1 *)0x0,
                (void *)0x0);
  file_stream_lock = 0;
  return 1;
}
