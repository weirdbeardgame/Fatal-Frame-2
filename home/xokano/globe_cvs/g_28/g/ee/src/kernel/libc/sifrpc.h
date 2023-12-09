// STATUS: NOT STARTED

#ifndef HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_SIFRPC_H
#define HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_SIFRPC_H

struct _sif_rpc_data {
	void *paddr;
	unsigned int pid;
	int tid;
	unsigned int mode;
};

typedef _sif_rpc_data sceSifRpcData;
typedef void (*sceSifEndFunc)(/* parameters unknown */);

struct _sif_client_data {
	_sif_rpc_data rpcd;
	unsigned int command;
	void *buff;
	void *gp;
	sceSifEndFunc func;
	void *para;
	_sif_serve_data *serve;
};

typedef _sif_client_data sceSifClientData;

struct _sif_receive_data {
	_sif_rpc_data rpcd;
	void *src;
	void *dest;
	int size;
};

typedef _sif_receive_data sceSifReceiveData;
typedef void* (*sceSifRpcFunc)(/* parameters unknown */);

struct _sif_serve_data {
	unsigned int command;
	sceSifRpcFunc func;
	void *buff;
	int size;
	sceSifRpcFunc cfunc;
	void *cbuff;
	int csize;
	sceSifClientData *client;
	void *paddr;
	unsigned int fno;
	void *receive;
	int rsize;
	int rmode;
	unsigned int rid;
	_sif_serve_data *link;
	_sif_serve_data *next;
	_sif_queue_data *base;
};

typedef _sif_serve_data sceSifServeData;

struct _sif_queue_data {
	int key;
	int active;
	_sif_serve_data *link;
	_sif_serve_data *start;
	_sif_serve_data *end;
	_sif_queue_data *next;
};

typedef _sif_queue_data sceSifQueueData;

typedef struct {
	unsigned int psize : 8;
	unsigned int dsize : 24;
	unsigned int daddr;
	unsigned int fcode;
	unsigned int opt;
} sceSifCmdHdr;


void sceSifInitRpc(unsigned int mode);
void sceSifExitRpc();
int sceSifGetOtherData(sceSifReceiveData *rd, void *src, void *dest, int size, unsigned int mode);
int sceSifBindRpc(sceSifClientData *bd, unsigned int command, unsigned int mode);
int sceSifCallRpc(sceSifClientData *bd, unsigned int fno, unsigned int mode, void *send, int ssize, void *receive, int rsize, sceSifEndFunc func, void *para);
int sceSifCheckStatRpc(sceSifRpcData *cd);
void sceSifSetRpcQueue(sceSifQueueData *pSrqd, int key);
void sceSifRegisterRpc(sceSifServeData *pr, unsigned int commnad, sceSifRpcFunc func, void *buff, sceSifRpcFunc cfunc, void *cbuff, sceSifQueueData *pq);
sceSifServeData* sceSifRemoveRpc(sceSifServeData *pr, sceSifQueueData *pq);
sceSifQueueData* sceSifRemoveRpcQueue(sceSifQueueData *pSrqd);
sceSifServeData* sceSifGetNextRequest(sceSifQueueData *qd);
void sceSifExecRequest(sceSifServeData *rdp);
void sceSifRpcLoop(sceSifQueueData *qd);

#endif // HOME_XOKANO_GLOBE_CVS_G_28_G_EE_SRC_KERNEL_LIBC_SIFRPC_H
