// STATUS: NOT STARTED

#include "logo.h"

struct LOGO_WRK {
	char step;
	int cnt;
	int mode;
};

static SPRT_DAT logodat[3] = {
	/* [0] = */ {
		/* .tex0 = */ 2307399942931557312,
		/* .u = */ 1,
		/* .v = */ 1,
		/* .w = */ 226,
		/* .h = */ 45,
		/* .x = */ 197,
		/* .y = */ 201,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [1] = */ {
		/* .tex0 = */ 2307417536191343552,
		/* .u = */ 1,
		/* .v = */ 1,
		/* .w = */ 195,
		/* .h = */ 138,
		/* .x = */ 229,
		/* .y = */ 151,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [2] = */ {
		/* .tex0 = */ 2307417536191343552,
		/* .u = */ 1,
		/* .v = */ 141,
		/* .w = */ 103,
		/* .h = */ 17,
		/* .x = */ 280,
		/* .y = */ 374,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	}
};

static LOGO_WRK logo_wrk;
static void *tecmo_tex_addr;
static void *project_tex_addr;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ba960;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f18e8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f18f0,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void InitLogo() {
  tecmo_tex_addr = (void *)0x0;
  project_tex_addr = (void *)0x0;
  return;
}

void InitLogoCtrl() {
  logo_wrk.mode = 0;
  logo_wrk.step = '\0';
  logo_wrk.cnt = 0;
  return;
}

void GetTecmoLogoTexMem() {
	static char __FUNCTION__[19] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 84,
		/* [4] = */ 101,
		/* [5] = */ 99,
		/* [6] = */ 109,
		/* [7] = */ 111,
		/* [8] = */ 76,
		/* [9] = */ 111,
		/* [10] = */ 103,
		/* [11] = */ 111,
		/* [12] = */ 84,
		/* [13] = */ 101,
		/* [14] = */ 120,
		/* [15] = */ 77,
		/* [16] = */ 101,
		/* [17] = */ 109,
		/* [18] = */ 0
	};
	
  uint file_size;
  
  if (tecmo_tex_addr == (void *)0x0) {
    file_size = GetFileSize(2);
    tecmo_tex_addr = ol_loadGetHeap__Fi(file_size);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetTecmoLogoTexMem");
  }
  return;
}

void GetProjectLogoTexMem() {
	static char __FUNCTION__[21] = {
		/* [0] = */ 71,
		/* [1] = */ 101,
		/* [2] = */ 116,
		/* [3] = */ 80,
		/* [4] = */ 114,
		/* [5] = */ 111,
		/* [6] = */ 106,
		/* [7] = */ 101,
		/* [8] = */ 99,
		/* [9] = */ 116,
		/* [10] = */ 76,
		/* [11] = */ 111,
		/* [12] = */ 103,
		/* [13] = */ 111,
		/* [14] = */ 84,
		/* [15] = */ 101,
		/* [16] = */ 120,
		/* [17] = */ 77,
		/* [18] = */ 101,
		/* [19] = */ 109,
		/* [20] = */ 0
	};
	
  uint file_size;
  
  if (project_tex_addr == (void *)0x0) {
    file_size = GetFileSize(3);
    project_tex_addr = ol_loadGetHeap__Fi(file_size);
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! GetProjectLogoTexMem");
  }
  return;
}

void TecmoLogoTexLoadReq() {
	static char __FUNCTION__[20] = {
		/* [0] = */ 84,
		/* [1] = */ 101,
		/* [2] = */ 99,
		/* [3] = */ 109,
		/* [4] = */ 111,
		/* [5] = */ 76,
		/* [6] = */ 111,
		/* [7] = */ 103,
		/* [8] = */ 111,
		/* [9] = */ 84,
		/* [10] = */ 101,
		/* [11] = */ 120,
		/* [12] = */ 76,
		/* [13] = */ 111,
		/* [14] = */ 97,
		/* [15] = */ 100,
		/* [16] = */ 82,
		/* [17] = */ 101,
		/* [18] = */ 113,
		/* [19] = */ 0
	};
	
  if (tecmo_tex_addr != (void *)0x0) {
    FileLoadReqEE(2,tecmo_tex_addr,4,(undefined1 *)0x0,(void *)0x0);
    return;
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! TecmoLogoTexLoadReq");
  return;
}

void ProjectLogoTexLoadReq() {
	static char __FUNCTION__[22] = {
		/* [0] = */ 80,
		/* [1] = */ 114,
		/* [2] = */ 111,
		/* [3] = */ 106,
		/* [4] = */ 101,
		/* [5] = */ 99,
		/* [6] = */ 116,
		/* [7] = */ 76,
		/* [8] = */ 111,
		/* [9] = */ 103,
		/* [10] = */ 111,
		/* [11] = */ 84,
		/* [12] = */ 101,
		/* [13] = */ 120,
		/* [14] = */ 76,
		/* [15] = */ 111,
		/* [16] = */ 97,
		/* [17] = */ 100,
		/* [18] = */ 82,
		/* [19] = */ 101,
		/* [20] = */ 113,
		/* [21] = */ 0
	};
	
  if (project_tex_addr != (void *)0x0) {
    FileLoadReqEE(3,project_tex_addr,4,(undefined1 *)0x0,(void *)0x0);
    return;
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("Error! ProjectLogoTexLoadReq");
  return;
}

int TecmoLogoTexLoadWait() {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(2,tecmo_tex_addr);
  return (int)(iVar1 != 0);
}

int ProjectLogoTexLoadWait() {
  int iVar1;
  
  iVar1 = FileLoadIsEnd2(3,project_tex_addr);
  return (int)(iVar1 != 0);
}

int LogoMain(int logo_label, int in_time, int wait_time, int out_time) {
	u_char alp;
	
  int iVar1;
  uchar alpha;
  
  alpha = '\0';
  if (logo_wrk.step == '\0') {
    if (logo_label == 0) {
      iVar1 = TecmoLogoTexLoadWait__Fv();
      if (iVar1 != 0) {
        logo_wrk.step = '\x01';
      }
    }
    else {
      if (logo_label != 1) {
        return 0;
      }
      iVar1 = ProjectLogoTexLoadWait__Fv();
      if (iVar1 == 0) {
        return 0;
      }
      logo_wrk.step = '\x01';
    }
  }
  else {
    if (logo_wrk.step != '\x01') {
      return 0;
    }
    if (logo_label == 0) {
      PK2SendVram__FUiiii((uint)tecmo_tex_addr,-1,-1,0);
    }
    else if (logo_label == 1) {
      PK2SendVram__FUiiii((uint)project_tex_addr,-1,-1,0);
    }
    if (logo_wrk.mode == 1) {
      logo_wrk.cnt = logo_wrk.cnt + 1;
      if ((wait_time < logo_wrk.cnt) ||
         (alpha = 0x80,
         (ushort)(*key_now[9] |
                 *key_now[8] |
                 *key_now[11] |
                 *key_now[10] |
                 *key_now[7] | *key_now[5] | *key_now[6] | *key_now[7] | *key_now[5] | *key_now[4])
         != 0)) {
        logo_wrk.cnt = 0;
        logo_wrk.mode = 2;
        alpha = 0x80;
      }
    }
    else if (logo_wrk.mode < 2) {
      if (logo_wrk.mode == 0) {
        if (in_time == 0) {
          trap(7);
        }
        iVar1 = logo_wrk.cnt << 7;
        logo_wrk.cnt = logo_wrk.cnt + 1;
        alpha = (uchar)(iVar1 / in_time);
        if (in_time < logo_wrk.cnt) {
          logo_wrk.mode = 1;
          logo_wrk.cnt = 0;
        }
      }
    }
    else if (logo_wrk.mode == 2) {
      if (out_time == 0) {
        trap(7);
      }
      iVar1 = out_time - logo_wrk.cnt;
      logo_wrk.cnt = logo_wrk.cnt + 1;
      alpha = (uchar)((iVar1 * 0x80) / out_time);
      if (out_time < logo_wrk.cnt) {
        return 1;
      }
    }
    if (2 < (uint)logo_wrk.mode) {
      return 0;
    }
    LogoDispMain__FiUc(logo_label,alpha);
  }
  return 0;
}

void ReleaseTecmoLogoTexMem() {
  if (tecmo_tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(tecmo_tex_addr);
    tecmo_tex_addr = (void *)0x0;
  }
  return;
}

void ReleaseProjectLogoTexMem() {
  if (project_tex_addr != (void *)0x0) {
    ol_loadFreeHeap__FPv(project_tex_addr);
    project_tex_addr = (void *)0x0;
  }
  return;
}

static void LogoDispMain(int logo_label, u_char alpha) {
	DISP_SPRT ds;
	
  DISP_SPRT ds;
  
  ds.alpha = alpha;
  if (logo_label == 0) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,logodat);
    DispSprD__FP9DISP_SPRT(&ds);
  }
  else if (logo_label == 1) {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,logodat + 1);
    DispSprD__FP9DISP_SPRT(&ds);
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,logodat + 2);
    ds.alpha = alpha;
    DispSprD__FP9DISP_SPRT(&ds);
  }
  return;
}

int LangSelMain() {
  return 1;
}
