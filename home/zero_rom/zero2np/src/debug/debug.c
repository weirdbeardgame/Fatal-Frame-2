// STATUS: NOT STARTED

#include "debug.h"

typedef struct {
	u_char mode;
	u_char mdl_num;
	u_char anm_num;
	char cur_id;
	u_char sel_id;
	char mot_num;
	char mim_num;
	char bg_num;
	char ani_type;
	ANI_CODE **tbl;
	u_int type;
	u_int mdl_id;
	u_int anm_id;
	u_int mimloop;
	u_int motloop;
} MOTTEST_WORK;

typedef struct {
	u_int r;
	u_int g;
	u_int b;
	u_int pad;
} MT_RGB_WORK;

typedef struct {
	int x;
	int y;
	int z;
	u_int pad;
} MT_IVECTOR;

typedef enum {
	PADCMD_UP = 0,
	PADCMD_DOWN = 1,
	PADCMD_LEFT = 2,
	PADCMD_RIGHT = 3,
	PADCMD_SANKAKU = 4,
	PADCMD_BATU = 5,
	PADCMD_SIKAKU = 6,
	PADCMD_MARU = 7,
	PADCMD_L3 = 8,
	PADCMD_R3 = 9,
	PADCMD_SELECT = 10,
	PADCMD_R1 = 11,
	PADCMD_R2 = 12,
	PADCMD_L1 = 13,
	PADCMD_L2 = 14,
	PADCMD_START = 15,
	NUM_PADCMD = 16
} MAPVIEWER_PADCOMMAND;

typedef enum {
	PHASE_EXPLORER = 0,
	PHASE_CAMERACONTROL = 1,
	PHASE_EDITCONTROL = 2,
	NUM_PHASE = 3
} PHASE;

typedef enum {
	CMD_LOADDATA = 0,
	NUM_COMMAND = 1
} COMMAND;

struct LOADDATA {
	char strFileName[256];
};

struct CONFIG {
	int bDisplayCameraPosition;
};

struct fixed_array_base<IPhase *,3,IPhase *[3]> {
protected:
	IPhase *m_aData[3];
	
public:
	fixed_array_base<IPhase *,3,IPhase *[3]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	IPhase*& operator[]();
	IPhase*& operator[]();
	IPhase** data();
	IPhase** begin();
	IPhase** end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<IPhase *,3> : fixed_array_base<IPhase *,3,IPhase *[3]> {
};

int dbg_spu_mem_disp = 0;
int dbg_system_mem_disp = 0;
int dbg_mdl_mem_disp = 0;
int dbg_cmn_mem_disp = 0;
int dbg_iop_mem_disp = 0;
int dbg_ene_no = 0;
static int dbg_enemy_button_pre = 0;
int dbg_enemy_button = 0;

static DEBUG_MENU_DATA dbg_menu_data[3] = {
	/* [0] = */ {
		/* .str = */ 0x3a3a40,
		/* .func = */ SceneTest,
		/* .ini_func = */ NULL
	},
	/* [1] = */ {
		/* .str = */ 0x3ef998,
		/* .func = */ DebugEnd,
		/* .ini_func = */ NULL
	},
	/* [2] = */ {
		/* .str = */ 0x3ef9a0,
		/* .func = */ NULL,
		/* .ini_func = */ NULL
	}
};

Rep basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::nilRep = {
	/* .len = */ 0,
	/* .res = */ 0,
	/* .ref = */ 1,
	/* .selfish = */ false
};

size_t basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >::npos = 65535;
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
bool _Alloc_traits<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> >, ctl::custom_allocator<basic_string<char, string_char_traits<char>, ctl::custom_allocator<char> > > >::_S_instanceless = false;
bool _Alloc_traits<sce_dirent, ctl::custom_allocator<sce_dirent> >::_S_instanceless = false;
bool _Alloc_traits<IEditObject *, ctl::custom_allocator<IEditObject *> >::_S_instanceless = false;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a3928;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003ef938,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef940,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void SPU_draw_rect_func(int x, int y, int w, int h, int rgba) {
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	
  uchar *puVar1;
  int iVar2;
  int iVar3;
  SQAR_DAT sq;
  DISP_SQAR dq;
  
  sq.alpha = 0x80;
  sq.pri = 0;
  sq.r = '\0';
  sq.g = '\0';
  sq.b = '\0';
  sq.w = w;
  sq.h = h;
  sq.x = x;
  sq.y = y;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dq,&sq);
  dq.zbuf = 0xa000118;
  dq.test = 0x30003;
  dq.z = 0xfff3f;
  dq.alphar = 0x44;
  puVar1 = dq.r;
  dq.pri = 0xc0;
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    *puVar1 = (uchar)((uint)rgba >> 0x18);
    dq.g[iVar2] = (uchar)((uint)rgba >> 0x10);
    puVar1 = puVar1 + 1;
    dq.b[iVar2] = (uchar)((uint)rgba >> 8);
    iVar2 = iVar3;
  } while (iVar3 < 4);
  dq.alpha = (uchar)rgba;
  DispSqrD__FP9DISP_SQAR(&dq);
  return;
}

void SPU_draw_line_func(int x1, int y1, int x2, int y2, int rgba) {
	static DRAW_ENV_NOTEX env = {
		/* .alpha = */ 68,
		/* .test = */ 196611,
		/* .zbuf = */ 167772440
	};
	
  SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,(_DRAW_ENV_NOTEX *)env_1363);
  SetLine2DPacket__FffffUcUcUcUc
            ((float)x1,(float)y1,(float)x2,(float)y2,(uchar)((uint)rgba >> 0x18),
             (uchar)((uint)rgba >> 0x10),(uchar)((uint)rgba >> 8),(uchar)rgba);
  return;
}

void EachDebugMain() {
	static int iNoVoiceCnt = 0;
	static int mFlgOpen = 0;
	int i;
	unsigned int max_size;
	unsigned int total_size;
	char msg[300];
	unsigned int max_size;
	unsigned int total_size;
	char msg[300];
	unsigned int max_size;
	unsigned int total_size;
	char msg[300];
	unsigned int max_size;
	unsigned int total_size;
	char msg[300];
	
  int iVar1;
  _HEAP_WRK *p_Var2;
  int iVar3;
  int iVar4;
  float y;
  char acStack_4f0 [304];
  char acStack_3c0 [304];
  char acStack_290 [304];
  char msg [300];
  
  if (((*key_now[8] != 0) && (*key_now[10] != 0)) && (*key_now[6] == 1)) {
    AllRelease__14CCameraPowerUp(&m_plyr_camera.camera_power_up);
    SetAbsorbMultiRate__14CNEquipTrayWrkf(&m_plyr_camera.eq_tray,1.5);
    ItemGet__FiUc(10,'\x01');
    ItemGet__FiUc(0,'\x01');
    ItemGet__FiUc(1,'c');
    ItemGet__FiUc(2,'c');
    ItemGet__FiUc(3,'c');
    ItemGet__FiUc(4,'c');
    ItemGet__FiUc(5,'b');
    PlayData_ScoreCount__Fi(999999);
  }
  iVar1 = IsExistFreeVoice();
  if (iVar1 == 0) {
    iNoVoiceCnt_1472 = iNoVoiceCnt_1472 + 1;
    if (200 < iNoVoiceCnt_1472) {
      SetASCIIString2__FiffiUcUcUcPc(0,200.0,200.0,1,0x80,'\0','\0',"There is no Free Voice");
    }
  }
  else {
    iNoVoiceCnt_1472 = 0;
  }
  if (((*key_now[8] != 0) && (*key_now[10] != 0)) && (*key_now[7] == 1)) {
    mFlgOpen_1473 = mFlgOpen_1473 ^ 1;
    SndBankPrintStatus();
  }
  if (mFlgOpen_1473 != 0) {
    iVar4 = 10;
    iVar1 = 0;
    do {
      GetVoiceNowAdrs(0,iVar1);
      iVar3 = iVar1 + 1;
      GetVoiceLoopAdrs(0,iVar1);
      y = (float)iVar4;
      iVar4 = iVar4 + 0xf;
      SetString2__FiffiUcUcUcPCce(0,30.0,y,1,0x80,0x80,0x80,"Now %d Loop %d ");
      iVar1 = iVar3;
    } while (iVar3 < 0x18);
    IsExistFreeVoice();
    SetString2__FiffiUcUcUcPCce(0,300.0,380.0,1,0x80,'\0','\0',"FreeVoiceNum %d");
    SndBankGetFreeBankNum();
    SetString2__FiffiUcUcUcPCce(0,300.0,410.0,1,0x80,'\0','\0',"FreeSndBankNum %d");
  }
  if (dbg_spu_mem_disp != 0) {
    SPUQueryMaxFreeSize();
    SPUQueryTotalFreeSize();
    sprintf(acStack_4f0,"MaxFreeSize 0X%x %d KB");
    SetASCIIString2__FiffiUcUcUcPc(0,40.0,360.0,1,0x80,0x80,0x80,acStack_4f0);
    sprintf(acStack_4f0,"TotalFreeSize 0X%x %d KB");
    SetASCIIString2__FiffiUcUcUcPc(0,40.0,400.0,1,0x80,0x80,0x80,acStack_4f0);
    DrawSPUMemory(SPU_draw_rect_func__Fiiiii,SPU_draw_line_func__Fiiiii,0x50,0x28,100,300);
  }
  if (dbg_system_mem_disp != 0) {
    p_Var2 = GetSystemHeapWrkP__Fv();
    heapCtrlQueryMaxOneSize(p_Var2);
    p_Var2 = GetSystemHeapWrkP__Fv();
    heapCtrlMemSize(p_Var2,HEAPMEM_LEAVE_SIZE);
    sprintf(acStack_3c0,"MaxFreeSize 0X%x %d KB");
    SetASCIIString2__FiffiUcUcUcPc(0,40.0,360.0,1,0x80,0x80,0x80,acStack_3c0);
    sprintf(acStack_3c0,"TotalFreeSize 0X%x %d KB");
    SetASCIIString2__FiffiUcUcUcPc(0,40.0,400.0,1,0x80,0x80,0x80,acStack_3c0);
    p_Var2 = GetSystemHeapWrkP__Fv();
    heapCtrlDrawMemory(p_Var2,SPU_draw_rect_func__Fiiiii,SPU_draw_line_func__Fiiiii,0x50,0x28,100,
                       300);
  }
  if (dbg_mdl_mem_disp != 0) {
    ol_loadQueryMaxFreeSize__Fv();
    ol_loadQueryTotalFreeSize__Fv();
    sprintf(acStack_290,"MaxFreeSize 0X%x %d KB");
    SetASCIIString2__FiffiUcUcUcPc(0,40.0,360.0,1,0x80,0x80,0x80,acStack_290);
    sprintf(acStack_290,"TotalFreeSize 0X%x %d KB");
    SetASCIIString2__FiffiUcUcUcPc(0,40.0,400.0,1,0x80,0x80,0x80,acStack_290);
    ol_loadDrawMemory__FPFiiiii_vT0iiii
              (SPU_draw_rect_func__Fiiiii,SPU_draw_line_func__Fiiiii,0x50,0x28,100,300);
  }
  if (dbg_cmn_mem_disp != 0) {
    mem_utilQueryMaxFreeSize__Fv();
    mem_utilQueryTotalFreeSize__Fv();
    sprintf(msg,"MaxFreeSize 0X%x %d KB");
    SetASCIIString2__FiffiUcUcUcPc(0,40.0,360.0,1,0x80,0x80,0x80,msg);
    sprintf(msg,"TotalFreeSize 0X%x %d KB");
    SetASCIIString2__FiffiUcUcUcPc(0,40.0,400.0,1,0x80,0x80,0x80,msg);
    mem_utiDrawMemory__FPFiiiii_vT0iiii
              (SPU_draw_rect_func__Fiiiii,SPU_draw_line_func__Fiiiii,0x50,0x28,100,300);
  }
  if (dbg_iop_mem_disp != 0) {
    sceSifQueryMaxFreeMemSize();
    SetString2__FiffiUcUcUcPCce(0,30.0,350.0,1,0x80,'\0','\0',"sif max %d");
    sceSifQueryTotalFreeMemSize();
    SetString2__FiffiUcUcUcPCce(0,30.0,380.0,1,0x80,'\0','\0',"sif total %d");
  }
  dbg_enemy_button_pre = dbg_enemy_button;
  DrawCrossLineLastReal__Fv();
  return;
}

static int SceneTest() {
	int ret;
	
  int iVar1;
  
  if (debug_wrk.init_scntest == 0) {
    debug_wrk.init_scntest = 1;
    SceneTestInit__Fv();
  }
  iVar1 = SceneTestMain__Fv();
  if (iVar1 != 0) {
    debug_wrk.init_scntest = 0;
  }
  return (uint)(iVar1 != 0);
}

void DebugMenu() {
	int oneline;
	int sbjnum;
	int n;
	
  char **ppcVar1;
  short *psVar2;
  DEBUG_MENU_DATA *pDVar3;
  int iVar4;
  int iVar5;
  float y;
  
  iVar5 = 0;
  pDVar3 = dbg_menu_data;
  if (*dbg_menu_data[0].str != '\0') {
    iVar4 = 0x28;
    do {
      y = (float)iVar4;
      iVar4 = iVar4 + 0x20;
      ppcVar1 = &pDVar3->str;
      pDVar3 = pDVar3 + 1;
      SetASCIIString2__FiffiUcUcUcPc(0,200.0,y,1,0x80,0x80,0x80,*ppcVar1);
      iVar5 = iVar5 + 1;
    } while (*pDVar3->str != '\0');
  }
  SetASCIIString2__FiffiUcUcUcPc
            (0,170.0,(float)(debug_wrk.menu_csr * 0x20 + 0x28),1,0x80,0x80,0x80,&DAT_003ef9a8);
  if (*paddat[9] == 1) {
    if (iVar5 == 0) {
      trap(7);
    }
    debug_wrk.menu_csr = (debug_wrk.menu_csr + iVar5 + -1) % iVar5;
    psVar2 = paddat[8];
  }
  else {
    psVar2 = paddat[8];
  }
  if (*psVar2 == 1) {
    if (iVar5 == 0) {
      trap(7);
    }
    debug_wrk.menu_csr = (debug_wrk.menu_csr + 1) % iVar5;
    psVar2 = paddat[1];
  }
  else {
    psVar2 = paddat[1];
  }
  if (*psVar2 != 1) {
    if (**paddat == 1) {
      debug_wrk.init_func = 0;
      debug_wrk.mode = 1;
    }
    return;
  }
  SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MODE);
  return;
}

void InitDebug() {
  debug_wrk.init_subtitle_test = 0;
  debug_wrk.mode = 0;
  debug_wrk.menu_csr = 0;
  debug_wrk.comp_mode = 0;
  debug_wrk.init_movieviewer = 0;
  debug_wrk.init_msg_viewer = 0;
  debug_wrk.init_sndtest = 0;
  debug_wrk.init_scntest = 0;
  debug_wrk.init_screen_calib = 0;
  debug_wrk.init_test2d = 0;
  debug_wrk.init_motionviewer = 0;
  return;
}

void DebugMain() {
  long lVar1;
  
  if (debug_wrk.mode != 0) {
    if (debug_wrk.mode == 1) {
      lVar1 = (*(code *)dbg_menu_data[debug_wrk.menu_csr].func)();
      if (lVar1 != 0) {
        debug_wrk.mode = 0;
      }
    }
    else {
      printf("*****(DEBUG MODE) ERROR MODE = %d *****\n");
    }
    return;
  }
  DebugMenu__Fv();
  return;
}

int DebugEnd() {
  SetNextGPhase__F14GPHASE_ID_ENUM(GID_TITLE_MODE);
  return 1;
}

void init_Debug_Menu() {
  InitDebug__Fv();
  return;
}

void end_Debug_Menu() {
  return;
}

GPHASE_ENUM one_Debug_Menu(GPHASE_ENUM dummy) {
  DebugMain__Fv();
  return GPHASE_CONTINUE;
}
