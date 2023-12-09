// STATUS: NOT STARTED

#include "photo.h"

struct PHOTO_WRK {
	int mode;
	u_int sta;
	u_char adr_no;
	u_char cnt;
	unsigned char furn_flg : 1;
	unsigned char bGradual : 1;
	unsigned char b3DDraw : 1;
	unsigned char bRareEne : 1;
};

struct fixed_array_base<_HINT_PHOTO_REQ,5,_HINT_PHOTO_REQ[5]> {
protected:
	HINT_PHOTO_REQ m_aData[5];
	
public:
	fixed_array_base<_HINT_PHOTO_REQ,5,_HINT_PHOTO_REQ[5]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	HINT_PHOTO_REQ& operator[]();
	HINT_PHOTO_REQ& operator[]();
	HINT_PHOTO_REQ* data();
	HINT_PHOTO_REQ* begin();
	HINT_PHOTO_REQ* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<_HINT_PHOTO_REQ,5> : fixed_array_base<_HINT_PHOTO_REQ,5,_HINT_PHOTO_REQ[5]> {
};

PFILE_WRK pfile_wrk = {
	/* .pic_num = */ 0,
	/* .protect_num = */ 0,
	/* .sort_key = */ 0,
	/* .skey_bak = */ 0,
	/* .pic = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [1] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [2] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [3] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [4] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [5] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [6] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [7] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [8] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [9] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [10] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [11] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [12] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [13] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [14] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				},
				/* [15] = */ {
					/* .adr_no = */ 0,
					/* .chp_no = */ 0,
					/* .status = */ 0,
					/* .maSubject = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [1] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								},
								/* [2] = */ {
									/* .type = */ 0,
									/* .obj_no = */ 0
								}
							}
						}
					},
					/* .score = */ 0,
					/* .time = */ {
						/* .stat = */ 0,
						/* .second = */ 0,
						/* .minute = */ 0,
						/* .hour = */ 0,
						/* .pad = */ 0,
						/* .day = */ 0,
						/* .month = */ 0,
						/* .year = */ 0
					},
					/* .room = */ 0
				}
			}
		}
	},
	/* .padding = */ 0
};

static fixed_array<_HINT_PHOTO_REQ,5> hint_photo_req;
unsigned char _HINT_PHOTO_REQ type_info node[8];
unsigned char PICTURE_WRK type_info node[8];
unsigned char _PICTURE_SUBJECT type_info node[8];
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

static SPRT_DAT mayu_pk2_dat = {
	/* .tex0 = */ 2307760583886386304,
	/* .u = */ 0,
	/* .v = */ 0,
	/* .w = */ 388,
	/* .h = */ 256,
	/* .x = */ 0,
	/* .y = */ 0,
	/* .pri = */ 0,
	/* .alpha = */ 50,
	/* .flip = */ 0,
	/* .bln = */ 0
};

static SPRT_DAT kusabi_pk2_dat = {
	/* .tex0 = */ 2307694610906920064,
	/* .u = */ 0,
	/* .v = */ 0,
	/* .w = */ 128,
	/* .h = */ 64,
	/* .x = */ 0,
	/* .y = */ 0,
	/* .pri = */ 0,
	/* .alpha = */ 80,
	/* .flip = */ 0,
	/* .bln = */ 0
};

static SPRT_DAT hint_dat_one = {
	/* .tex0 = */ 2307760583886353536,
	/* .u = */ 0,
	/* .v = */ 0,
	/* .w = */ 384,
	/* .h = */ 256,
	/* .x = */ 0,
	/* .y = */ 0,
	/* .pri = */ 0,
	/* .alpha = */ 150,
	/* .flip = */ 0,
	/* .bln = */ 0
};

PHOTO_WRK photo_wrk = {
	/* .mode = */ 0,
	/* .sta = */ 0,
	/* .adr_no = */ 0,
	/* .cnt = */ 0,
	/* .furn_flg = */ BITFIELD,
	/* .bGradual = */ BITFIELD,
	/* .b3DDraw = */ BITFIELD,
	/* .bRareEne = */ BITFIELD
};

static int name_msg_type;
static int name_msg_name;
static int hint_reqs_cnt;
static int hint_req_no;
static void *photo_tmp_adrs;
static int photo_special_tex_file_no;
static int hint_mes_type;
static int hint_mes_no;
static SPRT_DAT *p_hint_dat;
static float rare_ene_pos[4];
static int unlock_ghost;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c2c30;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3f3780,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3f3788,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf16_PICTURE_SUBJECT(0x3c2c78,_max);
  }
  return (uint **)0x0;
}

void PhotoWrkPreInit() {
  uint uVar1;
  
  photo_wrk.sta = 0;
  uVar1 = photo_wrk._8_4_ & 0xfff6ffff;
  photo_wrk.adr_no = (char)uVar1;
  photo_wrk.cnt = (char)(uVar1 >> 8);
  photo_wrk._10_2_ = (short)(uVar1 >> 0x10);
  return;
}

void PhotoWrkInit(PHOTO_WRK_DEF *pDef) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 80,
		/* [1] = */ 104,
		/* [2] = */ 111,
		/* [3] = */ 116,
		/* [4] = */ 111,
		/* [5] = */ 87,
		/* [6] = */ 114,
		/* [7] = */ 107,
		/* [8] = */ 73,
		/* [9] = */ 110,
		/* [10] = */ 105,
		/* [11] = */ 116,
		/* [12] = */ 0
	};
	int i;
	
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  _HINT_PHOTO_REQ *p_Var4;
  int iVar5;
  fixed_array<_HINT_PHOTO_REQ,5> *pfVar6;
  
  if (pDef->type + ~PHOTO_TYPE_RARE < 2) {
    hint_reqs_cnt = 0;
    photo_wrk._8_4_ = photo_wrk._8_4_ & 0xfffdffff;
    if (pDef->type == PHOTO_TYPE_INVALID) {
      iVar3 = GetRandValI__Fi(4);
      photo_special_tex_file_no = iVar3 + 0x116c;
      hint_mes_no = 3;
      hint_mes_type = 0x2a;
      p_hint_dat = &kusabi_pk2_dat;
    }
    else {
      photo_special_tex_file_no = 0x1a;
      hint_mes_type = -1;
      p_hint_dat = &mayu_pk2_dat;
      hint_mes_no = 0;
    }
  }
  else {
    if (5 < pDef->hint_cnt) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("hint_req_cnt > HINT_PHOTO_REQ_MAX");
    }
    photo_special_tex_file_no = -1;
    photo_wrk._8_4_ = photo_wrk._8_4_ | 0x20000;
    p_hint_dat = (SPRT_DAT *)0x0;
    hint_reqs_cnt = pDef->hint_cnt;
    if (0 < hint_reqs_cnt) {
      p_Var4 = pDef->hint_pict;
      pfVar6 = &hint_photo_req;
      iVar3 = 0;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        iVar5 = iVar3 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z15_HINT_PHOTO_REQ_UiUi_PX01(iVar3,5);
        piVar2 = &p_Var4->no;
                    /* end of inlined section */
        p_Var4 = p_Var4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        ((_HINT_PHOTO_REQ *)pfVar6)->no = *piVar2;
                    /* end of inlined section */
        pfVar6 = (fixed_array<_HINT_PHOTO_REQ,5> *)((int)pfVar6 + 4);
        iVar3 = iVar5;
      } while (iVar5 < pDef->hint_cnt);
    }
    if (pDef->type == PHOTO_TYPE_RARE) {
      photo_wrk._8_4_ = photo_wrk._8_4_ | 0x80000;
      sceVu0CopyVector(0x4bbb30,pDef);
    }
    else if (pDef->type == PHOTO_TYPE_HINT3D) {
      photo_wrk.sta = photo_wrk.sta | 0x10;
    }
  }
  photo_wrk.mode = 0;
  uVar1 = SUB42(photo_wrk._8_4_,2);
  photo_wrk._8_2_ = CONCAT11('\x01',photo_wrk.adr_no);
  photo_wrk._8_4_ = CONCAT22(uVar1,photo_wrk._8_2_) | 0x40000;
  SetDebugMenuSwitch__Fi(0);
  photo_wrk.adr_no = *(uchar *)&pDef->adr_no;
  name_msg_type = pDef->msg_type;
  name_msg_name = pDef->msg_name;
  unlock_ghost = pDef->unlock_ghost;
  photo_tmp_adrs = (void *)0x0;
  hint_req_no = 0;
  return;
}

int PhotoMain() {
	int ret;
	
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  switch(photo_wrk.mode) {
  case 0:
    PicturePre1__Fv();
    iVar2 = 0;
    break;
  case 1:
    PictureInitSub__Fv();
    iVar2 = 0;
    break;
  case 2:
    PicturePre3__Fv();
    photo_wrk.mode = 3;
    break;
  case 3:
    PicturePre4__Fv();
    iVar2 = 0;
    break;
  case 4:
    EffectPhotoPhase__Fv();
    iVar1 = FileLoadIsEnd2(photo_special_tex_file_no,photo_tmp_adrs);
    if (iVar1 != 0) {
      photo_wrk.mode = 2;
    }
    break;
  case 5:
    PictureDisp__Fv();
    iVar2 = 0;
    break;
  case 6:
    PictureHint1__Fv();
    iVar2 = 0;
    break;
  case 7:
    PictureHint2__Fv();
    iVar2 = 0;
    break;
  case 8:
    PictureHint3__Fv();
    iVar2 = 0;
    break;
  case 9:
    PictureToUnlockGhost__Fv();
    iVar2 = 0;
    break;
  case 10:
    PictureUnlockGhost__Fv();
    iVar2 = 0;
    break;
  case 0xb:
    PictureCapture__Fv();
    iVar2 = 0;
    break;
  case 0xc:
    iVar2 = PictureEnd__Fv();
  }
  return iVar2;
}

void InitPhotoWrk() {
	int i;
	
  int iVar1;
  fixed_array<PICTURE_WRK,16> *pfVar2;
  
  pfVar2 = &pfile_wrk.pic;
  memset(&photo_wrk,0,0xc);
  iVar1 = 0;
  memset(&pfile_wrk,0,0x208);
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar1,0x10);
    (pfVar2->field0_0x0).m_aData[0].adr_no = (uchar)iVar1;
                    /* end of inlined section */
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<PICTURE_WRK,16> *)((pfVar2->field0_0x0).m_aData + 1);
  } while (iVar1 < 0x10);
  return;
}

void PicturePre1() {
	int spno;
	
  int iVar1;
  uint size;
  
  iVar1 = hint_req_no;
  if (hint_req_no < hint_reqs_cnt) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z15_HINT_PHOTO_REQ_UiUi_PX01(hint_req_no,5);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar1 = hint_photo_req.field0_0x0.m_aData[iVar1].no;
                    /* end of inlined section */
    hint_req_no = hint_req_no + 1;
    if ((photo_wrk.sta & 0x10) == 0) {
      if (photo_tmp_adrs != (void *)0x0) {
        mem_utilFreeMem__FPv(photo_tmp_adrs);
      }
      photo_special_tex_file_no = (int)(short)photo_dat[iVar1].image;
    }
    p_hint_dat = &hint_dat_one;
    hint_mes_type = (int)(short)photo_dat[iVar1].mestype;
    hint_mes_no = (int)(short)photo_dat[iVar1].mesnuma;
  }
  if (photo_special_tex_file_no < 0) {
    photo_wrk.mode = 1;
  }
  else {
    size = GetFileSize(photo_special_tex_file_no);
    photo_tmp_adrs = mem_utilGetMem__Fi(size);
    LoadReq__FiUi(photo_special_tex_file_no,(uint)photo_tmp_adrs);
    photo_wrk.mode = 4;
    photo_wrk.sta = photo_wrk.sta | 2;
  }
  EffectPhotoPhase__Fv();
  return;
}

static void photoLock3D() {
  uint uVar1;
  
  FinderDrawLock__Fv();
  EffWrkStopFlgSet__Fi(1);
  PlayerDrawLock__Fv();
  EnemyDrawLock__Fv();
  SisterDrawLock__Fv();
  MhCtlDrawLock__Fv();
  uVar1 = photo_wrk._8_4_ & 0xfffbffff;
  photo_wrk.adr_no = (char)uVar1;
  photo_wrk.cnt = (char)(uVar1 >> 8);
  photo_wrk._10_2_ = (short)(uVar1 >> 0x10);
  return;
}

void PictureInitSub() {
  int time;
  
  if ((photo_wrk.sta & 0x10) == 0) {
    photoLock3D__Fv();
    photo_wrk.cnt = '\x14';
    if ((plyr_wrk.cmn_wrk.st.sta & 0x20) == 0) {
      photo_wrk.cnt = '<';
    }
    EffectPhotoPhase__Fv();
    LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
    time = 0x13;
    if ((plyr_wrk.cmn_wrk.st.sta & 0x20) == 0) {
      time = 0x3b;
    }
    SetWhiteIn2__Fi(time);
    photo_wrk.mode = 3;
  }
  else {
    EffectPhotoPhase__Fv();
    DrawSpecialFurnPhoto__Fff(128.0,96.0);
    SetSpecialFurn__Fi(1);
    photo_wrk.mode = 2;
  }
  return;
}

void PicturePre3() {
  int time;
  
  photoLock3D__Fv();
  photo_wrk.cnt = '\x14';
  if ((plyr_wrk.cmn_wrk.st.sta & 0x20) == 0) {
    photo_wrk.cnt = '<';
  }
  EffectPhotoPhase__Fv();
  LocalCopyLtoL__Fiii(3,(int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  LocalCopyLtoL__Fiii(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),
                      (int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20));
  time = 0x13;
  if ((plyr_wrk.cmn_wrk.st.sta & 0x20) == 0) {
    time = 0x3b;
  }
  SetWhiteIn2__Fi(time);
  return;
}

void PicturePre4() {
  if ((photo_wrk._8_4_ & 0x80000) == 0) {
    DispPhotoFrame1__Fiffi(0,128.0,128.0,100);
  }
  else {
    DispPhotoFrame1__Fiffi(0,128.0,96.0,3);
  }
  photo_wrk.mode = 5;
  DrawPhotoFrame__Fff(128.0,96.0);
  return;
}

void PictureDisp() {
  bool bVar1;
  
  if ((photo_wrk._8_4_ & 0x80000) == 0) {
    DispPhotoFrame1__Fiffi(1,128.0,96.0,100);
  }
  else {
    DispPhotoFrame1__Fiffi(1,128.0,96.0,3);
  }
  if ((photo_wrk.sta & 0x12) == 0) {
    DispPhotoName__Fv();
  }
  else {
  }
  bVar1 = photo_wrk.cnt == '\0';
  photo_wrk._8_2_ = CONCAT11(photo_wrk.cnt + 0xff,photo_wrk.adr_no);
  if (bVar1) {
    if ((p_hint_dat == &mayu_pk2_dat) || (p_hint_dat == &kusabi_pk2_dat)) {
      photo_wrk.sta = photo_wrk.sta & 0xfffffffd;
      photo_wrk._8_2_ = CONCAT11('2',photo_wrk.adr_no);
      photo_wrk.mode = 6;
    }
    else if ((photo_wrk.sta & 0x12) == 0) {
      photo_wrk.mode = 0xb;
    }
    else {
      photo_wrk.mode = 6;
      photo_wrk._8_2_ = CONCAT11('2',photo_wrk.adr_no);
      FinderBankPlay__FiiiiP11_SND_3D_SETii(8,1,1,0,(_SND_3D_SET *)0x0,0x3200,0x1000);
      photo_wrk.sta = photo_wrk.sta & 0xfffffffd;
    }
  }
  DrawPhotoFrame__Fff(128.0,96.0);
  return;
}

void PictureHint1() {
  bool bVar1;
  
  if ((photo_wrk.sta & 0x10) == 0) {
    if ((photo_wrk._8_4_ & 0x80000) == 0) {
      DispPhotoFrame1__Fiffi(2,128.0,96.0,((uint)photo_wrk._8_4_ >> 8 & 0xff) << 1);
    }
    else {
      DispPhotoFrame1__Fiffi(2,128.0,96.0,3);
    }
    if (p_hint_dat != (SPRT_DAT *)0x0) {
      DrawPhotoFilterPK2__FUiffPC8SPRT_DATiPvi
                (0,128.0,96.0,p_hint_dat,(uint)photo_wrk._8_4_ >> 8 & 0xff,photo_tmp_adrs,
                 (uint)photo_wrk._8_4_ >> 0x11 & 1);
    }
  }
  else {
    DispPhotoFrame1__Fiffi(2,128.0,96.0,100);
  }
  bVar1 = photo_wrk.cnt == '\0';
  photo_wrk.cnt = photo_wrk.cnt + 0xff;
  if (bVar1) {
    photo_wrk.mode = 7;
    photo_wrk.cnt = '2';
  }
  photo_wrk.adr_no = (uchar)photo_wrk._8_2_;
  photo_wrk.cnt = SUB21(photo_wrk._8_2_,1);
  DrawPhotoFrame__Fff(128.0,96.0);
  return;
}

void PictureHint2() {
	int n;
	int ret;
	
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if ((photo_wrk.sta & 0x10) == 0) {
    if ((photo_wrk._8_4_ & 0x80000) == 0) {
      DispPhotoFrame1__Fiffi(2,128.0,96.0,0);
    }
    else {
      DispPhotoFrame1__Fiffi(2,128.0,96.0,3);
    }
    if (p_hint_dat != (SPRT_DAT *)0x0) {
      DrawPhotoFilterPK2__FUiffPC8SPRT_DATiPvi
                (1,128.0,96.0,p_hint_dat,(uint)photo_wrk._8_4_ >> 8 & 0xff,photo_tmp_adrs,
                 (uint)photo_wrk._8_4_ >> 0x11 & 1);
    }
  }
  else {
    DispPhotoFrame1__Fiffi(2,128.0,96.0,100);
  }
  DrawPhotoFrame__Fff(128.0,96.0);
  if (hint_mes_type < 0) {
    bVar1 = photo_wrk.cnt == '\0';
    photo_wrk.cnt = photo_wrk.cnt + 0xff;
    if (bVar1) {
      photo_wrk.cnt = '2';
    }
    photo_wrk.adr_no = (uchar)photo_wrk._8_2_;
    photo_wrk.cnt = SUB21(photo_wrk._8_2_,1);
    DispPhotoName__Fv();
  }
  else {
    PrintMsgDef_W__Fii(hint_mes_type,hint_mes_no);
    iVar2 = MesStatusCheck__Fv();
    if (iVar2 == 0) {
      photo_wrk._8_2_ = CONCAT11('2',photo_wrk.adr_no);
      bVar1 = true;
    }
    else if ((iVar2 == 1) && (*paddat[3] == 1)) {
      MesSetNextPage__Fv();
    }
  }
  if (((bVar1) && (photo_wrk.mode = 0xb, (photo_wrk.sta & 0x10) == 0)) &&
     (photo_wrk.mode = 0xb, (photo_wrk._8_4_ & 0x80000) == 0)) {
    photo_wrk.mode = 8;
  }
  return;
}

void PictureToUnlockGhost() {
  bool bVar1;
  
  DispPhotoFrame1__Fiffi(3,128.0,96.0,100);
  bVar1 = photo_wrk.cnt == '\0';
  photo_wrk.cnt = photo_wrk.cnt + 0xff;
  if (bVar1) {
    photo_wrk.mode = 10;
    photo_wrk.cnt = '2';
    DoorSealDisappearReq__Fv();
    photo_datObjSealGhostDrawLock__Fv();
    return;
  }
  return;
}

void PictureUnlockGhost() {
  int iVar1;
  
  DoorSealDisappearDraw__Fv();
  iVar1 = DoorSealDisappearIsEnd__Fv();
  if (iVar1 != 0) {
    DoorSealDisappearEndProc__Fv();
    photo_wrk.mode = 0xc;
    photo_wrk.cnt = '\n';
    MhCtlDrawLock__Fv();
    SetDebugMenuSwitch__Fi(1);
  }
  return;
}

void PictureHint3() {
  bool bVar1;
  
  if ((photo_wrk.sta & 0x10) == 0) {
    if ((photo_wrk._8_4_ & 0x80000) == 0) {
      DispPhotoFrame1__Fiffi(2,128.0,96.0,((uint)photo_wrk._8_4_ >> 8 & 0xff) * -2 + 100);
    }
    else {
      DispPhotoFrame1__Fiffi(2,128.0,96.0,3);
    }
    if (p_hint_dat != (SPRT_DAT *)0x0) {
      DrawPhotoFilterPK2__FUiffPC8SPRT_DATiPvi
                (2,128.0,96.0,p_hint_dat,(uint)photo_wrk._8_4_ >> 8 & 0xff,photo_tmp_adrs,
                 (uint)photo_wrk._8_4_ >> 0x11 & 1);
    }
  }
  else {
    DispPhotoFrame1__Fiffi(2,128.0,96.0,100);
  }
  DrawPhotoFrame__Fff(128.0,96.0);
  bVar1 = photo_wrk.cnt == '\0';
  photo_wrk._8_2_ = CONCAT11(photo_wrk.cnt + 0xff,photo_wrk.adr_no);
  if (bVar1) {
    photo_wrk.mode = 0xb;
  }
  return;
}

void PictureCapture() {
  uint uVar1;
  
  LocalCopyLtoL__Fiii(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),
                      (int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20));
  LocalCopyLtoL__Fiii(5,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),0x2bc0);
  CopyScreenToBuffer2__Fiiiiiii(0x2bc0,0x1e79b00,0,0x80,0x60,0x180,0x80);
  CompPhotoFromWorkArea__Fi((uint)photo_wrk.adr_no);
  uVar1 = (uint)photo_wrk.adr_no;
  MakeSmallPhotoV__Fff(128.0,96.0);
  CopyScreenToBuffer2__Fiiiiiii(0x2bc0,uVar1 * 0x1000 + 0x19a9b00,0,0,0,0x2d,0xf);
  LocalCopyLtoL__Fiii(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),
                      (int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20));
  LocalCopyLtoB__Fiii(0,0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20));
  if (unlock_ghost != 0) {
    photo_wrk.mode = 9;
    photo_wrk.cnt = '\n';
    MhCtlDrawUnlock__Fv();
    return;
  }
  photo_wrk.mode = 0xc;
  photo_wrk.cnt = '\n';
  SetDebugMenuSwitch__Fi(1);
  return;
}

static int PictureEnd() {
	int ret;
	int i;
	
  bool bVar1;
  int *piVar2;
  fixed_array<_HINT_PHOTO_REQ,5> *pfVar3;
  int iVar4;
  int iVar5;
  
  if (photo_wrk.cnt == '\n') {
    LocalCopyLtoL__Fiii(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),
                        (int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20));
    PlayerDrawUnlock__Fv();
    SisterDrawUnlock__Fv();
    EnemyDrawUnlock__Fv();
    EnemyAnimLock__Fv();
    FinderDrawUnlock__Fv();
    MhCtlDrawUnlock__Fv();
    photo_wrk._8_4_ = photo_wrk._8_4_ | 0x40000;
    SetSpecialFurn__Fi(0);
    ReqNoiseReset__12CNPlyrCamera(&m_plyr_camera);
    if (0 < hint_reqs_cnt) {
      pfVar3 = &hint_photo_req;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar5 = 0;
      do {
        iVar4 = iVar5 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z15_HINT_PHOTO_REQ_UiUi_PX01(iVar5,5);
        piVar2 = &((_HINT_PHOTO_REQ *)pfVar3)->no;
        pfVar3 = (fixed_array<_HINT_PHOTO_REQ,5> *)((int)pfVar3 + 4);
        photo_datFlgUp__Fi(*piVar2);
                    /* end of inlined section */
        iVar5 = iVar4;
      } while (iVar4 < hint_reqs_cnt);
    }
    EffWrkStopFlgSet__Fi(0);
  }
  else {
    DispPhotoFrame1__Fiffi(3,128.0,96.0,100);
  }
  Main__12CNPlyrCamera(&m_plyr_camera);
  EnemyPhotoMain__Fv();
  bVar1 = photo_wrk.cnt == '\0';
  photo_wrk._8_2_ = CONCAT11(photo_wrk.cnt + 0xff,photo_wrk.adr_no);
  if (bVar1) {
    EnemyAnimUnlock__Fv();
  }
  return (uint)bVar1;
}

int GetSavePhotoNo() {
	int i;
	u_char adr_no;
	u_char get_save_pos;
	
  bool bVar1;
  int iVar2;
  fixed_array<PICTURE_WRK,16> *pfVar3;
  uint uVar4;
  
  iVar2 = 0;
  pfVar3 = &pfile_wrk.pic;
  bVar1 = false;
  uVar4 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
    if ((pfVar3->field0_0x0).m_aData[0].status == '\0') {
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
      uVar4 = (uint)(pfVar3->field0_0x0).m_aData[0].adr_no;
      bVar1 = true;
                    /* end of inlined section */
      break;
    }
    iVar2 = iVar2 + 1;
    pfVar3 = (fixed_array<PICTURE_WRK,16> *)((pfVar3->field0_0x0).m_aData + 1);
  } while (iVar2 < 0x10);
  if (!bVar1) {
    iVar2 = 0;
    pfVar3 = &pfile_wrk.pic;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
      if ((((pfVar3->field0_0x0).m_aData[0].status & 2) == 0) &&
         (_fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10),
         ((pfVar3->field0_0x0).m_aData[0].status & 1) != 0)) {
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
        uVar4 = (uint)(pfVar3->field0_0x0).m_aData[0].adr_no;
        bVar1 = true;
                    /* end of inlined section */
        break;
      }
      iVar2 = iVar2 + 1;
      pfVar3 = (fixed_array<PICTURE_WRK,16> *)((pfVar3->field0_0x0).m_aData + 1);
    } while (iVar2 < 0xf);
    if (!bVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(0xf,0x10);
      uVar4 = (uint)pfile_wrk.pic.field0_0x0.m_aData[15].adr_no;
                    /* end of inlined section */
    }
  }
  return uVar4;
}

int AddPhotoData(int adr_no, int score, int room_no, int chapter_no, sceCdCLOCK rtc, SUBJECT_WRK *obj, int obj_num) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 65,
		/* [1] = */ 100,
		/* [2] = */ 100,
		/* [3] = */ 80,
		/* [4] = */ 104,
		/* [5] = */ 111,
		/* [6] = */ 116,
		/* [7] = */ 111,
		/* [8] = */ 68,
		/* [9] = */ 97,
		/* [10] = */ 116,
		/* [11] = */ 97,
		/* [12] = */ 0
	};
	int i;
	int number;
	PICTURE_WRK *pic;
	
  short *psVar1;
  ulong *puVar2;
  bool bVar3;
  fixed_array_base<PICTURE_WRK,16,PICTURE_WRK[16]> *pfVar4;
  uint uVar5;
  PICTURE_WRK *__s;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  fixed_array<PICTURE_WRK,16> *pfVar12;
  ushort *puVar13;
  uint uVar14;
  
  if (pfile_wrk.pic_num + 1 < 0x11) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    uVar5 = (uint)pfile_wrk.pic_num;
    uVar14 = (uint)pfile_wrk.pic_num;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar10 = uVar14 * 0x20;
    pfile_wrk.pic_num = pfile_wrk.pic_num + '\x01';
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar5,0x10);
    uVar9 = 0;
    iVar7 = iVar10;
    uVar8 = uVar5;
    if ((pfile_wrk.pic.field0_0x0.m_aData[uVar14].status & 1) != 0) {
      for (; iVar7 = iVar10, uVar8 = uVar5, (int)uVar9 < 0x10; uVar9 = uVar9 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar9,0x10);
        iVar7 = uVar9 * 0x20;
        uVar8 = uVar9;
        if (pfile_wrk.pic.field0_0x0.m_aData[uVar9].status == '\0') break;
      }
    }
  }
  else {
    pfVar12 = &pfile_wrk.pic;
    iVar7 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    do {
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar7,0x10);
      pfVar4 = &pfVar12->field0_0x0;
                    /* end of inlined section */
      pfVar12 = (fixed_array<PICTURE_WRK,16> *)((pfVar12->field0_0x0).m_aData + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      __s = pfile_wrk.pic.field0_0x0.m_aData + iVar7;
      if ((uint)pfVar4->m_aData[0].adr_no == adr_no) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar7,0x10);
        memset(__s,0,0x20);
        _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar7,0x10);
        __s->adr_no = (uchar)adr_no;
                    /* end of inlined section */
        SortPhotoData_Before__FP9PFILE_WRK(&pfile_wrk);
        bVar3 = iVar7 < 0x10;
        break;
      }
                    /* end of inlined section */
      iVar7 = iVar7 + 1;
      bVar3 = iVar7 < 0x10;
    } while (bVar3);
    if (!bVar3) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Error! %s");
    }
    pfVar12 = &pfile_wrk.pic;
    iVar7 = 0;
    for (uVar8 = 0; (int)uVar8 < 0x10; uVar8 = uVar8 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar8,0x10);
      pfVar4 = &pfVar12->field0_0x0;
      pfVar12 = (fixed_array<PICTURE_WRK,16> *)((pfVar12->field0_0x0).m_aData + 1);
      if ((uint)pfVar4->m_aData[0].adr_no == adr_no) goto LAB_0022f528;
      iVar7 = iVar7 + 0x20;
    }
    iVar7 = 0;
    uVar8 = 0;
  }
LAB_0022f528:
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar8,0x10);
                    /* end of inlined section */
  (&pfile_wrk.pic.field0_0x0.m_aData[0].adr_no)[iVar7] = (uchar)adr_no;
  iVar10 = 0;
  *(int *)((int)(&pfile_wrk.pic.field0_0x0.m_aData[0].maSubject + 1) + iVar7) = score;
  *(short *)((int)(&pfile_wrk.pic.field0_0x0.m_aData[0].maSubject + 2) + iVar7) = (short)room_no;
  (&pfile_wrk.pic.field0_0x0.m_aData[0].status)[iVar7] = '\x01';
  (&pfile_wrk.pic.field0_0x0.m_aData[0].chp_no)[iVar7] = (uchar)chapter_no;
  uVar8 = iVar7 + 0x33c237U & 7;
  puVar2 = (ulong *)((iVar7 + 0x33c237U) - uVar8);
  *puVar2 = *puVar2 & -1L << (uVar8 + 1) * 8 | (ulong)rtc >> (7 - uVar8) * 8;
  *(sceCdCLOCK *)((int)(&pfile_wrk.pic.field0_0x0.m_aData[0].maSubject + 1) + iVar7 + 4) = rtc;
  puVar13 = (ushort *)
            ((int)&pfile_wrk.pic.field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData[0].type + iVar7)
  ;
  if (obj_num < 3) {
    bVar3 = true;
    if (0 < obj_num) {
      puVar13 = (ushort *)
                ((int)&pfile_wrk.pic.field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData[0].type +
                iVar7);
      iVar11 = iVar10;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar11,3);
                    /* end of inlined section */
        iVar10 = iVar11 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        *puVar13 = obj->type;
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar11,3);
        psVar1 = &obj->no;
                    /* end of inlined section */
        obj = obj + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        puVar13[1] = *psVar1;
        puVar13 = puVar13 + 2;
        iVar11 = iVar10;
                    /* end of inlined section */
      } while (iVar10 < obj_num);
      bVar3 = iVar10 < 3;
    }
    if (bVar3) {
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        puVar6 = (undefined2 *)(iVar7 + 0x33c220 + iVar10 * 4);
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar10,3);
        *puVar6 = 0xffff;
        iVar11 = iVar10 + 1;
        _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar10,3);
                    /* end of inlined section */
                    /* end of inlined section */
        puVar6[1] = 0;
        iVar10 = iVar11;
      } while (iVar11 < 3);
    }
  }
  else {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar10,3);
                    /* end of inlined section */
      iVar7 = iVar10 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      *puVar13 = obj->type;
      _fixed_array_verifyrange__H1Z16_PICTURE_SUBJECT_UiUi_PX01(iVar10,3);
      psVar1 = &obj->no;
                    /* end of inlined section */
      obj = obj + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      puVar13[1] = *psVar1;
      puVar13 = puVar13 + 2;
      iVar10 = iVar7;
                    /* end of inlined section */
    } while (iVar7 < 3);
  }
  return 1;
}

void DeletePhotoData(u_char no) {
	static char __FUNCTION__[16] = {
		/* [0] = */ 68,
		/* [1] = */ 101,
		/* [2] = */ 108,
		/* [3] = */ 101,
		/* [4] = */ 116,
		/* [5] = */ 101,
		/* [6] = */ 80,
		/* [7] = */ 104,
		/* [8] = */ 111,
		/* [9] = */ 116,
		/* [10] = */ 111,
		/* [11] = */ 68,
		/* [12] = */ 97,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 0
	};
	int i;
	int dust;
	
  undefined *puVar1;
  _PICTURE_SUBJECT *p_Var2;
  uchar uVar3;
  uint uVar4;
  ulong *puVar5;
  uchar *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  PICTURE_WRK *pPVar13;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar11 = (ulong)no;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar11,0x10);
  uVar10 = (uint)no;
  uVar8 = (ulong)(int)(uVar10 * 0x20);
  pPVar13 = pfile_wrk.pic.field0_0x0.m_aData + uVar10;
  if (pfile_wrk.pic.field0_0x0.m_aData[uVar10].status == '\0') {
                    /* end of inlined section */
    printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
    PrintWarningReal("Warning! %s\n");
    return;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar11,0x10);
                    /* end of inlined section */
  uVar3 = pPVar13->adr_no;
  if (uVar11 < 0xf) {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      uVar12 = (ulong)((int)uVar11 + 1);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar11,0x10);
      uVar9 = 0x10;
      uVar11 = uVar12;
      uVar7 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
      puVar1 = (undefined *)((int)&pPVar13[1].maSubject.field0_0x0.m_aData[0].obj_no + 1);
      uVar10 = (uint)puVar1 & 7;
      uVar4 = (uint)(pPVar13 + 1) & 7;
      uVar7 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
              uVar7 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)(pPVar13 + 1) - uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)(pPVar13[1].maSubject.field0_0x0.m_aData + 2) + 3);
      uVar10 = (uint)puVar1 & 7;
      p_Var2 = pPVar13[1].maSubject.field0_0x0.m_aData + 1;
      uVar4 = (uint)p_Var2 & 7;
      uVar8 = (*(long *)(puVar1 + -uVar10) << (7 - uVar10) * 8 |
              uVar8 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)((int)p_Var2 - uVar4) >> uVar4 * 8;
      puVar6 = &pPVar13[1].time.hour;
      uVar10 = (uint)puVar6 & 7;
      uVar4 = (uint)&pPVar13[1].score & 7;
      uVar11 = (*(long *)(puVar6 + -uVar10) << (7 - uVar10) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar4) * 8 |
               *(ulong *)((int)&pPVar13[1].score - uVar4) >> uVar4 * 8;
      uVar10 = (uint)&pPVar13[1].field_0x1f & 7;
      puVar6 = &pPVar13[1].time.pad;
      uVar4 = (uint)puVar6 & 7;
      uVar9 = (*(long *)(&pPVar13[1].field_0x1f + -uVar10) << (7 - uVar10) * 8 |
              uVar9 & 0xffffffffffffffffU >> (uVar10 + 1) * 8) & -1L << (8 - uVar4) * 8 |
              *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
      puVar1 = (undefined *)((int)&(pPVar13->maSubject).field0_0x0.m_aData[0].obj_no + 1);
      uVar10 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar10);
      *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 | uVar7 >> (7 - uVar10) * 8;
      uVar10 = (uint)pPVar13 & 7;
      *(ulong *)((int)pPVar13 - uVar10) =
           uVar7 << uVar10 * 8 |
           *(ulong *)((int)pPVar13 - uVar10) & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      puVar1 = (undefined *)((int)((pPVar13->maSubject).field0_0x0.m_aData + 2) + 3);
      uVar10 = (uint)puVar1 & 7;
      puVar5 = (ulong *)(puVar1 + -uVar10);
      *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 | uVar8 >> (7 - uVar10) * 8;
      p_Var2 = (pPVar13->maSubject).field0_0x0.m_aData + 1;
      uVar10 = (uint)p_Var2 & 7;
      puVar5 = (ulong *)((int)p_Var2 - uVar10);
      *puVar5 = uVar8 << uVar10 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      puVar6 = &(pPVar13->time).hour;
      uVar10 = (uint)puVar6 & 7;
      puVar6 = puVar6 + -uVar10;
      *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar10 + 1) * 8 | uVar11 >> (7 - uVar10) * 8;
      uVar10 = (uint)&pPVar13->score & 7;
      puVar5 = (ulong *)((int)&pPVar13->score - uVar10);
      *puVar5 = uVar11 << uVar10 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
      uVar10 = (uint)&pPVar13->field_0x1f & 7;
      puVar5 = (ulong *)(&pPVar13->field_0x1f + -uVar10);
      *puVar5 = *puVar5 & -1L << (uVar10 + 1) * 8 | uVar9 >> (7 - uVar10) * 8;
      puVar6 = &(pPVar13->time).pad;
      uVar10 = (uint)puVar6 & 7;
      puVar6 = puVar6 + -uVar10;
      *(ulong *)puVar6 =
           uVar9 << uVar10 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar10) * 8;
                    /* end of inlined section */
      pPVar13 = pPVar13 + 1;
      uVar11 = uVar12;
    } while ((long)uVar12 < 0xf);
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(0xf,0x10);
  pfile_wrk.pic.field0_0x0.m_aData[15].status = '\0';
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(0xf,0x10);
  pfile_wrk.pic.field0_0x0.m_aData[15].adr_no = uVar3;
                    /* end of inlined section */
  pfile_wrk.pic_num = pfile_wrk.pic_num + 0xff;
  return;
}

void CopyPFileWrk(PFILE_WRK *copy_wrk) {
  undefined *puVar1;
  fixed_array<_PICTURE_SUBJECT,3> *pfVar2;
  _PICTURE_SUBJECT *p_Var3;
  sceCdCLOCK *psVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong *puVar9;
  uchar *puVar10;
  uchar uVar11;
  uchar uVar12;
  uchar uVar13;
  uchar uVar14;
  uchar uVar15;
  uchar uVar16;
  undefined uVar17;
  PFILE_WRK *pPVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  sceCdCLOCK sVar21;
  
  pPVar18 = &pfile_wrk;
  if (((uint)copy_wrk & 7) == 0) {
    do {
      uVar11 = pPVar18->protect_num;
      uVar12 = pPVar18->sort_key;
      uVar13 = pPVar18->skey_bak;
      uVar14 = (pPVar18->pic).field0_0x0.m_aData[0].adr_no;
      uVar15 = (pPVar18->pic).field0_0x0.m_aData[0].chp_no;
      uVar16 = (pPVar18->pic).field0_0x0.m_aData[0].status;
      uVar17 = (pPVar18->pic).field0_0x0.m_aData[0].field_0x3;
      uVar19 = *(undefined8 *)(pPVar18->pic).field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData;
      uVar20 = *(undefined8 *)
                ((int)(pPVar18->pic).field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData + 8);
      sVar21 = (pPVar18->pic).field0_0x0.m_aData[0].time;
      copy_wrk->pic_num = pPVar18->pic_num;
      copy_wrk->protect_num = uVar11;
      copy_wrk->sort_key = uVar12;
      copy_wrk->skey_bak = uVar13;
      (copy_wrk->pic).field0_0x0.m_aData[0].adr_no = uVar14;
      (copy_wrk->pic).field0_0x0.m_aData[0].chp_no = uVar15;
      (copy_wrk->pic).field0_0x0.m_aData[0].status = uVar16;
      (copy_wrk->pic).field0_0x0.m_aData[0].field_0x3 = uVar17;
      *(undefined8 *)(copy_wrk->pic).field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData = uVar19;
      *(undefined8 *)((copy_wrk->pic).field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData + 2) =
           uVar20;
      (copy_wrk->pic).field0_0x0.m_aData[0].time = sVar21;
      pPVar18 = (PFILE_WRK *)&(pPVar18->pic).field0_0x0.m_aData[0].room;
      copy_wrk = (PFILE_WRK *)&(copy_wrk->pic).field0_0x0.m_aData[0].room;
    } while (pPVar18 != (PFILE_WRK *)&pfile_wrk.pic.field0_0x0.m_aData[0xf].room);
  }
  else {
    do {
      uVar7._0_1_ = pPVar18->pic_num;
      uVar7._1_1_ = pPVar18->protect_num;
      uVar7._2_1_ = pPVar18->sort_key;
      uVar7._3_1_ = pPVar18->skey_bak;
      uVar7._4_1_ = (pPVar18->pic).field0_0x0.m_aData[0].adr_no;
      uVar7._5_1_ = (pPVar18->pic).field0_0x0.m_aData[0].chp_no;
      uVar7._6_1_ = (pPVar18->pic).field0_0x0.m_aData[0].status;
      uVar7._7_1_ = (pPVar18->pic).field0_0x0.m_aData[0].field_0x3;
      uVar5 = *(ulong *)(pPVar18->pic).field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData;
      uVar6 = *(ulong *)((int)(pPVar18->pic).field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData + 8)
      ;
      sVar21 = (pPVar18->pic).field0_0x0.m_aData[0].time;
      puVar1 = &(copy_wrk->pic).field0_0x0.m_aData[0].field_0x3;
      uVar8 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar8);
      *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar7 >> (7 - uVar8) * 8;
      uVar8 = (uint)copy_wrk & 7;
      *(ulong *)((int)copy_wrk - uVar8) =
           uVar7 << uVar8 * 8 |
           *(ulong *)((int)copy_wrk - uVar8) & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar1 = (undefined *)
               ((int)((copy_wrk->pic).field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData + 1) + 3);
      uVar8 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar8);
      *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar5 >> (7 - uVar8) * 8;
      pfVar2 = &(copy_wrk->pic).field0_0x0.m_aData[0].maSubject;
      uVar8 = (uint)pfVar2 & 7;
      puVar9 = (ulong *)((int)pfVar2 - uVar8);
      *puVar9 = uVar5 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar1 = (undefined *)((int)&(copy_wrk->pic).field0_0x0.m_aData[0].score + 3);
      uVar8 = (uint)puVar1 & 7;
      puVar9 = (ulong *)(puVar1 + -uVar8);
      *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar6 >> (7 - uVar8) * 8;
      p_Var3 = (copy_wrk->pic).field0_0x0.m_aData[0].maSubject.field0_0x0.m_aData + 2;
      uVar8 = (uint)p_Var3 & 7;
      puVar9 = (ulong *)((int)p_Var3 - uVar8);
      *puVar9 = uVar6 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      puVar10 = &(copy_wrk->pic).field0_0x0.m_aData[0].time.year;
      uVar8 = (uint)puVar10 & 7;
      puVar10 = puVar10 + -uVar8;
      *(ulong *)puVar10 =
           *(ulong *)puVar10 & -1L << (uVar8 + 1) * 8 | (ulong)sVar21 >> (7 - uVar8) * 8;
      psVar4 = &(copy_wrk->pic).field0_0x0.m_aData[0].time;
      uVar8 = (uint)psVar4 & 7;
      puVar9 = (ulong *)((int)psVar4 - uVar8);
      *puVar9 = (long)sVar21 << uVar8 * 8 | *puVar9 & 0xffffffffffffffffU >> (8 - uVar8) * 8;
      pPVar18 = (PFILE_WRK *)&(pPVar18->pic).field0_0x0.m_aData[0].room;
      copy_wrk = (PFILE_WRK *)&(copy_wrk->pic).field0_0x0.m_aData[0].room;
    } while (pPVar18 != (PFILE_WRK *)&pfile_wrk.pic.field0_0x0.m_aData[0xf].room);
    pPVar18 = (PFILE_WRK *)&pfile_wrk.pic.field0_0x0.m_aData[0xf].room;
  }
  uVar7 = *(ulong *)pPVar18;
  uVar8 = (int)copy_wrk + 7U & 7;
  puVar9 = (ulong *)(((int)copy_wrk + 7U) - uVar8);
  *puVar9 = *puVar9 & -1L << (uVar8 + 1) * 8 | uVar7 >> (7 - uVar8) * 8;
  uVar8 = (uint)copy_wrk & 7;
  *(ulong *)((int)copy_wrk - uVar8) =
       uVar7 << uVar8 * 8 |
       *(ulong *)((int)copy_wrk - uVar8) & 0xffffffffffffffffU >> (8 - uVar8) * 8;
  return;
}

PFILE_WRK* GetCamPhotoFile() {
  return &pfile_wrk;
}

int GetFilePhotoState(u_char no) {
  uint uVar1;
  
  uVar1 = (uint)no;
  if (0xf < uVar1) {
    uVar1 = 0;
    printf("ERROR!! GetFilePhotoState()\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar1,0x10);
  return (int)pfile_wrk.pic.field0_0x0.m_aData[uVar1].status;
}

int GetFilePhotoAdrNo(u_char no) {
  uint uVar1;
  
  uVar1 = (uint)no;
  if (0xf < uVar1) {
    uVar1 = 0;
    printf("ERROR!! SetFilePhotoProtect()\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar1,0x10);
  return (int)pfile_wrk.pic.field0_0x0.m_aData[uVar1].adr_no;
}

int SetFilePhotoProtect(u_char no) {
	int res;
	
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)no;
  iVar2 = 0;
  if (0xf < uVar1) {
    uVar1 = 0;
    printf("ERROR!! SetFilePhotoProtect()\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar1,0x10);
  if ((pfile_wrk.pic.field0_0x0.m_aData[uVar1].status & 1) != 0) {
                    /* end of inlined section */
    if (pfile_wrk.protect_num < 0xf) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar1,0x10);
                    /* end of inlined section */
      iVar2 = 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      pfile_wrk.pic.field0_0x0.m_aData[uVar1].status =
           pfile_wrk.pic.field0_0x0.m_aData[uVar1].status | 2;
                    /* end of inlined section */
      pfile_wrk.protect_num = pfile_wrk.protect_num + '\x01';
    }
    else {
      iVar2 = 0;
    }
  }
  return iVar2;
}

void DelFilePhotoProtect(u_char no) {
  uint uVar1;
  
  uVar1 = (uint)no;
  if (0xf < uVar1) {
    uVar1 = 0;
    printf("ERROR!! DelFilePhotoProtect()\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar1,0x10);
  pfile_wrk.pic.field0_0x0.m_aData[uVar1].status = '\0';
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar1,0x10);
  pfile_wrk.pic.field0_0x0.m_aData[uVar1].status = '\x01';
                    /* end of inlined section */
  pfile_wrk.protect_num = pfile_wrk.protect_num + 0xff;
  return;
}

PICTURE_WRK* GetPhotoData(u_char no) {
  uint uVar1;
  
  uVar1 = (uint)no;
  if (0xf < uVar1) {
    uVar1 = 0;
    printf("ERROR!! DelFilePhotoProtect()\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar1,0x10);
  return pfile_wrk.pic.field0_0x0.m_aData + uVar1;
}

int GetFilePhotoNum() {
  return (int)pfile_wrk.pic_num;
}

void SortPhotoData_Before(PFILE_WRK *photo_file) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 83,
		/* [1] = */ 111,
		/* [2] = */ 114,
		/* [3] = */ 116,
		/* [4] = */ 80,
		/* [5] = */ 104,
		/* [6] = */ 111,
		/* [7] = */ 116,
		/* [8] = */ 111,
		/* [9] = */ 68,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 95,
		/* [14] = */ 66,
		/* [15] = */ 101,
		/* [16] = */ 102,
		/* [17] = */ 111,
		/* [18] = */ 114,
		/* [19] = */ 101,
		/* [20] = */ 0
	};
	PICTURE_WRK sort_buff[16];
	int photo_num;
	int i;
	
  _PICTURE_SUBJECT *p_Var1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  uchar *puVar7;
  fixed_array_base<_PICTURE_SUBJECT,3,_PICTURE_SUBJECT[3]> *pfVar8;
  ulong uVar9;
  PICTURE_WRK *pPVar10;
  ulong in_v1;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined4 uVar14;
  ulong in_a3;
  ulong in_t0;
  fixed_array<PICTURE_WRK,16> *pfVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  PICTURE_WRK *pPVar19;
  int iVar20;
  fixed_array<PICTURE_WRK,16> *pfVar21;
  PICTURE_WRK sort_buff [16];
  
  pPVar19 = sort_buff;
  uVar13 = 0x200;
  iVar20 = 0;
  pfVar21 = &photo_file->pic;
  memset(sort_buff,0,0x200);
  uVar11 = 0;
  pfVar15 = pfVar21;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar11,0x10);
    uVar12 = 0x10;
    uVar18 = (ulong)((int)uVar11 + 1);
    if (((pfVar15->field0_0x0).m_aData[0].status & 1) != 0) {
      iVar20 = iVar20 + 1;
      uVar9 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[0].obj_no + 1);
      uVar4 = (uint)puVar3 & 7;
      uVar5 = (uint)pfVar15 & 7;
      uVar9 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              uVar9 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)pfVar15 - uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[2].obj_no + 1);
      uVar4 = (uint)puVar3 & 7;
      p_Var1 = (pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData + 1;
      uVar5 = (uint)p_Var1 & 7;
      in_v1 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)p_Var1 - uVar5) >> uVar5 * 8;
      puVar7 = &(pfVar15->field0_0x0).m_aData[0].time.hour;
      uVar4 = (uint)puVar7 & 7;
      puVar2 = &(pfVar15->field0_0x0).m_aData[0].score;
      uVar5 = (uint)puVar2 & 7;
      uVar11 = (*(long *)(puVar7 + -uVar4) << (7 - uVar4) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)((int)puVar2 - uVar5) >> uVar5 * 8;
      puVar3 = &(pfVar15->field0_0x0).m_aData[0].field_0x1f;
      uVar4 = (uint)puVar3 & 7;
      puVar7 = &(pfVar15->field0_0x0).m_aData[0].time.pad;
      uVar5 = (uint)puVar7 & 7;
      uVar12 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
               uVar12 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)(puVar7 + -uVar5) >> uVar5 * 8;
      uVar4 = (int)pPVar19 + 7U & 7;
      puVar6 = (ulong *)(((int)pPVar19 + 7U) - uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar9 >> (7 - uVar4) * 8;
      *(ulong *)pPVar19 = uVar9;
      uVar4 = (int)pPVar19 + 0xfU & 7;
      puVar6 = (ulong *)(((int)pPVar19 + 0xfU) - uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | in_v1 >> (7 - uVar4) * 8;
      *(ulong *)((int)pPVar19 + 8) = in_v1;
      uVar4 = (int)pPVar19 + 0x17U & 7;
      puVar6 = (ulong *)(((int)pPVar19 + 0x17U) - uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar11 >> (7 - uVar4) * 8;
      *(ulong *)((int)pPVar19 + 0x10) = uVar11;
      uVar4 = (int)pPVar19 + 0x1fU & 7;
      puVar6 = (ulong *)(((int)pPVar19 + 0x1fU) - uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar12 >> (7 - uVar4) * 8;
      *(ulong *)((int)pPVar19 + 0x18) = uVar12;
                    /* end of inlined section */
      pPVar19 = (PICTURE_WRK *)((int)pPVar19 + 0x20);
    }
    pfVar15 = (fixed_array<PICTURE_WRK,16> *)((pfVar15->field0_0x0).m_aData + 1);
    uVar11 = uVar18;
  } while ((long)uVar18 < 0x10);
  pPVar19 = sort_buff + iVar20;
  pfVar15 = pfVar21;
  iVar17 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar17,0x10);
    iVar16 = iVar17 + 1;
    if ((pfVar15->field0_0x0).m_aData[0].status == '\0') {
      iVar20 = iVar20 + 1;
      uVar11 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar17,0x10);
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[0].obj_no + 1);
      uVar4 = (uint)puVar3 & 7;
      uVar5 = (uint)pfVar15 & 7;
      uVar13 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)((int)pfVar15 - uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[2].obj_no + 1);
      uVar4 = (uint)puVar3 & 7;
      p_Var1 = (pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData + 1;
      uVar5 = (uint)p_Var1 & 7;
      in_a3 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
              in_a3 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)p_Var1 - uVar5) >> uVar5 * 8;
      puVar7 = &(pfVar15->field0_0x0).m_aData[0].time.hour;
      uVar4 = (uint)puVar7 & 7;
      puVar2 = &(pfVar15->field0_0x0).m_aData[0].score;
      uVar5 = (uint)puVar2 & 7;
      in_t0 = (*(long *)(puVar7 + -uVar4) << (7 - uVar4) * 8 |
              in_t0 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
              *(ulong *)((int)puVar2 - uVar5) >> uVar5 * 8;
      puVar3 = &(pfVar15->field0_0x0).m_aData[0].field_0x1f;
      uVar4 = (uint)puVar3 & 7;
      puVar7 = &(pfVar15->field0_0x0).m_aData[0].time.pad;
      uVar5 = (uint)puVar7 & 7;
      uVar11 = (*(long *)(puVar3 + -uVar4) << (7 - uVar4) * 8 |
               uVar11 & 0xffffffffffffffffU >> (uVar4 + 1) * 8) & -1L << (8 - uVar5) * 8 |
               *(ulong *)(puVar7 + -uVar5) >> uVar5 * 8;
      puVar3 = (undefined *)((int)&(pPVar19->maSubject).field0_0x0.m_aData[0].obj_no + 1);
      uVar4 = (uint)puVar3 & 7;
      puVar6 = (ulong *)(puVar3 + -uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
      uVar14 = (undefined4)(uVar13 >> 0x20);
      pfVar8 = &(pPVar19->maSubject).field0_0x0;
      pPVar19->adr_no = (char)uVar13;
      pPVar19->chp_no = (char)(uVar13 >> 8);
      pPVar19->status = (char)(uVar13 >> 0x10);
      pPVar19->field_0x3 = (char)(uVar13 >> 0x18);
      pfVar8->m_aData[0].type = (short)uVar14;
      pfVar8->m_aData[0].obj_no = (short)((uint)uVar14 >> 0x10);
      puVar3 = (undefined *)((int)&(pPVar19->maSubject).field0_0x0.m_aData[2].obj_no + 1);
      uVar4 = (uint)puVar3 & 7;
      puVar6 = (ulong *)(puVar3 + -uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | in_a3 >> (7 - uVar4) * 8;
      *(ulong *)((pPVar19->maSubject).field0_0x0.m_aData + 1) = in_a3;
      puVar7 = &(pPVar19->time).hour;
      uVar4 = (uint)puVar7 & 7;
      puVar7 = puVar7 + -uVar4;
      *(ulong *)puVar7 = *(ulong *)puVar7 & -1L << (uVar4 + 1) * 8 | in_t0 >> (7 - uVar4) * 8;
      pPVar19->score = (int)in_t0;
      (pPVar19->time).stat = (char)(in_t0 >> 0x20);
      (pPVar19->time).second = (char)(in_t0 >> 0x28);
      (pPVar19->time).minute = (char)(in_t0 >> 0x30);
      (pPVar19->time).hour = (char)(in_t0 >> 0x38);
      uVar4 = (uint)&pPVar19->field_0x1f & 7;
      puVar6 = (ulong *)(&pPVar19->field_0x1f + -uVar4);
      *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar11 >> (7 - uVar4) * 8;
      *(ulong *)&(pPVar19->time).pad = uVar11;
                    /* end of inlined section */
      pPVar19 = pPVar19 + 1;
    }
    pfVar15 = (fixed_array<PICTURE_WRK,16> *)((pfVar15->field0_0x0).m_aData + 1);
    iVar17 = iVar16;
  } while (iVar16 < 0x10);
  if (iVar20 < 0x11) {
    iVar20 = 0;
  }
  else {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    iVar20 = 0;
  }
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar20);
    pPVar19 = sort_buff + iVar20;
    pPVar10 = (pfVar21->field0_0x0).m_aData + iVar20;
                    /* end of inlined section */
    iVar17 = iVar20 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pfVar8 = &(pPVar19->maSubject).field0_0x0;
    uVar11._0_1_ = pPVar19->adr_no;
    uVar11._1_1_ = pPVar19->chp_no;
    uVar11._2_1_ = pPVar19->status;
    uVar11._3_1_ = pPVar19->field_0x3;
    uVar11._4_2_ = pfVar8->m_aData[0].type;
    uVar11._6_2_ = pfVar8->m_aData[0].obj_no;
    uVar13 = *(ulong *)(sort_buff[iVar20].maSubject.field0_0x0.m_aData + 1);
    pPVar19 = sort_buff + iVar20;
    uVar12._0_4_ = pPVar19->score;
    uVar12._4_1_ = (pPVar19->time).stat;
    uVar12._5_1_ = (pPVar19->time).second;
    uVar12._6_1_ = (pPVar19->time).minute;
    uVar12._7_1_ = (pPVar19->time).hour;
    uVar18 = *(ulong *)&sort_buff[iVar20].time.pad;
    puVar3 = (undefined *)((int)&(pPVar10->maSubject).field0_0x0.m_aData[0].obj_no + 1);
    uVar4 = (uint)puVar3 & 7;
    puVar6 = (ulong *)(puVar3 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar11 >> (7 - uVar4) * 8;
    uVar4 = (uint)pPVar10 & 7;
    *(ulong *)((int)pPVar10 - uVar4) =
         uVar11 << uVar4 * 8 |
         *(ulong *)((int)pPVar10 - uVar4) & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar3 = (undefined *)((int)&(pPVar10->maSubject).field0_0x0.m_aData[2].obj_no + 1);
    uVar4 = (uint)puVar3 & 7;
    puVar6 = (ulong *)(puVar3 + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar13 >> (7 - uVar4) * 8;
    p_Var1 = (pPVar10->maSubject).field0_0x0.m_aData + 1;
    uVar4 = (uint)p_Var1 & 7;
    puVar6 = (ulong *)((int)p_Var1 - uVar4);
    *puVar6 = uVar13 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    puVar7 = &(pPVar10->time).hour;
    uVar4 = (uint)puVar7 & 7;
    puVar7 = puVar7 + -uVar4;
    *(ulong *)puVar7 = *(ulong *)puVar7 & -1L << (uVar4 + 1) * 8 | uVar12 >> (7 - uVar4) * 8;
    uVar4 = (uint)&pPVar10->score & 7;
    puVar6 = (ulong *)((int)&pPVar10->score - uVar4);
    *puVar6 = uVar12 << uVar4 * 8 | *puVar6 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    uVar4 = (uint)&pPVar10->field_0x1f & 7;
    puVar6 = (ulong *)(&pPVar10->field_0x1f + -uVar4);
    *puVar6 = *puVar6 & -1L << (uVar4 + 1) * 8 | uVar18 >> (7 - uVar4) * 8;
                    /* end of inlined section */
    puVar7 = &(pPVar10->time).pad;
                    /* end of inlined section */
    uVar4 = (uint)puVar7 & 7;
    puVar7 = puVar7 + -uVar4;
    *(ulong *)puVar7 =
         uVar18 << uVar4 * 8 | *(ulong *)puVar7 & 0xffffffffffffffffU >> (8 - uVar4) * 8;
    iVar20 = iVar17;
  } while (iVar17 < 0x10);
  return;
}

void SortPhotoData_Protect(PFILE_WRK *photo_file) {
	static char __FUNCTION__[22] = {
		/* [0] = */ 83,
		/* [1] = */ 111,
		/* [2] = */ 114,
		/* [3] = */ 116,
		/* [4] = */ 80,
		/* [5] = */ 104,
		/* [6] = */ 111,
		/* [7] = */ 116,
		/* [8] = */ 111,
		/* [9] = */ 68,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 95,
		/* [14] = */ 80,
		/* [15] = */ 114,
		/* [16] = */ 111,
		/* [17] = */ 116,
		/* [18] = */ 101,
		/* [19] = */ 99,
		/* [20] = */ 116,
		/* [21] = */ 0
	};
	PICTURE_WRK sort_buff[16];
	int set_count;
	int i;
	
  _PICTURE_SUBJECT *p_Var1;
  uint *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  uchar *puVar8;
  fixed_array_base<_PICTURE_SUBJECT,3,_PICTURE_SUBJECT[3]> *pfVar9;
  ulong uVar10;
  PICTURE_WRK *pPVar11;
  ulong in_v1;
  ulong uVar12;
  ulong uVar13;
  ulong in_a2;
  undefined4 uVar14;
  ulong in_a3;
  ulong in_t0;
  fixed_array<PICTURE_WRK,16> *pfVar15;
  int iVar16;
  ulong uVar17;
  PICTURE_WRK *pPVar18;
  int iVar19;
  fixed_array<PICTURE_WRK,16> *pfVar20;
  PICTURE_WRK sort_buff [16];
  
  pPVar18 = sort_buff;
  iVar19 = 0;
  pfVar20 = &photo_file->pic;
  SortPhotoData_Before__FP9PFILE_WRK(photo_file);
  uVar12 = 0;
  pfVar15 = pfVar20;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar12,0x10);
    uVar13 = 0x10;
    uVar17 = (ulong)((int)uVar12 + 1);
    if (((pfVar15->field0_0x0).m_aData[0].status & 2) != 0) {
      iVar19 = iVar19 + 1;
      uVar10 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[0].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      uVar6 = (uint)pfVar15 & 7;
      uVar10 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
               uVar10 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
               *(ulong *)((int)pfVar15 - uVar6) >> uVar6 * 8;
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[2].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      p_Var1 = (pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData + 1;
      uVar6 = (uint)p_Var1 & 7;
      in_v1 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
              *(ulong *)((int)p_Var1 - uVar6) >> uVar6 * 8;
      puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.hour;
      uVar5 = (uint)puVar8 & 7;
      puVar2 = &(pfVar15->field0_0x0).m_aData[0].score;
      uVar6 = (uint)puVar2 & 7;
      uVar12 = (*(long *)(puVar8 + -uVar5) << (7 - uVar5) * 8 |
               uVar12 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
               *(ulong *)((int)puVar2 - uVar6) >> uVar6 * 8;
      puVar3 = &(pfVar15->field0_0x0).m_aData[0].field_0x1f;
      uVar5 = (uint)puVar3 & 7;
      puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.pad;
      uVar6 = (uint)puVar8 & 7;
      uVar13 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
               *(ulong *)(puVar8 + -uVar6) >> uVar6 * 8;
      uVar5 = (int)pPVar18 + 7U & 7;
      puVar7 = (ulong *)(((int)pPVar18 + 7U) - uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar10 >> (7 - uVar5) * 8;
      *(ulong *)pPVar18 = uVar10;
      uVar5 = (int)pPVar18 + 0xfU & 7;
      puVar7 = (ulong *)(((int)pPVar18 + 0xfU) - uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_v1 >> (7 - uVar5) * 8;
      *(ulong *)((int)pPVar18 + 8) = in_v1;
      uVar5 = (int)pPVar18 + 0x17U & 7;
      puVar7 = (ulong *)(((int)pPVar18 + 0x17U) - uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
      *(ulong *)((int)pPVar18 + 0x10) = uVar12;
      uVar5 = (int)pPVar18 + 0x1fU & 7;
      puVar7 = (ulong *)(((int)pPVar18 + 0x1fU) - uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
      *(ulong *)((int)pPVar18 + 0x18) = uVar13;
                    /* end of inlined section */
      pPVar18 = (PICTURE_WRK *)((int)pPVar18 + 0x20);
    }
    pfVar15 = (fixed_array<PICTURE_WRK,16> *)((pfVar15->field0_0x0).m_aData + 1);
    uVar12 = uVar17;
  } while ((long)uVar17 < 0x10);
  iVar16 = 0;
  pPVar18 = sort_buff + iVar19;
  pfVar15 = pfVar20;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar16,0x10);
    if (((pfVar15->field0_0x0).m_aData[0].status & 2) == 0) {
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar16,0x10);
      bVar4 = (pfVar15->field0_0x0).m_aData[0].status;
      in_v1 = (ulong)bVar4 & 1;
      if ((bVar4 & 1) != 0) {
        iVar19 = iVar19 + 1;
        uVar12 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar16,0x10);
        puVar3 = (undefined *)
                 ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[0].obj_no + 1)
        ;
        uVar5 = (uint)puVar3 & 7;
        uVar6 = (uint)pfVar15 & 7;
        in_a2 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                in_a2 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)pfVar15 - uVar6) >> uVar6 * 8;
        puVar3 = (undefined *)
                 ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[2].obj_no + 1)
        ;
        uVar5 = (uint)puVar3 & 7;
        p_Var1 = (pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData + 1;
        uVar6 = (uint)p_Var1 & 7;
        in_a3 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)p_Var1 - uVar6) >> uVar6 * 8;
        puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.hour;
        uVar5 = (uint)puVar8 & 7;
        puVar2 = &(pfVar15->field0_0x0).m_aData[0].score;
        uVar6 = (uint)puVar2 & 7;
        in_t0 = (*(long *)(puVar8 + -uVar5) << (7 - uVar5) * 8 |
                in_t0 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)puVar2 - uVar6) >> uVar6 * 8;
        puVar3 = &(pfVar15->field0_0x0).m_aData[0].field_0x1f;
        uVar5 = (uint)puVar3 & 7;
        puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.pad;
        uVar6 = (uint)puVar8 & 7;
        uVar12 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                 uVar12 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                 *(ulong *)(puVar8 + -uVar6) >> uVar6 * 8;
        puVar3 = (undefined *)((int)&(pPVar18->maSubject).field0_0x0.m_aData[0].obj_no + 1);
        uVar5 = (uint)puVar3 & 7;
        puVar7 = (ulong *)(puVar3 + -uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_a2 >> (7 - uVar5) * 8;
        uVar14 = (undefined4)(in_a2 >> 0x20);
        pfVar9 = &(pPVar18->maSubject).field0_0x0;
        pPVar18->adr_no = (char)in_a2;
        pPVar18->chp_no = (char)(in_a2 >> 8);
        pPVar18->status = (char)(in_a2 >> 0x10);
        pPVar18->field_0x3 = (char)(in_a2 >> 0x18);
        pfVar9->m_aData[0].type = (short)uVar14;
        pfVar9->m_aData[0].obj_no = (short)((uint)uVar14 >> 0x10);
        puVar3 = (undefined *)((int)&(pPVar18->maSubject).field0_0x0.m_aData[2].obj_no + 1);
        uVar5 = (uint)puVar3 & 7;
        puVar7 = (ulong *)(puVar3 + -uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_a3 >> (7 - uVar5) * 8;
        *(ulong *)((pPVar18->maSubject).field0_0x0.m_aData + 1) = in_a3;
        puVar8 = &(pPVar18->time).hour;
        uVar5 = (uint)puVar8 & 7;
        puVar8 = puVar8 + -uVar5;
        *(ulong *)puVar8 = *(ulong *)puVar8 & -1L << (uVar5 + 1) * 8 | in_t0 >> (7 - uVar5) * 8;
        pPVar18->score = (int)in_t0;
        (pPVar18->time).stat = (char)(in_t0 >> 0x20);
        (pPVar18->time).second = (char)(in_t0 >> 0x28);
        (pPVar18->time).minute = (char)(in_t0 >> 0x30);
        (pPVar18->time).hour = (char)(in_t0 >> 0x38);
        uVar5 = (uint)&pPVar18->field_0x1f & 7;
        puVar7 = (ulong *)(&pPVar18->field_0x1f + -uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
        *(ulong *)&(pPVar18->time).pad = uVar12;
                    /* end of inlined section */
        pPVar18 = pPVar18 + 1;
      }
    }
    iVar16 = iVar16 + 1;
    pfVar15 = (fixed_array<PICTURE_WRK,16> *)((pfVar15->field0_0x0).m_aData + 1);
  } while (iVar16 < 0x10);
  pPVar18 = sort_buff + iVar19;
  uVar12 = 0;
  pfVar15 = pfVar20;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar12,0x10);
    uVar13 = 0x10;
    uVar17 = (ulong)((int)uVar12 + 1);
    if ((pfVar15->field0_0x0).m_aData[0].status == '\0') {
      iVar19 = iVar19 + 1;
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[0].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      uVar6 = (uint)pfVar15 & 7;
      in_v1 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
              *(ulong *)((int)pfVar15 - uVar6) >> uVar6 * 8;
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[2].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      p_Var1 = (pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData + 1;
      uVar6 = (uint)p_Var1 & 7;
      uVar12 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
               uVar12 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
               *(ulong *)((int)p_Var1 - uVar6) >> uVar6 * 8;
      puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.hour;
      uVar5 = (uint)puVar8 & 7;
      puVar2 = &(pfVar15->field0_0x0).m_aData[0].score;
      uVar6 = (uint)puVar2 & 7;
      uVar13 = (*(long *)(puVar8 + -uVar5) << (7 - uVar5) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
               *(ulong *)((int)puVar2 - uVar6) >> uVar6 * 8;
      puVar3 = &(pfVar15->field0_0x0).m_aData[0].field_0x1f;
      uVar5 = (uint)puVar3 & 7;
      puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.pad;
      uVar6 = (uint)puVar8 & 7;
      in_a2 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
              in_a2 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
              *(ulong *)(puVar8 + -uVar6) >> uVar6 * 8;
      puVar3 = (undefined *)((int)&(pPVar18->maSubject).field0_0x0.m_aData[0].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_v1 >> (7 - uVar5) * 8;
      uVar14 = (undefined4)(in_v1 >> 0x20);
      pfVar9 = &(pPVar18->maSubject).field0_0x0;
      pPVar18->adr_no = (char)in_v1;
      pPVar18->chp_no = (char)(in_v1 >> 8);
      pPVar18->status = (char)(in_v1 >> 0x10);
      pPVar18->field_0x3 = (char)(in_v1 >> 0x18);
      pfVar9->m_aData[0].type = (short)uVar14;
      pfVar9->m_aData[0].obj_no = (short)((uint)uVar14 >> 0x10);
      puVar3 = (undefined *)((int)&(pPVar18->maSubject).field0_0x0.m_aData[2].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
      *(ulong *)((pPVar18->maSubject).field0_0x0.m_aData + 1) = uVar12;
      puVar8 = &(pPVar18->time).hour;
      uVar5 = (uint)puVar8 & 7;
      puVar8 = puVar8 + -uVar5;
      *(ulong *)puVar8 = *(ulong *)puVar8 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
      pPVar18->score = (int)uVar13;
      (pPVar18->time).stat = (char)(uVar13 >> 0x20);
      (pPVar18->time).second = (char)(uVar13 >> 0x28);
      (pPVar18->time).minute = (char)(uVar13 >> 0x30);
      (pPVar18->time).hour = (char)(uVar13 >> 0x38);
      uVar5 = (uint)&pPVar18->field_0x1f & 7;
      puVar7 = (ulong *)(&pPVar18->field_0x1f + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_a2 >> (7 - uVar5) * 8;
      *(ulong *)&(pPVar18->time).pad = in_a2;
                    /* end of inlined section */
      pPVar18 = pPVar18 + 1;
    }
    pfVar15 = (fixed_array<PICTURE_WRK,16> *)((pfVar15->field0_0x0).m_aData + 1);
    uVar12 = uVar17;
  } while ((long)uVar17 < 0x10);
  if (iVar19 != 0x10) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  iVar19 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar19);
    pPVar18 = sort_buff + iVar19;
    pPVar11 = (pfVar20->field0_0x0).m_aData + iVar19;
                    /* end of inlined section */
    iVar16 = iVar19 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pfVar9 = &(pPVar18->maSubject).field0_0x0;
    uVar12._0_1_ = pPVar18->adr_no;
    uVar12._1_1_ = pPVar18->chp_no;
    uVar12._2_1_ = pPVar18->status;
    uVar12._3_1_ = pPVar18->field_0x3;
    uVar12._4_2_ = pfVar9->m_aData[0].type;
    uVar12._6_2_ = pfVar9->m_aData[0].obj_no;
    uVar13 = *(ulong *)(sort_buff[iVar19].maSubject.field0_0x0.m_aData + 1);
    pPVar18 = sort_buff + iVar19;
    uVar17._0_4_ = pPVar18->score;
    uVar17._4_1_ = (pPVar18->time).stat;
    uVar17._5_1_ = (pPVar18->time).second;
    uVar17._6_1_ = (pPVar18->time).minute;
    uVar17._7_1_ = (pPVar18->time).hour;
    uVar10 = *(ulong *)&sort_buff[iVar19].time.pad;
    puVar3 = (undefined *)((int)&(pPVar11->maSubject).field0_0x0.m_aData[0].obj_no + 1);
    uVar5 = (uint)puVar3 & 7;
    puVar7 = (ulong *)(puVar3 + -uVar5);
    *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
    uVar5 = (uint)pPVar11 & 7;
    *(ulong *)((int)pPVar11 - uVar5) =
         uVar12 << uVar5 * 8 |
         *(ulong *)((int)pPVar11 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar3 = (undefined *)((int)&(pPVar11->maSubject).field0_0x0.m_aData[2].obj_no + 1);
    uVar5 = (uint)puVar3 & 7;
    puVar7 = (ulong *)(puVar3 + -uVar5);
    *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
    p_Var1 = (pPVar11->maSubject).field0_0x0.m_aData + 1;
    uVar5 = (uint)p_Var1 & 7;
    puVar7 = (ulong *)((int)p_Var1 - uVar5);
    *puVar7 = uVar13 << uVar5 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    puVar8 = &(pPVar11->time).hour;
    uVar5 = (uint)puVar8 & 7;
    puVar8 = puVar8 + -uVar5;
    *(ulong *)puVar8 = *(ulong *)puVar8 & -1L << (uVar5 + 1) * 8 | uVar17 >> (7 - uVar5) * 8;
    uVar5 = (uint)&pPVar11->score & 7;
    puVar7 = (ulong *)((int)&pPVar11->score - uVar5);
    *puVar7 = uVar17 << uVar5 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    uVar5 = (uint)&pPVar11->field_0x1f & 7;
    puVar7 = (ulong *)(&pPVar11->field_0x1f + -uVar5);
    *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar10 >> (7 - uVar5) * 8;
                    /* end of inlined section */
    puVar8 = &(pPVar11->time).pad;
                    /* end of inlined section */
    uVar5 = (uint)puVar8 & 7;
    puVar8 = puVar8 + -uVar5;
    *(ulong *)puVar8 =
         uVar10 << uVar5 * 8 | *(ulong *)puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
    iVar19 = iVar16;
  } while (iVar16 < 0x10);
  return;
}

void SortPhotoData_NonProtect(PFILE_WRK *photo_file) {
	static char __FUNCTION__[25] = {
		/* [0] = */ 83,
		/* [1] = */ 111,
		/* [2] = */ 114,
		/* [3] = */ 116,
		/* [4] = */ 80,
		/* [5] = */ 104,
		/* [6] = */ 111,
		/* [7] = */ 116,
		/* [8] = */ 111,
		/* [9] = */ 68,
		/* [10] = */ 97,
		/* [11] = */ 116,
		/* [12] = */ 97,
		/* [13] = */ 95,
		/* [14] = */ 78,
		/* [15] = */ 111,
		/* [16] = */ 110,
		/* [17] = */ 80,
		/* [18] = */ 114,
		/* [19] = */ 111,
		/* [20] = */ 116,
		/* [21] = */ 101,
		/* [22] = */ 99,
		/* [23] = */ 116,
		/* [24] = */ 0
	};
	PICTURE_WRK sort_buff[16];
	int set_count;
	int i;
	
  _PICTURE_SUBJECT *p_Var1;
  uint *puVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  uchar *puVar8;
  fixed_array_base<_PICTURE_SUBJECT,3,_PICTURE_SUBJECT[3]> *pfVar9;
  ulong uVar10;
  PICTURE_WRK *pPVar11;
  ulong in_v1;
  ulong uVar12;
  ulong uVar13;
  ulong in_a2;
  undefined4 uVar14;
  ulong in_a3;
  ulong in_t0;
  fixed_array<PICTURE_WRK,16> *pfVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  PICTURE_WRK *pPVar19;
  int iVar20;
  fixed_array<PICTURE_WRK,16> *pfVar21;
  PICTURE_WRK sort_buff [16];
  
  pPVar19 = sort_buff;
  uVar18 = 0;
  iVar20 = 0;
  pfVar21 = &photo_file->pic;
  SortPhotoData_Before__FP9PFILE_WRK(photo_file);
  pfVar15 = pfVar21;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar18,0x10);
    if (((pfVar15->field0_0x0).m_aData[0].status & 2) == 0) {
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar18,0x10);
      bVar4 = (pfVar15->field0_0x0).m_aData[0].status;
      in_v1 = (ulong)bVar4 & 1;
      uVar13 = 0x10;
      if ((bVar4 & 1) != 0) {
        iVar20 = iVar20 + 1;
        uVar12 = uVar18;
        uVar10 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
        puVar3 = (undefined *)
                 ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[0].obj_no + 1)
        ;
        uVar5 = (uint)puVar3 & 7;
        uVar6 = (uint)pfVar15 & 7;
        uVar10 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                 uVar10 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                 *(ulong *)((int)pfVar15 - uVar6) >> uVar6 * 8;
        puVar3 = (undefined *)
                 ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[2].obj_no + 1)
        ;
        uVar5 = (uint)puVar3 & 7;
        p_Var1 = (pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData + 1;
        uVar6 = (uint)p_Var1 & 7;
        in_v1 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                in_v1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)p_Var1 - uVar6) >> uVar6 * 8;
        puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.hour;
        uVar5 = (uint)puVar8 & 7;
        puVar2 = &(pfVar15->field0_0x0).m_aData[0].score;
        uVar6 = (uint)puVar2 & 7;
        uVar12 = (*(long *)(puVar8 + -uVar5) << (7 - uVar5) * 8 |
                 uVar12 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                 *(ulong *)((int)puVar2 - uVar6) >> uVar6 * 8;
        puVar3 = &(pfVar15->field0_0x0).m_aData[0].field_0x1f;
        uVar5 = (uint)puVar3 & 7;
        puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.pad;
        uVar6 = (uint)puVar8 & 7;
        uVar13 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                 uVar13 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                 *(ulong *)(puVar8 + -uVar6) >> uVar6 * 8;
        uVar5 = (int)pPVar19 + 7U & 7;
        puVar7 = (ulong *)(((int)pPVar19 + 7U) - uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar10 >> (7 - uVar5) * 8;
        *(ulong *)pPVar19 = uVar10;
        uVar5 = (int)pPVar19 + 0xfU & 7;
        puVar7 = (ulong *)(((int)pPVar19 + 0xfU) - uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_v1 >> (7 - uVar5) * 8;
        *(ulong *)((int)pPVar19 + 8) = in_v1;
        uVar5 = (int)pPVar19 + 0x17U & 7;
        puVar7 = (ulong *)(((int)pPVar19 + 0x17U) - uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
        *(ulong *)((int)pPVar19 + 0x10) = uVar12;
        uVar5 = (int)pPVar19 + 0x1fU & 7;
        puVar7 = (ulong *)(((int)pPVar19 + 0x1fU) - uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
        *(ulong *)((int)pPVar19 + 0x18) = uVar13;
                    /* end of inlined section */
        pPVar19 = (PICTURE_WRK *)((int)pPVar19 + 0x20);
      }
    }
    uVar18 = (ulong)((int)uVar18 + 1);
    pfVar15 = (fixed_array<PICTURE_WRK,16> *)((pfVar15->field0_0x0).m_aData + 1);
  } while ((long)uVar18 < 0x10);
  iVar16 = 0;
  pPVar19 = sort_buff + iVar20;
  pfVar15 = pfVar21;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar16,0x10);
    if (((pfVar15->field0_0x0).m_aData[0].status & 2) != 0) {
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar16,0x10);
      bVar4 = (pfVar15->field0_0x0).m_aData[0].status;
      in_v1 = (ulong)bVar4 & 1;
      if ((bVar4 & 1) != 0) {
        iVar20 = iVar20 + 1;
        uVar18 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar16,0x10);
        puVar3 = (undefined *)
                 ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[0].obj_no + 1)
        ;
        uVar5 = (uint)puVar3 & 7;
        uVar6 = (uint)pfVar15 & 7;
        in_a2 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                in_a2 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)pfVar15 - uVar6) >> uVar6 * 8;
        puVar3 = (undefined *)
                 ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[2].obj_no + 1)
        ;
        uVar5 = (uint)puVar3 & 7;
        p_Var1 = (pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData + 1;
        uVar6 = (uint)p_Var1 & 7;
        in_a3 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                in_a3 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)p_Var1 - uVar6) >> uVar6 * 8;
        puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.hour;
        uVar5 = (uint)puVar8 & 7;
        puVar2 = &(pfVar15->field0_0x0).m_aData[0].score;
        uVar6 = (uint)puVar2 & 7;
        in_t0 = (*(long *)(puVar8 + -uVar5) << (7 - uVar5) * 8 |
                in_t0 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                *(ulong *)((int)puVar2 - uVar6) >> uVar6 * 8;
        puVar3 = &(pfVar15->field0_0x0).m_aData[0].field_0x1f;
        uVar5 = (uint)puVar3 & 7;
        puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.pad;
        uVar6 = (uint)puVar8 & 7;
        uVar18 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
                 uVar18 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
                 *(ulong *)(puVar8 + -uVar6) >> uVar6 * 8;
        puVar3 = (undefined *)((int)&(pPVar19->maSubject).field0_0x0.m_aData[0].obj_no + 1);
        uVar5 = (uint)puVar3 & 7;
        puVar7 = (ulong *)(puVar3 + -uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_a2 >> (7 - uVar5) * 8;
        uVar14 = (undefined4)(in_a2 >> 0x20);
        pfVar9 = &(pPVar19->maSubject).field0_0x0;
        pPVar19->adr_no = (char)in_a2;
        pPVar19->chp_no = (char)(in_a2 >> 8);
        pPVar19->status = (char)(in_a2 >> 0x10);
        pPVar19->field_0x3 = (char)(in_a2 >> 0x18);
        pfVar9->m_aData[0].type = (short)uVar14;
        pfVar9->m_aData[0].obj_no = (short)((uint)uVar14 >> 0x10);
        puVar3 = (undefined *)((int)&(pPVar19->maSubject).field0_0x0.m_aData[2].obj_no + 1);
        uVar5 = (uint)puVar3 & 7;
        puVar7 = (ulong *)(puVar3 + -uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_a3 >> (7 - uVar5) * 8;
        *(ulong *)((pPVar19->maSubject).field0_0x0.m_aData + 1) = in_a3;
        puVar8 = &(pPVar19->time).hour;
        uVar5 = (uint)puVar8 & 7;
        puVar8 = puVar8 + -uVar5;
        *(ulong *)puVar8 = *(ulong *)puVar8 & -1L << (uVar5 + 1) * 8 | in_t0 >> (7 - uVar5) * 8;
        pPVar19->score = (int)in_t0;
        (pPVar19->time).stat = (char)(in_t0 >> 0x20);
        (pPVar19->time).second = (char)(in_t0 >> 0x28);
        (pPVar19->time).minute = (char)(in_t0 >> 0x30);
        (pPVar19->time).hour = (char)(in_t0 >> 0x38);
        uVar5 = (uint)&pPVar19->field_0x1f & 7;
        puVar7 = (ulong *)(&pPVar19->field_0x1f + -uVar5);
        *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar18 >> (7 - uVar5) * 8;
        *(ulong *)&(pPVar19->time).pad = uVar18;
                    /* end of inlined section */
        pPVar19 = pPVar19 + 1;
      }
    }
    iVar16 = iVar16 + 1;
    pfVar15 = (fixed_array<PICTURE_WRK,16> *)((pfVar15->field0_0x0).m_aData + 1);
  } while (iVar16 < 0x10);
  pPVar19 = sort_buff + iVar20;
  uVar18 = 0;
  pfVar15 = pfVar21;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar18,0x10);
    uVar13 = 0x10;
    uVar12 = (ulong)((int)uVar18 + 1);
    if ((pfVar15->field0_0x0).m_aData[0].status == '\0') {
      iVar20 = iVar20 + 1;
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[0].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      uVar6 = (uint)pfVar15 & 7;
      in_v1 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
              in_v1 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
              *(ulong *)((int)pfVar15 - uVar6) >> uVar6 * 8;
      puVar3 = (undefined *)
               ((int)&(pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData[2].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      p_Var1 = (pfVar15->field0_0x0).m_aData[0].maSubject.field0_0x0.m_aData + 1;
      uVar6 = (uint)p_Var1 & 7;
      uVar18 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
               uVar18 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
               *(ulong *)((int)p_Var1 - uVar6) >> uVar6 * 8;
      puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.hour;
      uVar5 = (uint)puVar8 & 7;
      puVar2 = &(pfVar15->field0_0x0).m_aData[0].score;
      uVar6 = (uint)puVar2 & 7;
      uVar13 = (*(long *)(puVar8 + -uVar5) << (7 - uVar5) * 8 |
               uVar13 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
               *(ulong *)((int)puVar2 - uVar6) >> uVar6 * 8;
      puVar3 = &(pfVar15->field0_0x0).m_aData[0].field_0x1f;
      uVar5 = (uint)puVar3 & 7;
      puVar8 = &(pfVar15->field0_0x0).m_aData[0].time.pad;
      uVar6 = (uint)puVar8 & 7;
      in_a2 = (*(long *)(puVar3 + -uVar5) << (7 - uVar5) * 8 |
              in_a2 & 0xffffffffffffffffU >> (uVar5 + 1) * 8) & -1L << (8 - uVar6) * 8 |
              *(ulong *)(puVar8 + -uVar6) >> uVar6 * 8;
      puVar3 = (undefined *)((int)&(pPVar19->maSubject).field0_0x0.m_aData[0].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_v1 >> (7 - uVar5) * 8;
      uVar14 = (undefined4)(in_v1 >> 0x20);
      pfVar9 = &(pPVar19->maSubject).field0_0x0;
      pPVar19->adr_no = (char)in_v1;
      pPVar19->chp_no = (char)(in_v1 >> 8);
      pPVar19->status = (char)(in_v1 >> 0x10);
      pPVar19->field_0x3 = (char)(in_v1 >> 0x18);
      pfVar9->m_aData[0].type = (short)uVar14;
      pfVar9->m_aData[0].obj_no = (short)((uint)uVar14 >> 0x10);
      puVar3 = (undefined *)((int)&(pPVar19->maSubject).field0_0x0.m_aData[2].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar18 >> (7 - uVar5) * 8;
      *(ulong *)((pPVar19->maSubject).field0_0x0.m_aData + 1) = uVar18;
      puVar8 = &(pPVar19->time).hour;
      uVar5 = (uint)puVar8 & 7;
      puVar8 = puVar8 + -uVar5;
      *(ulong *)puVar8 = *(ulong *)puVar8 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
      pPVar19->score = (int)uVar13;
      (pPVar19->time).stat = (char)(uVar13 >> 0x20);
      (pPVar19->time).second = (char)(uVar13 >> 0x28);
      (pPVar19->time).minute = (char)(uVar13 >> 0x30);
      (pPVar19->time).hour = (char)(uVar13 >> 0x38);
      uVar5 = (uint)&pPVar19->field_0x1f & 7;
      puVar7 = (ulong *)(&pPVar19->field_0x1f + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | in_a2 >> (7 - uVar5) * 8;
      *(ulong *)&(pPVar19->time).pad = in_a2;
                    /* end of inlined section */
      pPVar19 = pPVar19 + 1;
    }
    pfVar15 = (fixed_array<PICTURE_WRK,16> *)((pfVar15->field0_0x0).m_aData + 1);
    uVar18 = uVar12;
  } while ((long)uVar12 < 0x10);
  if (iVar20 != 0x10) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  iVar16 = 0;
  if (0 < iVar20) {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar16);
      pPVar19 = sort_buff + iVar16;
      pPVar11 = (pfVar21->field0_0x0).m_aData + iVar16;
                    /* end of inlined section */
      iVar17 = iVar16 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      pfVar9 = &(pPVar19->maSubject).field0_0x0;
      uVar18._0_1_ = pPVar19->adr_no;
      uVar18._1_1_ = pPVar19->chp_no;
      uVar18._2_1_ = pPVar19->status;
      uVar18._3_1_ = pPVar19->field_0x3;
      uVar18._4_2_ = pfVar9->m_aData[0].type;
      uVar18._6_2_ = pfVar9->m_aData[0].obj_no;
      uVar13 = *(ulong *)(sort_buff[iVar16].maSubject.field0_0x0.m_aData + 1);
      pPVar19 = sort_buff + iVar16;
      uVar12._0_4_ = pPVar19->score;
      uVar12._4_1_ = (pPVar19->time).stat;
      uVar12._5_1_ = (pPVar19->time).second;
      uVar12._6_1_ = (pPVar19->time).minute;
      uVar12._7_1_ = (pPVar19->time).hour;
      uVar10 = *(ulong *)&sort_buff[iVar16].time.pad;
      puVar3 = (undefined *)((int)&(pPVar11->maSubject).field0_0x0.m_aData[0].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar18 >> (7 - uVar5) * 8;
      uVar5 = (uint)pPVar11 & 7;
      *(ulong *)((int)pPVar11 - uVar5) =
           uVar18 << uVar5 * 8 |
           *(ulong *)((int)pPVar11 - uVar5) & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      puVar3 = (undefined *)((int)&(pPVar11->maSubject).field0_0x0.m_aData[2].obj_no + 1);
      uVar5 = (uint)puVar3 & 7;
      puVar7 = (ulong *)(puVar3 + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar13 >> (7 - uVar5) * 8;
      p_Var1 = (pPVar11->maSubject).field0_0x0.m_aData + 1;
      uVar5 = (uint)p_Var1 & 7;
      puVar7 = (ulong *)((int)p_Var1 - uVar5);
      *puVar7 = uVar13 << uVar5 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      puVar8 = &(pPVar11->time).hour;
      uVar5 = (uint)puVar8 & 7;
      puVar8 = puVar8 + -uVar5;
      *(ulong *)puVar8 = *(ulong *)puVar8 & -1L << (uVar5 + 1) * 8 | uVar12 >> (7 - uVar5) * 8;
      uVar5 = (uint)&pPVar11->score & 7;
      puVar7 = (ulong *)((int)&pPVar11->score - uVar5);
      *puVar7 = uVar12 << uVar5 * 8 | *puVar7 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      uVar5 = (uint)&pPVar11->field_0x1f & 7;
      puVar7 = (ulong *)(&pPVar11->field_0x1f + -uVar5);
      *puVar7 = *puVar7 & -1L << (uVar5 + 1) * 8 | uVar10 >> (7 - uVar5) * 8;
                    /* end of inlined section */
      puVar8 = &(pPVar11->time).pad;
                    /* end of inlined section */
      uVar5 = (uint)puVar8 & 7;
      puVar8 = puVar8 + -uVar5;
      *(ulong *)puVar8 =
           uVar10 << uVar5 * 8 | *(ulong *)puVar8 & 0xffffffffffffffffU >> (8 - uVar5) * 8;
      iVar16 = iVar17;
    } while (iVar17 < iVar20);
  }
  return;
}

void SortPhotoData_NewTime(PFILE_WRK *photo_file) {
	int i;
	int j;
	PICTURE_WRK buff;
	DATE_INFO date1;
	DATE_INFO date2;
	
  _PICTURE_SUBJECT *p_Var1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  uchar *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong in_a2;
  ulong in_a3;
  sceCdCLOCK sVar12;
  ulong uVar13;
  PICTURE_WRK *pPVar14;
  ulong uVar15;
  ulong uVar16;
  PICTURE_WRK *pPVar17;
  PICTURE_WRK buff;
  DATE_INFO date1;
  DATE_INFO date2;
  
  SortPhotoData_Before__FP9PFILE_WRK(photo_file);
  uVar9 = (ulong)photo_file->pic_num;
  iVar7 = photo_file->pic_num - 1;
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
                    /* end of inlined section */
          uVar9 = (ulong)date2.day.year;
          if ((long)date1.day.year < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
            puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
            uVar3 = (uint)puVar2 & 7;
            uVar4 = (uint)pPVar14 & 7;
            buff._0_8_ = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                         uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
            uVar3 = (uint)puVar2 & 7;
            p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
            uVar4 = (uint)p_Var1 & 7;
            uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                     uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
            puVar6 = &(pPVar14->time).hour;
            uVar3 = (uint)puVar6 & 7;
            uVar4 = (uint)&pPVar14->score & 7;
            uVar9 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                    in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
            uVar3 = (uint)&pPVar14->field_0x1f & 7;
            puVar6 = &(pPVar14->time).pad;
            uVar4 = (uint)puVar6 & 7;
            sVar12 = (sceCdCLOCK)
                     ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                      in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
            puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
            puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
            puVar6 = &buff.time.hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
            uVar3 = (uint)&buff.field_0x1f & 7;
            puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
            buff.maSubject.field0_0x0.m_aData._4_8_ = uVar10;
            buff._16_8_ = uVar9;
            buff._24_8_ = sVar12;
            _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
            uVar11 = 0x10;
            uVar9 = uVar16;
            uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
            puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            uVar4 = (uint)pPVar17 & 7;
            uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                    uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
            uVar4 = (uint)p_Var1 & 7;
            uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                     uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
            puVar6 = &(pPVar17->time).hour;
            uVar3 = (uint)puVar6 & 7;
            uVar4 = (uint)&pPVar17->score & 7;
            uVar9 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                    uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
            uVar3 = (uint)&pPVar17->field_0x1f & 7;
            puVar6 = &(pPVar17->time).pad;
            uVar4 = (uint)puVar6 & 7;
            uVar11 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                     uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
            uVar3 = (uint)pPVar14 & 7;
            *(ulong *)((int)pPVar14 - uVar3) =
                 uVar8 << uVar3 * 8 |
                 *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
            p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
            uVar3 = (uint)p_Var1 & 7;
            puVar5 = (ulong *)((int)p_Var1 - uVar3);
            *puVar5 = uVar10 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar6 = &(pPVar14->time).hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
            uVar3 = (uint)&pPVar14->score & 7;
            puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
            *puVar5 = uVar9 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            uVar3 = (uint)&pPVar14->field_0x1f & 7;
            puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
            puVar6 = &(pPVar14->time).pad;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 uVar11 << uVar3 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
            puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)pPVar17 & 7;
            *(ulong *)((int)pPVar17 - uVar3) =
                 buff._0_8_ << uVar3 * 8 |
                 *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                      (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
            p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
            uVar3 = (uint)p_Var1 & 7;
            puVar5 = (ulong *)((int)p_Var1 - uVar3);
            *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                      *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar6 = &(pPVar17->time).hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)buff._16_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)&pPVar17->score & 7;
            puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
            *puVar5 = buff._16_8_ << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            uVar3 = (uint)&pPVar17->field_0x1f & 7;
            puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8;
            puVar6 = &(pPVar17->time).pad;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 (long)buff._24_8_ << uVar3 * 8 |
                 *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            in_a2 = buff._0_8_;
            in_a3 = buff.maSubject.field0_0x0.m_aData._4_8_;
          }
                    /* end of inlined section */
          uVar9 = (ulong)photo_file->pic_num;
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
    iVar7 = (int)uVar9 + -1;
  }
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            uVar9 = (ulong)date2.day.month;
            if ((long)date1.day.month < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
              uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
              puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
              uVar3 = (uint)puVar2 & 7;
              uVar4 = (uint)pPVar14 & 7;
              uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                       in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                       *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
              puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
              uVar3 = (uint)puVar2 & 7;
              p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
              uVar4 = (uint)p_Var1 & 7;
              uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                       in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                       *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
              puVar6 = &(pPVar14->time).hour;
              uVar3 = (uint)puVar6 & 7;
              uVar4 = (uint)&pPVar14->score & 7;
              uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                      uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
              uVar3 = (uint)&pPVar14->field_0x1f & 7;
              puVar6 = &(pPVar14->time).pad;
              uVar4 = (uint)puVar6 & 7;
              sVar12 = (sceCdCLOCK)
                       ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                        uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                       *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
              puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
              puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
              puVar6 = &buff.time.hour;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
              uVar3 = (uint)&buff.field_0x1f & 7;
              puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
              buff._0_8_ = uVar10;
              buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
              buff._16_8_ = uVar8;
              buff._24_8_ = sVar12;
              _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
              uVar8 = 0x10;
              uVar9 = uVar16;
              _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
              puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
              uVar3 = (uint)puVar2 & 7;
              uVar4 = (uint)pPVar17 & 7;
              uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                      uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
              puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
              uVar3 = (uint)puVar2 & 7;
              p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
              uVar4 = (uint)p_Var1 & 7;
              uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                      uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
              puVar6 = &(pPVar17->time).hour;
              uVar3 = (uint)puVar6 & 7;
              uVar4 = (uint)&pPVar17->score & 7;
              in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                      uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
              uVar3 = (uint)&pPVar17->field_0x1f & 7;
              puVar6 = &(pPVar17->time).pad;
              uVar4 = (uint)puVar6 & 7;
              in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                      uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
              puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
              uVar3 = (uint)pPVar14 & 7;
              *(ulong *)((int)pPVar14 - uVar3) =
                   uVar9 << uVar3 * 8 |
                   *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
              p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
              uVar3 = (uint)p_Var1 & 7;
              puVar5 = (ulong *)((int)p_Var1 - uVar3);
              *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar6 = &(pPVar14->time).hour;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
              uVar3 = (uint)&pPVar14->score & 7;
              puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
              *puVar5 = in_a2 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              uVar3 = (uint)&pPVar14->field_0x1f & 7;
              puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
              puVar6 = &(pPVar14->time).pad;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   in_a3 << uVar3 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
              puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
              uVar3 = (uint)pPVar17 & 7;
              *(ulong *)((int)pPVar17 - uVar3) =
                   buff._0_8_ << uVar3 * 8 |
                   *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                        (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
              p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
              uVar3 = (uint)p_Var1 & 7;
              puVar5 = (ulong *)((int)p_Var1 - uVar3);
              *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                        *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar6 = &(pPVar17->time).hour;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)buff._16_8_ >> (7 - uVar3) * 8
              ;
              uVar3 = (uint)&pPVar17->score & 7;
              puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
              *puVar5 = buff._16_8_ << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              uVar3 = (uint)&pPVar17->field_0x1f & 7;
              puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8;
              puVar6 = &(pPVar17->time).pad;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   (long)buff._24_8_ << uVar3 * 8 |
                   *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
              uVar9 = (ulong)photo_file->pic_num;
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
  }
  iVar7 = (int)uVar9 + -1;
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            if (date1.day.month == date2.day.month) {
              uVar9 = (ulong)date2.day.day;
              if ((long)date1.day.day < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                uVar3 = (uint)puVar2 & 7;
                uVar4 = (uint)pPVar14 & 7;
                uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                         in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
                puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                uVar3 = (uint)puVar2 & 7;
                p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                uVar4 = (uint)p_Var1 & 7;
                uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                         in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                puVar6 = &(pPVar14->time).hour;
                uVar3 = (uint)puVar6 & 7;
                uVar4 = (uint)&pPVar14->score & 7;
                uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                        uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
                uVar3 = (uint)&pPVar14->field_0x1f & 7;
                puVar6 = &(pPVar14->time).pad;
                uVar4 = (uint)puVar6 & 7;
                sVar12 = (sceCdCLOCK)
                         ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                          uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
                puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
                puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
                puVar6 = &buff.time.hour;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                uVar3 = (uint)&buff.field_0x1f & 7;
                puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
                buff._0_8_ = uVar10;
                buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
                buff._16_8_ = uVar8;
                buff._24_8_ = sVar12;
                _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                uVar8 = 0x10;
                uVar9 = uVar16;
                _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                uVar3 = (uint)puVar2 & 7;
                uVar4 = (uint)pPVar17 & 7;
                uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                        uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
                puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                uVar3 = (uint)puVar2 & 7;
                p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                uVar4 = (uint)p_Var1 & 7;
                uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                        uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                puVar6 = &(pPVar17->time).hour;
                uVar3 = (uint)puVar6 & 7;
                uVar4 = (uint)&pPVar17->score & 7;
                in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                        uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
                uVar3 = (uint)&pPVar17->field_0x1f & 7;
                puVar6 = &(pPVar17->time).pad;
                uVar4 = (uint)puVar6 & 7;
                in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                        uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
                puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
                uVar3 = (uint)pPVar14 & 7;
                *(ulong *)((int)pPVar14 - uVar3) =
                     uVar9 << uVar3 * 8 |
                     *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                uVar3 = (uint)p_Var1 & 7;
                puVar5 = (ulong *)((int)p_Var1 - uVar3);
                *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                puVar6 = &(pPVar14->time).hour;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
                uVar3 = (uint)&pPVar14->score & 7;
                puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
                *puVar5 = in_a2 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                uVar3 = (uint)&pPVar14->field_0x1f & 7;
                puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
                puVar6 = &(pPVar14->time).pad;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     in_a3 << uVar3 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
                uVar3 = (uint)pPVar17 & 7;
                *(ulong *)((int)pPVar17 - uVar3) =
                     buff._0_8_ << uVar3 * 8 |
                     *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                          (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
                p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                uVar3 = (uint)p_Var1 & 7;
                puVar5 = (ulong *)((int)p_Var1 - uVar3);
                *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                          *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                puVar6 = &(pPVar17->time).hour;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 |
                     (ulong)buff._16_8_ >> (7 - uVar3) * 8;
                uVar3 = (uint)&pPVar17->score & 7;
                puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
                *puVar5 = buff._16_8_ << uVar3 * 8 |
                          *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                uVar3 = (uint)&pPVar17->field_0x1f & 7;
                puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8;
                puVar6 = &(pPVar17->time).pad;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     (long)buff._24_8_ << uVar3 * 8 |
                     *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
                uVar9 = (ulong)photo_file->pic_num;
              }
              else {
                uVar9 = (ulong)photo_file->pic_num;
              }
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
    iVar7 = (int)uVar9 + -1;
  }
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            if (date1.day.month == date2.day.month) {
              if (date1.day.day == date2.day.day) {
                uVar9 = (ulong)date2.time.hour;
                if ((long)date1.time.hour < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                  uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                  puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                  uVar3 = (uint)puVar2 & 7;
                  uVar4 = (uint)pPVar14 & 7;
                  uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                           in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
                  puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                  uVar3 = (uint)puVar2 & 7;
                  p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                  uVar4 = (uint)p_Var1 & 7;
                  uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                           in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                  puVar6 = &(pPVar14->time).hour;
                  uVar3 = (uint)puVar6 & 7;
                  uVar4 = (uint)&pPVar14->score & 7;
                  uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                          uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                          *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
                  uVar3 = (uint)&pPVar14->field_0x1f & 7;
                  puVar6 = &(pPVar14->time).pad;
                  uVar4 = (uint)puVar6 & 7;
                  sVar12 = (sceCdCLOCK)
                           ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                            uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
                  puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
                  puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
                  puVar6 = &buff.time.hour;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                  uVar3 = (uint)&buff.field_0x1f & 7;
                  puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
                  buff._0_8_ = uVar10;
                  buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
                  buff._16_8_ = uVar8;
                  buff._24_8_ = sVar12;
                  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                  uVar8 = 0x10;
                  uVar9 = uVar16;
                  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                  puVar2 = (undefined *)
                           ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                  uVar3 = (uint)puVar2 & 7;
                  uVar4 = (uint)pPVar17 & 7;
                  uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                          uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                          *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
                  puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                  uVar3 = (uint)puVar2 & 7;
                  p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                  uVar4 = (uint)p_Var1 & 7;
                  uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                          uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                          *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                  puVar6 = &(pPVar17->time).hour;
                  uVar3 = (uint)puVar6 & 7;
                  uVar4 = (uint)&pPVar17->score & 7;
                  in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                          uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                          | *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
                  uVar3 = (uint)&pPVar17->field_0x1f & 7;
                  puVar6 = &(pPVar17->time).pad;
                  uVar4 = (uint)puVar6 & 7;
                  in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                          uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                          | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
                  puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
                  uVar3 = (uint)pPVar14 & 7;
                  *(ulong *)((int)pPVar14 - uVar3) =
                       uVar9 << uVar3 * 8 |
                       *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                  p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                  uVar3 = (uint)p_Var1 & 7;
                  puVar5 = (ulong *)((int)p_Var1 - uVar3);
                  *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  puVar6 = &(pPVar14->time).hour;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
                  uVar3 = (uint)&pPVar14->score & 7;
                  puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
                  *puVar5 = in_a2 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  uVar3 = (uint)&pPVar14->field_0x1f & 7;
                  puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
                  puVar6 = &(pPVar14->time).pad;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       in_a3 << uVar3 * 8 |
                       *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                  puVar2 = (undefined *)
                           ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
                  uVar3 = (uint)pPVar17 & 7;
                  *(ulong *)((int)pPVar17 - uVar3) =
                       buff._0_8_ << uVar3 * 8 |
                       *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                            (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
                  p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                  uVar3 = (uint)p_Var1 & 7;
                  puVar5 = (ulong *)((int)p_Var1 - uVar3);
                  *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                            *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  puVar6 = &(pPVar17->time).hour;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 |
                       (ulong)buff._16_8_ >> (7 - uVar3) * 8;
                  uVar3 = (uint)&pPVar17->score & 7;
                  puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
                  *puVar5 = buff._16_8_ << uVar3 * 8 |
                            *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  uVar3 = (uint)&pPVar17->field_0x1f & 7;
                  puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8
                  ;
                  puVar6 = &(pPVar17->time).pad;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       (long)buff._24_8_ << uVar3 * 8 |
                       *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
                  uVar9 = (ulong)photo_file->pic_num;
                }
                else {
                  uVar9 = (ulong)photo_file->pic_num;
                }
              }
              else {
                uVar9 = (ulong)photo_file->pic_num;
              }
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
  }
  uVar16 = 0;
  if (0 < (int)uVar9 + -1) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            if (date1.day.month == date2.day.month) {
              if (date1.day.day == date2.day.day) {
                if (date1.time.hour == date2.time.hour) {
                  uVar9 = (ulong)date2.time.min;
                  if ((long)date1.time.min < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                    puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                    uVar3 = (uint)puVar2 & 7;
                    uVar4 = (uint)pPVar14 & 7;
                    uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                             in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                             -1L << (8 - uVar4) * 8 | *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
                    puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                    uVar3 = (uint)puVar2 & 7;
                    p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                    uVar4 = (uint)p_Var1 & 7;
                    uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                             in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                             -1L << (8 - uVar4) * 8 | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                    puVar6 = &(pPVar14->time).hour;
                    uVar3 = (uint)puVar6 & 7;
                    uVar4 = (uint)&pPVar14->score & 7;
                    uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                            uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                            | *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
                    uVar3 = (uint)&pPVar14->field_0x1f & 7;
                    puVar6 = &(pPVar14->time).pad;
                    uVar4 = (uint)puVar6 & 7;
                    sVar12 = (sceCdCLOCK)
                             ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                              uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
                    puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
                    puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
                    puVar6 = &buff.time.hour;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                    uVar3 = (uint)&buff.field_0x1f & 7;
                    puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
                    buff._0_8_ = uVar10;
                    buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
                    buff._16_8_ = uVar8;
                    buff._24_8_ = sVar12;
                    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                    uVar8 = 0x10;
                    uVar9 = uVar16;
                    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                    puVar2 = (undefined *)
                             ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                    uVar3 = (uint)puVar2 & 7;
                    uVar4 = (uint)pPVar17 & 7;
                    uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                            uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                            | *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
                    puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                    uVar3 = (uint)puVar2 & 7;
                    p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                    uVar4 = (uint)p_Var1 & 7;
                    uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                            uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                            | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                    puVar6 = &(pPVar17->time).hour;
                    uVar3 = (uint)puVar6 & 7;
                    uVar4 = (uint)&pPVar17->score & 7;
                    in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                            uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                            -1L << (8 - uVar4) * 8 |
                            *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
                    uVar3 = (uint)&pPVar17->field_0x1f & 7;
                    puVar6 = &(pPVar17->time).pad;
                    uVar4 = (uint)puVar6 & 7;
                    in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                            uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                            -1L << (8 - uVar4) * 8 | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
                    puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
                    uVar3 = (uint)pPVar14 & 7;
                    *(ulong *)((int)pPVar14 - uVar3) =
                         uVar9 << uVar3 * 8 |
                         *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                    p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                    uVar3 = (uint)p_Var1 & 7;
                    puVar5 = (ulong *)((int)p_Var1 - uVar3);
                    *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    puVar6 = &(pPVar14->time).hour;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
                    uVar3 = (uint)&pPVar14->score & 7;
                    puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
                    *puVar5 = in_a2 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    uVar3 = (uint)&pPVar14->field_0x1f & 7;
                    puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
                    puVar6 = &(pPVar14->time).pad;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         in_a3 << uVar3 * 8 |
                         *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                    puVar2 = (undefined *)
                             ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                              (ulong)buff._0_8_ >> (7 - uVar3) * 8;
                    uVar3 = (uint)pPVar17 & 7;
                    *(ulong *)((int)pPVar17 - uVar3) =
                         buff._0_8_ << uVar3 * 8 |
                         *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                              (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
                    p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                    uVar3 = (uint)p_Var1 & 7;
                    puVar5 = (ulong *)((int)p_Var1 - uVar3);
                    *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                              *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    puVar6 = &(pPVar17->time).hour;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 |
                         (ulong)buff._16_8_ >> (7 - uVar3) * 8;
                    uVar3 = (uint)&pPVar17->score & 7;
                    puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
                    *puVar5 = buff._16_8_ << uVar3 * 8 |
                              *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    uVar3 = (uint)&pPVar17->field_0x1f & 7;
                    puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                              (ulong)buff._24_8_ >> (7 - uVar3) * 8;
                    puVar6 = &(pPVar17->time).pad;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         (long)buff._24_8_ << uVar3 * 8 |
                         *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
                    uVar9 = (ulong)photo_file->pic_num;
                  }
                  else {
                    uVar9 = (ulong)photo_file->pic_num;
                  }
                }
                else {
                  uVar9 = (ulong)photo_file->pic_num;
                }
              }
              else {
                uVar9 = (ulong)photo_file->pic_num;
              }
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
  }
  if (0 < (int)uVar9 + -1) {
    iVar7 = 1;
    uVar16 = 0;
    do {
      uVar15 = (ulong)iVar7;
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + (int)uVar16;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            if (date1.day.month == date2.day.month) {
              if (date1.day.day == date2.day.day) {
                if (date1.time.hour == date2.time.hour) {
                  if (date1.time.min == date2.time.min) {
                    uVar9 = (ulong)date2.time.sec;
                    if ((long)date1.time.sec < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                      uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                      puVar2 = (undefined *)
                               ((int)&(pPVar14->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      uVar4 = (uint)pPVar14 & 7;
                      uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                               in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                               -1L << (8 - uVar4) * 8 |
                               *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
                      puVar2 = (undefined *)((int)((pPVar14->maSubject).field0_0x0.m_aData + 2) + 3)
                      ;
                      uVar3 = (uint)puVar2 & 7;
                      p_Var1 = (pPVar14->maSubject).field0_0x0.m_aData + 1;
                      uVar4 = (uint)p_Var1 & 7;
                      uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                               in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                               -1L << (8 - uVar4) * 8 | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8
                      ;
                      puVar6 = &(pPVar14->time).hour;
                      uVar3 = (uint)puVar6 & 7;
                      uVar4 = (uint)&pPVar14->score & 7;
                      uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                              uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 |
                              *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
                      uVar3 = (uint)&pPVar14->field_0x1f & 7;
                      puVar6 = &(pPVar14->time).pad;
                      uVar4 = (uint)puVar6 & 7;
                      sVar12 = (sceCdCLOCK)
                               ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                                uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                                -1L << (8 - uVar4) * 8 | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
                      puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
                      puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
                      puVar6 = &buff.time.hour;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                      uVar3 = (uint)&buff.field_0x1f & 7;
                      puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
                      buff._0_8_ = uVar10;
                      buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
                      buff._16_8_ = uVar8;
                      buff._24_8_ = sVar12;
                      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                      uVar8 = 0x10;
                      uVar9 = uVar16;
                      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                      puVar2 = (undefined *)
                               ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      uVar4 = (uint)pPVar17 & 7;
                      uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                              uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 | *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8
                      ;
                      puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3)
                      ;
                      uVar3 = (uint)puVar2 & 7;
                      p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                      uVar4 = (uint)p_Var1 & 7;
                      uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                              uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                      puVar6 = &(pPVar17->time).hour;
                      uVar3 = (uint)puVar6 & 7;
                      uVar4 = (uint)&pPVar17->score & 7;
                      in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                              uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 |
                              *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
                      uVar3 = (uint)&pPVar17->field_0x1f & 7;
                      puVar6 = &(pPVar17->time).pad;
                      uVar4 = (uint)puVar6 & 7;
                      in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                              uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
                      puVar2 = (undefined *)
                               ((int)&(pPVar14->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
                      uVar3 = (uint)pPVar14 & 7;
                      *(ulong *)((int)pPVar14 - uVar3) =
                           uVar9 << uVar3 * 8 |
                           *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
                      ;
                      puVar2 = (undefined *)((int)((pPVar14->maSubject).field0_0x0.m_aData + 2) + 3)
                      ;
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                      p_Var1 = (pPVar14->maSubject).field0_0x0.m_aData + 1;
                      uVar3 = (uint)p_Var1 & 7;
                      puVar5 = (ulong *)((int)p_Var1 - uVar3);
                      *puVar5 = uVar8 << uVar3 * 8 |
                                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      puVar6 = &(pPVar14->time).hour;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
                      uVar3 = (uint)&pPVar14->score & 7;
                      puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
                      *puVar5 = in_a2 << uVar3 * 8 |
                                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      uVar3 = (uint)&pPVar14->field_0x1f & 7;
                      puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
                      puVar6 = &(pPVar14->time).pad;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           in_a3 << uVar3 * 8 |
                           *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                      puVar2 = (undefined *)
                               ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                                (ulong)buff._0_8_ >> (7 - uVar3) * 8;
                      uVar3 = (uint)pPVar17 & 7;
                      *(ulong *)((int)pPVar17 - uVar3) =
                           buff._0_8_ << uVar3 * 8 |
                           *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
                      ;
                      puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3)
                      ;
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                                (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
                      p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                      uVar3 = (uint)p_Var1 & 7;
                      puVar5 = (ulong *)((int)p_Var1 - uVar3);
                      *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      puVar6 = &(pPVar17->time).hour;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 |
                           (ulong)buff._16_8_ >> (7 - uVar3) * 8;
                      uVar3 = (uint)&pPVar17->score & 7;
                      puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
                      *puVar5 = buff._16_8_ << uVar3 * 8 |
                                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      uVar3 = (uint)&pPVar17->field_0x1f & 7;
                      puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                                (ulong)buff._24_8_ >> (7 - uVar3) * 8;
                      puVar6 = &(pPVar17->time).pad;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           (long)buff._24_8_ << uVar3 * 8 |
                           *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
                      uVar9 = (ulong)photo_file->pic_num;
                    }
                    else {
                      uVar9 = (ulong)photo_file->pic_num;
                    }
                  }
                  else {
                    uVar9 = (ulong)photo_file->pic_num;
                  }
                }
                else {
                  uVar9 = (ulong)photo_file->pic_num;
                }
              }
              else {
                uVar9 = (ulong)photo_file->pic_num;
              }
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      iVar7 = iVar7 + 1;
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
  }
  return;
}

void SortPhotoData_OldTime(PFILE_WRK *photo_file) {
	int i;
	int j;
	PICTURE_WRK buff;
	DATE_INFO date1;
	DATE_INFO date2;
	
  _PICTURE_SUBJECT *p_Var1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  uchar *puVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong in_a2;
  ulong in_a3;
  sceCdCLOCK sVar12;
  ulong uVar13;
  PICTURE_WRK *pPVar14;
  ulong uVar15;
  ulong uVar16;
  PICTURE_WRK *pPVar17;
  PICTURE_WRK buff;
  DATE_INFO date1;
  DATE_INFO date2;
  
  SortPhotoData_Before__FP9PFILE_WRK(photo_file);
  uVar9 = (ulong)photo_file->pic_num;
  iVar7 = photo_file->pic_num - 1;
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          uVar9 = (ulong)date1.day.year;
                    /* end of inlined section */
          if ((long)date2.day.year < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
            puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
            uVar3 = (uint)puVar2 & 7;
            uVar4 = (uint)pPVar14 & 7;
            buff._0_8_ = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                         uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
            uVar3 = (uint)puVar2 & 7;
            p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
            uVar4 = (uint)p_Var1 & 7;
            uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                     uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
            puVar6 = &(pPVar14->time).hour;
            uVar3 = (uint)puVar6 & 7;
            uVar4 = (uint)&pPVar14->score & 7;
            uVar9 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                    in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
            uVar3 = (uint)&pPVar14->field_0x1f & 7;
            puVar6 = &(pPVar14->time).pad;
            uVar4 = (uint)puVar6 & 7;
            sVar12 = (sceCdCLOCK)
                     ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                      in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
            puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
            puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
            puVar6 = &buff.time.hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
            uVar3 = (uint)&buff.field_0x1f & 7;
            puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
            buff.maSubject.field0_0x0.m_aData._4_8_ = uVar10;
            buff._16_8_ = uVar9;
            buff._24_8_ = sVar12;
            _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
            uVar11 = 0x10;
            uVar9 = uVar16;
            uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
            puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            uVar4 = (uint)pPVar17 & 7;
            uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                    uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
            uVar4 = (uint)p_Var1 & 7;
            uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                     uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
            puVar6 = &(pPVar17->time).hour;
            uVar3 = (uint)puVar6 & 7;
            uVar4 = (uint)&pPVar17->score & 7;
            uVar9 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                    uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
            uVar3 = (uint)&pPVar17->field_0x1f & 7;
            puVar6 = &(pPVar17->time).pad;
            uVar4 = (uint)puVar6 & 7;
            uVar11 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                     uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
            uVar3 = (uint)pPVar14 & 7;
            *(ulong *)((int)pPVar14 - uVar3) =
                 uVar8 << uVar3 * 8 |
                 *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
            p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
            uVar3 = (uint)p_Var1 & 7;
            puVar5 = (ulong *)((int)p_Var1 - uVar3);
            *puVar5 = uVar10 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar6 = &(pPVar14->time).hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
            uVar3 = (uint)&pPVar14->score & 7;
            puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
            *puVar5 = uVar9 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            uVar3 = (uint)&pPVar14->field_0x1f & 7;
            puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
            puVar6 = &(pPVar14->time).pad;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 uVar11 << uVar3 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
            puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)pPVar17 & 7;
            *(ulong *)((int)pPVar17 - uVar3) =
                 buff._0_8_ << uVar3 * 8 |
                 *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                      (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
            p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
            uVar3 = (uint)p_Var1 & 7;
            puVar5 = (ulong *)((int)p_Var1 - uVar3);
            *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                      *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar6 = &(pPVar17->time).hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)buff._16_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)&pPVar17->score & 7;
            puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
            *puVar5 = buff._16_8_ << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            uVar3 = (uint)&pPVar17->field_0x1f & 7;
            puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8;
            puVar6 = &(pPVar17->time).pad;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 (long)buff._24_8_ << uVar3 * 8 |
                 *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            in_a2 = buff._0_8_;
            in_a3 = buff.maSubject.field0_0x0.m_aData._4_8_;
          }
                    /* end of inlined section */
          uVar9 = (ulong)photo_file->pic_num;
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
    iVar7 = (int)uVar9 + -1;
  }
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            uVar9 = (ulong)date1.day.month;
            if ((long)date2.day.month < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
              uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
              puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
              uVar3 = (uint)puVar2 & 7;
              uVar4 = (uint)pPVar14 & 7;
              uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                       in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                       *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
              puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
              uVar3 = (uint)puVar2 & 7;
              p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
              uVar4 = (uint)p_Var1 & 7;
              uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                       in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                       *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
              puVar6 = &(pPVar14->time).hour;
              uVar3 = (uint)puVar6 & 7;
              uVar4 = (uint)&pPVar14->score & 7;
              uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                      uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
              uVar3 = (uint)&pPVar14->field_0x1f & 7;
              puVar6 = &(pPVar14->time).pad;
              uVar4 = (uint)puVar6 & 7;
              sVar12 = (sceCdCLOCK)
                       ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                        uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                       *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
              puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
              puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
              puVar6 = &buff.time.hour;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
              uVar3 = (uint)&buff.field_0x1f & 7;
              puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
              buff._0_8_ = uVar10;
              buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
              buff._16_8_ = uVar8;
              buff._24_8_ = sVar12;
              _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
              uVar8 = 0x10;
              uVar9 = uVar16;
              _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
              puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
              uVar3 = (uint)puVar2 & 7;
              uVar4 = (uint)pPVar17 & 7;
              uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                      uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
              puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
              uVar3 = (uint)puVar2 & 7;
              p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
              uVar4 = (uint)p_Var1 & 7;
              uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                      uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
              puVar6 = &(pPVar17->time).hour;
              uVar3 = (uint)puVar6 & 7;
              uVar4 = (uint)&pPVar17->score & 7;
              in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                      uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
              uVar3 = (uint)&pPVar17->field_0x1f & 7;
              puVar6 = &(pPVar17->time).pad;
              uVar4 = (uint)puVar6 & 7;
              in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                      uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                      *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
              puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
              uVar3 = (uint)pPVar14 & 7;
              *(ulong *)((int)pPVar14 - uVar3) =
                   uVar9 << uVar3 * 8 |
                   *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
              p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
              uVar3 = (uint)p_Var1 & 7;
              puVar5 = (ulong *)((int)p_Var1 - uVar3);
              *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar6 = &(pPVar14->time).hour;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
              uVar3 = (uint)&pPVar14->score & 7;
              puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
              *puVar5 = in_a2 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              uVar3 = (uint)&pPVar14->field_0x1f & 7;
              puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
              puVar6 = &(pPVar14->time).pad;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   in_a3 << uVar3 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
              puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
              uVar3 = (uint)pPVar17 & 7;
              *(ulong *)((int)pPVar17 - uVar3) =
                   buff._0_8_ << uVar3 * 8 |
                   *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
              uVar3 = (uint)puVar2 & 7;
              puVar5 = (ulong *)(puVar2 + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                        (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
              p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
              uVar3 = (uint)p_Var1 & 7;
              puVar5 = (ulong *)((int)p_Var1 - uVar3);
              *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                        *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              puVar6 = &(pPVar17->time).hour;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)buff._16_8_ >> (7 - uVar3) * 8
              ;
              uVar3 = (uint)&pPVar17->score & 7;
              puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
              *puVar5 = buff._16_8_ << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
              uVar3 = (uint)&pPVar17->field_0x1f & 7;
              puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
              *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8;
              puVar6 = &(pPVar17->time).pad;
              uVar3 = (uint)puVar6 & 7;
              puVar6 = puVar6 + -uVar3;
              *(ulong *)puVar6 =
                   (long)buff._24_8_ << uVar3 * 8 |
                   *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
              uVar9 = (ulong)photo_file->pic_num;
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
  }
  iVar7 = (int)uVar9 + -1;
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            if (date1.day.month == date2.day.month) {
              uVar9 = (ulong)date1.day.day;
              if ((long)date2.day.day < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                uVar3 = (uint)puVar2 & 7;
                uVar4 = (uint)pPVar14 & 7;
                uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                         in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
                puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                uVar3 = (uint)puVar2 & 7;
                p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                uVar4 = (uint)p_Var1 & 7;
                uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                         in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                puVar6 = &(pPVar14->time).hour;
                uVar3 = (uint)puVar6 & 7;
                uVar4 = (uint)&pPVar14->score & 7;
                uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                        uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
                uVar3 = (uint)&pPVar14->field_0x1f & 7;
                puVar6 = &(pPVar14->time).pad;
                uVar4 = (uint)puVar6 & 7;
                sVar12 = (sceCdCLOCK)
                         ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                          uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
                puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
                puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
                puVar6 = &buff.time.hour;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                uVar3 = (uint)&buff.field_0x1f & 7;
                puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
                buff._0_8_ = uVar10;
                buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
                buff._16_8_ = uVar8;
                buff._24_8_ = sVar12;
                _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                uVar8 = 0x10;
                uVar9 = uVar16;
                _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                uVar3 = (uint)puVar2 & 7;
                uVar4 = (uint)pPVar17 & 7;
                uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                        uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
                puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                uVar3 = (uint)puVar2 & 7;
                p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                uVar4 = (uint)p_Var1 & 7;
                uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                        uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                puVar6 = &(pPVar17->time).hour;
                uVar3 = (uint)puVar6 & 7;
                uVar4 = (uint)&pPVar17->score & 7;
                in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                        uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
                uVar3 = (uint)&pPVar17->field_0x1f & 7;
                puVar6 = &(pPVar17->time).pad;
                uVar4 = (uint)puVar6 & 7;
                in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                        uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                        *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
                puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
                uVar3 = (uint)pPVar14 & 7;
                *(ulong *)((int)pPVar14 - uVar3) =
                     uVar9 << uVar3 * 8 |
                     *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                uVar3 = (uint)p_Var1 & 7;
                puVar5 = (ulong *)((int)p_Var1 - uVar3);
                *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                puVar6 = &(pPVar14->time).hour;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
                uVar3 = (uint)&pPVar14->score & 7;
                puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
                *puVar5 = in_a2 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                uVar3 = (uint)&pPVar14->field_0x1f & 7;
                puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
                puVar6 = &(pPVar14->time).pad;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     in_a3 << uVar3 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                puVar2 = (undefined *)((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
                uVar3 = (uint)pPVar17 & 7;
                *(ulong *)((int)pPVar17 - uVar3) =
                     buff._0_8_ << uVar3 * 8 |
                     *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                uVar3 = (uint)puVar2 & 7;
                puVar5 = (ulong *)(puVar2 + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                          (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
                p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                uVar3 = (uint)p_Var1 & 7;
                puVar5 = (ulong *)((int)p_Var1 - uVar3);
                *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                          *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                puVar6 = &(pPVar17->time).hour;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 |
                     (ulong)buff._16_8_ >> (7 - uVar3) * 8;
                uVar3 = (uint)&pPVar17->score & 7;
                puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
                *puVar5 = buff._16_8_ << uVar3 * 8 |
                          *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                uVar3 = (uint)&pPVar17->field_0x1f & 7;
                puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
                *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8;
                puVar6 = &(pPVar17->time).pad;
                uVar3 = (uint)puVar6 & 7;
                puVar6 = puVar6 + -uVar3;
                *(ulong *)puVar6 =
                     (long)buff._24_8_ << uVar3 * 8 |
                     *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
                uVar9 = (ulong)photo_file->pic_num;
              }
              else {
                uVar9 = (ulong)photo_file->pic_num;
              }
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
    iVar7 = (int)uVar9 + -1;
  }
  uVar16 = 0;
  if (0 < iVar7) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            if (date1.day.month == date2.day.month) {
              if (date1.day.day == date2.day.day) {
                uVar9 = (ulong)date1.time.hour;
                if ((long)date2.time.hour < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                  uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                  puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                  uVar3 = (uint)puVar2 & 7;
                  uVar4 = (uint)pPVar14 & 7;
                  uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                           in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
                  puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                  uVar3 = (uint)puVar2 & 7;
                  p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                  uVar4 = (uint)p_Var1 & 7;
                  uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                           in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                  puVar6 = &(pPVar14->time).hour;
                  uVar3 = (uint)puVar6 & 7;
                  uVar4 = (uint)&pPVar14->score & 7;
                  uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                          uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                          *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
                  uVar3 = (uint)&pPVar14->field_0x1f & 7;
                  puVar6 = &(pPVar14->time).pad;
                  uVar4 = (uint)puVar6 & 7;
                  sVar12 = (sceCdCLOCK)
                           ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                            uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                           | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
                  puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
                  puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
                  puVar6 = &buff.time.hour;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                  uVar3 = (uint)&buff.field_0x1f & 7;
                  puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
                  buff._0_8_ = uVar10;
                  buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
                  buff._16_8_ = uVar8;
                  buff._24_8_ = sVar12;
                  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                  uVar8 = 0x10;
                  uVar9 = uVar16;
                  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                  puVar2 = (undefined *)
                           ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                  uVar3 = (uint)puVar2 & 7;
                  uVar4 = (uint)pPVar17 & 7;
                  uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                          uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                          *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
                  puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                  uVar3 = (uint)puVar2 & 7;
                  p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                  uVar4 = (uint)p_Var1 & 7;
                  uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                          uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                          *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                  puVar6 = &(pPVar17->time).hour;
                  uVar3 = (uint)puVar6 & 7;
                  uVar4 = (uint)&pPVar17->score & 7;
                  in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                          uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                          | *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
                  uVar3 = (uint)&pPVar17->field_0x1f & 7;
                  puVar6 = &(pPVar17->time).pad;
                  uVar4 = (uint)puVar6 & 7;
                  in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                          uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                          | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
                  puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
                  uVar3 = (uint)pPVar14 & 7;
                  *(ulong *)((int)pPVar14 - uVar3) =
                       uVar9 << uVar3 * 8 |
                       *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                  p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                  uVar3 = (uint)p_Var1 & 7;
                  puVar5 = (ulong *)((int)p_Var1 - uVar3);
                  *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  puVar6 = &(pPVar14->time).hour;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
                  uVar3 = (uint)&pPVar14->score & 7;
                  puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
                  *puVar5 = in_a2 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  uVar3 = (uint)&pPVar14->field_0x1f & 7;
                  puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
                  puVar6 = &(pPVar14->time).pad;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       in_a3 << uVar3 * 8 |
                       *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                  puVar2 = (undefined *)
                           ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
                  uVar3 = (uint)pPVar17 & 7;
                  *(ulong *)((int)pPVar17 - uVar3) =
                       buff._0_8_ << uVar3 * 8 |
                       *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                  uVar3 = (uint)puVar2 & 7;
                  puVar5 = (ulong *)(puVar2 + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                            (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
                  p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                  uVar3 = (uint)p_Var1 & 7;
                  puVar5 = (ulong *)((int)p_Var1 - uVar3);
                  *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                            *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  puVar6 = &(pPVar17->time).hour;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 |
                       (ulong)buff._16_8_ >> (7 - uVar3) * 8;
                  uVar3 = (uint)&pPVar17->score & 7;
                  puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
                  *puVar5 = buff._16_8_ << uVar3 * 8 |
                            *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                  uVar3 = (uint)&pPVar17->field_0x1f & 7;
                  puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
                  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8
                  ;
                  puVar6 = &(pPVar17->time).pad;
                  uVar3 = (uint)puVar6 & 7;
                  puVar6 = puVar6 + -uVar3;
                  *(ulong *)puVar6 =
                       (long)buff._24_8_ << uVar3 * 8 |
                       *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
                  uVar9 = (ulong)photo_file->pic_num;
                }
                else {
                  uVar9 = (ulong)photo_file->pic_num;
                }
              }
              else {
                uVar9 = (ulong)photo_file->pic_num;
              }
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
  }
  uVar16 = 0;
  if (0 < (int)uVar9 + -1) {
    do {
      iVar7 = (int)uVar16;
      uVar15 = (ulong)(iVar7 + 1);
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7 + 1;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            if (date1.day.month == date2.day.month) {
              if (date1.day.day == date2.day.day) {
                if (date1.time.hour == date2.time.hour) {
                  uVar9 = (ulong)date1.time.min;
                  if ((long)date2.time.min < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                    puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                    uVar3 = (uint)puVar2 & 7;
                    uVar4 = (uint)pPVar14 & 7;
                    uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                             in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                             -1L << (8 - uVar4) * 8 | *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
                    puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                    uVar3 = (uint)puVar2 & 7;
                    p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                    uVar4 = (uint)p_Var1 & 7;
                    uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                             in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                             -1L << (8 - uVar4) * 8 | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                    puVar6 = &(pPVar14->time).hour;
                    uVar3 = (uint)puVar6 & 7;
                    uVar4 = (uint)&pPVar14->score & 7;
                    uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                            uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                            | *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
                    uVar3 = (uint)&pPVar14->field_0x1f & 7;
                    puVar6 = &(pPVar14->time).pad;
                    uVar4 = (uint)puVar6 & 7;
                    sVar12 = (sceCdCLOCK)
                             ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                              uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
                    puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
                    puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
                    puVar6 = &buff.time.hour;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                    uVar3 = (uint)&buff.field_0x1f & 7;
                    puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
                    buff._0_8_ = uVar10;
                    buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
                    buff._16_8_ = uVar8;
                    buff._24_8_ = sVar12;
                    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                    uVar8 = 0x10;
                    uVar9 = uVar16;
                    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                    puVar2 = (undefined *)
                             ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                    uVar3 = (uint)puVar2 & 7;
                    uVar4 = (uint)pPVar17 & 7;
                    uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                            uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                            | *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8;
                    puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                    uVar3 = (uint)puVar2 & 7;
                    p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                    uVar4 = (uint)p_Var1 & 7;
                    uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                            uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8
                            | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                    puVar6 = &(pPVar17->time).hour;
                    uVar3 = (uint)puVar6 & 7;
                    uVar4 = (uint)&pPVar17->score & 7;
                    in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                            uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                            -1L << (8 - uVar4) * 8 |
                            *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
                    uVar3 = (uint)&pPVar17->field_0x1f & 7;
                    puVar6 = &(pPVar17->time).pad;
                    uVar4 = (uint)puVar6 & 7;
                    in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                            uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                            -1L << (8 - uVar4) * 8 | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
                    puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 3);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
                    uVar3 = (uint)pPVar14 & 7;
                    *(ulong *)((int)pPVar14 - uVar3) =
                         uVar9 << uVar3 * 8 |
                         *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    puVar2 = (undefined *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 0xb);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                    p_Var1 = (_PICTURE_SUBJECT *)((int)(pPVar14->maSubject).field0_0x0.m_aData + 4);
                    uVar3 = (uint)p_Var1 & 7;
                    puVar5 = (ulong *)((int)p_Var1 - uVar3);
                    *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    puVar6 = &(pPVar14->time).hour;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
                    uVar3 = (uint)&pPVar14->score & 7;
                    puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
                    *puVar5 = in_a2 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    uVar3 = (uint)&pPVar14->field_0x1f & 7;
                    puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
                    puVar6 = &(pPVar14->time).pad;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         in_a3 << uVar3 * 8 |
                         *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                    puVar2 = (undefined *)
                             ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                              (ulong)buff._0_8_ >> (7 - uVar3) * 8;
                    uVar3 = (uint)pPVar17 & 7;
                    *(ulong *)((int)pPVar17 - uVar3) =
                         buff._0_8_ << uVar3 * 8 |
                         *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3);
                    uVar3 = (uint)puVar2 & 7;
                    puVar5 = (ulong *)(puVar2 + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                              (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
                    p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                    uVar3 = (uint)p_Var1 & 7;
                    puVar5 = (ulong *)((int)p_Var1 - uVar3);
                    *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                              *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    puVar6 = &(pPVar17->time).hour;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 |
                         (ulong)buff._16_8_ >> (7 - uVar3) * 8;
                    uVar3 = (uint)&pPVar17->score & 7;
                    puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
                    *puVar5 = buff._16_8_ << uVar3 * 8 |
                              *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    uVar3 = (uint)&pPVar17->field_0x1f & 7;
                    puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
                    *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                              (ulong)buff._24_8_ >> (7 - uVar3) * 8;
                    puVar6 = &(pPVar17->time).pad;
                    uVar3 = (uint)puVar6 & 7;
                    puVar6 = puVar6 + -uVar3;
                    *(ulong *)puVar6 =
                         (long)buff._24_8_ << uVar3 * 8 |
                         *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
                    uVar9 = (ulong)photo_file->pic_num;
                  }
                  else {
                    uVar9 = (ulong)photo_file->pic_num;
                  }
                }
                else {
                  uVar9 = (ulong)photo_file->pic_num;
                }
              }
              else {
                uVar9 = (ulong)photo_file->pic_num;
              }
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
  }
  if (0 < (int)uVar9 + -1) {
    iVar7 = 1;
    uVar16 = 0;
    do {
      uVar15 = (ulong)iVar7;
      if ((long)uVar15 < (long)uVar9) {
        pPVar17 = (photo_file->pic).field0_0x0.m_aData + (int)uVar16;
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + iVar7;
        uVar13 = uVar15;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar16,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date1,&pPVar17->time);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
          SetDateInfoType__FP9DATE_INFOP10sceCdCLOCK(&date2,&pPVar14->time);
                    /* end of inlined section */
          if (date1.day.year == date2.day.year) {
            if (date1.day.month == date2.day.month) {
              if (date1.day.day == date2.day.day) {
                if (date1.time.hour == date2.time.hour) {
                  if (date1.time.min == date2.time.min) {
                    uVar9 = (ulong)date1.time.sec;
                    if ((long)date2.time.sec < (long)uVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                      uVar8 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                      puVar2 = (undefined *)
                               ((int)&(pPVar14->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      uVar4 = (uint)pPVar14 & 7;
                      uVar10 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                               in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                               -1L << (8 - uVar4) * 8 |
                               *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
                      puVar2 = (undefined *)((int)((pPVar14->maSubject).field0_0x0.m_aData + 2) + 3)
                      ;
                      uVar3 = (uint)puVar2 & 7;
                      p_Var1 = (pPVar14->maSubject).field0_0x0.m_aData + 1;
                      uVar4 = (uint)p_Var1 & 7;
                      uVar11 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                               in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                               -1L << (8 - uVar4) * 8 | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8
                      ;
                      puVar6 = &(pPVar14->time).hour;
                      uVar3 = (uint)puVar6 & 7;
                      uVar4 = (uint)&pPVar14->score & 7;
                      uVar8 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                              uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 |
                              *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
                      uVar3 = (uint)&pPVar14->field_0x1f & 7;
                      puVar6 = &(pPVar14->time).pad;
                      uVar4 = (uint)puVar6 & 7;
                      sVar12 = (sceCdCLOCK)
                               ((*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                                uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                                -1L << (8 - uVar4) * 8 | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
                      puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
                      puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar11 >> (7 - uVar3) * 8;
                      puVar6 = &buff.time.hour;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                      uVar3 = (uint)&buff.field_0x1f & 7;
                      puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar12 >> (7 - uVar3) * 8;
                      buff._0_8_ = uVar10;
                      buff.maSubject.field0_0x0.m_aData._4_8_ = uVar11;
                      buff._16_8_ = uVar8;
                      buff._24_8_ = sVar12;
                      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar13,0x10);
                      uVar8 = 0x10;
                      uVar9 = uVar16;
                      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                      puVar2 = (undefined *)
                               ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      uVar4 = (uint)pPVar17 & 7;
                      uVar9 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                              uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 | *(ulong *)((int)pPVar17 - uVar4) >> uVar4 * 8
                      ;
                      puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3)
                      ;
                      uVar3 = (uint)puVar2 & 7;
                      p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                      uVar4 = (uint)p_Var1 & 7;
                      uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                              uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 | *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
                      puVar6 = &(pPVar17->time).hour;
                      uVar3 = (uint)puVar6 & 7;
                      uVar4 = (uint)&pPVar17->score & 7;
                      in_a2 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                              uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 |
                              *(ulong *)((int)&pPVar17->score - uVar4) >> uVar4 * 8;
                      uVar3 = (uint)&pPVar17->field_0x1f & 7;
                      puVar6 = &(pPVar17->time).pad;
                      uVar4 = (uint)puVar6 & 7;
                      in_a3 = (*(long *)(&pPVar17->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                              uVar11 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) &
                              -1L << (8 - uVar4) * 8 | *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
                      puVar2 = (undefined *)
                               ((int)&(pPVar14->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
                      uVar3 = (uint)pPVar14 & 7;
                      *(ulong *)((int)pPVar14 - uVar3) =
                           uVar9 << uVar3 * 8 |
                           *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
                      ;
                      puVar2 = (undefined *)((int)((pPVar14->maSubject).field0_0x0.m_aData + 2) + 3)
                      ;
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
                      p_Var1 = (pPVar14->maSubject).field0_0x0.m_aData + 1;
                      uVar3 = (uint)p_Var1 & 7;
                      puVar5 = (ulong *)((int)p_Var1 - uVar3);
                      *puVar5 = uVar8 << uVar3 * 8 |
                                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      puVar6 = &(pPVar14->time).hour;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | in_a2 >> (7 - uVar3) * 8;
                      uVar3 = (uint)&pPVar14->score & 7;
                      puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
                      *puVar5 = in_a2 << uVar3 * 8 |
                                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      uVar3 = (uint)&pPVar14->field_0x1f & 7;
                      puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | in_a3 >> (7 - uVar3) * 8;
                      puVar6 = &(pPVar14->time).pad;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           in_a3 << uVar3 * 8 |
                           *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
                      puVar2 = (undefined *)
                               ((int)&(pPVar17->maSubject).field0_0x0.m_aData[0].obj_no + 1);
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                                (ulong)buff._0_8_ >> (7 - uVar3) * 8;
                      uVar3 = (uint)pPVar17 & 7;
                      *(ulong *)((int)pPVar17 - uVar3) =
                           buff._0_8_ << uVar3 * 8 |
                           *(ulong *)((int)pPVar17 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8
                      ;
                      puVar2 = (undefined *)((int)((pPVar17->maSubject).field0_0x0.m_aData + 2) + 3)
                      ;
                      uVar3 = (uint)puVar2 & 7;
                      puVar5 = (ulong *)(puVar2 + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                                (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
                      p_Var1 = (pPVar17->maSubject).field0_0x0.m_aData + 1;
                      uVar3 = (uint)p_Var1 & 7;
                      puVar5 = (ulong *)((int)p_Var1 - uVar3);
                      *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      puVar6 = &(pPVar17->time).hour;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 |
                           (ulong)buff._16_8_ >> (7 - uVar3) * 8;
                      uVar3 = (uint)&pPVar17->score & 7;
                      puVar5 = (ulong *)((int)&pPVar17->score - uVar3);
                      *puVar5 = buff._16_8_ << uVar3 * 8 |
                                *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                      uVar3 = (uint)&pPVar17->field_0x1f & 7;
                      puVar5 = (ulong *)(&pPVar17->field_0x1f + -uVar3);
                      *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                                (ulong)buff._24_8_ >> (7 - uVar3) * 8;
                      puVar6 = &(pPVar17->time).pad;
                      uVar3 = (uint)puVar6 & 7;
                      puVar6 = puVar6 + -uVar3;
                      *(ulong *)puVar6 =
                           (long)buff._24_8_ << uVar3 * 8 |
                           *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
                    /* end of inlined section */
                      uVar9 = (ulong)photo_file->pic_num;
                    }
                    else {
                      uVar9 = (ulong)photo_file->pic_num;
                    }
                  }
                  else {
                    uVar9 = (ulong)photo_file->pic_num;
                  }
                }
                else {
                  uVar9 = (ulong)photo_file->pic_num;
                }
              }
              else {
                uVar9 = (ulong)photo_file->pic_num;
              }
            }
            else {
              uVar9 = (ulong)photo_file->pic_num;
            }
          }
          else {
            uVar9 = (ulong)photo_file->pic_num;
          }
          uVar13 = (ulong)((int)uVar13 + 1);
          pPVar14 = pPVar14 + 1;
        } while ((long)uVar13 < (long)uVar9);
      }
      iVar7 = iVar7 + 1;
      uVar16 = uVar15;
    } while ((long)uVar15 < (long)((int)uVar9 + -1));
  }
  return;
}

void SortPhotoData_BigScore(PFILE_WRK *photo_file) {
	int i;
	int j;
	PICTURE_WRK buff;
	
  _PICTURE_SUBJECT *p_Var1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  uchar *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong in_a2;
  ulong in_a3;
  sceCdCLOCK sVar11;
  ulong uVar12;
  PICTURE_WRK *pPVar13;
  PICTURE_WRK *pPVar14;
  ulong uVar15;
  int iVar16;
  PICTURE_WRK buff;
  ulong uVar17;
  
  SortPhotoData_Before__FP9PFILE_WRK(photo_file);
  uVar9 = (ulong)photo_file->pic_num;
  if (0 < (int)(photo_file->pic_num - 1)) {
    iVar16 = 1;
    uVar15 = 0;
    do {
      uVar17 = (ulong)iVar16;
      if ((long)uVar17 < (long)uVar9) {
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + (int)uVar15;
        pPVar13 = (photo_file->pic).field0_0x0.m_aData + iVar16;
        uVar12 = uVar17;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar15,0x10);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar12,0x10);
          uVar9 = (ulong)(int)pPVar13->score;
          if ((ulong)(long)(int)pPVar14->score < uVar9) {
            uVar7 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar12,0x10);
            puVar2 = (undefined *)((int)&(pPVar13->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            uVar4 = (uint)pPVar13 & 7;
            buff._0_8_ = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                         uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)pPVar13 - uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)((pPVar13->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            p_Var1 = (pPVar13->maSubject).field0_0x0.m_aData + 1;
            uVar4 = (uint)p_Var1 & 7;
            uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                    uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
            puVar6 = &(pPVar13->time).hour;
            uVar3 = (uint)puVar6 & 7;
            uVar4 = (uint)&pPVar13->score & 7;
            uVar9 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                    in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)&pPVar13->score - uVar4) >> uVar4 * 8;
            uVar3 = (uint)&pPVar13->field_0x1f & 7;
            puVar6 = &(pPVar13->time).pad;
            uVar4 = (uint)puVar6 & 7;
            sVar11 = (sceCdCLOCK)
                     ((*(long *)(&pPVar13->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                      in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
            puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
            puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
            puVar6 = &buff.time.hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
            uVar3 = (uint)&buff.field_0x1f & 7;
            puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar11 >> (7 - uVar3) * 8;
            buff.maSubject.field0_0x0.m_aData._4_8_ = uVar8;
            buff._16_8_ = uVar9;
            buff._24_8_ = sVar11;
            _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar12,0x10);
            uVar10 = 0x10;
            uVar9 = uVar15;
            uVar7 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
            puVar2 = (undefined *)((int)&(pPVar14->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            uVar4 = (uint)pPVar14 & 7;
            uVar7 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                    uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)((pPVar14->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            p_Var1 = (pPVar14->maSubject).field0_0x0.m_aData + 1;
            uVar4 = (uint)p_Var1 & 7;
            uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                    uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
            puVar6 = &(pPVar14->time).hour;
            uVar3 = (uint)puVar6 & 7;
            uVar4 = (uint)&pPVar14->score & 7;
            uVar9 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                    uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
            uVar3 = (uint)&pPVar14->field_0x1f & 7;
            puVar6 = &(pPVar14->time).pad;
            uVar4 = (uint)puVar6 & 7;
            uVar10 = (*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                     uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)&(pPVar13->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
            uVar3 = (uint)pPVar13 & 7;
            *(ulong *)((int)pPVar13 - uVar3) =
                 uVar7 << uVar3 * 8 |
                 *(ulong *)((int)pPVar13 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)((pPVar13->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
            p_Var1 = (pPVar13->maSubject).field0_0x0.m_aData + 1;
            uVar3 = (uint)p_Var1 & 7;
            puVar5 = (ulong *)((int)p_Var1 - uVar3);
            *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar6 = &(pPVar13->time).hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
            uVar3 = (uint)&pPVar13->score & 7;
            puVar5 = (ulong *)((int)&pPVar13->score - uVar3);
            *puVar5 = uVar9 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            uVar3 = (uint)&pPVar13->field_0x1f & 7;
            puVar5 = (ulong *)(&pPVar13->field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
            puVar6 = &(pPVar13->time).pad;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 uVar10 << uVar3 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar15,0x10);
            puVar2 = (undefined *)((int)&(pPVar14->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)pPVar14 & 7;
            *(ulong *)((int)pPVar14 - uVar3) =
                 buff._0_8_ << uVar3 * 8 |
                 *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)((pPVar14->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                      (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
            p_Var1 = (pPVar14->maSubject).field0_0x0.m_aData + 1;
            uVar3 = (uint)p_Var1 & 7;
            puVar5 = (ulong *)((int)p_Var1 - uVar3);
            *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                      *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar6 = &(pPVar14->time).hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)buff._16_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)&pPVar14->score & 7;
            puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
            *puVar5 = buff._16_8_ << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            uVar3 = (uint)&pPVar14->field_0x1f & 7;
            puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8;
            puVar6 = &(pPVar14->time).pad;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 (long)buff._24_8_ << uVar3 * 8 |
                 *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            in_a2 = buff._0_8_;
            in_a3 = buff.maSubject.field0_0x0.m_aData._4_8_;
          }
                    /* end of inlined section */
          uVar9 = (ulong)photo_file->pic_num;
          uVar12 = (ulong)((int)uVar12 + 1);
          pPVar13 = pPVar13 + 1;
        } while ((long)uVar12 < (long)uVar9);
      }
      iVar16 = iVar16 + 1;
      uVar15 = uVar17;
    } while ((long)uVar17 < (long)((int)uVar9 + -1));
  }
  return;
}

void SortPhotoData_SmallScore(PFILE_WRK *photo_file) {
	int i;
	int j;
	PICTURE_WRK buff;
	
  _PICTURE_SUBJECT *p_Var1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  uchar *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong in_a2;
  ulong in_a3;
  sceCdCLOCK sVar11;
  ulong uVar12;
  PICTURE_WRK *pPVar13;
  PICTURE_WRK *pPVar14;
  ulong uVar15;
  int iVar16;
  PICTURE_WRK buff;
  ulong uVar17;
  
  SortPhotoData_Before__FP9PFILE_WRK(photo_file);
  uVar9 = (ulong)photo_file->pic_num;
  if (0 < (int)(photo_file->pic_num - 1)) {
    iVar16 = 1;
    uVar15 = 0;
    do {
      uVar17 = (ulong)iVar16;
      if ((long)uVar17 < (long)uVar9) {
        pPVar14 = (photo_file->pic).field0_0x0.m_aData + (int)uVar15;
        pPVar13 = (photo_file->pic).field0_0x0.m_aData + iVar16;
        uVar12 = uVar17;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar15,0x10);
          _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar12,0x10);
          uVar9 = (ulong)(int)pPVar14->score;
          if ((ulong)(long)(int)pPVar13->score < uVar9) {
            uVar7 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar12,0x10);
            puVar2 = (undefined *)((int)&(pPVar13->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            uVar4 = (uint)pPVar13 & 7;
            buff._0_8_ = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                         uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                         *(ulong *)((int)pPVar13 - uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)((pPVar13->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            p_Var1 = (pPVar13->maSubject).field0_0x0.m_aData + 1;
            uVar4 = (uint)p_Var1 & 7;
            uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                    uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
            puVar6 = &(pPVar13->time).hour;
            uVar3 = (uint)puVar6 & 7;
            uVar4 = (uint)&pPVar13->score & 7;
            uVar9 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                    in_a2 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)&pPVar13->score - uVar4) >> uVar4 * 8;
            uVar3 = (uint)&pPVar13->field_0x1f & 7;
            puVar6 = &(pPVar13->time).pad;
            uVar4 = (uint)puVar6 & 7;
            sVar11 = (sceCdCLOCK)
                     ((*(long *)(&pPVar13->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                      in_a3 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8);
            puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
            puVar2 = (undefined *)((int)&buff.maSubject.field0_0x0.m_aData[2].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
            puVar6 = &buff.time.hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
            uVar3 = (uint)&buff.field_0x1f & 7;
            puVar5 = (ulong *)(&buff.field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)sVar11 >> (7 - uVar3) * 8;
            buff.maSubject.field0_0x0.m_aData._4_8_ = uVar8;
            buff._16_8_ = uVar9;
            buff._24_8_ = sVar11;
            _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar12,0x10);
            uVar10 = 0x10;
            uVar9 = uVar15;
            uVar7 = _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01();
            puVar2 = (undefined *)((int)&(pPVar14->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            uVar4 = (uint)pPVar14 & 7;
            uVar7 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                    uVar7 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)pPVar14 - uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)((pPVar14->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            p_Var1 = (pPVar14->maSubject).field0_0x0.m_aData + 1;
            uVar4 = (uint)p_Var1 & 7;
            uVar8 = (*(long *)(puVar2 + -uVar3) << (7 - uVar3) * 8 |
                    uVar8 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)p_Var1 - uVar4) >> uVar4 * 8;
            puVar6 = &(pPVar14->time).hour;
            uVar3 = (uint)puVar6 & 7;
            uVar4 = (uint)&pPVar14->score & 7;
            uVar9 = (*(long *)(puVar6 + -uVar3) << (7 - uVar3) * 8 |
                    uVar9 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                    *(ulong *)((int)&pPVar14->score - uVar4) >> uVar4 * 8;
            uVar3 = (uint)&pPVar14->field_0x1f & 7;
            puVar6 = &(pPVar14->time).pad;
            uVar4 = (uint)puVar6 & 7;
            uVar10 = (*(long *)(&pPVar14->field_0x1f + -uVar3) << (7 - uVar3) * 8 |
                     uVar10 & 0xffffffffffffffffU >> (uVar3 + 1) * 8) & -1L << (8 - uVar4) * 8 |
                     *(ulong *)(puVar6 + -uVar4) >> uVar4 * 8;
            puVar2 = (undefined *)((int)&(pPVar13->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar7 >> (7 - uVar3) * 8;
            uVar3 = (uint)pPVar13 & 7;
            *(ulong *)((int)pPVar13 - uVar3) =
                 uVar7 << uVar3 * 8 |
                 *(ulong *)((int)pPVar13 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)((pPVar13->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar8 >> (7 - uVar3) * 8;
            p_Var1 = (pPVar13->maSubject).field0_0x0.m_aData + 1;
            uVar3 = (uint)p_Var1 & 7;
            puVar5 = (ulong *)((int)p_Var1 - uVar3);
            *puVar5 = uVar8 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar6 = &(pPVar13->time).hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 = *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | uVar9 >> (7 - uVar3) * 8;
            uVar3 = (uint)&pPVar13->score & 7;
            puVar5 = (ulong *)((int)&pPVar13->score - uVar3);
            *puVar5 = uVar9 << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            uVar3 = (uint)&pPVar13->field_0x1f & 7;
            puVar5 = (ulong *)(&pPVar13->field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar10 >> (7 - uVar3) * 8;
            puVar6 = &(pPVar13->time).pad;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 uVar10 << uVar3 * 8 | *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(uVar15,0x10);
            puVar2 = (undefined *)((int)&(pPVar14->maSubject).field0_0x0.m_aData[0].obj_no + 1);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._0_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)pPVar14 & 7;
            *(ulong *)((int)pPVar14 - uVar3) =
                 buff._0_8_ << uVar3 * 8 |
                 *(ulong *)((int)pPVar14 - uVar3) & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar2 = (undefined *)((int)((pPVar14->maSubject).field0_0x0.m_aData + 2) + 3);
            uVar3 = (uint)puVar2 & 7;
            puVar5 = (ulong *)(puVar2 + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 |
                      (ulong)buff.maSubject.field0_0x0.m_aData._4_8_ >> (7 - uVar3) * 8;
            p_Var1 = (pPVar14->maSubject).field0_0x0.m_aData + 1;
            uVar3 = (uint)p_Var1 & 7;
            puVar5 = (ulong *)((int)p_Var1 - uVar3);
            *puVar5 = buff.maSubject.field0_0x0.m_aData._4_8_ << uVar3 * 8 |
                      *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            puVar6 = &(pPVar14->time).hour;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 *(ulong *)puVar6 & -1L << (uVar3 + 1) * 8 | (ulong)buff._16_8_ >> (7 - uVar3) * 8;
            uVar3 = (uint)&pPVar14->score & 7;
            puVar5 = (ulong *)((int)&pPVar14->score - uVar3);
            *puVar5 = buff._16_8_ << uVar3 * 8 | *puVar5 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            uVar3 = (uint)&pPVar14->field_0x1f & 7;
            puVar5 = (ulong *)(&pPVar14->field_0x1f + -uVar3);
            *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | (ulong)buff._24_8_ >> (7 - uVar3) * 8;
            puVar6 = &(pPVar14->time).pad;
            uVar3 = (uint)puVar6 & 7;
            puVar6 = puVar6 + -uVar3;
            *(ulong *)puVar6 =
                 (long)buff._24_8_ << uVar3 * 8 |
                 *(ulong *)puVar6 & 0xffffffffffffffffU >> (8 - uVar3) * 8;
            in_a2 = buff._0_8_;
            in_a3 = buff.maSubject.field0_0x0.m_aData._4_8_;
          }
                    /* end of inlined section */
          uVar9 = (ulong)photo_file->pic_num;
          uVar12 = (ulong)((int)uVar12 + 1);
          pPVar13 = pPVar13 + 1;
        } while ((long)uVar12 < (long)uVar9);
      }
      iVar16 = iVar16 + 1;
      uVar15 = uVar17;
    } while ((long)uVar17 < (long)((int)uVar9 + -1));
  }
  return;
}

static void DispPhotoName() {
	DRAW_ENV_5 env;
	
  _DRAW_ENV_5 env;
  
  if ((-1 < name_msg_type) && (-1 < name_msg_name)) {
    env.tex1 = DAT_003c2e50;
    env.clamp = DAT_003c2e58;
    env.test = DAT_003c2e60;
    env.zbuf = DAT_003c2e68;
    env.alpha = DAT_003c2e48;
    MessageChangeDrawEnv__FPC11_DRAW_ENV_5(&env);
    PrintMsg_Arrange__Fiiiiiiiiii(name_msg_type,name_msg_name,0x140,0x16f,1,0x80,0xa0,0,0,2);
    MessageChangeDrawEnv__FPC11_DRAW_ENV_5((_DRAW_ENV_5 *)0x0);
  }
  return;
}

static void MoviePhaseJobPre() {
  int room_no;
  
  movie_projecterWork__Fv();
  if ((photo_wrk._8_4_ & 0x40000) != 0) {
    photo_datObjMain__Fv();
  }
  room_no = GetPlyrAreaNo__Fv();
  MapFogProc__FiiPf(room_no,(int)(short)plyr_wrk.cmn_wrk.floor,plyr_wrk.cmn_wrk.mbox.pos);
  gra3dDraw__Fv();
  movie_projecterDraw__Fv();
  return;
}

static int MoviePhaseJobAfter() {
	int ret;
	
  int iVar1;
  
  InitEffectsEF__Fv();
  if (photo_wrk.mode == 0xc) {
    EffectControl__Fi(5);
  }
  iVar1 = PhotoMain__Fv();
  EffectControl__Fi(8);
  Draw__12CNPlyrCamera(&m_plyr_camera);
  if (((unlock_ghost != 0) && (photo_wrk.mode == 0xc)) && (photo_wrk.cnt == '\b')) {
    LocalCopyLtoL__Fiii(0,(int)(((sys_wrk.count + 1 & 1) * 0x23 << 0x27) >> 0x20),
                        (int)(((sys_wrk.count & 1) * 0x23 << 0x27) >> 0x20));
  }
  FadeMain__Fv();
  CallVibrate__Fv();
  return iVar1;
}

void init_Story_Photo() {
  SEDisable__9CSPChance(&m_plyr_camera.sp);
  return;
}

void end_Story_Photo() {
  SEEnable__9CSPChance(&m_plyr_camera.sp);
  if (photo_tmp_adrs != (void *)0x0) {
    mem_utilFreeMem__FPv(photo_tmp_adrs);
  }
  return;
}

GPHASE_ENUM one_Story_Photo(GPHASE_ENUM dummy) {
  int iVar1;
  GPHASE_ID_ENUM id;
  
  MoviePhaseJobPre__Fv();
  iVar1 = MoviePhaseJobAfter__Fv();
  if (iVar1 != 0) {
    SetIngamePhoto__Fi(0);
    id = IngameDecideNextPhase__Fv();
    SetNextGPhase__F14GPHASE_ID_ENUM(id);
  }
  SubTitleMain__Fi(0);
  return GPHASE_CONTINUE;
}

static void SetSpecialFurn(int sw) {
  photo_wrk._8_4_ = photo_wrk._8_4_ & 0xfffeffff | (sw & 1U) << 0x10;
  MapObjProc__Fv();
  return;
}

int PhotoFlgIsUp() {
  return (ushort)photo_wrk._10_2_ & 1;
}

void FurnPhotoFlgUp() {
  photo_wrk.sta = photo_wrk.sta | 0x10;
  return;
}

int FurnPhotoFlgIsUp() {
  return (int)((photo_wrk.sta & 0x10) != 0);
}

void PhotoDebug() {
  return;
}

HINT_PHOTO_REQ* _HINT_PHOTO_REQ * _fixed_array_verifyrange<_HINT_PHOTO_REQ>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

PICTURE_WRK* PICTURE_WRK * _fixed_array_verifyrange<PICTURE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

PICTURE_SUBJECT* _PICTURE_SUBJECT * _fixed_array_verifyrange<_PICTURE_SUBJECT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  return;
}

type_info& _HINT_PHOTO_REQ type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& PICTURE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& _PICTURE_SUBJECT type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to pfile_wrk() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
