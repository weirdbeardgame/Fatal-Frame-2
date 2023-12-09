// STATUS: NOT STARTED

#include "ene_mot_ctrl.h"

struct ENE_MOT_CTRL {
	short int old_mot;
	short int old_frm;
};

struct ENE_MOT_WRK {
	u_int attr;
	short int frm;
	short int sub;
};

struct fixed_array_base<ENE_MOT_WRK **,63,ENE_MOT_WRK ***> {
protected:
	ENE_MOT_WRK ***m_aData;
	
public:
	fixed_array_base<ENE_MOT_WRK **,63,ENE_MOT_WRK ***>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_MOT_WRK**& operator[]();
	ENE_MOT_WRK**& operator[]();
	ENE_MOT_WRK*** data();
	ENE_MOT_WRK*** begin();
	ENE_MOT_WRK*** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<ENE_MOT_WRK **,63> : fixed_array_base<ENE_MOT_WRK **,63,ENE_MOT_WRK ***> {
};

struct fixed_array_base<ENE_MOT_CTRL,10,ENE_MOT_CTRL[10]> {
protected:
	ENE_MOT_CTRL m_aData[10];
	
public:
	fixed_array_base<ENE_MOT_CTRL,10,ENE_MOT_CTRL[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ENE_MOT_CTRL& operator[]();
	ENE_MOT_CTRL& operator[]();
	ENE_MOT_CTRL* data();
	ENE_MOT_CTRL* begin();
	ENE_MOT_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ENE_MOT_CTRL,10> : fixed_array_base<ENE_MOT_CTRL,10,ENE_MOT_CTRL[10]> {
};

static ENE_MOT_WRK enemot_ch019anm002[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 0,
		/* .sub = */ 8
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK *enemot_ch019[17] = {
	/* [0] = */ NULL,
	/* [1] = */ enemot_ch019anm002,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ NULL,
	/* [8] = */ NULL,
	/* [9] = */ NULL,
	/* [10] = */ NULL,
	/* [11] = */ NULL,
	/* [12] = */ NULL,
	/* [13] = */ NULL,
	/* [14] = */ NULL,
	/* [15] = */ NULL,
	/* [16] = */ NULL
};

static ENE_MOT_WRK enemot_ch021anm010[3] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 86,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 6,
		/* .frm = */ 86,
		/* .sub = */ 8
	},
	/* [2] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch021anm011[3] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 62,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 6,
		/* .frm = */ 62,
		/* .sub = */ 8
	},
	/* [2] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch021anm012[3] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 51,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 6,
		/* .frm = */ 51,
		/* .sub = */ 8
	},
	/* [2] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK *enemot_ch021[13] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ enemot_ch021anm010,
	/* [7] = */ enemot_ch021anm011,
	/* [8] = */ enemot_ch021anm012,
	/* [9] = */ NULL,
	/* [10] = */ NULL,
	/* [11] = */ NULL,
	/* [12] = */ NULL
};

static ENE_MOT_WRK enemot_ch025anm016[3] = {
	/* [0] = */ {
		/* .attr = */ 1,
		/* .frm = */ 35,
		/* .sub = */ 0
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ 55,
		/* .sub = */ 0
	},
	/* [2] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK *enemot_ch025[13] = {
	/* [0] = */ NULL,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ NULL,
	/* [8] = */ NULL,
	/* [9] = */ NULL,
	/* [10] = */ NULL,
	/* [11] = */ NULL,
	/* [12] = */ enemot_ch025anm016
};

static ENE_MOT_WRK enemot_ch031anm000[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 80,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch031anm002[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 56,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch031anm014[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 135,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch031anm015[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 81,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch031anm016[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 100,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch031anm017[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 150,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch031anm018[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 82,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK enemot_ch031anm019[2] = {
	/* [0] = */ {
		/* .attr = */ 6,
		/* .frm = */ 90,
		/* .sub = */ 7
	},
	/* [1] = */ {
		/* .attr = */ 0,
		/* .frm = */ -1,
		/* .sub = */ 0
	}
};

static ENE_MOT_WRK *enemot_ch031[15] = {
	/* [0] = */ enemot_ch031anm000,
	/* [1] = */ enemot_ch031anm002,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ NULL,
	/* [8] = */ NULL,
	/* [9] = */ enemot_ch031anm014,
	/* [10] = */ enemot_ch031anm015,
	/* [11] = */ enemot_ch031anm016,
	/* [12] = */ enemot_ch031anm017,
	/* [13] = */ enemot_ch031anm018,
	/* [14] = */ enemot_ch031anm019
};

static reference_fixed_array<ENE_MOT_WRK **,63> ene_mot_char_tbl;
static fixed_array<ENE_MOT_CTRL,10> ene_mot_ctrl;
unsigned char ENE_MOT_CTRL type_info node[8];
unsigned char ENE_MOT_WRK ** type_info node[12];
unsigned char ENE_MOT_WRK * type_info node[12];
unsigned char ENE_MOT_WRK type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a8630;
	
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11ENE_MOT_WRK(0x3f0160,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11ENE_MOT_WRK(0x3f0168,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11ENE_MOT_WRK(0x3a8678,_max);
  }
  return (uint **)0x0;
}

void InitEneMotAlgCtrl(ENE_WRK *ew) {
  byte bVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  bVar1 = (ew->alg).idx;
  _fixed_array_verifyrange__H1Z12ENE_MOT_CTRL_UiUi_PX01(bVar1,10);
  ene_mot_ctrl.field0_0x0.m_aData[bVar1].old_mot = 0xffff;
  bVar1 = (ew->alg).idx;
  _fixed_array_verifyrange__H1Z12ENE_MOT_CTRL_UiUi_PX01(bVar1,10);
  ene_mot_ctrl.field0_0x0.m_aData[bVar1].old_frm = 0xffff;
  return;
}

void EneMotAlgCtrl(ENE_WRK *ew) {
	ANI_CTRL *anc;
	ENE_MOT_WRK *emw;
	ENE_MOT_CTRL *emc;
	int anm;
	int mot;
	int frm;
	int old_frm;
	
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  ENE_MOT_WRK *emw;
  long lVar7;
  
  pvVar4 = ew->ani_ctrl_p;
  if ((ew->type == '\0') && (uVar2 = ew->cmn_dat->anm_no, uVar2 < 0x3f)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZPP11ENE_MOT_WRK_UiUi_PX01(uVar2,0x3f);
    if (*(int *)((int)ene_mot_char_tbl.field0_0x0.m_aData + (uint)uVar2 * 4) != 0) {
      bVar1 = (ew->alg).idx;
      _fixed_array_verifyrange__H1Z12ENE_MOT_CTRL_UiUi_PX01(bVar1,10);
                    /* end of inlined section */
      iVar5 = *(int *)((int)pvVar4 + 0x78);
      lVar7 = (long)(short)ene_mot_ctrl.field0_0x0.m_aData[bVar1].old_frm;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar6 = *(int *)((int)pvVar4 + 0x74);
      _fixed_array_verifyrange__H1ZPP11ENE_MOT_WRK_UiUi_PX01(uVar2,0x3f);
      emw = *(ENE_MOT_WRK **)
             (iVar6 * 4 + *(int *)((int)ene_mot_char_tbl.field0_0x0.m_aData + (uint)uVar2 * 4));
                    /* end of inlined section */
      if (emw != (ENE_MOT_WRK *)0x0) {
        uVar2 = emw->frm;
        uVar3 = emw->frm;
        if (iVar5 < lVar7) {
          lVar7 = -1;
        }
        while (uVar2 != 0xffff) {
          if (((long)(int)(short)uVar3 <= (long)iVar5) && (lVar7 < (int)(short)uVar3)) {
            SetEneMotAttr__FP7ENE_WRKP11ENE_MOT_WRK(ew,emw);
          }
          uVar3 = emw[1].frm;
          uVar2 = emw[1].frm;
          emw = emw + 1;
        }
      }
      ene_mot_ctrl.field0_0x0.m_aData[bVar1].old_frm = (ushort)iVar5;
      ene_mot_ctrl.field0_0x0.m_aData[bVar1].old_mot = (ushort)iVar6;
    }
  }
  return;
}

void ClearEneMotAttr(ENE_WRK *ew) {
  (ew->st).sta = (ew->st).sta & 0xfffffffffff7cfff;
  return;
}

void SetEneMotAttr(ENE_WRK *ew, ENE_MOT_WRK *emw) {
	SND_3D_SET s3d;
	
  ulong uVar1;
  ulong uVar2;
  _SND_3D_SET s3d;
  
  switch(emw->attr) {
  case 0:
    uVar1 = (ew->st).sta;
    uVar2 = 0xffffffffffffefff;
    break;
  case 1:
    uVar1 = (ew->st).sta;
    uVar2 = 0x1000;
    goto LAB_0016bcc0;
  case 2:
    uVar1 = (ew->st).sta;
    uVar2 = 0xffffffffffffdfff;
    break;
  case 3:
    uVar1 = (ew->st).sta;
    uVar2 = 0x2000;
    goto LAB_0016bcc0;
  case 4:
    uVar1 = (ew->st).sta;
    uVar2 = 0xfffffffffff7ffff;
    break;
  case 5:
    uVar1 = (ew->st).sta;
    uVar2 = 0x80000;
LAB_0016bcc0:
    (ew->st).sta = uVar1 | uVar2;
    return;
  case 6:
    memset(&s3d,0,0xc);
    s3d.pos = (float (*) [4])(ew->mbox).pos;
    SndBankPlay(ew->se_bank_no,(int)(short)emw->sub,0,0,0x3200,0x1000,0,&s3d);
    return;
  default:
    return;
  }
  (ew->st).sta = uVar1 & uVar2;
  return;
}

ENE_MOT_CTRL* ENE_MOT_CTRL * _fixed_array_verifyrange<ENE_MOT_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

ENE_MOT_WRK*** ENE_MOT_WRK ** * _fixed_array_verifyrange<ENE_MOT_WRK **>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	ENE_MOT_WRK ***ra;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    ene_mot_char_tbl.field0_0x0.m_aData =
         (fixed_array_base<ENE_MOT_WRK_**,63,ENE_MOT_WRK_***>)&DAT_003a86b0;
  }
  return;
}

type_info& ENE_MOT_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

type_info& ENE_MOT_WRK ** type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

type_info& ENE_MOT_WRK * type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

type_info& ENE_MOT_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_574);
  return (type_info *)v;
}

static void global constructors keyed to InitEneMotAlgCtrl() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
