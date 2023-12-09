// STATUS: NOT STARTED

#include "ee_iop_q.h"

static char iop_query_buffer[512];
static char iop_query_arg[512];
static sceSifClientData sif_cli_data_q;
static int query_sema_id;

void ee_iopQueryInit() {
	SemaParam semap;
	int i;
	
  bool bVar1;
  int iVar2;
  SemaParam semap;
  
  semap.maxCount = 1;
  semap.initCount = 1;
  query_sema_id = CreateSema(&semap);
  do {
    iVar2 = sceSifBindRpc(&sif_cli_data_q,2,0);
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
  } while (sif_cli_data_q.serve == (_sif_serve_data *)0x0);
  return;
}

void QueryFileSize(int file_no, unsigned int *ps) {
  char *__src;
  
  WaitSema(query_sema_id);
  __src = GetFileName(file_no);
  strcpy(iop_query_arg,__src);
  FlushCache(0);
  sceSifCallRpc(&sif_cli_data_q,0,0,iop_query_arg,0x200,iop_query_buffer,0x200,(undefined1 *)0x0,
                (void *)0x0);
  *ps = iop_query_buffer._0_4_;
  SignalSema(query_sema_id);
  return;
}

void ReqQueryLoadCancel() {
  WaitSema(query_sema_id);
  FlushCache(0);
  sceSifCallRpc(&sif_cli_data_q,1,0,(void *)0x0,0,(void *)0x0,0,(undefined1 *)0x0,(void *)0x0);
  SignalSema(query_sema_id);
  return;
}

void ReqQuerySPUTransCoreGet(int *ps) {
  WaitSema(query_sema_id);
  FlushCache(0);
  sceSifCallRpc(&sif_cli_data_q,2,0,(void *)0x0,0,iop_query_buffer,0x200,(undefined1 *)0x0,
                (void *)0x0);
  *ps = iop_query_buffer._0_4_;
  SignalSema(query_sema_id);
  return;
}

void ReqQuerySPUTransCoreRelease(int core) {
  WaitSema(query_sema_id);
  FlushCache(0);
  iop_query_arg._0_4_ = core;
  sceSifCallRpc(&sif_cli_data_q,3,0,iop_query_arg,0x200,(void *)0x0,0,(undefined1 *)0x0,(void *)0x0)
  ;
  SignalSema(query_sema_id);
  return;
}
