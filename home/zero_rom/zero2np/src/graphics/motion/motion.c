// STATUS: NOT STARTED

#include "motion.h"

struct fixed_array_base<float[4][4],60,float[60][4][4]> {
protected:
	float m_aData[60][4][4];
	
public:
	fixed_array_base<float[4][4],60,float[60][4][4]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	float&[4][4] operator[]();
	float&[4][4] operator[]();
	float*[4][4] data();
	float*[4][4] begin();
	float*[4][4] end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<float[4][4],60> : fixed_array_base<float[4][4],60,float[60][4][4]> {
};

struct fixed_array_base<RST_DATA,60,RST_DATA[60]> {
protected:
	RST_DATA m_aData[60];
	
public:
	fixed_array_base<RST_DATA,60,RST_DATA[60]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	RST_DATA& operator[]();
	RST_DATA& operator[]();
	RST_DATA* data();
	RST_DATA* begin();
	RST_DATA* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<RST_DATA,60> : fixed_array_base<RST_DATA,60,RST_DATA[60]> {
};

static fixed_array<float[4][4],60> m_start;
static fixed_array<float[4][4],60> m_end;
unsigned char float [3][3] type_info node[8];
unsigned char RST_DATA type_info node[8];

MIME_CTRL mim_chodo[20] = {
	/* [0] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [1] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [2] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [3] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [4] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [5] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [6] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [7] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [8] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [9] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [10] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [11] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [12] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [13] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [14] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [15] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [16] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [17] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [18] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	},
	/* [19] = */ {
		/* .mdat = */ NULL,
		/* .frame = */ 0,
		/* .reso = */ 0,
		/* .furn_id = */ 0,
		/* .cnt = */ 0.f,
		/* .weight_id = */ 0,
		/* .parts_id = */ 0,
		/* .loop = */ 0,
		/* .stat = */ 0,
		/* .rev = */ 0,
		/* .flg = */ 0,
		/* .pad = */ 0
	}
};

u_char mim_chodo_se[20] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0,
	/* [4] = */ 0,
	/* [5] = */ 0,
	/* [6] = */ 0,
	/* [7] = */ 0,
	/* [8] = */ 0,
	/* [9] = */ 0,
	/* [10] = */ 0,
	/* [11] = */ 0,
	/* [12] = */ 0,
	/* [13] = */ 0,
	/* [14] = */ 0,
	/* [15] = */ 0,
	/* [16] = */ 0,
	/* [17] = */ 0,
	/* [18] = */ 0,
	/* [19] = */ 0
};

MIME_DAT mim_cdat[2][20] = {
	/* [0] = */ {
		/* [0] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [1] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [2] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [3] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [4] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [5] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [6] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [7] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [8] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [9] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [10] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [11] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [12] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [13] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [14] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [15] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [16] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [17] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [18] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [19] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		}
	},
	/* [1] = */ {
		/* [0] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [1] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [2] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [3] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [4] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [5] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [6] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [7] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [8] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [9] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [10] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [11] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [12] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [13] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [14] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [15] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [16] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [17] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [18] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		},
		/* [19] = */ {
			/* .vtx = */ NULL,
			/* .pkt = */ NULL,
			/* .dat = */ NULL,
			/* .vtx_num = */ 0,
			/* .p_no = */ 0
		}
	}
};

ANI_CTRL ani_mdl[50] = {
	/* [0] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [1] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [2] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [3] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [4] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [5] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [6] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [7] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [8] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [9] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [10] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [11] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [12] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [13] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [14] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [15] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [16] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [17] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [18] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [19] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [20] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [21] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [22] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [23] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [24] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [25] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [26] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [27] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [28] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [29] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [30] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [31] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [32] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [33] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [34] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [35] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [36] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [37] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [38] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [39] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [40] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [41] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [42] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [43] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [44] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [45] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [46] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [47] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [48] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	},
	/* [49] = */ {
		/* .anm = */ {
			/* .playnum = */ 0,
			/* .stat = */ 0,
			/* .loop_rest = */ 0,
			/* .timer = */ 0,
			/* .buf = */ {
				/* [0] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [1] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [2] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [3] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [4] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [5] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [6] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [7] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [8] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				},
				/* [9] = */ {
					/* .code = */ 0,
					/* .cnt = */ 0,
					/* .stat = */ 0
				}
			},
			/* .code_head = */ NULL,
			/* .code_now = */ NULL,
			/* .loop_start = */ NULL
		},
		/* .mot = */ {
			/* .top = */ NULL,
			/* .dat = */ NULL,
			/* .play_id = */ 0,
			/* .cnt = */ 0,
			/* .all_cnt = */ 0,
			/* .inp_allcnt = */ 0,
			/* .inp_cnt = */ 0.f,
			/* .old_mot_cnt = */ 0.f,
			/* .reso = */ 0,
			/* .reso_cnt = */ 0,
			/* .next_flg = */ 0,
			/* .end_flg = */ 0,
			/* .rst0 = */ NULL,
			/* .rst1 = */ NULL
		},
		/* .pbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .rbak = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .mdl_p = */ NULL,
		/* .pk2_p = */ NULL,
		/* .mpk_p = */ NULL,
		/* .base_p = */ NULL,
		/* .anm_p = */ NULL,
		/* .mtop = */ NULL,
		/* .mdat = */ NULL,
		/* .tanm_p = */ NULL,
		/* .bwc_p = */ NULL,
		/* .mim = */ NULL,
		/* .bgmim = */ NULL,
		/* .wmim = */ NULL,
		/* .cloth_ctrl = */ NULL,
		/* .collision_ctrl = */ NULL,
		/* .mot_num = */ 0,
		/* .mim_num = */ 0,
		/* .bg_num = */ 0,
		/* .wmim_num = */ 0,
		/* .ftype = */ 0,
		/* .interp_flg = */ 0,
		/* .pkt_p = */ NULL,
		/* .use = */ 0,
		/* .mdl_no = */ 0,
		/* .anm_no = */ 0,
		/* .eye_rots = */ {
			/* [0] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* [1] = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .neck_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .chest_rot = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .neck_work = */ {
			/* .neck_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .neck_p_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .chest_lw = */ {
				/* [0] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [1] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [2] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [3] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			},
			/* .flg = */ 0
		}
	}
};

ANI_MDL_CTRL ani_mdl_ctrl[50] = {
	/* [0] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [1] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [2] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [3] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [4] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [5] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [6] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [7] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [8] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [9] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [10] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [11] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [12] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [13] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [14] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [15] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [16] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [17] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [18] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [19] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [20] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [21] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [22] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [23] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [24] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [25] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [26] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [27] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [28] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [29] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [30] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [31] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [32] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [33] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [34] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [35] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [36] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [37] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [38] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [39] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [40] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [41] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [42] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [43] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [44] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [45] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [46] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [47] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [48] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	},
	/* [49] = */ {
		/* .map_flg = */ 0,
		/* .anm_no = */ 0,
		/* .anm_p = */ NULL,
		/* .pkt_no = */ 0
	}
};

ACS_ALPHA plyracs_ctrl[2] = {
	/* [0] = */ {
		/* .alpha = */ 0,
		/* .stat = */ 0
	},
	/* [1] = */ {
		/* .alpha = */ 0,
		/* .stat = */ 0
	}
};

ROPE_CTRL rope_ctrl[20] = {
	/* [0] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [1] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [2] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [3] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [4] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [5] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [6] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [7] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [8] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [9] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [10] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [11] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [12] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [13] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [14] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [15] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [16] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [17] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [18] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	},
	/* [19] = */ {
		/* .particle = */ NULL,
		/* .spring = */ NULL,
		/* .rdat = */ NULL,
		/* .dir = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .top = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		},
		/* .pow = */ 0.f,
		/* .furn_id = */ 0,
		/* .p_num = */ 0,
		/* .spring_num = */ 0,
		/* .stat = */ 0,
		/* .move_mode = */ 0
	}
};

CMOVE_CTRL cmove_ctrl[10] = {
	/* [0] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [1] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [2] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [3] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [4] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [5] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [6] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [7] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [8] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	},
	/* [9] = */ {
		/* .type = */ 0,
		/* .furn_id = */ 0,
		/* .timer = */ 0,
		/* .req = */ 0,
		/* .alpha = */ 0
	}
};

ENE_VRAM_CTRL ene_vram_ctrl[4] = {
	/* [0] = */ {
		/* .mdl_p = */ NULL,
		/* .flg = */ 0,
		/* .mdl_no = */ 0,
		/* .offset = */ 0
	},
	/* [1] = */ {
		/* .mdl_p = */ NULL,
		/* .flg = */ 0,
		/* .mdl_no = */ 0,
		/* .offset = */ 0
	},
	/* [2] = */ {
		/* .mdl_p = */ NULL,
		/* .flg = */ 0,
		/* .mdl_no = */ 0,
		/* .offset = */ 0
	},
	/* [3] = */ {
		/* .mdl_p = */ NULL,
		/* .flg = */ 0,
		/* .mdl_no = */ 0,
		/* .offset = */ 0
	}
};

ENE_VRAM_CTRL ene_vram_bak[4] = {
	/* [0] = */ {
		/* .mdl_p = */ NULL,
		/* .flg = */ 0,
		/* .mdl_no = */ 0,
		/* .offset = */ 0
	},
	/* [1] = */ {
		/* .mdl_p = */ NULL,
		/* .flg = */ 0,
		/* .mdl_no = */ 0,
		/* .offset = */ 0
	},
	/* [2] = */ {
		/* .mdl_p = */ NULL,
		/* .flg = */ 0,
		/* .mdl_no = */ 0,
		/* .offset = */ 0
	},
	/* [3] = */ {
		/* .mdl_p = */ NULL,
		/* .flg = */ 0,
		/* .mdl_no = */ 0,
		/* .offset = */ 0
	}
};

MSN_PLYR_INIT plyr_init_ctrl = {
	/* .msn_no = */ 0,
	/* .step = */ 0
};

char plyr_mdl_no = 0;
u_char mim_mepati_id = 0;
u_char mim_nigiri_l_id = 0;
u_char mim_nigiri_r_id = 0;
float now_frot_x = 0.f;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c0b70;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8RST_DATA(0x3f3298,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8RST_DATA(0x3f32a0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf8RST_DATA(0x3c0bb8,_max);
  }
  return (uint **)0x0;
}

void motInitANI_CTRL() {
	int i;
	
  ANI_CTRL *pAniCtrl;
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0x31;
  iVar3 = 0;
  printf("sizeof(ani_mdl) = %d\n");
  piVar1 = &ani_mdl[0].use;
  do {
    pAniCtrl = (ANI_CTRL *)((int)&((ANI_CODE_CTRL *)(ani_mdl[0].anm.buf + -2))->playnum + iVar3);
    iVar3 = iVar3 + 0x240;
    iVar2 = iVar2 + -1;
    motClearANI_CTRL__FP8ANI_CTRL(pAniCtrl);
    *piVar1 = 0;
    piVar1 = piVar1 + 0x90;
  } while (-1 < iVar2);
  return;
}

void motFreeANI_CTRL(ANI_CTRL *ani_ctrl) {
  motClearANI_CTRL__FP8ANI_CTRL(ani_ctrl);
  ani_ctrl->use = 0;
  ani_ctrl->pkt_p = (void *)0x0;
  return;
}

ANI_CTRL* motGetANI_CTRL() {
	static char __FUNCTION__[15] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 65,
		/* [7] = */ 78,
		/* [8] = */ 73,
		/* [9] = */ 95,
		/* [10] = */ 67,
		/* [11] = */ 84,
		/* [12] = */ 82,
		/* [13] = */ 76,
		/* [14] = */ 0
	};
	int i;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = &ani_mdl[0].use;
  iVar3 = 0;
  do {
    if (*piVar2 == 0) {
      printf("motGetANI_CTRL i = %d\n");
      *piVar2 = 1;
      return (ANI_CTRL *)((int)&((ANI_CODE_CTRL *)(ani_mdl[0].anm.buf + -2))->playnum + iVar3);
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x90;
    iVar3 = iVar3 + 0x240;
  } while (iVar1 < 0x32);
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("There is No Vacant ANI_CTRL");
  return (ANI_CTRL *)0x0;
}

void motReleaseOneAnm(void *ani_hndl) {
  if (ani_hndl != (void *)0x0) {
    printf("motReleaseOneAnm ani_ctrl = %x\n");
    acsResetCloth__FP8ANI_CTRL((ANI_CTRL *)ani_hndl);
    mimClearAllVertex__FP8ANI_CTRL((ANI_CTRL *)ani_hndl);
    mimInitWeight__FP8ANI_CTRL((ANI_CTRL *)ani_hndl);
    motInitAniCtrlFree__FP8ANI_CTRL((ANI_CTRL *)ani_hndl);
    motFreeANI_CTRL__FP8ANI_CTRL((ANI_CTRL *)ani_hndl);
  }
  return;
}

void motResetMdl(int mdl_no) {
	ANI_CTRL *p_same_ani_ctrl;
	
  ANI_CTRL *ani_ctrl;
  
  ani_ctrl = motSearchANI_CTRL__Fi(mdl_no);
  if (ani_ctrl != (ANI_CTRL *)0x0) {
    acsResetCloth__FP8ANI_CTRL(ani_ctrl);
    mimClearAllVertex__FP8ANI_CTRL(ani_ctrl);
    mimInitWeight__FP8ANI_CTRL(ani_ctrl);
  }
  return;
}

void* motInitOneEnemyAnm(u_int *anm_p, u_int *mdl_p, u_int mdl_no, u_int anm_no) {
	ANI_CTRL *ani_ctrl;
	
  ANI_CTRL *pAniCtrl;
  uint *puVar1;
  
  motResetMdl__Fi(mdl_no);
  pAniCtrl = motGetANI_CTRL__Fv();
  puVar1 = motInitAniCtrlMalloc__FP8ANI_CTRLPUiT1UiUi(pAniCtrl,anm_p,mdl_p,mdl_no,anm_no);
  if (puVar1 == (uint *)0x0) {
    motFreeANI_CTRL__FP8ANI_CTRL(pAniCtrl);
    pAniCtrl = (ANI_CTRL *)0x0;
  }
  return pAniCtrl;
}

u_int* motInitAniCtrlMalloc(ANI_CTRL *pAniCtrl, u_int *pAnim, u_int *pModel, u_int ModelNo, u_int AnimNo) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 73,
		/* [4] = */ 110,
		/* [5] = */ 105,
		/* [6] = */ 116,
		/* [7] = */ 65,
		/* [8] = */ 110,
		/* [9] = */ 105,
		/* [10] = */ 67,
		/* [11] = */ 116,
		/* [12] = */ 114,
		/* [13] = */ 108,
		/* [14] = */ 77,
		/* [15] = */ 97,
		/* [16] = */ 108,
		/* [17] = */ 108,
		/* [18] = */ 111,
		/* [19] = */ 99,
		/* [20] = */ 0
	};
	u_int *pTale;
	u_int PacketSize;
	u_int Size;
	
  uint file_size;
  void *pvVar1;
  uint *puVar2;
  int iVar3;
  
  pAniCtrl->mdl_no = ModelNo;
  pAniCtrl->anm_no = AnimNo;
  file_size = motGetAniWorkArea__FPUiT0Ui(pAnim,pModel,ModelNo);
  pvVar1 = ol_loadGetHeap__Fi(file_size);
  pAniCtrl->pkt_p = pvVar1;
  printf("pAniCtrl = %x pModel = %x, pAnim = %x pkt_p = %x mdl_no = %d anm_no = %d\n");
  puVar2 = (uint *)0x0;
  if ((uint *)pAniCtrl->pkt_p != (uint *)0x0) {
    puVar2 = motInitAniCtrl__FP8ANI_CTRLPUiN21UiUi
                       (pAniCtrl,pAnim,pModel,(uint *)pAniCtrl->pkt_p,ModelNo,AnimNo);
    iVar3 = motGetMotReso__Fv();
    pvVar1 = pAniCtrl->pkt_p;
    (pAniCtrl->mot).reso = iVar3;
    if ((int)puVar2 - (int)pvVar1 != file_size) {
      printf("//==================================================\n");
      printf("// Warning : anime pakcet Size is OVER!!! %x\n");
      printf("//==================================================\n");
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal(&DAT_003f32d0);
    }
  }
  return puVar2;
}

void motInitAniCtrlFree(ANI_CTRL *pAniCtrl) {
  ol_loadFreeHeap__FPv(pAniCtrl->pkt_p);
  return;
}

void motInitOneEnemyMdl(u_int *mdl_p, u_int mdl_no) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 73,
		/* [4] = */ 110,
		/* [5] = */ 105,
		/* [6] = */ 116,
		/* [7] = */ 79,
		/* [8] = */ 110,
		/* [9] = */ 101,
		/* [10] = */ 69,
		/* [11] = */ 110,
		/* [12] = */ 101,
		/* [13] = */ 109,
		/* [14] = */ 121,
		/* [15] = */ 77,
		/* [16] = */ 100,
		/* [17] = */ 108,
		/* [18] = */ 0
	};
	u_int i;
	u_int pack_num;
	u_int *top;
	u_int *mpk_p;
	
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint num;
  uint *puVar4;
  
  num = 0;
  uVar1 = *mdl_p;
  puVar2 = (uint *)0x0;
  puVar4 = puVar2;
  if (uVar1 != 0) {
    do {
      puVar2 = (uint *)GetFileInPak__FPvi(mdl_p,num);
      if (puVar2 == (uint *)0x0) {
        _SetLineInfo__FPCciT0T0("motion.c",0xec,"motInitOneEnemyMdl",&DAT_003f32d8);
        g3ddbgAssert__FbPCce(false,&DAT_003f32d0);
        uVar3 = uRamfffffff4;
      }
      else {
        uVar3 = puVar2[-3];
      }
      if (uVar3 != 5) {
        puVar2 = puVar4;
        if (uVar3 < 6) {
          if (uVar3 != 4) {
LAB_0021a900:
            printf("Warning : Found illegal datatype %d\n");
          }
        }
        else if (7 < uVar3) goto LAB_0021a900;
      }
      num = num + 1;
      puVar4 = puVar2;
    } while (num < uVar1);
  }
  MpkMapUnit__FPUi(puVar2);
  SetEneVram__FPUii(mdl_p,0x2bc0);
  return;
}

ANI_CTRL* motSearchANI_CTRL(int ModelNo) {
	int i;
	
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = &ani_mdl[0].use;
  iVar2 = 0;
  while ((*piVar1 != 1 || (piVar1[1] != ModelNo))) {
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 0x90;
    iVar2 = iVar2 + 0x240;
    if (0x31 < iVar3) {
      return (ANI_CTRL *)0x0;
    }
  }
  return (ANI_CTRL *)((int)&((ANI_CODE_CTRL *)(ani_mdl[0].anm.buf + -2))->playnum + iVar2);
}

void motClearANI_CTRL(ANI_CTRL *pAniCtrl) {
  if (pAniCtrl != (ANI_CTRL *)0x0) {
    printf("ClearAniCtrl[%x] mdl_no %d, anm_no %d\n");
    memset(pAniCtrl,0,0x240);
    pAniCtrl->mdl_no = -1;
  }
  return;
}

u_int motGetAniWorkArea(u_int *anm_p, u_int *mdl_p, u_int mdl_no) {
	u_int work_addr;
	u_int *top;
	u_int i;
	u_int pack_num;
	u_int *mpk_p;
	u_int num;
	
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *mdl_p_00;
  
  puVar4 = (uint *)0x0;
  uVar6 = 0;
  mdl_p_00 = (uint *)0x0;
  uVar3 = *mdl_p;
  uVar1 = *anm_p;
  if (uVar3 != 0) {
    do {
      uVar5 = uVar6 + 1;
      puVar2 = (uint *)GetFileInPak__FPvi(mdl_p,uVar6);
      if (puVar2[-3] == 5) {
        mdl_p_00 = puVar2;
      }
      uVar6 = uVar5;
    } while (uVar5 < uVar3);
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar6 = uVar3 + 1;
      puVar2 = (uint *)GetFileInPak__FPvi(anm_p,uVar3);
      uVar3 = puVar2[-3];
      if (uVar3 == 1) {
        puVar4 = motAlign128__FPUi(puVar4);
        puVar4 = motAlign128__FPUi(puVar4 + 0x15e);
        puVar4 = puVar4 + 200;
LAB_0021ab24:
        puVar4 = motAlign128__FPUi(puVar4);
        puVar4 = motAlign128__FPUi(puVar4 + 0xfa);
        uVar3 = mimGetBufSize__FPUiT0(puVar2,mdl_p_00);
        puVar4 = (uint *)((int)puVar4 + uVar3);
      }
      else if (uVar3 == 0) {
        puVar2 = (uint *)GetFileInPak__FPvi(puVar2,0);
        uVar3 = motGetBoneNum__FPUi(puVar2);
        puVar4 = puVar4 + uVar3 * 0x18;
      }
      else if (uVar3 == 2) {
        puVar4 = motAlign128__FPUi(puVar4);
        puVar4 = puVar4 + 0x46;
        goto LAB_0021ab24;
      }
      uVar3 = uVar6;
    } while (uVar6 < uVar1);
  }
  if (manmdl_dat[mdl_no].cdat != (CLOTH_DAT *)0x0) {
    puVar4 = motAlign128__FPUi(puVar4);
    puVar4 = motAlign128__FPUi(puVar4 + 400);
    uVar3 = acsGetClothBufSize__FPUii(mdl_p_00,mdl_no);
    puVar4 = (uint *)((int)puVar4 + uVar3);
  }
  if (manmdl_dat[mdl_no].collision != (COLLISION_DAT *)0x0) {
    puVar4 = motAlign128__FPUi(puVar4 + 0x50);
  }
  return (uint)puVar4;
}

static void motInitClearAniCtrl(ANI_CTRL *ani_ctrl) {
  ani_ctrl->bwc_p = (uint *)0x0;
  ani_ctrl->interp_flg = 1;
  ani_ctrl->mdl_p = (uint *)0x0;
  ani_ctrl->mpk_p = (uint *)0x0;
  ani_ctrl->pk2_p = (uint *)0x0;
  ani_ctrl->base_p = (HeaderSection *)0x0;
  ani_ctrl->mtop = (uint *)0x0;
  ani_ctrl->mdat = (uint *)0x0;
  ani_ctrl->tanm_p = (uint *)0x0;
  ani_ctrl->mot_num = 0;
  ani_ctrl->mim_num = 0;
  ani_ctrl->bg_num = 0;
  ani_ctrl->wmim_num = 0;
  ani_ctrl->mim = (MIME_CTRL *)0x0;
  ani_ctrl->wmim = (WMIM_CTRL *)0x0;
  ani_ctrl->bgmim = (MIME_CTRL *)0x0;
  ani_ctrl->ftype = 0;
  return;
}

u_int* motInitAniCtrl(ANI_CTRL *ani_ctrl, u_int *anm_p, u_int *mdl_p, u_int *pkt_p, u_int mdl_no, u_int anm_no) {
	static char __FUNCTION__[15] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 73,
		/* [4] = */ 110,
		/* [5] = */ 105,
		/* [6] = */ 116,
		/* [7] = */ 65,
		/* [8] = */ 110,
		/* [9] = */ 105,
		/* [10] = */ 67,
		/* [11] = */ 116,
		/* [12] = */ 114,
		/* [13] = */ 108,
		/* [14] = */ 0
	};
	u_int *top;
	u_int i;
	u_int pack_num;
	MIME_DAT *mim_dat;
	MIME_DAT *mim_bg;
	u_int num;
	u_int mdl_bone_num;
	
  short **tbl;
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  MIME_CTRL *pMVar5;
  WMIM_CTRL *pWVar6;
  MIME_DAT *pMVar7;
  uint *puVar8;
  COLLISION_CTRL *pCVar9;
  CLOTH_CTRL *pCVar10;
  HeaderSection *pHVar11;
  uint uVar12;
  uint pack_num;
  
  uVar4 = 0;
  tbl = anm_tbl[anm_no].ani;
  ani_ctrl->anm_p = anm_p;
  uVar1 = *anm_p;
  motSetAnime__FP8ANI_CTRLPPUsi(ani_ctrl,tbl,0);
  motInitClearAniCtrl__FP8ANI_CTRL(ani_ctrl);
  ani_ctrl->mdl_p = mdl_p;
  uVar12 = *mdl_p;
  if (uVar12 == 0) {
    puVar3 = ani_ctrl->mpk_p;
  }
  else {
    do {
      puVar3 = (uint *)GetFileInPak__FPvi(mdl_p,uVar4);
      uVar2 = puVar3[-3];
      if (uVar2 == 5) {
        ani_ctrl->mpk_p = puVar3;
      }
      else if (uVar2 < 6) {
        if (uVar2 == 4) {
          ani_ctrl->tanm_p = puVar3;
        }
      }
      else if (uVar2 == 6) {
        ani_ctrl->pk2_p = puVar3;
      }
      else if (uVar2 == 7) {
        ani_ctrl->bwc_p = puVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar12);
    puVar3 = ani_ctrl->mpk_p;
  }
  ani_ctrl->base_p = (HeaderSection *)(puVar3 + 8);
  uVar12 = 0;
  if (uVar1 != 0) {
    do {
      puVar3 = (uint *)GetFileInPak__FPvi(anm_p,uVar12);
      uVar4 = puVar3[-3];
      if (uVar4 == 1) {
        ani_ctrl->mim_num = *puVar3;
        pMVar5 = (MIME_CTRL *)motAlign128__FPUi(pkt_p);
        ani_ctrl->mim = pMVar5;
        pWVar6 = (WMIM_CTRL *)motAlign128__FPUi((uint *)(pMVar5 + 0x32));
        ani_ctrl->wmim = pWVar6;
        pMVar7 = (MIME_DAT *)motAlign128__FPUi((uint *)(pWVar6 + 10));
        puVar8 = motAlign128__FPUi((uint *)(pMVar7 + 0x32));
        pkt_p = mimInitMimeCtrl__FP9MIME_CTRLP8MIME_DATPUiN32
                          (ani_ctrl->mim,pMVar7,puVar3,ani_ctrl->mpk_p,puVar8,&ani_ctrl->mim_num);
        mimInitAcsCtrl__FP8ANI_CTRLUs(ani_ctrl,(short)mdl_no);
      }
      else if (uVar4 == 0) {
        ani_ctrl->mot_num = *puVar3;
        pkt_p = motInitMotCtrl__FP8MOT_CTRLPUiT1(&ani_ctrl->mot,puVar3,pkt_p);
        uVar4 = motGetBoneNum__FPUi((ani_ctrl->mot).dat);
        if (uVar4 != ani_ctrl->base_p->blocks - 2) {
          printf("error in motInitAniCtrl mdl_no %d anm_no %d\n");
          SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
          PrintAssertReal("bone_num is not match mdl_no %d anm_no %d");
        }
      }
      else if (uVar4 == 2) {
        ani_ctrl->bg_num = *puVar3;
        pMVar5 = (MIME_CTRL *)motAlign128__FPUi(pkt_p);
        ani_ctrl->bgmim = pMVar5;
        puVar8 = motAlign128__FPUi((uint *)(pMVar5 + 10));
        pMVar7 = (MIME_DAT *)motAlign128__FPUi(puVar8);
        puVar8 = motAlign128__FPUi((uint *)(pMVar7 + 0x32));
        pkt_p = mimInitMimeCtrl__FP9MIME_CTRLP8MIME_DATPUiN32
                          (ani_ctrl->bgmim,pMVar7,puVar3,ani_ctrl->mpk_p,puVar8,&ani_ctrl->bg_num);
      }
      else if (uVar4 == 3) {
        ani_ctrl->mtop = puVar3;
        puVar3 = (uint *)GetFileInPak__FPvi(puVar3,0);
        ani_ctrl->mdat = puVar3;
      }
      else {
        printf("Warning : Found illegal datatype %d\n");
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar1);
  }
  if (manmdl_dat[mdl_no].collision == (COLLISION_DAT *)0x0) {
    ani_ctrl->collision_ctrl = (COLLISION_CTRL *)0x0;
  }
  else {
    pCVar9 = (COLLISION_CTRL *)motAlign128__FPUi(pkt_p);
    ani_ctrl->collision_ctrl = pCVar9;
    pkt_p = motAlign128__FPUi((uint *)(pCVar9 + 1));
  }
  if (manmdl_dat[mdl_no].cdat == (CLOTH_DAT *)0x0) {
    pHVar11 = ani_ctrl->base_p;
  }
  else {
    pCVar10 = (CLOTH_CTRL *)motAlign128__FPUi(pkt_p);
    ani_ctrl->cloth_ctrl = pCVar10;
    puVar3 = motAlign128__FPUi((uint *)(pCVar10 + 10));
    pkt_p = acsInitCloth__FP10CLOTH_CTRLP14COLLISION_CTRLPUiT2ii
                      (ani_ctrl->cloth_ctrl,ani_ctrl->collision_ctrl,ani_ctrl->mpk_p,puVar3,mdl_no,0
                      );
                    /* inlined from ../graph3d/g3dDebug.h */
    pHVar11 = ani_ctrl->base_p;
  }
  puVar3 = (uint *)0x0;
  if ((HeaderSection *)0xffffe < pHVar11) {
                    /* end of inlined section */
    motSetHierarchy__FP13SGDCOORDINATEPUi(pHVar11->coordp,(ani_ctrl->mot).dat);
    puVar3 = pkt_p;
  }
  return puVar3;
}

u_int* motInitMotCtrlEx(MOT_CTRL *m_ctrl, u_int *mot_addr, u_int *rst_addr, int play_id) {
	u_short i;
	u_int *tale_addr;
	
  uint *puVar1;
  uint uVar2;
  RST_DATA *pRVar3;
  
  pRVar3 = (RST_DATA *)0x0;
  if (play_id < 0) {
    pRVar3 = (RST_DATA *)0x0;
  }
  else if (play_id < (int)*mot_addr) {
    m_ctrl->play_id = play_id;
    m_ctrl->top = mot_addr;
    puVar1 = (uint *)GetFileInPak__FPvi(mot_addr,play_id);
    m_ctrl->dat = puVar1;
    for (uVar2 = 0; uVar2 < *mot_addr; uVar2 = uVar2 + 1 & 0xffff) {
      puVar1 = (uint *)GetFileInPak__FPvi(m_ctrl->top,uVar2);
      motAddressMapping__FPUi(puVar1);
    }
    m_ctrl->cnt = 0;
    uVar2 = motGetFrameNum__FPUi(m_ctrl->dat);
    m_ctrl->inp_cnt = 0.0;
    m_ctrl->all_cnt = uVar2;
    m_ctrl->old_mot_cnt = -1.0;
    uVar2 = motGetInterpFrameNum__FPUi(m_ctrl->dat);
    m_ctrl->reso = 0;
    m_ctrl->reso_cnt = 0;
    m_ctrl->next_flg = 0;
    m_ctrl->inp_allcnt = uVar2 * 2 + 2;
    m_ctrl->end_flg = 0;
    if (rst_addr != (uint *)0x0) {
      m_ctrl->rst0 = (RST_DATA *)rst_addr;
      uVar2 = motGetBoneNum__FPUi(m_ctrl->dat);
      m_ctrl->rst1 = m_ctrl->rst0 + uVar2;
      motGetFrameData__FP8RST_DATAPUiUi(m_ctrl->rst0,m_ctrl->dat,0);
      motGetFrameData__FP8RST_DATAPUiUi(m_ctrl->rst1,m_ctrl->dat,0);
      uVar2 = motGetBoneNum__FPUi(m_ctrl->dat);
      pRVar3 = m_ctrl->rst1 + uVar2;
    }
  }
  else {
    pRVar3 = (RST_DATA *)0x0;
  }
  return (uint *)pRVar3;
}

u_int* motInitMotCtrl(MOT_CTRL *m_ctrl, u_int *mot_addr, u_int *rst_addr) {
  uint *puVar1;
  
  puVar1 = motInitMotCtrlEx__FP8MOT_CTRLPUiT1i(m_ctrl,mot_addr,rst_addr,0);
  return puVar1;
}

void motSetCoordCamera(ANI_CTRL *ani_ctrl) {
	u_int frame;
	float sub;
	float rot;
	MOT_CTRL *m_ctrl;
	
  bool bVar1;
  uchar uVar2;
  float fVar3;
  uint frame;
  
  if (ani_ctrl->interp_flg == 1) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
    _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
    motSetInterpMatrix__FP8ANI_CTRLPA3_A3_fT1
              (ani_ctrl,(float (*) [4] [4])&m_start,(float (*) [4] [4])&m_end);
    _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
    _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
    motInterpAnm__FP8ANI_CTRLPA3_A3_fT1
              (ani_ctrl,(float (*) [4] [4])&m_start,(float (*) [4] [4])&m_end);
                    /* end of inlined section */
    uVar2 = motAddFrame__FP8MOT_CTRL(&ani_ctrl->mot);
    if (uVar2 != '\0') {
      ani_ctrl->interp_flg = 0;
    }
  }
  else {
    fVar3 = plyr_wrk.frot_x - now_frot_x;
    if ((DAT_003ee5d8 < ABS(fVar3)) && (bVar1 = 0.0 < fVar3, fVar3 = DAT_003ee5dc, bVar1)) {
      fVar3 = DAT_003ee5d8;
    }
    now_frot_x = now_frot_x + fVar3;
    fVar3 = (-now_frot_x / 30.0 + 1.0) * 40.0 * 0.5;
    frame = (uint)fVar3;
    if (2.147484e+09 <= fVar3) {
      frame = (int)(fVar3 - 2.147484e+09) | 0x80000000;
    }
    motSetCoordFrame__FP8ANI_CTRLUi(ani_ctrl,frame);
  }
  return;
}

u_char motSetCoord(ANI_CTRL *ani_ctrl, u_char work_id, u_char stop_fl) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 67,
		/* [7] = */ 111,
		/* [8] = */ 111,
		/* [9] = */ 114,
		/* [10] = */ 100,
		/* [11] = */ 0
	};
	MOT_CTRL *m_ctrl;
	u_char ani_end;
	u_char loop_end;
	u_char frame_cnt;
	u_int i;
	u_int *old_dat_p;
	ANI_CTRL tmp;
	u_int frame_num;
	u_int interp_cnt;
	u_int old_inp_allcnt;
	
  short sVar1;
  int iVar2;
  bool bVar3;
  uchar uVar4;
  ANI_CTRL *pAVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ANI_CTRL *pAVar10;
  int iVar11;
  undefined8 uVar12;
  ANI_BUF AVar13;
  ANI_BUF AVar14;
  int iVar15;
  uint *top_addr;
  ANI_CTRL tmp;
  uchar loop_end;
  
  bVar3 = false;
  top_addr = (uint *)0x0;
  _loop_end = 0;
  if (&ani_ctrl->mot == (MOT_CTRL *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("mot_ctrl is NULL mdl_no %d anm_no %d");
  }
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
  _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
  motSetInterpMatrix__FP8ANI_CTRLPA3_A3_fT1
            (ani_ctrl,(float (*) [4] [4])&m_start,(float (*) [4] [4])&m_end);
  _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
  _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
  motInterpAnm__FP8ANI_CTRLPA3_A3_fT1
            (ani_ctrl,(float (*) [4] [4])&m_start,(float (*) [4] [4])&m_end);
                    /* end of inlined section */
  uVar4 = '\0';
  if (stop_fl == '\0') {
    iVar15 = 0;
    do {
      uVar4 = motAddFrame__FP8MOT_CTRL(&ani_ctrl->mot);
      if (uVar4 != '\0') {
        sVar1 = ani_ctrl->interp_flg;
        iVar11 = (ani_ctrl->mot).cnt + (int)(char)uVar4;
        (ani_ctrl->mot).cnt = iVar11;
        if (sVar1 == 1) {
          (ani_ctrl->mot).cnt = 0;
          motInitNewMotion__FP8ANI_CTRL(ani_ctrl);
          iVar11 = (ani_ctrl->mot).all_cnt;
          goto LAB_0021b5a0;
        }
        iVar2 = (ani_ctrl->mot).all_cnt;
        if ((iVar11 < iVar2 + -1) && (1 < iVar2)) {
          iVar11 = (ani_ctrl->mot).cnt;
LAB_0021b568:
          if (iVar11 < iVar2) {
            uVar9 = motGetInterpFrameNum__FPUi((ani_ctrl->mot).dat);
            iVar11 = (ani_ctrl->mot).all_cnt;
            (ani_ctrl->mot).inp_allcnt = uVar9 * 2 + 2;
          }
          else {
            motInitNewMotion__FP8ANI_CTRL(ani_ctrl);
            (ani_ctrl->mot).next_flg = 0;
            iVar11 = (ani_ctrl->mot).all_cnt;
          }
        }
        else {
          if ((ani_ctrl->mot).next_flg != 0) {
            iVar11 = (ani_ctrl->mot).cnt;
            goto LAB_0021b568;
          }
          pAVar10 = &tmp;
          pAVar5 = ani_ctrl;
          do {
            uVar12 = *(undefined8 *)&(pAVar5->anm).loop_rest;
            AVar13 = (pAVar5->anm).buf[0];
            AVar14 = (pAVar5->anm).buf[1];
            *(undefined8 *)pAVar10 = *(undefined8 *)&pAVar5->anm;
            *(undefined8 *)((int)pAVar10 + 8) = uVar12;
            *(ANI_BUF *)((int)pAVar10 + 0x10) = AVar13;
            *(ANI_BUF *)((int)pAVar10 + 0x18) = AVar14;
            pAVar5 = (ANI_CTRL *)((pAVar5->anm).buf + 2);
            pAVar10 = (ANI_CTRL *)((int)pAVar10 + 0x20);
          } while (pAVar5 != ani_ctrl + 1);
          uVar4 = motGetNextMotion__FP8ANI_CTRL(&tmp);
          if (uVar4 == '\x01') {
            (ani_ctrl->mot).inp_cnt = 0.0;
            (ani_ctrl->mot).end_flg = 1;
            if ((ani_ctrl->mot).cnt < 1) {
              (ani_ctrl->mot).cnt = 0;
              iVar11 = (ani_ctrl->mot).all_cnt;
            }
            else {
              iVar11 = (ani_ctrl->mot).all_cnt;
              (ani_ctrl->mot).cnt = iVar11 + -1;
            }
            bVar3 = true;
          }
          else if ((char)uVar4 < '\x02') {
            if (uVar4 == '\0') {
LAB_0021b4fc:
              uVar9 = motGetInterpFrameNum__FPUi((ani_ctrl->mot).dat);
              uVar6 = motGetInterpFrameNum__FPUi((ani_ctrl->mot).dat);
              uVar7 = motGetFrameNum__FPUi((ani_ctrl->mot).dat);
              uVar8 = motGetSIFrameNum__FPUi((ani_ctrl->mot).dat);
              top_addr = (ani_ctrl->mot).dat;
              (ani_ctrl->mot).old_mot_cnt = -1.0;
              (ani_ctrl->mot).dat = tmp.mot.dat;
              (ani_ctrl->mot).next_flg = 1;
              iVar11 = (ani_ctrl->mot).all_cnt;
              (ani_ctrl->mot).inp_allcnt = uVar6 * 2 + 2 + ((uVar9 + 1) * uVar7 - uVar8) * -2;
            }
            else {
              iVar11 = (ani_ctrl->mot).all_cnt;
            }
          }
          else {
            if (uVar4 == '\x02') {
              _loop_end = 1;
              goto LAB_0021b4fc;
            }
            iVar11 = (ani_ctrl->mot).all_cnt;
          }
        }
LAB_0021b5a0:
        if ((ani_ctrl->mot).next_flg == 0) {
          iVar2 = (ani_ctrl->mot).cnt;
LAB_0021b5cc:
          if (iVar11 == 0) {
            trap(7);
          }
          motGetFrameData__FP8RST_DATAPUiUi((ani_ctrl->mot).rst0,(ani_ctrl->mot).dat,iVar2 % iVar11)
          ;
          iVar11 = (ani_ctrl->mot).cnt;
        }
        else {
          iVar2 = (ani_ctrl->mot).cnt;
          if (iVar11 <= iVar2) goto LAB_0021b5cc;
          if (iVar11 == 0) {
            trap(7);
          }
          motGetFrameData__FP8RST_DATAPUiUi((ani_ctrl->mot).rst0,top_addr,iVar2 % iVar11);
          iVar11 = (ani_ctrl->mot).cnt;
        }
        iVar2 = (ani_ctrl->mot).all_cnt;
        if (iVar2 == 0) {
          trap(7);
        }
        motGetFrameData__FP8RST_DATAPUiUi
                  ((ani_ctrl->mot).rst1,(ani_ctrl->mot).dat,(iVar11 + 1) % iVar2);
      }
      if (!bVar3) {
        motAniTimerCodeExec__FP8ANI_CTRL(ani_ctrl);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 == 0);
    uVar4 = '\x01';
    if (!bVar3) {
      uVar4 = (uchar)(_loop_end << 1);
    }
  }
  return uVar4;
}

static void motInitNewMotion(ANI_CTRL *ani_ctrl) {
	MOT_CTRL *m_ctrl;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  
  motAniCodeRead__FP8ANI_CTRL(ani_ctrl);
  iVar1 = (ani_ctrl->mot).cnt;
  if (iVar1 == 0) {
    (ani_ctrl->mot).cnt = 0;
    (ani_ctrl->mot).inp_cnt = 0.0;
  }
  else {
    iVar2 = (ani_ctrl->mot).all_cnt;
    if (iVar2 == 0) {
      trap(7);
    }
    (ani_ctrl->mot).cnt = iVar1 % iVar2;
  }
  uVar3 = motGetFrameNum__FPUi((ani_ctrl->mot).dat);
  (ani_ctrl->mot).old_mot_cnt = -1.0;
  (ani_ctrl->mot).all_cnt = uVar3;
  uVar3 = motGetInterpFrameNum__FPUi((ani_ctrl->mot).dat);
  (ani_ctrl->mot).next_flg = 0;
  (ani_ctrl->mot).inp_allcnt = uVar3 * 2 + 2;
  return;
}

static u_char motAddFrame(MOT_CTRL *m_ctrl) {
	u_char cnt;
	
  uchar uVar1;
  uchar uVar2;
  float fVar3;
  
  uVar1 = '\0';
  uVar2 = '\0';
  if ((m_ctrl->reso != 0) && (m_ctrl->end_flg != 1)) {
    fVar3 = motGetNowFramef__FP8MOT_CTRL(m_ctrl);
    m_ctrl->old_mot_cnt = fVar3;
    m_ctrl->inp_cnt = m_ctrl->inp_cnt + (float)m_ctrl->reso / 100.0;
    uVar2 = '\x01';
    if (m_ctrl->inp_allcnt != 0) {
      fVar3 = (float)m_ctrl->inp_allcnt;
      while (uVar2 = uVar1, fVar3 <= m_ctrl->inp_cnt) {
        uVar1 = uVar1 + '\x01';
        m_ctrl->inp_cnt = m_ctrl->inp_cnt - fVar3;
      }
    }
  }
  return uVar2;
}

u_int motGetNowFrame(MOT_CTRL *m_ctrl) {
	u_int inp_allcnt;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = motGetInterpFrameNum__FPUi(m_ctrl->dat);
  uVar1 = m_ctrl->cnt * (uVar1 * 2 + 2);
  if ((int)uVar1 < 0) {
    fVar2 = (float)(uVar1 >> 1) + (float)(uVar1 >> 1);
    fVar3 = m_ctrl->inp_cnt;
  }
  else {
    fVar2 = (float)uVar1;
    fVar3 = m_ctrl->inp_cnt;
  }
  fVar2 = fVar2 + fVar3;
  uVar1 = (uint)fVar2;
  if (2.147484e+09 <= fVar2) {
    uVar1 = (int)(fVar2 - 2.147484e+09) | 0x80000000;
  }
  return uVar1;
}

float motGetNowFramef(MOT_CTRL *m_ctrl) {
	u_int inp_allcnt;
	
  uint uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = motGetInterpFrameNum__FPUi(m_ctrl->dat);
  uVar1 = m_ctrl->cnt * (uVar1 * 2 + 2);
  if ((int)uVar1 < 0) {
    fVar2 = (float)(uVar1 >> 1) + (float)(uVar1 >> 1);
    fVar3 = m_ctrl->inp_cnt;
  }
  else {
    fVar2 = (float)uVar1;
    fVar3 = m_ctrl->inp_cnt;
  }
  return fVar2 + fVar3;
}

void ReqAnm(void *ani_hndl, int flame, int anm_no, int anime_no) {
  mimInitLoop__FP8ANI_CTRL((ANI_CTRL *)ani_hndl);
  motSetAnime__FP8ANI_CTRLPPUsi((ANI_CTRL *)ani_hndl,anm_tbl[anm_no].ani,anime_no);
  motSetHierarchy__FP13SGDCOORDINATEPUi
            (*(SGDCOORDINATE **)(*(int *)((int)ani_hndl + 0xdc) + 8),
             *(uint **)((int)ani_hndl + 0x70));
  motInitInterpAnime__FP8ANI_CTRLi((ANI_CTRL *)ani_hndl,flame);
  return;
}

void motSetAnime(ANI_CTRL *ani_ctrl, ANI_CODE **tbl, int req_no) {
	static char __FUNCTION__[12] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 83,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 65,
		/* [7] = */ 110,
		/* [8] = */ 105,
		/* [9] = */ 109,
		/* [10] = */ 101,
		/* [11] = */ 0
	};
	int iNumAnim;
	
  short *psVar1;
  bool bVar2;
  short **ppsVar3;
  int iVar4;
  
  iVar4 = 0;
  psVar1 = *tbl;
  ppsVar3 = tbl;
  while (psVar1 != (short *)0x0) {
    ppsVar3 = ppsVar3 + 1;
    iVar4 = iVar4 + 1;
    psVar1 = *ppsVar3;
  }
  bVar2 = iVar4 <= req_no;
  if (bVar2) {
    _SetLineInfo__FPCciT0T0("motion.c",0x3df,"motSetAnime","req_no < iNumAnim");
    g3ddbgWarning__FbPCce(false,&DAT_003c0e90);
    if (bVar2) {
      req_no = 0;
    }
  }
  else if (bVar2) {
    req_no = 0;
  }
  (ani_ctrl->anm).timer = 0;
  (ani_ctrl->anm).playnum = req_no;
  (ani_ctrl->anm).stat = 0;
  psVar1 = tbl[req_no];
  (ani_ctrl->anm).loop_rest = 0;
  (ani_ctrl->anm).code_now = psVar1;
  (ani_ctrl->anm).code_head = psVar1;
  motAniCodeClearBuf__FP8ANI_CTRL(ani_ctrl);
  ani_ctrl->interp_flg = 1;
  (ani_ctrl->mot).end_flg = 0;
  return;
}

int motCheckInterp(ANI_CTRL *ani_ctrl) {
  return (int)(ushort)ani_ctrl->interp_flg;
}

int motGetMotReso() {
  int iVar1;
  int iVar2;
  
  iVar1 = GetPALMode__Fv();
  iVar2 = 0xef;
  if (iVar1 == 0) {
    iVar2 = 200;
  }
  return iVar2;
}

void GetMdlNeckPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no) {
	u_short id;
	float p[4];
	
  byte bVar1;
  float p [4];
  
  bVar1 = manmdl_dat[(ushort)mdl_no].head_id;
  memset(p,0,0x10);
  p[3] = 1.0;
  switch((uint)(ushort)mdl_no) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x26:
  case 0x27:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  default:
    p[0] = 1.0;
    break;
  case 2:
    p[2] = 4.0;
    break;
  case 0xc:
  case 0xe:
  case 0x17:
  case 0x28:
  case 0x38:
  case 0x39:
    p[0] = 0.0;
    break;
  case 0x25:
    p[0] = 2.0;
  }
  p[0] = p[0] / (&manmdl_dat[0].scale)[((uint)(ushort)mdl_no * 2 + (uint)(ushort)mdl_no) * 2];
  sceVu0ApplyMatrix(pos,ani_ctrl->base_p->coordp[bVar1].matLocalWorld,p);
  return;
}

u_int GetMdlBonePos(float *pos[4], void *ani_hndl) {
	HeaderSection *hs;
	u_int i;
	
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  
  iVar1 = *(int *)((int)ani_hndl + 0xdc);
  uVar7 = 0;
  if (*(int *)(iVar1 + 0x14) != 1) {
    iVar6 = 0;
    do {
                    /* inlined from ../graph3d/g3dxVu0.h */
      iVar2 = *(int *)(iVar1 + 8) + iVar6;
      fVar3 = *(float *)(iVar2 + 0x74);
      fVar4 = *(float *)(iVar2 + 0x78);
      fVar5 = *(float *)(iVar2 + 0x7c);
      (*pos)[0] = *(float *)(iVar2 + 0x70);
      (*pos)[1] = fVar3;
      (*pos)[2] = fVar4;
      (*pos)[3] = fVar5;
                    /* end of inlined section */
      uVar7 = uVar7 + 1;
      iVar6 = iVar6 + 0xe0;
      pos = pos[1];
    } while (uVar7 < *(int *)(iVar1 + 0x14) - 1U);
    return *(int *)(iVar1 + 0x14) - 1;
  }
  return 0;
}

void GetMdlWaistPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no) {
	float ofs[4];
	u_short id;
	
  float ofs [4];
  
  memset(ofs,0,0x10);
  ofs[3] = 1.0;
  if (mdl_no == 2) {
    ofs[2] = 7.0;
  }
  sceVu0ApplyMatrix(pos,ani_ctrl->base_p->coordp[manmdl_dat[(ushort)mdl_no].waist_id].matLocalWorld,
                    ofs);
  return;
}

void GetMdlHipPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no) {
	float *pv1;
	
  byte bVar1;
  SGDCOORDINATE *pSVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
  pSVar2 = ani_ctrl->base_p->coordp;
                    /* end of inlined section */
  bVar1 = manmdl_dat[(ushort)mdl_no].hip_id;
                    /* inlined from ../graph3d/g3dxVu0.h */
  uVar3 = *(undefined8 *)pSVar2[bVar1].matLocalWorld[3];
  fVar4 = pSVar2[bVar1].matLocalWorld[3][2];
  fVar5 = pSVar2[bVar1].matLocalWorld[3][3];
  *pos = (float)uVar3;
  pos[1] = (float)((ulong)uVar3 >> 0x20);
  pos[2] = fVar4;
  pos[3] = fVar5;
  return;
}

void GetMdlLegPos(float *pos, ANI_CTRL *ani_ctrl, u_short mdl_no) {
	float *pv1;
	
  byte bVar1;
  SGDCOORDINATE *pSVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
  pSVar2 = ani_ctrl->base_p->coordp;
                    /* end of inlined section */
  bVar1 = manmdl_dat[(ushort)mdl_no].leg_id;
                    /* inlined from ../graph3d/g3dxVu0.h */
  uVar3 = *(undefined8 *)pSVar2[bVar1].matLocalWorld[3];
  fVar4 = pSVar2[bVar1].matLocalWorld[3][2];
  fVar5 = pSVar2[bVar1].matLocalWorld[3][3];
  *pos = (float)uVar3;
  pos[1] = (float)((ulong)uVar3 >> 0x20);
  pos[2] = fVar4;
  pos[3] = fVar5;
  return;
}

void GetMdlShldPos(float *pos, ANI_CTRL *ani_ctrl, u_char lr) {
	float *pv1;
	
  SGDCOORDINATE *pSVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
  iVar3 = lr + 1;
                    /* inlined from ../graph3d/g3dxVu0.h */
  pSVar1 = ani_ctrl->base_p->coordp;
  uVar2 = *(undefined8 *)pSVar1[iVar3].matLocalWorld[3];
  fVar4 = pSVar1[iVar3].matLocalWorld[3][2];
  fVar5 = pSVar1[iVar3].matLocalWorld[3][3];
  *pos = (float)uVar2;
  pos[1] = (float)((ulong)uVar2 >> 0x20);
  pos[2] = fVar4;
  pos[3] = fVar5;
  return;
}

void GetPlyrFootPos(float *pos, ANI_CTRL *ani_ctrl, u_char lr) {
	float *pv1;
	
  SGDCOORDINATE *pSVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  
  if (lr != '\0') {
                    /* inlined from ../graph3d/g3dxVu0.h */
    pSVar1 = ani_ctrl->base_p->coordp;
    uVar2 = *(undefined8 *)pSVar1[0x10].matLocalWorld[3];
    fVar3 = pSVar1[0x10].matLocalWorld[3][2];
    fVar4 = pSVar1[0x10].matLocalWorld[3][3];
    *pos = (float)uVar2;
    pos[1] = (float)((ulong)uVar2 >> 0x20);
    pos[2] = fVar3;
    pos[3] = fVar4;
    return;
  }
  pSVar1 = ani_ctrl->base_p->coordp;
  uVar2 = *(undefined8 *)pSVar1[5].matLocalWorld[3];
  fVar3 = pSVar1[5].matLocalWorld[3][2];
  fVar4 = pSVar1[5].matLocalWorld[3][3];
  *pos = (float)uVar2;
  pos[1] = (float)((ulong)uVar2 >> 0x20);
  pos[2] = fVar3;
  pos[3] = fVar4;
  return;
}

void GetPlyrAcsLightPos(float *pos, ANI_CTRL *ani_ctrl) {
	static float p[4] = {
		/* [0] = */ 2.56216383f,
		/* [1] = */ -1.22588289f,
		/* [2] = */ 0.259495974f,
		/* [3] = */ 1.f
	};
	
  sceVu0ApplyMatrix(pos,ani_ctrl->base_p->coordp[6].matLocalWorld,0x32eef0);
  return;
}

void GetToushuKatanaPos(float *p0, float *p1, ANI_CTRL *ani_ctrl) {
	static float ofs0[4] = {
		/* [0] = */ 1.4f,
		/* [1] = */ 1.4f,
		/* [2] = */ 0.299999982f,
		/* [3] = */ 1.f
	};
	static float ofs1[4] = {
		/* [0] = */ 1.81f,
		/* [1] = */ 18.f,
		/* [2] = */ -6.f,
		/* [3] = */ 1.f
	};
	
  sceVu0ApplyMatrix(p0,ani_ctrl->base_p->coordp[6].matLocalWorld,0x32ef00);
  sceVu0ApplyMatrix(p1,ani_ctrl->base_p->coordp[6].matLocalWorld,0x32ef10);
  return;
}

int motGetGuujiTuePos(float *p0, ANI_CTRL *ani_ctrl, int flg) {
	float ofs0[4];
	float ofs1[4];
	
  int iVar1;
  float ofs0 [4];
  float ofs1 [4];
  
  iVar1 = 0;
  ofs0._0_8_ = DAT_003c1000;
  ofs0._8_8_ = DAT_003c1008;
  ofs1._0_8_ = DAT_003c1010;
  ofs1._8_8_ = DAT_003c1018;
  if (ani_ctrl->mdl_no == 0x1f) {
    if (flg == 0) {
      sceVu0ApplyMatrix(p0,ani_ctrl->base_p->coordp[0xc].matLocalWorld,ofs0);
      iVar1 = 1;
    }
    else {
      sceVu0ApplyMatrix(p0,ani_ctrl->base_p->coordp[0xc].matLocalWorld,ofs1);
      iVar1 = 1;
    }
  }
  return iVar1;
}

int motGetKusabiPos(float *p0, ANI_CTRL *ani_ctrl, int flg) {
	float ofs0[4];
	float ofs1[4];
	float ofs2[4];
	float ofs3[4];
	
  HeaderSection *pHVar1;
  float *pfVar2;
  float ofs0 [4];
  float ofs1 [4];
  float ofs2 [4];
  float ofs3 [4];
  
  pfVar2 = ofs0;
  ofs0._0_8_ = DAT_003c1020;
  ofs0._8_8_ = DAT_003c1028;
  ofs1._0_8_ = DAT_003c1030;
  ofs1._8_8_ = DAT_003c1038;
  ofs2._0_8_ = DAT_003c1040;
  ofs2._8_8_ = DAT_003c1048;
  ofs3._0_8_ = DAT_003c1050;
  ofs3._8_8_ = DAT_003c1058;
  if (ani_ctrl->mdl_no != 3) {
    return 0;
  }
  if (flg == 1) {
    pHVar1 = ani_ctrl->base_p;
    pfVar2 = ofs1;
  }
  else if (flg < 2) {
    if (flg != 0) {
      return 1;
    }
    pHVar1 = ani_ctrl->base_p;
  }
  else {
    if (flg != 2) {
      if (flg != 3) {
        return 1;
      }
      sceVu0ApplyMatrix(p0,ani_ctrl->base_p->coordp->matLocalWorld,ofs3);
      return 1;
    }
    pHVar1 = ani_ctrl->base_p;
    pfVar2 = ofs2;
  }
  sceVu0ApplyMatrix(p0,pHVar1->coordp->matLocalWorld,pfVar2);
  return 1;
}

int motGetTaimatuPos(float *p0, ANI_CTRL *ani_ctrl) {
	float ofs0[4];
	
  int iVar1;
  int iVar2;
  float ofs0 [4];
  
  iVar1 = ani_ctrl->mdl_no;
  ofs0._8_8_ = DAT_003c1068;
  ofs0._0_8_ = DAT_003c1060;
  if ((((iVar1 == 0x23) || (iVar1 == 0x32)) || (iVar1 == 0x33)) || (iVar2 = 0, iVar1 == 0x34)) {
    sceVu0ApplyMatrix(p0,ani_ctrl->base_p->coordp[0xc].matLocalWorld,ofs0);
    iVar2 = 1;
  }
  return iVar2;
}

int motGetKuroreiPos(float *p0, ANI_CTRL *ani_ctrl) {
	float ofs0[4];
	
  bool bVar1;
  float ofs0 [4];
  
  ofs0._8_8_ = DAT_003c1078;
  bVar1 = ani_ctrl->mdl_no == 0x29;
  ofs0._0_8_ = DAT_003c1070;
  if (bVar1) {
    sceVu0ApplyMatrix(p0,ani_ctrl->base_p->coordp[0xc].matLocalWorld,ofs0);
  }
  return (uint)bVar1;
}

int motGetBukiUpPos(float *p0, ANI_CTRL *ani_ctrl) {
  switch(ani_ctrl->mdl_no) {
  case 3:
    motGetKusabiPos__FPfP8ANI_CTRLi(p0,ani_ctrl,0);
    break;
  case 0x1f:
    motGetGuujiTuePos__FPfP8ANI_CTRLi(p0,ani_ctrl,0);
    break;
  case 0x23:
  case 0x32:
  case 0x33:
  case 0x34:
    motGetTaimatuPos__FPfP8ANI_CTRL(p0,ani_ctrl);
    break;
  case 0x29:
    motGetKuroreiPos__FPfP8ANI_CTRL(p0,ani_ctrl);
  }
  return 1;
}

int motGetBukiDownPos(float *p0, ANI_CTRL *ani_ctrl) {
  if (ani_ctrl->mdl_no == 3) {
    motGetKusabiPos__FPfP8ANI_CTRLi(p0,ani_ctrl,1);
  }
  else if (ani_ctrl->mdl_no == 0x1f) {
    motGetGuujiTuePos__FPfP8ANI_CTRLi(p0,ani_ctrl,1);
  }
  return 1;
}

int motGetBukiSpeAPos(float *p0, ANI_CTRL *ani_ctrl) {
  if (ani_ctrl->mdl_no == 3) {
    motGetKusabiPos__FPfP8ANI_CTRLi(p0,ani_ctrl,2);
  }
  return 1;
}

int motGetBukiSpeBPos(float *p0, ANI_CTRL *ani_ctrl) {
  if (ani_ctrl->mdl_no == 3) {
    motGetKusabiPos__FPfP8ANI_CTRLi(p0,ani_ctrl,3);
  }
  return 1;
}

int GetMdlHeightPos(void *ani_hndl, float *pos, float *rot, int mdl_no) {
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	int buf_id;
	int hip_id;
	float hip_pos[4];
	float tmp[4];
	float x_vec[4];
	
  int iVar1;
  float hip_pos [4];
  float tmp [4];
  float x_vec [4];
  
  memset(x_vec,0,0x10);
  x_vec[0] = 1.0;
  iVar1 = *(int *)(*(int *)((int)ani_hndl + 0xdc) + 8);
  GetMdlWaistPos__FPfP8ANI_CTRLUs(hip_pos,(ANI_CTRL *)ani_hndl,(short)mdl_no);
  sceVu0CopyVector(tmp,iVar1 + (uint)manmdl_dat[mdl_no].hip_id * 0xe0 + 0x40);
  tmp[1] = 0.0;
  tmp[3] = 0.0;
  sceVu0Normalize(tmp,tmp);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(tmp,x_vec);
}

void motInitInterpAnime(ANI_CTRL *ani_ctrl, int flame) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 73,
		/* [4] = */ 110,
		/* [5] = */ 105,
		/* [6] = */ 116,
		/* [7] = */ 73,
		/* [8] = */ 110,
		/* [9] = */ 116,
		/* [10] = */ 101,
		/* [11] = */ 114,
		/* [12] = */ 112,
		/* [13] = */ 65,
		/* [14] = */ 110,
		/* [15] = */ 105,
		/* [16] = */ 109,
		/* [17] = */ 101,
		/* [18] = */ 0
	};
	int args[3];
	ANI_CODE *ap;
	MOT_CTRL *m_ctrl;
	u_int flg;
	
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ushort *puVar5;
  int args [3];
  
  bVar1 = false;
  (ani_ctrl->mot).old_mot_cnt = -1.0;
  puVar5 = (ushort *)(ani_ctrl->anm).code_head;
  (ani_ctrl->mot).inp_allcnt = flame;
  (ani_ctrl->mot).inp_cnt = 0.0;
  (ani_ctrl->mot).reso_cnt = 0;
  (ani_ctrl->mot).cnt = 0;
  if (puVar5 == (ushort *)0x0) {
    _SetLineInfo__FPCciT0T0("motion.c",0x5b2,"motInitInterpAnime","ani_ctrl->anm.code_head");
    g3ddbgWarning__FbPCce
              ((ani_ctrl->anm).code_head != (short *)0x0,"ani_ctrl->anm.code_head is NULL");
    puVar5 = (ushort *)(ani_ctrl->anm).code_head;
    if (puVar5 == (ushort *)0x0) {
      g3ddbgPrintf__FPCce("[G3DRETURN]%s(%d)(%s):%s\n");
      return;
    }
  }
  do {
    iVar4 = motAniCodeIsEnd__FUs(*puVar5);
    if (iVar4 != 0) {
LAB_0021c468:
      if (bVar1) {
        puVar2 = (ani_ctrl->mot).dat;
      }
      else {
        printf("Warning : Not Found InterpAnime\n");
        puVar2 = (ani_ctrl->mot).dat;
      }
      motGetFrameData__FP8RST_DATAPUiUi((ani_ctrl->mot).rst1,puVar2,0);
      return;
    }
    if (*puVar5 >> 0xc == 2) {
      GetAniCodeArgs__FUsPi(*puVar5,args);
      puVar2 = (uint *)GetFileInPak__FPvi((ani_ctrl->mot).top,args[0]);
      (ani_ctrl->mot).dat = puVar2;
      puVar2 = ani_ctrl->mtop;
      (ani_ctrl->mot).play_id = args[0];
      if (puVar2 != (uint *)0x0) {
        puVar2 = (uint *)GetFileInPak__FPvi(puVar2,args[0]);
        ani_ctrl->mdat = puVar2;
      }
      bVar1 = true;
      uVar3 = motGetFrameNum__FPUi((ani_ctrl->mot).dat);
      (ani_ctrl->mot).all_cnt = uVar3;
      goto LAB_0021c468;
    }
    puVar5 = puVar5 + 1;
  } while( true );
}

static void motSetInterpMatrix(ANI_CTRL *ani_ctrl, float *start[4][4], float *end[4][4]) {
	HeaderSection *hs;
	float m0[4][4];
	float m1[4][4];
	MOT_CTRL *m_ctrl;
	u_int i;
	
  HeaderSection *pHVar1;
  float afVar2 [4];
  float (*paafVar3) [4] [4];
  int iVar4;
  uint uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  float m0 [4] [4];
  float m1 [4] [4];
  
  uVar5 = 0;
  pHVar1 = ani_ctrl->base_p;
  if (pHVar1->blocks != 2) {
    iVar4 = 0;
    do {
      sceRotMatrixXYZ__FPA3_fT0Pf(m0,g_matUnit,(float *)((int)((ani_ctrl->mot).rst0)->rot + iVar4));
      sceVu0Normalize(m0,m0);
      sceVu0Normalize(m0[1],m0[1]);
      sceVu0Normalize(m0[2],m0[2]);
      sceRotMatrixXYZ__FPA3_fT0Pf(m1,g_matUnit,(float *)((int)((ani_ctrl->mot).rst1)->rot + iVar4));
      sceVu0Normalize(m1,m1);
      sceVu0Normalize(m1[1],m1[1]);
      sceVu0Normalize(m1[2],m1[2]);
                    /* inlined from ../graph3d/g3dxVu0.h */
      paafVar3 = start[uVar5];
      auVar6 = _lqc2((undefined  [16])m0[0]);
      auVar7 = _lqc2((undefined  [16])m0[1]);
      auVar8 = _lqc2((undefined  [16])m0[2]);
      auVar9 = _lqc2((undefined  [16])m0[3]);
      afVar2 = (float  [4])_sqc2(auVar6);
      (*paafVar3)[0] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar7);
      (*paafVar3)[1] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar8);
      (*paafVar3)[2] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar9);
      (*paafVar3)[3] = afVar2;
      paafVar3 = end[uVar5];
      auVar6 = _lqc2((undefined  [16])m1[0]);
      auVar7 = _lqc2((undefined  [16])m1[1]);
      auVar8 = _lqc2((undefined  [16])m1[2]);
      auVar9 = _lqc2((undefined  [16])m1[3]);
      afVar2 = (float  [4])_sqc2(auVar6);
      (*paafVar3)[0] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar7);
      (*paafVar3)[1] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar8);
      (*paafVar3)[2] = afVar2;
      afVar2 = (float  [4])_sqc2(auVar9);
      (*paafVar3)[3] = afVar2;
                    /* end of inlined section */
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 0x30;
    } while (uVar5 < pHVar1->blocks - 2);
  }
  return;
}

static void motInterpAnm(ANI_CTRL *ani_ctrl, float *start[4][4], float *end[4][4]) {
	u_int i;
	float trans[4];
	float scale[4];
	float interp[4][4];
	HeaderSection *hs;
	SGDCOORDINATE *coord;
	float rate;
	MOT_CTRL *m_ctrl;
	
  HeaderSection *pHVar1;
  SGDCOORDINATE *pSVar2;
  uint uVar3;
  SGDCOORDINATE *pSVar4;
  int iVar5;
  float (*m0) [4] [4];
  float (*m1) [4] [4];
  uint uVar6;
  float rate;
  float trans [4];
  float scale [4];
  float interp [4] [4];
  
  pHVar1 = ani_ctrl->base_p;
  iVar5 = (ani_ctrl->mot).inp_allcnt;
  pSVar2 = pHVar1->coordp;
  if (iVar5 == 0) {
    rate = 1.0;
    uVar3 = pHVar1->blocks;
  }
  else {
    rate = (ani_ctrl->mot).inp_cnt / (float)iVar5;
    uVar3 = pHVar1->blocks;
  }
  uVar6 = 0;
  if (uVar3 != 1) {
    m1 = end[-1];
    m0 = start[-1];
    iVar5 = 0;
    pSVar4 = pSVar2;
    do {
      pSVar4->bCalc = 0;
      if (uVar6 == 0) {
        sceVu0UnitMatrix(pSVar2);
        uVar3 = pHVar1->blocks;
      }
      else {
        sceVu0UnitMatrix(interp);
        motInterpMatrix__FPA3_fN20f(interp,(float (*) [4])m0,(float (*) [4])m1,rate);
        sceVu0InterVector(rate,trans,(int)((ani_ctrl->mot).rst1)->rot + iVar5 + -0x10,
                          (int)((ani_ctrl->mot).rst0)->rot + iVar5 + -0x10);
        sceVu0InterVector(rate,scale,(int)((ani_ctrl->mot).rst1)->rot + iVar5 + -0x20,
                          (int)((ani_ctrl->mot).rst0)->rot + iVar5 + -0x20);
        sceVu0UnitMatrix(pSVar4);
        pSVar4->matCoord[0] = scale[0];
        pSVar4->matCoord[1][1] = scale[1];
        pSVar4->matCoord[3][3] = 1.0;
        pSVar4->matCoord[2][2] = scale[2];
        sceVu0MulMatrix(pSVar4,pSVar4,interp);
        sceVu0TransMatrix(pSVar4,pSVar4,trans);
        uVar3 = pHVar1->blocks;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x30;
      m1 = m1[1];
      m0 = m0[1];
      pSVar4 = pSVar4 + 1;
    } while (uVar6 < uVar3 - 1);
  }
  return;
}

void motInterpMatrix(float *interp[4], float *m0[4], float *m1[4], float rate) {
	float m[4][4];
	float v[4];
	float r;
	float cos;
	float sin;
	float val;
	float r2;
	float v2[4];
	float m2[4][4];
	float dm0[4][4];
	float dm1[4][4];
	
  float m [4] [4];
  float v [4];
  float v2 [4];
  float m2 [4] [4];
  float dm0 [4] [4];
  float dm1 [4] [4];
  
  sceVu0Normalize(m0);
  sceVu0Normalize(m1,m1);
  sceVu0OuterProduct(v,m0,m1);
  sceVu0Normalize(v,v);
  sceVu0OuterProduct(v2,m1,m0);
  sceVu0Normalize(v2,v2);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(m0,m1);
}

void motMatrix2Quaternion(float *q, float *m[4]) {
	float tr;
	float s;
	int i;
	int j;
	int k;
	int nxt[3];
	
  ulong *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  int nxt [3];
  
  uVar4 = (int)nxt + 7U & 7;
  puVar1 = (ulong *)(((int)nxt + 7U) - uVar4);
  *puVar1 = *puVar1 & -1L << (uVar4 + 1) * 8 | DAT_003c1200 >> (7 - uVar4) * 8;
  nxt._0_8_ = DAT_003c1200;
  nxt[2] = DAT_003c1208;
  sceVu0TransposeMatrix(m);
  fVar5 = (*m)[0] + m[1][1] + m[2][2];
  if (fVar5 <= 0.0) {
    uVar4 = (uint)((*m)[0] < m[1][1]);
    iVar3 = uVar4 * 4;
    piVar2 = nxt + uVar4;
    if (*(float *)(uVar4 * 0x14 + (int)m) < m[2][2]) {
      uVar4 = 2;
      iVar3 = 8;
      piVar2 = nxt + 2;
    }
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
    _qmtc2(((*m)[iVar3 + uVar4] -
           (*(float *)(*piVar2 * 0x14 + (int)m) + *(float *)(nxt[*piVar2] * 0x14 + (int)m))) + 1.0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* inlined from ../graph3d/g3dxVu0.h */
  _qmtc2(fVar5 + 1.0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

void motQuaternion2Matrix(float *m[4], float *q) {
	float wx;
	float wy;
	float wz;
	float xx;
	float yy;
	float yz;
	float xy;
	float xz;
	float zz;
	float x2;
	float y2;
	float z2;
	
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *q;
  fVar1 = q[1];
  fVar3 = q[2];
  fVar6 = fVar1 + fVar1;
  fVar7 = q[3];
  fVar4 = fVar3 + fVar3;
  (*m)[3] = 0.0;
  fVar5 = fVar2 * (fVar2 + fVar2);
  m[3][3] = 1.0;
  m[1][3] = 0.0;
  m[2][3] = 0.0;
  m[3][0] = 0.0;
  m[3][1] = 0.0;
  m[3][2] = 0.0;
  fVar8 = fVar7 * (fVar2 + fVar2);
  m[1][1] = 1.0 - (fVar5 + fVar3 * fVar4);
  m[2][0] = fVar2 * fVar4 - fVar7 * fVar6;
  m[2][1] = fVar1 * fVar4 + fVar8;
  m[1][0] = fVar2 * fVar6 + fVar7 * fVar4;
  (*m)[0] = 1.0 - (fVar1 * fVar6 + fVar3 * fVar4);
  m[2][2] = 1.0 - (fVar5 + fVar1 * fVar6);
  (*m)[1] = fVar2 * fVar6 - fVar7 * fVar4;
  (*m)[2] = fVar2 * fVar4 + fVar7 * fVar6;
  m[1][2] = fVar1 * fVar4 - fVar8;
  return;
}

void motQuaternionSlerp(float *q, float *q1, float *q2, float rate) {
	float ret[4];
	float cosom;
	
  float ret [4];
  
  sceVu0MulVector(ret);
  if (ret[0] + ret[1] + ret[2] + ret[3] < 0.0) {
    sceVu0ScaleVector(0xbf800000,q2,q2);
  }
  sceVu0InterVector(1.0 - rate,q,q1,q2);
  return;
}

void LocalRotMatrixX(float *m0[4], float *m1[4], float rx) {
	float rot[4][4];
	
  float fVar1;
  float rot [4] [4];
  
  sceVu0UnitMatrix(rot);
  rot[1][1] = cosf(rx);
  fVar1 = sinf(rx);
  rot[2][1] = -fVar1;
  rot[1][2] = sinf(rx);
  rot[2][2] = cosf(rx);
  sceVu0MulMatrix(m0,m1,rot);
  return;
}

void LocalRotMatrixY(float *m0[4], float *m1[4], float ry) {
	float rot[4][4];
	
  float fVar1;
  float rot [4] [4];
  
  sceVu0UnitMatrix(rot);
  rot[0][0] = cosf(ry);
  rot[0][2] = sinf(ry);
  fVar1 = sinf(ry);
  rot[2][0] = -fVar1;
  rot[2][2] = cosf(ry);
  sceVu0MulMatrix(m0,m1,rot);
  return;
}

void LocalRotMatrixZ(float *m0[4], float *m1[4], float rz) {
	float rot[4][4];
	
  float fVar1;
  float rot [4] [4];
  
  sceVu0UnitMatrix(rot);
  rot[0][0] = cosf(rz);
  fVar1 = sinf(rz);
  rot[1][0] = -fVar1;
  rot[0][1] = sinf(rz);
  rot[1][1] = cosf(rz);
  sceVu0MulMatrix(m0,m1,rot);
  return;
}

void motInversKinematics(SGDCOORDINATE *cp, float *target, u_int *top_addr, u_char bone_id) {
	u_int parent_id;
	float end_eff[4];
	float root[4];
	float end_root[4];
	float target_root[4];
	float inner;
	float m[4][4];
	float r;
	float raxis[4];
	
  uint uVar1;
  float end_eff [4];
  float root [4];
  float end_root [4];
  float target_root [4];
  float m [4] [4];
  float raxis [4];
  
  sceVu0CopyVector(end_eff,cp[bone_id].matLocalWorld[3]);
  uVar1 = motGetParentId__FPUiUi(top_addr,bone_id - 1);
  sceVu0CopyVector(root,cp[uVar1].matLocalWorld[3]);
  sceVu0SubVector(end_root,end_eff,root);
  sceVu0SubVector(target_root,target,root);
  sceVu0Normalize(end_root,end_root);
  sceVu0Normalize(target_root,target_root);
                    /* WARNING: Subroutine does not return */
  sceVu0InnerProduct(end_root,target_root);
}

static u_int motGetBoneNum(u_int *mot_p) {
  return mot_p[2];
}

static u_int motGetFrameNum(u_int *mot_p) {
  return mot_p[4];
}

static u_int motGetSIFrameNum(u_int *mot_p) {
  return mot_p[7];
}

static u_int motGetInterpFrameNum(u_int *mot_p) {
	static char __FUNCTION__[21] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 73,
		/* [7] = */ 110,
		/* [8] = */ 116,
		/* [9] = */ 101,
		/* [10] = */ 114,
		/* [11] = */ 112,
		/* [12] = */ 70,
		/* [13] = */ 114,
		/* [14] = */ 97,
		/* [15] = */ 109,
		/* [16] = */ 101,
		/* [17] = */ 78,
		/* [18] = */ 117,
		/* [19] = */ 109,
		/* [20] = */ 0
	};
	
  if ((int)mot_p < 0x1000) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("motGetInterpFrameNum Odd mot_p %x");
  }
  return mot_p[5];
}

static u_int motCheckIncludeRstPacket(u_int *mot_p) {
  return mot_p[6] >> 2 & 1;
}

static void motAddressMapping(u_int *top_addr) {
	MOT_ADDR_TABLE *tbl_p;
	u_int i;
	u_int frame_num;
	
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar1 = motGetFrameNum__FPUi(top_addr);
  uVar2 = motCheckIncludeRstPacket__FPUi(top_addr);
  if (uVar2 == 0) {
    puVar3 = top_addr + 0x28;
  }
  else {
    uVar2 = motGetBoneNum__FPUi(top_addr);
    puVar3 = top_addr + uVar2 * 0x18 + 0x28;
  }
  if (*top_addr == 0x4e544f4d) {
    if (top_addr[1] != 1) {
      uVar2 = 0;
      if (uVar1 != 0) {
        do {
          uVar2 = uVar2 + 1;
          *puVar3 = (int)top_addr + *puVar3;
          puVar3 = puVar3 + 1;
        } while (uVar2 < uVar1);
      }
      top_addr[1] = 1;
    }
    return;
  }
  printf("This file isn\'t mot format\n");
  return;
}

static u_int* motGetFrameDataAddr(u_int *top_addr, u_int frame) {
	u_int *addr;
	
  uint uVar1;
  uint *puVar2;
  
  puVar2 = top_addr + 0x28;
  uVar1 = motCheckIncludeRstPacket__FPUi(top_addr);
  if (uVar1 != 0) {
    uVar1 = motGetBoneNum__FPUi(top_addr);
    puVar2 = puVar2 + uVar1 * 0x18;
  }
  return (uint *)puVar2[frame];
}

static void motGetFrameData(RST_DATA *rst, u_int *top_addr, u_int frame) {
  if (frame == 0) {
    motGetFrameDataRST__FP8RST_DATAPUiUi(rst,top_addr,0);
    return;
  }
  motGetFrameDataRT__FP8RST_DATAPUiUiUi(rst,top_addr,frame,0);
  return;
}

static void motGetFrameDataRST(RST_DATA *rst, u_int *top_addr, u_int frame) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 70,
		/* [7] = */ 114,
		/* [8] = */ 97,
		/* [9] = */ 109,
		/* [10] = */ 101,
		/* [11] = */ 68,
		/* [12] = */ 97,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 82,
		/* [16] = */ 83,
		/* [17] = */ 84,
		/* [18] = */ 0
	};
	u_int i;
	u_int bone_num;
	float *pkt;
	
  uint uVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  
  uVar1 = motGetFrameNum__FPUi(top_addr);
  if (uVar1 <= frame) {
    uVar1 = motGetFrameNum__FPUi(top_addr);
    frame = uVar1 - 1;
  }
  pfVar2 = (float *)motGetFrameDataAddr__FPUiUi(top_addr,frame);
  uVar1 = motGetBoneNum__FPUi(top_addr);
  if (0x3c < uVar1) {
    _SetLineInfo__FPCciT0T0("motion.c",0x7ee,"motGetFrameDataRST","bone_num <= BONE_MAX");
    g3ddbgAssert__FbPCce(false,&DAT_003c12a0);
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = uVar3 + 1;
      rst->rot[0] = *pfVar2;
      rst->rot[1] = pfVar2[1];
      rst->rot[2] = pfVar2[2];
      rst->scale[0] = pfVar2[3];
      rst->scale[1] = pfVar2[4];
      rst->scale[2] = pfVar2[5];
      rst->trans[0] = pfVar2[6];
      pfVar4 = pfVar2 + 8;
      rst->trans[1] = pfVar2[7];
      pfVar2 = pfVar2 + 9;
      rst->trans[2] = *pfVar4;
      rst = rst + 1;
    } while (uVar3 < uVar1);
  }
  return;
}

void motGetFrameDataRT(RST_DATA *rst, u_int *top_addr, u_int frame, u_int init_flg) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 109,
		/* [1] = */ 111,
		/* [2] = */ 116,
		/* [3] = */ 71,
		/* [4] = */ 101,
		/* [5] = */ 116,
		/* [6] = */ 70,
		/* [7] = */ 114,
		/* [8] = */ 97,
		/* [9] = */ 109,
		/* [10] = */ 101,
		/* [11] = */ 68,
		/* [12] = */ 97,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 82,
		/* [16] = */ 84,
		/* [17] = */ 0
	};
	u_int i;
	u_int bone_num;
	float *pkt;
	
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  RST_DATA *pRVar4;
  uint uVar5;
  uint uVar6;
  
  if ((init_flg == 0) || (motGetFrameDataRST__FP8RST_DATAPUiUi(rst,top_addr,0), frame != 0)) {
    uVar1 = motGetFrameNum__FPUi(top_addr);
    if (uVar1 <= frame) {
      uVar1 = motGetFrameNum__FPUi(top_addr);
      frame = uVar1 - 1;
      if (frame == 0) {
        return;
      }
    }
    pfVar2 = (float *)motGetFrameDataAddr__FPUiUi(top_addr,frame);
    pfVar3 = (float *)motGetFrameDataAddr__FPUiUi(top_addr,0);
    if (pfVar2 != pfVar3) {
      uVar1 = motGetBoneNum__FPUi(top_addr);
      if (0x3c < uVar1) {
        _SetLineInfo__FPCciT0T0("motion.c",0x812,"motGetFrameDataRT","bone_num <= BONE_MAX");
        g3ddbgAssert__FbPCce(false,&DAT_003c12a0);
      }
      uVar5 = 0;
      pRVar4 = rst;
      if (uVar1 != 0) {
        do {
          uVar5 = uVar5 + 1;
          pRVar4->rot[0] = *pfVar2;
          pfVar3 = pfVar2 + 2;
          pRVar4->rot[1] = pfVar2[1];
          pfVar2 = pfVar2 + 3;
          pRVar4->rot[2] = *pfVar3;
          pRVar4 = pRVar4 + 1;
        } while (uVar5 < uVar1);
      }
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          uVar6 = uVar5 + 1;
          uVar5 = motGetTransId__FPUiUi(top_addr,uVar5);
          if (uVar5 != 0xff) {
            rst->trans[0] = *pfVar2;
            pfVar3 = pfVar2 + 2;
            rst->trans[1] = pfVar2[1];
            pfVar2 = pfVar2 + 3;
            rst->trans[2] = *pfVar3;
          }
          rst = rst + 1;
          uVar5 = uVar6;
        } while (uVar6 < uVar1);
      }
    }
  }
  return;
}

static u_int motGetTransId(u_int *top_addr, u_int id) {
  return (uint)*(byte *)((int)top_addr + id * 2 + 0x21);
}

static u_int motGetParentId(u_int *top_addr, u_int id) {
  return (uint)*(byte *)((int)top_addr + id * 2 + 0x20);
}

void motSetHierarchy(SGDCOORDINATE *coord, u_int *top_addr) {
	u_int i;
	u_int bone_num;
	u_int parent_id;
	
  uint uVar1;
  uint uVar2;
  SGDCOORDINATE **ppSVar3;
  uint id;
  
  id = 0;
  uVar1 = motGetBoneNum__FPUi(top_addr);
  coord->pParent = (SGDCOORDINATE *)0x0;
  if (uVar1 != 0) {
    ppSVar3 = &coord[1].pParent;
    do {
      uVar2 = motGetParentId__FPUiUi(top_addr,id);
      id = id + 1;
      if (uVar2 == 0xff) {
        printf("Warning : model Hierarchy is wrong\n");
        *ppSVar3 = (SGDCOORDINATE *)0x0;
      }
      else {
        *ppSVar3 = coord + uVar2;
      }
      ppSVar3 = ppSVar3 + 0x38;
    } while (id < uVar1);
  }
  return;
}

u_int* SceneInitAnime(ANI_CTRL *ani_ctrl, u_int *mdl_p, u_int *mot_p, u_int *mim_p, u_int *pkt_p, u_int mdl_no) {
	MIME_DAT *mim_dat;
	u_int num;
	u_int *top;
	u_int i;
	u_int i;
	
  uint uVar1;
  uint *puVar2;
  MIME_CTRL *pMVar3;
  WMIM_CTRL *pWVar4;
  MIME_DAT *mdat;
  COLLISION_CTRL *pCVar5;
  CLOTH_CTRL *pCVar6;
  HeaderSection *pHVar7;
  int iVar8;
  uint uVar9;
  uint num;
  
  num = 0;
  motInitClearAniCtrl__FP8ANI_CTRL(ani_ctrl);
  uVar9 = *mdl_p;
  ani_ctrl->mdl_p = mdl_p;
  if (uVar9 != 0) {
    do {
      puVar2 = (uint *)GetFileInPak__FPvi(mdl_p,num);
      uVar1 = puVar2[-3];
      if (uVar1 == 5) {
        ani_ctrl->mpk_p = puVar2;
      }
      else if (uVar1 < 6) {
        if (uVar1 == 4) {
          ani_ctrl->tanm_p = puVar2;
        }
      }
      else if (uVar1 == 6) {
        ani_ctrl->pk2_p = puVar2;
      }
      else if (uVar1 == 7) {
        ani_ctrl->bwc_p = puVar2;
      }
      num = num + 1;
    } while (num < uVar9);
  }
  ani_ctrl->anm_no = -1;
  ani_ctrl->mdl_no = mdl_no;
  ani_ctrl->base_p = (HeaderSection *)(ani_ctrl->mpk_p + 8);
  if (mot_p != (uint *)0x0) {
    motInitMotCtrl__FP8MOT_CTRLPUiT1(&ani_ctrl->mot,mot_p,(uint *)0x0);
    ani_ctrl->mot_num = *mot_p;
  }
  if (mim_p != (uint *)0x0) {
    ani_ctrl->mim_num = *mim_p;
    pMVar3 = (MIME_CTRL *)motAlign128__FPUi(pkt_p);
    ani_ctrl->mim = pMVar3;
    pWVar4 = (WMIM_CTRL *)motAlign128__FPUi((uint *)(pMVar3 + 0x32));
    ani_ctrl->wmim = pWVar4;
    mdat = (MIME_DAT *)motAlign128__FPUi((uint *)(pWVar4 + 10));
    puVar2 = motAlign128__FPUi((uint *)(mdat + 0x32));
    pkt_p = mimInitMimeCtrl__FP9MIME_CTRLP8MIME_DATPUiN32
                      (ani_ctrl->mim,mdat,mim_p,ani_ctrl->mpk_p,puVar2,&ani_ctrl->mim_num);
    uVar9 = 0;
    if (ani_ctrl->mim_num != 0) {
      iVar8 = 0;
      do {
        uVar9 = uVar9 + 1;
        (&ani_ctrl->mim->stat)[iVar8] = '\x02';
        iVar8 = iVar8 + 0x1c;
      } while (uVar9 < ani_ctrl->mim_num);
    }
    mimInitAcsCtrl__FP8ANI_CTRLUs(ani_ctrl,(short)mdl_no);
  }
  if (manmdl_dat[mdl_no].collision == (COLLISION_DAT *)0x0) {
    ani_ctrl->collision_ctrl = (COLLISION_CTRL *)0x0;
  }
  else {
    pCVar5 = (COLLISION_CTRL *)motAlign128__FPUi(pkt_p);
    ani_ctrl->collision_ctrl = pCVar5;
    pkt_p = motAlign128__FPUi((uint *)(pCVar5 + 1));
  }
  if (manmdl_dat[mdl_no].cdat == (CLOTH_DAT *)0x0) {
    pHVar7 = ani_ctrl->base_p;
  }
  else {
    pCVar6 = (CLOTH_CTRL *)motAlign128__FPUi(pkt_p);
    ani_ctrl->cloth_ctrl = pCVar6;
    puVar2 = motAlign128__FPUi((uint *)(pCVar6 + 10));
    pkt_p = acsInitCloth__FP10CLOTH_CTRLP14COLLISION_CTRLPUiT2ii
                      (ani_ctrl->cloth_ctrl,ani_ctrl->collision_ctrl,ani_ctrl->mpk_p,puVar2,mdl_no,0
                      );
    pHVar7 = ani_ctrl->base_p;
  }
  motSetHierarchy__FP13SGDCOORDINATEPUi(pHVar7->coordp,(ani_ctrl->mot).dat);
  return pkt_p;
}

u_int* SceneInitOtherAnime(ANI_CTRL *ani_ctrl, u_int *mdl_p, u_int *mot_p, u_int *mim_p, u_int *pkt_p) {
	MIME_DAT *mim_dat;
	u_int i;
	
  uint *puVar1;
  MIME_CTRL *pMVar2;
  MIME_DAT *mdat;
  int iVar3;
  uint uVar4;
  
  ani_ctrl->base_p = (HeaderSection *)mdl_p;
  ani_ctrl->mot_num = 0;
  ani_ctrl->mim_num = 0;
  ani_ctrl->bg_num = 0;
  ani_ctrl->wmim_num = 0;
  ani_ctrl->mdl_p = (uint *)0x0;
  ani_ctrl->mpk_p = (uint *)0x0;
  ani_ctrl->pk2_p = (uint *)0x0;
  ani_ctrl->ftype = 0;
  ani_ctrl->mim = (MIME_CTRL *)0x0;
  ani_ctrl->wmim = (WMIM_CTRL *)0x0;
  ani_ctrl->bgmim = (MIME_CTRL *)0x0;
  if (mot_p != (uint *)0x0) {
    motInitMotCtrl__FP8MOT_CTRLPUiT1(&ani_ctrl->mot,mot_p,(uint *)0x0);
    ani_ctrl->mot_num = *mot_p;
  }
  if (mim_p != (uint *)0x0) {
    puVar1 = (uint *)GetPakTaleAddr__FPv(mim_p);
    ani_ctrl->mim_num = *mim_p;
    pMVar2 = (MIME_CTRL *)motAlign128__FPUi(puVar1);
    ani_ctrl->mim = pMVar2;
    mdat = (MIME_DAT *)motAlign128__FPUi((uint *)(pMVar2 + 0x32));
    puVar1 = motAlign128__FPUi((uint *)(mdat + 0x32));
    pkt_p = mimInitMimeCtrl__FP9MIME_CTRLP8MIME_DATPUiN32
                      (ani_ctrl->mim,mdat,mim_p,ani_ctrl->mpk_p,puVar1,&ani_ctrl->mim_num);
    uVar4 = 0;
    if (ani_ctrl->mim_num != 0) {
      iVar3 = 0;
      do {
        uVar4 = uVar4 + 1;
        (&ani_ctrl->mim->stat)[iVar3] = '\x02';
        iVar3 = iVar3 + 0x1c;
      } while (uVar4 < ani_ctrl->mim_num);
    }
  }
  motSetHierarchy__FP13SGDCOORDINATEPUi(ani_ctrl->base_p->coordp,(ani_ctrl->mot).dat);
  return pkt_p;
}

void motSetCoordFrame(ANI_CTRL *ani_ctrl, u_int frame) {
	MOT_CTRL *m_ctrl;
	u_int data_no;
	
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  
  uVar2 = motGetInterpFrameNum__FPUi((ani_ctrl->mot).dat);
  iVar3 = uVar2 * 2 + 2;
  (ani_ctrl->mot).inp_allcnt = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0;
    (ani_ctrl->mot).inp_cnt = 0.0;
    (ani_ctrl->mot).old_mot_cnt = -1.0;
  }
  else {
    uVar2 = (int)frame / iVar3;
    uVar1 = (int)frame % iVar3;
    if (iVar3 == 0) {
      trap(7);
    }
    if ((int)uVar1 < 0) {
      fVar4 = (float)(uVar1 & 1 | uVar1 >> 1);
      (ani_ctrl->mot).inp_cnt = fVar4 + fVar4;
    }
    else {
      (ani_ctrl->mot).inp_cnt = (float)uVar1;
    }
  }
  motGetFrameDataRT__FP8RST_DATAPUiUiUi((ani_ctrl->mot).rst0,(ani_ctrl->mot).dat,uVar2,1);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  motGetFrameDataRT__FP8RST_DATAPUiUiUi((ani_ctrl->mot).rst1,(ani_ctrl->mot).dat,uVar2 + 1,1);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
  _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
  motSetInterpMatrix__FP8ANI_CTRLPA3_A3_fT1
            (ani_ctrl,(float (*) [4] [4])&m_start,(float (*) [4] [4])&m_end);
  _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
  _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
  motInterpAnm__FP8ANI_CTRLPA3_A3_fT1
            (ani_ctrl,(float (*) [4] [4])&m_start,(float (*) [4] [4])&m_end);
  return;
}

void SceneSetCoordFrame(ANI_CTRL *ani_ctrl, u_int frame, u_int type) {
	static char __FUNCTION__[19] = {
		/* [0] = */ 83,
		/* [1] = */ 99,
		/* [2] = */ 101,
		/* [3] = */ 110,
		/* [4] = */ 101,
		/* [5] = */ 83,
		/* [6] = */ 101,
		/* [7] = */ 116,
		/* [8] = */ 67,
		/* [9] = */ 111,
		/* [10] = */ 111,
		/* [11] = */ 114,
		/* [12] = */ 100,
		/* [13] = */ 70,
		/* [14] = */ 114,
		/* [15] = */ 97,
		/* [16] = */ 109,
		/* [17] = */ 101,
		/* [18] = */ 0
	};
	MOT_CTRL *m_ctrl;
	u_int i;
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	static fixed_array<RST_DATA,60> rst;
	
  HeaderSection *pHVar1;
  SGDCOORDINATE *m0;
  uint uVar2;
  SGDCOORDINATE *m0_00;
  uint uVar3;
  
  if (__tmp_10_1205 == 0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    __tmp_10_1205 = 1;
  }
                    /* end of inlined section */
  pHVar1 = ani_ctrl->base_p;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  m0 = pHVar1->coordp;
  _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
  motGetFrameDataRT__FP8RST_DATAPUiUiUi((RST_DATA *)&rst_1204,(ani_ctrl->mot).dat,frame,1);
                    /* end of inlined section */
  if (type == 0) {
    uVar3 = 1;
    sceVu0UnitMatrix(m0);
    m0->bCalc = 0;
    if (1 < pHVar1->blocks - 1) {
      do {
        m0_00 = m0 + 1;
        uVar2 = uVar3 - 1;
        uVar3 = uVar3 + 1;
        if (0x3b < uVar2) {
          _SetLineInfo__FPCciT0T0("motion.c",0x92a,"SceneSetCoordFrame","i-1 < BONE_MAX");
          g3ddbgAssert__FbPCce(false,&DAT_003c12a0);
        }
                    /* end of inlined section */
        sceVu0UnitMatrix(m0_00);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(uVar2,0x3c);
        m0_00->matCoord[0] = (&DAT_004b72d0)[uVar2 * 0xc];
        _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(uVar2,0x3c);
        m0[1].matCoord[1][1] = (&DAT_004b72d4)[uVar2 * 0xc];
        _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(uVar2,0x3c);
        m0[1].matCoord[2][2] = (&DAT_004b72d8)[uVar2 * 0xc];
        _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(uVar2,0x3c);
        sceRotMatrixXYZ__FPA3_fT0Pf
                  ((float (*) [4])m0_00,(float (*) [4])m0_00,(float *)(&rst_1204 + uVar2 * 0x30));
        _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(uVar2,0x3c);
        sceVu0TransMatrix(m0_00,m0_00,&DAT_004b72e0 + uVar2 * 0x30);
                    /* end of inlined section */
        m0[1].bCalc = 0;
        m0 = m0_00;
      } while (uVar3 < pHVar1->blocks - 1);
    }
  }
  else {
                    /* end of inlined section */
    sceVu0UnitMatrix(m0);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    m0->matCoord[0] = DAT_004b72d0;
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    m0->matCoord[1][1] = DAT_004b72d4;
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    m0->matCoord[2][2] = DAT_004b72d8;
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    sceRotMatrixXYZ__FPA3_fT0Pf((float (*) [4])m0,(float (*) [4])m0,(float *)&rst_1204);
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    sceVu0TransMatrix(m0,m0,0x4b72e0);
                    /* end of inlined section */
    m0->bCalc = 0;
  }
  return;
}

void SceneSetCoordFrameF(ANI_CTRL *ani_ctrl, float frame, u_int type) {
	MOT_CTRL *m_ctrl;
	u_int i;
	u_int frame_i;
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	float frame_f;
	float m0[4][4];
	float m1[4][4];
	static fixed_array<RST_DATA,60> rst0;
	static fixed_array<RST_DATA,60> rst1;
	float interp[4][4];
	float trans[4];
	float scale[4];
	
  HeaderSection *pHVar1;
  SGDCOORDINATE *pSVar2;
  float afVar3 [4];
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  float m0 [4] [4];
  float m1 [4] [4];
  float interp [4] [4];
  float trans [4];
  float scale [4];
  
  if (__tmp_11_1219 == 0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    __tmp_11_1219 = 1;
  }
                    /* end of inlined section */
  if (__tmp_12_1221 == 0) {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    __tmp_12_1221 = 1;
  }
                    /* end of inlined section */
  uVar5 = (uint)frame;
  pHVar1 = ani_ctrl->base_p;
  pSVar2 = pHVar1->coordp;
  if (2.147484e+09 <= frame) {
    uVar5 = (int)(frame - 2.147484e+09) | 0x80000000;
  }
  if ((int)uVar5 < 0) {
    fVar6 = (float)(uVar5 & 1 | uVar5 >> 1);
    fVar6 = fVar6 + fVar6;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
  }
  else {
    fVar6 = (float)uVar5;
  }
  fVar6 = frame - fVar6;
  _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
  motGetFrameDataRT__FP8RST_DATAPUiUiUi((RST_DATA *)&rst0_1218,(ani_ctrl->mot).dat,uVar5,1);
  _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
  iVar4 = (ani_ctrl->mot).all_cnt;
  if (iVar4 == 0) {
    trap(7);
  }
  motGetFrameDataRT__FP8RST_DATAPUiUiUi
            ((RST_DATA *)&rst1_1220,(ani_ctrl->mot).dat,(int)(uVar5 + 1) % iVar4,1);
                    /* end of inlined section */
  if (type == 0) {
    uVar5 = 0;
    if (pHVar1->blocks != 2) {
      iVar4 = 0;
      do {
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(uVar5,0x3c);
        sceRotMatrixXYZ__FPA3_fT0Pf(m0,g_matUnit,(float *)(&rst0_1218 + iVar4));
                    /* end of inlined section */
        sceVu0Normalize(m0,m0);
        sceVu0Normalize(m0[1],m0[1]);
        sceVu0Normalize(m0[2],m0[2]);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(uVar5,0x3c);
        sceRotMatrixXYZ__FPA3_fT0Pf(m1,g_matUnit,(float *)(&rst1_1220 + iVar4));
                    /* end of inlined section */
        sceVu0Normalize(m1,m1);
        sceVu0Normalize(m1[1],m1[1]);
        sceVu0Normalize(m1[2],m1[2]);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(uVar5,0x3c);
                    /* inlined from ../graph3d/g3dxVu0.h */
        auVar7 = _lqc2((undefined  [16])m0[0]);
        auVar8 = _lqc2((undefined  [16])m0[1]);
        auVar9 = _lqc2((undefined  [16])m0[2]);
        auVar10 = _lqc2((undefined  [16])m0[3]);
        afVar3 = (float  [4])_sqc2(auVar7);
        m_start.field0_0x0.m_aData[uVar5][0] = afVar3;
        afVar3 = (float  [4])_sqc2(auVar8);
        m_start.field0_0x0.m_aData[uVar5][1] = afVar3;
        afVar3 = (float  [4])_sqc2(auVar9);
        m_start.field0_0x0.m_aData[uVar5][2] = afVar3;
        afVar3 = (float  [4])_sqc2(auVar10);
        m_start.field0_0x0.m_aData[uVar5][3] = afVar3;
                    /* inlined from ../graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(uVar5,0x3c);
                    /* inlined from ../graph3d/g3dxVu0.h */
        auVar7 = _lqc2((undefined  [16])m1[0]);
        auVar8 = _lqc2((undefined  [16])m1[1]);
        auVar9 = _lqc2((undefined  [16])m1[2]);
        auVar10 = _lqc2((undefined  [16])m1[3]);
        afVar3 = (float  [4])_sqc2(auVar7);
        m_end.field0_0x0.m_aData[uVar5][0] = afVar3;
        afVar3 = (float  [4])_sqc2(auVar8);
        m_end.field0_0x0.m_aData[uVar5][1] = afVar3;
        afVar3 = (float  [4])_sqc2(auVar9);
        m_end.field0_0x0.m_aData[uVar5][2] = afVar3;
        afVar3 = (float  [4])_sqc2(auVar10);
        m_end.field0_0x0.m_aData[uVar5][3] = afVar3;
                    /* end of inlined section */
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x30;
      } while (uVar5 < pHVar1->blocks - 2);
    }
    _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
    _fixed_array_verifyrange__H1ZA3_A3_f_UiUi_PX01(0,0x3c);
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    motSceneInterpAnm__FP8ANI_CTRLPA3_A3_fT1P8RST_DATAT3f
              (ani_ctrl,(float (*) [4] [4])&m_start,(float (*) [4] [4])&m_end,(RST_DATA *)&rst0_1218
               ,(RST_DATA *)&rst1_1220,fVar6);
  }
  else {
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    sceRotMatrixXYZ__FPA3_fT0Pf(m0,g_matUnit,(float *)&rst0_1218);
                    /* end of inlined section */
    sceVu0Normalize(m0,m0);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    sceVu0Normalize(m0[1],m0[1]);
    sceVu0Normalize(m0[2],m0[2]);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    sceRotMatrixXYZ__FPA3_fT0Pf(m1,g_matUnit,(float *)&rst1_1220);
                    /* end of inlined section */
    sceVu0Normalize(m1,m1);
    sceVu0Normalize(m1[1],m1[1]);
    sceVu0Normalize(m1[2],m1[2]);
    pSVar2->bCalc = 0;
    sceVu0UnitMatrix(interp);
    motInterpMatrix__FPA3_fN20f(interp,m0,m1,fVar6);
                    /* inlined from ../graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    sceVu0InterVector(fVar6,trans,0x4b8960,0x4b7e20);
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    _fixed_array_verifyrange__H1Z8RST_DATA_UiUi_PX01(0,0x3c);
    sceVu0InterVector(fVar6,scale,0x4b8950,0x4b7e10);
                    /* end of inlined section */
    sceVu0UnitMatrix(pSVar2);
    pSVar2->matCoord[0] = scale[0];
    pSVar2->matCoord[1][1] = scale[1];
    pSVar2->matCoord[3][3] = 1.0;
    pSVar2->matCoord[2][2] = scale[2];
    sceVu0MulMatrix(pSVar2,pSVar2,interp);
    sceVu0TransMatrix(pSVar2,pSVar2,trans);
  }
  return;
}

static void motSceneInterpAnm(ANI_CTRL *ani_ctrl, float *start[4][4], float *end[4][4], RST_DATA *rst0, RST_DATA *rst1, float rate) {
	u_int i;
	float trans[4];
	float scale[4];
	float interp[4][4];
	HeaderSection *hs;
	SGDCOORDINATE *coord;
	
  HeaderSection *pHVar1;
  SGDCOORDINATE *pSVar2;
  uint uVar3;
  SGDCOORDINATE *pSVar4;
  int iVar5;
  float (*m0) [4] [4];
  float (*m1) [4] [4];
  uint uVar6;
  float fVar7;
  float trans [4];
  float scale [4];
  float interp [4] [4];
  
  uVar6 = 0;
  pHVar1 = ani_ctrl->base_p;
  pSVar2 = pHVar1->coordp;
  if (pHVar1->blocks != 1) {
    fVar7 = 1.0;
    m1 = end[-1];
    m0 = start[-1];
    iVar5 = 0;
    pSVar4 = pSVar2;
    do {
      pSVar4->bCalc = 0;
      if (uVar6 == 0) {
        sceVu0UnitMatrix(pSVar2);
        uVar3 = pHVar1->blocks;
      }
      else {
        sceVu0UnitMatrix(interp);
        motInterpMatrix__FPA3_fN20f(interp,(float (*) [4])m0,(float (*) [4])m1,rate);
        sceVu0InterVector(rate,trans,(int)rst1->rot + iVar5 + -0x10,(int)rst0->rot + iVar5 + -0x10);
        sceVu0InterVector(rate,scale,(int)rst1->rot + iVar5 + -0x20,(int)rst0->rot + iVar5 + -0x20);
        sceVu0UnitMatrix(pSVar4);
        pSVar4->matCoord[0] = scale[0];
        pSVar4->matCoord[1][1] = scale[1];
        pSVar4->matCoord[3][3] = fVar7;
        pSVar4->matCoord[2][2] = scale[2];
        sceVu0MulMatrix(pSVar4,pSVar4,interp);
        sceVu0TransMatrix(pSVar4,pSVar4,trans);
        uVar3 = pHVar1->blocks;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x30;
      m1 = m1[1];
      m0 = m0[1];
      pSVar4 = pSVar4 + 1;
    } while (uVar6 < uVar3 - 1);
  }
  return;
}

void motSetInvMatrix(float *m1[4], float *m0[4]) {
  g3dMatrixInverseTransform__FPA3_fPA3_Cf(m1,m0);
  return;
}

u_int* motAlign128(u_int *addr) {
	u_int tmp;
	
  if (((uint)addr & 0xf) != 0) {
    addr = (uint *)((int)addr + (0x10 - ((uint)addr & 0xf)));
  }
  return addr;
}

void motPrintVector(char *str, float *vec) {
  printf("%s : %f,%f,%f,%f\n");
  return;
}

void sceRotMatrixXYZ(float *m0[4], float *m1[4], float *rot) {
	float mat[4][4];
	
  float mat [4] [4];
  
  sceVu0RotMatrixX(*rot,mat,m1);
  sceVu0RotMatrixY(rot[1],mat,mat);
  sceVu0RotMatrixZ(rot[2],m0,mat);
  return;
}

void SetCoordinate(ANI_CTRL *ani_ctrl, float *mdl_pos, float *mdl_rot) {
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	
  HeaderSection *pHVar1;
  SGDCOORDINATE *pCoord;
  
  pHVar1 = ani_ctrl->base_p;
  pCoord = pHVar1->coordp;
  SetRT2BaseMtx__FP8ANI_CTRLPfT1(ani_ctrl,mdl_pos,mdl_rot);
  sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,pHVar1->blocks - 1);
  return;
}

void SetRT2BaseMtx(ANI_CTRL *ani_ctrl, float *mdl_pos, float *mdl_rot) {
	HeaderSection *hs;
	SGDCOORDINATE *cp;
	float grot;
	
  SGDCOORDINATE *pSVar1;
  float afVar2 [4];
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from ../graph3d/g3dxVu0.h */
                    /* end of inlined section */
  pSVar1 = ani_ctrl->base_p->coordp;
                    /* inlined from ../graph3d/g3dxVu0.h */
  auVar6 = _lqc2((undefined  [16])g_matConvertSI2PS[0]);
  auVar7 = _lqc2((undefined  [16])g_matConvertSI2PS[1]);
  auVar8 = _lqc2((undefined  [16])g_matConvertSI2PS[2]);
  auVar9 = _lqc2((undefined  [16])g_matConvertSI2PS[3]);
  afVar2 = (float  [4])_sqc2(auVar6);
  *(float *)((int)pSVar1->matCoord[0] + 0) = afVar2[0];
  *(float *)((int)pSVar1->matCoord[0] + 4) = afVar2[1];
  *(float *)((int)pSVar1->matCoord[0] + 8) = afVar2[2];
  *(float *)((int)pSVar1->matCoord[0] + 0xc) = afVar2[3];
  afVar2 = (float  [4])_sqc2(auVar7);
  *(float *)((int)pSVar1->matCoord[1] + 0) = afVar2[0];
  *(float *)((int)pSVar1->matCoord[1] + 4) = afVar2[1];
  *(float *)((int)pSVar1->matCoord[1] + 8) = afVar2[2];
  *(float *)((int)pSVar1->matCoord[1] + 0xc) = afVar2[3];
  afVar2 = (float  [4])_sqc2(auVar8);
  *(float *)((int)pSVar1->matCoord[2] + 0) = afVar2[0];
  *(float *)((int)pSVar1->matCoord[2] + 4) = afVar2[1];
  *(float *)((int)pSVar1->matCoord[2] + 8) = afVar2[2];
  *(float *)((int)pSVar1->matCoord[2] + 0xc) = afVar2[3];
  afVar2 = (float  [4])_sqc2(auVar9);
  *(float *)((int)pSVar1->matCoord[3] + 0) = afVar2[0];
  *(float *)((int)pSVar1->matCoord[3] + 4) = afVar2[1];
  *(float *)((int)pSVar1->matCoord[3] + 8) = afVar2[2];
  *(float *)((int)pSVar1->matCoord[3] + 0xc) = afVar2[3];
                    /* end of inlined section */
  fVar5 = mdl_rot[1] + DAT_003ee5f0;
  if (DAT_003ee5f0 < fVar5) {
    fVar5 = fVar5 - DAT_003ee5f4;
  }
  sceVu0RotMatrixY(fVar5,pSVar1,pSVar1);
                    /* inlined from ../graph3d/g3dxVu0.h */
  uVar3 = *(undefined8 *)mdl_pos;
  fVar5 = mdl_pos[2];
  fVar4 = mdl_pos[3];
  pSVar1->matCoord[3][0] = (float)uVar3;
  pSVar1->matCoord[3][1] = (float)((ulong)uVar3 >> 0x20);
  pSVar1->matCoord[3][2] = fVar5;
  pSVar1->matCoord[3][3] = fVar4;
                    /* end of inlined section */
  pSVar1->matCoord[3][3] = 1.0;
  return;
}

void motGetLocalWorldMatrix(float *LocalWorld[4], u_int *mpk_p, int BoneId) {
	SGDCOORDINATE *cp;
	
  sceVu0CopyMatrix(LocalWorld,mpk_p[10] + BoneId * 0xe0 + 0x40);
  return;
}

float*[4][4] float [3][3] * _fixed_array_verifyrange<float [3][3]>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

RST_DATA* RST_DATA * _fixed_array_verifyrange<RST_DATA>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& float [3][3] type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& RST_DATA type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to motInitANI_CTRL() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
