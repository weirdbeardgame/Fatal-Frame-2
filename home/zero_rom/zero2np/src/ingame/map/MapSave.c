// STATUS: NOT STARTED

#include "MapSave.h"

typedef struct {
	int labelID;
	char HitCheck;
	char PhotoAble;
	char Visible;
	char ActionType;
	short int Action;
	short int Weight;
	int Attribute;
} MAPSAVE_HEAD;

typedef struct {
	int AreaID;
	MAPSAVE_HEAD *head;
} MAPSAVE_JMP_TBL;

static MAPSAVE_HEAD MapSaveList[673] = {
	/* [0] = */ {
		/* .labelID = */ 7020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [1] = */ {
		/* .labelID = */ 7021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [2] = */ {
		/* .labelID = */ 7022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [3] = */ {
		/* .labelID = */ 7023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [4] = */ {
		/* .labelID = */ 7024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [5] = */ {
		/* .labelID = */ 7025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [6] = */ {
		/* .labelID = */ 7026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [7] = */ {
		/* .labelID = */ 7027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [8] = */ {
		/* .labelID = */ 7028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [9] = */ {
		/* .labelID = */ 7029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [10] = */ {
		/* .labelID = */ 7030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [11] = */ {
		/* .labelID = */ 7033,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [12] = */ {
		/* .labelID = */ 7046,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [13] = */ {
		/* .labelID = */ 7047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [14] = */ {
		/* .labelID = */ 7048,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [15] = */ {
		/* .labelID = */ 7049,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [16] = */ {
		/* .labelID = */ 7050,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [17] = */ {
		/* .labelID = */ 7051,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [18] = */ {
		/* .labelID = */ 7052,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [19] = */ {
		/* .labelID = */ 7053,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [20] = */ {
		/* .labelID = */ 7115,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [21] = */ {
		/* .labelID = */ 7116,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [22] = */ {
		/* .labelID = */ 7118,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [23] = */ {
		/* .labelID = */ 7120,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [24] = */ {
		/* .labelID = */ 8028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [25] = */ {
		/* .labelID = */ 8029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [26] = */ {
		/* .labelID = */ 8030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [27] = */ {
		/* .labelID = */ 8031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [28] = */ {
		/* .labelID = */ 8032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [29] = */ {
		/* .labelID = */ 8033,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [30] = */ {
		/* .labelID = */ 8034,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [31] = */ {
		/* .labelID = */ 8035,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [32] = */ {
		/* .labelID = */ 8036,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [33] = */ {
		/* .labelID = */ 8037,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [34] = */ {
		/* .labelID = */ 8038,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [35] = */ {
		/* .labelID = */ 8098,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [36] = */ {
		/* .labelID = */ 8099,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [37] = */ {
		/* .labelID = */ 8100,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [38] = */ {
		/* .labelID = */ 8109,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [39] = */ {
		/* .labelID = */ 8111,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [40] = */ {
		/* .labelID = */ 8112,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [41] = */ {
		/* .labelID = */ 8113,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [42] = */ {
		/* .labelID = */ 8114,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [43] = */ {
		/* .labelID = */ 8115,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [44] = */ {
		/* .labelID = */ 8116,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [45] = */ {
		/* .labelID = */ 8117,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [46] = */ {
		/* .labelID = */ 8118,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [47] = */ {
		/* .labelID = */ 8120,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [48] = */ {
		/* .labelID = */ 8130,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [49] = */ {
		/* .labelID = */ 8131,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [50] = */ {
		/* .labelID = */ 8132,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [51] = */ {
		/* .labelID = */ 8134,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [52] = */ {
		/* .labelID = */ 8137,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [53] = */ {
		/* .labelID = */ 8138,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [54] = */ {
		/* .labelID = */ 9020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [55] = */ {
		/* .labelID = */ 9021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [56] = */ {
		/* .labelID = */ 9022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [57] = */ {
		/* .labelID = */ 9023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [58] = */ {
		/* .labelID = */ 9024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [59] = */ {
		/* .labelID = */ 9062,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [60] = */ {
		/* .labelID = */ 9067,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [61] = */ {
		/* .labelID = */ 9104,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [62] = */ {
		/* .labelID = */ 9107,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [63] = */ {
		/* .labelID = */ 9112,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [64] = */ {
		/* .labelID = */ 9117,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [65] = */ {
		/* .labelID = */ 9131,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [66] = */ {
		/* .labelID = */ 9132,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [67] = */ {
		/* .labelID = */ 9134,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [68] = */ {
		/* .labelID = */ 9141,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [69] = */ {
		/* .labelID = */ 9142,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [70] = */ {
		/* .labelID = */ 60085,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [71] = */ {
		/* .labelID = */ 61058,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [72] = */ {
		/* .labelID = */ 61062,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [73] = */ {
		/* .labelID = */ 61064,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [74] = */ {
		/* .labelID = */ 62008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [75] = */ {
		/* .labelID = */ 62043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [76] = */ {
		/* .labelID = */ 62044,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [77] = */ {
		/* .labelID = */ 62079,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [78] = */ {
		/* .labelID = */ 62080,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [79] = */ {
		/* .labelID = */ 62082,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [80] = */ {
		/* .labelID = */ 62085,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [81] = */ {
		/* .labelID = */ 62086,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [82] = */ {
		/* .labelID = */ 62097,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [83] = */ {
		/* .labelID = */ 11036,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [84] = */ {
		/* .labelID = */ 11037,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [85] = */ {
		/* .labelID = */ 11038,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [86] = */ {
		/* .labelID = */ 11048,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [87] = */ {
		/* .labelID = */ 11049,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [88] = */ {
		/* .labelID = */ 11055,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [89] = */ {
		/* .labelID = */ 11056,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [90] = */ {
		/* .labelID = */ 10010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [91] = */ {
		/* .labelID = */ 10011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [92] = */ {
		/* .labelID = */ 10040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [93] = */ {
		/* .labelID = */ 10041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [94] = */ {
		/* .labelID = */ 10042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [95] = */ {
		/* .labelID = */ 10043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [96] = */ {
		/* .labelID = */ 10044,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [97] = */ {
		/* .labelID = */ 10047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [98] = */ {
		/* .labelID = */ 10048,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [99] = */ {
		/* .labelID = */ 10049,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [100] = */ {
		/* .labelID = */ 10050,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [101] = */ {
		/* .labelID = */ 10051,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [102] = */ {
		/* .labelID = */ 10052,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [103] = */ {
		/* .labelID = */ 12,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [104] = */ {
		/* .labelID = */ 14,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [105] = */ {
		/* .labelID = */ 15,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [106] = */ {
		/* .labelID = */ 20,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [107] = */ {
		/* .labelID = */ 45,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [108] = */ {
		/* .labelID = */ 46,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [109] = */ {
		/* .labelID = */ 50,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [110] = */ {
		/* .labelID = */ 51,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [111] = */ {
		/* .labelID = */ 53,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [112] = */ {
		/* .labelID = */ 54,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [113] = */ {
		/* .labelID = */ 57,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [114] = */ {
		/* .labelID = */ 60,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [115] = */ {
		/* .labelID = */ 62,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [116] = */ {
		/* .labelID = */ 1060,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [117] = */ {
		/* .labelID = */ 1061,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [118] = */ {
		/* .labelID = */ 1096,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [119] = */ {
		/* .labelID = */ 1097,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [120] = */ {
		/* .labelID = */ 1098,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [121] = */ {
		/* .labelID = */ 1101,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [122] = */ {
		/* .labelID = */ 1102,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [123] = */ {
		/* .labelID = */ 1109,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [124] = */ {
		/* .labelID = */ 1110,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [125] = */ {
		/* .labelID = */ 6024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [126] = */ {
		/* .labelID = */ 2008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [127] = */ {
		/* .labelID = */ 2018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [128] = */ {
		/* .labelID = */ 2021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [129] = */ {
		/* .labelID = */ 2027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [130] = */ {
		/* .labelID = */ 2028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [131] = */ {
		/* .labelID = */ 2032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [132] = */ {
		/* .labelID = */ 2033,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [133] = */ {
		/* .labelID = */ 3011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [134] = */ {
		/* .labelID = */ 3027,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [135] = */ {
		/* .labelID = */ 3037,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [136] = */ {
		/* .labelID = */ 3045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [137] = */ {
		/* .labelID = */ 3046,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [138] = */ {
		/* .labelID = */ 3047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [139] = */ {
		/* .labelID = */ 4026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [140] = */ {
		/* .labelID = */ 4027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [141] = */ {
		/* .labelID = */ 4028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [142] = */ {
		/* .labelID = */ 4041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [143] = */ {
		/* .labelID = */ 4042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [144] = */ {
		/* .labelID = */ 4043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [145] = */ {
		/* .labelID = */ 4047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [146] = */ {
		/* .labelID = */ 4049,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [147] = */ {
		/* .labelID = */ 4055,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [148] = */ {
		/* .labelID = */ 4058,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [149] = */ {
		/* .labelID = */ 5011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [150] = */ {
		/* .labelID = */ 5045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [151] = */ {
		/* .labelID = */ 5052,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [152] = */ {
		/* .labelID = */ 5053,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [153] = */ {
		/* .labelID = */ 5066,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [154] = */ {
		/* .labelID = */ 5067,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [155] = */ {
		/* .labelID = */ 5068,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [156] = */ {
		/* .labelID = */ 5069,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [157] = */ {
		/* .labelID = */ 5070,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [158] = */ {
		/* .labelID = */ 5072,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [159] = */ {
		/* .labelID = */ 5075,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [160] = */ {
		/* .labelID = */ 5077,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [161] = */ {
		/* .labelID = */ 5078,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [162] = */ {
		/* .labelID = */ 48038,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [163] = */ {
		/* .labelID = */ 48039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [164] = */ {
		/* .labelID = */ 48040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [165] = */ {
		/* .labelID = */ 48041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [166] = */ {
		/* .labelID = */ 48042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [167] = */ {
		/* .labelID = */ 48043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [168] = */ {
		/* .labelID = */ 48059,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [169] = */ {
		/* .labelID = */ 48060,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [170] = */ {
		/* .labelID = */ 48077,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [171] = */ {
		/* .labelID = */ 49024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [172] = */ {
		/* .labelID = */ 49025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [173] = */ {
		/* .labelID = */ 49049,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [174] = */ {
		/* .labelID = */ 49051,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [175] = */ {
		/* .labelID = */ 49052,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [176] = */ {
		/* .labelID = */ 49053,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [177] = */ {
		/* .labelID = */ 49054,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [178] = */ {
		/* .labelID = */ 49057,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 1,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [179] = */ {
		/* .labelID = */ 49058,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [180] = */ {
		/* .labelID = */ 49078,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 23,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [181] = */ {
		/* .labelID = */ 49079,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 24,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [182] = */ {
		/* .labelID = */ 50026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [183] = */ {
		/* .labelID = */ 50027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [184] = */ {
		/* .labelID = */ 50028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [185] = */ {
		/* .labelID = */ 50029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [186] = */ {
		/* .labelID = */ 50030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [187] = */ {
		/* .labelID = */ 50031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [188] = */ {
		/* .labelID = */ 50044,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [189] = */ {
		/* .labelID = */ 50045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [190] = */ {
		/* .labelID = */ 51028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 4,
		/* .Action = */ 1,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [191] = */ {
		/* .labelID = */ 51029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [192] = */ {
		/* .labelID = */ 51030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [193] = */ {
		/* .labelID = */ 51031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [194] = */ {
		/* .labelID = */ 51039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [195] = */ {
		/* .labelID = */ 51064,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 25,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [196] = */ {
		/* .labelID = */ 51065,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 26,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [197] = */ {
		/* .labelID = */ 52012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [198] = */ {
		/* .labelID = */ 52013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [199] = */ {
		/* .labelID = */ 52014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [200] = */ {
		/* .labelID = */ 52015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [201] = */ {
		/* .labelID = */ 52016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [202] = */ {
		/* .labelID = */ 52018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [203] = */ {
		/* .labelID = */ 52019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [204] = */ {
		/* .labelID = */ 53012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [205] = */ {
		/* .labelID = */ 53013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [206] = */ {
		/* .labelID = */ 53014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [207] = */ {
		/* .labelID = */ 53023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [208] = */ {
		/* .labelID = */ 54043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [209] = */ {
		/* .labelID = */ 54056,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [210] = */ {
		/* .labelID = */ 55022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [211] = */ {
		/* .labelID = */ 55030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 27,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [212] = */ {
		/* .labelID = */ 56026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [213] = */ {
		/* .labelID = */ 56027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [214] = */ {
		/* .labelID = */ 57020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [215] = */ {
		/* .labelID = */ 57021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [216] = */ {
		/* .labelID = */ 57022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [217] = */ {
		/* .labelID = */ 57023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [218] = */ {
		/* .labelID = */ 57024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [219] = */ {
		/* .labelID = */ 57032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [220] = */ {
		/* .labelID = */ 58028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [221] = */ {
		/* .labelID = */ 58048,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [222] = */ {
		/* .labelID = */ 58050,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [223] = */ {
		/* .labelID = */ 59039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [224] = */ {
		/* .labelID = */ 59040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [225] = */ {
		/* .labelID = */ 59041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [226] = */ {
		/* .labelID = */ 59042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [227] = */ {
		/* .labelID = */ 59043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [228] = */ {
		/* .labelID = */ 59044,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [229] = */ {
		/* .labelID = */ 59045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [230] = */ {
		/* .labelID = */ 59062,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [231] = */ {
		/* .labelID = */ 59063,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [232] = */ {
		/* .labelID = */ 59064,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [233] = */ {
		/* .labelID = */ 59065,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [234] = */ {
		/* .labelID = */ 59083,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [235] = */ {
		/* .labelID = */ 59085,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [236] = */ {
		/* .labelID = */ 35007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [237] = */ {
		/* .labelID = */ 35008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [238] = */ {
		/* .labelID = */ 35012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [239] = */ {
		/* .labelID = */ 36039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [240] = */ {
		/* .labelID = */ 36040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 1,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [241] = */ {
		/* .labelID = */ 36042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [242] = */ {
		/* .labelID = */ 36043,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [243] = */ {
		/* .labelID = */ 36044,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [244] = */ {
		/* .labelID = */ 36064,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [245] = */ {
		/* .labelID = */ 37011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [246] = */ {
		/* .labelID = */ 37012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [247] = */ {
		/* .labelID = */ 37013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [248] = */ {
		/* .labelID = */ 37014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [249] = */ {
		/* .labelID = */ 37015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [250] = */ {
		/* .labelID = */ 37016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [251] = */ {
		/* .labelID = */ 37033,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [252] = */ {
		/* .labelID = */ 37035,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [253] = */ {
		/* .labelID = */ 37036,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [254] = */ {
		/* .labelID = */ 37044,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [255] = */ {
		/* .labelID = */ 37045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [256] = */ {
		/* .labelID = */ 37056,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [257] = */ {
		/* .labelID = */ 37057,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [258] = */ {
		/* .labelID = */ 37058,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [259] = */ {
		/* .labelID = */ 38040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [260] = */ {
		/* .labelID = */ 38041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [261] = */ {
		/* .labelID = */ 38047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [262] = */ {
		/* .labelID = */ 39016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [263] = */ {
		/* .labelID = */ 39017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [264] = */ {
		/* .labelID = */ 39025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [265] = */ {
		/* .labelID = */ 40031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 6,
		/* .Action = */ 1,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [266] = */ {
		/* .labelID = */ 40032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [267] = */ {
		/* .labelID = */ 40053,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [268] = */ {
		/* .labelID = */ 40054,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [269] = */ {
		/* .labelID = */ 40062,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [270] = */ {
		/* .labelID = */ 40071,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [271] = */ {
		/* .labelID = */ 41011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [272] = */ {
		/* .labelID = */ 41012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [273] = */ {
		/* .labelID = */ 41019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [274] = */ {
		/* .labelID = */ 41022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [275] = */ {
		/* .labelID = */ 41031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [276] = */ {
		/* .labelID = */ 41032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [277] = */ {
		/* .labelID = */ 41033,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [278] = */ {
		/* .labelID = */ 41034,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [279] = */ {
		/* .labelID = */ 42019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [280] = */ {
		/* .labelID = */ 42020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [281] = */ {
		/* .labelID = */ 42022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [282] = */ {
		/* .labelID = */ 43020,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [283] = */ {
		/* .labelID = */ 43021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [284] = */ {
		/* .labelID = */ 43042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [285] = */ {
		/* .labelID = */ 43043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [286] = */ {
		/* .labelID = */ 43051,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [287] = */ {
		/* .labelID = */ 44023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [288] = */ {
		/* .labelID = */ 44032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [289] = */ {
		/* .labelID = */ 45022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [290] = */ {
		/* .labelID = */ 45027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [291] = */ {
		/* .labelID = */ 45028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [292] = */ {
		/* .labelID = */ 45048,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [293] = */ {
		/* .labelID = */ 45049,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [294] = */ {
		/* .labelID = */ 45054,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [295] = */ {
		/* .labelID = */ 45055,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [296] = */ {
		/* .labelID = */ 45056,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [297] = */ {
		/* .labelID = */ 45068,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [298] = */ {
		/* .labelID = */ 45069,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [299] = */ {
		/* .labelID = */ 46012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [300] = */ {
		/* .labelID = */ 46013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [301] = */ {
		/* .labelID = */ 46014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [302] = */ {
		/* .labelID = */ 47025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [303] = */ {
		/* .labelID = */ 47026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [304] = */ {
		/* .labelID = */ 47037,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [305] = */ {
		/* .labelID = */ 47038,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [306] = */ {
		/* .labelID = */ 12008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [307] = */ {
		/* .labelID = */ 12009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [308] = */ {
		/* .labelID = */ 12010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [309] = */ {
		/* .labelID = */ 12011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [310] = */ {
		/* .labelID = */ 12012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [311] = */ {
		/* .labelID = */ 12013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [312] = */ {
		/* .labelID = */ 12014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [313] = */ {
		/* .labelID = */ 12015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [314] = */ {
		/* .labelID = */ 12016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [315] = */ {
		/* .labelID = */ 12017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [316] = */ {
		/* .labelID = */ 12018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [317] = */ {
		/* .labelID = */ 12019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [318] = */ {
		/* .labelID = */ 12020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [319] = */ {
		/* .labelID = */ 12022,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [320] = */ {
		/* .labelID = */ 12023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [321] = */ {
		/* .labelID = */ 12038,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [322] = */ {
		/* .labelID = */ 12039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [323] = */ {
		/* .labelID = */ 13015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [324] = */ {
		/* .labelID = */ 13016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 4,
		/* .Action = */ 2,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [325] = */ {
		/* .labelID = */ 13017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [326] = */ {
		/* .labelID = */ 13018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [327] = */ {
		/* .labelID = */ 13020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [328] = */ {
		/* .labelID = */ 13042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [329] = */ {
		/* .labelID = */ 13050,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [330] = */ {
		/* .labelID = */ 13051,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [331] = */ {
		/* .labelID = */ 13055,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [332] = */ {
		/* .labelID = */ 13061,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [333] = */ {
		/* .labelID = */ 13064,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [334] = */ {
		/* .labelID = */ 14009,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [335] = */ {
		/* .labelID = */ 14010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [336] = */ {
		/* .labelID = */ 14014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 2,
		/* .Action = */ 1,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [337] = */ {
		/* .labelID = */ 14015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [338] = */ {
		/* .labelID = */ 14016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [339] = */ {
		/* .labelID = */ 14017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 2,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [340] = */ {
		/* .labelID = */ 14018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [341] = */ {
		/* .labelID = */ 14019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [342] = */ {
		/* .labelID = */ 14020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [343] = */ {
		/* .labelID = */ 14021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [344] = */ {
		/* .labelID = */ 14022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [345] = */ {
		/* .labelID = */ 14023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [346] = */ {
		/* .labelID = */ 14024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [347] = */ {
		/* .labelID = */ 14025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [348] = */ {
		/* .labelID = */ 14026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [349] = */ {
		/* .labelID = */ 14027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [350] = */ {
		/* .labelID = */ 14055,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [351] = */ {
		/* .labelID = */ 14056,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [352] = */ {
		/* .labelID = */ 14059,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [353] = */ {
		/* .labelID = */ 14060,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [354] = */ {
		/* .labelID = */ 14070,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [355] = */ {
		/* .labelID = */ 15013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [356] = */ {
		/* .labelID = */ 15014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [357] = */ {
		/* .labelID = */ 15015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [358] = */ {
		/* .labelID = */ 15016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [359] = */ {
		/* .labelID = */ 15017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [360] = */ {
		/* .labelID = */ 15018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [361] = */ {
		/* .labelID = */ 15019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [362] = */ {
		/* .labelID = */ 15020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [363] = */ {
		/* .labelID = */ 15021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [364] = */ {
		/* .labelID = */ 15022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [365] = */ {
		/* .labelID = */ 15023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [366] = */ {
		/* .labelID = */ 15024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [367] = */ {
		/* .labelID = */ 15025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [368] = */ {
		/* .labelID = */ 15026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [369] = */ {
		/* .labelID = */ 15027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [370] = */ {
		/* .labelID = */ 15028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [371] = */ {
		/* .labelID = */ 15035,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [372] = */ {
		/* .labelID = */ 15036,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [373] = */ {
		/* .labelID = */ 15037,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [374] = */ {
		/* .labelID = */ 15038,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [375] = */ {
		/* .labelID = */ 15039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [376] = */ {
		/* .labelID = */ 15040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [377] = */ {
		/* .labelID = */ 15041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [378] = */ {
		/* .labelID = */ 15042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [379] = */ {
		/* .labelID = */ 15043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [380] = */ {
		/* .labelID = */ 15044,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [381] = */ {
		/* .labelID = */ 15045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [382] = */ {
		/* .labelID = */ 15046,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [383] = */ {
		/* .labelID = */ 15047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [384] = */ {
		/* .labelID = */ 15048,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [385] = */ {
		/* .labelID = */ 15067,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [386] = */ {
		/* .labelID = */ 15068,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [387] = */ {
		/* .labelID = */ 15069,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [388] = */ {
		/* .labelID = */ 15077,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [389] = */ {
		/* .labelID = */ 15078,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [390] = */ {
		/* .labelID = */ 15080,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [391] = */ {
		/* .labelID = */ 15081,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [392] = */ {
		/* .labelID = */ 16011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [393] = */ {
		/* .labelID = */ 16012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [394] = */ {
		/* .labelID = */ 16013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [395] = */ {
		/* .labelID = */ 16014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [396] = */ {
		/* .labelID = */ 16015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [397] = */ {
		/* .labelID = */ 16016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [398] = */ {
		/* .labelID = */ 16017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [399] = */ {
		/* .labelID = */ 16031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [400] = */ {
		/* .labelID = */ 16032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [401] = */ {
		/* .labelID = */ 16039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [402] = */ {
		/* .labelID = */ 17025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [403] = */ {
		/* .labelID = */ 18011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [404] = */ {
		/* .labelID = */ 18017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [405] = */ {
		/* .labelID = */ 18018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [406] = */ {
		/* .labelID = */ 18020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 6,
		/* .Action = */ 1,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [407] = */ {
		/* .labelID = */ 18021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 7,
		/* .Action = */ 1,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [408] = */ {
		/* .labelID = */ 18022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 7,
		/* .Action = */ 1,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [409] = */ {
		/* .labelID = */ 18023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 6,
		/* .Action = */ 1,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [410] = */ {
		/* .labelID = */ 18024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 6,
		/* .Action = */ 1,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [411] = */ {
		/* .labelID = */ 18025,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [412] = */ {
		/* .labelID = */ 18026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [413] = */ {
		/* .labelID = */ 18027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [414] = */ {
		/* .labelID = */ 18028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [415] = */ {
		/* .labelID = */ 18029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [416] = */ {
		/* .labelID = */ 18030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [417] = */ {
		/* .labelID = */ 18031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [418] = */ {
		/* .labelID = */ 18062,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [419] = */ {
		/* .labelID = */ 18063,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [420] = */ {
		/* .labelID = */ 19033,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [421] = */ {
		/* .labelID = */ 21011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [422] = */ {
		/* .labelID = */ 21012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [423] = */ {
		/* .labelID = */ 21013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [424] = */ {
		/* .labelID = */ 21014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [425] = */ {
		/* .labelID = */ 21015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [426] = */ {
		/* .labelID = */ 21016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [427] = */ {
		/* .labelID = */ 21017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [428] = */ {
		/* .labelID = */ 21018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [429] = */ {
		/* .labelID = */ 21019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [430] = */ {
		/* .labelID = */ 21020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [431] = */ {
		/* .labelID = */ 21021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [432] = */ {
		/* .labelID = */ 21022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [433] = */ {
		/* .labelID = */ 21023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [434] = */ {
		/* .labelID = */ 21024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [435] = */ {
		/* .labelID = */ 21025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [436] = */ {
		/* .labelID = */ 21026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [437] = */ {
		/* .labelID = */ 21066,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [438] = */ {
		/* .labelID = */ 21069,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [439] = */ {
		/* .labelID = */ 21070,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [440] = */ {
		/* .labelID = */ 21073,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [441] = */ {
		/* .labelID = */ 21074,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [442] = */ {
		/* .labelID = */ 21075,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [443] = */ {
		/* .labelID = */ 21076,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [444] = */ {
		/* .labelID = */ 21080,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [445] = */ {
		/* .labelID = */ 21082,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [446] = */ {
		/* .labelID = */ 21083,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [447] = */ {
		/* .labelID = */ 21084,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [448] = */ {
		/* .labelID = */ 21085,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [449] = */ {
		/* .labelID = */ 21089,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [450] = */ {
		/* .labelID = */ 21091,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [451] = */ {
		/* .labelID = */ 21102,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [452] = */ {
		/* .labelID = */ 21103,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [453] = */ {
		/* .labelID = */ 22027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [454] = */ {
		/* .labelID = */ 23010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [455] = */ {
		/* .labelID = */ 23011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [456] = */ {
		/* .labelID = */ 23012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [457] = */ {
		/* .labelID = */ 23013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [458] = */ {
		/* .labelID = */ 23014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [459] = */ {
		/* .labelID = */ 23015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [460] = */ {
		/* .labelID = */ 23016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [461] = */ {
		/* .labelID = */ 23017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [462] = */ {
		/* .labelID = */ 23018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [463] = */ {
		/* .labelID = */ 23019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [464] = */ {
		/* .labelID = */ 23020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [465] = */ {
		/* .labelID = */ 23021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [466] = */ {
		/* .labelID = */ 23022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [467] = */ {
		/* .labelID = */ 23310,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [468] = */ {
		/* .labelID = */ 23311,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [469] = */ {
		/* .labelID = */ 23312,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [470] = */ {
		/* .labelID = */ 23313,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [471] = */ {
		/* .labelID = */ 23315,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [472] = */ {
		/* .labelID = */ 23321,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [473] = */ {
		/* .labelID = */ 24018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [474] = */ {
		/* .labelID = */ 24019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [475] = */ {
		/* .labelID = */ 25031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [476] = */ {
		/* .labelID = */ 26040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [477] = */ {
		/* .labelID = */ 26043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [478] = */ {
		/* .labelID = */ 27026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [479] = */ {
		/* .labelID = */ 28030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [480] = */ {
		/* .labelID = */ 28031,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [481] = */ {
		/* .labelID = */ 28032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [482] = */ {
		/* .labelID = */ 28056,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [483] = */ {
		/* .labelID = */ 28057,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [484] = */ {
		/* .labelID = */ 28065,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [485] = */ {
		/* .labelID = */ 28066,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [486] = */ {
		/* .labelID = */ 28069,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [487] = */ {
		/* .labelID = */ 29007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [488] = */ {
		/* .labelID = */ 29018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [489] = */ {
		/* .labelID = */ 29019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [490] = */ {
		/* .labelID = */ 29022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [491] = */ {
		/* .labelID = */ 30015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [492] = */ {
		/* .labelID = */ 30016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [493] = */ {
		/* .labelID = */ 30017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [494] = */ {
		/* .labelID = */ 30018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [495] = */ {
		/* .labelID = */ 30019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [496] = */ {
		/* .labelID = */ 30020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [497] = */ {
		/* .labelID = */ 30045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [498] = */ {
		/* .labelID = */ 30047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [499] = */ {
		/* .labelID = */ 30053,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [500] = */ {
		/* .labelID = */ 31005,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [501] = */ {
		/* .labelID = */ 31006,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [502] = */ {
		/* .labelID = */ 31007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [503] = */ {
		/* .labelID = */ 31008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [504] = */ {
		/* .labelID = */ 31009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [505] = */ {
		/* .labelID = */ 31010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [506] = */ {
		/* .labelID = */ 31022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [507] = */ {
		/* .labelID = */ 31023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [508] = */ {
		/* .labelID = */ 31025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [509] = */ {
		/* .labelID = */ 31028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [510] = */ {
		/* .labelID = */ 32008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [511] = */ {
		/* .labelID = */ 32009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [512] = */ {
		/* .labelID = */ 32010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [513] = */ {
		/* .labelID = */ 32011,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [514] = */ {
		/* .labelID = */ 32012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [515] = */ {
		/* .labelID = */ 32027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [516] = */ {
		/* .labelID = */ 32028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [517] = */ {
		/* .labelID = */ 33007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [518] = */ {
		/* .labelID = */ 33008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [519] = */ {
		/* .labelID = */ 33009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [520] = */ {
		/* .labelID = */ 34016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [521] = */ {
		/* .labelID = */ 34017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [522] = */ {
		/* .labelID = */ 34018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [523] = */ {
		/* .labelID = */ 34019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [524] = */ {
		/* .labelID = */ 34020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [525] = */ {
		/* .labelID = */ 34021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [526] = */ {
		/* .labelID = */ 34022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [527] = */ {
		/* .labelID = */ 34023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [528] = */ {
		/* .labelID = */ 34024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [529] = */ {
		/* .labelID = */ 34039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [530] = */ {
		/* .labelID = */ 34040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [531] = */ {
		/* .labelID = */ 34041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [532] = */ {
		/* .labelID = */ 34045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [533] = */ {
		/* .labelID = */ 65005,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [534] = */ {
		/* .labelID = */ 65006,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [535] = */ {
		/* .labelID = */ 65007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [536] = */ {
		/* .labelID = */ 65008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [537] = */ {
		/* .labelID = */ 65028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [538] = */ {
		/* .labelID = */ 65029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [539] = */ {
		/* .labelID = */ 65030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [540] = */ {
		/* .labelID = */ 65031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [541] = */ {
		/* .labelID = */ 65034,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [542] = */ {
		/* .labelID = */ 65035,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [543] = */ {
		/* .labelID = */ 64006,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [544] = */ {
		/* .labelID = */ 64007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [545] = */ {
		/* .labelID = */ 64009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [546] = */ {
		/* .labelID = */ 64010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [547] = */ {
		/* .labelID = */ 64011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [548] = */ {
		/* .labelID = */ 64012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [549] = */ {
		/* .labelID = */ 64013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [550] = */ {
		/* .labelID = */ 64014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [551] = */ {
		/* .labelID = */ 64015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [552] = */ {
		/* .labelID = */ 64016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [553] = */ {
		/* .labelID = */ 64017,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [554] = */ {
		/* .labelID = */ 64018,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [555] = */ {
		/* .labelID = */ 64019,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [556] = */ {
		/* .labelID = */ 64020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [557] = */ {
		/* .labelID = */ 64021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [558] = */ {
		/* .labelID = */ 64022,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [559] = */ {
		/* .labelID = */ 64023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [560] = */ {
		/* .labelID = */ 64024,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [561] = */ {
		/* .labelID = */ 64025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [562] = */ {
		/* .labelID = */ 64026,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [563] = */ {
		/* .labelID = */ 64027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [564] = */ {
		/* .labelID = */ 64028,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [565] = */ {
		/* .labelID = */ 64029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [566] = */ {
		/* .labelID = */ 64030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [567] = */ {
		/* .labelID = */ 64031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [568] = */ {
		/* .labelID = */ 64032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [569] = */ {
		/* .labelID = */ 64033,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [570] = */ {
		/* .labelID = */ 64034,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [571] = */ {
		/* .labelID = */ 64035,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [572] = */ {
		/* .labelID = */ 64036,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [573] = */ {
		/* .labelID = */ 64037,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [574] = */ {
		/* .labelID = */ 64038,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [575] = */ {
		/* .labelID = */ 64039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [576] = */ {
		/* .labelID = */ 64040,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [577] = */ {
		/* .labelID = */ 64041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [578] = */ {
		/* .labelID = */ 64042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [579] = */ {
		/* .labelID = */ 64043,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [580] = */ {
		/* .labelID = */ 64044,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [581] = */ {
		/* .labelID = */ 64045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [582] = */ {
		/* .labelID = */ 64046,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [583] = */ {
		/* .labelID = */ 64047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [584] = */ {
		/* .labelID = */ 64048,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [585] = */ {
		/* .labelID = */ 64049,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [586] = */ {
		/* .labelID = */ 64050,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [587] = */ {
		/* .labelID = */ 64051,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [588] = */ {
		/* .labelID = */ 64052,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [589] = */ {
		/* .labelID = */ 64053,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [590] = */ {
		/* .labelID = */ 64054,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [591] = */ {
		/* .labelID = */ 64055,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [592] = */ {
		/* .labelID = */ 64056,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [593] = */ {
		/* .labelID = */ 64057,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [594] = */ {
		/* .labelID = */ 64058,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [595] = */ {
		/* .labelID = */ 64059,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [596] = */ {
		/* .labelID = */ 64060,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [597] = */ {
		/* .labelID = */ 64061,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [598] = */ {
		/* .labelID = */ 64062,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [599] = */ {
		/* .labelID = */ 64063,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [600] = */ {
		/* .labelID = */ 64064,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [601] = */ {
		/* .labelID = */ 64065,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [602] = */ {
		/* .labelID = */ 64066,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [603] = */ {
		/* .labelID = */ 64067,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [604] = */ {
		/* .labelID = */ 64068,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [605] = */ {
		/* .labelID = */ 64069,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [606] = */ {
		/* .labelID = */ 64070,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [607] = */ {
		/* .labelID = */ 64109,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [608] = */ {
		/* .labelID = */ 64111,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [609] = */ {
		/* .labelID = */ 64113,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [610] = */ {
		/* .labelID = */ 66020,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [611] = */ {
		/* .labelID = */ 66021,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [612] = */ {
		/* .labelID = */ 66023,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [613] = */ {
		/* .labelID = */ 66029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [614] = */ {
		/* .labelID = */ 66030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [615] = */ {
		/* .labelID = */ 66031,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [616] = */ {
		/* .labelID = */ 67014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [617] = */ {
		/* .labelID = */ 67042,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [618] = */ {
		/* .labelID = */ 67044,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [619] = */ {
		/* .labelID = */ 67047,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [620] = */ {
		/* .labelID = */ 68045,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [621] = */ {
		/* .labelID = */ 68052,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [622] = */ {
		/* .labelID = */ 69005,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [623] = */ {
		/* .labelID = */ 69006,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [624] = */ {
		/* .labelID = */ 69007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [625] = */ {
		/* .labelID = */ 69008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [626] = */ {
		/* .labelID = */ 69009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [627] = */ {
		/* .labelID = */ 69010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [628] = */ {
		/* .labelID = */ 69011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [629] = */ {
		/* .labelID = */ 69025,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [630] = */ {
		/* .labelID = */ 69027,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [631] = */ {
		/* .labelID = */ 69029,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [632] = */ {
		/* .labelID = */ 70004,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [633] = */ {
		/* .labelID = */ 70005,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [634] = */ {
		/* .labelID = */ 70006,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [635] = */ {
		/* .labelID = */ 70007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [636] = */ {
		/* .labelID = */ 70008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [637] = */ {
		/* .labelID = */ 70009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [638] = */ {
		/* .labelID = */ 70010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [639] = */ {
		/* .labelID = */ 70011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [640] = */ {
		/* .labelID = */ 70012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [641] = */ {
		/* .labelID = */ 70030,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [642] = */ {
		/* .labelID = */ 70032,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [643] = */ {
		/* .labelID = */ 70033,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 255,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [644] = */ {
		/* .labelID = */ 70034,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 255,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [645] = */ {
		/* .labelID = */ 70035,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [646] = */ {
		/* .labelID = */ 70036,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 4,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [647] = */ {
		/* .labelID = */ 70039,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [648] = */ {
		/* .labelID = */ 71003,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [649] = */ {
		/* .labelID = */ 71050,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [650] = */ {
		/* .labelID = */ 71051,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [651] = */ {
		/* .labelID = */ 72006,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [652] = */ {
		/* .labelID = */ 72007,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [653] = */ {
		/* .labelID = */ 72008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [654] = */ {
		/* .labelID = */ 72009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [655] = */ {
		/* .labelID = */ 72010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [656] = */ {
		/* .labelID = */ 72011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [657] = */ {
		/* .labelID = */ 72012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [658] = */ {
		/* .labelID = */ 72040,
		/* .HitCheck = */ 1,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [659] = */ {
		/* .labelID = */ 72041,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [660] = */ {
		/* .labelID = */ 72053,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [661] = */ {
		/* .labelID = */ 72055,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [662] = */ {
		/* .labelID = */ 72056,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [663] = */ {
		/* .labelID = */ 63003,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [664] = */ {
		/* .labelID = */ 63008,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [665] = */ {
		/* .labelID = */ 63009,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [666] = */ {
		/* .labelID = */ 63010,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [667] = */ {
		/* .labelID = */ 63011,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [668] = */ {
		/* .labelID = */ 63012,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [669] = */ {
		/* .labelID = */ 63013,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [670] = */ {
		/* .labelID = */ 63014,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [671] = */ {
		/* .labelID = */ 63015,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 1,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	},
	/* [672] = */ {
		/* .labelID = */ 63016,
		/* .HitCheck = */ 0,
		/* .PhotoAble = */ 0,
		/* .Visible = */ 0,
		/* .ActionType = */ 0,
		/* .Action = */ 0,
		/* .Weight = */ 0,
		/* .Attribute = */ 0
	}
};

static MAPSAVE_JMP_TBL MapSaveJmp[673];
static int MapSaveJmpNum;
static MAPSAVE_HEAD MapSaveFirstWork[673];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x39f2a0;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003eeff8,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003ef000,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

static MAPSAVE_HEAD* MapSaveGetDatPtr(int label) {
	int i;
	MAPSAVE_HEAD *hp;
	
  MAPSAVE_JMP_TBL *pMVar1;
  int iVar2;
  MAPSAVE_HEAD *pMVar3;
  
  iVar2 = 0;
  if ((0 < MapSaveJmpNum) && (pMVar1 = MapSaveJmp, MapSaveJmp[0].AreaID != label / 1000)) {
    iVar2 = 1;
    while ((pMVar1 = pMVar1 + 1, iVar2 < MapSaveJmpNum && (pMVar1->AreaID != label / 1000))) {
      iVar2 = iVar2 + 1;
    }
  }
  if (iVar2 != MapSaveJmpNum) {
    pMVar3 = MapSaveJmp[iVar2].head;
    iVar2 = pMVar3->labelID;
    while( true ) {
      if (iVar2 == label) {
        return pMVar3;
      }
      if ((MAPSAVE_HEAD *)((int)&MapSaveList[0x29f].Attribute + 3) < pMVar3) {
        return (MAPSAVE_HEAD *)0x0;
      }
      if (iVar2 / 1000 != label / 1000) break;
      pMVar3 = pMVar3 + 1;
      iVar2 = pMVar3->labelID;
    }
    printf("***ERR!! %s(%d):");
    printf("CHANGE_LABEL_ID[%d][%d]\n");
  }
  return (MAPSAVE_HEAD *)0x0;
}

void* MapSaveGetTblPtr(int label) {
  MAPSAVE_HEAD *pMVar1;
  
  pMVar1 = MapSaveGetDatPtr__Fi(label);
  return pMVar1;
}

int MapSaveGetStat(int label, int stat) {
	MAPSAVE_HEAD *hp;
	
  MAPSAVE_HEAD *pMVar1;
  int iVar2;
  
  pMVar1 = MapSaveGetDatPtr__Fi(label);
  iVar2 = -1;
  if (pMVar1 != (MAPSAVE_HEAD *)0x0) {
    switch(stat) {
    case 0:
      iVar2 = (int)pMVar1->HitCheck;
      break;
    case 1:
      iVar2 = (int)pMVar1->PhotoAble;
      break;
    case 2:
      iVar2 = (int)pMVar1->Visible;
      break;
    case 3:
      iVar2 = (int)pMVar1->ActionType;
      break;
    case 4:
      iVar2 = (int)(short)pMVar1->Action;
      break;
    case 5:
      iVar2 = (int)(short)pMVar1->Weight;
      break;
    case 6:
      iVar2 = pMVar1->Attribute;
      break;
    default:
      printf("***ERR!! %s(%d):");
      printf("NO_SAVE_STAT[%d]\n");
      iVar2 = -1;
    }
  }
  return iVar2;
}

void MapSaveSetStat(int label, int stat, int num) {
	MAPSAVE_HEAD *hp;
	
  MAPSAVE_HEAD *pMVar1;
  char cVar2;
  
  pMVar1 = MapSaveGetDatPtr__Fi(label);
  if (pMVar1 != (MAPSAVE_HEAD *)0x0) {
    if ((uint)stat < 7) {
      cVar2 = (char)num;
      switch(stat) {
      case 0:
        pMVar1->HitCheck = cVar2;
        break;
      case 1:
        pMVar1->PhotoAble = cVar2;
        break;
      case 2:
        pMVar1->Visible = cVar2;
        break;
      case 3:
        pMVar1->ActionType = cVar2;
        break;
      case 4:
        pMVar1->Action = (ushort)num;
        break;
      case 5:
        pMVar1->Weight = (ushort)num;
        break;
      case 6:
        pMVar1->Attribute = num;
      }
    }
    else {
      printf("***ERR!! %s(%d):");
      printf("NO_SAVE_STAT[%d]\n");
    }
  }
  return;
}

void MapSaveSetMstDat(int reg_id) {
	MB_OUT_SECTION *stp;
	MAPSAVE_HEAD *hp;
	
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  MAPSAVE_HEAD *pMVar5;
  MB_OUT_SECTION *pMVar6;
  
  RegDatGetStPtrStart__Fii(reg_id,3);
  while (pMVar6 = RegDatGetNextStPtr__Fi(reg_id), pMVar6 != (MB_OUT_SECTION *)0x0) {
    pMVar5 = MapSaveGetDatPtr__Fi(pMVar6->labelID);
    if (pMVar5 == (MAPSAVE_HEAD *)0x0) {
      printf("***ERR!! %s(%d):");
      printf("NO_SAVE_DAT[%s]label[%d]\n");
    }
    else {
      cVar1 = pMVar5->HitCheck;
      uVar2 = pMVar5->Action;
      pMVar6[9].SecStID = (short)(int)cVar1;
      pMVar6[9].size = (short)((uint)(int)cVar1 >> 0x10);
      uVar3 = pMVar5->Weight;
      pMVar6[9].labelID = (int)pMVar5->PhotoAble;
      cVar1 = pMVar5->Visible;
      pMVar6[10].SecStID = (short)(int)cVar1;
      pMVar6[10].size = (short)((uint)(int)cVar1 >> 0x10);
      cVar1 = pMVar5->ActionType;
      pMVar6[10].labelID = (int)(short)uVar2;
      pMVar6[0xb].SecStID = (short)(int)cVar1;
      pMVar6[0xb].size = (short)((uint)(int)cVar1 >> 0x10);
      pMVar6[0xb].labelID = (int)(short)uVar3;
      uVar4 = *(undefined2 *)((int)&pMVar5->Attribute + 2);
      pMVar6[0xc].SecStID = *(undefined2 *)&pMVar5->Attribute;
      pMVar6[0xc].size = uVar4;
    }
  }
  return;
}

void MapSaveCopyDat(void *out, void *mst) {
	MDAT_OBJ *op;
	
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  byte bVar4;
  
  if ((mst == (void *)0x0) || (out == (void *)0x0)) {
    printf("***ERR!! %s(%d):");
    printf("NO_POINTER: op[%x] hp[%x]\n");
    return;
  }
  *(undefined *)((int)out + 4) = *(undefined *)((int)mst + 0x48);
  *(undefined *)((int)out + 5) = *(undefined *)((int)mst + 0x4c);
  *(undefined *)((int)out + 6) = *(undefined *)((int)mst + 0x50);
  uVar1 = *(undefined2 *)((int)mst + 0x54);
  uVar2 = *(undefined2 *)((int)mst + 0x5c);
  *(undefined4 *)((int)out + 0xc) = *(undefined4 *)((int)mst + 0x60);
  *(undefined2 *)((int)out + 8) = uVar1;
  iVar3 = *(int *)((int)mst + 0x54);
  *(undefined2 *)((int)out + 10) = uVar2;
  if ((iVar3 - 4U < 2) && (*(int *)((int)mst + 0x58) < 0)) {
    bVar4 = *(byte *)((int)mst + 0x58);
  }
  else {
    bVar4 = *(byte *)((int)mst + 0x58);
    if (*(char *)((int)mst + 0xd) != '9') goto LAB_00111ad4;
  }
  bVar4 = ~bVar4;
LAB_00111ad4:
  *(byte *)((int)out + 7) = bVar4;
  return;
}

void MapSaveRegist() {
	int i;
	int id;
	
  int iVar1;
  MAPSAVE_HEAD *pMVar2;
  int iVar3;
  int iVar4;
  
  pMVar2 = MapSaveList;
  iVar4 = -1;
  MapSaveJmpNum = 0;
  iVar3 = 0x2a0;
  do {
    iVar1 = pMVar2->labelID / 1000;
    if (iVar1 != iVar4) {
      MapSaveJmp[MapSaveJmpNum].AreaID = iVar1;
      MapSaveJmp[MapSaveJmpNum].head = pMVar2;
      iVar4 = iVar1;
      MapSaveJmpNum = MapSaveJmpNum + 1;
    }
    iVar3 = iVar3 + -1;
    pMVar2 = pMVar2 + 1;
  } while (-1 < iVar3);
  return;
}

void MapSaveCallback(MC_SAVE_DATA *data) {
  data->size = 0x2a10;
  data->addr = (uchar *)MapSaveList;
  return;
}

void MapSavePushFirstDat() {
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  char *pcVar4;
  ulong *puVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  ushort uVar18;
  ushort uVar19;
  int iVar20;
  undefined8 uVar21;
  MAPSAVE_HEAD *pMVar22;
  undefined8 uVar23;
  MAPSAVE_HEAD *pMVar24;
  MAPSAVE_HEAD *pMVar25;
  MAPSAVE_HEAD *pMVar26;
  
  pMVar26 = MapSaveFirstWork;
  pMVar22 = MapSaveList;
  do {
    pMVar24 = pMVar22;
    pMVar25 = pMVar26;
    cVar6 = pMVar24->HitCheck;
    cVar7 = pMVar24->PhotoAble;
    cVar8 = pMVar24->Visible;
    cVar9 = pMVar24->ActionType;
    uVar10 = pMVar24->Action;
    uVar11 = pMVar24->Weight;
    iVar12 = pMVar24->Attribute;
    iVar13 = pMVar24[1].labelID;
    cVar14 = pMVar24[1].HitCheck;
    cVar15 = pMVar24[1].PhotoAble;
    cVar16 = pMVar24[1].Visible;
    cVar17 = pMVar24[1].ActionType;
    uVar18 = pMVar24[1].Action;
    uVar19 = pMVar24[1].Weight;
    iVar20 = pMVar24[1].Attribute;
    pMVar25->labelID = pMVar24->labelID;
    pMVar25->HitCheck = cVar6;
    pMVar25->PhotoAble = cVar7;
    pMVar25->Visible = cVar8;
    pMVar25->ActionType = cVar9;
    pMVar25->Action = uVar10;
    pMVar25->Weight = uVar11;
    pMVar25->Attribute = iVar12;
    pMVar25[1].labelID = iVar13;
    pMVar25[1].HitCheck = cVar14;
    pMVar25[1].PhotoAble = cVar15;
    pMVar25[1].Visible = cVar16;
    pMVar25[1].ActionType = cVar17;
    pMVar25[1].Action = uVar18;
    uVar21 = MapSaveList[672]._0_8_;
    pMVar25[1].Weight = uVar19;
    pMVar25[1].Attribute = iVar20;
    pMVar26 = pMVar25 + 2;
    pMVar22 = pMVar24 + 2;
  } while (pMVar24 + 2 != MapSaveList + 0x2a0);
  uVar2._0_2_ = pMVar24[2].Action;
  uVar2._2_2_ = pMVar24[2].Weight;
  uVar2._4_4_ = pMVar24[2].Attribute;
  uVar3 = (uint)&pMVar25[2].ActionType & 7;
  pcVar4 = &pMVar25[2].ActionType + -uVar3;
  *(ulong *)pcVar4 =
       *(ulong *)pcVar4 & -1L << (uVar3 + 1) * 8 | (ulong)MapSaveList[672]._0_8_ >> (7 - uVar3) * 8;
  uVar23 = MapSaveList[672]._0_8_;
  MapSaveList[672].labelID = (int)uVar21;
  MapSaveList[672].HitCheck = SUB81(uVar21,4);
  cVar6 = MapSaveList[672].HitCheck;
  MapSaveList[672].PhotoAble = SUB81(uVar21,5);
  cVar7 = MapSaveList[672].PhotoAble;
  MapSaveList[672].Visible = SUB81(uVar21,6);
  cVar8 = MapSaveList[672].Visible;
  MapSaveList[672].ActionType = SUB81(uVar21,7);
  cVar9 = MapSaveList[672].ActionType;
  pMVar26->labelID = MapSaveList[672].labelID;
  MapSaveList[672]._0_8_ = uVar23;
  pMVar26->HitCheck = cVar6;
  pMVar26->PhotoAble = cVar7;
  pMVar26->Visible = cVar8;
  pMVar26->ActionType = cVar9;
  puVar1 = (undefined *)((int)&pMVar25[2].Attribute + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar2 >> (7 - uVar3) * 8;
  pMVar25[2].Action = (short)uVar2;
  pMVar25[2].Weight = (short)(uVar2 >> 0x10);
  pMVar25[2].Attribute = (int)(uVar2 >> 0x20);
  return;
}

void MapSavePopFirstDat() {
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  char *pcVar4;
  ulong *puVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  ushort uVar18;
  ushort uVar19;
  int iVar20;
  undefined8 uVar21;
  MAPSAVE_HEAD *pMVar22;
  undefined8 uVar23;
  MAPSAVE_HEAD *pMVar24;
  MAPSAVE_HEAD *pMVar25;
  MAPSAVE_HEAD *pMVar26;
  
  pMVar26 = MapSaveList;
  pMVar22 = MapSaveFirstWork;
  do {
    pMVar24 = pMVar22;
    pMVar25 = pMVar26;
    cVar6 = pMVar24->HitCheck;
    cVar7 = pMVar24->PhotoAble;
    cVar8 = pMVar24->Visible;
    cVar9 = pMVar24->ActionType;
    uVar10 = pMVar24->Action;
    uVar11 = pMVar24->Weight;
    iVar12 = pMVar24->Attribute;
    iVar13 = pMVar24[1].labelID;
    cVar14 = pMVar24[1].HitCheck;
    cVar15 = pMVar24[1].PhotoAble;
    cVar16 = pMVar24[1].Visible;
    cVar17 = pMVar24[1].ActionType;
    uVar18 = pMVar24[1].Action;
    uVar19 = pMVar24[1].Weight;
    iVar20 = pMVar24[1].Attribute;
    pMVar25->labelID = pMVar24->labelID;
    pMVar25->HitCheck = cVar6;
    pMVar25->PhotoAble = cVar7;
    pMVar25->Visible = cVar8;
    pMVar25->ActionType = cVar9;
    pMVar25->Action = uVar10;
    pMVar25->Weight = uVar11;
    pMVar25->Attribute = iVar12;
    pMVar25[1].labelID = iVar13;
    pMVar25[1].HitCheck = cVar14;
    pMVar25[1].PhotoAble = cVar15;
    pMVar25[1].Visible = cVar16;
    pMVar25[1].ActionType = cVar17;
    pMVar25[1].Action = uVar18;
    uVar21 = MapSaveFirstWork[672]._0_8_;
    pMVar25[1].Weight = uVar19;
    pMVar25[1].Attribute = iVar20;
    pMVar26 = pMVar25 + 2;
    pMVar22 = pMVar24 + 2;
  } while (pMVar24 + 2 != MapSaveFirstWork + 0x2a0);
  uVar2._0_2_ = pMVar24[2].Action;
  uVar2._2_2_ = pMVar24[2].Weight;
  uVar2._4_4_ = pMVar24[2].Attribute;
  uVar3 = (uint)&pMVar25[2].ActionType & 7;
  pcVar4 = &pMVar25[2].ActionType + -uVar3;
  *(ulong *)pcVar4 =
       *(ulong *)pcVar4 & -1L << (uVar3 + 1) * 8 |
       (ulong)MapSaveFirstWork[672]._0_8_ >> (7 - uVar3) * 8;
  uVar23 = MapSaveFirstWork[672]._0_8_;
  MapSaveFirstWork[672].labelID = (int)uVar21;
  MapSaveFirstWork[672].HitCheck = SUB81(uVar21,4);
  cVar6 = MapSaveFirstWork[672].HitCheck;
  MapSaveFirstWork[672].PhotoAble = SUB81(uVar21,5);
  cVar7 = MapSaveFirstWork[672].PhotoAble;
  MapSaveFirstWork[672].Visible = SUB81(uVar21,6);
  cVar8 = MapSaveFirstWork[672].Visible;
  MapSaveFirstWork[672].ActionType = SUB81(uVar21,7);
  cVar9 = MapSaveFirstWork[672].ActionType;
  pMVar26->labelID = MapSaveFirstWork[672].labelID;
  MapSaveFirstWork[672]._0_8_ = uVar23;
  pMVar26->HitCheck = cVar6;
  pMVar26->PhotoAble = cVar7;
  pMVar26->Visible = cVar8;
  pMVar26->ActionType = cVar9;
  puVar1 = (undefined *)((int)&pMVar25[2].Attribute + 3);
  uVar3 = (uint)puVar1 & 7;
  puVar5 = (ulong *)(puVar1 + -uVar3);
  *puVar5 = *puVar5 & -1L << (uVar3 + 1) * 8 | uVar2 >> (7 - uVar3) * 8;
  pMVar25[2].Action = (short)uVar2;
  pMVar25[2].Weight = (short)(uVar2 >> 0x10);
  pMVar25[2].Attribute = (int)(uVar2 >> 0x20);
  return;
}
