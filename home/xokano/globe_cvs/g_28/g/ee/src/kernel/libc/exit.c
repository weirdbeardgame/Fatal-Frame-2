// STATUS: NOT STARTED

#include "exit.h"

static struct SysEntry[0] {
	int num;
	void *func;
} = {
};

static int Copy(char *dst, char *src, u_int size) {
  int in_v0_lo;
  
  syscall(0);
  return in_v0_lo;
}

static int kCopy(char *dst, char *src, u_int size) {
	int i;
	
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (size != 0) {
    do {
      cVar1 = *src;
      uVar2 = uVar2 + 1;
      src = src + 1;
      *dst = cVar1;
      dst = dst + 1;
    } while (uVar2 < size);
  }
  return 0;
}

static void setup(int n, void (*f)(/* parameters unknown */)) {
  syscall(0);
  return;
}

static char* SetArg(char *name, int argc, char **args) {
	int i;
	int len;
	char **ppkArgv;
	char *p;
	char *ret;
	
  char *src;
  char *pcVar1;
  size_t sVar2;
  uint uVar3;
  char *dst;
  char *p;
  
  dst = (char *)_kExecArg;
  pcVar1 = (char *)((int)_kExecArg + 0x40);
  p = pcVar1;
  setup(_SysEntry,PTR_kCopy_00368974);
  if (0xf < argc) {
    argc = 0xf;
  }
  Copy(dst,(char *)&p,4);
  sVar2 = strlen(name);
  uVar3 = (int)sVar2 + 1;
  Copy(p,name,uVar3);
  p = p + uVar3;
  if (0 < argc) {
    do {
      dst = dst + 4;
      Copy(dst,(char *)&p,4);
      argc = argc + -1;
      sVar2 = strlen(*args);
      uVar3 = (int)sVar2 + 1;
      src = *args;
      args = args + 1;
      Copy(p,src,uVar3);
      p = p + uVar3;
    } while (argc != 0);
  }
  return pcVar1;
}

static void TerminateLibrary() {
  long lVar1;
  
  lVar1 = GetMemorySize();
  if (lVar1 == 0x2000000) {
    InitTLB32MB();
  }
  else {
    _InitTLB();
  }
  return;
}

int ExecPS2(void *addr, void *gp, int argc, char **argv) {
  int iVar1;
  
  SetArg("",argc,argv);
  TerminateLibrary();
  iVar1 = _ExecPS2(addr,gp,argc,(int)_kExecArg + 4);
  return iVar1;
}

void LoadExecPS2(char *name, int argc, char **args) {
	char *kName;
	
  char *pcVar1;
  
  pcVar1 = SetArg(name,argc,args);
  TerminateLibrary();
  _LoadExecPS2(pcVar1,argc,(int)_kExecArg + 4);
  return;
}

void Exit(int n) {
  TerminateLibrary();
  _Exit(n);
  return;
}

void ExecOSD(int argc, char **argv) {
  SetArg("",argc,argv);
  TerminateLibrary();
  _ExecOSD(argc,(int)_kExecArg + 4);
  return;
}
