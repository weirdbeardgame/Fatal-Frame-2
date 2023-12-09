// STATUS: NOT STARTED

#include "finder.h"

typedef struct {
	int cnt;
	int flow;
} CTRL_STR;

typedef struct {
	CTRL_STR ctrl;
} PLYR_HP_WRK;

typedef struct {
	u_char ene_no;
	u_char flg;
} ENE_HP_WRK;

typedef struct {
	int cnt;
	int flow;
} SHOT_ENABLE;

typedef struct {
	int cnt;
	int flow;
} CHARGE_GUAGE_ONE;

typedef struct {
	int flow;
	int bg_flow;
	u_char old_ch_num;
	CHARGE_GUAGE_ONE cgo[12];
} CHARGE_GUAGE;

typedef struct {
	int flow_num;
	int cnt_num;
	int flow_sp;
	int cnt_sp;
	int score;
	int mes_alp;
	int num_alp;
} DISPFMES;

typedef struct {
	u_char phot_shot;
	u_char disp_pause;
	short int alp_battle;
	u_char alp_finder;
	u_char alp_hpbar;
	char fade_finder;
	char fade_hpbar;
	u_char sw_finder;
	u_char sw_hpbar;
	u_char sw_filament;
	u_int cnt_finder;
	u_int cnt_hpbar;
	u_short time_hpbar;
	u_char film_num;
	SHOT_ENABLE sena;
	CHARGE_GUAGE cg;
	DISPFMES dispfmes;
	u_char alp;
} INFO_WRK;

typedef struct {
	float sclw;
	float sclh;
	float rot;
	float dist;
} ENEDMGLINE_SUB;

typedef struct {
	ENEDMGLINE_SUB edl_sub[60];
	int flow;
	int cnt;
	u_char alp;
	u_char dummy08[3];
	int col;
} ENEDMGLINE_WRK;

typedef enum {
	SP_CHANCE_NONE = 0,
	SP_CHANCE_IN = 1,
	SP_CHANCE_OUT = 2,
	SP_CHANCE_END = 3
} _SP_CHANCE_MODE;

typedef _SP_CHANCE_MODE SP_CHANCE_MODE;
static int sp_chance_mode = 0;
static int sp_chance_alpha = 0;
static float sp_rot1 = 0.f;
static float sp_rot2 = 20.f;
static int finder_sound_bank_id = -1;
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
static int finder_draw_lock;

ENEDMGLINE_WRK enedmgline_wrk = {
	/* .edl_sub = */ {
		/* [0] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [1] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [2] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [3] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [4] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [5] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [6] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [7] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [8] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [9] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [10] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [11] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [12] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [13] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [14] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [15] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [16] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [17] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [18] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [19] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [20] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [21] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [22] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [23] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [24] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [25] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [26] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [27] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [28] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [29] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [30] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [31] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [32] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [33] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [34] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [35] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [36] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [37] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [38] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [39] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [40] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [41] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [42] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [43] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [44] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [45] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [46] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [47] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [48] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [49] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [50] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [51] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [52] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [53] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [54] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [55] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [56] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [57] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [58] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		},
		/* [59] = */ {
			/* .sclw = */ 0.f,
			/* .sclh = */ 0.f,
			/* .rot = */ 0.f,
			/* .dist = */ 0.f
		}
	},
	/* .flow = */ 0,
	/* .cnt = */ 0,
	/* .alp = */ 0,
	/* .dummy08 = */ {
		/* [0] = */ 0,
		/* [1] = */ 0,
		/* [2] = */ 0
	},
	/* .col = */ 0
};

INFO_WRK info_wrk = {
	/* .phot_shot = */ 0,
	/* .disp_pause = */ 0,
	/* .alp_battle = */ 0,
	/* .alp_finder = */ 0,
	/* .alp_hpbar = */ 0,
	/* .fade_finder = */ 0,
	/* .fade_hpbar = */ 0,
	/* .sw_finder = */ 0,
	/* .sw_hpbar = */ 0,
	/* .sw_filament = */ 0,
	/* .cnt_finder = */ 0,
	/* .cnt_hpbar = */ 0,
	/* .time_hpbar = */ 0,
	/* .film_num = */ 0,
	/* .sena = */ {
		/* .cnt = */ 0,
		/* .flow = */ 0
	},
	/* .cg = */ {
		/* .flow = */ 0,
		/* .bg_flow = */ 0,
		/* .old_ch_num = */ 0,
		/* .cgo = */ {
			/* [0] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [1] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [2] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [3] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [4] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [5] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [6] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [7] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [8] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [9] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [10] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			},
			/* [11] = */ {
				/* .cnt = */ 0,
				/* .flow = */ 0
			}
		}
	},
	/* .dispfmes = */ {
		/* .flow_num = */ 0,
		/* .cnt_num = */ 0,
		/* .flow_sp = */ 0,
		/* .cnt_sp = */ 0,
		/* .score = */ 0,
		/* .mes_alp = */ 0,
		/* .num_alp = */ 0
	},
	/* .alp = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3ae2d0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0818,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0820,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void FinderBattleAlphaMain() {
  int iVar1;
  
  iVar1 = IsPlayerInBattle__Fv();
  if (iVar1 == 0) {
    info_wrk.alp_battle = info_wrk.alp_battle - 0xf;
    if ((int)((uint)info_wrk.alp_battle << 0x10) < 0) {
      info_wrk.alp_battle = 0;
    }
  }
  else {
    info_wrk.alp_battle = info_wrk.alp_battle + 0x1e;
    if (0x80 < (short)info_wrk.alp_battle) {
      info_wrk.alp_battle = 0x80;
    }
  }
  return;
}

void ReqHPDispIn() {
  if ((info_wrk.fade_hpbar == '\0') || (info_wrk.fade_hpbar == '\x03')) {
    info_wrk.time_hpbar = 0;
    info_wrk.fade_hpbar = '\x01';
  }
  return;
}

void ReqHPDispOut() {
  if ((0xb4 < (ushort)info_wrk.time_hpbar) && ((byte)info_wrk.fade_hpbar - 1 < 2)) {
    info_wrk.fade_hpbar = '\x03';
  }
  return;
}

void HPDispInit() {
  info_wrk.time_hpbar = 0;
  info_wrk.alp_hpbar = '\0';
  info_wrk.fade_hpbar = '\0';
  return;
}

void HPDispMain() {
  if (info_wrk.fade_hpbar == '\x01') {
    if (0x7f < info_wrk.alp_hpbar + 0x20) {
      info_wrk.fade_hpbar = '\x02';
      info_wrk.alp_hpbar = 0x80;
      return;
    }
    info_wrk.alp_hpbar = (uchar)(info_wrk.alp_hpbar + 0x20);
    return;
  }
  if ('\x01' < info_wrk.fade_hpbar) {
    if (info_wrk.fade_hpbar == '\x02') {
      info_wrk.time_hpbar = info_wrk.time_hpbar + 1;
      return;
    }
    if (info_wrk.fade_hpbar == '\x03') {
      if ((int)(info_wrk.alp_hpbar - 0x20) < 1) {
        info_wrk.fade_hpbar = '\0';
        info_wrk.alp_hpbar = '\0';
        return;
      }
      info_wrk.alp_hpbar = info_wrk.alp_hpbar + 0xe0;
      return;
    }
  }
  return;
}

void RTFillamentModeOn(int type, int time) {
  RTModeOn__9CFilamentii(&m_plyr_camera.filament,type,time);
  return;
}

void RTFillamentModeOff() {
  RTModeOff__9CFilament(&m_plyr_camera.filament);
  return;
}

void FilamentDrawLock() {
  DrawLock__9CFilament(&m_plyr_camera.filament);
  return;
}

void FilamentDrawUnlock() {
  DrawUnlock__9CFilament(&m_plyr_camera.filament);
  return;
}

void ReqFinderDispIn() {
  if ((info_wrk.fade_finder == '\0') || (info_wrk.fade_finder == '\x03')) {
    info_wrk.fade_finder = '\x01';
  }
  return;
}

void ReqFinderDispOut() {
  if ((byte)info_wrk.fade_finder - 1 < 2) {
    info_wrk.fade_finder = '\x03';
  }
  return;
}

void FinderDispInit() {
  info_wrk.alp_battle = 0;
  info_wrk.alp_finder = '\0';
  info_wrk.fade_finder = '\0';
  info_wrk.sena.flow = 0;
  memset(&info_wrk.cg,0,0x6c);
  return;
}

void FinderDispMain() {
  if (info_wrk.fade_finder == '\x01') {
    if (info_wrk.alp_finder + 0x10 < 0x80) {
      info_wrk.alp_finder = (uchar)(info_wrk.alp_finder + 0x10);
    }
    else {
      info_wrk.fade_finder = '\x02';
      info_wrk.alp_finder = 0x80;
    }
  }
  else if ((('\x01' < info_wrk.fade_finder) && (info_wrk.fade_finder != '\x02')) &&
          (info_wrk.fade_finder == '\x03')) {
    if ((int)(info_wrk.alp_finder - 0x10) < 1) {
      info_wrk.alp_finder = '\0';
      info_wrk.fade_finder = '\0';
      info_wrk.sena.flow = 0;
      memset(&info_wrk.cg,0,0x6c);
    }
    else {
      info_wrk.alp_finder = info_wrk.alp_finder + 0xf0;
    }
  }
  return;
}

void SPChanceMain() {
	SHUTTER_CHANCE_STATE n;
	
  _SHUTTER_CHANCE_STATE _Var1;
  
  _Var1 = ShutterChanceChk__Fv();
  sp_rot1 = sp_rot1 + 10.0;
  if (180.0 < sp_rot1) {
    sp_rot1 = sp_rot1 - 360.0;
  }
  sp_rot2 = sp_rot2 - 12.0;
  if (sp_rot2 < -180.0) {
    sp_rot2 = sp_rot2 + 360.0;
  }
  if (sp_chance_mode != 1) {
    if (1 < sp_chance_mode) {
      if (sp_chance_mode == 2) {
        if (_Var1 != SHUTTER_CHANCE_SP) {
          sp_chance_mode = 3;
          return;
        }
        if (0 < sp_chance_alpha + -0x46) {
          sp_chance_alpha = sp_chance_alpha + -0x46;
          return;
        }
        sp_chance_mode = 1;
        sp_chance_alpha = 0;
        return;
      }
      if (sp_chance_mode != 3) {
        return;
      }
      if (_Var1 == SHUTTER_CHANCE_SP) {
        sp_chance_mode = 1;
        return;
      }
      if (0 < sp_chance_alpha + -5) {
        sp_chance_alpha = sp_chance_alpha + -5;
        return;
      }
      sp_chance_mode = 0;
      sp_chance_alpha = 0;
      return;
    }
    if (sp_chance_mode != 0) {
      return;
    }
    if (_Var1 != SHUTTER_CHANCE_SP) {
      sp_chance_alpha = 0;
      return;
    }
    sp_chance_mode = 1;
  }
  if (_Var1 == SHUTTER_CHANCE_SP) {
    sp_chance_alpha = sp_chance_alpha + 0x46;
    if (0x7f < sp_chance_alpha) {
      sp_chance_alpha = 0x80;
      sp_chance_mode = 2;
    }
  }
  else {
    sp_chance_mode = 3;
  }
  return;
}

void FinderDrawLock() {
  DrawLock__12CNPlyrCamera(&m_plyr_camera);
  return;
}

void FinderDrawUnlock() {
  DrawUnlock__12CNPlyrCamera(&m_plyr_camera);
  return;
}

void ReqFinderFadeIn() {
  FinderIn__12CNPlyrCamera(&m_plyr_camera);
  FreqCameraInit__Fv();
  return;
}

void ReqFinderFadeOut() {
  FinderOut__12CNPlyrCamera(&m_plyr_camera);
  return;
}

void InformationDispInit() {
  memset(&info_wrk,0,0xac);
  HPDispInit__Fv();
  FinderDispInit__Fv();
  finderEneLifeLen__Ff(0.0);
  finder_draw_lock = 0;
  return;
}

void InfoDispPause() {
  info_wrk.disp_pause = '\x01';
  return;
}

void InfoDispRestart() {
  info_wrk.disp_pause = '\0';
  return;
}

int isDispLamp() {
  return 1;
}

void DispChara(int label, u_char ptyp, float x, float y, u_char z, u_char alp, u_char atyp, u_char bln) {
	DISP_SPRT ds;
	float bx;
	float by;
	u_long areg;
	
  ulong uVar1;
  DISP_SPRT ds;
  
  if (ptyp == '\x02') {
    y = (float)n_finder_dat[label].y + y;
    x = (float)n_finder_dat[label].x + x;
  }
  uVar1 = 0x44;
  if (atyp != '\0') {
    uVar1 = 0x48;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + label);
  ds.zbuf = (ulong)(z == '\x06') << 0x20 | 0xa000118;
  ds.x = x;
  ds.y = y;
  ds.alphar = uVar1;
  ds.alpha = alp;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void DispCharaRGB(int label, u_char ptyp, float x, float y, u_char z, u_char r, u_char g, u_char b, u_char alp, u_char atyp, int bln) {
	DISP_SPRT ds;
	float bx;
	float by;
	u_long areg;
	
  ulong uVar1;
  DISP_SPRT ds;
  
  if (ptyp == '\x02') {
    y = (float)n_finder_dat[label].y + y;
    x = (float)n_finder_dat[label].x + x;
  }
  uVar1 = 0x44;
  if (atyp != '\0') {
    uVar1 = 0x48;
  }
  CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + label);
  ds.zbuf = (ulong)(z == '\x06') << 0x20 | 0xa000118;
  ds.x = x;
  ds.y = y;
  ds.alphar = uVar1;
  ds.r = r;
  ds.g = g;
  ds.b = b;
  ds.alpha = alp;
  DispSprD__FP9DISP_SPRT(&ds);
  return;
}

void SetNumerousDisp(SPRT_DAT *sprt, int n, int alpha, int chara_width, int pos_x, int pos_y, float scale, int iZeroDispFigure, int bAddAlphaFlg) {
	int i;
	int dsp_num;
	DISP_SPRT ds;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  DISP_SPRT ds;
  
  fVar7 = (float)pos_y;
  iVar6 = 0;
  do {
    iVar1 = n / 10;
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,sprt + n % 10);
    ds.x = ds.x + (float)pos_x;
    ds.zbuf = 0x10a000118;
    ds.y = ds.y + fVar7;
    if (bAddAlphaFlg != 0) {
      ds.alphar = 0x48;
    }
    pos_x = pos_x - chara_width;
    ds.alpha = (uchar)alpha;
    fVar2 = ds.x;
    fVar3 = ds.y;
    fVar4 = scale;
    fVar5 = scale;
    if (scale == 1.0) {
      fVar2 = ds.csx;
      fVar3 = ds.csy;
      fVar4 = ds.scw;
      fVar5 = ds.sch;
    }
    ds.sch = fVar5;
    ds.scw = fVar4;
    ds.csy = fVar3;
    ds.csx = fVar2;
    iVar6 = iVar6 + 1;
    ds.tex1 = 0x161;
    DispSprD__FP9DISP_SPRT(&ds);
    n = iVar1;
  } while ((iVar1 != 0) || (n = 0, iVar6 < iZeroDispFigure));
  return;
}

void DispPointNumberNew(int number, short int adj_x, short int adj_y, u_char malp) {
	u_char alp;
	int i;
	int m;
	u_int n;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  float x;
  
  if (9999 < number) {
    number = 9999;
  }
  iVar3 = (int)(short)adj_x;
  uVar1 = log_10__FUi(number);
  uVar2 = (uint)info_wrk.alp_finder;
  if (0 < (int)uVar1) {
    do {
      x = (float)iVar3;
      uVar1 = uVar1 - 1;
      iVar3 = iVar3 + -0x12;
      DispChara__FiUcffUcUcUcUc
                (number % 10 + 0x7f,'\x02',x,(float)(int)(short)adj_y,'\x06',
                 (uchar)((int)(malp * uVar2) >> 7),'\0','\x04');
      number = number / 10;
    } while (uVar1 != 0);
  }
  return;
}

void DispCameraCharge(short int pos_x, short int pos_y, int battle_master_alp) {
	u_char ba;
	u_char ba2;
	int i;
	int n;
	CHARGE_GUAGE_ONE *cgop;
	DISP_SPRT ds;
	float radius_rate;
	
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  CHARGE_GUAGE_ONE *pCVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  DISP_SPRT ds;
  uchar ba;
  
  iVar11 = (int)(short)pos_x;
  uVar12 = 0;
  iVar10 = (int)(short)pos_y;
  fVar13 = GetRadiusRate__14CCameraPowerUp(&m_plyr_camera.camera_power_up);
  _ba = 0;
  if (info_wrk.cg.flow == 1) {
    info_wrk.cg.bg_flow = info_wrk.cg.flow;
    info_wrk.cg.flow = 2;
  }
  uVar2 = (uint)plyr_wrk.charge_num;
  if ((uVar2 != info_wrk.cg.old_ch_num) && (uVar2 != 0)) {
    piVar4 = &info_wrk.cg.cgo[0].flow;
    do {
      if (*piVar4 == 0) {
        *piVar4 = 1;
      }
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 2;
    } while (uVar2 != 0);
  }
  if (plyr_wrk.charge_num != '\0') {
    fVar14 = (float)iVar10;
    iVar6 = battle_master_alp * 0x14;
    fVar15 = 224.0;
    iVar9 = 0;
    piVar4 = &n_finder_dat[0x5c].x;
    iVar7 = 0xb80;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,(SPRT_DAT *)((int)&n_finder_dat[0].tex0 + iVar7));
      iVar3 = *piVar4;
      piVar1 = piVar4 + 1;
      piVar4 = piVar4 + 8;
      ds.csx = (float)iVar11 + 320.0;
      ds.x = (float)(iVar3 + iVar11);
      ds.y = (float)(*piVar1 + iVar10);
      ds.csy = fVar14 + fVar15;
      iVar3 = iVar6;
      if (iVar6 < 0) {
        iVar3 = iVar6 + 0x7f;
      }
      ds.alpha = (uchar)(iVar3 >> 7);
      ds.zbuf = 0x10a000118;
      iVar9 = iVar9 + 1;
      ds.tex1 = 0x161;
      iVar7 = iVar7 + 0x20;
      ds.alphar = 0x48;
      ds.scw = fVar13;
      ds.sch = fVar13;
      DispSprD__FP9DISP_SPRT(&ds);
    } while (iVar9 < 0xc);
  }
  iVar6 = 0;
  do {
    pCVar8 = info_wrk.cg.cgo + iVar6;
    iVar7 = info_wrk.cg.cgo[iVar6].flow;
    switch(iVar7) {
    case 0:
      pCVar8->cnt = 0;
      uVar12 = 0;
      _ba = 0;
      break;
    case 1:
      iVar7 = iVar7 + 1;
      pCVar8->cnt = 0;
      info_wrk.cg.cgo[iVar6].flow = iVar7;
    case 2:
      iVar9 = pCVar8->cnt;
      _ba = iVar9 * 0x11 & 0xff;
      pCVar8->cnt = iVar9 + 1;
      uVar12 = (iVar9 * 0x24) / 0xf & 0xff;
      if (0xe < iVar9 + 1) {
LAB_00191a84:
        iVar7 = iVar7 + 1;
        pCVar8->cnt = 0;
        info_wrk.cg.cgo[iVar6].flow = iVar7;
      }
      break;
    case 3:
      iVar9 = pCVar8->cnt;
      pCVar8->cnt = iVar9 + 1;
      _ba = ~((iVar9 * 0xbf) / 0xf) & 0xff;
      uVar12 = 0x24U - (iVar9 * 0x24) / 0xf & 0xff;
      if (iVar9 + 1 < 0xf) break;
      goto LAB_00191a84;
    case 4:
      uVar12 = 0;
      _ba = 0x40;
    }
    iVar5 = iVar6 + 0x5c;
    iVar9 = _ba * battle_master_alp;
    iVar3 = uVar12 * battle_master_alp;
    if (iVar9 < 0) {
      iVar9 = iVar9 + 0x7f;
    }
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7f;
    }
    _ba = iVar9 >> 7 & 0xff;
    uVar12 = iVar3 >> 7 & 0xff;
    if (0 < iVar7) {
      if (_ba != 0) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + iVar5);
        ds.csx = (float)iVar11 + 320.0;
        ds.csy = (float)iVar10 + 224.0;
        ds.x = (float)(n_finder_dat[iVar5].x + iVar11);
        ds.y = (float)(n_finder_dat[iVar5].y + iVar10);
        ds.zbuf = 0x10a000118;
        ds.alphar = 0x48;
        ds.tex1 = 0x161;
        ds.alpha = (uchar)(iVar9 >> 7);
        ds.scw = fVar13;
        ds.sch = fVar13;
        DispSprD__FP9DISP_SPRT(&ds);
        iVar7 = info_wrk.cg.cgo[iVar6].flow;
      }
      if ((0 < iVar7) && (iVar7 = iVar6 + 0x68, uVar12 != 0)) {
        CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,n_finder_dat + iVar7);
        ds.csx = (float)iVar11 + 320.0;
        ds.csy = (float)iVar10 + 224.0;
        ds.x = (float)(n_finder_dat[iVar7].x + iVar11);
        ds.y = (float)(n_finder_dat[iVar7].y + iVar10);
        ds.zbuf = 0x10a000118;
        ds.alphar = 0x48;
        ds.tex1 = 0x161;
        ds.alpha = (uchar)(iVar3 >> 7);
        ds.scw = fVar13;
        ds.sch = fVar13;
        DispSprD__FP9DISP_SPRT(&ds);
      }
    }
    iVar6 = iVar6 + 1;
    if (0xb < iVar6) {
      info_wrk.cg.old_ch_num = plyr_wrk.charge_num;
      return;
    }
  } while( true );
}

void ChargeDispReset() {
  return;
}

void DispCaptureCircleNew(short int pos_x, short int pos_y) {
	u_char a;
	int i;
	float radius_rate;
	DISP_SPRT ds;
	
  int iVar1;
  SPRT_DAT *d;
  float fVar2;
  float fVar3;
  float fVar4;
  DISP_SPRT ds;
  
  fVar2 = GetRadiusRate__14CCameraPowerUp(&m_plyr_camera.camera_power_up);
  fVar4 = 224.0;
  fVar3 = (float)(int)(short)pos_x;
  iVar1 = 3;
  d = n_finder_dat + 0x52;
  do {
    CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,d);
    ds.csx = fVar3 + 320.0;
    ds.csy = (float)(int)(short)pos_y + fVar4;
    iVar1 = iVar1 + -1;
    ds.x = ds.x + fVar3;
    ds.y = ds.y + (float)(int)(short)pos_y;
    d = d + 1;
    ds.r = 0x80;
    ds.g = 0x80;
    ds.b = 0x80;
    ds.test = 0x30003;
    ds.alpha = 0xff;
    ds.scw = fVar2;
    ds.sch = fVar2;
    DispSprD__FP9DISP_SPRT(&ds);
  } while (-1 < iVar1);
  return;
}

void finderTriggerEneLifeDecrease(float new_hp_per) {
  Decrease__8CEneLifef(&m_plyr_camera.ene_life,new_hp_per);
  return;
}

void finderSetEneLifePercentage(float new_hp_per) {
  Set__8CEneLifef(&m_plyr_camera.ene_life,new_hp_per);
  return;
}

void finderEneLifeLen(float len) {
  FrameLenSet__8CEneLifef(&m_plyr_camera.ene_life,len);
  return;
}

void DispFinderMessageMain() {
	int alp;
	DISPFMES *dfp;
	
  int iVar1;
  
  if (info_wrk.dispfmes.flow_num == 2) {
    info_wrk.dispfmes.num_alp = 0x80;
    info_wrk.dispfmes.cnt_num = info_wrk.dispfmes.cnt_num + 1;
    if (7 < info_wrk.dispfmes.cnt_num) {
      info_wrk.dispfmes.cnt_num = 0;
      info_wrk.dispfmes.flow_num = 3;
    }
  }
  else {
    if (info_wrk.dispfmes.flow_num < 3) {
      if (info_wrk.dispfmes.flow_num == 1) {
        iVar1 = info_wrk.dispfmes.cnt_num << 7;
        info_wrk.dispfmes.cnt_num = info_wrk.dispfmes.cnt_num + 1;
        info_wrk.dispfmes.num_alp = iVar1 / 0x14;
        if (0x13 < info_wrk.dispfmes.cnt_num) {
          info_wrk.dispfmes.flow_num = 2;
          info_wrk.dispfmes.num_alp = 0x80;
          info_wrk.dispfmes.cnt_num = 0;
        }
        goto LAB_00191fa4;
      }
    }
    else if (info_wrk.dispfmes.flow_num == 3) {
      iVar1 = info_wrk.dispfmes.cnt_num << 7;
      info_wrk.dispfmes.cnt_num = info_wrk.dispfmes.cnt_num + 1;
      info_wrk.dispfmes.num_alp = 0x80 - iVar1 / 0x14;
      if (0x13 < info_wrk.dispfmes.cnt_num) {
        info_wrk.dispfmes.cnt_num = 0;
        info_wrk.dispfmes.num_alp = 0;
        info_wrk.dispfmes.flow_num = 0;
      }
      goto LAB_00191fa4;
    }
    info_wrk.dispfmes.cnt_num = 0;
    info_wrk.dispfmes.num_alp = 0;
  }
LAB_00191fa4:
  if (info_wrk.dispfmes.flow_sp == 2) {
    iVar1 = info_wrk.dispfmes.cnt_sp << 7;
    if (info_wrk.dispfmes.cnt_sp + 1 < 0x14) {
      info_wrk.dispfmes.cnt_sp = info_wrk.dispfmes.cnt_sp + 1;
      info_wrk.dispfmes.mes_alp = iVar1 / 0x14;
      return;
    }
    info_wrk.dispfmes.flow_sp = 3;
    info_wrk.dispfmes.cnt_sp = 0;
    info_wrk.dispfmes.mes_alp = 0x80;
    return;
  }
  if (info_wrk.dispfmes.flow_sp < 3) {
    if (info_wrk.dispfmes.flow_sp == 1) {
      if (0 < info_wrk.dispfmes.cnt_sp + -1) {
        info_wrk.dispfmes.cnt_sp = info_wrk.dispfmes.cnt_sp + -1;
        info_wrk.dispfmes.mes_alp = 0;
        return;
      }
      info_wrk.dispfmes.flow_sp = 2;
      info_wrk.dispfmes.cnt_sp = 0;
      info_wrk.dispfmes.mes_alp = 0;
      return;
    }
  }
  else {
    if (info_wrk.dispfmes.flow_sp == 3) {
      if (info_wrk.dispfmes.cnt_sp + 1 < 8) {
        info_wrk.dispfmes.cnt_sp = info_wrk.dispfmes.cnt_sp + 1;
        info_wrk.dispfmes.mes_alp = 0x80;
        return;
      }
      info_wrk.dispfmes.flow_sp = 4;
      info_wrk.dispfmes.cnt_sp = 0;
      info_wrk.dispfmes.mes_alp = 0x80;
      return;
    }
    if (info_wrk.dispfmes.flow_sp == 4) {
      iVar1 = info_wrk.dispfmes.cnt_sp << 7;
      if (info_wrk.dispfmes.cnt_sp + 1 < 0x14) {
        info_wrk.dispfmes.cnt_sp = info_wrk.dispfmes.cnt_sp + 1;
        info_wrk.dispfmes.mes_alp = 0x80 - iVar1 / 0x14;
        return;
      }
      info_wrk.dispfmes.flow_sp = 0;
      info_wrk.dispfmes.cnt_sp = 0;
      info_wrk.dispfmes.mes_alp = 0;
      return;
    }
  }
  info_wrk.dispfmes.cnt_sp = 0;
  info_wrk.dispfmes.mes_alp = 0;
  return;
}

void PutSpriteYW(u_short top_label, u_short end_label, float pos_x, float pos_y, float rot, int rgb, float alp, float scl_x, float scl_y, u_char scl_mode, int pri, u_char by, u_char blnd, u_char z_sw) {
	int i;
	float rot_px;
	float rot_py;
	float scl_px;
	float scl_py;
	DISP_SPRT ds;
	
  int iVar1;
  uint uVar2;
  SPRT_DAT *d;
  DISP_SPRT ds;
  
  uVar2 = (uint)(ushort)top_label;
  if (uVar2 <= (ushort)end_label) {
    d = n_finder_dat + (ushort)top_label;
    do {
      CopySprDToSpr__FP9DISP_SPRTP8SPRT_DAT(&ds,d);
      ds.x = ds.x + pos_x;
      ds.y = ds.y + pos_y;
      if (blnd == '\0') {
        iVar1 = 0x44;
      }
      else {
        iVar1 = 0x48;
      }
      ds.alphar = (ulong)iVar1;
      ds.alpha = (uchar)(int)alp;
      if (2.147484e+09 <= alp) {
        ds.alpha = (uchar)(int)(alp - 2.147484e+09);
      }
      ds.crx = ds.x + (float)(ds.w >> 1);
      ds.cry = ds.y + (float)(ds.h >> 1);
      if (scl_mode == '\0') {
        ds.csx = ds.x + (float)(ds.w >> 1);
        ds.csy = ds.y + (float)(ds.h >> 1);
      }
      else {
        ds.csx = (float)n_finder_dat[(ushort)top_label].x;
        ds.csy = (float)n_finder_dat[(ushort)top_label].y;
      }
      if (pri != 0xff) {
        ds.z = 0xfffff - (pri & 0xfffffU);
        ds.pri = pri;
      }
      if (z_sw != '\0') {
        ds.zbuf = 0x10a000118;
      }
      uVar2 = uVar2 + 1;
      ds.scw = scl_x;
      ds.sch = scl_y;
      ds.rot = rot;
      ds.tex1 = (ulong)by << 5 | 0x141;
      ds.r = (uchar)((uint)rgb >> 0x10);
      ds.g = (uchar)((uint)rgb >> 8);
      ds.b = (uchar)rgb;
      DispSprD__FP9DISP_SPRT(&ds);
      d = d + 1;
    } while ((int)uVar2 <= (int)(uint)(ushort)end_label);
  }
  return;
}

void SD1toSD2(SPRT_DAT *sd, SPRT_DAT2 *sd2) {
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = sd->w;
  iVar7 = sd->x;
  uVar2 = sd->u;
  iVar8 = sd->y;
  uVar3 = sd->v;
  uVar4 = sd->h;
  iVar5 = sd->pri;
  uVar6 = sd->tex0;
  sd2->u1 = (float)(uint)uVar2;
  sd2->tex0 = uVar6;
  sd2->v1 = (float)(uint)uVar3;
  sd2->u2 = (float)((uint)uVar2 + (uint)uVar1);
  sd2->v2 = (float)((uint)uVar3 + (uint)uVar4);
  sd2->w = (float)(uint)uVar1;
  sd2->h = (float)(uint)uVar4;
  sd2->x = (float)iVar7;
  sd2->y = (float)iVar8;
  sd2->pri = iVar5;
  sd2->alpha = sd->alpha;
  return;
}

void FinderBankSetup() {
  finder_sound_bank_id = SndBankNew(0xcfb,0xcfa,-1);
  return;
}

int FinderBankIsReady() {
  int iVar1;
  
  iVar1 = SndBankIsReady(finder_sound_bank_id);
  return iVar1;
}

int FinderBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d, int vol, int pitch) {
  int iVar1;
  
  iVar1 = SndBankPlay(finder_sound_bank_id,no,effect,loop,vol,pitch,fade_time,s3d);
  return iVar1;
}

void FinderBankRelease() {
  SndBankRelease(finder_sound_bank_id);
  finder_sound_bank_id = -1;
  return;
}

int FinderBankIsLoopSnd(int no) {
  int iVar1;
  
  iVar1 = SndBankIsLoopSnd(finder_sound_bank_id,no);
  return iVar1;
}
