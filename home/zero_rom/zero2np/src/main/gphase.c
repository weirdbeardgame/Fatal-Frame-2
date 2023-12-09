// STATUS: NOT STARTED

#include "gphase.h"

struct _GPHASE_DAT {
	int layer;
	int superID;
	int son_ID;
	int son_num;
};

typedef _GPHASE_DAT GPHASE_DAT;

struct _GPHASE_SYS {
	GPHASE_ID_ENUM now[6];
	GPHASE_ID_ENUM next[6];
	int ini_flg[6];
};

typedef _GPHASE_SYS GPHASE_SYS;

static void (*ini_func[94])(/* parameters unknown */) = {
	/* [0] = */ init_super,
	/* [1] = */ init_Boot_Init,
	/* [2] = */ init_Boot_PadCheck,
	/* [3] = */ init_LangData_Check,
	/* [4] = */ init_LangSel_Main,
	/* [5] = */ init_AutoLoad_Main,
	/* [6] = */ init_UBI_Mode,
	/* [7] = */ init_OutGame_Main,
	/* [8] = */ init_Story_Main,
	/* [9] = */ init_GameOver_Menu,
	/* [10] = */ init_Ending_Movie,
	/* [11] = */ init_GameResult,
	/* [12] = */ init_ClearMenu,
	/* [13] = */ init_SoftResetMain,
	/* [14] = */ init_Debug_Menu,
	/* [15] = */ init_Tecmo_Mode,
	/* [16] = */ init_Project_Mode,
	/* [17] = */ init_Title_Mode,
	/* [18] = */ init_Title_Movie_Mode,
	/* [19] = */ init_Story_NowLoading,
	/* [20] = */ init_Story_Normal,
	/* [21] = */ init_Story_Damage,
	/* [22] = */ init_Story_Door_Open,
	/* [23] = */ init_Story_Debug,
	/* [24] = */ init_Story_Debug_Cam,
	/* [25] = */ init_Story_Pause,
	/* [26] = */ init_Story_Pause_Mission,
	/* [27] = */ init_Story_Menu,
	/* [28] = */ init_Story_Map,
	/* [29] = */ init_Story_Mission_St,
	/* [30] = */ init_Story_Mission_Result,
	/* [31] = */ init_Story_Game_Over_Pre,
	/* [32] = */ init_Story_Game_Over,
	/* [33] = */ init_Story_Scene,
	/* [34] = */ init_Story_Movie,
	/* [35] = */ init_Story_Effect,
	/* [36] = */ init_EventMsg_Disp,
	/* [37] = */ init_EventFile_Disp,
	/* [38] = */ init_Story_Photo,
	/* [39] = */ init_Story_Ene_Dead,
	/* [40] = */ init_Story_Puzzle,
	/* [41] = */ init_Story_SavePoint,
	/* [42] = */ init_Story_Movie_Room_Sel,
	/* [43] = */ init_GameOver_Menu_Top,
	/* [44] = */ init_GameOver_Menu_Load,
	/* [45] = */ init_GameOver_Menu_Album,
	/* [46] = */ init_Ending_Normal1,
	/* [47] = */ init_Ending_Normal2,
	/* [48] = */ init_Ending_Hard,
	/* [49] = */ init_GameResult_Top,
	/* [50] = */ init_ClearMenu_Top,
	/* [51] = */ init_ClearMenu_Save,
	/* [52] = */ init_ClearMenu_Album,
	/* [53] = */ init_Title_Top,
	/* [54] = */ init_Title_Menu,
	/* [55] = */ init_Title_NewGame,
	/* [56] = */ init_Title_LoadGame,
	/* [57] = */ init_Title_Setup,
	/* [58] = */ init_Title_Album,
	/* [59] = */ init_Title_Gallery,
	/* [60] = */ init_Title_Option,
	/* [61] = */ init_Title_FrameRate_Sel,
	/* [62] = */ init_Title_Chapter_Sel,
	/* [63] = */ init_Title_Move_Movie,
	/* [64] = */ init_Story_Load_Mission,
	/* [65] = */ init_Story_Load_Mission_Event,
	/* [66] = */ init_Story_Load_Mission_Save,
	/* [67] = */ init_Story_GameOver_Eff,
	/* [68] = */ init_Story_GameOver_Fade,
	/* [69] = */ init_Story_GameOver_Movie,
	/* [70] = */ init_Story_Scene_PreLoad,
	/* [71] = */ init_Story_Scene_Main,
	/* [72] = */ init_Story_Movie_PreLoad,
	/* [73] = */ init_Story_Movie_Main,
	/* [74] = */ init_Puzzle_InConf,
	/* [75] = */ init_Puzzle_CrossFade,
	/* [76] = */ init_Puzzle_Hina,
	/* [77] = */ init_Puzzle_Roku,
	/* [78] = */ init_Puzzle_Kaza,
	/* [79] = */ init_Puzzle_Kaza2,
	/* [80] = */ init_Puzzle_Kai1,
	/* [81] = */ init_Puzzle_Kai2,
	/* [82] = */ init_SavePoint_FadeIn,
	/* [83] = */ init_SavePoint_Main,
	/* [84] = */ init_SavePoint_FadeOut,
	/* [85] = */ init_Title_SetupMenu,
	/* [86] = */ init_Title_Mission,
	/* [87] = */ init_SavePoint_Top,
	/* [88] = */ init_SavePoint_Save,
	/* [89] = */ init_SavePoint_Album,
	/* [90] = */ init_Mission_Sel,
	/* [91] = */ init_Mission_Cam,
	/* [92] = */ init_Mission_Album,
	/* [93] = */ init_Mission_Save
};

static void (*end_func[94])(/* parameters unknown */) = {
	/* [0] = */ end_super,
	/* [1] = */ end_Boot_Init,
	/* [2] = */ end_Boot_PadCheck,
	/* [3] = */ end_LangData_Check,
	/* [4] = */ end_LangSel_Main,
	/* [5] = */ end_AutoLoad_Main,
	/* [6] = */ end_UBI_Mode,
	/* [7] = */ end_OutGame_Main,
	/* [8] = */ end_Story_Main,
	/* [9] = */ end_GameOver_Menu,
	/* [10] = */ end_Ending_Movie,
	/* [11] = */ end_GameResult,
	/* [12] = */ end_ClearMenu,
	/* [13] = */ end_SoftResetMain,
	/* [14] = */ end_Debug_Menu,
	/* [15] = */ end_Tecmo_Mode,
	/* [16] = */ end_Project_Mode,
	/* [17] = */ end_Title_Mode,
	/* [18] = */ end_Title_Movie_Mode,
	/* [19] = */ end_Story_NowLoading,
	/* [20] = */ end_Story_Normal,
	/* [21] = */ end_Story_Damage,
	/* [22] = */ end_Story_Door_Open,
	/* [23] = */ end_Story_Debug,
	/* [24] = */ end_Story_Debug_Cam,
	/* [25] = */ end_Story_Pause,
	/* [26] = */ end_Story_Pause_Mission,
	/* [27] = */ end_Story_Menu,
	/* [28] = */ end_Story_Map,
	/* [29] = */ end_Story_Mission_St,
	/* [30] = */ end_Story_Mission_Result,
	/* [31] = */ end_Story_Game_Over_Pre,
	/* [32] = */ end_Story_Game_Over,
	/* [33] = */ end_Story_Scene,
	/* [34] = */ end_Story_Movie,
	/* [35] = */ end_Story_Effect,
	/* [36] = */ end_EventMsg_Disp,
	/* [37] = */ end_EventFile_Disp,
	/* [38] = */ end_Story_Photo,
	/* [39] = */ end_Story_Ene_Dead,
	/* [40] = */ end_Story_Puzzle,
	/* [41] = */ end_Story_SavePoint,
	/* [42] = */ end_Story_Movie_Room_Sel,
	/* [43] = */ end_GameOver_Menu_Top,
	/* [44] = */ end_GameOver_Menu_Load,
	/* [45] = */ end_GameOver_Menu_Album,
	/* [46] = */ end_Ending_Normal1,
	/* [47] = */ end_Ending_Normal2,
	/* [48] = */ end_Ending_Hard,
	/* [49] = */ end_GameResult_Top,
	/* [50] = */ end_ClearMenu_Top,
	/* [51] = */ end_ClearMenu_Save,
	/* [52] = */ end_ClearMenu_Album,
	/* [53] = */ end_Title_Top,
	/* [54] = */ end_Title_Menu,
	/* [55] = */ end_Title_NewGame,
	/* [56] = */ end_Title_LoadGame,
	/* [57] = */ end_Title_Setup,
	/* [58] = */ end_Title_Album,
	/* [59] = */ end_Title_Gallery,
	/* [60] = */ end_Title_Option,
	/* [61] = */ end_Title_FrameRate_Sel,
	/* [62] = */ end_Title_Chapter_Sel,
	/* [63] = */ end_Title_Move_Movie,
	/* [64] = */ end_Story_Load_Mission,
	/* [65] = */ end_Story_Load_Mission_Event,
	/* [66] = */ end_Story_Load_Mission_Save,
	/* [67] = */ end_Story_GameOver_Eff,
	/* [68] = */ end_Story_GameOver_Fade,
	/* [69] = */ end_Story_GameOver_Movie,
	/* [70] = */ end_Story_Scene_PreLoad,
	/* [71] = */ end_Story_Scene_Main,
	/* [72] = */ end_Story_Movie_PreLoad,
	/* [73] = */ end_Story_Movie_Main,
	/* [74] = */ end_Puzzle_InConf,
	/* [75] = */ end_Puzzle_CrossFade,
	/* [76] = */ end_Puzzle_Hina,
	/* [77] = */ end_Puzzle_Roku,
	/* [78] = */ end_Puzzle_Kaza,
	/* [79] = */ end_Puzzle_Kaza2,
	/* [80] = */ end_Puzzle_Kai1,
	/* [81] = */ end_Puzzle_Kai2,
	/* [82] = */ end_SavePoint_FadeIn,
	/* [83] = */ end_SavePoint_Main,
	/* [84] = */ end_SavePoint_FadeOut,
	/* [85] = */ end_Title_SetupMenu,
	/* [86] = */ end_Title_Mission,
	/* [87] = */ end_SavePoint_Top,
	/* [88] = */ end_SavePoint_Save,
	/* [89] = */ end_SavePoint_Album,
	/* [90] = */ end_Mission_Sel,
	/* [91] = */ end_Mission_Cam,
	/* [92] = */ end_Mission_Album,
	/* [93] = */ end_Mission_Save
};

static GPHASE_ENUM (*pre_func[94])(/* parameters unknown */) = {
	/* [0] = */ pre_super,
	/* [1] = */ NULL,
	/* [2] = */ NULL,
	/* [3] = */ NULL,
	/* [4] = */ NULL,
	/* [5] = */ NULL,
	/* [6] = */ NULL,
	/* [7] = */ pre_OutGame_Main,
	/* [8] = */ pre_Story_Main,
	/* [9] = */ pre_GameOver_Menu,
	/* [10] = */ pre_Ending_Movie,
	/* [11] = */ pre_GameResult,
	/* [12] = */ pre_ClearMenu,
	/* [13] = */ NULL,
	/* [14] = */ NULL,
	/* [15] = */ NULL,
	/* [16] = */ NULL,
	/* [17] = */ pre_Title_Mode,
	/* [18] = */ NULL,
	/* [19] = */ pre_Story_NowLoading,
	/* [20] = */ NULL,
	/* [21] = */ NULL,
	/* [22] = */ NULL,
	/* [23] = */ NULL,
	/* [24] = */ NULL,
	/* [25] = */ NULL,
	/* [26] = */ NULL,
	/* [27] = */ NULL,
	/* [28] = */ NULL,
	/* [29] = */ NULL,
	/* [30] = */ NULL,
	/* [31] = */ NULL,
	/* [32] = */ pre_Story_Game_Over,
	/* [33] = */ pre_Story_Scene,
	/* [34] = */ pre_Story_Movie,
	/* [35] = */ NULL,
	/* [36] = */ NULL,
	/* [37] = */ NULL,
	/* [38] = */ NULL,
	/* [39] = */ NULL,
	/* [40] = */ pre_Story_Puzzle,
	/* [41] = */ pre_Story_SavePoint,
	/* [42] = */ NULL,
	/* [43] = */ NULL,
	/* [44] = */ NULL,
	/* [45] = */ NULL,
	/* [46] = */ NULL,
	/* [47] = */ NULL,
	/* [48] = */ NULL,
	/* [49] = */ NULL,
	/* [50] = */ NULL,
	/* [51] = */ NULL,
	/* [52] = */ NULL,
	/* [53] = */ NULL,
	/* [54] = */ NULL,
	/* [55] = */ NULL,
	/* [56] = */ NULL,
	/* [57] = */ pre_Title_Setup,
	/* [58] = */ NULL,
	/* [59] = */ NULL,
	/* [60] = */ NULL,
	/* [61] = */ NULL,
	/* [62] = */ NULL,
	/* [63] = */ NULL,
	/* [64] = */ NULL,
	/* [65] = */ NULL,
	/* [66] = */ NULL,
	/* [67] = */ NULL,
	/* [68] = */ NULL,
	/* [69] = */ NULL,
	/* [70] = */ NULL,
	/* [71] = */ NULL,
	/* [72] = */ NULL,
	/* [73] = */ NULL,
	/* [74] = */ NULL,
	/* [75] = */ NULL,
	/* [76] = */ NULL,
	/* [77] = */ NULL,
	/* [78] = */ NULL,
	/* [79] = */ NULL,
	/* [80] = */ NULL,
	/* [81] = */ NULL,
	/* [82] = */ NULL,
	/* [83] = */ pre_SavePoint_Main,
	/* [84] = */ NULL,
	/* [85] = */ NULL,
	/* [86] = */ pre_Title_Mission,
	/* [87] = */ NULL,
	/* [88] = */ NULL,
	/* [89] = */ NULL,
	/* [90] = */ NULL,
	/* [91] = */ NULL,
	/* [92] = */ NULL,
	/* [93] = */ NULL
};

static GPHASE_ENUM (*after_func[94])(/* parameters unknown */) = {
	/* [0] = */ after_super,
	/* [1] = */ one_Boot_Init,
	/* [2] = */ one_Boot_PadCheck,
	/* [3] = */ one_LangData_Check,
	/* [4] = */ one_LangSel_Main,
	/* [5] = */ one_AutoLoad_Main,
	/* [6] = */ one_UBI_Mode,
	/* [7] = */ after_OutGame_Main,
	/* [8] = */ after_Story_Main,
	/* [9] = */ after_GameOver_Menu,
	/* [10] = */ after_Ending_Movie,
	/* [11] = */ after_GameResult,
	/* [12] = */ after_ClearMenu,
	/* [13] = */ one_SoftResetMain,
	/* [14] = */ one_Debug_Menu,
	/* [15] = */ one_Tecmo_Mode,
	/* [16] = */ one_Project_Mode,
	/* [17] = */ after_Title_Mode,
	/* [18] = */ one_Title_Movie_Mode,
	/* [19] = */ after_Story_NowLoading,
	/* [20] = */ one_Story_Normal,
	/* [21] = */ one_Story_Damage,
	/* [22] = */ one_Story_Door_Open,
	/* [23] = */ one_Story_Debug,
	/* [24] = */ one_Story_Debug_Cam,
	/* [25] = */ one_Story_Pause,
	/* [26] = */ one_Story_Pause_Mission,
	/* [27] = */ one_Story_Menu,
	/* [28] = */ one_Story_Map,
	/* [29] = */ one_Story_Mission_St,
	/* [30] = */ one_Story_Mission_Result,
	/* [31] = */ one_Story_Game_Over_Pre,
	/* [32] = */ after_Story_Game_Over,
	/* [33] = */ after_Story_Scene,
	/* [34] = */ after_Story_Movie,
	/* [35] = */ one_Story_Effect,
	/* [36] = */ one_EventMsg_Disp,
	/* [37] = */ one_EventFile_Disp,
	/* [38] = */ one_Story_Photo,
	/* [39] = */ one_Story_Ene_Dead,
	/* [40] = */ after_Story_Puzzle,
	/* [41] = */ after_Story_SavePoint,
	/* [42] = */ one_Story_Movie_Room_Sel,
	/* [43] = */ one_GameOver_Menu_Top,
	/* [44] = */ one_GameOver_Menu_Load,
	/* [45] = */ one_GameOver_Menu_Album,
	/* [46] = */ one_Ending_Normal1,
	/* [47] = */ one_Ending_Normal2,
	/* [48] = */ one_Ending_Hard,
	/* [49] = */ one_GameResult_Top,
	/* [50] = */ one_ClearMenu_Top,
	/* [51] = */ one_ClearMenu_Save,
	/* [52] = */ one_ClearMenu_Album,
	/* [53] = */ one_Title_Top,
	/* [54] = */ one_Title_Menu,
	/* [55] = */ one_Title_NewGame,
	/* [56] = */ one_Title_LoadGame,
	/* [57] = */ after_Title_Setup,
	/* [58] = */ one_Title_Album,
	/* [59] = */ one_Title_Gallery,
	/* [60] = */ one_Title_Option,
	/* [61] = */ one_Title_FrameRate_Sel,
	/* [62] = */ one_Title_Chapter_Sel,
	/* [63] = */ one_Title_Move_Movie,
	/* [64] = */ one_Story_Load_Mission,
	/* [65] = */ one_Story_Load_Mission_Event,
	/* [66] = */ one_Story_Load_Mission_Save,
	/* [67] = */ one_Story_GameOver_Eff,
	/* [68] = */ one_Story_GameOver_Fade,
	/* [69] = */ one_Story_GameOver_Movie,
	/* [70] = */ one_Story_Scene_PreLoad,
	/* [71] = */ one_Story_Scene_Main,
	/* [72] = */ one_Story_Movie_PreLoad,
	/* [73] = */ one_Story_Movie_Main,
	/* [74] = */ one_Puzzle_InConf,
	/* [75] = */ one_Puzzle_CrossFade,
	/* [76] = */ one_Puzzle_Hina,
	/* [77] = */ one_Puzzle_Roku,
	/* [78] = */ one_Puzzle_Kaza,
	/* [79] = */ one_Puzzle_Kaza2,
	/* [80] = */ one_Puzzle_Kai1,
	/* [81] = */ one_Puzzle_Kai2,
	/* [82] = */ one_SavePoint_FadeIn,
	/* [83] = */ after_SavePoint_Main,
	/* [84] = */ one_SavePoint_FadeOut,
	/* [85] = */ one_Title_SetupMenu,
	/* [86] = */ after_Title_Mission,
	/* [87] = */ one_SavePoint_Top,
	/* [88] = */ one_SavePoint_Save,
	/* [89] = */ one_SavePoint_Album,
	/* [90] = */ one_Mission_Sel,
	/* [91] = */ one_Mission_Cam,
	/* [92] = */ one_Mission_Album,
	/* [93] = */ one_Mission_Save
};

static GPHASE_DAT gphase_tbl[94] = {
	/* [0] = */ {
		/* .layer = */ 0,
		/* .superID = */ -1,
		/* .son_ID = */ 1,
		/* .son_num = */ 14
	},
	/* [1] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [2] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [3] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [4] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [5] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [6] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [7] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ 15,
		/* .son_num = */ 4
	},
	/* [8] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ 19,
		/* .son_num = */ 24
	},
	/* [9] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ 43,
		/* .son_num = */ 3
	},
	/* [10] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ 46,
		/* .son_num = */ 3
	},
	/* [11] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ 49,
		/* .son_num = */ 1
	},
	/* [12] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ 50,
		/* .son_num = */ 3
	},
	/* [13] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [14] = */ {
		/* .layer = */ 1,
		/* .superID = */ 0,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [15] = */ {
		/* .layer = */ 2,
		/* .superID = */ 7,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [16] = */ {
		/* .layer = */ 2,
		/* .superID = */ 7,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [17] = */ {
		/* .layer = */ 2,
		/* .superID = */ 7,
		/* .son_ID = */ 53,
		/* .son_num = */ 11
	},
	/* [18] = */ {
		/* .layer = */ 2,
		/* .superID = */ 7,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [19] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ 64,
		/* .son_num = */ 3
	},
	/* [20] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [21] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [22] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [23] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [24] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [25] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [26] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [27] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [28] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [29] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [30] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [31] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [32] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ 67,
		/* .son_num = */ 3
	},
	/* [33] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ 70,
		/* .son_num = */ 2
	},
	/* [34] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ 72,
		/* .son_num = */ 2
	},
	/* [35] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [36] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [37] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [38] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [39] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [40] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ 74,
		/* .son_num = */ 8
	},
	/* [41] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ 82,
		/* .son_num = */ 3
	},
	/* [42] = */ {
		/* .layer = */ 2,
		/* .superID = */ 8,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [43] = */ {
		/* .layer = */ 2,
		/* .superID = */ 9,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [44] = */ {
		/* .layer = */ 2,
		/* .superID = */ 9,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [45] = */ {
		/* .layer = */ 2,
		/* .superID = */ 9,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [46] = */ {
		/* .layer = */ 2,
		/* .superID = */ 10,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [47] = */ {
		/* .layer = */ 2,
		/* .superID = */ 10,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [48] = */ {
		/* .layer = */ 2,
		/* .superID = */ 10,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [49] = */ {
		/* .layer = */ 2,
		/* .superID = */ 11,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [50] = */ {
		/* .layer = */ 2,
		/* .superID = */ 12,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [51] = */ {
		/* .layer = */ 2,
		/* .superID = */ 12,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [52] = */ {
		/* .layer = */ 2,
		/* .superID = */ 12,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [53] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [54] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [55] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [56] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [57] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ 85,
		/* .son_num = */ 2
	},
	/* [58] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [59] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [60] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [61] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [62] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [63] = */ {
		/* .layer = */ 3,
		/* .superID = */ 17,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [64] = */ {
		/* .layer = */ 3,
		/* .superID = */ 19,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [65] = */ {
		/* .layer = */ 3,
		/* .superID = */ 19,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [66] = */ {
		/* .layer = */ 3,
		/* .superID = */ 19,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [67] = */ {
		/* .layer = */ 3,
		/* .superID = */ 32,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [68] = */ {
		/* .layer = */ 3,
		/* .superID = */ 32,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [69] = */ {
		/* .layer = */ 3,
		/* .superID = */ 32,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [70] = */ {
		/* .layer = */ 3,
		/* .superID = */ 33,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [71] = */ {
		/* .layer = */ 3,
		/* .superID = */ 33,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [72] = */ {
		/* .layer = */ 3,
		/* .superID = */ 34,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [73] = */ {
		/* .layer = */ 3,
		/* .superID = */ 34,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [74] = */ {
		/* .layer = */ 3,
		/* .superID = */ 40,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [75] = */ {
		/* .layer = */ 3,
		/* .superID = */ 40,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [76] = */ {
		/* .layer = */ 3,
		/* .superID = */ 40,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [77] = */ {
		/* .layer = */ 3,
		/* .superID = */ 40,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [78] = */ {
		/* .layer = */ 3,
		/* .superID = */ 40,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [79] = */ {
		/* .layer = */ 3,
		/* .superID = */ 40,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [80] = */ {
		/* .layer = */ 3,
		/* .superID = */ 40,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [81] = */ {
		/* .layer = */ 3,
		/* .superID = */ 40,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [82] = */ {
		/* .layer = */ 3,
		/* .superID = */ 41,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [83] = */ {
		/* .layer = */ 3,
		/* .superID = */ 41,
		/* .son_ID = */ 87,
		/* .son_num = */ 3
	},
	/* [84] = */ {
		/* .layer = */ 3,
		/* .superID = */ 41,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [85] = */ {
		/* .layer = */ 4,
		/* .superID = */ 57,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [86] = */ {
		/* .layer = */ 4,
		/* .superID = */ 57,
		/* .son_ID = */ 90,
		/* .son_num = */ 4
	},
	/* [87] = */ {
		/* .layer = */ 4,
		/* .superID = */ 83,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [88] = */ {
		/* .layer = */ 4,
		/* .superID = */ 83,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [89] = */ {
		/* .layer = */ 4,
		/* .superID = */ 83,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [90] = */ {
		/* .layer = */ 5,
		/* .superID = */ 86,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [91] = */ {
		/* .layer = */ 5,
		/* .superID = */ 86,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [92] = */ {
		/* .layer = */ 5,
		/* .superID = */ 86,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	},
	/* [93] = */ {
		/* .layer = */ 5,
		/* .superID = */ 86,
		/* .son_ID = */ -1,
		/* .son_num = */ 0
	}
};

static GPHASE_SYS gphase_sys;

void InitGPhaseSys() {
	int i;
	
  GPHASE_ID_ENUM *pGVar1;
  int iVar2;
  
  iVar2 = 5;
  pGVar1 = gphase_sys.now + 5;
  do {
    iVar2 = iVar2 + -1;
    *pGVar1 = GPHASE_ID_NONE;
    pGVar1 = pGVar1 + -1;
  } while (-1 < iVar2);
  SetNextGPhase__F14GPHASE_ID_ENUM(GID_SUPER);
  return;
}

static void SetInitFlag() {
	int i;
	
  _GPHASE_SYS *p_Var1;
  int iVar2;
  
  p_Var1 = &gphase_sys;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
    p_Var1->ini_flg[0] = (uint)(p_Var1->next[0] != p_Var1->now[0]);
    p_Var1 = (_GPHASE_SYS *)(p_Var1->now + 1);
  } while (-1 < iVar2);
  return;
}

static GPHASE_ENUM DoJobPhase(int layer) {
	GPHASE_ENUM result;
	
  GPHASE_ENUM GVar1;
  GPHASE_ID_ENUM GVar2;
  
  GVar1 = GPHASE_CONTINUE;
  if (layer < 6) {
    if (gphase_sys.ini_flg[layer] == 0) {
      GVar2 = gphase_sys.now[layer];
    }
    else {
      (*(code *)ini_func[gphase_sys.now[layer]])();
      GVar2 = gphase_sys.now[layer];
    }
    if ((code *)pre_func[GVar2] != (code *)0x0) {
      (*(code *)pre_func[GVar2])(0);
      GVar2 = gphase_sys.now[layer];
    }
    if (gphase_tbl[GVar2].son_num != 0) {
      GVar1 = DoJobPhase__Fi(layer + 1);
      GVar2 = gphase_sys.now[layer];
    }
    GVar1 = (*(code *)after_func[GVar2])(GVar1);
    return GVar1;
  }
  printf("layer_num over %d\n");
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

void GPhaseSysMain() {
	int i;
	
  GPHASE_ID_ENUM GVar1;
  _GPHASE_SYS *p_Var2;
  GPHASE_ID_ENUM *pGVar3;
  int iVar4;
  
  iVar4 = 5;
  SetInitFlag__Fv();
  p_Var2 = &gphase_sys;
  do {
    iVar4 = iVar4 + -1;
    p_Var2->now[0] = p_Var2->next[0];
    p_Var2 = (_GPHASE_SYS *)(p_Var2->now + 1);
  } while (-1 < iVar4);
  iVar4 = 5;
  DoJobPhase__Fi(0);
  pGVar3 = gphase_sys.now + 5;
  do {
    GVar1 = *pGVar3;
    if ((GVar1 != GPHASE_ID_NONE) && (GVar1 != pGVar3[6])) {
      (*(code *)end_func[GVar1])();
    }
    iVar4 = iVar4 + -1;
    pGVar3 = pGVar3 + -1;
  } while (-1 < iVar4);
  return;
}

void SetNextGPhase(GPHASE_ID_ENUM id) {
	int layer;
	int i;
	GPHASE_DAT *gp;
	GPHASE_DAT *gpbak;
	
  GPHASE_ID_ENUM GVar1;
  GPHASE_ID_ENUM *pGVar2;
  _GPHASE_DAT *p_Var3;
  int iVar4;
  int iVar5;
  
  p_Var3 = gphase_tbl + id;
  iVar5 = p_Var3->layer;
  gphase_sys.next[iVar5] = id;
  if (iVar5 < 6) {
    pGVar2 = gphase_sys.next + iVar5 + 1;
    iVar4 = iVar5;
    do {
      if (p_Var3->son_num == 0) {
        if (iVar4 < 5) {
          pGVar2 = gphase_sys.next + iVar4 + 1;
          do {
            iVar4 = iVar4 + 1;
            *pGVar2 = GPHASE_ID_NONE;
            pGVar2 = pGVar2 + 1;
          } while (iVar4 < 5);
        }
        break;
      }
      GVar1 = p_Var3->son_ID;
      *pGVar2 = GVar1;
      p_Var3 = gphase_tbl + GVar1;
      iVar4 = iVar4 + 1;
      pGVar2 = pGVar2 + 1;
    } while (iVar4 < 6);
  }
  if ((0 < iVar5) && (GVar1 = gphase_tbl[id].superID, GPHASE_ID_NONE < GVar1)) {
    gphase_sys.now[iVar5 + 5] = GVar1;
    pGVar2 = gphase_sys.now + iVar5 + 5;
    while( true ) {
      iVar5 = iVar5 + -1;
      pGVar2 = pGVar2 + -1;
      if ((iVar5 < 1) || (GVar1 = gphase_tbl[GVar1].superID, GVar1 < GID_SUPER)) break;
      *pGVar2 = GVar1;
    }
  }
  return;
}
