// STATUS: NOT STARTED

#include "mmanage.h"

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c0978;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f3238,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f3240,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void ModelMemoryFree(int wrk_no) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 77,
		/* [1] = */ 111,
		/* [2] = */ 100,
		/* [3] = */ 101,
		/* [4] = */ 108,
		/* [5] = */ 77,
		/* [6] = */ 101,
		/* [7] = */ 109,
		/* [8] = */ 111,
		/* [9] = */ 114,
		/* [10] = */ 121,
		/* [11] = */ 70,
		/* [12] = */ 114,
		/* [13] = */ 101,
		/* [14] = */ 101,
		/* [15] = */ 0
	};
	char StringBuf[2000];
	
  int iVar1;
  char StringBuf [2000];
  
  printf(&DAT_003f3270);
  printf(&DAT_003f3270);
  printf(&DAT_003f3270);
  printf(&DAT_003f3270);
  printf(&DAT_003f3270);
  printf("====================================================\n");
  printf("==========Memory Lack, So Free Float Ghost==========\n");
  printf("====================================================\n");
  iVar1 = Release__10CFEneEntry(&fene_entry);
  if (iVar1 == 0) {
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Still Memory Lack, So Free Preloaded Enemy");
    iVar1 = PreloadedEneAllRelease__Fi(wrk_no);
    if (iVar1 == 0) {
      Print__7OL_LOADPc(&ol_load,StringBuf);
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Memory Lack %s");
      EneAllRelease__Fv();
    }
  }
  printf(&DAT_003f3270);
  printf(&DAT_003f3270);
  printf(&DAT_003f3270);
  printf(&DAT_003f3270);
  printf(&DAT_003f3270);
  return;
}

int* GetItemSgdAddr(int *pDataTop) {
  uint *puVar1;
  
  puVar1 = Pk2GetAddr__FPUii((uint *)pDataTop,0);
  return (int *)puVar1;
}

MMANAGE_ERR mmanageReqItemMdl(int mdl_no) {
  _OL_LOAD_ERR _Var1;
  
  _Var1 = Req__7OL_LOADi(&ol_load,mdl_no + 0x7df);
  return _Var1;
}

int mmanageIsReadyItemMdl(int mdl_no, int *mdl_pp, int bForceFree) {
  bool bVar1;
  OL_LOAD_READY OVar2;
  SGDFILEHEADER *pSGDHead;
  
  OVar2 = IsReady__7OL_LOADiPi(&ol_load,mdl_no + 0x7df,mdl_pp);
  if (OVar2 == OL_LOAD_READY_READY_FIRST) {
    pSGDHead = (SGDFILEHEADER *)GetItemSgdAddr__FPi((int *)*mdl_pp);
    sgdRemap__FP13SGDFILEHEADER(pSGDHead);
    OVar2 = OL_LOAD_READY_READY;
  }
  else if ((int)OVar2 < 4) {
    if (OVar2 != OL_LOAD_READY_READY) {
      OVar2 = OL_LOAD_READY_NOT_READY;
    }
  }
  else {
    bVar1 = OVar2 == OL_LOAD_READY_WAIT_MEMORY;
    OVar2 = OL_LOAD_READY_NOT_READY;
    if ((bVar1) && (bForceFree != 0)) {
      ModelMemoryFree__Fi(-1);
      OVar2 = OL_LOAD_READY_NOT_READY;
    }
  }
  return OVar2;
}

void mmanageClearItemMdl(int mdl_no) {
  Clear__7OL_LOADi(&ol_load,mdl_no + 0x7df);
  return;
}

MMANAGE_ERR mmanageReqMdl(int mdl_no) {
  _OL_LOAD_ERR _Var1;
  
  _Var1 = Req__7OL_LOADi(&ol_load,mdl_no + 0x12f);
  return _Var1;
}

int mmanageIsReadyMdl(int mdl_no, int *mdl_pp, int bForceFree) {
  bool bVar1;
  OL_LOAD_READY OVar2;
  
  OVar2 = IsReady__7OL_LOADiPi(&ol_load,mdl_no + 0x12f,mdl_pp);
  if (OVar2 == OL_LOAD_READY_READY_FIRST) {
    motInitOneEnemyMdl__FPUiUi((uint *)*mdl_pp,mdl_no);
    OVar2 = OL_LOAD_READY_READY;
  }
  else if ((int)OVar2 < 4) {
    if (OVar2 != OL_LOAD_READY_READY) {
      OVar2 = OL_LOAD_READY_NOT_READY;
    }
  }
  else {
    bVar1 = OVar2 == OL_LOAD_READY_WAIT_MEMORY;
    OVar2 = OL_LOAD_READY_NOT_READY;
    if ((bVar1) && (bForceFree != 0)) {
      ModelMemoryFree__Fi(-1);
      OVar2 = OL_LOAD_READY_NOT_READY;
    }
  }
  return OVar2;
}

void mmanageClearMdl(int mdl_no) {
  Clear__7OL_LOADi(&ol_load,mdl_no + 0x12f);
  return;
}

MMANAGE_ERR mmanageReqAnm(int mdl_no) {
  _OL_LOAD_ERR _Var1;
  
  _Var1 = Req__7OL_LOADi(&ol_load,mdl_no + 0x17e);
  return _Var1;
}

int mmanageIsReadyAnm(int mdl_no, int *mdl_pp, int bForceFree) {
  bool bVar1;
  OL_LOAD_READY OVar2;
  
  OVar2 = IsReady__7OL_LOADiPi(&ol_load,mdl_no + 0x17e,mdl_pp);
  if (OVar2 == OL_LOAD_READY_READY_FIRST) {
    OVar2 = OL_LOAD_READY_READY;
  }
  else if ((int)OVar2 < 4) {
    if (OVar2 != OL_LOAD_READY_READY) {
      OVar2 = OL_LOAD_READY_NOT_READY;
    }
  }
  else {
    bVar1 = OVar2 == OL_LOAD_READY_WAIT_MEMORY;
    OVar2 = OL_LOAD_READY_NOT_READY;
    if ((bVar1) && (bForceFree != 0)) {
      ModelMemoryFree__Fi(-1);
      OVar2 = OL_LOAD_READY_NOT_READY;
    }
  }
  return OVar2;
}

void mmanageClearAnm(int mdl_no) {
  Clear__7OL_LOADi(&ol_load,mdl_no + 0x17e);
  return;
}
