// STATUS: NOT STARTED

#include "FurnLoad.h"

typedef struct {
	char key[8];
	int label;
	int attr;
} FURN_LOAD_TBL;

static FURN_LOAD_TBL FurnTbl[16] = {
	/* [0] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 48,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 887,
		/* .attr = */ 0
	},
	/* [1] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 49,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 987,
		/* .attr = */ 4
	},
	/* [2] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 50,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1087,
		/* .attr = */ 0
	},
	/* [3] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 51,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1187,
		/* .attr = */ 0
	},
	/* [4] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 52,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1287,
		/* .attr = */ 0
	},
	/* [5] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 53,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1387,
		/* .attr = */ 5
	},
	/* [6] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 54,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1487,
		/* .attr = */ 4
	},
	/* [7] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 55,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1587,
		/* .attr = */ 0
	},
	/* [8] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 56,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1687,
		/* .attr = */ 2
	},
	/* [9] = */ {
		/* .key = */ {
			/* [0] = */ 102,
			/* [1] = */ 57,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1787,
		/* .attr = */ 1
	},
	/* [10] = */ {
		/* .key = */ {
			/* [0] = */ 100,
			/* [1] = */ 48,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1887,
		/* .attr = */ 3
	},
	/* [11] = */ {
		/* .key = */ {
			/* [0] = */ 100,
			/* [1] = */ 49,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1898,
		/* .attr = */ 3
	},
	/* [12] = */ {
		/* .key = */ {
			/* [0] = */ 100,
			/* [1] = */ 50,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1929,
		/* .attr = */ 3
	},
	/* [13] = */ {
		/* .key = */ {
			/* [0] = */ 100,
			/* [1] = */ 51,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 1962,
		/* .attr = */ 3
	},
	/* [14] = */ {
		/* .key = */ {
			/* [0] = */ 100,
			/* [1] = */ 52,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 2003,
		/* .attr = */ 3
	},
	/* [15] = */ {
		/* .key = */ {
			/* [0] = */ 100,
			/* [1] = */ 56,
			/* [2] = */ 0,
			/* [3] = */ 0,
			/* [4] = */ 0,
			/* [5] = */ 0,
			/* [6] = */ 0,
			/* [7] = */ 0
		},
		/* .label = */ 2004,
		/* .attr = */ 3
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39deb8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003eebf0,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003eebf8,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static FURN_LOAD_TBL* FurnLoadGetKeyPtr(char *name) {
	int i;
	
  int iVar1;
  size_t __n;
  FURN_LOAD_TBL *__s;
  int iVar2;
  
  __s = FurnTbl;
  iVar2 = 0;
  do {
    __n = strlen(__s->key);
    iVar1 = strncmp(name,__s->key,__n);
    iVar2 = iVar2 + 1;
    if (iVar1 == 0) {
      return __s;
    }
    __s = __s + 1;
  } while (iVar2 < 0x10);
  printf("***ERR!! %s(%d):");
  printf("NO_FURN_KEY_NAME[%s]\n");
  return (FURN_LOAD_TBL *)0x0;
}

static int FurnLoadGetKeyLabel(char *name) {
	FURN_LOAD_TBL *fup;
	
  FURN_LOAD_TBL *pFVar1;
  int iVar2;
  
  pFVar1 = FurnLoadGetKeyPtr__FPCc(name);
  iVar2 = -1;
  if (pFVar1 != (FURN_LOAD_TBL *)0x0) {
    iVar2 = pFVar1->label;
  }
  return iVar2;
}

int FurnLoadGetAttr(char *name) {
	FURN_LOAD_TBL *fup;
	
  FURN_LOAD_TBL *pFVar1;
  int iVar2;
  
  pFVar1 = FurnLoadGetKeyPtr__FPCc(name);
  iVar2 = -1;
  if (pFVar1 != (FURN_LOAD_TBL *)0x0) {
    iVar2 = pFVar1->attr;
  }
  return iVar2;
}

char* FurnLoadOne(char *furn_name, char *addr, int *file_id) {
	int top;
	int id;
	
  int iVar1;
  int iVar2;
  
  iVar1 = FurnLoadGetKeyLabel__FPCc(furn_name);
  if ((-1 < iVar1) && (iVar2 = FurnCtlGetID__FPc(furn_name), -1 < iVar2)) {
    addr = (char *)LoadReqGetAddr__FiUiPi(iVar1 + iVar2 % 100,(uint)addr,file_id);
  }
  return addr;
}

static void FurnLoadRegistDoor(void *op) {
	char name[36];
	
  int iVar1;
  char name [36];
  
  iVar1 = FurnCtlGetType__FPc((char *)((int)op + 8));
  if (iVar1 != 0) {
    FurnCtlGetMdoelName__FPcT0(name,(char *)((int)op + 8));
    CBuffSetStr__FPc(name);
  }
  return;
}

static void FurnLoadRegistObj(void *op) {
	char name[36];
	
  int iVar1;
  char name [36];
  
  iVar1 = FurnCtlGetType__FPc((char *)((int)op + 0xc));
  if (iVar1 != 0) {
    FurnCtlGetMdoelName__FPcT0(name,(char *)((int)op + 0xc));
    CBuffSetStr__FPc(name);
  }
  return;
}

static void FurnLoadRegistPut(void *op) {
	char name[36];
	
  int iVar1;
  char name [36];
  
  iVar1 = FurnCtlGetType__FPc((char *)((int)op + 8));
  if (iVar1 != 0) {
    FurnCtlGetMdoelName__FPcT0(name,(char *)((int)op + 8));
    CBuffSetStr__FPc(name);
  }
  return;
}

static void FurnLoadCallFunc(int reg_id, int type, void (*func)(/* parameters unknown */)) {
	MB_OUT_SECTION *stp;
	
  MB_OUT_SECTION *pMVar1;
  
  RegDatGetStPtrStart__Fii(reg_id,type);
  while( true ) {
    pMVar1 = RegDatGetNextStPtr__Fi(reg_id);
    if (pMVar1 == (MB_OUT_SECTION *)0x0) break;
    (*(code *)func)(pMVar1);
  }
  return;
}

char* FurnLoadRegID(int buff_id, int reg_id, char *addr) {
	int i;
	char *work;
	char *name;
	
  char *furn_name;
  int iVar1;
  char *addr_00;
  int id;
  int iVar2;
  
  CBuffInit__Fii(0x24,0x200);
  FurnLoadCallFunc__FiiPFPv_v(reg_id,7,FurnLoadRegistDoor__FPv);
  FurnLoadCallFunc__FiiPFPv_v(reg_id,3,FurnLoadRegistObj__FPv);
  FurnLoadCallFunc__FiiPFPv_v(reg_id,0xb,FurnLoadRegistPut__FPv);
  id = 0;
  while( true ) {
    addr_00 = addr;
    iVar1 = CBuffGetRegistNum__Fv();
    iVar2 = id + 1;
    if (iVar1 <= id) break;
    furn_name = CBuffGetStr__Fi(id);
    addr = FurnLoadOne__FPCcPcPi(furn_name,addr_00,(int *)0x0);
    id = iVar2;
    if (addr != addr_00) {
      iVar1 = FurnLoadGetAttr__FPc(furn_name);
      FurnCtlRegist__FiPcT1iUi(buff_id,furn_name,addr_00,iVar1,(int)addr - (int)addr_00);
    }
  }
  CBuffTerm__Fv();
  return addr_00;
}
