// STATUS: NOT STARTED

#include "deci2.h"

typedef struct {
	u_char type;
	u_char code;
	u_short unused;
} sceDcmpHdr;

static char userarea[36];

int sceDeci2Open(short unsigned int protocol, void *opt, void (*handler)(/* parameters unknown */)) {
	u_int args[4];
	
  int iVar1;
  uint args [4];
  
  args[0] = (uint)(ushort)protocol;
  args[3] = 0x204ca8c8;
  args[1] = (uint)opt;
  args[2] = (uint)handler;
  iVar1 = Deci2Call(1,args);
  return iVar1;
}

int sceDeci2Close(int s) {
	u_int args[1];
	
  int iVar1;
  uint args [1];
  
  args[0] = s;
  iVar1 = Deci2Call(2,args);
  return iVar1;
}

int sceDeci2ReqSend(int s, char dest) {
	u_int args[2];
	
  int iVar1;
  uint args [2];
  
  args[1] = (uint)dest;
  args[0] = s;
  iVar1 = Deci2Call(3,args);
  return iVar1;
}

void sceDeci2Poll(int s) {
	u_int args[1];
	
  uint args [1];
  
  args[0] = s;
  Deci2Call(4,args);
  return;
}

int sceDeci2GrpOpen(unsigned char grp, void *opt, int (*handler)(/* parameters unknown */)) {
	u_int args[5];
	
  int iVar1;
  uint args [5];
  
  args[0] = (uint)grp;
  args[1] = (uint)opt;
  args[2] = (uint)handler;
  iVar1 = Deci2Call(0x20,args);
  return iVar1;
}

int sceDeci2GrpClose(int g) {
	u_int args[1];
	
  int iVar1;
  uint args [1];
  
  args[0] = g;
  iVar1 = Deci2Call(0x21,args);
  return iVar1;
}

int sceDeci2ExRecv(int s, void *buf, u_short len) {
	u_int args[3];
	
  int iVar1;
  uint args [3];
  
  args[2] = (uint)(ushort)len;
  args[0] = s;
  args[1] = (uint)buf;
  iVar1 = Deci2Call(0xfffffffffffffffb,args);
  return iVar1;
}

int sceDeci2ExSend(int s, void *buf, u_short len) {
	u_int args[3];
	
  int iVar1;
  uint args [3];
  
  args[2] = (uint)(ushort)len;
  args[0] = s;
  args[1] = (uint)buf;
  iVar1 = Deci2Call(0xfffffffffffffffa,args);
  return iVar1;
}

int sceDeci2ExReqSend(int s, char dest) {
	u_int args[2];
	
  int iVar1;
  uint args [2];
  
  args[1] = (uint)dest;
  args[0] = s;
  iVar1 = Deci2Call(0xfffffffffffffff9,args);
  return iVar1;
}

int sceDeci2ExLock(int s) {
	u_int args[1];
	
  int iVar1;
  uint args [1];
  
  args[0] = s;
  iVar1 = Deci2Call(0xfffffffffffffff8,args);
  return iVar1;
}

int sceDeci2ExUnLock(int s) {
	u_int args[1];
	
  int iVar1;
  uint args [1];
  
  args[0] = s;
  iVar1 = Deci2Call(0xfffffffffffffff7,args);
  return iVar1;
}

int kputs(char *str) {
	u_int args[1];
	
  int iVar1;
  uint args [1];
  
  args[0] = (uint)str;
  iVar1 = Deci2Call(0x10,args);
  return iVar1;
}
