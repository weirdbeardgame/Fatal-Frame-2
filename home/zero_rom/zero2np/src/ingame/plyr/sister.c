// STATUS: NOT STARTED

#include "sister.h"

struct SIS_SEARCH {
	char start;
	char end;
	char flg;
};

struct SIS_MOTION {
	char mot_loop;
	char mot_end;
	char now_tbl;
	SIS_ANI_TBL *sat;
};

struct fixed_array_base<SIS_ANI_TBL *,10,SIS_ANI_TBL **> {
protected:
	SIS_ANI_TBL **m_aData;
	
public:
	fixed_array_base<SIS_ANI_TBL *,10,SIS_ANI_TBL **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SIS_ANI_TBL*& operator[]();
	SIS_ANI_TBL*& operator[]();
	SIS_ANI_TBL** data();
	SIS_ANI_TBL** begin();
	SIS_ANI_TBL** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<SIS_ANI_TBL *,10> : fixed_array_base<SIS_ANI_TBL *,10,SIS_ANI_TBL **> {
};

struct SIS_AREA_CHG_SUB {
	int now;
	float pos[4];
};

struct SIS_AREA_CHG {
	int old;
	SIS_AREA_CHG_SUB *target;
};

SIS_TRACE sis_trace = {
	/* .top = */ 0,
	/* .now = */ 0,
	/* .num = */ 0,
	/* .cnt = */ 0,
	/* .trgt = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .trgt_floor = */ 0,
	/* .vwpos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .push_tm = */ 0,
	/* .push_cnt = */ 0,
	/* .push = */ 0,
	/* .push_dir = */ 0,
	/* .push_pldir = */ 0,
	/* .push_dist = */ 0.f,
	/* .push_rot = */ 0.f,
	/* .push_orot = */ 0.f,
	/* .view_hit = */ 0,
	/* .dist = */ 0.f,
	/* .wsdist = */ 0.f,
	/* .wedist = */ 0.f,
	/* .rsdist = */ 0.f,
	/* .redist = */ 0.f,
	/* .p = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
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
				},
				/* [4] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [5] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [6] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [7] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [8] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [9] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [10] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [11] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [12] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [13] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [14] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [15] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [16] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [17] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [18] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [19] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [20] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [21] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [22] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [23] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [24] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [25] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [26] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [27] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [28] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [29] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [30] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [31] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [32] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [33] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [34] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [35] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [36] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [37] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [38] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [39] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [40] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [41] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [42] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [43] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [44] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [45] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [46] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [47] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [48] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [49] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [50] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [51] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [52] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [53] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [54] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [55] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [56] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [57] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [58] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [59] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [60] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [61] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [62] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* [63] = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				}
			}
		}
	},
	/* .l = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f,
				/* [4] = */ 0.f,
				/* [5] = */ 0.f,
				/* [6] = */ 0.f,
				/* [7] = */ 0.f,
				/* [8] = */ 0.f,
				/* [9] = */ 0.f,
				/* [10] = */ 0.f,
				/* [11] = */ 0.f,
				/* [12] = */ 0.f,
				/* [13] = */ 0.f,
				/* [14] = */ 0.f,
				/* [15] = */ 0.f,
				/* [16] = */ 0.f,
				/* [17] = */ 0.f,
				/* [18] = */ 0.f,
				/* [19] = */ 0.f,
				/* [20] = */ 0.f,
				/* [21] = */ 0.f,
				/* [22] = */ 0.f,
				/* [23] = */ 0.f,
				/* [24] = */ 0.f,
				/* [25] = */ 0.f,
				/* [26] = */ 0.f,
				/* [27] = */ 0.f,
				/* [28] = */ 0.f,
				/* [29] = */ 0.f,
				/* [30] = */ 0.f,
				/* [31] = */ 0.f,
				/* [32] = */ 0.f,
				/* [33] = */ 0.f,
				/* [34] = */ 0.f,
				/* [35] = */ 0.f,
				/* [36] = */ 0.f,
				/* [37] = */ 0.f,
				/* [38] = */ 0.f,
				/* [39] = */ 0.f,
				/* [40] = */ 0.f,
				/* [41] = */ 0.f,
				/* [42] = */ 0.f,
				/* [43] = */ 0.f,
				/* [44] = */ 0.f,
				/* [45] = */ 0.f,
				/* [46] = */ 0.f,
				/* [47] = */ 0.f,
				/* [48] = */ 0.f,
				/* [49] = */ 0.f,
				/* [50] = */ 0.f,
				/* [51] = */ 0.f,
				/* [52] = */ 0.f,
				/* [53] = */ 0.f,
				/* [54] = */ 0.f,
				/* [55] = */ 0.f,
				/* [56] = */ 0.f,
				/* [57] = */ 0.f,
				/* [58] = */ 0.f,
				/* [59] = */ 0.f,
				/* [60] = */ 0.f,
				/* [61] = */ 0.f,
				/* [62] = */ 0.f,
				/* [63] = */ 0.f
			}
		}
	},
	/* .fl = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
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
				/* [19] = */ 0,
				/* [20] = */ 0,
				/* [21] = */ 0,
				/* [22] = */ 0,
				/* [23] = */ 0,
				/* [24] = */ 0,
				/* [25] = */ 0,
				/* [26] = */ 0,
				/* [27] = */ 0,
				/* [28] = */ 0,
				/* [29] = */ 0,
				/* [30] = */ 0,
				/* [31] = */ 0,
				/* [32] = */ 0,
				/* [33] = */ 0,
				/* [34] = */ 0,
				/* [35] = */ 0,
				/* [36] = */ 0,
				/* [37] = */ 0,
				/* [38] = */ 0,
				/* [39] = */ 0,
				/* [40] = */ 0,
				/* [41] = */ 0,
				/* [42] = */ 0,
				/* [43] = */ 0,
				/* [44] = */ 0,
				/* [45] = */ 0,
				/* [46] = */ 0,
				/* [47] = */ 0,
				/* [48] = */ 0,
				/* [49] = */ 0,
				/* [50] = */ 0,
				/* [51] = */ 0,
				/* [52] = */ 0,
				/* [53] = */ 0,
				/* [54] = */ 0,
				/* [55] = */ 0,
				/* [56] = */ 0,
				/* [57] = */ 0,
				/* [58] = */ 0,
				/* [59] = */ 0,
				/* [60] = */ 0,
				/* [61] = */ 0,
				/* [62] = */ 0,
				/* [63] = */ 0
			}
		}
	}
};

static SIS_ANI_TBL sis_ani001_tbl[3] = {
	/* [0] = */ {
		/* .ani_no = */ 31,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [1] = */ {
		/* .ani_no = */ 32,
		/* .frm = */ 10,
		/* .loop = */ -1
	},
	/* [2] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani002_tbl[3] = {
	/* [0] = */ {
		/* .ani_no = */ 33,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [1] = */ {
		/* .ani_no = */ 0,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [2] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani003_tbl[2] = {
	/* [0] = */ {
		/* .ani_no = */ 0,
		/* .frm = */ 10,
		/* .loop = */ -1
	},
	/* [1] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani004_tbl[2] = {
	/* [0] = */ {
		/* .ani_no = */ 0,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [1] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani005_tbl[4] = {
	/* [0] = */ {
		/* .ani_no = */ 45,
		/* .frm = */ 30,
		/* .loop = */ 1
	},
	/* [1] = */ {
		/* .ani_no = */ 4,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [2] = */ {
		/* .ani_no = */ 0,
		/* .frm = */ 10,
		/* .loop = */ -1
	},
	/* [3] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani006_tbl[2] = {
	/* [0] = */ {
		/* .ani_no = */ 0,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [1] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani007_tbl[2] = {
	/* [0] = */ {
		/* .ani_no = */ 3,
		/* .frm = */ 10,
		/* .loop = */ -1
	},
	/* [1] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani008_tbl[2] = {
	/* [0] = */ {
		/* .ani_no = */ 4,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [1] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani998_tbl[2] = {
	/* [0] = */ {
		/* .ani_no = */ 254,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [1] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_ANI_TBL sis_ani999_tbl[2] = {
	/* [0] = */ {
		/* .ani_no = */ 0,
		/* .frm = */ 10,
		/* .loop = */ 1
	},
	/* [1] = */ {
		/* .ani_no = */ 255,
		/* .frm = */ 0,
		/* .loop = */ 0
	}
};

static SIS_AREA_CHG_SUB sis_area_chg_ry00[3] = {
	/* [0] = */ {
		/* .now = */ 2,
		/* .pos = */ {
			/* [0] = */ 16625.f,
			/* [1] = */ 441.f,
			/* [2] = */ 9864.f,
			/* [3] = */ 1.f
		}
	},
	/* [1] = */ {
		/* .now = */ 9,
		/* .pos = */ {
			/* [0] = */ 2011.f,
			/* [1] = */ 12.f,
			/* [2] = */ 11546.f,
			/* [3] = */ 1.f
		}
	},
	/* [2] = */ {
		/* .now = */ -1,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	}
};

static SIS_AREA_CHG_SUB sis_area_chg_ry02[3] = {
	/* [0] = */ {
		/* .now = */ 0,
		/* .pos = */ {
			/* [0] = */ 23138.f,
			/* [1] = */ 1863.f,
			/* [2] = */ 13656.f,
			/* [3] = */ 1.f
		}
	},
	/* [1] = */ {
		/* .now = */ 4,
		/* .pos = */ {
			/* [0] = */ 20739.f,
			/* [1] = */ 3000.f,
			/* [2] = */ 24049.f,
			/* [3] = */ 1.f
		}
	},
	/* [2] = */ {
		/* .now = */ -1,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	}
};

static SIS_AREA_CHG_SUB sis_area_chg_ry04[3] = {
	/* [0] = */ {
		/* .now = */ 2,
		/* .pos = */ {
			/* [0] = */ 11654.f,
			/* [1] = */ 3000.f,
			/* [2] = */ 24033.f,
			/* [3] = */ 1.f
		}
	},
	/* [1] = */ {
		/* .now = */ 6,
		/* .pos = */ {
			/* [0] = */ 3758.f,
			/* [1] = */ 3000.f,
			/* [2] = */ 25430.f,
			/* [3] = */ 1.f
		}
	},
	/* [2] = */ {
		/* .now = */ -1,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	}
};

static SIS_AREA_CHG_SUB sis_area_chg_ry06[3] = {
	/* [0] = */ {
		/* .now = */ 4,
		/* .pos = */ {
			/* [0] = */ -87.f,
			/* [1] = */ 3035.f,
			/* [2] = */ 29995.f,
			/* [3] = */ 1.f
		}
	},
	/* [1] = */ {
		/* .now = */ 8,
		/* .pos = */ {
			/* [0] = */ -7346.f,
			/* [1] = */ 1304.f,
			/* [2] = */ 30913.f,
			/* [3] = */ 1.f
		}
	},
	/* [2] = */ {
		/* .now = */ -1,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	}
};

static SIS_AREA_CHG_SUB sis_area_chg_ry08[2] = {
	/* [0] = */ {
		/* .now = */ 6,
		/* .pos = */ {
			/* [0] = */ -11545.f,
			/* [1] = */ -3250.f,
			/* [2] = */ 38587.f,
			/* [3] = */ 1.f
		}
	},
	/* [1] = */ {
		/* .now = */ -1,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	}
};

static SIS_AREA_CHG_SUB sis_area_chg_ry09[2] = {
	/* [0] = */ {
		/* .now = */ 0,
		/* .pos = */ {
			/* [0] = */ -4859.f,
			/* [1] = */ 1720.f,
			/* [2] = */ 17344.f,
			/* [3] = */ 1.f
		}
	},
	/* [1] = */ {
		/* .now = */ -1,
		/* .pos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	}
};

static SIS_AREA_CHG sis_area_chg[7] = {
	/* [0] = */ {
		/* .old = */ 0,
		/* .target = */ sis_area_chg_ry00
	},
	/* [1] = */ {
		/* .old = */ 2,
		/* .target = */ sis_area_chg_ry02
	},
	/* [2] = */ {
		/* .old = */ 4,
		/* .target = */ sis_area_chg_ry04
	},
	/* [3] = */ {
		/* .old = */ 6,
		/* .target = */ sis_area_chg_ry06
	},
	/* [4] = */ {
		/* .old = */ 8,
		/* .target = */ sis_area_chg_ry08
	},
	/* [5] = */ {
		/* .old = */ 9,
		/* .target = */ sis_area_chg_ry09
	},
	/* [6] = */ {
		/* .old = */ -1,
		/* .target = */ NULL
	}
};

static reference_fixed_array<SIS_ANI_TBL *,10> sis_ani_tbl;
unsigned char float [3] type_info node[8];
unsigned char ENE_WRK type_info node[8];
unsigned char SIS_ANI_TBL * type_info node[12];
unsigned char SIS_ANI_TBL type_info node[8];

SIS_WRK sis_wrk = {
	/* .cmn_wrk = */ {
		/* .mbox = */ {
			/* .mloop = */ 0.f,
			/* .pos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .bpos = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .mv = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .bmv = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .rot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .brot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .spd = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .rspd = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			},
			/* .trot = */ {
				/* [0] = */ 0.f,
				/* [1] = */ 0.f,
				/* [2] = */ 0.f,
				/* [3] = */ 0.f
			}
		},
		/* .st = */ {
			/* .sta = */ 0,
			/* .sta_old = */ 0,
			/* .mvsta = */ 0,
			/* .hp = */ 0,
			/* .sp = */ 0,
			/* .hpmax = */ 0,
			/* .spmax = */ 0,
			/* .hp_recover_time = */ 0,
			/* .sp_recover_time = */ 0,
			/* .sp_down_fl = */ 0,
			/* .dmg = */ 0,
			/* .rhspdmg = */ 0,
			/* .rhpdmg = */ 0,
			/* .rspdmg = */ 0,
			/* .dmg_old = */ 0,
			/* .dmg_type = */ 0,
			/* .dmg_cam_flag = */ 0,
			/* .dwalk_tm = */ 0,
			/* .cond = */ 0,
			/* .cond_old = */ 0,
			/* .cond_tm = */ 0,
			/* .invisible_timer = */ 0
		},
		/* .pr_info = */ {
			/* .area_no = */ 0,
			/* .area_old = */ 0,
			/* .room_id = */ 0,
			/* .room_old = */ 0,
			/* .camera_no = */ 0,
			/* .camera_no_old = */ 0,
			/* .hight = */ 0.f
		},
		/* .mode = */ 0,
		/* .atk_eneno = */ 0,
		/* .atk_pos = */ 0,
		/* .atk_rot = */ 0,
		/* .near_ene_dist = */ 0.f,
		/* .near_ene_dist_old = */ 0.f,
		/* .near_ene_no = */ 0,
		/* .floor = */ 0,
		/* .headpos = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f,
			/* [2] = */ 0.f,
			/* [3] = */ 0.f
		}
	},
	/* .alg = */ {
		/* .job_no = */ 0,
		/* .pos_no = */ 0,
		/* .wait_time = */ 0,
		/* .loop = */ {
			/* [0] = */ 0.f,
			/* [1] = */ 0.f
		},
		/* .comm_add = */ {
			/* .pu8 = */ NULL,
			/* .pu16 = */ NULL,
			/* .pu32 = */ NULL,
			/* .pu64 = */ NULL,
			/* .ps8 = */ NULL,
			/* .ps16 = */ NULL,
			/* .ps32 = */ NULL,
			/* .ps64 = */ NULL,
			/* .wrk = */ 0
		},
		/* .comm_add_top = */ 0,
		/* .data_addr = */ 0,
		/* .stack_b = */ {
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
			/* [15] = */ 0
		},
		/* .stack_p = */ NULL,
		/* .flag = */ 0
	},
	/* .on = */ 0,
	/* .modedead = */ 0,
	/* .anime_no = */ 0,
	/* .trace_dist = */ 0,
	/* .trace_dist_bak = */ 0,
	/* .stop_tm = */ 0,
	/* .walk_tm = */ 0,
	/* .run_tm = */ 0,
	/* .scared_rcvr_tm = */ 0,
	/* .dmg_tm = */ 0,
	/* .dmg_se_num = */ 0,
	/* .dmg_se_cnt = */ 0,
	/* .btl_recv_tm = */ 0,
	/* .push_se_tm = */ 0,
	/* .se_nanika2_tm = */ 0,
	/* .se_deadly = */ 0,
	/* .se_matte = */ 0,
	/* .se_konaide = */ 0,
	/* .cower_tm = */ 0,
	/* .se_cower_cnt = */ 0,
	/* .se_door_fl = */ 0,
	/* .pl_dist = */ 0.f,
	/* .wpos = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .spd = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .old_spd = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .s3d = */ {
		/* .pos = */ NULL,
		/* .vel = */ NULL,
		/* .dir = */ NULL
	},
	/* .bwp = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .lock_cnt = */ 0,
	/* .join_flg = */ 0
};

SIS_ALG_WORK sis_algo = {
	/* .amode = */ 0
};

SIS_SEARCH sis_search = {
	/* .start = */ 0,
	/* .end = */ 0,
	/* .flg = */ 0
};

SIS_MOTION sis_motion = {
	/* .mot_loop = */ 0,
	/* .mot_end = */ 0,
	/* .now_tbl = */ 0,
	/* .sat = */ NULL
};

float sistv[4] = {
	/* [0] = */ 0.f,
	/* [1] = */ 0.f,
	/* [2] = */ 0.f,
	/* [3] = */ 0.f
};

static char look_at_pre_kaidan_flg;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c73e0;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11SIS_ANI_TBL(0x3f43a8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11SIS_ANI_TBL(0x3f43b0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11SIS_ANI_TBL(0x3c7428,_max);
  }
  return (uint **)0x0;
}

void InitSister() {
  memset(&sis_wrk,0,0x250);
  sis_algo.amode = '\0';
  memset(&sis_trace,0,0x5c0);
  memset(&sis_search,0,3);
  memset(&sis_motion,0,8);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
  sis_wrk.se_deadly = -1;
  sis_wrk.se_matte = '\0';
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  sis_wrk.se_konaide = '\0';
  if (ingame_wrk.mDifficulty.mValue == '\x01') {
    sis_wrk.cmn_wrk.st.hpmax = 10000;
    goto LAB_0025be6c;
  }
  if (ingame_wrk.mDifficulty.mValue < '\x02') {
    if (ingame_wrk.mDifficulty.mValue == '\0') {
                    /* end of inlined section */
      sis_wrk.cmn_wrk.st.hpmax = 15000;
      goto LAB_0025be6c;
    }
  }
  else {
    if (ingame_wrk.mDifficulty.mValue == '\x02') {
      sis_wrk.cmn_wrk.st.hpmax = 7000;
      goto LAB_0025be6c;
    }
    if (ingame_wrk.mDifficulty.mValue == '\x03') {
      sis_wrk.cmn_wrk.st.hpmax = 5000;
      goto LAB_0025be6c;
    }
  }
  sis_wrk.cmn_wrk.st.hpmax = 10000;
LAB_0025be6c:
  sis_wrk.cmn_wrk.floor = 0xb;
  sis_wrk.cmn_wrk.st.hp = sis_wrk.cmn_wrk.st.hpmax;
  sis_wrk.spd[2] = 8.0;
  sis_wrk.cmn_wrk.st.spmax = 0;
  sis_wrk.cmn_wrk.st.sp = 0;
  sis_wrk.cmn_wrk.st.rhspdmg = 0;
  sis_wrk.cmn_wrk.st.rhpdmg = 0;
  sis_wrk.cmn_wrk.st.rspdmg = 0;
  sis_wrk.cmn_wrk.near_ene_dist_old = 0.0;
  sis_wrk.cmn_wrk.near_ene_dist = 0.0;
  sis_wrk.lock_cnt = 0;
  InitSisterPos__Fv();
  InitSisterTrace__Fv();
  sis_wrk.pl_dist = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
  SisterLock__Fv();
  SisterDrawLock__Fv();
  look_at_pre_kaidan_flg = '\0';
  sis_search.flg = '\0';
  sis_algo.amode = '\0';
  return;
}

void InitSisterPos() {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_wrk.cmn_wrk.mbox.pos[0] = plyr_wrk.cmn_wrk.mbox.pos[0];
  sis_wrk.cmn_wrk.mbox.pos[1] = plyr_wrk.cmn_wrk.mbox.pos[1];
  sis_wrk.cmn_wrk.mbox.bpos[0] = plyr_wrk.cmn_wrk.mbox.pos[0];
  sis_wrk.cmn_wrk.mbox.bpos[1] = plyr_wrk.cmn_wrk.mbox.pos[1];
  sis_wrk.cmn_wrk.mbox.bpos[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
  sis_wrk.cmn_wrk.mbox.bpos[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
  sis_wrk.cmn_wrk.mbox.pos[2] = (float)((double)plyr_wrk.cmn_wrk.mbox.pos[2] - DAT_003c7438);
  sis_wrk.cmn_wrk.mbox.rot[1] = DAT_003ee8d0;
  sis_wrk.cmn_wrk.mbox.pos[3] = 1.0;
  return;
}

void InitSisterTracePos() {
	SIS_TRACE *stp;
	
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  sis_trace.num = 2;
  sis_trace.top = 1;
  sis_trace.now = 0;
  sis_trace.dist = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
  iVar3 = sis_trace.top;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.top,0x40);
  fVar2 = plyr_wrk.cmn_wrk.mbox.pos[3];
  fVar1 = plyr_wrk.cmn_wrk.mbox.pos[2];
  fVar5 = plyr_wrk.cmn_wrk.mbox.pos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_trace.vwpos[iVar3 * 4 + 0x14] = plyr_wrk.cmn_wrk.mbox.pos[0];
  sis_trace.vwpos[iVar3 * 4 + 0x15] = fVar5;
  sis_trace.vwpos[iVar3 * 4 + 0x16] = fVar1;
  sis_trace.vwpos[iVar3 * 4 + 0x17] = fVar2;
  iVar3 = sis_trace.now;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.now,0x40);
  fVar2 = sis_wrk.cmn_wrk.mbox.pos[3];
  fVar1 = sis_wrk.cmn_wrk.mbox.pos[2];
  fVar5 = sis_wrk.cmn_wrk.mbox.pos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_trace.vwpos[iVar3 * 4 + 0x14] = sis_wrk.cmn_wrk.mbox.pos[0];
  sis_trace.vwpos[iVar3 * 4 + 0x15] = fVar5;
  sis_trace.vwpos[iVar3 * 4 + 0x16] = fVar1;
  sis_trace.vwpos[iVar3 * 4 + 0x17] = fVar2;
  iVar3 = sis_trace.top;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.top,0x40);
  iVar4 = sis_trace.now;
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.now,0x40);
  fVar5 = GetDistV__FPCfT0(sis_trace.vwpos + iVar3 * 4 + 0x14,sis_trace.vwpos + iVar4 * 4 + 0x14);
  iVar3 = sis_trace.top;
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(sis_trace.top,0x40);
  sis_trace.l.field0_0x0.m_aData[iVar3] = fVar5;
  return;
}

void InitSisterTrace() {
  memset(&sis_trace,0,0x5c0);
  ChangeSisTraceDist__FUc('\0');
  InitSisterTracePos__Fv();
  return;
}

void ChangeForceTraceMode() {
  sis_wrk.cmn_wrk.st.dwalk_tm = 0;
  sis_wrk.cmn_wrk.st.mvsta = 0;
  sis_search.flg = '\0';
  SetSisterAnime__FUcUc('\0','\x01');
  sis_algo.amode = '\0';
  sis_trace.push_tm = 0;
  sis_trace.push = 0;
  InitSisterTracePos__Fv();
  return;
}

void ChangeSisTraceDist(u_char type) {
  sis_wrk.trace_dist = type;
  if (type == '\0') {
    sis_trace.redist = 500.0;
    sis_trace.wsdist = 1000.0;
    sis_trace.rsdist = DAT_003ee8d4;
  }
  else {
    sis_trace.redist = 400.0;
    sis_trace.wsdist = 500.0;
    sis_trace.rsdist = 800.0;
  }
  sis_trace.wedist = sis_trace.redist;
  return;
}

void SisterDisp(int sw) {
  if (sw == 0) {
    if (sis_wrk.on != '\0') {
      sis_wrk.on = '\0';
      SisterLock__Fv();
      SisterDrawLock__Fv();
    }
  }
  else if (sis_wrk.on == '\0') {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
    sis_wrk.on = '\x01';
                    /* end of inlined section */
    SisterUnlock__Fv();
    SisterDrawUnlock__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    sis_wrk.cmn_wrk.mbox.pos[0] = plyr_wrk.cmn_wrk.mbox.pos[0];
    sis_wrk.cmn_wrk.mbox.pos[1] = plyr_wrk.cmn_wrk.mbox.pos[1];
    sis_wrk.cmn_wrk.mbox.pos[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
    sis_wrk.cmn_wrk.mbox.pos[2] = (float)((double)plyr_wrk.cmn_wrk.mbox.pos[2] - _DAT_003c7440);
    sis_wrk.cmn_wrk.mbox.rot[1] = plyr_wrk.cmn_wrk.mbox.rot[1];
    InitSisterTracePos__Fv();
    return;
  }
  return;
}

static void SisKaidanLookAt() {
	float mtx[4][4];
	float offset[4];
	LOOK_AT_PARAM param;
	
  float fLimitDist;
  float mtx [4] [4];
  float offset [4];
  _LOOK_AT_PARAM param;
  
  param.eye_spd = DAT_003ee8d8;
  param.head_spd = DAT_003ee8dc;
  param.chest_spd = DAT_003ee8e0;
  sis_mdlGetMATRIX__FPA3_fi(mtx,0);
  if (((((byte)(sis_wrk.anime_no - 0x10) < 2) || (sis_wrk.anime_no == '\x18')) ||
      (sis_wrk.anime_no == '\x19')) ||
     (((sis_wrk.anime_no == '\x12' || (sis_wrk.anime_no == '\x13')) ||
      ((sis_wrk.anime_no == '\x16' || (sis_wrk.anime_no == '\x17')))))) {
    sceVu0ScaleVector(0x41f00000,offset,mtx[1]);
    sceVu0AddVector(&param,mtx[3],offset);
    sceVu0ScaleVector(0x41a00000,offset,mtx[2]);
    sceVu0AddVector(&param,&param,offset);
    fLimitDist = DAT_003f4418;
    SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
              (&param,LTP_MAYU_KAIDAN,DAT_003f4418);
  }
  else {
    if ((((1 < (byte)(sis_wrk.anime_no - 0x12)) && (sis_wrk.anime_no != '\x1a')) &&
        ((sis_wrk.anime_no != '\x1b' &&
         (((sis_wrk.anime_no != '\x14' && (sis_wrk.anime_no != '\x15')) &&
          (sis_wrk.anime_no != '\x18')))))) && (sis_wrk.anime_no != '\x19')) {
      if (look_at_pre_kaidan_flg == '\0') {
        return;
      }
      sceVu0ScaleVector(0x42200000,offset,mtx[2]);
      sis_mdlGetMATRIX__FPA3_fi(mtx,2);
      sceVu0AddVector(&param,mtx[3],offset);
      SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
                (&param,LTP_MAYU_KAIDAN,DAT_003f4418);
      look_at_pre_kaidan_flg = '\0';
      return;
    }
    sceVu0ScaleVector(0x41200000,offset,mtx[2]);
    sceVu0AddVector(&param,mtx[3],offset);
    fLimitDist = DAT_003f4418;
  }
  SisNeckRegisterTarget__FP14_LOOK_AT_PARAM26_LOOK_TARGET_PRIORITY_MAYUf
            (&param,LTP_MAYU_KAIDAN,fLimitDist);
  look_at_pre_kaidan_flg = '\x01';
  return;
}

void SisMepachiCtrl() {
	static int no;
	
  int iVar1;
  
  if (__tmp_10_1028 == 0) {
    no_1027 = GetRandValI__Fi(200);
    __tmp_10_1028 = 1;
  }
  iVar1 = IsSisterMimParts__Fi(5);
  if ((iVar1 == 0) && (no_1027 = no_1027 + -1, no_1027 == -1)) {
    ReqSisterMim__Fii(5,0);
    no_1027 = GetRandValI__Fi(200);
  }
  return;
}

float GetDist_Sister2Player() {
  return sis_wrk.pl_dist;
}

void SisterMain() {
	LOOK_AT_PARAM param;
	
  bool bVar1;
  int iVar2;
  float fVar3;
  _LOOK_AT_PARAM param;
  
  if (sis_wrk.on != '\0') {
    sis_wrk.pl_dist = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
    sis_wrk.s3d.pos = (float (*) [4])sis_wrk.cmn_wrk.mbox.pos;
    if (sis_wrk.lock_cnt == 0) {
      SisterDebug__Fv();
      iVar2 = IsReadySisMdl__Fv();
      if (iVar2 == 0) {
        printf("SIS_MDL IS NOT SETUP\n");
      }
      else {
        SisMepachiCtrl__Fv();
        NearEneInfo__FP9PLCMN_WRK(&sis_wrk.cmn_wrk);
        if (sis_wrk.cmn_wrk.mode != '\t') {
          if (1 < (byte)(sis_algo.amode - 6)) {
            SisDoorAct__Fv();
            PlyrSPdownCtrl__FP9PLCMN_WRK(pl_sta[1]);
            PlyrHPdownCtrl__FP9PLCMN_WRK(pl_sta[1]);
            SisterDamageCtrl__Fv();
            CalcSisDist__Fv();
            MoveSisStairs__Fv();
            CheckSisGhost__Fv();
            SetSisterStatus__Fv();
            SisCondCheck__Fv();
          }
          switch(sis_algo.amode) {
          case '\0':
            ModeSisTrace__Fv();
            break;
          case '\x01':
            ModeSisFind__Fv();
            break;
          case '\x02':
            SisAlgoMain__Fv();
            break;
          case '\x03':
            ModeSisAeneFind__Fv();
            break;
          case '\x04':
            ModeSisTalk__Fv();
            break;
          case '\x05':
            ModeSisSearch__Fv();
            break;
          case '\x06':
            ModeSisMotion__Fv();
            break;
          case '\a':
            SisAlgoMain__Fv();
          }
          SisterPosUpdate__Fv();
          if ((3 < (byte)(sis_wrk.cmn_wrk.mode - 1)) && (sis_algo.amode != '\x06')) {
            if (sis_algo.amode != '\x02') {
              SisterNAnimeCtrl__Fv();
            }
            bVar1 = sis_wrk.cmn_wrk.st.invisible_timer == 0;
            sis_wrk.cmn_wrk.st.invisible_timer = sis_wrk.cmn_wrk.st.invisible_timer + -1;
            if (bVar1) {
              sis_wrk.cmn_wrk.st.invisible_timer = 0;
            }
            bVar1 = sis_wrk.btl_recv_tm == 0;
            sis_wrk.btl_recv_tm = sis_wrk.btl_recv_tm + -1;
            if (bVar1) {
              sis_wrk.btl_recv_tm = 0;
            }
          }
          SisKaidanLookAt__Fv();
          fVar3 = GetDist_Sister2Player__Fv();
          if (fVar3 <= 2000.0) {
            param.eye_spd = DAT_003ee8e4;
            param.head_spd = DAT_003ee8e8;
            param.chest_spd = DAT_003ee8ec;
            sceVu0CopyVector(&param,0x34fd00);
          }
        }
      }
    }
    else {
      SisterPosUpdate__Fv();
    }
  }
  return;
}

int SisterGameOver() {
  int iVar1;
  
  if ((sis_wrk.on != '\0') && (sis_wrk.cmn_wrk.mode == '\t')) {
    iVar1 = SisDead__Fv();
    return iVar1;
  }
  return 0;
}

void ReqSisDead(int mode) {
  SendIngameGameOverPre__Fi(1);
  sis_wrk.modedead = (uchar)mode;
  sis_wrk.cmn_wrk.mode = '\t';
  return;
}

int SisDead() {
	int ret;
	static int cnt = 0;
	DISP_SQAR dsq;
	SQAR_DAT fade_bg;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  uchar uVar5;
  float *center;
  int iVar6;
  DISP_SQAR dsq;
  SQAR_DAT fade_bg;
  float afStack_50 [4];
  float afStack_40 [4];
  
  uVar5 = sis_wrk.cmn_wrk.atk_eneno;
  puVar1 = (undefined *)((int)&fade_bg.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c7480 >> (7 - uVar2) * 8;
  fade_bg._0_8_ = DAT_003c7480;
  puVar1 = (undefined *)((int)&fade_bg.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003c7488 >> (7 - uVar2) * 8;
  fade_bg._8_8_ = DAT_003c7488;
  uVar2 = (uint)&fade_bg.alpha & 7;
  puVar4 = &fade_bg.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003c7490 >> (7 - uVar2) * 8;
  fade_bg._16_8_ = DAT_003c7490;
  iVar6 = 0;
  switch(sis_wrk.modedead) {
  default:
    goto switchD_0025c86c_caseD_0;
  case '\x02':
  case '\x04':
    sis_wrk.modedead = '\x1e';
    cnt_1044 = 0;
    return 0;
  case '\n':
    goto LAB_0025cbf8;
  case '\x14':
    break;
  case '\x15':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(sis_wrk.cmn_wrk.atk_eneno,10);
    center = afStack_50;
                    /* end of inlined section */
    goto LAB_0025c9b0;
  case '\x16':
    cnt_1044 = cnt_1044 + 1;
    if (cnt_1044 < 0xf) {
      return 0;
    }
    FadeOutReq__FUcUcUcUi(0xff,0xff,0xff,0x1e);
    cnt_1044 = 0;
    break;
  case '\x17':
    if (cnt_1044 + 1 < 0x1e) {
      cnt_1044 = cnt_1044 + 1;
      return 0;
    }
    cnt_1044 = 0;
    break;
  case '\x18':
    cnt_1044 = cnt_1044 + 1;
    if (cnt_1044 < 0x1e) {
      return 0;
    }
    sis_wrk.cmn_wrk.st.hp = 0;
    sis_wrk.cmn_wrk.st.sp = 0;
    EndPlyrApproachCameraCtrl__Fv();
    FadeInReq__FUcUcUcUi(0xff,0xff,0xff,0x1e);
    SetSisterAnime__FUcUc('(','\x02');
    PlayerChangeMode__Fi(0);
    cnt_1044 = 0;
    goto LAB_0025cb14;
  case '\x19':
    cnt_1044 = cnt_1044 + 1;
    if (cnt_1044 < 0x1e) {
      return 0;
    }
    goto LAB_0025cbf8;
  case '\x1e':
    MapCamTargetChange__Fi(1);
    break;
  case '\x1f':
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(sis_wrk.cmn_wrk.atk_eneno,10);
    center = afStack_40;
LAB_0025c9b0:
    GetCenterPoint__FPfN20
              (center,sis_wrk.cmn_wrk.mbox.pos,
               (float *)((int)&ene_wrk.field0_0x0.m_aData[0].mbox +
                        ((uint)uVar5 * 0x48 + (uint)uVar5) * 0x10 + 0x10));
                    /* end of inlined section */
    ReqPlyrApproachCameraCtrl__FPfff(center,600.0,700.0);
    ReqSisBankPlay__FiiiiP11_SND_3D_SET(2,1,1,0,&sis_wrk.s3d);
    sis_wrk.modedead = sis_wrk.modedead + '\x01';
    cnt_1044 = 0;
    return 0;
  case ' ':
    if (cnt_1044 + 1 < 0x14) {
      cnt_1044 = cnt_1044 + 1;
      return 0;
    }
    cnt_1044 = 0;
    break;
  case '!':
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&fade_bg);
    dsq.alpha = (uchar)((cnt_1044 << 7) / 0x1e);
    DispSqrD__FP9DISP_SQAR(&dsq);
    if (cnt_1044 + 1 < 0x1e) {
      cnt_1044 = cnt_1044 + 1;
      return 0;
    }
    cnt_1044 = 0;
    SetDrawFLG_SI_GameOver__Fv();
    EndPlyrApproachCameraCtrl__Fv();
    ReqPlyrDeadCameraCtrl__FPffffT0
              (sis_wrk.cmn_wrk.mbox.pos,200.0,500.0,1000.0,sis_wrk.cmn_wrk.mbox.rot);
    goto LAB_0025cb14;
  case '\"':
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&fade_bg);
    dsq.alpha = 0x80;
    DispSqrD__FP9DISP_SQAR(&dsq);
    cnt_1044 = cnt_1044 + 1;
    if (cnt_1044 < 0x1e) {
      return 0;
    }
    sis_wrk.cmn_wrk.st.hp = 0;
    sis_wrk.cmn_wrk.st.sp = 0;
    SetSisterAnime__FUcUc('(','\x02');
    cnt_1044 = 0;
LAB_0025cb14:
    sis_wrk.modedead = sis_wrk.modedead + '\x01';
    return 0;
  case '#':
    CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dsq,&fade_bg);
    dsq.alpha = (uchar)(((0x1e - cnt_1044) * 0x80) / 0x1e);
    DispSqrD__FP9DISP_SQAR(&dsq);
    if (cnt_1044 == 0xe) {
      ReqSisBankPlay__FiiiiP11_SND_3D_SET(4,1,1,0,&sis_wrk.s3d);
    }
    if (cnt_1044 + 1 < 0x1e) {
      cnt_1044 = cnt_1044 + 1;
      return 0;
    }
    cnt_1044 = 0;
    break;
  case '$':
    cnt_1044 = cnt_1044 + 1;
    if (cnt_1044 < 0x14) {
      return 0;
    }
    FadeOutReq__FUcUcUcUi('\0','\0','\0',0x1e);
    cnt_1044 = 0;
    break;
  case '%':
    if (cnt_1044 + 1 < 0x32) {
      cnt_1044 = cnt_1044 + 1;
      return 0;
    }
    cnt_1044 = 0;
    EndPlyrApproachCameraCtrl__Fv();
LAB_0025cbf8:
    iVar6 = 1;
    SetOpenCondSwitch__FUc('\x01');
  }
  sis_wrk.modedead = sis_wrk.modedead + '\x01';
switchD_0025c86c_caseD_0:
  return iVar6;
}

int IsSisWrk() {
  return (int)sis_wrk.on;
}

void SetSisWrk(int flg) {
  if (flg != 0) {
    sis_algo.amode = '\0';
    sis_wrk.alg.data_addr = 0;
  }
  sis_wrk.on = (uchar)flg;
  return;
}

void ModeSisTrace() {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_trace.trgt[0] = plyr_wrk.cmn_wrk.mbox.pos[0];
  sis_trace.trgt[1] = plyr_wrk.cmn_wrk.mbox.pos[1];
  sis_trace.trgt[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
  sis_trace.trgt[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
  sis_trace.trgt_floor = (int)(short)plyr_wrk.cmn_wrk.floor;
  if (((sis_wrk.cmn_wrk.st.mvsta & 0x61a8000) == 0) && (3 < (byte)(sis_wrk.cmn_wrk.mode - 1))) {
    SisterTracePlayer__Fv();
    if ((sis_wrk.cmn_wrk.st.mvsta & 0x2000) != 0) {
      SisterTraceMove__Fv();
      return;
    }
    SisterPushCheck__Fv();
    return;
  }
  SisterNoMove__Fv();
  return;
}

void ModeSisFind() {
  return;
}

void ModeSisBattle() {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_trace.trgt[0] = plyr_wrk.cmn_wrk.mbox.pos[0];
  sis_trace.trgt[1] = plyr_wrk.cmn_wrk.mbox.pos[1];
  sis_trace.trgt[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
  sis_trace.trgt[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
  sis_trace.trgt_floor = (int)(short)plyr_wrk.cmn_wrk.floor;
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x61a8000) != 0) {
    SisterNoMove__Fv();
    return;
  }
  SisterTracePlayer__Fv();
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x2000) != 0) {
    SisterTraceMove__Fv();
    return;
  }
  SisterPushCheck__Fv();
  return;
}

void ModeSisTalk() {
  return;
}

void ModeSisSearch() {
	static int cnt = 0;
	float dist;
	
  float fVar1;
  
  fVar1 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_trace.trgt[0] = plyr_wrk.cmn_wrk.mbox.pos[0];
  sis_trace.trgt[1] = plyr_wrk.cmn_wrk.mbox.pos[1];
  sis_trace.trgt[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
  sis_trace.trgt[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
  sis_trace.trgt_floor = (int)(short)plyr_wrk.cmn_wrk.floor;
  if ((fVar1 < DAT_003ee8f0) && (cnt_1069 = cnt_1069 + 1, 0x1e < cnt_1069)) {
    SetSearchMode__Fv();
    cnt_1069 = 0;
  }
  return;
}

int DistHitCheck(float *v1, float *v2, float dist) {
  int iVar1;
  float fVar2;
  
  fVar2 = GetDistV__FPCfT0(v1,v2);
  iVar1 = 1;
  if ((dist <= fVar2) || (DAT_003ee8f4 <= ABS(v1[1] - v2[1]))) {
    iVar1 = 0;
  }
  return iVar1;
}

void SetSisterHeight() {
	float tv[4];
	int w_area_no;
	
  int iVar1;
  float tv [4];
  
  iVar1 = MhCtlGetRoomNo__FiPf((int)(short)sis_wrk.cmn_wrk.floor,sis_wrk.cmn_wrk.mbox.pos);
  if (-1 < iVar1) {
    sis_wrk.cmn_wrk.pr_info.area_no = (uchar)iVar1;
  }
  MhCtlGetMapHeight__FPfT0ii(tv,sis_wrk.cmn_wrk.mbox.pos,(uint)sis_wrk.cmn_wrk.pr_info.area_no,1);
  sis_wrk.cmn_wrk.mbox.pos[1] = tv[1];
  return;
}

void CalcSisDist() {
	int i;
	int n;
	SIS_TRACE *stp;
	
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  sis_trace.dist = 0.0;
  if (((sis_wrk.cmn_wrk.st.mvsta & 0x2000) == 0) && (sis_trace.view_hit == '\0')) {
    sis_trace.dist = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,sis_trace.trgt);
    iVar3 = sis_trace.top;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.top,0x40);
    iVar2 = sis_trace.now;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.now,0x40);
    fVar4 = GetDistV__FPCfT0(sis_trace.vwpos + iVar3 * 4 + 0x14,sis_trace.vwpos + iVar2 * 4 + 0x14);
    pfVar1 = sis_trace.l.field0_0x0.m_aData + sis_trace.top;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(sis_trace.top,0x40);
    *pfVar1 = fVar4;
  }
  else {
                    /* end of inlined section */
    iVar3 = 0;
    if (0 < sis_trace.num + -1) {
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        iVar2 = sis_trace.top - iVar3;
        iVar3 = iVar3 + 1;
        if (iVar2 < 0) {
          iVar2 = iVar2 + 0x40;
        }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar2,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        sis_trace.dist = sis_trace.dist + sis_trace.l.field0_0x0.m_aData[iVar2];
                    /* end of inlined section */
                    /* end of inlined section */
      } while (iVar3 < sis_trace.num + -1);
    }
  }
  return;
}

void SetSisterStatus() {
	MOVE_BOX *plm;
	MOVE_BOX *ssm;
	SIS_TRACE *stp;
	STATUS_DAT *std;
	float dist;
	float psrot;
	float vw[4];
	static u_int turn_chk_time = 0;
	
  bool bVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float psrot;
  float vw [4];
  
  fVar6 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
  if (sis_wrk.cmn_wrk.st.hp == 0) {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xfffffffff9656000 | 0x4000000;
    return;
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x2000000) == 0) {
    if (((sis_wrk.cmn_wrk.st.mvsta & 0x1a0000) != 0) && ((sis_wrk.cmn_wrk.st.mvsta & 0x100000) != 0)
       ) {
      if ((sis_wrk.se_cower_cnt == 0) &&
         (sis_wrk.cower_tm = sis_wrk.cower_tm + 1, 0x59 < (ushort)sis_wrk.cower_tm)) {
        sis_wrk.se_cower_cnt = 1;
        ReqSisBankPlay__FiiiiP11_SND_3D_SET(0x15,1,1,0,&sis_wrk.s3d);
        printf(s_MIO__003f4430);
      }
      if (fVar6 < DAT_003ee8f8) {
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x2000000;
      }
    }
  }
  else if ((sis_wrk.cmn_wrk.st.sta & 0x6000) != 0) {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xfffffffff9e57ff0;
    SetSearchMode__Fv();
  }
  if ((((((sis_wrk.cmn_wrk.st.sta & 0x20) != 0) && (sis_wrk.cmn_wrk.near_ene_dist < DAT_003ee8fc))
       && (sis_wrk.btl_recv_tm == 0)) &&
      ((3 < (byte)(sis_wrk.cmn_wrk.mode - 1) && (sis_wrk.cmn_wrk.st.invisible_timer == 0)))) &&
     (sis_algo.amode != '\x02')) {
    ReqSisAlgo__FUc('\0');
    sis_algo.amode = '\x02';
  }
  if (((sis_wrk.cmn_wrk.st.mvsta & 0x61a8000) != 0) || ((byte)(sis_wrk.cmn_wrk.mode - 1) < 4))
  goto LAB_0025d974;
  if (((sis_wrk.cmn_wrk.st.mvsta & 0x100000) == 0) && (0x3f < sis_trace.num)) {
    sis_wrk.cower_tm = 0;
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fe000 | 0x100000;
    sis_wrk.se_cower_cnt = 0;
    SetSisterAnime__FUcUc('\0','\n');
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x4000) != 0) {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7f8000;
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x1000) != 0) {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fe000;
    goto LAB_0025d974;
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 0xf00) != 0) goto LAB_0025d974;
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x800000) != 0) {
    iVar3 = SetSisTurn__Fv();
    if (iVar3 != 0) {
      if (sis_trace.wsdist <= sis_trace.dist) {
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fffff | 0x2001;
      }
      else {
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fc000;
      }
      turn_chk_time_1082 = 0;
    }
    goto LAB_0025d974;
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x400000) != 0) {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xfffffffff9a57fff;
    goto LAB_0025d974;
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x200000) != 0) {
    if ((sis_wrk.cmn_wrk.st.sta & 0x4000) != 0) {
      sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta & 0xffffffffffffbfff;
      sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffffdfffff;
                    /* inlined from ../../graphics/effect/effect.h */
      iVar3 = rand();
      if (0.0 <= ((float)iVar3 / DAT_003ee900) * 100.0) {
        printf("fukki!!\n");
        if ((ushort)sis_wrk.run_tm < 10) {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 2;
        }
        else {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 8;
        }
      }
      else {
                    /* end of inlined section */
        printf("korobi!!\n");
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x400000;
      }
    }
    goto LAB_0025d974;
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 8) != 0) {
    if ((2000.0 < sis_wrk.pl_dist) && (sis_wrk.se_matte == '\0')) {
                    /* inlined from ../../graphics/effect/effect.h */
      iVar3 = rand();
      if (((float)iVar3 / DAT_003ee904) * 100.0 < 10.0) {
                    /* end of inlined section */
        ReqSisBankPlay__FiiiiP11_SND_3D_SET(9,1,1,0,&sis_wrk.s3d);
      }
      sis_wrk.se_matte = sis_wrk.se_matte + '\x01';
    }
    if (sis_trace.rsdist <= sis_trace.dist) {
                    /* inlined from ../../graphics/effect/effect.h */
      if (((sis_wrk.cmn_wrk.st.sta & 0x4000) != 0) &&
         (iVar3 = rand(), ((float)iVar3 / DAT_003ee908) * 100.0 <= 0.0)) {
                    /* end of inlined section */
        sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta & 0xffffffffffffbfff;
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xfffffffffffffff7 | 0x200000;
        printf("tumaduki!!\n");
      }
    }
    else {
      sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 1;
    }
    goto LAB_0025d974;
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x30) == 0) {
    if ((sis_wrk.cmn_wrk.st.mvsta & 0xc0) == 0) {
      if ((sis_wrk.cmn_wrk.st.mvsta & 2) != 0) {
        if ((2000.0 < sis_wrk.pl_dist) && (sis_wrk.se_matte == '\0')) {
                    /* inlined from ../../graphics/effect/effect.h */
          iVar3 = rand();
          if (((float)iVar3 / DAT_003ee90c) * 100.0 < 10.0) {
                    /* end of inlined section */
            ReqSisBankPlay__FiiiiP11_SND_3D_SET(9,1,1,0,&sis_wrk.s3d);
          }
          sis_wrk.se_matte = sis_wrk.se_matte + '\x01';
        }
        if ((sis_wrk.cmn_wrk.st.sta & 0x4000) == 0) goto LAB_0025d974;
        sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta & 0xffffffffffffbfff;
        if ((sis_trace.redist <= sis_trace.dist) || (sis_wrk.run_tm < 0)) {
          uVar5 = 8;
          if (9 < (ushort)sis_wrk.run_tm) {
            uVar4 = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fe000;
            goto LAB_0025d604;
          }
                    /* inlined from ../../graphics/effect/effect.h */
          iVar3 = rand();
          if (((float)iVar3 / DAT_003ee910) * 100.0 < 0.0) {
                    /* end of inlined section */
            sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fe000 | 0x200000;
            printf("tumaduki!!\n");
          }
        }
        else {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fe000 | 1;
        }
        goto LAB_0025d7f0;
      }
      if ((sis_wrk.cmn_wrk.st.mvsta & 1) == 0) {
        if ((sis_wrk.cmn_wrk.st.mvsta & 0x801fff) == 0) {
          if ((sis_wrk.cmn_wrk.st.mvsta & 0x10000) == 0) {
            GetTrgtRot__FPCfT0Pfi(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos,vw,2);
            psrot = vw[1] - sis_wrk.cmn_wrk.mbox.rot[1];
            RotLimitChk__FPf(&psrot);
            if (DAT_003ee914 < ABS(psrot)) {
              turn_chk_time_1082 = turn_chk_time_1082 + 1;
            }
            if (turn_chk_time_1082 < 0x5b) {
              sVar2 = sis_wrk.stop_tm + 1;
              bVar1 = 0x1c1 < (ushort)sis_wrk.stop_tm;
              sis_wrk.stop_tm = sVar2;
              if (bVar1) {
                sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x10000;
              }
            }
            else {
              sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x800000;
            }
          }
          if ((sis_trace.wsdist <= fVar6) &&
             (sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x2001,
             sis_trace.view_hit == '\0')) {
            InitSisterTracePos__Fv();
          }
        }
        else {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fe000;
        }
        goto LAB_0025d974;
      }
      if ((sis_wrk.cmn_wrk.st.sta & 0x4000) == 0) goto LAB_0025d974;
      if ((sis_trace.rsdist <= sis_trace.dist) && (-1 < sis_wrk.walk_tm)) {
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fe000 | 2;
      }
    }
    else {
      if ((sis_wrk.cmn_wrk.st.sta & 0x4000) == 0) goto LAB_0025d974;
      if ((sis_trace.rsdist <= sis_trace.dist) && (-1 < sis_wrk.walk_tm)) {
        if ((sis_wrk.cmn_wrk.st.mvsta & 0x40) != 0) {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x10;
        }
        if ((sis_wrk.cmn_wrk.st.mvsta & 0x80) != 0) {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x20;
        }
      }
    }
    sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta & 0xffffffffffffbfff;
    sis_wrk.walk_tm = sis_wrk.walk_tm + 1;
  }
  else {
    if ((sis_wrk.cmn_wrk.st.sta & 0x4000) == 0) goto LAB_0025d974;
    sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta & 0xffffffffffffbfff;
    if ((sis_trace.dist < sis_trace.rsdist) && (-1 < sis_wrk.run_tm)) {
      if ((sis_wrk.cmn_wrk.st.mvsta & 0x10) != 0) {
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x40;
      }
      uVar4 = 0x80;
      uVar5 = sis_wrk.cmn_wrk.st.mvsta;
      if ((sis_wrk.cmn_wrk.st.mvsta & 0x20) != 0) {
LAB_0025d604:
        sis_wrk.cmn_wrk.st.mvsta = uVar5 | uVar4;
      }
    }
LAB_0025d7f0:
    sis_wrk.run_tm = sis_wrk.run_tm + 1;
  }
LAB_0025d974:
  if (((sis_wrk.cmn_wrk.st.mvsta & 0x801fff) != 0) ||
     (sis_wrk.se_matte = '\0', sis_algo.amode == '\x02')) {
    turn_chk_time_1082 = 0;
    if ((sis_wrk.cmn_wrk.st.mvsta & 0x10000) != 0) {
      SetSisterAnime__FUcUc('\0','\x14');
    }
    ClearSisWait__Fv();
  }
  if ((((uint)sis_wrk.cmn_wrk.st.mvsta ^ 1) & 1) != 0) {
    sis_wrk.walk_tm = 0;
  }
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x200002) == 0) {
    sis_wrk.run_tm = 0;
  }
  return;
}

void ClearSisWait() {
  sis_wrk.stop_tm = 0;
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x10000) != 0) {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xfffffffffffeffff;
  }
  return;
}

int SisterHitCheck(float *v1, int floor1, float *v2, int floor2) {
	int ret;
	
  int iVar1;
  uint uVar2;
  
  iVar1 = MapHitLineCheck__FPfiT0if(v1,floor1,v2,floor2,150.0);
  uVar2 = (uint)(iVar1 != 0);
  if (((uVar2 == 0) && (iVar1 = PlyrOutsideCheck__Fv(), iVar1 == 0)) &&
     (iVar1 = MhCtlHitLineCheck__FPfT0i(v1,v2,(uint)sis_wrk.cmn_wrk.pr_info.area_no), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

void SisterTracePlayer() {
	int n;
	float dist;
	MOVE_BOX *plm;
	MOVE_BOX *ssm;
	SIS_TRACE *stp;
	float vws[4];
	float vwp[4];
	
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uchar *puVar6;
  float *pfVar7;
  float fVar8;
  float vws [4];
  float vwp [4];
  
  fVar8 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
  _SetVector__FPfffff(vws,sis_wrk.cmn_wrk.mbox.pos[0],sis_wrk.cmn_wrk.headpos[1],
                      sis_wrk.cmn_wrk.mbox.pos[2],sis_wrk.cmn_wrk.mbox.pos[3]);
  _SetVector__FPfffff(vwp,plyr_wrk.cmn_wrk.mbox.pos[0],plyr_wrk.cmn_wrk.headpos[1],
                      plyr_wrk.cmn_wrk.mbox.pos[2],plyr_wrk.cmn_wrk.mbox.pos[3]);
  iVar3 = SisterHitCheck__FPfiT0i
                    (vws,(int)(short)sis_wrk.cmn_wrk.floor,vwp,(int)(short)plyr_wrk.cmn_wrk.floor);
  sis_trace.view_hit = iVar3 != 0;
  if (9 < sis_trace.cnt) {
    iVar4 = CompVector__FPfT0(plyr_wrk.cmn_wrk.mbox.bpos,plyr_wrk.cmn_wrk.mbox.pos);
    iVar3 = sis_trace.top;
    if ((iVar4 == 0) && (sis_trace.view_hit == '\0')) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      sis_trace.top = 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      sis_trace.num = 2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      sis_trace.now = 0;
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(1,0x40);
      iVar3 = sis_trace.now;
      sis_trace.p.field0_0x0.m_aData[1][0] = plyr_wrk.cmn_wrk.mbox.pos[0];
      sis_trace.p.field0_0x0.m_aData[1][1] = plyr_wrk.cmn_wrk.mbox.pos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      sis_trace.p.field0_0x0.m_aData[1][2] = plyr_wrk.cmn_wrk.mbox.pos[2];
      sis_trace.p.field0_0x0.m_aData[1][3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.now,0x40);
      fVar2 = sis_wrk.cmn_wrk.mbox.pos[3];
      fVar1 = sis_wrk.cmn_wrk.mbox.pos[2];
      fVar8 = sis_wrk.cmn_wrk.mbox.pos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      sis_trace.vwpos[iVar3 * 4 + 0x14] = sis_wrk.cmn_wrk.mbox.pos[0];
      sis_trace.vwpos[iVar3 * 4 + 0x15] = fVar8;
      sis_trace.vwpos[iVar3 * 4 + 0x16] = fVar1;
      sis_trace.vwpos[iVar3 * 4 + 0x17] = fVar2;
      puVar6 = sis_trace.fl.field0_0x0.m_aData + sis_trace.top;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUc_UiUi_PX01(sis_trace.top,0x40);
      *puVar6 = '\0';
      iVar3 = sis_trace.top;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.top,0x40);
      iVar4 = sis_trace.now;
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.now,0x40);
      fVar8 = GetDistV__FPCfT0(sis_trace.vwpos + iVar3 * 4 + 0x14,sis_trace.vwpos + iVar4 * 4 + 0x14
                              );
      iVar3 = sis_trace.top;
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(sis_trace.top,0x40);
      iVar4 = sis_trace.top;
      sis_trace.l.field0_0x0.m_aData[iVar3] = fVar8;
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar4,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      sis_trace.dist = sis_trace.l.field0_0x0.m_aData[iVar4];
                    /* end of inlined section */
      sis_trace.cnt = 0;
                    /* end of inlined section */
    }
    else {
      if (sis_trace.cnt < 10) {
        sis_trace.cnt = sis_trace.cnt + 1;
        return;
      }
      if ((fVar8 <= sis_trace.wsdist) && (sis_trace.view_hit == '\0')) {
        sis_trace.cnt = sis_trace.cnt + 1;
        return;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.top,0x40);
      fVar8 = GetDistV__FPCfT0(sis_trace.vwpos + iVar3 * 4 + 0x14,plyr_wrk.cmn_wrk.mbox.pos);
      iVar3 = sis_trace.top;
      if (100.0 < fVar8) {
                    /* end of inlined section */
        if ((sis_wrk.cmn_wrk.st.mvsta & 0x61a8000) == 0) {
          iVar5 = sis_trace.top + 1;
          iVar4 = iVar5;
          if (iVar5 < 0) {
            iVar4 = sis_trace.top + 0x40;
          }
          sis_trace.top = iVar5 + (iVar4 >> 6) * -0x40;
          if (sis_trace.num < 0x40) {
            sis_trace.num = sis_trace.num + 1;
          }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          iVar4 = sis_trace.top * 0x10;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.top,0x40);
          fVar2 = plyr_wrk.cmn_wrk.mbox.pos[3];
          fVar1 = plyr_wrk.cmn_wrk.mbox.pos[2];
          fVar8 = plyr_wrk.cmn_wrk.mbox.pos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          *(float *)((int)&sis_trace + iVar4 + 0x80) = plyr_wrk.cmn_wrk.mbox.pos[0];
          *(float *)((int)&sis_trace + iVar4 + 0x84) = fVar8;
          *(float *)((int)&sis_trace + iVar4 + 0x88) = fVar1;
          *(float *)((int)&sis_trace + iVar4 + 0x8c) = fVar2;
          puVar6 = sis_trace.fl.field0_0x0.m_aData + sis_trace.top;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZUc_UiUi_PX01(sis_trace.top,0x40);
          *puVar6 = '\0';
          iVar4 = sis_trace.top;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.top,0x40);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar3,0x40);
          fVar8 = GetDistV__FPCfT0(sis_trace.vwpos + iVar4 * 4 + 0x14,
                                   sis_trace.vwpos + iVar3 * 4 + 0x14);
          pfVar7 = sis_trace.l.field0_0x0.m_aData + sis_trace.top;
          _fixed_array_verifyrange__H1Zf_UiUi_PX01(sis_trace.top,0x40);
                    /* end of inlined section */
          *pfVar7 = fVar8;
          CalcSisDist__Fv();
        }
        sis_trace.cnt = 0;
      }
    }
  }
  sis_trace.cnt = sis_trace.cnt + 1;
  return;
}

void SisterTraceMove() {
	int n1;
	int n2;
	int n3;
	int n4;
	float f;
	float dist;
	float spd;
	float pdist;
	float rdist;
	SIS_TRACE *stp;
	int i;
	int n;
	LINE_T l1;
	LINE_T l2;
	float vr[4];
	float rt;
	
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  double arg_a;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float f;
  LINE_T l1;
  LINE_T l2;
  float vr [4];
  int i;
  int n;
  
  fVar11 = GetDistV2__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,sis_trace.trgt);
  iVar2 = DistHitCheck__FPfT0f(sis_wrk.cmn_wrk.mbox.pos,sis_trace.trgt,140.0);
  if ((iVar2 != 0) && ((long)(short)sis_wrk.cmn_wrk.floor == (long)sis_trace.trgt_floor)) {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7fc000;
    return;
  }
  if ((sis_trace.push != 0) || ((fVar11 <= sis_trace.wedist && (-1 < sis_wrk.walk_tm)))) {
    uVar4 = 0x4000;
  }
  else {
    fVar11 = sis_wrk.spd[2];
    if (debug_var.hi_spd != 0) {
      fVar11 = sis_wrk.spd[2] * 5.0;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = sis_trace.now + 1;
    iVar9 = iVar2;
    if (iVar2 < 0) {
      iVar9 = sis_trace.now + 0x40;
    }
    iVar10 = sis_trace.now;
    if (sis_trace.now < 0) {
      iVar10 = sis_trace.now + 0x3f;
    }
    iVar2 = iVar2 + (iVar9 >> 6) * -0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar9 = sis_trace.now + (iVar10 >> 6) * -0x40;
    _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar2,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    fVar12 = *(float *)((int)&sis_trace + iVar2 * 4 + 0x480);
                    /* end of inlined section */
    while (fVar11 != 0.0) {
      if (fVar11 < fVar12) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
        pfVar7 = sis_trace.vwpos + iVar9 * 4 + 0x14;
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar2,0x40);
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
        fVar5 = *pfVar7;
        fVar6 = sis_trace.vwpos[iVar2 * 4 + 0x14];
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
        *pfVar7 = (fVar11 * (fVar6 - fVar5)) / fVar12 + *pfVar7;
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar2,0x40);
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
        fVar6 = sis_trace.vwpos[iVar2 * 4 + 0x16];
        fVar5 = sis_trace.vwpos[iVar9 * 4 + 0x16];
        _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
        fVar5 = fVar11 * (fVar6 - fVar5);
                    /* end of inlined section */
        fVar11 = 0.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        sis_trace.vwpos[iVar9 * 4 + 0x16] = fVar5 / fVar12 + sis_trace.vwpos[iVar9 * 4 + 0x16];
      }
      else {
        iVar10 = sis_trace.now + 1;
        if (sis_trace.top == sis_trace.now) {
          fVar11 = 0.0;
        }
        else {
          iVar2 = iVar10;
          if (iVar10 < 0) {
            iVar2 = sis_trace.now + 0x40;
          }
          sis_trace.now = iVar10 + (iVar2 >> 6) * -0x40;
          if (1 < sis_trace.num) {
            sis_trace.num = sis_trace.num + -1;
          }
          if (3 < sis_trace.num) {
            n = -1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
            iVar9 = sis_trace.now + 1;
            iVar2 = sis_trace.now;
            if (sis_trace.now < 0) {
              iVar2 = sis_trace.now + 0x3f;
            }
            iVar10 = sis_trace.now + (iVar2 >> 6) * -0x40;
            iVar2 = iVar9;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
            if (iVar9 < 0) {
              iVar2 = sis_trace.now + 0x40;
            }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            iVar8 = iVar10 * 0x10;
                    /* end of inlined section */
            iVar9 = iVar9 + (iVar2 >> 6) * -0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            i = 0;
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar10,0x40);
            l1.a.x = *(float *)((int)&sis_trace + iVar8 + 0x80);
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar10,0x40);
            l1.a.y = *(float *)((int)&sis_trace + iVar8 + 0x88);
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
            l1.b.x = *(float *)((int)&sis_trace + iVar9 * 0x10 + 0x80);
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            l1.b.y = *(float *)((int)&sis_trace + iVar9 * 0x10 + 0x88);
                    /* end of inlined section */
                    /* end of inlined section */
            if (0 < sis_trace.num + -3) {
              do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                iVar2 = sis_trace.top - i;
                iVar9 = iVar2 + -1;
                if (iVar2 + -1 < 0) {
                  iVar9 = iVar2 + 0x3f;
                }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                if (iVar2 < 0) {
                  iVar2 = iVar2 + 0x40;
                }
                _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
                pfVar7 = sis_trace.vwpos + iVar9 * 4 + 0x14;
                l2.a.x = *pfVar7;
                _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
                l2.a.y = sis_trace.vwpos[iVar9 * 4 + 0x16];
                _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar2,0x40);
                l2.b.x = sis_trace.vwpos[iVar2 * 4 + 0x14];
                _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar2,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                l2.b.y = sis_trace.vwpos[iVar2 * 4 + 0x16];
                    /* end of inlined section */
                    /* end of inlined section */
                iVar3 = LineIntersect__FP6LINE_TT0(&l1,&l2);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                if (iVar3 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar10,0x40);
                  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
                  arg_a = (double)(*(float *)((int)&sis_trace + iVar8 + 0x84) -
                                  sis_trace.vwpos[iVar9 * 4 + 0x15]);
                  iVar3 = dpcmp((long)arg_a,0);
                  if (iVar3 < 0) {
                    arg_a = 0.0 - arg_a;
                  }
                  iVar3 = dpcmp((long)arg_a,DAT_003c7570);
                  if (iVar3 < 0) {
                    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
                    iVar3 = sis_trace.now;
                    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.now,0x40);
                    uVar1 = *(undefined8 *)(sis_trace.vwpos + iVar3 * 4 + 0x14);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    fVar5 = sis_trace.vwpos[iVar3 * 4 + 0x16];
                    fVar6 = sis_trace.vwpos[iVar3 * 4 + 0x17];
                    *pfVar7 = (float)uVar1;
                    sis_trace.vwpos[iVar9 * 4 + 0x15] = (float)((ulong)uVar1 >> 0x20);
                    sis_trace.vwpos[iVar9 * 4 + 0x16] = fVar5;
                    sis_trace.vwpos[iVar9 * 4 + 0x17] = fVar6;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    n = 0;
                    sis_trace.num = i + 2;
                    sis_trace.now = iVar9;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
                    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar2,0x40);
                    fVar5 = GetDistV__FPCfT0(pfVar7,sis_trace.vwpos + iVar2 * 4 + 0x14);
                    _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar2,0x40);
                    /* end of inlined section */
                    sis_trace.l.field0_0x0.m_aData[iVar2] = fVar5;
                    CalcSisDist__Fv();
                  }
                }
                i = i + 1;
              } while ((i < sis_trace.num + -3) && (n == -1));
            }
          }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          fVar11 = fVar11 - fVar12;
          iVar2 = sis_trace.now + 1;
          iVar9 = sis_trace.now;
          if (sis_trace.now < 0) {
            iVar9 = sis_trace.now + 0x3f;
          }
          iVar10 = iVar2;
          if (iVar2 < 0) {
            iVar10 = sis_trace.now + 0x40;
          }
          iVar9 = sis_trace.now + (iVar9 >> 6) * -0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          iVar2 = iVar2 + (iVar10 >> 6) * -0x40;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar2,0x40);
          fVar12 = GetDistV__FPCfT0((float *)((int)&sis_trace + iVar9 * 0x10 + 0x80),
                                    (float *)((int)&sis_trace + iVar2 * 0x10 + 0x80));
        }
      }
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = sis_trace.now;
    if (sis_trace.now < 0) {
      iVar2 = sis_trace.now + 0x3f;
    }
    iVar9 = sis_trace.now + 1;
    iVar10 = sis_trace.now + (iVar2 >> 6) * -0x40;
    iVar2 = iVar9;
    if (iVar9 < 0) {
      iVar2 = sis_trace.now + 0x40;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar9 = iVar9 + (iVar2 >> 6) * -0x40;
    sis_wrk.cmn_wrk.mbox.brot[1] = sis_wrk.cmn_wrk.mbox.rot[1];
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar10,0x40);
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
    GetTrgtRot__FPCfT0Pfi
              ((float *)((int)&sis_trace + iVar10 * 0x10 + 0x80),
               (float *)((int)&sis_trace + iVar9 * 0x10 + 0x80),vr,2);
                    /* end of inlined section */
    f = vr[1] - sis_wrk.cmn_wrk.mbox.brot[1];
    RotLimitChk__FPf(&f);
    if (ABS(f) <= DAT_003ee918) {
      return;
    }
    if (ABS(f) <= DAT_003ee91c) {
      iVar2 = GetPALMode__Fv();
      fVar11 = DAT_003ee920;
      if (iVar2 == 0) {
        fVar11 = 8.0;
      }
      sis_wrk.cmn_wrk.mbox.rot[1] = vr[1];
      if (DAT_003ee924 < ABS(f)) {
        sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.brot[1] + f / fVar11;
      }
      RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
      return;
    }
    uVar4 = 0x800000;
  }
  sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | uVar4;
  return;
}

void SetNowTracePos() {
	int n1;
	int n2;
	SIS_TRACE *stp;
	
  undefined8 uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *p0;
  int iVar6;
  float fVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar4 = sis_trace.now + 1;
  iVar5 = sis_trace.now;
  if (sis_trace.now < 0) {
    iVar5 = sis_trace.now + 0x3f;
  }
  iVar3 = iVar4;
  if (iVar4 < 0) {
    iVar3 = sis_trace.now + 0x40;
  }
  iVar6 = sis_trace.now + (iVar5 >> 6) * -0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar5 = iVar6 * 0x10;
  iVar4 = iVar4 + (iVar3 >> 6) * -0x40;
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar6,0x40);
  fVar2 = sis_wrk.cmn_wrk.mbox.pos[3];
  fVar7 = sis_wrk.cmn_wrk.mbox.pos[2];
  uVar1 = sis_wrk.cmn_wrk.mbox.pos._0_8_;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  p0 = (float *)((int)&sis_trace + iVar5 + 0x80);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  *p0 = (float)sis_wrk.cmn_wrk.mbox.pos._0_8_;
  *(float *)((int)&sis_trace + iVar5 + 0x84) = SUB84(uVar1,4);
  *(float *)((int)&sis_trace + iVar5 + 0x88) = fVar7;
  *(float *)((int)&sis_trace + iVar5 + 0x8c) = fVar2;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar6,0x40);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar4,0x40);
  fVar7 = GetDistV__FPCfT0(p0,(float *)((int)&sis_trace + iVar4 * 0x10 + 0x80));
  _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar4,0x40);
                    /* end of inlined section */
  *(float *)((int)&sis_trace + iVar4 * 4 + 0x480) = fVar7;
  CalcSisDist__Fv();
  return;
}

void DrawHitLCircle(float *mpos, u_char r, u_char g, u_char b, float rd) {
	int i;
	int n;
	int np;
	float f;
	float add;
	float ncf[38][4];
	sceVu0IVECTOR nci[38];
	float wpos[4];
	float slm1[4][4];
	float wlm[4][4];
	u_int clpx2;
	u_int clpy2;
	u_int clpz2;
	Q_WORDDATA *pbuf;
	
  int *piVar1;
  float fVar2;
  GRA3DCAMERA *pGVar3;
  Q_WORDDATA *pQVar4;
  uint uVar5;
  Q_WORDDATA *pQVar6;
  int (*paiVar7) [4];
  bool bVar8;
  float (*pafVar9) [4];
  long lVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float ncf [38] [4];
  int nci [38] [4];
  float wpos [4];
  float slm1 [4] [4];
  float wlm [4] [4];
  _DRAW_ENV_NOTEX local_b0;
  
  fVar2 = DAT_003ee928;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  fVar19 = 10.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  wpos[2] = mpos[2];
  wpos[3] = mpos[3];
  wpos[0] = (float)*(undefined8 *)mpos;
  wpos[1] = (float)((ulong)*(undefined8 *)mpos >> 0x20);
                    /* end of inlined section */
  fVar15 = 0.0;
  sceVu0UnitMatrix(wlm);
  fVar18 = 180.0;
  sceVu0RotMatrixX(DAT_003ee92c,wlm,wlm);
  sceVu0TransMatrix(wlm,wlm,wpos);
  pGVar3 = gra3dGetCamera__Fv();
  sceVu0MulMatrix(slm1,pGVar3->matWorldScreen,wlm);
  fVar17 = 1.0;
  pafVar9 = ncf;
  ncf[0][3] = 1.0;
  iVar12 = 1;
  ncf[0][0] = fVar15;
  ncf[0][1] = fVar15;
  ncf[0][2] = fVar15;
  do {
    iVar11 = iVar12;
    pafVar9 = pafVar9[1];
    fVar16 = fVar15 * fVar2;
    iVar12 = iVar11 + 1;
    fVar15 = fVar15 + fVar19;
    fVar16 = fVar16 / fVar18;
    fVar14 = cosf(fVar16);
    (*pafVar9)[0] = rd * fVar14;
    fVar14 = sinf(fVar16);
    (*pafVar9)[2] = 0.0;
    (*pafVar9)[3] = fVar17;
    (*pafVar9)[1] = rd * fVar14;
  } while (fVar15 < 360.0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  ncf[iVar12][0] = (float)ncf[1]._0_8_;
  ncf[iVar12][1] = SUB84(ncf[1]._0_8_,4);
  ncf[iVar12][2] = ncf[1][2];
  ncf[iVar12][3] = ncf[1][3];
                    /* end of inlined section */
  paiVar7 = nci;
  uVar13 = (ulong)(iVar11 + 2);
  bVar8 = false;
  sceVu0RotTransPersN(paiVar7,slm1,ncf,uVar13,0);
  if (((uint)nci[0][0] < 0x5a80) || (0xa580 < (uint)nci[0][0])) {
    bVar8 = true;
  }
  if (((uint)nci[0][1] < 0x6700) || (0x9900 < (uint)nci[0][1])) {
    bVar8 = true;
  }
  if (nci[0][2] == 0) {
    bVar8 = true;
  }
  else if (0xfffff < (uint)nci[0][2]) {
    bVar8 = true;
  }
  if (!bVar8) {
    local_b0.alpha = DAT_003c7578;
    local_b0.test = DAT_003c7580;
    local_b0.zbuf = DAT_003c7588;
    SetDrawEnvNoTex__FiPC15_DRAW_ENV_NOTEX(0,&local_b0);
    pQVar4 = GetPK2Dbuf__Fv();
    pQVar4->ul64[0] = 0x1022c00000008001;
    iVar12 = 3;
    pQVar4->ul64[1] = 1;
    *(undefined4 *)((int)pQVar4 + 0x1c) = 0x80;
    *(uint *)(pQVar4 + 1) = (uint)r;
    *(uint *)((int)pQVar4 + 0x14) = (uint)g;
    *(uint *)((int)pQVar4 + 0x18) = (uint)b;
    *(undefined8 *)((int)pQVar4 + 0x28) = 4;
    pQVar4[2].ul64[0] = uVar13 | 0x1021400000008000;
    if (0 < (long)uVar13) {
      lVar10 = 0;
      pQVar6 = pQVar4 + 3;
      do {
        bVar8 = 1 < lVar10;
        uVar5 = 0x8000;
        lVar10 = (long)((int)lVar10 + 1);
        pQVar6->ui32[0] = (*paiVar7)[0];
        if (bVar8) {
          uVar5 = 0;
        }
        iVar12 = iVar12 + 1;
        pQVar6->ui32[1] = (*paiVar7)[1];
        piVar1 = *paiVar7;
        paiVar7 = paiVar7[1];
        pQVar6->ui32[2] = piVar1[2];
        pQVar6->ui32[3] = uVar5;
        pQVar6 = pQVar6 + 1;
      } while (lVar10 < (long)uVar13);
    }
    EndPK2Dbuf__FP10Q_WORDDATA(pQVar4 + iVar12);
  }
  return;
}

void SisterPushCheck() {
	int i;
	int j;
	MOVE_BOX *plm;
	SIS_TRACE *stp;
	float mpos[4];
	float mopos[4];
	float wlm[4][4];
	static float rrot[4] = {
		/* [0] = */ 0.f,
		/* [1] = */ 1.57079625f,
		/* [2] = */ 3.1415925f,
		/* [3] = */ -1.57079625f
	};
	float vw[4][4];
	float am;
	float bm;
	float ab_ang;
	float fw1;
	float fw2;
	float a[4];
	float b[4];
	int c[4];
	int d[4][2];
	float pai;
	float qpai;
	float rot[4];
	int flg[4];
	int m;
	int n;
	float *pv0;
	float *pv1;
	float dist;
	float rot;
	float psrot;
	
  uint uVar1;
  ulong *puVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  int (*paiVar8) [2];
  int *piVar9;
  int iVar10;
  int *piVar11;
  float (*pos2) [4];
  float fVar12;
  float fVar13;
  float fVar14;
  float mpos [4];
  float mopos [4];
  float wlm [4] [4];
  float psrot;
  float vw [4] [4];
  float rot;
  float a [4];
  float b [4];
  int c [4];
  int d [4] [2];
  float fStack_a0;
  float local_9c [3];
  int flg [4];
  int n;
  
  mpos._0_8_ = DAT_003c7590;
  mpos._8_8_ = DAT_003c7598;
  mopos._0_8_ = DAT_003c75a0;
  mopos._8_8_ = DAT_003c75a8;
  if (0 < sis_trace.push_tm) {
    sis_trace.push_tm = sis_trace.push_tm + -1;
  }
                    /* end of inlined section */
  if ((DAT_003ee930 <= ABS(plyr_wrk.cmn_wrk.mbox.pos[1] - sis_wrk.cmn_wrk.mbox.pos[1])) ||
     (iVar6 = DistHitCheck__FPfT0f(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos,140.0),
     iVar6 == 0)) {
LAB_0025f118:
    if (sis_trace.push == 0) goto LAB_0025f52c;
  }
  else if (sis_trace.push == 0) {
    iVar6 = MapHitLineCheck__FPfiT0if
                      (sis_wrk.cmn_wrk.mbox.pos,(int)(short)sis_wrk.cmn_wrk.floor,
                       plyr_wrk.cmn_wrk.mbox.pos,(int)(short)plyr_wrk.cmn_wrk.floor,140.0);
    fVar13 = sis_wrk.cmn_wrk.mbox.rot[1];
    if (iVar6 == 0) {
      piVar9 = c;
      uVar1 = (int)c + 7U & 7;
      puVar2 = (ulong *)(((int)c + 7U) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_003c75b0 >> (7 - uVar1) * 8;
      c[0] = (int)PTR_003c75b0;
      c[1] = _UNK_003c75b4;
      uVar1 = (int)c + 0xfU & 7;
      puVar2 = (ulong *)(((int)c + 0xfU) - uVar1);
      *puVar2 = *puVar2 & -1L << (uVar1 + 1) * 8 | _PTR_003c75b8 >> (7 - uVar1) * 8;
      c[2] = (int)PTR_003c75b8;
      c[3] = _UNK_003c75bc;
      n = 0;
      iVar10 = 0;
      fVar14 = plyr_wrk.cmn_wrk.mbox.rot[1];
      GetTrgtRot__FPCfT0Pfi(plyr_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.pos,&fStack_a0,2);
      fVar5 = local_9c[0];
      fVar4 = DAT_003ee940;
      a[3] = fVar14 + DAT_003ee934;
      b[1] = fVar13 + DAT_003ee938;
      b[3] = fVar13 + DAT_003ee93c;
      b[0] = fVar13;
      a[0] = fVar14 - DAT_003ee938;
      b[2] = fVar13 + DAT_003ee934;
      a[1] = fVar14 + DAT_003ee938;
      iVar6 = 0;
      fVar13 = DAT_003ee934;
      a[2] = fVar14;
      while( true ) {
        iVar10 = iVar10 + 1;
        RotLimitChk__FPf((float *)((int)a + iVar6));
        RotLimitChk__FPf((float *)((int)b + iVar6));
        if (3 < iVar10) break;
        iVar6 = iVar10 * 4;
      }
      iVar6 = 0;
      do {
        iVar10 = 0;
        fVar14 = a[iVar6];
        pfVar7 = b;
        do {
          if (DAT_003ee944 <= fVar14) {
            fVar12 = *pfVar7;
            if ((fVar12 <= fVar14 - fVar4) || (fVar13 < fVar12)) {
              if (DAT_003ee948 < fVar12) {
                bVar3 = fVar12 <= (fVar14 - DAT_003ee94c) + fVar4;
LAB_0025ecf4:
                if (bVar3) {
                  *piVar9 = iVar10;
                }
              }
            }
            else {
              *piVar9 = iVar10;
            }
          }
          else if (fVar14 < DAT_003ee950 * 3.0) {
            fVar12 = *pfVar7;
            if ((fVar12 <= DAT_003ee948) || (fVar14 + fVar4 < fVar12)) {
              if ((fVar14 + DAT_003ee94c) - fVar4 < fVar12) {
                bVar3 = fVar12 <= fVar13;
                goto LAB_0025ecf4;
              }
            }
            else {
              *piVar9 = iVar10;
            }
          }
          else if ((fVar14 - fVar4 < *pfVar7) && (*pfVar7 <= fVar14 + fVar4)) {
            *piVar9 = iVar10;
          }
          iVar10 = iVar10 + 1;
          pfVar7 = pfVar7 + 1;
        } while (iVar10 < 4);
        iVar6 = iVar6 + 1;
        piVar9 = piVar9 + 1;
      } while (iVar6 < 4);
      psrot = b[c[0]] - fVar5;
      rot = b[c[1]] - fVar5;
      RotLimitChk__FPf(&psrot);
      RotLimitChk__FPf(&rot);
      psrot = ABS(psrot);
      rot = ABS(rot);
      if (rot < psrot) {
        d[0][0] = c[1];
        n = 1;
        d[1][0] = c[2];
        d[2][0] = -1;
        d[1][1] = 2;
        d[0][1] = 0;
      }
      else if (psrot < rot) {
        d[0][0] = c[0];
        d[1][0] = c[2];
        n = 1;
        d[2][0] = -1;
        d[0][1] = 1;
        d[1][1] = 2;
      }
      else if (psrot == rot) {
        d[0][0] = c[0];
        n = 2;
        d[1][0] = c[1];
        d[2][0] = c[2];
        d[3][0] = -1;
        d[0][1] = 1;
        d[2][1] = 2;
        d[1][1] = 0;
      }
      if (d[0][0] != -1) {
        pos2 = vw;
        iVar6 = 0;
        do {
          piVar9 = (int *)((int)d + iVar6);
          piVar11 = (int *)((int)d[1] + iVar6);
          local_9c[0] = b[*piVar9];
          RotLimitChk__FPf(local_9c);
          sceVu0UnitMatrix(wlm);
          sceVu0RotMatrixY(local_9c[0],wlm,wlm);
          sceVu0TransMatrix(wlm,wlm,0x34fc10);
          sceVu0ApplyMatrix(pos2,wlm,mpos);
          iVar10 = MapHitLineCheck__FPfiT0if
                             (sis_wrk.cmn_wrk.mbox.pos,(int)(short)sis_wrk.cmn_wrk.floor,
                              (float *)pos2,(int)(short)sis_wrk.cmn_wrk.floor,150.0);
          flg[*piVar9] = iVar10;
          iVar10 = MapHitCheck__FPfN20fi
                             ((float *)pos2,(float *)pos2,sis_wrk.cmn_wrk.mbox.pos,150.0,
                              (int)(short)sis_wrk.cmn_wrk.floor);
          flg[*piVar9] = flg[*piVar9] + iVar10;
          pos2 = pos2[1];
          iVar6 = iVar6 + 8;
        } while (*piVar11 != -1);
      }
      bVar3 = false;
      if (d[0][0] != -1) {
        iVar6 = 0;
        paiVar8 = d;
        do {
          piVar9 = *paiVar8;
          paiVar8 = paiVar8[1];
          if (flg[*piVar9] == 0) {
            bVar3 = true;
            sis_trace.push_pldir = *(int *)((int)d + iVar6 + 4);
            sis_trace.push_rot = a[sis_trace.push_pldir];
            sis_trace.push_dir = *piVar9;
            break;
          }
          iVar6 = iVar6 + 8;
        } while ((*paiVar8)[0] != -1);
      }
      if (!bVar3) {
        sis_trace.push_pldir = d[n][1];
        sis_trace.push_dir = d[n][0];
        sis_trace.push_rot = a[sis_trace.push_pldir];
      }
      PlyrVibCtrlBig__FUcUc('Z','\a');
      if (sis_wrk.push_se_tm == 0) {
        iVar6 = GetRndSP__FUiUi(1,99);
        if (9 < iVar6) {
          iVar6 = GetRndSP__FUiUi(0,3);
          ReqSisBankPlay__FiiiiP11_SND_3D_SET(iVar6 + 0x12,1,1,0,&sis_wrk.s3d);
        }
                    /* inlined from ../../graphics/effect/effect.h */
        iVar6 = rand();
        sis_wrk.push_se_tm = (short)(int)((float)iVar6 / DAT_003ee954) * 0x96 + 0x96;
                    /* end of inlined section */
      }
      sis_wrk.cmn_wrk.st.mvsta =
           (long)(0x100 << (sis_trace.push_dir & 0x1fU)) | sis_wrk.cmn_wrk.st.mvsta;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
      sis_trace.push_dist = 200.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
      sis_trace.push = 1;
      sis_wrk.wpos[0] = sis_wrk.cmn_wrk.mbox.pos[0];
      sis_wrk.wpos[1] = sis_wrk.cmn_wrk.mbox.pos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      sis_wrk.wpos[2] = sis_wrk.cmn_wrk.mbox.pos[2];
      sis_wrk.wpos[3] = sis_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
    }
    goto LAB_0025f118;
  }
  if (sis_trace.push == 2) {
    if (14.0 < (float)sis_trace.push_cnt) {
      sis_trace.push = 10;
    }
    else {
      psrot = sis_trace.push_rot - sis_trace.push_orot;
      RotLimitChk__FPf(&psrot);
      sis_wrk.cmn_wrk.mbox.rot[1] = sis_trace.push_orot + ((float)sis_trace.push_cnt * psrot) / 14.0
      ;
      RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
      sis_trace.push_cnt = sis_trace.push_cnt + 1;
    }
    goto LAB_0025f52c;
  }
  if (sis_trace.push < 3) {
    if (sis_trace.push != 1) goto LAB_0025f52c;
    if (sis_trace.push_pldir == 2) {
      if ((sis_trace.push_dir == 1) || (sis_trace.push_dir == 3)) {
        sis_trace.push = sis_trace.push_pldir;
        sis_trace.push_dir = 0;
        SetSisterAnime__FUcUc('\n','\x04');
      }
      else {
        if ((sis_trace.push_dir != 2) || (sis_trace.push_tm == 0)) goto LAB_0025f1c4;
        sis_trace.push = 3;
        SetSisterAnime__FUcUc('\n','\x04');
      }
    }
    else {
LAB_0025f1c4:
      sis_trace.push = 10;
      if ((sis_trace.push_pldir == 2) && (sis_trace.push_dir == 0)) {
        SetSisterAnime__FUcUc('\n','\x04');
      }
      else {
        SetSisterAnime__FUcUc('\n','\x04');
        SetSisterAnime__FUcUc('\x1b','\x04');
      }
    }
    sis_trace.push_cnt = 0;
    sis_trace.push_orot = sis_wrk.cmn_wrk.mbox.rot[1];
    goto LAB_0025f52c;
  }
  if (sis_trace.push == 3) {
    sis_wrk.cmn_wrk.mbox.rot[1] =
         sis_trace.push_orot +
         ((float)sis_trace.push_cnt * (sis_trace.push_rot - sis_trace.push_orot)) / 14.0;
    RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
    sis_trace.push_cnt = sis_trace.push_cnt + 1;
    if (14.0 <= (float)sis_trace.push_cnt) {
      SetSisterAnime__FUcUc('\n','\x04');
      sis_trace.push_dir = 0;
      sis_wrk.cmn_wrk.mbox.rot[1] = sis_trace.push_rot;
      sis_trace.push = 10;
      sis_trace.push_cnt = 0;
    }
    goto LAB_0025f52c;
  }
  if (sis_trace.push != 10) goto LAB_0025f52c;
  if (sis_wrk.anime_no == '\x1b') {
    fVar13 = -sis_wrk.spd[2] * DAT_003ee958;
  }
  else {
    fVar13 = 25.0;
    if (sis_trace.push_dist <= 25.0) {
      fVar13 = sis_trace.push_dist;
    }
  }
  sis_trace.push_dist = sis_trace.push_dist - fVar13;
  mopos[2] = fVar13;
  if ((uint)sis_trace.push_pldir < 2) {
    if (((sis_trace.push_dir == 1) || (iVar6 = sis_trace.push_dir << 2, sis_trace.push_dir == 3)) &&
       (iVar6 = sis_trace.push_dir << 2, (float)sis_trace.push_cnt <= 14.0)) {
      psrot = sis_trace.push_rot - sis_trace.push_orot;
      RotLimitChk__FPf(&psrot);
      sis_wrk.cmn_wrk.mbox.rot[1] = sis_trace.push_orot + ((float)sis_trace.push_cnt * psrot) / 14.0
      ;
      RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
      sis_trace.push_cnt = sis_trace.push_cnt + 1;
      goto LAB_0025f434;
    }
  }
  else {
LAB_0025f434:
    iVar6 = sis_trace.push_dir << 2;
  }
  rot = *(float *)(rrot_1107 + iVar6) + sis_trace.push_orot;
  RotLimitChk__FPf(&rot);
  sceVu0UnitMatrix(wlm);
  sceVu0RotMatrixY(rot,wlm,wlm);
  sceVu0TransMatrix(wlm,wlm,0x34fc10);
  sceVu0ApplyMatrix(0x34fdf0,wlm,mopos);
  if (sis_wrk.anime_no == '\x1b') {
    if ((sis_wrk.cmn_wrk.st.sta & 0x2000) == 0) goto LAB_0025f52c;
  }
  else if (0.0 < sis_trace.push_dist) goto LAB_0025f52c;
  sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x1000;
  sis_trace.push_tm = 0x14;
  sis_trace.push = 0;
  if ((sis_trace.push_pldir == 2) && (sis_trace.push_dir == 0)) {
    sis_trace.push_tm = 8;
  }
LAB_0025f52c:
  if (sis_wrk.push_se_tm != 0) {
    sis_wrk.push_se_tm = sis_wrk.push_se_tm + -1;
  }
  return;
}

void ClearSisterPushMove() {
  sis_trace.push = 0;
  sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffffffe0ff;
  return;
}

float GetSisterRot() {
	int n1;
	int n2;
	float vw[4];
	
  int iVar1;
  int iVar2;
  int iVar3;
  float vw [4];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (sis_trace.num < 3) {
                    /* end of inlined section */
    GetTrgtRot__FPCfT0Pfi(sis_wrk.cmn_wrk.mbox.pos,sis_trace.trgt,vw,2);
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = sis_trace.now + 1;
    iVar2 = iVar3;
    if (iVar3 < 0) {
      iVar2 = sis_trace.now + 0x40;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar1 = sis_trace.now * 4;
    iVar3 = iVar3 + (iVar2 >> 6) * -0x40;
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.now,0x40);
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar3,0x40);
    GetTrgtRot__FPCfT0Pfi
              (sis_trace.vwpos + iVar1 + 0x14,(float *)((int)&sis_trace + iVar3 * 0x10 + 0x80),vw,2)
    ;
  }
  return vw[1];
}

void SisterPosUpdate() {
	MOVE_BOX *ssm;
	MOVE_BOX *plm;
	float tv[4];
	float *pv1;
	float *pv0;
	float *pv1;
	float l1;
	float l2;
	float l1;
	
  int iVar1;
  float fVar2;
  float fVar3;
  float tv [4];
  
  iVar1 = sis_trace.now;
  sis_wrk.cmn_wrk.mbox.bpos[0] = sis_wrk.cmn_wrk.mbox.pos[0];
  sis_wrk.cmn_wrk.mbox.bpos[1] = sis_wrk.cmn_wrk.mbox.pos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_wrk.cmn_wrk.mbox.bpos[2] = sis_wrk.cmn_wrk.mbox.pos[2];
  sis_wrk.cmn_wrk.mbox.bpos[3] = sis_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
  if ((((sis_wrk.cmn_wrk.st.mvsta & 0x2000) == 0) || (sis_algo.amode == '\x02')) ||
     (sis_algo.amode == '\x06')) {
    if ((sis_wrk.cmn_wrk.st.mvsta & 0x801f00) == 0) {
      if (sis_wrk.cmn_wrk.mode == '\x02') {
        sis_wrk.cmn_wrk.mbox.bpos[0] = sis_wrk.cmn_wrk.mbox.pos[0];
        sis_wrk.cmn_wrk.mbox.bpos[1] = sis_wrk.cmn_wrk.mbox.pos[1];
        sis_wrk.cmn_wrk.mbox.bpos[2] = sis_wrk.cmn_wrk.mbox.pos[2];
        sis_wrk.cmn_wrk.mbox.bpos[3] = sis_wrk.cmn_wrk.mbox.pos[3];
        return;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      tv[2] = sis_wrk.spd[2];
      tv[3] = sis_wrk.spd[3];
      tv._0_8_ = sis_wrk.spd._0_8_;
                    /* end of inlined section */
      RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
      RotFvector__FPfT0(sis_wrk.cmn_wrk.mbox.rot,tv);
      sceVu0AddVector(0x34fc10,0x34fc10,tv);
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      sis_wrk.cmn_wrk.mbox.pos[0] = sis_wrk.wpos[0];
      sis_wrk.cmn_wrk.mbox.pos[1] = sis_wrk.wpos[1];
      sis_wrk.cmn_wrk.mbox.pos[2] = sis_wrk.wpos[2];
      sis_wrk.cmn_wrk.mbox.pos[3] = sis_wrk.wpos[3];
    }
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(sis_trace.now,0x40);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    sis_wrk.cmn_wrk.mbox.pos[2] = sis_trace.vwpos[iVar1 * 4 + 0x16];
    sis_wrk.cmn_wrk.mbox.pos[3] = sis_trace.vwpos[iVar1 * 4 + 0x17];
    sis_wrk.cmn_wrk.mbox.pos[0] = (float)*(undefined8 *)(sis_trace.vwpos + iVar1 * 4 + 0x14);
    sis_wrk.cmn_wrk.mbox.pos[1] =
         (float)((ulong)*(undefined8 *)(sis_trace.vwpos + iVar1 * 4 + 0x14) >> 0x20);
                    /* end of inlined section */
  }
  iVar1 = MapHitCheck__FPfN20fi
                    (sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.bpos,
                     150.0,(int)(short)sis_wrk.cmn_wrk.floor);
  sis_lalg.hit = (uchar)iVar1;
  iVar1 = DistHitCheck__FPfT0f(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos,140.0);
  if (iVar1 == 0) goto LAB_0025f8d0;
  if ((byte)(sis_wrk.cmn_wrk.mode - 1) < 4) {
                    /* end of inlined section */
    iVar1 = DistHitCheck__FPfT0f(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.bpos,140.0);
    if (iVar1 != 0) {
      fVar2 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
      fVar3 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.bpos);
      if (fVar3 <= fVar2) goto LAB_0025f8c8;
    }
LAB_0025f8bc:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    plyr_wrk.cmn_wrk.mbox.pos[0] = (float)plyr_wrk.cmn_wrk.mbox.bpos._0_8_;
    plyr_wrk.cmn_wrk.mbox.pos[1] = SUB84(plyr_wrk.cmn_wrk.mbox.bpos._0_8_,4);
    plyr_wrk.cmn_wrk.mbox.pos[2] = plyr_wrk.cmn_wrk.mbox.bpos[2];
    plyr_wrk.cmn_wrk.mbox.pos[3] = plyr_wrk.cmn_wrk.mbox.bpos[3];
                    /* end of inlined section */
  }
  else {
    iVar1 = DistHitCheck__FPfT0f(sis_wrk.cmn_wrk.mbox.bpos,plyr_wrk.cmn_wrk.mbox.pos,140.0);
    if (iVar1 != 0) {
      iVar1 = DistHitCheck__FPfT0f(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.bpos,140.0);
      if (iVar1 == 0) goto LAB_0025f8bc;
      iVar1 = DistHitCheck__FPfT0f(sis_wrk.cmn_wrk.mbox.bpos,plyr_wrk.cmn_wrk.mbox.bpos,140.0);
      if (iVar1 != 0) {
        fVar2 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos);
        fVar3 = GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.bpos,plyr_wrk.cmn_wrk.mbox.bpos);
        GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.bpos,plyr_wrk.cmn_wrk.mbox.pos);
        GetDistV__FPCfT0(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.bpos);
        if (fVar3 <= fVar2) goto LAB_0025f8c8;
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      plyr_wrk.cmn_wrk.mbox.pos[0] = (float)plyr_wrk.cmn_wrk.mbox.bpos._0_8_;
      plyr_wrk.cmn_wrk.mbox.pos[1] = SUB84(plyr_wrk.cmn_wrk.mbox.bpos._0_8_,4);
      plyr_wrk.cmn_wrk.mbox.pos[2] = plyr_wrk.cmn_wrk.mbox.bpos[2];
      plyr_wrk.cmn_wrk.mbox.pos[3] = plyr_wrk.cmn_wrk.mbox.bpos[3];
    }
    sis_wrk.cmn_wrk.mbox.pos[0] = sis_wrk.cmn_wrk.mbox.bpos[0];
    sis_wrk.cmn_wrk.mbox.pos[1] = sis_wrk.cmn_wrk.mbox.bpos[1];
    sis_wrk.cmn_wrk.mbox.pos[2] = sis_wrk.cmn_wrk.mbox.bpos[2];
    sis_wrk.cmn_wrk.mbox.pos[3] = sis_wrk.cmn_wrk.mbox.bpos[3];
  }
LAB_0025f8c8:
  sis_lalg.hit = '\x01';
LAB_0025f8d0:
  SetSisterHeight__Fv();
  SetNowTracePos__Fv();
  sis_wrk.wpos[0] = sis_wrk.cmn_wrk.mbox.pos[0];
  sis_wrk.wpos[1] = sis_wrk.cmn_wrk.mbox.pos[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_wrk.wpos[2] = sis_wrk.cmn_wrk.mbox.pos[2];
  sis_wrk.wpos[3] = sis_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
  PlyrDWalkTmCtrl__FP9PLCMN_WRK(&sis_wrk.cmn_wrk);
  return;
}

void SisterNoMove() {
	MOVE_BOX *plm;
	MOVE_BOX *ssm;
	POINT_T pt;
	LINE_T lt;
	float vt[4];
	float wpos[4];
	float wlm[4][4];
	float dist;
	float move;
	float rot;
	int dir;
	
  int iVar1;
  float fVar2;
  float fVar3;
  POINT_T pt;
  LINE_T lt;
  float vt [4];
  float wpos [4];
  float wlm [4] [4];
  float rot;
  
  if (plyr_wrk.cmn_wrk.floor == sis_wrk.cmn_wrk.floor) {
    iVar1 = DistHitCheck__FPfT0f(sis_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.pos,140.0);
    if (iVar1 != 0) {
      sceVu0SubVector(vt,0x33cda0,0x33cdb0);
      sceVu0AddVector(vt,0x34fc10,vt);
      pt.x = plyr_wrk.cmn_wrk.mbox.bpos[0];
      pt.y = plyr_wrk.cmn_wrk.mbox.bpos[2];
      lt.a.x = sis_wrk.cmn_wrk.mbox.pos[0];
      lt.a.y = sis_wrk.cmn_wrk.mbox.pos[2];
      lt.b.x = vt[0];
      lt.b.y = vt[2];
      iVar1 = LineSide__FP7POINT_TP6LINE_T(&pt,&lt);
      if (iVar1 != 0) {
                    /* end of inlined section */
        wpos[0] = plyr_wrk.cmn_wrk.mbox.bpos[0] - sis_wrk.cmn_wrk.mbox.pos[0];
        wpos[2] = plyr_wrk.cmn_wrk.mbox.bpos[2] - sis_wrk.cmn_wrk.mbox.pos[2];
        wpos[1] = 0.0;
        wpos[3] = 1.0;
        fVar2 = GetDist__Fff(wpos[0],wpos[2]);
        fVar3 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,plyr_wrk.cmn_wrk.mbox.bpos);
        rot = (fVar3 * 0.5) / fVar2;
        RotLimitChk__FPf(&rot);
        if (iVar1 < 1) {
          rot = -rot;
        }
        sceVu0UnitMatrix(wlm);
        sceVu0RotMatrixY(rot,wlm,wlm);
        sceVu0TransMatrix(wlm,wlm,0x34fc10);
        sceVu0ApplyMatrix(wpos,wlm,wpos);
        iVar1 = MapHitCheck__FPfN20fi
                          (wpos,wpos,plyr_wrk.cmn_wrk.mbox.bpos,plyr_wrk.hit_rad,
                           (int)(short)plyr_wrk.cmn_wrk.floor);
        if (iVar1 == 0) {
          plyr_wrk.cmn_wrk.mbox.pos[0] = wpos[0];
          plyr_wrk.cmn_wrk.mbox.pos[1] = wpos[1];
          plyr_wrk.cmn_wrk.mbox.pos[2] = wpos[2];
          plyr_wrk.cmn_wrk.mbox.pos[3] = wpos[3];
          return;
        }
      }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      plyr_wrk.cmn_wrk.mbox.pos[0] = plyr_wrk.cmn_wrk.mbox.bpos[0];
      plyr_wrk.cmn_wrk.mbox.pos[1] = plyr_wrk.cmn_wrk.mbox.bpos[1];
      plyr_wrk.cmn_wrk.mbox.pos[2] = plyr_wrk.cmn_wrk.mbox.bpos[2];
      plyr_wrk.cmn_wrk.mbox.pos[3] = plyr_wrk.cmn_wrk.mbox.bpos[3];
    }
  }
  return;
}

void SetSisterPos(float *pos) {
	float vw[4];
	
  float vw [4];
  
  sis_wrk.stop_tm = 0;
  sis_wrk.run_tm = 0;
  sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffff7effff;
  sis_wrk.walk_tm = 0;
  sceVu0SubVector(vw,pos,0x34fc10);
  sceVu0AddVector(0x34fd00,0x34fd00,vw);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_wrk.cmn_wrk.mbox.pos[2] = pos[2];
  sis_wrk.cmn_wrk.mbox.pos[3] = pos[3];
  sis_wrk.cmn_wrk.mbox.pos[0] = (float)*(undefined8 *)pos;
  sis_wrk.cmn_wrk.mbox.pos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20);
  sis_wrk.cmn_wrk.mbox.bpos[2] = pos[2];
  sis_wrk.cmn_wrk.mbox.bpos[3] = pos[3];
  sis_wrk.cmn_wrk.mbox.bpos[0] = (float)*(undefined8 *)pos;
  sis_wrk.cmn_wrk.mbox.bpos[1] = (float)((ulong)*(undefined8 *)pos >> 0x20);
                    /* end of inlined section */
  SetSisterHeight__Fv();
  InitSisterTracePos__Fv();
  return;
}

void SetSisterRot(float *rot) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_wrk.cmn_wrk.mbox.rot[0] = *rot;
  sis_wrk.cmn_wrk.mbox.rot[1] = rot[1];
  sis_wrk.cmn_wrk.mbox.rot[2] = rot[2];
  sis_wrk.cmn_wrk.mbox.rot[3] = rot[3];
                    /* end of inlined section */
  RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
  return;
}

void SetSisterRotY(float rot) {
  sis_wrk.cmn_wrk.mbox.rot[1] = rot;
  RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
  return;
}

void SetSisterFloorPL() {
  sis_wrk.cmn_wrk.floor = plyr_wrk.cmn_wrk.floor;
  return;
}

void SisterDamageCtrl() {
	ENE_WRK *ew;
	u_char sani_dmgin_tbl[3][2];
	u_char sani_dmg_tbl[2];
	u_char sani_out_tbl[2];
	
  uchar *puVar1;
  uint uVar2;
  uchar uVar3;
  int iVar4;
  ushort uVar5;
  uchar sani_dmgin_tbl [3] [2];
  uchar sani_dmg_tbl [2];
  uchar sani_out_tbl [2];
  
  uVar3 = sis_wrk.cmn_wrk.atk_eneno;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(sis_wrk.cmn_wrk.atk_eneno,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = (uint)uVar3 * 0x48 + (uint)uVar3;
  puVar1 = sani_dmgin_tbl[1] + 1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar2 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar2) =
       *(uint *)(puVar1 + -uVar2) & -1 << (uVar2 + 1) * 8 | DAT_003f4438 >> (3 - uVar2) * 8;
  sani_dmgin_tbl[0][0] = (undefined)DAT_003f4438;
  sani_dmgin_tbl[0][1] = DAT_003f4438._1_1_;
  sani_dmgin_tbl[1][0] = DAT_003f4438._2_1_;
  sani_dmgin_tbl[1][1] = DAT_003f4438._3_1_;
  sani_dmgin_tbl[2][0] = DAT_003f443c;
  sani_dmgin_tbl[2][1] = DAT_003f443d;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  sani_dmg_tbl[0] = DAT_003f4440;
  sani_dmg_tbl[1] = DAT_003f4441;
  sani_out_tbl[0] = DAT_003f4448;
  sani_out_tbl[1] = DAT_003f4449;
  if (sis_wrk.cmn_wrk.st.hp == 0) {
    sis_wrk.cmn_wrk.st.dwalk_tm = 0;
    if (sis_wrk.cmn_wrk.st.dmg_type != 4) {
      ene_wrk.field0_0x0.m_aData[0].fp[iVar4 * 8 + -7] = 0;
    }
    EndPlyrApproachCameraCtrl__Fv();
    if (sis_wrk.cmn_wrk.mode == '\t') {
      return;
    }
    sis_wrk.cmn_wrk.mode = '\0';
    return;
  }
  if (3 < (byte)(sis_wrk.cmn_wrk.mode - 1)) {
    sis_wrk.cmn_wrk.st.dmg = 0;
  }
  if (((sis_wrk.cmn_wrk.st.dmg_type != 4) && (sis_wrk.cmn_wrk.mode == '\x01')) &&
     ((*(short *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0xc) == 0 ||
      ((*(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) & 0x20000000000) != 0
      )))) {
    sis_wrk.cmn_wrk.mode = '\0';
    SetSisEscape__Fv();
    return;
  }
  if (sis_wrk.cmn_wrk.mode != '\x02') {
    if (2 < sis_wrk.cmn_wrk.mode) {
      if (sis_wrk.cmn_wrk.mode != '\x03') {
        if (sis_wrk.cmn_wrk.mode != '\x04') {
          return;
        }
        if (sis_wrk.cmn_wrk.st.dmg_type == 2) {
          sis_wrk.cmn_wrk.mode = '\0';
          SetSisterAnime__FUcUc('\0','\n');
          SetSisEscape__Fv();
          return;
        }
        if ((ushort)sis_wrk.cmn_wrk.st.dmg_type < 3) {
          if (sis_wrk.cmn_wrk.st.dmg_type != 1) {
            return;
          }
        }
        else {
          if (sis_wrk.cmn_wrk.st.dmg_type == 3) {
            if ((sis_wrk.anime_no == sani_out_tbl[sis_wrk.cmn_wrk.atk_pos]) &&
               (iVar4 = CheckSisAnimeEnd__Fi((uint)sani_out_tbl[sis_wrk.cmn_wrk.atk_pos]),
               iVar4 == 0)) {
              return;
            }
            goto LAB_002601fc;
          }
          if (sis_wrk.cmn_wrk.st.dmg_type != 4) {
            return;
          }
        }
        if (((byte)(sis_wrk.anime_no - 0x22) < 2) && ((sis_wrk.cmn_wrk.st.sta & 0x2000) == 0)) {
          return;
        }
        goto LAB_002601fc;
      }
      if ((sis_wrk.cmn_wrk.st.dmg_type != 4) &&
         (ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -3] != 5.605194e-45)) {
        sis_wrk.cmn_wrk.mode = '\x04';
        return;
      }
      if (sis_wrk.cmn_wrk.st.dmg_type != 3) {
        if ((ushort)sis_wrk.cmn_wrk.st.dmg_type < 4) {
          if (sis_wrk.cmn_wrk.st.dmg_type == 0) {
            return;
          }
        }
        else if (sis_wrk.cmn_wrk.st.dmg_type != 4) {
          return;
        }
        sis_wrk.cmn_wrk.mode = '\x04';
        return;
      }
      if (sis_wrk.anime_no != sani_dmg_tbl[sis_wrk.cmn_wrk.atk_pos]) {
        ene_wrk.field0_0x0.m_aData[0].fp[iVar4 * 8 + -7] = 0;
        goto LAB_002601fc;
      }
      ReqPlyrHPdown__FP9PLCMN_WRKUs
                (&sis_wrk.cmn_wrk,
                 (ushort)*(byte *)((int)ene_wrk.field0_0x0.m_aData[0].dist_p_e[iVar4 * 4 + -2] +
                                  0x58));
      uVar5 = ene_wrk.field0_0x0.m_aData[0].fp[iVar4 * 8 + -7];
      if ((*(ulong *)(ene_wrk.field0_0x0.m_aData[0].dist_p_e + iVar4 * 4 + -0x12) & 0x8000) == 0) {
LAB_002600d8:
        if (uVar5 != 0) {
          return;
        }
      }
      else if (uVar5 != 0) {
        if (((sis_wrk.cmn_wrk.st.sta & 0x4000) != 0) &&
           (sis_wrk.dmg_se_cnt = sis_wrk.dmg_se_cnt + 1, sis_wrk.dmg_se_cnt == 5)) {
          ReqSisBankPlay__FiiiiP11_SND_3D_SET(6,1,1,0,&sis_wrk.s3d);
          uVar5 = ene_wrk.field0_0x0.m_aData[0].fp[iVar4 * 8 + -7];
        }
        goto LAB_002600d8;
      }
      SetSisterAnime__FUcUc(sani_out_tbl[sis_wrk.cmn_wrk.atk_pos],'\x01');
                    /* inlined from ../../graphics/effect/effect.h */
      sis_wrk.cmn_wrk.mode = '\x04';
      iVar4 = rand();
      if (50.0 <= ((float)iVar4 / DAT_003ee960) * 100.0) {
        return;
      }
                    /* end of inlined section */
      iVar4 = 10;
      goto LAB_00260144;
    }
    if (sis_wrk.cmn_wrk.mode != '\x01') {
      return;
    }
    sis_wrk.cmn_wrk.mode = '\x02';
  }
  if (sis_wrk.cmn_wrk.st.dmg_type != 4) {
    if (((uint)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -1] & 0x2000) != 0) {
      SetOpenCondSwitch__FUc('\0');
      ReqSisDead__Fi(4);
      ene_wrk.field0_0x0.m_aData[0].fp[iVar4 * 8 + -7] = 0;
      if (sis_wrk.cmn_wrk.st.dmg_type != 3) {
        return;
      }
      ReqAnm__FPviii((void *)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -2],10,
                     (uint)*(ushort *)
                            ((int)ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + 4] +
                            0x16),9);
      return;
    }
    if (ene_wrk.field0_0x0.m_aData[0].directionaldiffuse[iVar4 * 4 + -3] != 5.605194e-45) {
      sis_wrk.cmn_wrk.mode = '\x04';
      return;
    }
  }
  if (sis_wrk.cmn_wrk.st.dmg_type == 3) {
    if (sis_wrk.anime_no == sani_dmgin_tbl[sis_wrk.cmn_wrk.atk_rot][sis_wrk.cmn_wrk.atk_pos]) {
      iVar4 = CheckSisAnimeEnd__Fi
                        ((uint)sani_dmgin_tbl[sis_wrk.cmn_wrk.atk_rot][sis_wrk.cmn_wrk.atk_pos]);
      if (iVar4 == 0) {
        return;
      }
      sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta | 0x20000;
      ReqPlyrHPdown__FP9PLCMN_WRKUs(&sis_wrk.cmn_wrk,sis_wrk.cmn_wrk.st.dmg);
      ReqPlyrSPdown__FP9PLCMN_WRKUs(&plyr_wrk.cmn_wrk,sis_wrk.cmn_wrk.st.dmg);
      sis_wrk.cmn_wrk.mode = '\x03';
      SetSisterAnime__FUcUc(sani_dmg_tbl[sis_wrk.cmn_wrk.atk_pos],'\x01');
                    /* inlined from ../../graphics/effect/effect.h */
      iVar4 = rand();
      if (((float)iVar4 / DAT_003ee95c) * 100.0 < 20.0) {
                    /* end of inlined section */
        ReqSisBankPlay__FiiiiP11_SND_3D_SET(7,1,1,0,&sis_wrk.s3d);
      }
      else {
        ReqSisBankPlay__FiiiiP11_SND_3D_SET(2,1,1,0,&sis_wrk.s3d);
      }
      sis_wrk.cmn_wrk.st.dmg = 0;
      sis_wrk.dmg_se_cnt = 0;
      return;
    }
    ene_wrk.field0_0x0.m_aData[0].fp[iVar4 * 8 + -7] = 0;
LAB_002601fc:
    sis_wrk.cmn_wrk.mode = '\0';
    SetSisterAnime__FUcUc('\0','\n');
    SetSisEscape__Fv();
    return;
  }
  if ((ushort)sis_wrk.cmn_wrk.st.dmg_type < 4) {
    if (sis_wrk.cmn_wrk.st.dmg_type == 0) {
      return;
    }
  }
  else if (sis_wrk.cmn_wrk.st.dmg_type != 4) {
    return;
  }
  ReqPlyrHPdown__FP9PLCMN_WRKUs(&sis_wrk.cmn_wrk,sis_wrk.cmn_wrk.st.dmg);
  ReqPlyrSPdown__FP9PLCMN_WRKUs(&plyr_wrk.cmn_wrk,sis_wrk.cmn_wrk.st.dmg);
  sis_wrk.cmn_wrk.st.dmg = 0;
  sis_wrk.cmn_wrk.mode = '\x04';
  iVar4 = 1;
LAB_00260144:
  ReqSisBankPlay__FiiiiP11_SND_3D_SET(iVar4,1,1,0,&sis_wrk.s3d);
  return;
}

int CheckSisterNeckSW(u_char anime_no) {
  return (int)(anime_no != '+');
}

void SetSisterAnime(u_char anime_no, u_char frame) {
  int flg;
  
  if ((anime_no != '\0') || (sis_wrk.anime_no != '\0')) {
    if (anime_no != '\x01') {
      ClearSisWait__Fv();
    }
    sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta & 0xffffffffffff9fff;
    flg = CheckSisterNeckSW__FUc(anime_no);
    SetSisNeckFlg__Fi(flg);
    sis_wrk.anime_no = anime_no;
    ReqSisterAnime__FUc(frame);
  }
  return;
}

void SisterNAnimeCtrl() {
	u_int psta;
	u_char anime_no;
	u_char frame;
	u_char i;
	u_int psta_chk_tbl[14];
	u_char pmani_no_tbl[14][2];
	
  uchar *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  uchar anime_no;
  uint uVar6;
  uchar frame;
  uint psta_chk_tbl [14];
  uchar pmani_no_tbl [14] [2];
  uchar uVar7;
  
  uVar6 = (int)psta_chk_tbl + 7U & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 7U) - uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c75c0 >> (7 - uVar6) * 8;
  psta_chk_tbl._0_8_ = DAT_003c75c0;
  uVar3 = psta_chk_tbl._0_8_;
  uVar6 = (int)psta_chk_tbl + 0xfU & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0xfU) - uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c75c8 >> (7 - uVar6) * 8;
  psta_chk_tbl._8_8_ = DAT_003c75c8;
  uVar6 = (int)psta_chk_tbl + 0x17U & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0x17U) - uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c75d0 >> (7 - uVar6) * 8;
  psta_chk_tbl._16_8_ = DAT_003c75d0;
  uVar6 = (int)psta_chk_tbl + 0x1fU & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0x1fU) - uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c75d8 >> (7 - uVar6) * 8;
  psta_chk_tbl._24_8_ = DAT_003c75d8;
  uVar6 = (int)psta_chk_tbl + 0x27U & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0x27U) - uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c75e0 >> (7 - uVar6) * 8;
  psta_chk_tbl._32_8_ = DAT_003c75e0;
  uVar6 = (int)psta_chk_tbl + 0x2fU & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0x2fU) - uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c75e8 >> (7 - uVar6) * 8;
  psta_chk_tbl._40_8_ = DAT_003c75e8;
  uVar6 = (int)psta_chk_tbl + 0x37U & 7;
  puVar2 = (ulong *)(((int)psta_chk_tbl + 0x37U) - uVar6);
  *puVar2 = *puVar2 & -1L << (uVar6 + 1) * 8 | DAT_003c75f0 >> (7 - uVar6) * 8;
  psta_chk_tbl._48_8_ = DAT_003c75f0;
  puVar1 = pmani_no_tbl[3] + 1;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | DAT_003c75f8 >> (7 - uVar6) * 8;
  pmani_no_tbl._0_8_ = DAT_003c75f8;
  puVar1 = pmani_no_tbl[7] + 1;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | DAT_003c7600 >> (7 - uVar6) * 8;
  pmani_no_tbl._8_8_ = DAT_003c7600;
  puVar1 = pmani_no_tbl[0xb] + 1;
  uVar6 = (uint)puVar1 & 7;
  *(ulong *)(puVar1 + -uVar6) =
       *(ulong *)(puVar1 + -uVar6) & -1L << (uVar6 + 1) * 8 | DAT_003c7608 >> (7 - uVar6) * 8;
  pmani_no_tbl._16_8_ = DAT_003c7608;
  puVar1 = pmani_no_tbl[0xd] + 1;
  uVar6 = (uint)puVar1 & 3;
  *(uint *)(puVar1 + -uVar6) =
       *(uint *)(puVar1 + -uVar6) & -1 << (uVar6 + 1) * 8 | DAT_003c7610 >> (3 - uVar6) * 8;
  pmani_no_tbl._24_4_ = DAT_003c7610;
  uVar7 = '\n';
  frame = '\n';
  if (sis_wrk.cmn_wrk.mode != '\t') {
    anime_no = sis_wrk.anime_no;
    if ((sis_wrk.cmn_wrk.st.mvsta & 0x1f00) == 0) {
      if (((sis_wrk.cmn_wrk.st.mvsta & 0x801fff) == 0) ||
         ((sis_wrk.cmn_wrk.st.mvsta & 0x61a8000) != 0)) {
        anime_no = (sis_wrk.cmn_wrk.st.mvsta & 0x10000) != 0;
        if ((sis_wrk.cmn_wrk.st.mvsta & 0x2000000) != 0) {
          anime_no = sis_wrk.anime_no;
        }
      }
      else {
        uVar6 = 7;
        frame = uVar7;
        if (sis_wrk.cmn_wrk.st.dwalk_tm == 0) {
          psta_chk_tbl[0] = (uint)DAT_003c75c0;
          uVar6 = 0;
          if (((uint)sis_wrk.cmn_wrk.st.mvsta & psta_chk_tbl[0]) == 0) {
            do {
              uVar6 = uVar6 + 1 & 0xff;
              if (0xd < uVar6) goto LAB_002604a8;
            } while (((uint)sis_wrk.cmn_wrk.st.mvsta & psta_chk_tbl[uVar6]) == 0);
            if ((psta_chk_tbl[uVar6] & 0x1f00) != 0) {
              frame = '\x02';
            }
          }
          else if ((DAT_003c75c0 & 0x1f00) != 0) {
            frame = '\x02';
          }
        }
LAB_002604a8:
        psta_chk_tbl._0_8_ = uVar3;
        iVar5 = PlyrOutsideCheck__Fv();
        if ((iVar5 != 0) && (psta_chk_tbl[uVar6] == 2)) {
          uVar6 = uVar6 + 1 & 0xff;
        }
        if (((pmani_no_tbl[uVar6][0] != sis_wrk.anime_no) &&
            (pmani_no_tbl[uVar6][1] != sis_wrk.anime_no)) ||
           (anime_no = sis_wrk.anime_no, (sis_wrk.cmn_wrk.st.sta & 0x2000) != 0)) {
          iVar5 = 0;
          if (uVar6 < 0xe) {
            sVar4 = GetSisterFtype__Fv();
            iVar5 = 1;
            if (sVar4 != 1) {
              iVar5 = 0;
            }
          }
          anime_no = sis_wrk.anime_no;
          if (uVar6 < 0xe) {
            anime_no = pmani_no_tbl[uVar6][iVar5];
          }
        }
      }
    }
    if ((anime_no == '\0') && (sis_wrk.cmn_wrk.st.dwalk_tm != 0)) {
      anime_no = '\x05';
    }
    if (sis_wrk.anime_no != anime_no) {
      SetSisterAnime__FUcUc(anime_no,frame);
    }
  }
  return;
}

int SearchSearchPoint(float *pos, int floor1, float *tgt, int floor2) {
	int i;
	float lw;
	float l1;
	float l2;
	float *pointpos[4];
	int ret;
	
  bool bVar1;
  char cVar2;
  int iVar3;
  float (*p1) [4];
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (sis_wrk.cmn_wrk.pr_info.area_no < 0x42) {
    p1 = room_point_pos[sis_wrk.cmn_wrk.pr_info.area_no];
    if (room_point_num[sis_wrk.cmn_wrk.pr_info.area_no] != 0) {
      sis_search.end = -1;
      iVar4 = 0;
      sis_search.start = -1;
      fVar6 = DAT_003ee964;
      fVar8 = DAT_003ee964;
      if (0 < room_point_num[sis_wrk.cmn_wrk.pr_info.area_no]) {
        do {
          fVar5 = GetDistV2__FPCfT0(pos,(float *)p1);
          fVar7 = fVar8;
          cVar2 = sis_search.start;
          if ((fVar8 <= fVar5) ||
             (iVar3 = SisterHitCheck__FPfiT0i(pos,floor1,(float *)p1,(int)(*p1)[3]), fVar7 = fVar5,
             cVar2 = (char)iVar4, iVar3 == 0)) {
            sis_search.start = cVar2;
            fVar8 = fVar7;
          }
          fVar5 = GetDistV2__FPCfT0(tgt,(float *)p1);
          fVar7 = fVar6;
          cVar2 = sis_search.end;
          if ((fVar6 <= fVar5) ||
             (iVar3 = SisterHitCheck__FPfiT0i(tgt,floor2,(float *)p1,(int)(*p1)[3]), fVar7 = fVar5,
             cVar2 = (char)iVar4, iVar3 == 0)) {
            sis_search.end = cVar2;
            fVar6 = fVar7;
          }
          iVar4 = iVar4 + 1;
          p1 = p1[1];
        } while (iVar4 < room_point_num[sis_wrk.cmn_wrk.pr_info.area_no]);
      }
      bVar1 = sis_search.start == -1;
      if (bVar1) {
        printf("nearest-point not found[p1]\n");
      }
      if (sis_search.end != -1) {
        return (uint)!bVar1;
      }
      printf("nearest-point not found[p2]\n");
    }
  }
  return 0;
}

int SearchTraceRoute(char *route) {
	int j;
	int k;
	int n;
	int p;
	int start;
	int end;
	int min;
	int leng[32];
	int v[32];
	int index[32];
	int **a;
	
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int leng [32];
  int v [32];
  int index [32];
  
  iVar10 = 0;
  if (sis_wrk.cmn_wrk.pr_info.area_no < 0x42) {
    uVar2 = (uint)sis_wrk.cmn_wrk.pr_info.area_no;
    iVar9 = room_point_num[uVar2];
    if (0x20 < iVar9) {
      iVar9 = 0x20;
      printf("TracePoint Over!!\n");
    }
    iVar7 = (int)sis_search.end;
    iVar12 = sis_search.start + 1;
    printf("start-p:%d  end-p:%d\n");
    iVar8 = 1;
    if (0 < iVar9) {
      do {
        iVar6 = iVar8 + 1;
        leng[iVar8] = 9999;
        v[iVar8] = 0;
        iVar8 = iVar6;
      } while (iVar6 <= iVar9);
    }
    iVar8 = 1;
    leng[iVar7 + 1] = 0;
    index[iVar7 + 1] = 0;
    if (0 < iVar9) {
      do {
        iVar7 = 9999;
        iVar6 = 1;
        if (0 < iVar9) {
          iVar3 = 4;
          iVar11 = iVar10;
          iVar4 = iVar7;
          do {
            iVar10 = iVar11;
            iVar7 = iVar4;
            if ((*(int *)((int)v + iVar3) == 0) &&
               (iVar10 = iVar6, iVar7 = *(int *)((int)leng + iVar3),
               iVar4 <= *(int *)((int)leng + iVar3))) {
              iVar10 = iVar11;
              iVar7 = iVar4;
            }
            iVar6 = iVar6 + 1;
            iVar3 = iVar6 * 4;
            iVar11 = iVar10;
            iVar4 = iVar7;
          } while (iVar6 <= iVar9);
        }
        v[iVar10] = 1;
        if (iVar7 == 9999) {
          printf("connection matrix error!!\n");
          return 0;
        }
        iVar7 = 1;
        if (0 < iVar9) {
          piVar5 = room_connect[uVar2] + iVar10 * (iVar9 + 1);
          iVar6 = 4;
          do {
            piVar5 = piVar5 + 1;
            iVar7 = iVar7 + 1;
            if (leng[iVar10] + *piVar5 < *(int *)((int)leng + iVar6)) {
              *(int *)((int)leng + iVar6) = leng[iVar10] + *piVar5;
              *(int *)((int)index + iVar6) = iVar10;
            }
            iVar6 = iVar7 * 4;
          } while (iVar7 <= iVar9);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= iVar9);
    }
    *route = (char)iVar12;
    iVar9 = 1;
    iVar10 = index[iVar12];
    while (iVar10 != 0) {
      iVar12 = index[iVar12];
      route[iVar9] = (char)iVar12;
      iVar9 = iVar9 + 1;
      iVar10 = index[iVar12];
    }
    iVar10 = 0;
    route[iVar9] = -1;
    printf("[base route]------");
    cVar1 = *route;
    while (cVar1 != -1) {
      iVar10 = iVar10 + 1;
      printf(&DAT_003f4450);
      cVar1 = route[iVar10];
    }
    printf(&DAT_003f4458);
    iVar10 = 1;
  }
  else {
    iVar10 = 0;
  }
  return iVar10;
}

int IsSisterTurn() {
	STATUS_DAT *std;
	
  return (int)(sis_wrk.cmn_wrk.st.mvsta == 0x800000);
}

void SetSearchPoint(char *route, int floor1, int floor2) {
	int i;
	int j;
	int no;
	int num;
	float *pointpos[4];
	float vw[4];
	int area;
	int mroute[64];
	int fl;
	int ne;
	int nw;
	int n;
	
  char cVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float vw [4];
  int mroute [64];
  int j;
  float (*pointpos) [4];
  int area;
  int local_80;
  float *local_7c;
  
  iVar11 = 0;
  iVar10 = 0;
  sis_trace.num = 0;
  sis_trace.top = 0;
  sis_trace.now = 0;
  area = (int)sis_wrk.cmn_wrk.pr_info.area_no;
  pointpos = room_point_pos[area];
  cVar1 = *route;
  while (cVar1 != -1) {
    iVar10 = iVar10 + 1;
    iVar11 = iVar11 + 1;
    cVar1 = route[iVar10];
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  local_80 = 0x34f440;
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x40);
  sis_trace.p.field0_0x0.m_aData[0][0] = (float)sis_wrk.cmn_wrk.mbox.pos._0_8_;
  sis_trace.p.field0_0x0.m_aData[0][1] = SUB84(sis_wrk.cmn_wrk.mbox.pos._0_8_,4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_trace.p.field0_0x0.m_aData[0][2] = sis_wrk.cmn_wrk.mbox.pos[2];
  sis_trace.p.field0_0x0.m_aData[0][3] = sis_wrk.cmn_wrk.mbox.pos[3];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x40);
  MhCtlGetMapHeight__FPfT0ii(vw,(float *)&sis_trace.p,area,0);
  _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(0,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar13 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  sis_trace.num = sis_trace.num + 1;
  mroute[0] = 0;
  j = sis_trace.now;
  iVar10 = iVar11 + -1;
  sis_trace.p.field0_0x0.m_aData[0][1] = vw[1];
  do {
    iVar4 = 0;
    if (iVar10 < 0) {
LAB_00260c40:
      local_7c = sis_trace.trgt;
      iVar10 = iVar4;
      while ((iVar12 = iVar11 + -1, iVar10 < iVar11 &&
             (iVar5 = SisterHitCheck__FPfiT0i
                                (sis_trace.trgt,floor2,(float *)pointpos[route[iVar10] + -1],
                                 (int)pointpos[route[iVar10] + -1][3]), iVar12 = iVar10, iVar5 != 0)
             )) {
        iVar10 = iVar10 + 1;
      }
      iVar10 = iVar4 + 1;
      iVar11 = iVar13 * 4;
      if (iVar10 <= iVar12) {
        piVar9 = mroute + iVar13;
        do {
          bVar3 = false;
          iVar11 = iVar10;
          if (iVar4 < iVar12) {
            iVar10 = iVar12;
            do {
              iVar5 = SisterHitCheck__FPfiT0i
                                ((float *)pointpos[route[iVar4] + -1],
                                 (int)pointpos[route[iVar4] + -1][3],
                                 (float *)pointpos[route[iVar10] + -1],
                                 (int)pointpos[route[iVar10] + -1][3]);
              if (iVar5 == 0) {
                if (iVar10 != iVar12) {
                  mroute[iVar13] = iVar10;
                  piVar9 = piVar9 + 1;
                  iVar13 = iVar13 + 1;
                }
                bVar3 = true;
                iVar4 = iVar10;
                iVar11 = iVar10 + 1;
                break;
              }
              iVar10 = iVar10 + -1;
            } while (iVar4 < iVar10);
          }
          iVar10 = iVar11;
          if (!bVar3) {
            if (iVar11 != iVar12) {
              *piVar9 = iVar11;
              piVar9 = piVar9 + 1;
              iVar13 = iVar13 + 1;
            }
            iVar10 = iVar11 + 1;
            iVar4 = iVar11;
          }
        } while (iVar10 <= iVar12);
        iVar11 = iVar13 << 2;
      }
      iVar13 = iVar13 + 1;
      *(int *)((int)mroute + iVar11) = iVar12;
      printf("[short cut route]-");
      if (0 < iVar13) {
        piVar9 = mroute;
        do {
          printf(&DAT_003f4450);
          iVar10 = sis_trace.top;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          iVar11 = sis_trace.top + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          sis_trace.top = iVar11;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar11,0x40);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          pfVar8 = (float *)(local_80 + iVar11 * 0x10);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          cVar1 = route[*piVar9];
          uVar2 = *(undefined8 *)pointpos[cVar1 + -1];
          fVar6 = pointpos[cVar1 + -1][2];
          fVar7 = pointpos[cVar1 + -1][3];
          *pfVar8 = (float)uVar2;
          pfVar8[1] = (float)((ulong)uVar2 >> 0x20);
          pfVar8[2] = fVar6;
          pfVar8[3] = fVar7;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar11,0x40);
          iVar13 = iVar13 + -1;
          MhCtlGetMapHeight__FPfT0ii(vw,pfVar8,area,0);
          piVar9 = piVar9 + 1;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar11,0x40);
          pfVar8[1] = vw[1];
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar11,0x40);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(j,0x40);
          fVar6 = GetDistV__FPCfT0(pfVar8,(float *)(local_80 + j * 0x10));
          _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar11,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          sis_trace.l.field0_0x0.m_aData[iVar10 + 1] = fVar6;
                    /* end of inlined section */
          sis_trace.num = sis_trace.num + 1;
          j = sis_trace.top;
        } while (iVar13 != 0);
      }
      printf(&DAT_003f4458);
      iVar10 = sis_trace.top;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar13 = sis_trace.top + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      sis_trace.top = iVar13;
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar13,0x40);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      pfVar8 = (float *)(local_80 + iVar13 * 0x10);
      uVar2 = *(undefined8 *)local_7c;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      fVar6 = local_7c[2];
      fVar7 = local_7c[3];
      *pfVar8 = (float)uVar2;
      pfVar8[1] = (float)((ulong)uVar2 >> 0x20);
      pfVar8[2] = fVar6;
      pfVar8[3] = fVar7;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar13,0x40);
      iVar11 = 0;
      MhCtlGetMapHeight__FPfT0ii(vw,pfVar8,area,0);
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar13,0x40);
      pfVar8[1] = vw[1];
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar13,0x40);
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(j,0x40);
      fVar6 = GetDistV__FPCfT0(pfVar8,(float *)(local_80 + j * 0x10));
      _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar13,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      sis_trace.l.field0_0x0.m_aData[iVar10 + 1] = fVar6;
                    /* end of inlined section */
      sis_trace.dist = 0.0;
      sis_trace.num = sis_trace.num + 1;
      if (0 < sis_trace.num) {
        pfVar8 = sis_trace.l.field0_0x0.m_aData;
        do {
          pfVar8 = pfVar8 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          iVar11 = iVar11 + 1;
          _fixed_array_verifyrange__H1Zf_UiUi_PX01(iVar11,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          sis_trace.dist = sis_trace.dist + *pfVar8;
                    /* end of inlined section */
                    /* end of inlined section */
        } while (iVar11 < sis_trace.num);
      }
      return;
    }
    iVar4 = SisterHitCheck__FPfiT0i
                      (sis_wrk.cmn_wrk.headpos,floor1,(float *)pointpos[route[iVar10] + -1],
                       (int)pointpos[route[iVar10] + -1][3]);
    if (iVar4 == 0) {
      iVar13 = 1;
      iVar4 = iVar10;
      mroute[0] = iVar10;
      goto LAB_00260c40;
    }
    iVar10 = iVar10 + -1;
  } while( true );
}

void ReqModeSisMotion(u_int tbl_no) {
	SIS_ANI_TBL *sat;
	
  if (9 < tbl_no) {
    printf("Sis Motion Req Over!!\n");
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1ZP11SIS_ANI_TBL_UiUi_PX01(tbl_no,10);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  sis_motion.sat = *(SIS_ANI_TBL **)((int)sis_ani_tbl.field0_0x0.m_aData + tbl_no * 4);
                    /* end of inlined section */
  sis_motion.now_tbl = '\0';
  sis_motion.mot_loop = '\0';
  sis_motion.mot_end = '\0';
  if ((sis_motion.sat)->ani_no == 0xfe) {
    sis_trace.num = 2;
    SetSisterAnime__FUcUc('\n',(sis_motion.sat)->frm);
  }
  else {
    SetSisterAnime__FUcUc((sis_motion.sat)->ani_no,(sis_motion.sat)->frm);
  }
  sis_algo.amode = '\x06';
  ClearSisterPushMove__Fv();
  return;
}

void ModeSisMotion() {
	SIS_ANI_TBL *sat;
	
  uchar uVar1;
  int iVar2;
  SIS_ANI_TBL *pSVar3;
  
  SisterNoMove__Fv();
  if (sis_motion.mot_end == '\0') {
    pSVar3 = sis_motion.sat + sis_motion.now_tbl;
    if (pSVar3->ani_no == 0xfe) {
      iVar2 = SetSisTurn__Fv();
      if (iVar2 != 0) {
        sis_motion.now_tbl = sis_motion.now_tbl + 1;
        uVar1 = (&(sis_motion.sat)->ani_no)[(int)((uint)(byte)sis_motion.now_tbl << 0x18) >> 0x16];
        if (uVar1 == 0xff) {
          sis_motion.mot_end = '\x01';
          SetSearchMode__Fv();
          return;
        }
        SetSisterAnime__FUcUc
                  (uVar1,(&(sis_motion.sat)->ani_no +
                         ((int)((uint)(byte)sis_motion.now_tbl << 0x18) >> 0x16))[1]);
        sis_motion.mot_loop = '\0';
      }
    }
    else if ((sis_wrk.cmn_wrk.st.sta & 0x6000) != 0) {
      if (pSVar3->loop != 0xffff) {
        sis_motion.mot_loop = sis_motion.mot_loop + '\x01';
        if (((long)(short)pSVar3->loop != -1) &&
           ((long)(short)pSVar3->loop <= (long)(int)sis_motion.mot_loop)) {
          sis_motion.now_tbl = sis_motion.now_tbl + 1;
          uVar1 = (&(sis_motion.sat)->ani_no)[(int)((uint)(byte)sis_motion.now_tbl << 0x18) >> 0x16]
          ;
          if (uVar1 != 0xff) {
            SetSisterAnime__FUcUc
                      (uVar1,(&(sis_motion.sat)->ani_no +
                             ((int)((uint)(byte)sis_motion.now_tbl << 0x18) >> 0x16))[1]);
            sis_motion.mot_loop = '\0';
            return;
          }
          sis_motion.mot_end = '\x01';
          SetSearchMode__Fv();
          return;
        }
      }
      if ((sis_wrk.cmn_wrk.st.sta & 0x2000) != 0) {
        SetSisterAnime__FUcUc(pSVar3->ani_no,pSVar3->frm);
        return;
      }
      if ((sis_wrk.cmn_wrk.st.sta & 0x4000) != 0) {
        sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta & 0xffffffffffffbfff;
      }
    }
  }
  return;
}

void SetModeSisAeneFind() {
  sis_algo.amode = '\x03';
  sis_wrk.trace_dist_bak = sis_wrk.trace_dist;
  ChangeSisTraceDist__FUc('\x01');
  return;
}

void EndModeSisAeneFind() {
  sis_algo.amode = '\0';
  ChangeSisTraceDist__FUc(sis_wrk.trace_dist_bak);
  return;
}

void ModeSisAeneFind() {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_trace.trgt[0] = plyr_wrk.cmn_wrk.mbox.pos[0];
  sis_trace.trgt[1] = plyr_wrk.cmn_wrk.mbox.pos[1];
  sis_trace.trgt[2] = plyr_wrk.cmn_wrk.mbox.pos[2];
  sis_trace.trgt[3] = plyr_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
  sis_trace.trgt_floor = (int)(short)plyr_wrk.cmn_wrk.floor;
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x61a8000) != 0) {
    SisterNoMove__Fv();
    return;
  }
  SisterTracePlayer__Fv();
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x2000) != 0) {
    SisterTraceMove__Fv();
  }
  SisterPushCheck__Fv();
  return;
}

static int SearchMain() {
	char route[255];
	int ret;
	
  int iVar1;
  int iVar2;
  uint uVar3;
  char route [255];
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
                    /* end of inlined section */
  printf("recovery search\n");
  sis_trace.trgt[0] = (float)plyr_wrk.cmn_wrk.headpos._0_8_;
  sis_trace.trgt[1] = SUB84(plyr_wrk.cmn_wrk.headpos._0_8_,4);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_trace.trgt[2] = plyr_wrk.cmn_wrk.headpos[2];
  sis_trace.trgt[3] = plyr_wrk.cmn_wrk.headpos[3];
                    /* end of inlined section */
  sis_trace.trgt_floor = (int)(short)plyr_wrk.cmn_wrk.floor;
  sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffffefffff;
  iVar1 = SisterHitCheck__FPfiT0i
                    (sis_wrk.cmn_wrk.headpos,(int)(short)sis_wrk.cmn_wrk.floor,
                     plyr_wrk.cmn_wrk.headpos,(int)(short)plyr_wrk.cmn_wrk.floor);
  if (iVar1 == 0) {
    sis_trace.num = 2;
    iVar2 = sis_trace.now + 1;
    iVar1 = iVar2;
    if (iVar2 < 0) {
      iVar1 = sis_trace.now + 0x40;
    }
    sis_trace.top = iVar2 + (iVar1 >> 6) * -0x40;
    CalcSisDist__Fv();
    SisterTracePlayer__Fv();
    sis_algo.amode = '\0';
    printf(">direct trace\n");
    uVar3 = 1;
  }
  else {
    iVar1 = SearchSearchPoint__FPfiT0i
                      (sis_wrk.cmn_wrk.headpos,(int)(short)sis_wrk.cmn_wrk.floor,
                       plyr_wrk.cmn_wrk.headpos,(int)(short)plyr_wrk.cmn_wrk.floor);
    if (iVar1 == 0) {
      sis_algo.amode = '\x05';
      sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x100000;
      printf(">search failure\n");
    }
    else {
      printf(">trace-point using search\n");
      SearchTraceRoute__FPc(route);
      SetSearchPoint__FPcii
                (route,(int)(short)sis_wrk.cmn_wrk.floor,(int)(short)plyr_wrk.cmn_wrk.floor);
      SisterTracePlayer__Fv();
      sis_algo.amode = '\0';
    }
    uVar3 = (uint)(iVar1 != 0);
  }
  return uVar3;
}

void SetSearchMode() {
  int iVar1;
  
  iVar1 = SearchMain__Fv();
  if (iVar1 == 0) {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x80000;
  }
  else {
    sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xfffffffffff7ffff;
  }
  return;
}

void SetSisEscape() {
	u_char sw;
	
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  iVar2 = CheckIngameMission__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if ((iVar2 != 0) &&
     ((ingame_wrk.mChapterNo.mValue == '\t' || (ingame_wrk.mChapterNo.mValue == '\x13')))) {
                    /* end of inlined section */
    bVar1 = false;
  }
  if (bVar1) {
    iVar2 = SearchMain__Fv();
    if (iVar2 == 0) {
      return;
    }
    sis_wrk.btl_recv_tm = 0x3c;
  }
  sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xfffffffff9e57fff;
  return;
}

void SetFindMode(float *tgt, int floor) {
  return;
}

void MoveSisStairs() {
	float fw;
	float rotw;
	
  int iVar1;
  ulong uVar2;
  float fVar3;
  float fw;
  float rotw;
  
  iVar1 = MrecGetStaInfo__FPfiPCf(&rotw,(int)(short)sis_wrk.cmn_wrk.floor,sis_wrk.cmn_wrk.mbox.pos);
  if (iVar1 < 1) {
    if ((sis_wrk.cmn_wrk.st.mvsta & 0x30) != 0) {
      sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffffffff0f;
    }
    if ((sis_wrk.cmn_wrk.st.mvsta & 0xc0) != 0) {
      sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffffffff0f;
    }
  }
  else {
    fw = rotw - sis_wrk.cmn_wrk.mbox.rot[1];
    RotLimitChk__FPf(&fw);
    fVar3 = (fw * 180.0) / DAT_003ee968;
    if ((fVar3 <= -65.0) || (65.0 <= fVar3)) {
      if (((-180.0 < fVar3) && (fVar3 < -115.0)) || ((115.0 < fVar3 && (fVar3 < 180.0)))) {
        uVar2 = 0x20;
        if ((((sis_wrk.cmn_wrk.st.mvsta & 2) != 0) ||
            (uVar2 = 0x80, (sis_wrk.cmn_wrk.st.mvsta & 1) != 0)) ||
           (uVar2 = 0x80, (sis_wrk.cmn_wrk.st.mvsta & 0xc) != 0)) {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | uVar2;
        }
      }
      else {
        if ((sis_wrk.cmn_wrk.st.mvsta & 0x30) != 0) {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffffffff0f;
        }
        if ((sis_wrk.cmn_wrk.st.mvsta & 0xc0) != 0) {
          sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta & 0xffffffffffffff0f;
        }
      }
    }
    else if ((sis_wrk.cmn_wrk.st.mvsta & 2) == 0) {
      if (((sis_wrk.cmn_wrk.st.mvsta & 1) != 0) || ((sis_wrk.cmn_wrk.st.mvsta & 0xc) != 0)) {
        sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x40;
      }
    }
    else {
      sis_wrk.cmn_wrk.st.mvsta = sis_wrk.cmn_wrk.st.mvsta | 0x10;
    }
  }
  return;
}

void CheckSisGhost() {
	int i;
	ENE_WRK *ew;
	
  int iVar1;
  fixed_array<ENE_WRK,10> *pfVar2;
  int iVar3;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta & 0xffffffffffffff9f;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z7ENE_WRK_UiUi_PX01(0,10);
  pfVar2 = &ene_wrk;
  iVar1 = 0;
  do {
                    /* end of inlined section */
    iVar3 = iVar1 + 1;
    iVar1 = IsActEnemy__Fi(iVar1);
    if (iVar1 != 0) {
      if (((ENE_WRK *)pfVar2)->type == '\x02') {
        sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta | 0x40;
      }
      else if ((((ENE_WRK *)pfVar2)->attr & 0x8000) == 0) {
        sis_wrk.cmn_wrk.st.sta = sis_wrk.cmn_wrk.st.sta | 0x20;
      }
    }
    pfVar2 = (fixed_array<ENE_WRK,10> *)((int)pfVar2 + 0x490);
    iVar1 = iVar3;
  } while (iVar3 < 10);
  return;
}

int SetSisTurn() {
	float vw[4];
	MOVE_BOX *ssm;
	float psrot;
	float rw;
	int ret;
	
  int iVar1;
  double arg_a;
  float fVar2;
  float fVar3;
  float vw [4];
  float psrot;
  
  fVar2 = GetSisterRot__Fv();
  fVar3 = DAT_003ee96c;
  psrot = fVar2 - sis_wrk.cmn_wrk.mbox.rot[1];
  RotLimitChk__FPf(&psrot);
  iVar1 = GetPALMode__Fv();
  if (iVar1 == 0) {
    fVar3 = DAT_003ee970;
  }
  arg_a = (double)psrot;
  iVar1 = dpcmp((long)arg_a,0);
  if (iVar1 < 0) {
    arg_a = 0.0 - arg_a;
  }
  iVar1 = dpcmp((long)arg_a,(long)(double)fVar3);
  if (iVar1 < 1) {
    if (psrot < 0.0) {
      sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] - psrot;
    }
    else {
      sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] + psrot;
    }
  }
  else if (psrot < 0.0) {
    sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] - fVar3;
  }
  else {
    sis_wrk.cmn_wrk.mbox.rot[1] = sis_wrk.cmn_wrk.mbox.rot[1] + fVar3;
  }
  RotLimitChk__FPf(sis_wrk.cmn_wrk.mbox.rot + 1);
  psrot = fVar2 - sis_wrk.cmn_wrk.mbox.rot[1];
  RotLimitChk__FPf(&psrot);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
                    /* end of inlined section */
  sis_wrk.cmn_wrk.mbox.brot[1] = sis_wrk.cmn_wrk.mbox.rot[1];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  sis_wrk.wpos[0] = sis_wrk.cmn_wrk.mbox.pos[0];
  sis_wrk.wpos[1] = sis_wrk.cmn_wrk.mbox.pos[1];
  sis_wrk.wpos[2] = sis_wrk.cmn_wrk.mbox.pos[2];
  sis_wrk.wpos[3] = sis_wrk.cmn_wrk.mbox.pos[3];
                    /* end of inlined section */
  return (uint)(ABS(psrot) <= DAT_003ee974);
}

void SisCondCheck() {
  sis_wrk.cmn_wrk.st.sta_old = sis_wrk.cmn_wrk.st.sta;
  return;
}

void SisDoorAct() {
  int iVar1;
  
  if ((plyr_wrk.cmn_wrk.mode != '\b') || (sis_wrk.pl_dist < DAT_003ee978)) {
    sis_wrk.se_door_fl = 0xffff;
  }
  else if ((sis_wrk.se_door_fl == 0xffff) && (iVar1 = SubTitleIsEnd__Fv(), iVar1 != 0)) {
    iVar1 = sis_mdlBankPlay__FiiiiP11_SND_3D_SETii(9,1,1,0,&sis_wrk.s3d,0x3200,0x1000);
    sis_wrk.se_door_fl = (ushort)iVar1;
  }
  return;
}

int GetSisAreaNo() {
  return (int)sis_wrk.cmn_wrk.pr_info.area_no;
}

int CheckSisAnimeEnd(int anime_no) {
  int iVar1;
  
  iVar1 = 1;
  if (((sis_wrk.cmn_wrk.st.sta & 0x2000) == 0) && (iVar1 = 0, anime_no != (uint)sis_wrk.anime_no)) {
    iVar1 = 1;
  }
  return iVar1;
}

int GetSisTraceStatus() {
  return (int)(sis_algo.amode == '\0');
}

int GetSisStandAnm() {
  return (int)(sis_algo.amode != '\x02');
}

void DrawSisDummy() {
	STATUS_DAT *std;
	int i;
	int n;
	int n1;
	int n2;
	int j;
	LINE_T l1;
	LINE_T l2;
	float wpos[4];
	float wpos2[4];
	
  undefined8 uVar1;
  int iVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LINE_T l1;
  LINE_T l2;
  float wpos [4];
  float wpos2 [4];
  
  if ((sis_wrk.cmn_wrk.st.mvsta & 0x61a8000) == 0) {
    if ((sis_wrk.cmn_wrk.st.mvsta & 0x10000) == 0) {
      if (sis_wrk.cmn_wrk.st.mvsta != 1) {
        if (sis_wrk.cmn_wrk.st.mvsta == 0x400000) {
          DrawHitCircle__FPffiUcUcf
                    (sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot[1] - DAT_003ee984,0,'\x02',
                     0x80,70.0);
          goto LAB_00261d80;
        }
        if (sis_wrk.cmn_wrk.st.mvsta == 0x200000) {
          DrawHitCircle__FPffiUcUcf
                    (sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot[1] - DAT_003ee988,0,'\x04',
                     0x80,70.0);
          goto LAB_00261d80;
        }
        if (sis_wrk.cmn_wrk.st.mvsta == 8) {
          DrawHitCircle__FPffiUcUcf
                    (sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot[1] - DAT_003ee98c,0,'\x01',
                     0x80,70.0);
          goto LAB_00261d80;
        }
        if ((sis_wrk.cmn_wrk.st.mvsta != 2) && (sis_wrk.cmn_wrk.st.mvsta != 0x800000)) {
          DrawHitCircle__FPffiUcUcf
                    (sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot[1] - DAT_003ee994,0,'\0',0x80
                     ,70.0);
          goto LAB_00261d80;
        }
      }
      DrawHitCircle__FPffiUcUcf
                (sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot[1] - DAT_003ee990,0,'\x03',0x80,
                 70.0);
    }
    else {
      DrawHitCircle__FPffiUcUcf
                (sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot[1] - DAT_003ee980,0,'\v',0x80,
                 70.0);
    }
  }
  else {
    DrawHitCircle__FPffiUcUcf
              (sis_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.rot[1] - DAT_003ee97c,0,'\t',0x80,70.0)
    ;
  }
LAB_00261d80:
  iVar2 = sis_trace.num + -1;
  iVar10 = 0;
  if (0 < iVar2) {
    do {
                    /* end of inlined section */
      iVar9 = 0;
      iVar4 = sis_trace.now + iVar10;
      iVar7 = iVar4 + 1;
      iVar2 = iVar4;
      if (iVar4 < 0) {
        iVar2 = iVar4 + 0x3f;
      }
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = iVar4 + 0x40;
      }
      iVar4 = iVar4 + (iVar2 >> 6) * -0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar7 = iVar7 + (iVar8 >> 6) * -0x40;
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar4,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      l1.a.x = *(float *)((int)&sis_trace + iVar4 * 0x10 + 0x80);
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar4,0x40);
      l1.a.y = *(float *)((int)&sis_trace + iVar4 * 0x10 + 0x88);
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar7,0x40);
      l1.b.x = *(float *)((int)&sis_trace + iVar7 * 0x10 + 0x80);
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar7,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      l1.b.y = *(float *)((int)&sis_trace + iVar7 * 0x10 + 0x88);
                    /* end of inlined section */
      if (0 < iVar10 + -1) {
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          iVar7 = sis_trace.now + iVar9;
          iVar9 = iVar9 + 1;
          iVar8 = iVar7 + 1;
          iVar2 = iVar7;
          if (iVar7 < 0) {
            iVar2 = iVar7 + 0x3f;
          }
          iVar5 = iVar8;
          if (iVar8 < 0) {
            iVar5 = iVar7 + 0x40;
          }
          iVar7 = iVar7 + (iVar2 >> 6) * -0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          iVar8 = iVar8 + (iVar5 >> 6) * -0x40;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar7,0x40);
          iVar5 = iVar7 * 0x10;
          l2.a.x = *(float *)((int)&sis_trace + iVar5 + 0x80);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar7,0x40);
          l2.a.y = *(float *)((int)&sis_trace + iVar5 + 0x88);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,0x40);
          iVar6 = iVar8 * 0x10;
          l2.b.x = *(float *)((int)&sis_trace + iVar6 + 0x80);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          l2.b.y = *(float *)((int)&sis_trace + iVar6 + 0x88);
                    /* end of inlined section */
                    /* end of inlined section */
          iVar2 = LineIntersect__FP6LINE_TT0(&l1,&l2);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          if (iVar2 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar7,0x40);
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,0x40);
            dVar3 = (double)(*(float *)((int)&sis_trace + iVar5 + 0x84) -
                            *(float *)((int)&sis_trace + iVar6 + 0x84));
            iVar2 = dpcmp((long)dVar3,0);
            if (iVar2 < 0) {
              dVar3 = 0.0 - dVar3;
            }
            iVar2 = dpcmp((long)dVar3,DAT_003c7750);
            if (iVar2 < 0) {
              _fixed_array_verifyrange__H1ZUc_UiUi_PX01(iVar4,0x40);
              *(undefined *)((int)&sis_trace + iVar4 + 0x580) = 1;
            }
          }
                    /* end of inlined section */
        } while (iVar9 < iVar10 + -1);
      }
      iVar2 = iVar10 + 2;
      if (iVar2 < sis_trace.num + -1) {
        do {
                    /* end of inlined section */
          iVar9 = sis_trace.now + iVar2;
          iVar2 = iVar2 + 1;
          iVar8 = iVar9 + 1;
          iVar7 = iVar9;
          if (iVar9 < 0) {
            iVar7 = iVar9 + 0x3f;
          }
          iVar5 = iVar8;
          if (iVar8 < 0) {
            iVar5 = iVar9 + 0x40;
          }
          iVar9 = iVar9 + (iVar7 >> 6) * -0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          iVar8 = iVar8 + (iVar5 >> 6) * -0x40;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
          iVar5 = iVar9 * 0x10;
          l2.a.x = *(float *)((int)&sis_trace + iVar5 + 0x80);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
          l2.a.y = *(float *)((int)&sis_trace + iVar5 + 0x88);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,0x40);
          iVar6 = iVar8 * 0x10;
          l2.b.x = *(float *)((int)&sis_trace + iVar6 + 0x80);
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          l2.b.y = *(float *)((int)&sis_trace + iVar6 + 0x88);
                    /* end of inlined section */
                    /* end of inlined section */
          iVar7 = LineIntersect__FP6LINE_TT0(&l1,&l2);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
          if (iVar7 != 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar9,0x40);
            _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar8,0x40);
            dVar3 = (double)(*(float *)((int)&sis_trace + iVar5 + 0x84) -
                            *(float *)((int)&sis_trace + iVar6 + 0x84));
            iVar7 = dpcmp((long)dVar3,0);
            if (iVar7 < 0) {
              dVar3 = 0.0 - dVar3;
            }
            iVar7 = dpcmp((long)dVar3,DAT_003c7758);
            if (iVar7 < 0) {
              _fixed_array_verifyrange__H1ZUc_UiUi_PX01(iVar4,0x40);
              *(undefined *)((int)&sis_trace + iVar4 + 0x580) = 1;
            }
          }
                    /* end of inlined section */
        } while (iVar2 < sis_trace.num + -1);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < sis_trace.num + -1);
    iVar2 = sis_trace.num + -1;
  }
  iVar10 = 0;
  if (0 < iVar2) {
    do {
                    /* end of inlined section */
      iVar4 = sis_trace.now + iVar10;
      iVar7 = iVar4 + 1;
      iVar2 = iVar4;
      if (iVar4 < 0) {
        iVar2 = iVar4 + 0x3f;
      }
      iVar9 = iVar7;
      if (iVar7 < 0) {
        iVar9 = iVar4 + 0x40;
      }
      iVar4 = iVar4 + (iVar2 >> 6) * -0x40;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar7 = iVar7 + (iVar9 >> 6) * -0x40;
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar4,0x40);
      iVar2 = iVar4 * 0x10;
      uVar1 = *(undefined8 *)((int)&sis_trace + iVar2 + 0x80);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      wpos[2] = *(float *)((int)&sis_trace + iVar2 + 0x88);
      wpos[3] = *(float *)((int)&sis_trace + iVar2 + 0x8c);
      wpos[0] = (float)uVar1;
      wpos[1] = (float)((ulong)uVar1 >> 0x20);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar7,0x40);
      iVar7 = iVar7 * 0x10;
      uVar1 = *(undefined8 *)((int)&sis_trace + iVar7 + 0x80);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
      wpos2[2] = *(float *)((int)&sis_trace + iVar7 + 0x88);
      wpos2[3] = *(float *)((int)&sis_trace + iVar7 + 0x8c);
      wpos2[0] = (float)uVar1;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      wpos[1] = wpos[1] - 210.0;
      iVar10 = iVar10 + 1;
      wpos2[1] = (float)((ulong)uVar1 >> 0x20) - 210.0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZUc_UiUi_PX01(iVar4,0x40);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      if (*(char *)((int)&sis_trace + iVar4 + 0x580) == '\0') {
        DrawLine__FPCfUcUcUcUcT0UcUcUcUc(wpos,0x80,0x80,0x80,'@',wpos2,0x80,0x80,0x80,0x40);
      }
      else {
                    /* end of inlined section */
        DrawLine__FPCfUcUcUcUcT0UcUcUcUc(wpos,0xff,'@','@',0x80,wpos2,0xff,'@',0x40,0x80);
      }
    } while (iVar10 < sis_trace.num + -1);
  }
  return;
}

void SisterDebug() {
	int i;
	float *pointpos[4];
	int i;
	
  int iVar1;
  float (*v2) [4];
  int iVar2;
  float fVar3;
  
  if (debug_var.sis_tr_point != 0) {
    iVar2 = 0;
    if (0 < room_point_num[plyr_wrk.cmn_wrk.pr_info.area_no]) {
      do {
        iVar1 = iVar2 + 1;
        DrawCrossLine__FPCf((float *)room_point_pos[plyr_wrk.cmn_wrk.pr_info.area_no][iVar2]);
        iVar2 = iVar1;
      } while (iVar1 < room_point_num[plyr_wrk.cmn_wrk.pr_info.area_no]);
    }
    if (*key_now[11] == 1) {
      ReqModeSisMotion__FUi(2);
    }
    if (*key_now[9] == 1) {
      ReqModeSisMotion__FUi(9);
    }
    if (*key_now[8] != 0) {
      v2 = room_point_pos[sis_wrk.cmn_wrk.pr_info.area_no];
      iVar2 = 0;
      if (0 < room_point_num[sis_wrk.cmn_wrk.pr_info.area_no]) {
        do {
          iVar1 = SisterHitCheck__FPfiT0i
                            (sis_wrk.cmn_wrk.headpos,(int)(short)sis_wrk.cmn_wrk.floor,(float *)v2,
                             (int)(*v2)[3]);
          if (iVar1 == 0) {
            DrawLine__FPCfUcUcUcUcT0UcUcUcUc
                      (sis_wrk.cmn_wrk.headpos,0x80,0x80,0xff,0x80,(float *)v2,0x80,0x80,0xff,0x80);
            fVar3 = (*v2)[3];
          }
          else {
            DrawLine__FPCfUcUcUcUcT0UcUcUcUc
                      (sis_wrk.cmn_wrk.headpos,0xff,0x80,0x80,0x80,(float *)v2,0xff,0x80,0x80,0x80);
            fVar3 = (*v2)[3];
          }
          iVar1 = SisterHitCheck__FPfiT0i
                            (plyr_wrk.cmn_wrk.headpos,(int)(short)plyr_wrk.cmn_wrk.floor,(float *)v2
                             ,(int)fVar3);
          if (iVar1 == 0) {
            DrawLine__FPCfUcUcUcUcT0UcUcUcUc
                      (plyr_wrk.cmn_wrk.headpos,0x80,0x80,0xff,0x80,(float *)v2,0x80,0x80,0xff,0x80)
            ;
          }
          else {
            DrawLine__FPCfUcUcUcUcT0UcUcUcUc
                      (plyr_wrk.cmn_wrk.headpos,0xff,0x80,0x80,0x80,(float *)v2,0xff,0x80,0x80,0x80)
            ;
          }
          iVar2 = iVar2 + 1;
          v2 = v2[1];
        } while (iVar2 < room_point_num[sis_wrk.cmn_wrk.pr_info.area_no]);
      }
    }
    DrawSisDummy__Fv();
  }
  return;
}

void SisterUnlock() {
  sis_wrk.lock_cnt = sis_wrk.lock_cnt + -1;
  return;
}

void SisterLock() {
  sis_wrk.lock_cnt = sis_wrk.lock_cnt + 1;
  return;
}

void SetSisAreaNo(int area_no) {
  sis_wrk.cmn_wrk.pr_info.area_no = (uchar)area_no;
  return;
}

void SetSisJoinFlg(u_char join_flg) {
  sis_wrk.join_flg = join_flg;
  return;
}

int GetSisJoinFlg() {
  return (int)sis_wrk.join_flg;
}

void SetSave_SisWrk(MC_SAVE_DATA *data) {
  data->size = 0x250;
  data->addr = (uchar *)&sis_wrk;
  return;
}

void SetSave_SisTrace(MC_SAVE_DATA *data) {
  data->size = 0x5c0;
  data->addr = (uchar *)&sis_trace;
  return;
}

void SetSave_SisAlgoWrk(MC_SAVE_DATA *data) {
  data->addr = &sis_algo.amode;
  data->size = 1;
  return;
}

void SetSave_SisMotion(MC_SAVE_DATA *data) {
  data->addr = (uchar *)&sis_motion;
  data->size = 8;
  return;
}

void ChangeSisterExPos(int old, int now) {
	SIS_AREA_CHG *sac;
	SIS_AREA_CHG_SUB *sacs;
	float pos[4];
	float dist;
	int flag;
	
  bool bVar1;
  int iVar2;
  SIS_AREA_CHG_SUB *pSVar3;
  SIS_AREA_CHG *pSVar4;
  float fVar5;
  float pos [4];
  
  bVar1 = false;
  pSVar4 = sis_area_chg;
  fVar5 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,sis_wrk.cmn_wrk.mbox.pos);
  iVar2 = IsSisWrk__Fv();
  if ((iVar2 != 0) && (DAT_003ee998 <= fVar5)) {
    _ClearVector__FPf(pos);
    iVar2 = sis_area_chg[0].old;
    if (sis_area_chg[0].old != -1) {
      do {
        if (iVar2 == old) {
          pSVar3 = pSVar4->target;
          iVar2 = pSVar3->now;
          while ((iVar2 != -1 && (!bVar1))) {
            if (iVar2 == now) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
              pos[0] = pSVar3->pos[0];
              pos[1] = pSVar3->pos[1];
              pos[2] = pSVar3->pos[2];
              pos[3] = pSVar3->pos[3];
                    /* end of inlined section */
              bVar1 = true;
            }
            pSVar3 = pSVar3 + 1;
            iVar2 = pSVar3->now;
          }
        }
        pSVar4 = pSVar4 + 1;
      } while ((pSVar4->old != -1) && (iVar2 = pSVar4->old, !bVar1));
    }
    if (bVar1) {
      SetSisterPos__FPf(pos);
      ChangeForceTraceMode__Fv();
      SetSearchMode__Fv();
    }
  }
  return;
}

void ReqSisBankPlay(int no, int effect, int loop, int fade_time, SND_3D_SET *s3d) {
  int iVar1;
  
  iVar1 = SubTitleIsEnd__Fv();
  if (iVar1 != 0) {
    sis_mdlBankPlay__FiiiiP11_SND_3D_SETii(no,effect,loop,fade_time,s3d,0x3200,0x1000);
  }
  return;
}

float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

float* float * _fixed_array_verifyrange<float>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

u_char* unsigned char * _fixed_array_verifyrange<unsigned char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

SIS_ANI_TBL** SIS_ANI_TBL * * _fixed_array_verifyrange<SIS_ANI_TBL *>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	SIS_ANI_TBL **ra;
	
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    sis_ani_tbl.field0_0x0.m_aData =
         (fixed_array_base<SIS_ANI_TBL_*,10,SIS_ANI_TBL_**>)&PTR_sis_ani001_tbl_003c7760;
  }
  return;
}

type_info& float [3] type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& ENE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& SIS_ANI_TBL * type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& SIS_ANI_TBL type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to sis_trace() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
