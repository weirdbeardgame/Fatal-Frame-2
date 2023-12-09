// STATUS: NOT STARTED

#include "photo_dat.h"

struct BIT_FLAGS<72> {
protected:
	int flag_32[3];
	
public:
	BIT_FLAGS<72>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct _PHOTO_DAT_OBJ_WRK {
	MDAT_OBJ *p_obj;
	void *p_deform;
	CWrkVariable<short int,0,128> mGhostAlpha;
	float pos[4];
};

typedef _PHOTO_DAT_OBJ_WRK PHOTO_DAT_OBJ_WRK;

float photo_rng_tbl[1] = {
	/* [0] = */ 5000.f
};

short unsigned int photo_frame_tbl[1][2] = {
	/* [0] = */ {
		/* [0] = */ 436,
		/* [1] = */ 300
	}
};

float photo_dist_ratio[10] = {
	/* [0] = */ 1.19999993f,
	/* [1] = */ 1.15f,
	/* [2] = */ 1.0999999f,
	/* [3] = */ 1.f,
	/* [4] = */ 0.95f,
	/* [5] = */ 0.9f,
	/* [6] = */ 0.849999964f,
	/* [7] = */ 0.799999952f,
	/* [8] = */ 0.75f,
	/* [9] = */ 0.7f
};

float photo_center_ratio[10] = {
	/* [0] = */ 1.5999999f,
	/* [1] = */ 1.4f,
	/* [2] = */ 1.19999993f,
	/* [3] = */ 1.0999999f,
	/* [4] = */ 1.f,
	/* [5] = */ 0.9f,
	/* [6] = */ 0.799999952f,
	/* [7] = */ 0.7f,
	/* [8] = */ 0.599999964f,
	/* [9] = */ 0.5f
};

float photo_charge_ratio[4] = {
	/* [0] = */ 1.4f,
	/* [1] = */ 1.5999999f,
	/* [2] = */ 1.8f,
	/* [3] = */ 2.f
};

PhotoData photo_dat[72] = {
	/* [0] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ -1,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [1] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3901,
		/* .mestype = */ 42,
		/* .mesnuma = */ 1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [2] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3901,
		/* .mestype = */ 10,
		/* .mesnuma = */ 2,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [3] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3901,
		/* .mestype = */ 70,
		/* .mesnuma = */ 3,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [4] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3910,
		/* .mestype = */ 42,
		/* .mesnuma = */ 4,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [5] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3901,
		/* .mestype = */ 42,
		/* .mesnuma = */ 5,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [6] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3905,
		/* .mestype = */ 42,
		/* .mesnuma = */ 6,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [7] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3901,
		/* .mestype = */ 42,
		/* .mesnuma = */ 7,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [8] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3919,
		/* .mestype = */ 42,
		/* .mesnuma = */ 8,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [9] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ -1,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [10] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3918,
		/* .mestype = */ 42,
		/* .mesnuma = */ 10,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [11] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3917,
		/* .mestype = */ 42,
		/* .mesnuma = */ 11,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [12] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1500.f,
		/* .Point = */ 0,
		/* .image = */ -1,
		/* .mestype = */ 42,
		/* .mesnuma = */ 12,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [13] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3916,
		/* .mestype = */ 42,
		/* .mesnuma = */ 13,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [14] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3914,
		/* .mestype = */ 42,
		/* .mesnuma = */ 14,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [15] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3915,
		/* .mestype = */ 42,
		/* .mesnuma = */ 15,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [16] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ -1,
		/* .mestype = */ 42,
		/* .mesnuma = */ 16,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [17] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3925,
		/* .mestype = */ 42,
		/* .mesnuma = */ 42,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [18] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3906,
		/* .mestype = */ 42,
		/* .mesnuma = */ 25,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [19] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3913,
		/* .mestype = */ 42,
		/* .mesnuma = */ 2,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [20] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3913,
		/* .mestype = */ 42,
		/* .mesnuma = */ 41,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [21] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3911,
		/* .mestype = */ 42,
		/* .mesnuma = */ 34,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [22] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3912,
		/* .mestype = */ 42,
		/* .mesnuma = */ 36,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [23] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ -1,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [24] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ -1,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [25] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ -1,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [26] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 630.f,
		/* .Point = */ 1000,
		/* .image = */ -1,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [27] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ -1,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [28] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3912,
		/* .mestype = */ 42,
		/* .mesnuma = */ 17,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [29] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3907,
		/* .mestype = */ 42,
		/* .mesnuma = */ 37,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [30] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3908,
		/* .mestype = */ 42,
		/* .mesnuma = */ 32,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [31] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3921,
		/* .mestype = */ 42,
		/* .mesnuma = */ 27,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [32] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ 3923,
		/* .mestype = */ 42,
		/* .mesnuma = */ 29,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [33] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 1000,
		/* .image = */ 3924,
		/* .mestype = */ 42,
		/* .mesnuma = */ 31,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [34] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1500.f,
		/* .Point = */ 0,
		/* .image = */ -1,
		/* .mestype = */ 42,
		/* .mesnuma = */ 12,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [35] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 1000.f,
		/* .Point = */ 0,
		/* .image = */ -1,
		/* .mestype = */ -1,
		/* .mesnuma = */ 12,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ -1
	},
	/* [36] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4230,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 116
	},
	/* [37] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4231,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 117
	},
	/* [38] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4232,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 118
	},
	/* [39] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4233,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 119
	},
	/* [40] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4234,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 120
	},
	/* [41] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4235,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 121
	},
	/* [42] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4236,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 122
	},
	/* [43] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4237,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 123
	},
	/* [44] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4238,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 124
	},
	/* [45] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4239,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 125
	},
	/* [46] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4240,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 126
	},
	/* [47] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4241,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 127
	},
	/* [48] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4242,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 128
	},
	/* [49] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4243,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 129
	},
	/* [50] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4244,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 130
	},
	/* [51] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4245,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 131
	},
	/* [52] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4246,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 132
	},
	/* [53] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4247,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 133
	},
	/* [54] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4248,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 134
	},
	/* [55] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4249,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 135
	},
	/* [56] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4250,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 136
	},
	/* [57] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4251,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 137
	},
	/* [58] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4252,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 138
	},
	/* [59] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4253,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 139
	},
	/* [60] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4254,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 140
	},
	/* [61] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4255,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 141
	},
	/* [62] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4256,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 142
	},
	/* [63] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4257,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 143
	},
	/* [64] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4258,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 144
	},
	/* [65] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4259,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 145
	},
	/* [66] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4260,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 146
	},
	/* [67] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4261,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 147
	},
	/* [68] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4262,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 148
	},
	/* [69] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4263,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 149
	},
	/* [70] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4264,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 150
	},
	/* [71] = */ {
		/* .Top = */ 0.f,
		/* .Bottom = */ 0.f,
		/* .Dist = */ 10000.f,
		/* .Point = */ 1000,
		/* .image = */ 4265,
		/* .mestype = */ -1,
		/* .mesnuma = */ -1,
		/* .f_finder = */ BITFIELD,
		/* .f_filament = */ BITFIELD,
		/* .f_deform = */ BITFIELD,
		/* .f_sound = */ BITFIELD,
		/* .f_seal_ghost = */ BITFIELD,
		/* .f_unlock_ghost = */ BITFIELD,
		/* .ghost_list_rel_no = */ 151
	}
};

static float pd_default_spd = 1.f;
static float pd_default_rate = 1.f;
static float pdb_default_spd = 1.f;
static float pdb_default_rate = 1.f;

CSYSTEM_SND_BUF_PLAY furn_sound_player[2] = {
	/* [0] = */ {
		/* base class 0 = */ {
			/* .play_id = */ 0
		}
	},
	/* [1] = */ {
		/* base class 0 = */ {
			/* .play_id = */ 0
		}
	}
};

SPRT_DAT hint_dat[4] = {
	/* [0] = */ {
		/* .tex0 = */ 0,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 0,
		/* .h = */ 0,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 0,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [1] = */ {
		/* .tex0 = */ 2308059084113427708,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 384,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [2] = */ {
		/* .tex0 = */ 2308059084113427708,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 384,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	},
	/* [3] = */ {
		/* .tex0 = */ 2308059084113427708,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 384,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 1
	}
};

static BIT_FLAGS<72> photo_dat_save;
static PHOTO_DAT_OBJ_WRK pd_obj_wrk[4];
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
static MDAT_OBJ *p_centerest_obj;
static int seal_ghost_draw_lock;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c2fe8;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)s_void__003f3838);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)s_char__003f3840);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    Work__t12CWrkVariable3Zsi0i_128_((CWrkVariable<short_int,0,128> *)"unsigned int*");
  }
  return (uint **)0x0;
}

int GetPhotoDatNum() {
  return 0x48;
}

void photo_datSetSave(MC_SAVE_DATA *save) {
  save->size = 0xc;
  save->addr = (uchar *)&photo_dat_save;
  return;
}

void photo_datInit() {
	static char __FUNCTION__[14] = {
		/* [0] = */ 112,
		/* [1] = */ 104,
		/* [2] = */ 111,
		/* [3] = */ 116,
		/* [4] = */ 111,
		/* [5] = */ 95,
		/* [6] = */ 100,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 73,
		/* [10] = */ 110,
		/* [11] = */ 105,
		/* [12] = */ 116,
		/* [13] = */ 0
	};
	int i;
	
  int *piVar1;
  int iVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  iVar2 = 2;
  piVar1 = photo_dat_save.flag_32 + 2;
  do {
    iVar2 = iVar2 + -1;
    *piVar1 = 0;
    piVar1 = piVar1 + -1;
  } while (-1 < iVar2);
  return;
}

void photo_datFlgUp(int photo_dat_no) {
	int idx;
	int bit;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (0x47 < photo_dat_no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("FlgUp Illegal Access %d MAX %d");
  }
  photo_dat_save.flag_32[photo_dat_no >> 5] =
       photo_dat_save.flag_32[photo_dat_no >> 5] | 1 << (photo_dat_no & 0x1fU);
  return;
}

int photo_datIsUp(int photo_dat_no) {
	int idx;
	int bit;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (0x47 < photo_dat_no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("IsUp Illegal Access %d MAX %d");
  }
  return photo_dat_save.flag_32[photo_dat_no >> 5] & 1 << (photo_dat_no & 0x1fU);
}

void photo_datFlgDown(int photo_dat_no) {
	int idx;
	int bit;
	
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  if (0x47 < photo_dat_no) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("FlgDown Illegal Access %d MAX %d");
  }
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
  photo_dat_save.flag_32[photo_dat_no >> 5] =
       photo_dat_save.flag_32[photo_dat_no >> 5] & ~(1 << (photo_dat_no & 0x1fU));
                    /* end of inlined section */
  return;
}

void photo_datObjStart(MDAT_OBJ *p_obj) {
	static char __FUNCTION__[18] = {
		/* [0] = */ 112,
		/* [1] = */ 104,
		/* [2] = */ 111,
		/* [3] = */ 116,
		/* [4] = */ 111,
		/* [5] = */ 95,
		/* [6] = */ 100,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 79,
		/* [10] = */ 98,
		/* [11] = */ 106,
		/* [12] = */ 83,
		/* [13] = */ 116,
		/* [14] = */ 97,
		/* [15] = */ 114,
		/* [16] = */ 116,
		/* [17] = */ 0
	};
	int i;
	
  MDAT_OBJ **ppMVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    iVar3 = iVar3 + 1;
    ppMVar1 = (MDAT_OBJ **)((int)pd_obj_wrk[0].pos + iVar2 + -0x10);
    if (*ppMVar1 == (MDAT_OBJ *)0x0) {
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
      *ppMVar1 = p_obj;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
      *(undefined2 *)((int)pd_obj_wrk[0].pos + iVar2 + -6) = 0;
                    /* end of inlined section */
      *(undefined2 *)((int)pd_obj_wrk[0].pos + iVar2 + -8) = 0;
      return;
    }
    if (3 < iVar3) break;
    iVar2 = iVar3 * 0x20;
  }
  SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
  PrintAssertReal("photo_datObjStart Cannot Get Wrk");
  return;
}

void photo_datRelease() {
  return;
}

static void furn_soundStop() {
	int i;
	
  CSYSTEM_SND_BUF_PLAY *pCVar1;
  int iVar2;
  
  pCVar1 = furn_sound_player;
  iVar2 = 1;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    iVar2 = iVar2 + -1;
    SndBufFadeStop((pCVar1->field0_0x0).play_id,1);
    (pCVar1->field0_0x0).play_id = 0x300000;
                    /* end of inlined section */
    pCVar1 = pCVar1 + 1;
  } while (-1 < iVar2);
  return;
}

void CheckHintSE(MDAT_OBJ *plyr_wrk_nearest_furn, float *plyr_wrk_nearest_furn_pos) {
	float f;
	float dist;
	int pow;
	int i;
	
  int iVar1;
  int iVar2;
  int vol;
  float fVar3;
  
  if ((plyr_wrk_nearest_furn == (MDAT_OBJ *)0x0) ||
     ((*(uint *)&photo_dat[plyr_wrk_nearest_furn->PhotoAble].field_0x14 >> 3 & 1) == 0)) {
    furn_soundStop__Fv();
  }
  else {
    fVar3 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,plyr_wrk_nearest_furn_pos);
    if (1000.0 < fVar3) {
      furn_soundStop__Fv();
      return;
    }
    vol = (int)(((1000.0 - fVar3) * DAT_003ee690) / 1000.0);
    iVar2 = 0;
    while (iVar2 < 2) {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
      iVar1 = furn_sound_player[iVar2].field0_0x0.play_id;
      if (iVar1 == 0x300000) {
                    /* end of inlined section */
        if (photo_dat[plyr_wrk_nearest_furn->PhotoAble].ghost_list_rel_no < 0xb1) {
          iVar1 = 0xe;
                    /* inlined from ../../system/os/system.h */
        }
        else {
          iVar1 = 0xc;
        }
        iVar1 = SystemBankPlay__FiiiiP11_SND_3D_SETii(iVar1,1,1,0,(_SND_3D_SET *)0x0,vol,0x1000);
        furn_sound_player[iVar2].field0_0x0.play_id = iVar1;
                    /* end of inlined section */
        iVar2 = iVar2 + 1;
      }
      else {
        SndBufVolFade(iVar1,vol,1);
        iVar2 = iVar2 + 1;
      }
    }
  }
  return;
}

float photo_datGetFurnPowerDegree() {
  return 0.0;
}

void photo_datObjInit() {
	int i;
	
  _PHOTO_DAT_OBJ_WRK *p_Var1;
  int iVar2;
  
  iVar2 = 3;
  p_Var1 = pd_obj_wrk + 3;
  do {
    iVar2 = iVar2 + -1;
    p_Var1->p_obj = (MDAT_OBJ *)0x0;
    p_Var1 = p_Var1 + -1;
  } while (-1 < iVar2);
  p_centerest_obj = (MDAT_OBJ *)0x0;
  seal_ghost_draw_lock = 0;
  return;
}

void photo_datObjSetSave(MC_SAVE_DATA *save) {
  save->size = 0x80;
  save->addr = (uchar *)pd_obj_wrk;
  return;
}

void photo_datObjMain() {
	static char __FUNCTION__[17] = {
		/* [0] = */ 112,
		/* [1] = */ 104,
		/* [2] = */ 111,
		/* [3] = */ 116,
		/* [4] = */ 111,
		/* [5] = */ 95,
		/* [6] = */ 100,
		/* [7] = */ 97,
		/* [8] = */ 116,
		/* [9] = */ 79,
		/* [10] = */ 98,
		/* [11] = */ 106,
		/* [12] = */ 77,
		/* [13] = */ 97,
		/* [14] = */ 105,
		/* [15] = */ 110,
		/* [16] = */ 0
	};
	MDAT_OBJ *p_nearest_obj;
	float nearest_pos[4];
	float min2d;
	float min3d;
	int i;
	float dist;
	float dist2d;
	PhotoData *ppd;
	short int iValue;
	
  MDAT_OBJ *pMVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  float *p1;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float nearest_pos [4];
  float dist2d;
  MDAT_OBJ *p_nearest_obj;
  
  iVar5 = 0;
  p_centerest_obj = (MDAT_OBJ *)0x0;
  SetHint__9CFilamentf(&m_plyr_camera.filament,0.0);
  SetHintFlg__13CCenterCirclei(&m_plyr_camera.center_circle,0);
  iVar7 = 0x4bbb58;
  p1 = pd_obj_wrk[0].pos;
  p_nearest_obj = (MDAT_OBJ *)0x0;
  fVar9 = DAT_003ee698;
  fVar10 = DAT_003ee694;
  do {
    pMVar1 = ((_PHOTO_DAT_OBJ_WRK *)(p1 + -4))->p_obj;
    if ((pMVar1 != (MDAT_OBJ *)0x0) && (pMVar1->PhotoAble != 0)) {
      if ((uint)pMVar1->PhotoAble < 0x48) {
        fVar8 = pMVar1->Pos[0];
      }
      else {
        _SetLineInfo__FPCciT0T0
                  ("photo_dat.c",0xfb,"photo_datObjMain",
                   "(p_obj->PhotoAble < PHOTO_DAT_NUM && p_obj->PhotoAble >= 0)");
        g3ddbgAssert__FbPCce((uint)pMVar1->PhotoAble < 0x48,"Illegal Val");
        fVar8 = pMVar1->Pos[0];
      }
      iVar2 = pMVar1->PhotoAble;
      *p1 = fVar8;
      p1[1] = pMVar1->Pos[1];
      fVar8 = pMVar1->Pos[2];
      p1[3] = 1.0;
      p1[2] = fVar8;
      fVar8 = GetDistV__FPCfT0(plyr_wrk.cmn_wrk.mbox.pos,p1);
      if (fVar8 < fVar9) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
        nearest_pos[2] = p1[2];
        nearest_pos[3] = p1[3];
        nearest_pos[0] = (float)*(undefined8 *)p1;
        nearest_pos[1] = (float)((ulong)*(undefined8 *)p1 >> 0x20);
                    /* end of inlined section */
        fVar9 = fVar8;
        p_nearest_obj = pMVar1;
      }
      iVar4 = PlayerModeIsFinder__Fv();
      if (iVar4 == 0) {
LAB_00232b14:
        uVar6 = *(uint *)&photo_dat[iVar2].field_0x14;
      }
      else {
        iVar4 = InFinderFrameSub__FPfT0ff(p1,&dist2d,DAT_003ee69c,photo_dat[iVar2].Dist);
        if (iVar4 == 0) {
          uVar3 = 0xfffc;
        }
        else {
                    /* inlined from camera_power_up.h */
          fVar8 = GetRadiusRate__14CCameraPowerUp(&m_plyr_camera.camera_power_up);
          uVar3 = 0xfffc;
          if (dist2d <= fVar8 * 108.0) {
                    /* end of inlined section */
            fVar8 = dist2d;
            if (fVar10 <= dist2d) {
              fVar8 = fVar10;
              pMVar1 = p_centerest_obj;
            }
            p_centerest_obj = pMVar1;
            SetHintFlg__13CCenterCirclei(&m_plyr_camera.center_circle,1);
            uVar3 = 4;
            fVar10 = fVar8;
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
          }
        }
        *(ushort *)((int)p1 + -6) = uVar3;
                    /* end of inlined section */
        uVar6 = *(uint *)&photo_dat[iVar2].field_0x14;
        if (((uVar6 & 0x10) != 0) && (seal_ghost_draw_lock == 0)) {
          Work__t12CWrkVariable3Zsi0i_128_(iVar7);
                    /* inlined from /home/zero_rom/zero2np/src/common/variable.h */
                    /* end of inlined section */
          SetEffects__Fiie(0x22,1);
          goto LAB_00232b14;
        }
      }
      if ((uVar6 & 4) != 0) {
        if ((uVar6 & 0x10) == 0) {
          pd_default_spd = 1.0;
          pd_default_rate = 1.0;
          SetEffects__Fiie(0x18,1);
        }
        else {
          pdb_default_spd = 0.0;
          pdb_default_rate = 0.0;
          SetEffects__Fiie(0x18,1);
          pd_default_spd = DAT_003ee6a0;
          pd_default_rate = DAT_003ee6a4;
          SetEffects__Fiie(0x18,1);
        }
      }
    }
    iVar5 = iVar5 + 1;
    p1 = p1 + 8;
    iVar7 = iVar7 + 0x20;
    if (3 < iVar5) {
      CheckHintSE__FP8MDAT_OBJPf(p_nearest_obj,nearest_pos);
      if (p_nearest_obj != (MDAT_OBJ *)0x0) {
        fVar9 = CulcEP3__FPf(nearest_pos);
        SetHint__9CFilamentf(&m_plyr_camera.filament,fVar9);
      }
      iVar5 = PlayerModeIsFinder__Fv();
      if (iVar5 == 0) {
        seal_ghost_draw_lock = 0;
      }
      return;
    }
  } while( true );
}

MDAT_OBJ* photo_datObjIsPhotoAble() {
  return p_centerest_obj;
}

int photo_datObjIsRespondFilament() {
  int iVar1;
  
  if (p_centerest_obj == (MDAT_OBJ *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 1;
    if ((*(ushort *)&photo_dat[p_centerest_obj->PhotoAble].field_0x14 & 1) == 0) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

void photo_datObjRelease() {
  furn_soundStop__Fv();
  return;
}

void photo_datObjFadeOutSE(int iFrame) {
	int i;
	
  CSYSTEM_SND_BUF_PLAY *pCVar1;
  int iVar2;
  
  pCVar1 = furn_sound_player;
  iVar2 = 1;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
    iVar2 = iVar2 + -1;
    SndBufFadeStop((pCVar1->field0_0x0).play_id,iFrame);
    (pCVar1->field0_0x0).play_id = 0x300000;
                    /* end of inlined section */
    pCVar1 = pCVar1 + 1;
  } while (-1 < iVar2);
  return;
}

void photo_datObjEnd(MDAT_OBJ *p_obj) {
	int i;
	
  _PHOTO_DAT_OBJ_WRK *p_Var1;
  int iVar2;
  
  iVar2 = 0;
  p_Var1 = pd_obj_wrk;
  do {
    if (p_Var1->p_obj == p_obj) {
      p_Var1->p_obj = (MDAT_OBJ *)0x0;
      return;
    }
    iVar2 = iVar2 + 1;
    p_Var1 = p_Var1 + 1;
  } while (iVar2 < 4);
  return;
}

void photo_datObjSealGhostDrawLock() {
  seal_ghost_draw_lock = 1;
  return;
}

void CWrkVariable<short, 0, 128>::Work() {
	int iVal;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int i;
	
  int *piVar1;
  _PHOTO_DAT_OBJ_WRK *p_Var2;
  int iVar3;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 1) {
      iVar3 = 2;
      piVar1 = photo_dat_save.flag_32 + 2;
      do {
        iVar3 = iVar3 + -1;
        *piVar1 = 0;
        piVar1 = piVar1 + -1;
      } while (-1 < iVar3);
    }
    if (__initialize_p == 1) {
      iVar3 = 3;
      p_Var2 = pd_obj_wrk;
      do {
                    /* end of inlined section */
        iVar3 = iVar3 + -1;
        (p_Var2->mGhostAlpha).mAdd = 0;
        (p_Var2->mGhostAlpha).mValue = 0;
        p_Var2 = p_Var2 + 1;
      } while (iVar3 != -1);
    }
    if (__initialize_p == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/common/zero2_util.h */
      furn_sound_player[1].field0_0x0.play_id = (CSND_BUF_PLAY)0x300000;
      furn_sound_player[0].field0_0x0.play_id = (CSND_BUF_PLAY)0x300000;
    }
  }
                    /* end of inlined section */
  return;
}

static void global constructors keyed to photo_rng_tbl() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
