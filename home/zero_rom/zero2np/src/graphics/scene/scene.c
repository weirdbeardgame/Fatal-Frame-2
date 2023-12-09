// STATUS: NOT STARTED

#include "scene.h"

typedef struct {
	int buf_id;
	int status;
	fixed_array<int,3> id;
	int file_num;
	int adpcm_id;
} SCENE_LOAD_CTRL;

typedef struct {
	char *prefix;
	int top_no;
} AREA_PREFIX_TO_NO;

struct fixed_array_base<SCENE_CTRL,2,SCENE_CTRL[2]> {
protected:
	SCENE_CTRL m_aData[2];
	
public:
	fixed_array_base<SCENE_CTRL,2,SCENE_CTRL[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	SCENE_CTRL& operator[]();
	SCENE_CTRL& operator[]();
	SCENE_CTRL* data();
	SCENE_CTRL* begin();
	SCENE_CTRL* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<SCENE_CTRL,2> : fixed_array_base<SCENE_CTRL,2,SCENE_CTRL[2]> {
};

struct fixed_array_base<AREA_PREFIX_TO_NO,10,AREA_PREFIX_TO_NO *> {
protected:
	AREA_PREFIX_TO_NO *m_aData;
	
public:
	fixed_array_base<AREA_PREFIX_TO_NO,10,AREA_PREFIX_TO_NO *>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	AREA_PREFIX_TO_NO& operator[]();
	AREA_PREFIX_TO_NO& operator[]();
	AREA_PREFIX_TO_NO* data();
	AREA_PREFIX_TO_NO* begin();
	AREA_PREFIX_TO_NO* end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<AREA_PREFIX_TO_NO,10> : fixed_array_base<AREA_PREFIX_TO_NO,10,AREA_PREFIX_TO_NO *> {
};

typedef struct {
	u_int SceneNo;
	char RoomName[6];
	char SubRoomName[6];
	short int MirrorFlg;
	short int BoneModelNum;
	short int DoorModelNum;
	short int FurnModelNum;
	short int ItemModelNum;
	short int PadShort;
	int PadInt[1];
} SCENE_DATA_HEADER;

struct fixed_array_base<char,33,char[33]> {
protected:
	char m_aData[33];
	
public:
	fixed_array_base<char,33,char[33]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char& operator[]();
	char& operator[]();
	char* data();
	char* begin();
	char* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<char,33> : fixed_array_base<char,33,char[33]> {
};

struct fixed_array_base<int,65,int[65]> {
protected:
	int m_aData[65];
	
public:
	fixed_array_base<int,65,int[65]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	int& operator[]();
	int& operator[]();
	int* data();
	int* begin();
	int* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<int,65> : fixed_array_base<int,65,int[65]> {
};

struct fixed_array_base<char *,4,char **> {
protected:
	char **m_aData;
	
public:
	fixed_array_base<char *,4,char **>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	char*& operator[]();
	char*& operator[]();
	char** data();
	char** begin();
	char** end();
	void fill();
	size_t size();
	bool empty();
};

struct reference_fixed_array<char *,4> : fixed_array_base<char *,4,char **> {
};

fixed_array<SCENE_CTRL,2> scene_ctrl = {
	/* base class 0 = */ {
		/* .m_aData = */ {
			/* [0] = */ {
				/* .man_mdl = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [1] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [2] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [3] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [4] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [5] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [6] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [7] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							}
						}
					}
				},
				/* .furn_mdl = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [1] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [2] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [3] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [4] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [5] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [6] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [7] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [8] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [9] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [10] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [11] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [12] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [13] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							}
						}
					}
				},
				/* .item_mdl = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [1] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [2] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [3] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [4] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [5] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [6] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [7] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							}
						}
					}
				},
				/* .door_mdl = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [1] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [2] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [3] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [4] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [5] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [6] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [7] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							}
						}
					}
				},
				/* .man_mdl_tex = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0,
							/* [4] = */ 0,
							/* [5] = */ 0,
							/* [6] = */ 0,
							/* [7] = */ 0
						}
					}
				},
				/* .fod_ctrl = */ {
					/* .fod_light = */ {
						/* .lit_serial = */ {
							/* base class 0 = */ {
								/* .m_aData = */ {
									/* [0] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [1] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [2] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [3] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [4] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [5] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [6] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [7] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [8] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [9] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [10] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [11] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [12] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [13] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [14] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [15] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [16] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [17] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [18] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [19] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [20] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [21] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [22] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [23] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [24] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [25] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [26] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [27] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [28] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [29] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [30] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [31] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [32] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [33] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [34] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [35] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									}
								}
							}
						},
						/* .all_lit = */ {
							/* base class 0 = */ {
								/* .m_aData = */ {
									/* [0] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [1] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [2] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [3] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [4] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [5] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [6] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [7] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [8] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [9] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [10] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [11] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [12] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [13] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [14] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [15] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [16] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [17] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [18] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [19] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [20] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [21] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [22] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [23] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [24] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [25] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [26] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [27] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [28] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [29] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [30] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [31] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [32] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [33] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [34] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [35] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									}
								}
							}
						},
						/* .amb = */ {
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
									}
								}
							}
						},
						/* .lit_top = */ NULL,
						/* .ilit_num = */ 0,
						/* .slit_num = */ 0,
						/* .plit_num = */ 0,
						/* .all_lit_num = */ 0,
						/* .hand_spot_no = */ 0
					},
					/* .cam_file_hdr = */ NULL,
					/* .cam_frame_top = */ NULL,
					/* .cam_frame = */ NULL,
					/* .cam_frame_next = */ NULL,
					/* .lit_file_hdr = */ NULL,
					/* .lit_frame_top = */ NULL,
					/* .lit_frame = */ NULL,
					/* .lit_frame_next = */ NULL,
					/* .eff_file_hdr = */ NULL,
					/* .eff_frame_top = */ NULL,
					/* .eff_frame = */ NULL,
					/* .now_frame = */ 0,
					/* .frame_max = */ 0,
					/* .now_reso = */ 0,
					/* .resolution = */ 0,
					/* .end_flg = */ 0,
					/* .float_now_frame = */ 0.f,
					/* .cut_timing_index = */ 0
				},
				/* .fog = */ {
					/* .min = */ 0.f,
					/* .max = */ 0.f,
					/* .near = */ 0.f,
					/* .far = */ 0.f,
					/* .r = */ 0,
					/* .g = */ 0,
					/* .b = */ 0,
					/* .pad = */ 0
				},
				/* .CameraData = */ {
					/* .vPosition = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .vTarget = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .fRoll = */ 0.f,
					/* .fFov = */ 0.f,
					/* .fNearZ = */ 0.f,
					/* .fFarZ = */ 0.f
				},
				/* .man_mdl_num = */ 0,
				/* .door_num = */ 0,
				/* .furn_num = */ 0,
				/* .item_num = */ 0,
				/* .scn_data_addr = */ NULL,
				/* .light_rev_addr = */ NULL,
				/* .effect_addr = */ NULL,
				/* .pMimBuf = */ NULL,
				/* .scene_no = */ 0,
				/* .room_no = */ 0,
				/* .sub_room_no = */ 0,
				/* .count_flg = */ 0,
				/* .mirror_flg = */ 0,
				/* .init_flg = */ 0,
				/* .fNearZBak = */ 0.f,
				/* .fFarZBak = */ 0.f,
				/* .DrawAneFlg = */ 0,
				/* .DrawImoutoFlg = */ 0,
				/* .DoubleBufferId = */ 0,
				/* .AreaNoBak = */ 0,
				/* .MonotoneEnableBak = */ 0,
				/* .pPlayerAccessoryPk2 = */ NULL,
				/* .pSisterAccessoryPk2 = */ NULL
			},
			/* [1] = */ {
				/* .man_mdl = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [1] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [2] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [3] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [4] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [5] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [6] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [7] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							}
						}
					}
				},
				/* .furn_mdl = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [1] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [2] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [3] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [4] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [5] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [6] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [7] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [8] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [9] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [10] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [11] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [12] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [13] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							}
						}
					}
				},
				/* .item_mdl = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [1] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [2] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [3] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [4] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [5] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [6] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [7] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							}
						}
					}
				},
				/* .door_mdl = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [1] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [2] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [3] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [4] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [5] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [6] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							},
							/* [7] = */ {
								/* .pMdlAnm = */ NULL,
								/* .ene_efct = */ NULL,
								/* .efct_addr = */ {
									/* [0] = */ NULL,
									/* [1] = */ NULL,
									/* [2] = */ NULL,
									/* [3] = */ NULL
								},
								/* .prefix = */ {
									/* [0] = */ 0,
									/* [1] = */ 0,
									/* [2] = */ 0,
									/* [3] = */ 0,
									/* [4] = */ 0,
									/* [5] = */ 0,
									/* [6] = */ 0,
									/* [7] = */ 0,
									/* [8] = */ 0
								},
								/* .mdl_no = */ 0,
								/* .mdl_alpha = */ 0,
								/* .scn_mdl_no = */ 0,
								/* .mdl_addr = */ NULL,
								/* .mdl_addr_db = */ NULL,
								/* .mot_addr = */ NULL,
								/* .mim_addr = */ NULL,
								/* .mim_buf_addr = */ NULL,
								/* .pk2_addr = */ NULL,
								/* .disp_flg = */ 0
							}
						}
					}
				},
				/* .man_mdl_tex = */ {
					/* base class 0 = */ {
						/* .m_aData = */ {
							/* [0] = */ 0,
							/* [1] = */ 0,
							/* [2] = */ 0,
							/* [3] = */ 0,
							/* [4] = */ 0,
							/* [5] = */ 0,
							/* [6] = */ 0,
							/* [7] = */ 0
						}
					}
				},
				/* .fod_ctrl = */ {
					/* .fod_light = */ {
						/* .lit_serial = */ {
							/* base class 0 = */ {
								/* .m_aData = */ {
									/* [0] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [1] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [2] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [3] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [4] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [5] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [6] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [7] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [8] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [9] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [10] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [11] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [12] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [13] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [14] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [15] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [16] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [17] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [18] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [19] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [20] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [21] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [22] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [23] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [24] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [25] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [26] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [27] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [28] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [29] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [30] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [31] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [32] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [33] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [34] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									},
									/* [35] = */ {
										/* .light_no = */ 0,
										/* .light_type = */ 0,
										/* .anm_flg = */ 0,
										/* .pad = */ 0,
										/* .light_name = */ {
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
											/* [27] = */ 0
										}
									}
								}
							}
						},
						/* .all_lit = */ {
							/* base class 0 = */ {
								/* .m_aData = */ {
									/* [0] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [1] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [2] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [3] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [4] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [5] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [6] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [7] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [8] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [9] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [10] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [11] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [12] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [13] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [14] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [15] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [16] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [17] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [18] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [19] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [20] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [21] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [22] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [23] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [24] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [25] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [26] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [27] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [28] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [29] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [30] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [31] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [32] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [33] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [34] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									},
									/* [35] = */ {
										/* .vDiffuse = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vSpecular = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vAmbient = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vPosition = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .vDirection = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f,
											/* [2] = */ 0.f,
											/* [3] = */ 0.f
										},
										/* .Type = */ G3DLIGHT_DIRECTIONAL,
										/* .fAngleInside = */ 0.f,
										/* .fAngleOutside = */ 0.f,
										/* .fMaxRange = */ 0.f,
										/* .fMinRange = */ 0.f,
										/* .fFalloff = */ 0.f,
										/* .afPad0 = */ {
											/* [0] = */ 0.f,
											/* [1] = */ 0.f
										}
									}
								}
							}
						},
						/* .amb = */ {
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
									}
								}
							}
						},
						/* .lit_top = */ NULL,
						/* .ilit_num = */ 0,
						/* .slit_num = */ 0,
						/* .plit_num = */ 0,
						/* .all_lit_num = */ 0,
						/* .hand_spot_no = */ 0
					},
					/* .cam_file_hdr = */ NULL,
					/* .cam_frame_top = */ NULL,
					/* .cam_frame = */ NULL,
					/* .cam_frame_next = */ NULL,
					/* .lit_file_hdr = */ NULL,
					/* .lit_frame_top = */ NULL,
					/* .lit_frame = */ NULL,
					/* .lit_frame_next = */ NULL,
					/* .eff_file_hdr = */ NULL,
					/* .eff_frame_top = */ NULL,
					/* .eff_frame = */ NULL,
					/* .now_frame = */ 0,
					/* .frame_max = */ 0,
					/* .now_reso = */ 0,
					/* .resolution = */ 0,
					/* .end_flg = */ 0,
					/* .float_now_frame = */ 0.f,
					/* .cut_timing_index = */ 0
				},
				/* .fog = */ {
					/* .min = */ 0.f,
					/* .max = */ 0.f,
					/* .near = */ 0.f,
					/* .far = */ 0.f,
					/* .r = */ 0,
					/* .g = */ 0,
					/* .b = */ 0,
					/* .pad = */ 0
				},
				/* .CameraData = */ {
					/* .vPosition = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .vTarget = */ {
						/* [0] = */ 0.f,
						/* [1] = */ 0.f,
						/* [2] = */ 0.f,
						/* [3] = */ 0.f
					},
					/* .fRoll = */ 0.f,
					/* .fFov = */ 0.f,
					/* .fNearZ = */ 0.f,
					/* .fFarZ = */ 0.f
				},
				/* .man_mdl_num = */ 0,
				/* .door_num = */ 0,
				/* .furn_num = */ 0,
				/* .item_num = */ 0,
				/* .scn_data_addr = */ NULL,
				/* .light_rev_addr = */ NULL,
				/* .effect_addr = */ NULL,
				/* .pMimBuf = */ NULL,
				/* .scene_no = */ 0,
				/* .room_no = */ 0,
				/* .sub_room_no = */ 0,
				/* .count_flg = */ 0,
				/* .mirror_flg = */ 0,
				/* .init_flg = */ 0,
				/* .fNearZBak = */ 0.f,
				/* .fFarZBak = */ 0.f,
				/* .DrawAneFlg = */ 0,
				/* .DrawImoutoFlg = */ 0,
				/* .DoubleBufferId = */ 0,
				/* .AreaNoBak = */ 0,
				/* .MonotoneEnableBak = */ 0,
				/* .pPlayerAccessoryPk2 = */ NULL,
				/* .pSisterAccessoryPk2 = */ NULL
			}
		}
	}
};

SCENE_LOAD_CTRL scene_load = {
	/* .buf_id = */ 0,
	/* .status = */ 0,
	/* .id = */ {
		/* base class 0 = */ {
			/* .m_aData = */ {
				/* [0] = */ 0,
				/* [1] = */ 0,
				/* [2] = */ 0
			}
		}
	},
	/* .file_num = */ 0,
	/* .adpcm_id = */ 0
};

int scn_vib_time0 = 0;
int scn_vib_time1 = 0;
static reference_fixed_array<AREA_PREFIX_TO_NO,10> area_prefix_to_no;
unsigned char SCENE_CTRL type_info node[8];
unsigned char SCN_ANM_MDL type_info node[8];
unsigned char FOD_LIT_SERIAL type_info node[8];
unsigned char G3DLIGHT type_info node[8];
unsigned char float [3] type_info node[8];
unsigned char AREA_PREFIX_TO_NO type_info node[8];

SCENE_FILE scene_file = {
	/* .scn_file_addr = */ NULL,
	/* .file_num = */ 0,
	/* .ofs_top_addr = */ NULL,
	/* .hdr_addr = */ NULL,
	/* .cam_fod_addr = */ NULL,
	/* .lit_fod_addr = */ NULL,
	/* .eff_fod_addr = */ NULL,
	/* .man_mot_addr = */ NULL,
	/* .man_mim_addr = */ NULL,
	/* .furn_mot_addr = */ NULL,
	/* .door_mot_addr = */ NULL,
	/* .item_mot_addr = */ NULL
};

static int scn_now_play_id;

G3DLIGHT PlayerLightBackup = {
	/* .vDiffuse = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .vSpecular = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .vAmbient = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .vPosition = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .vDirection = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	},
	/* .Type = */ G3DLIGHT_DIRECTIONAL,
	/* .fAngleInside = */ 0.f,
	/* .fAngleOutside = */ 0.f,
	/* .fMaxRange = */ 0.f,
	/* .fMinRange = */ 0.f,
	/* .fFalloff = */ 0.f,
	/* .afPad0 = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3c5030;
	
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17AREA_PREFIX_TO_NO(0x3f3d60,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17AREA_PREFIX_TO_NO(0x3f3d68,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf17AREA_PREFIX_TO_NO(0x3c5078,_max);
  }
  return (uint **)0x0;
}

int SceneAllLoad(int scene_no, u_int *load_addr) {
	static char __FUNCTION__[13] = {
		/* [0] = */ 83,
		/* [1] = */ 99,
		/* [2] = */ 101,
		/* [3] = */ 110,
		/* [4] = */ 101,
		/* [5] = */ 65,
		/* [6] = */ 108,
		/* [7] = */ 108,
		/* [8] = */ 76,
		/* [9] = */ 111,
		/* [10] = */ 97,
		/* [11] = */ 100,
		/* [12] = */ 0
	};
	int ret;
	int hxd_no;
	
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  switch(scene_load.status) {
  case 0:
    puVar1 = SceneDataLoadReq__FiPUi(scene_no,load_addr);
    if (0x200000 < (uint)((int)puVar1 - (int)load_addr)) {
      SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
      PrintAssertReal("Scene data size over 0x%x");
    }
    scene_load.status = 1;
    printf("scene data load req\n");
    iVar2 = 0;
    break;
  case 1:
    iVar3 = SceneDataLoadWait__Fv();
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      SceneCtrlInit__Fv();
      SceneManModelLoadReq__Fv();
      scene_load.status = 2;
    }
    break;
  case 2:
    iVar3 = SceneManModelLoadWait__Fv();
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      SceneItemModelLoadReq__Fv();
      scene_load.status = 3;
    }
    break;
  case 3:
    iVar3 = SceneItemModelLoadIsEnd__Fv();
    if (iVar3 != 0) {
      scene_load.status = 4;
    }
    break;
  case 4:
    iVar2 = SceneSceneNoToAdpcmNo__Fi(scene_no);
    scene_load.adpcm_id = StreamAutoPreload(iVar2 + 1,iVar2,0xd,0,0,0x3200,0,(_SND_3D_SET *)0x0);
    scene_load.status = 5;
    printf("scene adpcm load req : %d\n");
    iVar2 = 0;
    break;
  case 5:
    iVar3 = StreamAutoIsPreload(scene_load.adpcm_id);
    if (iVar3 != 0) {
      scene_load.status = 0;
      iVar2 = 1;
      printf("scene adpcm load finish\n");
    }
  }
  return iVar2;
}

static void SceneManModelLoadReq() {
	SCENE_CTRL *sc;
	int i;
	
  uint ModelNo;
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar1 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
  if (0 < scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num) {
    puVar3 = &scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl.field0_0x0.m_aData[0].mdl_no;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar2 = 0;
    do {
                    /* end of inlined section */
      iVar4 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar2,8);
      ModelNo = *puVar3;
      puVar3 = puVar3 + 0x13;
      iVar2 = SceneManModelNoChange__Fi(ModelNo);
      mmanageReqMdl__Fi(iVar2);
                    /* end of inlined section */
      iVar2 = iVar4;
    } while (iVar4 < scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num);
  }
  return;
}

static void SceneItemModelLoadReq() {
	SCENE_CTRL *sc;
	int i;
	
  uint mdl_no;
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
  if (0 < scene_ctrl.field0_0x0.m_aData[iVar1].item_num) {
    puVar2 = &scene_ctrl.field0_0x0.m_aData[iVar1].item_mdl.field0_0x0.m_aData[0].mdl_no;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar4 = 0;
    do {
                    /* end of inlined section */
      iVar3 = iVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
                    /* end of inlined section */
      mdl_no = *puVar2;
      puVar2 = puVar2 + 0x13;
      mmanageReqItemMdl__Fi(mdl_no);
      iVar4 = iVar3;
    } while (iVar3 < scene_ctrl.field0_0x0.m_aData[iVar1].item_num);
  }
  iVar1 = GetPlyrAcsNo__Fv();
  if (-1 < iVar1) {
    iVar1 = GetPlyrAcsNo__Fv();
    mmanageReqItemMdl__Fi(iVar1);
  }
  iVar1 = GetSisterAcsNo__Fv();
  if (-1 < iVar1) {
    iVar1 = GetSisterAcsNo__Fv();
    mmanageReqItemMdl__Fi(iVar1);
  }
  return;
}

static int SceneItemModelLoadIsEnd() {
	SCENE_CTRL *sc;
	int i;
	int RetVal;
	
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar6 = 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
  if (0 < scene_ctrl.field0_0x0.m_aData[iVar3].item_num) {
    iVar4 = iVar3 * 0x2130 + 0x33f578;
    iVar1 = 0;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      iVar5 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar1,8);
                    /* end of inlined section */
      iVar1 = mmanageIsReadyItemMdl__FiPii(*(int *)(iVar4 + 0x24),(int *)(int **)(iVar4 + 0x44),1);
      if (iVar1 == 0) {
        iVar6 = 0;
      }
      else {
        piVar2 = GetItemSgdAddr__FPi(*(int **)(iVar4 + 0x44));
        *(int **)(iVar4 + 0x30) = piVar2;
      }
      iVar4 = iVar4 + 0x4c;
      iVar1 = iVar5;
    } while (iVar5 < scene_ctrl.field0_0x0.m_aData[iVar3].item_num);
  }
  iVar1 = GetPlyrAcsNo__Fv();
  if (-1 < iVar1) {
    iVar1 = GetPlyrAcsNo__Fv();
    iVar1 = mmanageIsReadyItemMdl__FiPii
                      (iVar1,(int *)&scene_ctrl.field0_0x0.m_aData[iVar3].pPlayerAccessoryPk2,1);
    if (iVar1 == 0) {
      iVar6 = 0;
    }
  }
  iVar1 = GetSisterAcsNo__Fv();
  if (-1 < iVar1) {
    iVar1 = GetSisterAcsNo__Fv();
    iVar3 = mmanageIsReadyItemMdl__FiPii
                      (iVar1,(int *)&scene_ctrl.field0_0x0.m_aData[iVar3].pSisterAccessoryPk2,1);
    if (iVar3 == 0) {
      iVar6 = 0;
    }
  }
  return iVar6;
}

static void SceneManModelClear() {
	SCENE_CTRL *sc;
	int i;
	
  uint ModelNo;
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  iVar1 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
  if (0 < scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num) {
    puVar3 = &scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl.field0_0x0.m_aData[0].mdl_no;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar2 = 0;
    do {
                    /* end of inlined section */
      iVar4 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar2,8);
                    /* end of inlined section */
      ModelNo = *puVar3;
      puVar3 = puVar3 + 0x13;
      iVar2 = SceneManModelNoChange__Fi(ModelNo);
      mmanageClearMdl__Fi(iVar2);
      iVar2 = iVar4;
    } while (iVar4 < scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num);
  }
  return;
}

static void SceneItemModelClear() {
	SCENE_CTRL *sc;
	int i;
	
  uint mdl_no;
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
  if (0 < scene_ctrl.field0_0x0.m_aData[iVar1].item_num) {
    puVar2 = &scene_ctrl.field0_0x0.m_aData[iVar1].item_mdl.field0_0x0.m_aData[0].mdl_no;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    iVar4 = 0;
    do {
                    /* end of inlined section */
      iVar3 = iVar4 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
                    /* end of inlined section */
      mdl_no = *puVar2;
      puVar2 = puVar2 + 0x13;
      mmanageClearItemMdl__Fi(mdl_no);
      iVar4 = iVar3;
    } while (iVar3 < scene_ctrl.field0_0x0.m_aData[iVar1].item_num);
  }
  iVar1 = GetPlyrAcsNo__Fv();
  if (-1 < iVar1) {
    iVar1 = GetPlyrAcsNo__Fv();
    mmanageClearItemMdl__Fi(iVar1);
  }
  iVar1 = GetSisterAcsNo__Fv();
  if (-1 < iVar1) {
    iVar1 = GetSisterAcsNo__Fv();
    mmanageClearItemMdl__Fi(iVar1);
  }
  return;
}

static void SceneDoorModelDBFree() {
	int i;
	
  _HEAP_WRK *wrk;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
  iVar1 = iVar2 * 0x2130 + 0x33f7d8;
  iVar2 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar3 = iVar2 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar2,8);
                    /* end of inlined section */
    if (*(int *)(iVar1 + 0x34) != 0) {
      wrk = GetSystemHeapWrkP__Fv();
      heapCtrlFree(wrk,*(void **)(iVar1 + 0x34));
      *(undefined4 *)(iVar1 + 0x34) = 0;
    }
    iVar1 = iVar1 + 0x4c;
    iVar2 = iVar3;
  } while (iVar3 < 8);
  return;
}

static int SceneManModelLoadWait() {
	int ret;
	SCENE_CTRL *sc;
	int i;
	
  fixed_array<SCN_ANM_MDL,8> *pfVar1;
  int iVar2;
  int iVar3;
  SCENE_CTRL *pSVar4;
  int iVar5;
  
  iVar2 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar5 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
  pSVar4 = scene_ctrl.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
  if (0 < scene_ctrl.field0_0x0.m_aData[iVar2].man_mdl_num) {
    do {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar5,8);
      iVar3 = SceneManModelNoChange__Fi((pSVar4->man_mdl).field0_0x0.m_aData[0].mdl_no);
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar5,8);
      pfVar1 = &pSVar4->man_mdl;
                    /* end of inlined section */
      pSVar4 = (SCENE_CTRL *)((pSVar4->man_mdl).field0_0x0.m_aData + 1);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar5 = iVar5 + 1;
      iVar3 = mmanageIsReadyMdl__FiPii(iVar3,(int *)&(pfVar1->field0_0x0).m_aData[0].mdl_addr,1);
      if (iVar3 == 0) {
        return 0;
      }
    } while (iVar5 < scene_ctrl.field0_0x0.m_aData[iVar2].man_mdl_num);
  }
  return 1;
}

static u_int* SceneDataLoadReq(int scene_no, u_int *load_addr) {
	SCENE_CTRL *sc;
	u_int *scn_addr;
	int scn_file_no;
	int i;
	int next_addr;
	
  int file_no;
  uint *addr;
  uint *puVar1;
  int iVar2;
  int iVar3;
  fixed_array<SCENE_CTRL,2> *pfVar4;
  int *piVar5;
  
  pfVar4 = &scene_ctrl;
  file_no = GetFileNoFromSceneNo__Fi(scene_no);
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(iVar3,2);
    iVar2 = iVar3 + 1;
    if ((((SCENE_CTRL *)pfVar4)->init_flg == 1) &&
       (_fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(iVar3,2),
       ((SCENE_CTRL *)pfVar4)->scene_no == scene_no)) {
      return (uint *)0x0;
    }
                    /* end of inlined section */
    pfVar4 = (fixed_array<SCENE_CTRL,2> *)((int)pfVar4 + 0x2130);
    iVar3 = iVar2;
  } while (iVar2 < 2);
  piVar5 = &scene_ctrl.field0_0x0.m_aData[0].init_flg;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(iVar3,2);
    iVar2 = *piVar5;
    piVar5 = piVar5 + 0x84c;
    if (iVar2 == 0) goto LAB_00249590;
  }
  printf("Warning!! There is no buffer which can be loaded.\n");
  scene_load.buf_id = 0;
  iVar3 = scene_load.buf_id;
LAB_00249590:
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  scene_load.buf_id = iVar3;
  iVar3 = scene_load.buf_id;
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  printf("scene load buf no = %d\n");
  iVar2 = scene_load.file_num;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  scene_ctrl.field0_0x0.m_aData[iVar3].scene_no = scene_no;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar2,3);
  addr = (uint *)LoadReqGetAddr__FiUiPi
                           (file_no,(uint)load_addr,scene_load.id.field0_0x0.m_aData + iVar2);
                    /* end of inlined section */
  scene_ctrl.field0_0x0.m_aData[iVar3].scn_data_addr = load_addr;
  iVar2 = scene_load.file_num;
  scene_ctrl.field0_0x0.m_aData[iVar3].light_rev_addr = addr;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  scene_load.file_num = scene_load.file_num + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(scene_load.file_num,3);
  puVar1 = (uint *)LoadReqGetAddr__FiUiPi
                             (file_no + 1,(uint)addr,scene_load.id.field0_0x0.m_aData + iVar2 + 1);
                    /* end of inlined section */
  if (puVar1 == (uint *)0x0) {
    scene_ctrl.field0_0x0.m_aData[iVar3].light_rev_addr = (uint *)0x0;
  }
  else {
    scene_load.file_num = scene_load.file_num + 1;
    addr = puVar1;
  }
  scene_ctrl.field0_0x0.m_aData[iVar3].effect_addr = addr;
  iVar2 = scene_load.file_num;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(scene_load.file_num,3);
  puVar1 = (uint *)LoadReqGetAddr__FiUiPi
                             (file_no + 2,(uint)addr,scene_load.id.field0_0x0.m_aData + iVar2);
                    /* end of inlined section */
  if (puVar1 == (uint *)0x0) {
    scene_ctrl.field0_0x0.m_aData[iVar3].effect_addr = (uint *)0x0;
  }
  else {
    scene_load.file_num = scene_load.file_num + 1;
    addr = puVar1;
  }
  return addr;
}

int SceneDataLoadWait() {
	int ret;
	int i;
	
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  SCENE_LOAD_CTRL *pSVar4;
  
  if (scene_load.file_num != 0) {
    pSVar4 = (SCENE_LOAD_CTRL *)(&scene_load.status + scene_load.file_num);
    iVar3 = scene_load.file_num + -1;
    while (-1 < iVar3) {
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Zi_UiUi_PX01(iVar3,3);
      uVar1 = &pSVar4->buf_id;
      pSVar4 = (SCENE_LOAD_CTRL *)((int)(pSVar4 + 0xffffffff) + 0x18);
      iVar2 = IsLoadEnd__Fi(*(int *)uVar1);
      if (iVar2 == 0) {
        return 0;
      }
                    /* end of inlined section */
      scene_load.file_num = scene_load.file_num + -1;
      iVar3 = iVar3 + -1;
    }
  }
  return 1;
}

static void SceneCtrlInit() {
	SCENE_CTRL *sc;
	GRA3DCAMERA *pCam;
	int i;
	
  int iVar1;
  GRA3DCAMERA *pGVar2;
  int iVar3;
  SCENE_CTRL *__s;
  fixed_array<SCN_ANM_MDL,14> *__s_00;
  fixed_array<SCN_ANM_MDL,8> *pfVar4;
  int iVar5;
  SCENE_CTRL *sc;
  float fVar6;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  pGVar2 = gra3dGetCamera__Fv();
  iVar1 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
  sc = scene_ctrl.field0_0x0.m_aData + iVar1;
                    /* end of inlined section */
  __s = sc;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
    memset(__s,0,0x4c);
    iVar5 = iVar3 + 1;
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    (__s->man_mdl).field0_0x0.m_aData[0].disp_flg = 1;
    __s = (SCENE_CTRL *)((__s->man_mdl).field0_0x0.m_aData + 1);
    iVar3 = iVar5;
                    /* end of inlined section */
  } while (iVar5 < 8);
  __s_00 = &scene_ctrl.field0_0x0.m_aData[iVar1].furn_mdl;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,0xe);
    memset(__s_00,0,0x4c);
    iVar5 = iVar3 + 1;
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,0xe);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    (__s_00->field0_0x0).m_aData[0].disp_flg = 1;
    __s_00 = (fixed_array<SCN_ANM_MDL,14> *)((__s_00->field0_0x0).m_aData + 1);
    iVar3 = iVar5;
                    /* end of inlined section */
  } while (iVar5 < 0xe);
  pfVar4 = &scene_ctrl.field0_0x0.m_aData[iVar1].door_mdl;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
    memset(pfVar4,0,0x4c);
    iVar5 = iVar3 + 1;
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    (pfVar4->field0_0x0).m_aData[0].disp_flg = 1;
    pfVar4 = (fixed_array<SCN_ANM_MDL,8> *)((pfVar4->field0_0x0).m_aData + 1);
    iVar3 = iVar5;
                    /* end of inlined section */
  } while (iVar5 < 8);
  pfVar4 = &scene_ctrl.field0_0x0.m_aData[iVar1].item_mdl;
  iVar3 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
    memset(pfVar4,0,0x4c);
    iVar5 = iVar3 + 1;
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    (pfVar4->field0_0x0).m_aData[0].disp_flg = 1;
    pfVar4 = (fixed_array<SCN_ANM_MDL,8> *)((pfVar4->field0_0x0).m_aData + 1);
    iVar3 = iVar5;
                    /* end of inlined section */
  } while (iVar5 < 8);
  SceneDataAnalyze__FP10SCENE_FILEPUi
            (&scene_file,scene_ctrl.field0_0x0.m_aData[iVar1].scn_data_addr);
  SceneInitEnvironment__FP10SCENE_FILEP10SCENE_CTRL(&scene_file,sc);
  fVar6 = pGVar2->fNearZ;
  scene_ctrl.field0_0x0.m_aData[iVar1].init_flg = 1;
  scene_ctrl.field0_0x0.m_aData[iVar1].fNearZBak = fVar6;
  scene_ctrl.field0_0x0.m_aData[iVar1].count_flg = 1;
  fVar6 = pGVar2->fFarZ;
  scene_ctrl.field0_0x0.m_aData[iVar1].pMimBuf = (uint *)0x0;
  scene_ctrl.field0_0x0.m_aData[iVar1].fFarZBak = fVar6;
  iVar3 = gra3dIsMonotoneDrawEnable__Fv();
  scene_ctrl.field0_0x0.m_aData[iVar1].MonotoneEnableBak = iVar3;
  scene_ctrl.field0_0x0.m_aData[iVar1].pSisterAccessoryPk2 = (int *)0x0;
  scene_ctrl.field0_0x0.m_aData[iVar1].pPlayerAccessoryPk2 = (int *)0x0;
  scene_load.file_num = 0;
  return;
}

void SceneInitializeIngame() {
  int iVar1;
  int iVar2;
  
  iVar1 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
  mimClearToScene__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  MovieTitleInit__Fi(scene_ctrl.field0_0x0.m_aData[iVar1].scene_no);
  MapDrawEnableFlashlightOnly__Fi(0);
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
  PlayerLightBackup.vDiffuse[0] = plyr_wrk.fl.vDiffuse[0];
  PlayerLightBackup.vDiffuse[1] = plyr_wrk.fl.vDiffuse[1];
  PlayerLightBackup.vDiffuse[2] = plyr_wrk.fl.vDiffuse[2];
  PlayerLightBackup.vDiffuse[3] = plyr_wrk.fl.vDiffuse[3];
  PlayerLightBackup.vSpecular[0] = plyr_wrk.fl.vSpecular[0];
  PlayerLightBackup.vSpecular[1] = plyr_wrk.fl.vSpecular[1];
  PlayerLightBackup.vSpecular[2] = plyr_wrk.fl.vSpecular[2];
  PlayerLightBackup.vSpecular[3] = plyr_wrk.fl.vSpecular[3];
  PlayerLightBackup.vAmbient[0] = plyr_wrk.fl.vAmbient[0];
  PlayerLightBackup.vAmbient[1] = plyr_wrk.fl.vAmbient[1];
  PlayerLightBackup.vAmbient[2] = plyr_wrk.fl.vAmbient[2];
  PlayerLightBackup.vAmbient[3] = plyr_wrk.fl.vAmbient[3];
  PlayerLightBackup.vPosition[0] = plyr_wrk.fl.vPosition[0];
  PlayerLightBackup.vPosition[1] = plyr_wrk.fl.vPosition[1];
  PlayerLightBackup.vPosition[2] = plyr_wrk.fl.vPosition[2];
  PlayerLightBackup.vPosition[3] = plyr_wrk.fl.vPosition[3];
  PlayerLightBackup.vDirection[0] = plyr_wrk.fl.vDirection[0];
  PlayerLightBackup.vDirection[1] = plyr_wrk.fl.vDirection[1];
  PlayerLightBackup.vDirection[2] = plyr_wrk.fl.vDirection[2];
  PlayerLightBackup.vDirection[3] = plyr_wrk.fl.vDirection[3];
  PlayerLightBackup.Type = plyr_wrk.fl.Type;
  PlayerLightBackup.fAngleInside = plyr_wrk.fl.fAngleInside;
  PlayerLightBackup.fAngleOutside = plyr_wrk.fl.fAngleOutside;
  PlayerLightBackup.fMaxRange = plyr_wrk.fl.fMaxRange;
  PlayerLightBackup.fMinRange = plyr_wrk.fl.fMinRange;
  PlayerLightBackup.fFalloff = plyr_wrk.fl.fFalloff;
  PlayerLightBackup.afPad0[0] = plyr_wrk.fl.afPad0[0];
  PlayerLightBackup.afPad0[1] = plyr_wrk.fl.afPad0[1];
                    /* end of inlined section */
  iVar2 = ChrSortDelete__Fi(0);
  scene_ctrl.field0_0x0.m_aData[iVar1].DrawAneFlg = iVar2;
  iVar2 = ChrSortDelete__Fi(1);
  scene_ctrl.field0_0x0.m_aData[iVar1].DrawImoutoFlg = iVar2;
  ChrSortSetFlg__Fi(1);
  MapObjItemOff__Fv();
  EffScreenEffectStatusSet__Fi(3);
  SceneInitAfterModelLoad__Fi(1);
  return;
}

static void SceneDataAnalyze(SCENE_FILE *sf, u_int *scn_addr) {
  uint uVar1;
  uint *puVar2;
  
  sf->ofs_top_addr = scn_addr + 4;
  uVar1 = *scn_addr;
  sf->scn_file_addr = scn_addr;
  sf->file_num = uVar1;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,0);
  sf->hdr_addr = puVar2;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,1);
  sf->cam_fod_addr = puVar2;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,2);
  sf->lit_fod_addr = puVar2;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,3);
  sf->eff_fod_addr = puVar2;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,4);
  sf->man_mot_addr = puVar2;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,5);
  sf->man_mim_addr = puVar2;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,6);
  sf->furn_mot_addr = puVar2;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,7);
  sf->door_mot_addr = puVar2;
  puVar2 = GetADRTBL__FPUiUi(scn_addr,8);
  sf->item_mot_addr = puVar2;
  printf("sf->scn_file_addr = 0x%x\n");
  printf("sf->file_num = %d\n");
  printf("sf->ofs_top_addr = 0x%x\n");
  printf("sf->hdr_addr = 0x%x\n");
  printf("sf->cam_fod_addr = 0x%x\n");
  printf("sf->lit_fod_addr = 0x%x\n");
  printf("sf->eff_fod_addr = 0x%x\n");
  printf("sf->man_mot_addr = 0x%x\n");
  printf("sf->man_mim_addr = 0x%x\n");
  printf("sf->furn_mot_addr = 0x%x\n");
  printf("sf->door_mot_addr = 0x%x\n");
  printf("sf->item_mot_addr = 0x%x\n");
  return;
}

static void SceneGetHeaderData(SCENE_CTRL *sc, u_int *hdr_top) {
	char *pPrefix;
	
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  char *pcVar6;
  
  printf("(unsigned int)hdr_top = 0x%x\n");
  iVar5 = PrefixToRoomNo__FPCc((char *)(hdr_top + 1));
  sc->room_no = iVar5;
  iVar5 = PrefixToRoomNo__FPCc((char *)((int)hdr_top + 10));
  sVar1 = *(short *)((int)hdr_top + 0x12);
  sVar2 = *(short *)(hdr_top + 6);
  sVar3 = *(short *)(hdr_top + 4);
  sVar4 = *(short *)((int)hdr_top + 0x16);
  sc->door_num = (int)*(short *)(hdr_top + 5);
  sc->furn_num = (int)sVar4;
  sc->item_num = (int)sVar2;
  sc->sub_room_no = iVar5;
  sc->mirror_flg = (int)sVar3;
  sc->man_mdl_num = (int)sVar1;
  if (8 < sVar1) {
    printf("ManMdl Num Over!!\n");
  }
  if (sc->door_num < 9) {
    iVar5 = sc->furn_num;
  }
  else {
    printf("DoorMdl Num Over!!\n");
    iVar5 = sc->furn_num;
  }
  if (iVar5 < 0xf) {
    iVar5 = sc->item_num;
  }
  else {
    printf("FurnMdl Num Over!!\n");
    iVar5 = sc->item_num;
  }
  if (8 < iVar5) {
    printf("ItemMdl Num Over!!\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  }
  _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(0,8);
  pcVar6 = GetHeaderMdlNo__FP11SCN_ANM_MDLiPc
                     ((SCN_ANM_MDL *)sc,sc->man_mdl_num,(char *)(hdr_top + 8));
  _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(0,8);
  pcVar6 = GetHeaderMdlNo__FP11SCN_ANM_MDLiPc((SCN_ANM_MDL *)&sc->door_mdl,sc->door_num,pcVar6);
  _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(0,0xe);
  pcVar6 = GetHeaderMdlNo__FP11SCN_ANM_MDLiPc((SCN_ANM_MDL *)&sc->furn_mdl,sc->furn_num,pcVar6);
  _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(0,8);
  GetHeaderMdlNo__FP11SCN_ANM_MDLiPc((SCN_ANM_MDL *)&sc->item_mdl,sc->item_num,pcVar6);
  return;
}

static void SceneInitEnvironment(SCENE_FILE *sf, SCENE_CTRL *sc) {
  float fVar1;
  
  SceneGetHeaderData__FP10SCENE_CTRLPUi(sc,sf->hdr_addr);
  (sc->fog).min = 0.0;
  fVar1 = DAT_003ee828;
  (sc->fog).r = 0x10;
  (sc->fog).max = 255.0;
  (sc->fog).near = 1000.0;
  (sc->fog).far = fVar1;
  (sc->fog).b = 0x10;
  (sc->fog).g = 0x10;
  scn_vib_time1 = 0;
  scn_vib_time0 = 0;
  return;
}

void SceneInitAfterModelLoad(int MimInit) {
	SCENE_FILE *sf;
	SCENE_CTRL *sc;
	float offset[4];
	ANI_CTRL *pAniCtrl;
	int i;
	
  uint ModelNo;
  int iVar1;
  int iVar2;
  ANI_CTRL *ani_ctrl;
  GRA3DLIGHTDATA *lp;
  FOD_CTRL *fc;
  uint *puVar3;
  int iVar4;
  SCENE_CTRL *sc;
  float offset [4];
  
  iVar1 = scene_load.buf_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_load.buf_id,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  sc = scene_ctrl.field0_0x0.m_aData + iVar1;
                    /* end of inlined section */
  fc = &scene_ctrl.field0_0x0.m_aData[iVar1].fod_ctrl;
  MapLoadGetOffsetVector__FPfi(offset,scene_ctrl.field0_0x0.m_aData[iVar1].room_no);
  iVar2 = GetPlyrAreaNo__Fv();
  iVar4 = scene_ctrl.field0_0x0.m_aData[iVar1].room_no;
  scene_ctrl.field0_0x0.m_aData[iVar1].AreaNoBak = iVar2;
  SetPlyrAreaNo__Fi(iVar4);
  FodInit__FP8FOD_CTRLPUiN21Pf
            (fc,scene_file.cam_fod_addr,scene_file.lit_fod_addr,scene_file.eff_fod_addr,offset);
  SceneLightRevision__FP10SCENE_CTRL(sc);
  FodGetFirstCam__FP15FOD_CAMERA_DATAP8FOD_CTRLPf
            (&scene_ctrl.field0_0x0.m_aData[iVar1].CameraData,fc,offset);
  if ((MimInit != 0) && (iVar4 = 0, 0 < scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num)) {
    puVar3 = &scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl.field0_0x0.m_aData[0].mdl_no;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    do {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
      ModelNo = *puVar3;
                    /* end of inlined section */
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 0x13;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar2 = SceneManModelNoChange__Fi(ModelNo);
      ani_ctrl = motSearchANI_CTRL__Fi(iVar2);
                    /* end of inlined section */
      if (ani_ctrl == (ANI_CTRL *)0x0) {
LAB_00249f18:
        iVar2 = scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num;
      }
      else {
        acsResetCloth__FP8ANI_CTRL(ani_ctrl);
        mimClearAllVertex__FP8ANI_CTRL(ani_ctrl);
        mimInitWeight__FP8ANI_CTRL(ani_ctrl);
        if ((plyr_wrk.cmn_wrk.st.sta & 0x8000) != 0) {
          iVar2 = GetPlyrMdlNo__Fv();
          if (ani_ctrl->mdl_no == iVar2) {
            mimRequestNum__FP8ANI_CTRLiUc(ani_ctrl,0x19,'\0');
            IgEffectRenzFlareDispFlgSet__Fi(1);
          }
          goto LAB_00249f18;
        }
        iVar2 = scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num;
      }
    } while (iVar4 < iVar2);
  }
  SceneCheckModelEntry__FP10SCENE_CTRL(sc);
  SceneAllMdlInit__FP10SCENE_CTRLP10SCENE_FILE(sc,&scene_file);
  MapObjGetModelAddr__Fii(3,0x18);
  lp = FodGetGra3DLight__Fv();
  MapDrawSetSpRoomLight__FP14GRA3DLIGHTDATA(lp);
  SceneEffectInit__Fv();
  return;
}

static void SceneLightRevision(SCENE_CTRL *sc) {
	float amb[4];
	FOD_LIGHT *fl;
	u_int *lit_addr;
	int i;
	int err_flg;
	float *pv0;
	
  undefined *puVar1;
  float *pfVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  float (*pafVar9) [4];
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong *puVar13;
  ulong in_a1;
  ulong uVar14;
  ulong in_a2;
  ulong in_a3;
  ulong in_t0;
  char *pcVar15;
  FOD_CTRL *pFVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int iVar22;
  float amb [4];
  
  puVar19 = sc->light_rev_addr;
  pFVar16 = &sc->fod_ctrl;
  if (puVar19 == (uint *)0x0) {
    printf("Warning!! Light Revision Data Not Found.\n");
  }
  else {
    puVar18 = puVar19 + 4;
    uVar11 = (sc->fod_ctrl).fod_light.all_lit_num;
    bVar4 = uVar11 != *puVar19;
    pcVar15 = (sc->fod_ctrl).fod_light.lit_serial.field0_0x0.m_aData[0].light_name;
    iVar22 = 0;
    while (uVar17 = (ulong)(int)pcVar15, iVar22 < (int)uVar11) {
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(iVar22,0x24);
      iVar5 = strcmp((char *)(puVar18 + 1),pcVar15);
      puVar18 = puVar18 + 0x24;
      in_a1 = uVar17;
      if (iVar5 != 0) {
                    /* end of inlined section */
        bVar4 = true;
        break;
      }
      pcVar15 = pcVar15 + 0x20;
      iVar22 = iVar22 + 1;
      uVar11 = (sc->fod_ctrl).fod_light.all_lit_num;
    }
    uVar17 = 0x3c0000;
    if (bVar4) {
      printf("Waning!! Light Revision Data is Wrong.\n");
    }
    else {
      uVar10 = (ulong)(int)sc->light_rev_addr;
      uVar21 = 0;
      puVar19 = sc->light_rev_addr + 4;
      if (0 < (int)(sc->fod_ctrl).fod_light.all_lit_num) {
        iVar22 = 0;
        do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          uVar14 = 0x24;
          uVar17 = uVar21;
          uVar6 = _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01();
          uVar11 = (int)puVar19 + 7U & 7;
          uVar12 = (uint)puVar19 & 7;
          uVar6 = (*(long *)(((int)puVar19 + 7U) - uVar11) << (7 - uVar11) * 8 |
                  uVar6 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                  *(ulong *)((int)puVar19 - uVar12) >> uVar12 * 8;
          uVar11 = (int)puVar19 + 0xfU & 7;
          uVar12 = (uint)(puVar19 + 2) & 7;
          uVar10 = (*(long *)(((int)puVar19 + 0xfU) - uVar11) << (7 - uVar11) * 8 |
                   uVar10 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                   *(ulong *)((int)(puVar19 + 2) - uVar12) >> uVar12 * 8;
          uVar11 = (int)puVar19 + 0x17U & 7;
          uVar12 = (uint)(puVar19 + 4) & 7;
          uVar17 = (*(long *)(((int)puVar19 + 0x17U) - uVar11) << (7 - uVar11) * 8 |
                   uVar17 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                   *(ulong *)((int)(puVar19 + 4) - uVar12) >> uVar12 * 8;
          uVar11 = (int)puVar19 + 0x1fU & 7;
          uVar12 = (uint)(puVar19 + 6) & 7;
          uVar14 = (*(long *)(((int)puVar19 + 0x1fU) - uVar11) << (7 - uVar11) * 8 |
                   uVar14 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                   *(ulong *)((int)(puVar19 + 6) - uVar12) >> uVar12 * 8;
          pcVar15 = (pFVar16->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 3;
          uVar11 = (uint)pcVar15 & 7;
          *(ulong *)(pcVar15 + -uVar11) =
               *(ulong *)(pcVar15 + -uVar11) & -1L << (uVar11 + 1) * 8 | uVar6 >> (7 - uVar11) * 8;
          uVar11 = (uint)pFVar16 & 7;
          *(ulong *)((int)pFVar16 - uVar11) =
               uVar6 << uVar11 * 8 |
               *(ulong *)((int)pFVar16 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          pcVar15 = (pFVar16->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0xb;
          uVar11 = (uint)pcVar15 & 7;
          *(ulong *)(pcVar15 + -uVar11) =
               *(ulong *)(pcVar15 + -uVar11) & -1L << (uVar11 + 1) * 8 | uVar10 >> (7 - uVar11) * 8;
          pcVar15 = (pFVar16->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 4;
          uVar11 = (uint)pcVar15 & 7;
          *(ulong *)(pcVar15 + -uVar11) =
               uVar10 << uVar11 * 8 |
               *(ulong *)(pcVar15 + -uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          pcVar15 = (pFVar16->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0x13;
          uVar11 = (uint)pcVar15 & 7;
          *(ulong *)(pcVar15 + -uVar11) =
               *(ulong *)(pcVar15 + -uVar11) & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
          pcVar15 = (pFVar16->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0xc;
          uVar11 = (uint)pcVar15 & 7;
          *(ulong *)(pcVar15 + -uVar11) =
               uVar17 << uVar11 * 8 |
               *(ulong *)(pcVar15 + -uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          pcVar15 = (pFVar16->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0x1b;
          uVar11 = (uint)pcVar15 & 7;
          *(ulong *)(pcVar15 + -uVar11) =
               *(ulong *)(pcVar15 + -uVar11) & -1L << (uVar11 + 1) * 8 | uVar14 >> (7 - uVar11) * 8;
          pcVar15 = (pFVar16->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0x14;
          uVar11 = (uint)pcVar15 & 7;
          *(ulong *)(pcVar15 + -uVar11) =
               uVar14 << uVar11 * 8 |
               *(ulong *)(pcVar15 + -uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          in_a1 = 0x24;
          uVar10 = (ulong)(int)(puVar19 + 8);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(uVar21);
          uVar11 = (int)(sc->fod_ctrl).fod_light.all_lit.field0_0x0.m_aData[0].vDiffuse + iVar22;
          uVar17 = (ulong)(int)uVar11;
          if ((((uint)(puVar19 + 8) | uVar11) & 7) == 0) {
            do {
              puVar8 = (ulong *)uVar10;
              in_a2 = *puVar8;
              in_a3 = puVar8[1];
              in_t0 = puVar8[2];
              in_a1 = puVar8[3];
              puVar13 = (ulong *)uVar17;
              *puVar13 = in_a2;
              puVar13[1] = in_a3;
              puVar13[2] = in_t0;
              puVar13[3] = in_a1;
              uVar10 = (ulong)(int)(puVar8 + 4);
              uVar17 = (ulong)(int)(puVar13 + 4);
            } while (uVar10 != (long)(int)(puVar19 + 0x20));
          }
          else {
            do {
              uVar7 = (uint)uVar10;
              uVar11 = uVar7 + 7 & 7;
              uVar12 = uVar7 & 7;
              in_a2 = (*(long *)((uVar7 + 7) - uVar11) << (7 - uVar11) * 8 |
                      in_a2 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                      *(ulong *)(uVar7 - uVar12) >> uVar12 * 8;
              uVar11 = uVar7 + 0xf & 7;
              uVar12 = uVar7 + 8 & 7;
              in_a3 = (*(long *)((uVar7 + 0xf) - uVar11) << (7 - uVar11) * 8 |
                      in_a3 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                      *(ulong *)((uVar7 + 8) - uVar12) >> uVar12 * 8;
              uVar11 = uVar7 + 0x17 & 7;
              uVar12 = uVar7 + 0x10 & 7;
              in_t0 = (*(long *)((uVar7 + 0x17) - uVar11) << (7 - uVar11) * 8 |
                      in_t0 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                      *(ulong *)((uVar7 + 0x10) - uVar12) >> uVar12 * 8;
              uVar11 = uVar7 + 0x1f & 7;
              uVar12 = uVar7 + 0x18 & 7;
              in_a1 = (*(long *)((uVar7 + 0x1f) - uVar11) << (7 - uVar11) * 8 |
                      in_a1 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                      *(ulong *)((uVar7 + 0x18) - uVar12) >> uVar12 * 8;
              uVar12 = (uint)uVar17;
              uVar11 = uVar12 + 7 & 7;
              puVar8 = (ulong *)((uVar12 + 7) - uVar11);
              *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | in_a2 >> (7 - uVar11) * 8;
              uVar11 = uVar12 & 7;
              *(ulong *)(uVar12 - uVar11) =
                   in_a2 << uVar11 * 8 |
                   *(ulong *)(uVar12 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
              uVar11 = uVar12 + 0xf & 7;
              puVar8 = (ulong *)((uVar12 + 0xf) - uVar11);
              *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | in_a3 >> (7 - uVar11) * 8;
              uVar11 = uVar12 + 8 & 7;
              puVar8 = (ulong *)((uVar12 + 8) - uVar11);
              *puVar8 = in_a3 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
              uVar11 = uVar12 + 0x17 & 7;
              puVar8 = (ulong *)((uVar12 + 0x17) - uVar11);
              *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | in_t0 >> (7 - uVar11) * 8;
              uVar11 = uVar12 + 0x10 & 7;
              puVar8 = (ulong *)((uVar12 + 0x10) - uVar11);
              *puVar8 = in_t0 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
              uVar11 = uVar12 + 0x1f & 7;
              puVar8 = (ulong *)((uVar12 + 0x1f) - uVar11);
              *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | in_a1 >> (7 - uVar11) * 8;
              uVar11 = uVar12 + 0x18 & 7;
              puVar8 = (ulong *)((uVar12 + 0x18) - uVar11);
              *puVar8 = in_a1 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
              uVar10 = (ulong)(int)(uVar7 + 0x20);
              uVar17 = (ulong)(int)(uVar12 + 0x20);
            } while (uVar10 != (long)(int)(puVar19 + 0x20));
          }
          uVar7 = (uint)uVar10;
          uVar11 = uVar7 + 7 & 7;
          uVar12 = uVar7 & 7;
          in_a2 = (*(long *)((uVar7 + 7) - uVar11) << (7 - uVar11) * 8 |
                  in_a2 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                  *(ulong *)(uVar7 - uVar12) >> uVar12 * 8;
          uVar11 = uVar7 + 0xf & 7;
          uVar12 = uVar7 + 8 & 7;
          in_a3 = (*(long *)((uVar7 + 0xf) - uVar11) << (7 - uVar11) * 8 |
                  in_a3 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
                  *(ulong *)((uVar7 + 8) - uVar12) >> uVar12 * 8;
          uVar12 = (uint)uVar17;
          uVar11 = uVar12 + 7 & 7;
          puVar8 = (ulong *)((uVar12 + 7) - uVar11);
          *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | in_a2 >> (7 - uVar11) * 8;
          uVar11 = uVar12 & 7;
          *(ulong *)(uVar12 - uVar11) =
               in_a2 << uVar11 * 8 |
               *(ulong *)(uVar12 - uVar11) & 0xffffffffffffffffU >> (8 - uVar11) * 8;
          uVar11 = uVar12 + 0xf & 7;
          puVar8 = (ulong *)((uVar12 + 0xf) - uVar11);
          *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | in_a3 >> (7 - uVar11) * 8;
                    /* end of inlined section */
          uVar21 = (ulong)((int)uVar21 + 1);
          puVar19 = puVar19 + 0x24;
          iVar22 = iVar22 + 0x70;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          uVar11 = uVar12 + 8 & 7;
          puVar8 = (ulong *)((uVar12 + 8) - uVar11);
          *puVar8 = in_a3 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
                    /* end of inlined section */
          pFVar16 = (FOD_CTRL *)((pFVar16->fod_light).lit_serial.field0_0x0.m_aData + 1);
        } while ((long)uVar21 < (long)(int)(sc->fod_ctrl).fod_light.all_lit_num);
      }
      uVar11 = (int)puVar19 + 7U & 7;
      uVar12 = (uint)puVar19 & 7;
      uVar10 = (*(long *)(((int)puVar19 + 7U) - uVar11) << (7 - uVar11) * 8 |
               uVar10 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
               *(ulong *)((int)puVar19 - uVar12) >> uVar12 * 8;
      uVar11 = (int)puVar19 + 0xfU & 7;
      uVar12 = (uint)(puVar19 + 2) & 7;
      uVar17 = (*(long *)(((int)puVar19 + 0xfU) - uVar11) << (7 - uVar11) * 8 |
               uVar17 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
               *(ulong *)((int)(puVar19 + 2) - uVar12) >> uVar12 * 8;
      uVar11 = (int)puVar19 + 0x17U & 7;
      uVar12 = (uint)(puVar19 + 4) & 7;
      uVar21 = (*(long *)(((int)puVar19 + 0x17U) - uVar11) << (7 - uVar11) * 8 |
               in_a1 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
               *(ulong *)((int)(puVar19 + 4) - uVar12) >> uVar12 * 8;
      uVar11 = (int)puVar19 + 0x1fU & 7;
      uVar12 = (uint)(puVar19 + 6) & 7;
      uVar6 = (*(long *)(((int)puVar19 + 0x1fU) - uVar11) << (7 - uVar11) * 8 |
              in_a2 & 0xffffffffffffffffU >> (uVar11 + 1) * 8) & -1L << (8 - uVar12) * 8 |
              *(ulong *)((int)(puVar19 + 6) - uVar12) >> uVar12 * 8;
      puVar1 = (undefined *)((int)&(sc->fog).max + 3);
      uVar11 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar11);
      *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar10 >> (7 - uVar11) * 8;
      uVar11 = (uint)&sc->fog & 7;
      puVar8 = (ulong *)((int)&sc->fog - uVar11);
      *puVar8 = uVar10 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
      puVar1 = (undefined *)((int)&(sc->fog).far + 3);
      uVar11 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar11);
      *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar17 >> (7 - uVar11) * 8;
      pfVar2 = &(sc->fog).near;
      uVar11 = (uint)pfVar2 & 7;
      puVar8 = (ulong *)((int)pfVar2 - uVar11);
      *puVar8 = uVar17 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
      puVar1 = (undefined *)((int)&(sc->fog).g + 3);
      uVar11 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar11);
      *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar21 >> (7 - uVar11) * 8;
      piVar3 = &(sc->fog).r;
      uVar11 = (uint)piVar3 & 7;
      puVar8 = (ulong *)((int)piVar3 - uVar11);
      *puVar8 = uVar21 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
      puVar1 = (undefined *)((int)&(sc->fog).pad + 3);
      uVar11 = (uint)puVar1 & 7;
      puVar8 = (ulong *)(puVar1 + -uVar11);
      *puVar8 = *puVar8 & -1L << (uVar11 + 1) * 8 | uVar6 >> (7 - uVar11) * 8;
      piVar3 = &(sc->fog).b;
      uVar11 = (uint)piVar3 & 7;
      puVar8 = (ulong *)((int)piVar3 - uVar11);
      *puVar8 = uVar6 << uVar11 * 8 | *puVar8 & 0xffffffffffffffffU >> (8 - uVar11) * 8;
      puVar20 = (undefined8 *)(puVar19 + 8);
      iVar22 = 0;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
        amb[2] = *(float *)(puVar20 + 1);
        amb[3] = *(float *)((int)puVar20 + 0xc);
        amb[0] = (float)*puVar20;
        amb[1] = (float)((ulong)*puVar20 >> 0x20);
                    /* end of inlined section */
        iVar5 = strcmp((char *)(amb + 3),&DAT_003f3d80);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
        if (iVar5 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          amb[3] = 0.0;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar22,6);
          pafVar9 = (sc->fod_ctrl).fod_light.amb.field0_0x0.m_aData[iVar22];
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
          (*pafVar9)[0] = amb[0];
          (*pafVar9)[1] = amb[1];
          (*pafVar9)[2] = amb[2];
          (*pafVar9)[3] = amb[3];
        }
        else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar22,6);
          pafVar9 = (sc->fod_ctrl).fod_light.amb.field0_0x0.m_aData[iVar22];
          (*pafVar9)[0] = 0.0;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar22,6);
          (*pafVar9)[1] = 0.0;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar22,6);
          (*pafVar9)[2] = 0.0;
          _fixed_array_verifyrange__H1ZA3_f_UiUi_PX01(iVar22,6);
          (*pafVar9)[3] = 1.0;
                    /* end of inlined section */
        }
        iVar22 = iVar22 + 1;
        puVar20 = puVar20 + 2;
      } while (iVar22 < 6);
    }
  }
  return;
}

static void SceneAllMdlInit(SCENE_CTRL *sc, SCENE_FILE *pSceneFile) {
	int i;
	u_int *pMimBuf;
	
  uint *mim_buf;
  uint uVar1;
  uint uVar2;
  SCENE_CTRL *sam;
  SCN_ANM_MDL *pSVar3;
  
  uVar1 = 0;
  mim_buf = (uint *)mem_utilGetMem__Fi(0x40000);
  sc->pMimBuf = mim_buf;
  sam = sc;
  if (0 < sc->man_mdl_num) {
    do {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(uVar1,8);
                    /* end of inlined section */
      uVar2 = uVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      mim_buf = SceneInitManMdl__FP11SCN_ANM_MDLPUiN21Ui
                          ((SCN_ANM_MDL *)sam,pSceneFile->man_mot_addr,pSceneFile->man_mim_addr,
                           mim_buf,uVar1);
                    /* end of inlined section */
      sam = (SCENE_CTRL *)((sam->man_mdl).field0_0x0.m_aData + 1);
      uVar1 = uVar2;
    } while ((int)uVar2 < sc->man_mdl_num);
  }
  if (0 < sc->furn_num) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pSVar3 = (SCN_ANM_MDL *)&sc->furn_mdl;
    uVar1 = 0;
    do {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(uVar1,0xe);
                    /* end of inlined section */
      uVar2 = uVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      SceneInitOtherMdl__FP11SCN_ANM_MDLPUiUi(pSVar3,pSceneFile->furn_mot_addr,uVar1);
                    /* end of inlined section */
      pSVar3 = pSVar3 + 1;
      uVar1 = uVar2;
    } while ((int)uVar2 < sc->furn_num);
  }
  if (0 < sc->door_num) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pSVar3 = (SCN_ANM_MDL *)&sc->door_mdl;
    uVar1 = 0;
    do {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(uVar1,8);
                    /* end of inlined section */
      uVar2 = uVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      SceneInitOtherMdl__FP11SCN_ANM_MDLPUiUi(pSVar3,pSceneFile->door_mot_addr,uVar1);
                    /* end of inlined section */
      pSVar3 = pSVar3 + 1;
      uVar1 = uVar2;
    } while ((int)uVar2 < sc->door_num);
  }
  if (0 < sc->item_num) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pSVar3 = (SCN_ANM_MDL *)&sc->item_mdl;
    uVar1 = 0;
    do {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(uVar1,8);
                    /* end of inlined section */
      uVar2 = uVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      SceneInitOtherMdl__FP11SCN_ANM_MDLPUiUi(pSVar3,pSceneFile->item_mot_addr,uVar1);
                    /* end of inlined section */
      pSVar3 = pSVar3 + 1;
      uVar1 = uVar2;
    } while ((int)uVar2 < sc->item_num);
  }
  return;
}

static u_int* SceneInitManMdl(SCN_ANM_MDL *sam, u_int *mot_addr, u_int *mim_addr, u_int *mim_buf, u_int mdl_id) {
	int i;
	char pfx[9];
	u_int *pRet;
	
  ANI_CTRL *pAVar1;
  uint *puVar2;
  void **ppvVar3;
  uint mdl_no;
  int iVar4;
  char pfx [9];
  
  pAVar1 = motGetANI_CTRL__Fv();
  sam->pMdlAnm = pAVar1;
  puVar2 = SceneGetMotAddr__FPUiUiPc(mot_addr,mdl_id,pfx);
  sam->mot_addr = puVar2;
  puVar2 = SceneGetMimAddr__FPUiPc(mim_addr,pfx);
  sam->mim_buf_addr = mim_buf;
  sam->ene_efct = (SCN_ENE_EFCT *)0x0;
  iVar4 = 3;
  sam->mim_addr = puVar2;
  ppvVar3 = sam->efct_addr + 3;
  do {
    iVar4 = iVar4 + -1;
    *ppvVar3 = (void *)0x0;
    ppvVar3 = ppvVar3 + -1;
  } while (-1 < iVar4);
  sam->scn_mdl_no = mdl_id;
  sam->mdl_alpha = 0x7f;
  sam->mdl_addr_db = (uint *)0x0;
  mdl_no = SceneManModelNoChange__Fi(sam->mdl_no);
  puVar2 = SceneInitAnime__FP8ANI_CTRLPUiN31Ui
                     (sam->pMdlAnm,sam->mdl_addr,sam->mot_addr,sam->mim_addr,sam->mim_buf_addr,
                      mdl_no);
  mimInitWeight__FP8ANI_CTRL(sam->pMdlAnm);
  printf("Scene One ManMdl MimBuf %d : 0x%x\n");
  iVar4 = SceneManModelNoChange__Fi(sam->mdl_no);
  MorphSetCtrl__FPvi(sam->pMdlAnm,iVar4);
  return puVar2;
}

static void SceneInitOtherMdl(SCN_ANM_MDL *sam, u_int *pk2_mot_addr, u_int mdl_id) {
	char pfx[9];
	int ModelSize;
	
  ANI_CTRL *pAVar1;
  uint *puVar2;
  int iVar3;
  _HEAP_WRK *p_Var4;
  char *str;
  char pfx [9];
  
  if (sam->disp_flg == 0) {
    return;
  }
  pAVar1 = motGetANI_CTRL__Fv();
  sam->pMdlAnm = pAVar1;
  puVar2 = SceneGetMotAddr__FPUiUiPc(pk2_mot_addr,mdl_id,pfx);
  sam->mdl_addr_db = (uint *)0x0;
  sam->mot_addr = puVar2;
  if (pfx[0] == 'f') {
    iVar3 = PrefixToNo__FPCci(pfx,8);
    puVar2 = (uint *)MapObjGetModelAddr__Fii(3,iVar3);
    sam->mdl_addr = puVar2;
    if (puVar2 == (uint *)0x0) {
      motFreeANI_CTRL__FP8ANI_CTRL(sam->pMdlAnm);
      sam->pMdlAnm = (ANI_CTRL *)0x0;
      sam->disp_flg = 0;
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrefixToNo__FPCci(pfx,8);
      str = "Furn model %d does not exist";
LAB_0024a6cc:
      PrintWarningReal(str);
      return;
    }
  }
  else {
    if (pfx[0] == 'd') {
      iVar3 = PrefixToNo__FPCci(pfx,8);
      puVar2 = (uint *)MapObjGetModelAddr__Fii(7,iVar3);
      sam->mdl_addr = puVar2;
      iVar3 = MapDoorGetModelSize__FPc(pfx);
      p_Var4 = GetSystemHeapWrkP__Fv();
      puVar2 = (uint *)SAFE_MALLOC(p_Var4,(void *)0x0,iVar3);
      sam->mdl_addr_db = puVar2;
      if (((SGDFILEHEADER *)sam->mdl_addr == (SGDFILEHEADER *)0x0) || (puVar2 == (uint *)0x0)) {
        motFreeANI_CTRL__FP8ANI_CTRL(sam->pMdlAnm);
        if (sam->mdl_addr_db == (uint *)0x0) {
          sam->disp_flg = 0;
        }
        else {
          p_Var4 = GetSystemHeapWrkP__Fv();
          heapCtrlFree(p_Var4,sam->mdl_addr_db);
          sam->mdl_addr_db = (uint *)0x0;
          sam->disp_flg = 0;
        }
        sam->pMdlAnm = (ANI_CTRL *)0x0;
        printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
        PrefixToNo__FPCci(pfx,8);
        str = "Door model %d does not exist";
        goto LAB_0024a6cc;
      }
      sgdRemapInverse__FP13SGDFILEHEADER((SGDFILEHEADER *)sam->mdl_addr);
      memcpy(sam->mdl_addr_db,sam->mdl_addr,(long)iVar3);
      sgdRemap__FP13SGDFILEHEADER((SGDFILEHEADER *)sam->mdl_addr);
      sgdRemap__FP13SGDFILEHEADER((SGDFILEHEADER *)sam->mdl_addr_db);
      puVar2 = sam->mdl_addr;
    }
    else {
      if (pfx[0] != 'i') {
        printf("Unknown Model Prefix.:%s -> call T.Yokota\n");
      }
      puVar2 = sam->mdl_addr;
    }
    if (puVar2 == (uint *)0x0) {
      printf("<<<<<<<<<WARNING FILE[%s] LINE[%d]>>>>>>>>>>\n");
      PrintWarningReal("Warning!! Model Addr %s [%d]\n");
      puVar2 = sam->mdl_addr;
    }
  }
  sam->scn_mdl_no = mdl_id;
  sam->mdl_alpha = 0x7f;
  sam->mim_addr = (uint *)0x0;
  SceneInitOtherAnime__FP8ANI_CTRLPUiN31(sam->pMdlAnm,puVar2,sam->mot_addr,(uint *)0x0,(uint *)0x0);
  return;
}

void SceneDraw(int scene_no) {
	float offset[4];
	SCENE_CTRL *sc;
	FOD_CTRL *fc;
	int i;
	
  fixed_array<SCENE_CTRL,2> *sc;
  int iVar1;
  int iVar2;
  uint uVar3;
  SCN_ANM_MDL *pSVar5;
  float offset [4];
  uint uVar4;
  
  iVar1 = 0;
  do {
    if (1 < iVar1) {
                    /* end of inlined section */
      sc = &scene_ctrl;
      printf("Warning!! Unknown Play Scene No.<%d>\n");
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(0,2);
                    /* end of inlined section */
      scn_now_play_id = 0;
LAB_0024a838:
      if (((((SCENE_CTRL *)sc)->fod_ctrl).now_frame == 1) &&
         ((((SCENE_CTRL *)sc)->fod_ctrl).now_reso == 0)) {
        StreamAutoPreloadPlay(scene_load.adpcm_id);
        printf("scene now play no = %d\n");
      }
      SceneRenewEnvironment__FP10SCENE_CTRL((SCENE_CTRL *)sc);
      gra3dSetGsRegisterDefault__Fv();
      gra3dSetFog__Fffff((((SCENE_CTRL *)sc)->fog).min,(((SCENE_CTRL *)sc)->fog).max,
                         (((SCENE_CTRL *)sc)->fog).near,(((SCENE_CTRL *)sc)->fog).far);
      gra3dSetFogColor__Fiii
                ((((SCENE_CTRL *)sc)->fog).r,(((SCENE_CTRL *)sc)->fog).g,(((SCENE_CTRL *)sc)->fog).b
                );
      gra3dApplyFog__Fv();
      SceneLightClear__FP10SCENE_CTRL((SCENE_CTRL *)sc);
      MapLoadGetOffsetVector__FPfi(offset,((SCENE_CTRL *)sc)->room_no);
      SceneDrawRoom__FP10SCENE_CTRL((SCENE_CTRL *)sc);
      if (((SCENE_CTRL *)sc)->door_num < 1) {
        iVar1 = ((SCENE_CTRL *)sc)->furn_num;
      }
      else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        pSVar5 = (SCN_ANM_MDL *)&((SCENE_CTRL *)sc)->door_mdl;
        iVar1 = 0;
        do {
                    /* end of inlined section */
          iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar1,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          SceneDrawOtherMdl__FP10SCENE_CTRLP11SCN_ANM_MDLPf((SCENE_CTRL *)sc,pSVar5,offset);
                    /* end of inlined section */
          pSVar5 = pSVar5 + 1;
          iVar1 = iVar2;
        } while (iVar2 < ((SCENE_CTRL *)sc)->door_num);
        iVar1 = ((SCENE_CTRL *)sc)->furn_num;
      }
      if (0 < iVar1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        pSVar5 = (SCN_ANM_MDL *)&((SCENE_CTRL *)sc)->furn_mdl;
        iVar1 = 0;
        do {
          iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar1,0xe);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          SceneDrawOtherMdl__FP10SCENE_CTRLP11SCN_ANM_MDLPf((SCENE_CTRL *)sc,pSVar5,offset);
                    /* end of inlined section */
          pSVar5 = pSVar5 + 1;
          iVar1 = iVar2;
        } while (iVar2 < ((SCENE_CTRL *)sc)->furn_num);
      }
      if (0 < ((SCENE_CTRL *)sc)->item_num) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        pSVar5 = (SCN_ANM_MDL *)&((SCENE_CTRL *)sc)->item_mdl;
        iVar1 = 0;
        do {
          iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar1,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
          SceneDrawOtherMdl__FP10SCENE_CTRLP11SCN_ANM_MDLPf((SCENE_CTRL *)sc,pSVar5,offset);
                    /* end of inlined section */
          pSVar5 = pSVar5 + 1;
          iVar1 = iVar2;
        } while (iVar2 < ((SCENE_CTRL *)sc)->item_num);
      }
      uVar4 = 0;
      if (0 < ((SCENE_CTRL *)sc)->man_mdl_num) {
        do {
          uVar3 = uVar4 + 1;
          SceneDrawManMdl__FP10SCENE_CTRLUiPf((SCENE_CTRL *)sc,uVar4,offset);
          uVar4 = uVar3;
        } while ((int)uVar3 < ((SCENE_CTRL *)sc)->man_mdl_num);
      }
      InitEffectsEF__Fv();
      EffectControl__Fi(5);
      EffectControl__Fi(7);
      BrightnessAdjustmentFilterDraw__Fv();
      EffectControl__Fi(8);
      iVar1 = GetPALMode__Fv();
      if (iVar1 == 0) {
        MovieTitleMain__Fi((((SCENE_CTRL *)sc)->fod_ctrl).now_frame);
        uVar4 = ((SCENE_CTRL *)sc)->DoubleBufferId;
      }
      else {
        MovieTitleMain__Fi((int)((((SCENE_CTRL *)sc)->fod_ctrl).float_now_frame / DAT_003ee82c));
        uVar4 = ((SCENE_CTRL *)sc)->DoubleBufferId;
      }
      ((SCENE_CTRL *)sc)->DoubleBufferId = uVar4 ^ 1;
      if (((SCENE_CTRL *)sc)->count_flg == 1) {
        FodNextFrame__FP8FOD_CTRLi(&((SCENE_CTRL *)sc)->fod_ctrl,((SCENE_CTRL *)sc)->scene_no);
      }
      return;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(iVar1,2);
    sc = (fixed_array<SCENE_CTRL,2> *)(scene_ctrl.field0_0x0.m_aData + iVar1);
    if (scene_ctrl.field0_0x0.m_aData[iVar1].scene_no == scene_no) {
      _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(iVar1,2);
      scn_now_play_id = iVar1;
                    /* end of inlined section */
      goto LAB_0024a838;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

static void SceneRenewEnvironment(SCENE_CTRL *sc) {
	float offset[4];
	FOD_CAMERA_DATA FirstCamera;
	FOD_CAMERA_DATA SecondCamera;
	FOD_LIGHT FirstLight;
	FOD_LIGHT SecondLight;
	float NowFrame;
	float Rate;
	int Integer;
	int i;
	FOD_CAMERA_DATA *Result;
	float NowFrame;
	float Rate;
	int Integer;
	
  fixed_array<FOD_LIT_SERIAL,36> *pfVar1;
  fixed_array<FOD_LIT_SERIAL,36> *pfVar2;
  uchar uVar3;
  uchar uVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  FOD_CTRL *pFVar10;
  undefined8 uVar11;
  uint *pDataAddr;
  undefined8 uVar12;
  float *pfVar13;
  undefined8 uVar14;
  FOD_CTRL *pFVar15;
  FOD_FILE_HDR **ppFVar16;
  FOD_LIGHT *pFVar17;
  float *pfVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  fixed_array<G3DLIGHT,36> *pfVar22;
  fixed_array<G3DLIGHT,36> *pfVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float offset [4];
  FOD_CAMERA_DATA FirstCamera;
  FOD_CAMERA_DATA SecondCamera;
  FOD_LIGHT FirstLight;
  FOD_LIGHT SecondLight;
  int local_78;
  
  pFVar10 = &sc->fod_ctrl;
  ppFVar16 = &(sc->fod_ctrl).cam_file_hdr;
  FirstCamera.vPosition._0_8_ = *(undefined8 *)(sc->CameraData).vPosition;
  FirstCamera.vPosition._8_8_ = *(undefined8 *)((sc->CameraData).vPosition + 2);
  FirstCamera.vTarget._0_8_ = *(undefined8 *)(sc->CameraData).vTarget;
  FirstCamera.vTarget._8_8_ = *(undefined8 *)((sc->CameraData).vTarget + 2);
  FirstCamera.fRoll = (sc->CameraData).fRoll;
  FirstCamera.fFov = (sc->CameraData).fFov;
  FirstCamera.fNearZ = (sc->CameraData).fNearZ;
  FirstCamera.fFarZ = (sc->CameraData).fFarZ;
  pFVar17 = &FirstLight;
  pFVar15 = pFVar10;
  do {
    pfVar2 = &(pFVar15->fod_light).lit_serial;
    uVar3 = (pfVar2->field0_0x0).m_aData[0].light_type;
    uVar4 = (pfVar2->field0_0x0).m_aData[0].anm_flg;
    cVar5 = (pfVar2->field0_0x0).m_aData[0].pad;
    cVar6 = (pfVar2->field0_0x0).m_aData[0].light_name[0];
    cVar7 = (pfVar2->field0_0x0).m_aData[0].light_name[1];
    cVar8 = (pfVar2->field0_0x0).m_aData[0].light_name[2];
    cVar9 = (pfVar2->field0_0x0).m_aData[0].light_name[3];
    uVar11 = *(undefined8 *)((pFVar15->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 4);
    uVar12 = *(undefined8 *)((pFVar15->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0xc)
    ;
    uVar14 = *(undefined8 *)
              ((pFVar15->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0x14);
    pfVar1 = &pFVar17->lit_serial;
    (pfVar1->field0_0x0).m_aData[0].light_no = (pfVar2->field0_0x0).m_aData[0].light_no;
    (pfVar1->field0_0x0).m_aData[0].light_type = uVar3;
    (pfVar1->field0_0x0).m_aData[0].anm_flg = uVar4;
    (pfVar1->field0_0x0).m_aData[0].pad = cVar5;
    (pfVar1->field0_0x0).m_aData[0].light_name[0] = cVar6;
    (pfVar1->field0_0x0).m_aData[0].light_name[1] = cVar7;
    (pfVar1->field0_0x0).m_aData[0].light_name[2] = cVar8;
    (pfVar1->field0_0x0).m_aData[0].light_name[3] = cVar9;
    *(undefined8 *)((pFVar17->lit_serial).field0_0x0.m_aData[0].light_name + 4) = uVar11;
    *(undefined8 *)((pFVar17->lit_serial).field0_0x0.m_aData[0].light_name + 0xc) = uVar12;
    *(undefined8 *)((pFVar17->lit_serial).field0_0x0.m_aData[0].light_name + 0x14) = uVar14;
    pFVar15 = (FOD_CTRL *)((pFVar15->fod_light).lit_serial.field0_0x0.m_aData + 1);
    pFVar17 = (FOD_LIGHT *)((pFVar17->lit_serial).field0_0x0.m_aData + 1);
  } while (pFVar15 != (FOD_CTRL *)ppFVar16);
  pFVar17 = &SecondLight;
  do {
    pfVar2 = &(pFVar10->fod_light).lit_serial;
    uVar3 = (pfVar2->field0_0x0).m_aData[0].light_type;
    uVar4 = (pfVar2->field0_0x0).m_aData[0].anm_flg;
    cVar5 = (pfVar2->field0_0x0).m_aData[0].pad;
    cVar6 = (pfVar2->field0_0x0).m_aData[0].light_name[0];
    cVar7 = (pfVar2->field0_0x0).m_aData[0].light_name[1];
    cVar8 = (pfVar2->field0_0x0).m_aData[0].light_name[2];
    cVar9 = (pfVar2->field0_0x0).m_aData[0].light_name[3];
    uVar11 = *(undefined8 *)((pFVar10->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 4);
    uVar12 = *(undefined8 *)((pFVar10->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0xc)
    ;
    uVar14 = *(undefined8 *)
              ((pFVar10->fod_light).lit_serial.field0_0x0.m_aData[0].light_name + 0x14);
    pfVar1 = &pFVar17->lit_serial;
    (pfVar1->field0_0x0).m_aData[0].light_no = (pfVar2->field0_0x0).m_aData[0].light_no;
    (pfVar1->field0_0x0).m_aData[0].light_type = uVar3;
    (pfVar1->field0_0x0).m_aData[0].anm_flg = uVar4;
    (pfVar1->field0_0x0).m_aData[0].pad = cVar5;
    (pfVar1->field0_0x0).m_aData[0].light_name[0] = cVar6;
    (pfVar1->field0_0x0).m_aData[0].light_name[1] = cVar7;
    (pfVar1->field0_0x0).m_aData[0].light_name[2] = cVar8;
    (pfVar1->field0_0x0).m_aData[0].light_name[3] = cVar9;
    *(undefined8 *)((pFVar17->lit_serial).field0_0x0.m_aData[0].light_name + 4) = uVar11;
    *(undefined8 *)((pFVar17->lit_serial).field0_0x0.m_aData[0].light_name + 0xc) = uVar12;
    *(undefined8 *)((pFVar17->lit_serial).field0_0x0.m_aData[0].light_name + 0x14) = uVar14;
    pFVar10 = (FOD_CTRL *)((pFVar10->fod_light).lit_serial.field0_0x0.m_aData + 1);
    pFVar17 = (FOD_LIGHT *)((pFVar17->lit_serial).field0_0x0.m_aData + 1);
  } while (pFVar10 != (FOD_CTRL *)ppFVar16);
  SecondCamera.vPosition._0_8_ = FirstCamera.vPosition._0_8_;
  SecondCamera.vPosition._8_8_ = FirstCamera.vPosition._8_8_;
  SecondCamera.vTarget._0_8_ = FirstCamera.vTarget._0_8_;
  SecondCamera.vTarget._8_8_ = FirstCamera.vTarget._8_8_;
  SecondCamera._32_8_ = FirstCamera._32_8_;
  SecondCamera._40_8_ = FirstCamera._40_8_;
  if ((sc->fod_ctrl).now_reso == 0) {
    iVar20 = 0;
    MapLoadGetOffsetVector__FPfi(offset,sc->room_no);
    FodGetToSgLight__FP9FOD_LIGHTP13FOD_LIT_FRAMEPf(&FirstLight,(sc->fod_ctrl).lit_frame,offset);
    FodGetToSgLight__FP9FOD_LIGHTP13FOD_LIT_FRAMEPf
              (&SecondLight,(sc->fod_ctrl).lit_frame_next,offset);
    fVar24 = (sc->fod_ctrl).float_now_frame;
    fVar24 = fVar24 - (float)(int)fVar24;
    if (0 < (int)(sc->fod_ctrl).fod_light.all_lit_num) {
      local_78 = 0;
      pfVar23 = &FirstLight.all_lit;
      pfVar22 = &SecondLight.all_lit;
      do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
        iVar21 = (int)(sc->fod_ctrl).fod_light.all_lit.field0_0x0.m_aData[0].vDiffuse + local_78;
        _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
        if (*(int *)(iVar21 + 0x50) == 0) {
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          iVar19 = iVar21 + 0x40;
          sceVu0InterVectorXYZ(fVar24,iVar21,pfVar22,pfVar23);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          pfVar18 = (pfVar22->field0_0x0).m_aData[0].vDirection;
          sceVu0InterVectorXYZ
                    (fVar24,iVar21 + 0x10,(pfVar22->field0_0x0).m_aData[0].vSpecular,
                     (pfVar23->field0_0x0).m_aData[0].vSpecular);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          pfVar13 = (pfVar23->field0_0x0).m_aData[0].vDirection;
LAB_0024ada8:
          sceVu0InterVectorXYZ(fVar24,iVar19,pfVar18,pfVar13);
        }
        else {
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          if (*(int *)(iVar21 + 0x50) == 1) {
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            iVar19 = iVar21 + 0x30;
            sceVu0InterVectorXYZ(fVar24,iVar21,pfVar22,pfVar23);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            pfVar18 = (pfVar22->field0_0x0).m_aData[0].vPosition;
            sceVu0InterVectorXYZ
                      (fVar24,iVar21 + 0x10,(pfVar22->field0_0x0).m_aData[0].vSpecular,
                       (pfVar23->field0_0x0).m_aData[0].vSpecular);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            pfVar13 = (pfVar23->field0_0x0).m_aData[0].vPosition;
            goto LAB_0024ada8;
          }
          _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
          if (*(int *)(iVar21 + 0x50) == 2) {
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            sceVu0InterVectorXYZ(fVar24,iVar21,pfVar22,pfVar23);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            fVar25 = 1.0;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            fVar25 = fVar25 - fVar24;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            sceVu0InterVectorXYZ
                      (fVar24,iVar21 + 0x10,(pfVar22->field0_0x0).m_aData[0].vSpecular,
                       (pfVar23->field0_0x0).m_aData[0].vSpecular);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            sceVu0InterVectorXYZ
                      (fVar24,iVar21 + 0x30,(pfVar22->field0_0x0).m_aData[0].vPosition,
                       (pfVar23->field0_0x0).m_aData[0].vPosition);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            sceVu0InterVectorXYZ
                      (fVar24,iVar21 + 0x40,(pfVar22->field0_0x0).m_aData[0].vDirection,
                       (pfVar23->field0_0x0).m_aData[0].vDirection);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            fVar26 = (pfVar22->field0_0x0).m_aData[0].fAngleOutside;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            *(float *)(iVar21 + 0x58) =
                 fVar26 * fVar24 + (pfVar23->field0_0x0).m_aData[0].fAngleOutside * fVar25;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            fVar26 = (pfVar22->field0_0x0).m_aData[0].fAngleInside;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar20,0x24);
            *(float *)(iVar21 + 0x54) =
                 fVar26 * fVar24 + (pfVar23->field0_0x0).m_aData[0].fAngleInside * fVar25;
                    /* end of inlined section */
          }
        }
        iVar20 = iVar20 + 1;
        pfVar23 = (fixed_array<G3DLIGHT,36> *)((pfVar23->field0_0x0).m_aData + 1);
        pfVar22 = (fixed_array<G3DLIGHT,36> *)((pfVar22->field0_0x0).m_aData + 1);
        local_78 = local_78 + 0x70;
      } while (iVar20 < (int)(sc->fod_ctrl).fod_light.all_lit_num);
    }
    FodGetCamData__FP15FOD_CAMERA_DATAP13FOD_CAM_FRAMEPf
              (&FirstCamera,(sc->fod_ctrl).cam_frame,offset);
    FodGetCamData__FP15FOD_CAMERA_DATAP13FOD_CAM_FRAMEPf
              (&SecondCamera,(sc->fod_ctrl).cam_frame_next,offset);
    fVar25 = (sc->fod_ctrl).float_now_frame;
    fVar25 = fVar25 - (float)(int)fVar25;
    sceVu0InterVectorXYZ(fVar25,&sc->CameraData,&SecondCamera,&FirstCamera);
    sceVu0InterVectorXYZ(fVar25,(sc->CameraData).vTarget,SecondCamera.vTarget,FirstCamera.vTarget);
    fVar24 = 1.0 - fVar25;
    (sc->CameraData).fRoll = SecondCamera.fRoll * fVar25 + FirstCamera.fRoll * fVar24;
    (sc->CameraData).fFov = SecondCamera.fFov * fVar25 + FirstCamera.fFov * fVar24;
    (sc->CameraData).fFarZ = SecondCamera.fFarZ * fVar25 + FirstCamera.fFarZ * fVar24;
    (sc->CameraData).fNearZ = SecondCamera.fNearZ * fVar25 + FirstCamera.fNearZ * fVar24;
    pDataAddr = sc->effect_addr;
  }
  else {
    pDataAddr = sc->effect_addr;
  }
  SceneEffectMain__FP10SCENE_CTRLPUi(sc,pDataAddr);
  if (sc->count_flg == 1) {
    SceneCameraSet__FP15FOD_CAMERA_DATA(&sc->CameraData);
  }
  return;
}

int SceneIsEnd() {
	SCENE_CTRL *sc;
	int ret;
	int skip_ok;
	
  uchar uVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  bVar2 = 0x1e < scene_ctrl.field0_0x0.m_aData[iVar3].fod_ctrl.now_frame << 1;
  if (bVar2) {
    if ((pad[0].one & 0x800U) != 0) {
      *(bool *)(iVar3 * 0x2130 + 0x340f59) = bVar2;
      StreamAutoFadeOut(scene_load.adpcm_id,1);
    }
    uVar1 = scene_ctrl.field0_0x0.m_aData[iVar3].fod_ctrl.end_flg;
  }
  else {
    uVar1 = scene_ctrl.field0_0x0.m_aData[iVar3].fod_ctrl.end_flg;
  }
  if (uVar1 != '\0') {
    scene_ctrl.field0_0x0.m_aData[iVar3].init_flg = 0;
  }
  return (uint)(uVar1 != '\0');
}

void SceneEndProc() {
	SCENE_CTRL *sc;
	int i;
	
  fixed_array<SCN_ANM_MDL,8> *pfVar1;
  int iVar2;
  int iVar3;
  SCENE_CTRL *pSVar4;
  int iVar5;
  SCENE_CTRL *sc;
  
  iVar2 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
  sc = scene_ctrl.field0_0x0.m_aData + iVar2;
                    /* end of inlined section */
  pSVar4 = sc;
  iVar3 = 0;
  if (0 < scene_ctrl.field0_0x0.m_aData[iVar2].man_mdl_num) {
    do {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
      acsResetCloth__FP8ANI_CTRL((pSVar4->man_mdl).field0_0x0.m_aData[0].pMdlAnm);
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
      mimClearAllVertex__FP8ANI_CTRL((pSVar4->man_mdl).field0_0x0.m_aData[0].pMdlAnm);
      iVar5 = iVar3 + 1;
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
      pfVar1 = &pSVar4->man_mdl;
      pSVar4 = (SCENE_CTRL *)((pSVar4->man_mdl).field0_0x0.m_aData + 1);
      mimInitWeight__FP8ANI_CTRL((pfVar1->field0_0x0).m_aData[0].pMdlAnm);
                    /* end of inlined section */
      iVar3 = iVar5;
    } while (iVar5 < scene_ctrl.field0_0x0.m_aData[iVar2].man_mdl_num);
  }
  SceneReleaseEffect__FP10SCENE_CTRL(sc);
  if (eff_param.mono_flg != 0) {
    eff_param.mono_flg = 0;
  }
  SetPlyrAreaNo__Fi(scene_ctrl.field0_0x0.m_aData[iVar2].AreaNoBak);
  MapObjDrawON__Fv();
  MapDrawSetSpRoomLight__FP14GRA3DLIGHTDATA((GRA3DLIGHTDATA *)0x0);
  MapDrawEnableFlashlightOnly__Fi(1);
  SceneAniCtrlFree__FP10SCENE_CTRL(sc);
  gra3dcamSetClip__Fff
            (scene_ctrl.field0_0x0.m_aData[iVar2].fNearZBak,
             scene_ctrl.field0_0x0.m_aData[iVar2].fFarZBak);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
  plyr_wrk.fl.vDiffuse[0] = PlayerLightBackup.vDiffuse[0];
  plyr_wrk.fl.vDiffuse[1] = PlayerLightBackup.vDiffuse[1];
  plyr_wrk.fl.vDiffuse[2] = PlayerLightBackup.vDiffuse[2];
  plyr_wrk.fl.vDiffuse[3] = PlayerLightBackup.vDiffuse[3];
  plyr_wrk.fl.vSpecular[0] = PlayerLightBackup.vSpecular[0];
  plyr_wrk.fl.vSpecular[1] = PlayerLightBackup.vSpecular[1];
  plyr_wrk.fl.vSpecular[2] = PlayerLightBackup.vSpecular[2];
  plyr_wrk.fl.vSpecular[3] = PlayerLightBackup.vSpecular[3];
  plyr_wrk.fl.vAmbient[0] = PlayerLightBackup.vAmbient[0];
  plyr_wrk.fl.vAmbient[1] = PlayerLightBackup.vAmbient[1];
  plyr_wrk.fl.vAmbient[2] = PlayerLightBackup.vAmbient[2];
  plyr_wrk.fl.vAmbient[3] = PlayerLightBackup.vAmbient[3];
  plyr_wrk.fl.vPosition[0] = PlayerLightBackup.vPosition[0];
  plyr_wrk.fl.vPosition[1] = PlayerLightBackup.vPosition[1];
  plyr_wrk.fl.vPosition[2] = PlayerLightBackup.vPosition[2];
  plyr_wrk.fl.vPosition[3] = PlayerLightBackup.vPosition[3];
  plyr_wrk.fl.vDirection[0] = PlayerLightBackup.vDirection[0];
  plyr_wrk.fl.vDirection[1] = PlayerLightBackup.vDirection[1];
  plyr_wrk.fl.vDirection[2] = PlayerLightBackup.vDirection[2];
  plyr_wrk.fl.vDirection[3] = PlayerLightBackup.vDirection[3];
  plyr_wrk.fl.Type = PlayerLightBackup.Type;
  plyr_wrk.fl.fAngleInside = PlayerLightBackup.fAngleInside;
  plyr_wrk.fl.fAngleOutside = PlayerLightBackup.fAngleOutside;
  plyr_wrk.fl.fMaxRange = PlayerLightBackup.fMaxRange;
  plyr_wrk.fl.fMinRange = PlayerLightBackup.fMinRange;
  plyr_wrk.fl.fFalloff = PlayerLightBackup.fFalloff;
  plyr_wrk.fl.afPad0[0] = PlayerLightBackup.afPad0[0];
  plyr_wrk.fl.afPad0[1] = PlayerLightBackup.afPad0[1];
                    /* end of inlined section */
  if (scene_ctrl.field0_0x0.m_aData[iVar2].DrawAneFlg == 0) {
    iVar3 = scene_ctrl.field0_0x0.m_aData[iVar2].DrawImoutoFlg;
  }
  else {
    ChrSortRegistSis__Fv();
    iVar3 = scene_ctrl.field0_0x0.m_aData[iVar2].DrawImoutoFlg;
  }
  if (iVar3 != 0) {
    ChrSortRegistPlayr__Fv();
  }
  ChrSortDelFlg__Fi(1);
  MapObjItemOn__Fv();
  SceneEffectEnd__Fv();
  EffScreenEffectStatusSet__Fi(0);
  mem_utilFreeMem__FPv(scene_ctrl.field0_0x0.m_aData[iVar2].pMimBuf);
  SceneItemModelClear__Fv();
  SceneManModelClear__Fv();
  SceneDoorModelDBFree__Fv();
  MovieTitleEnd__Fv();
  SceneMonotoneReturn__FP10SCENE_CTRL(sc);
  return;
}

static void SceneMonotoneReturn(SCENE_CTRL *sc) {
	int RoomNo;
	int SubRoomNo;
	
  int iVar1;
  int RoomNo;
  
  iVar1 = gra3dIsMonotoneDrawEnable__Fv();
  if (sc->MonotoneEnableBak != iVar1) {
    iVar1 = SceneRoomNoGet__Fv();
    RoomNo = SceneSubRoomNoGet__Fv();
    if (sc->MonotoneEnableBak == 0) {
      EffWrkMonochroModeSet__Fi(0);
      gra3dMonotoneDrawEnable__Fi(0);
    }
    else {
      EffWrkMonochroModeSet__Fi(1);
      gra3dMonotoneDrawEnable__Fi(1);
    }
    if (iVar1 != -1) {
      gra3dPrelightScene__Fi(iVar1);
    }
    if (RoomNo != -1) {
      gra3dPrelightScene__Fi(RoomNo);
    }
  }
  return;
}

static void SceneLightClear(SCENE_CTRL *sc) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(0,0x24);
  FodSetSpotLights__FP8G3DLIGHTUi((G3DLIGHT *)&(sc->fod_ctrl).fod_light.all_lit,0);
  return;
}

static void SceneAniCtrlFree(SCENE_CTRL *pSceneCtrl) {
	int i;
	
  SCENE_CTRL *pSVar1;
  fixed_array<SCN_ANM_MDL,14> *pfVar2;
  fixed_array<SCN_ANM_MDL,8> *pfVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  pSVar1 = pSceneCtrl;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
    if ((pSVar1->man_mdl).field0_0x0.m_aData[0].pMdlAnm != (ANI_CTRL *)0x0) {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
      MorphDell__FPv((pSVar1->man_mdl).field0_0x0.m_aData[0].pMdlAnm);
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
      motFreeANI_CTRL__FP8ANI_CTRL((pSVar1->man_mdl).field0_0x0.m_aData[0].pMdlAnm);
    }
                    /* end of inlined section */
    iVar4 = iVar4 + 1;
    pSVar1 = (SCENE_CTRL *)((pSVar1->man_mdl).field0_0x0.m_aData + 1);
  } while (iVar4 < 8);
  pfVar2 = &pSceneCtrl->furn_mdl;
  iVar4 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,0xe);
    iVar5 = iVar4 + 1;
    if ((pfVar2->field0_0x0).m_aData[0].pMdlAnm != (ANI_CTRL *)0x0) {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,0xe);
      motFreeANI_CTRL__FP8ANI_CTRL((pfVar2->field0_0x0).m_aData[0].pMdlAnm);
    }
                    /* end of inlined section */
    pfVar2 = (fixed_array<SCN_ANM_MDL,14> *)((pfVar2->field0_0x0).m_aData + 1);
    iVar4 = iVar5;
  } while (iVar5 < 0xe);
  pfVar3 = &pSceneCtrl->item_mdl;
  iVar4 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
    iVar5 = iVar4 + 1;
    if ((pfVar3->field0_0x0).m_aData[0].pMdlAnm != (ANI_CTRL *)0x0) {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
      motFreeANI_CTRL__FP8ANI_CTRL((pfVar3->field0_0x0).m_aData[0].pMdlAnm);
    }
                    /* end of inlined section */
    pfVar3 = (fixed_array<SCN_ANM_MDL,8> *)((pfVar3->field0_0x0).m_aData + 1);
    iVar4 = iVar5;
  } while (iVar5 < 8);
  pfVar3 = &pSceneCtrl->door_mdl;
  iVar4 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
    iVar5 = iVar4 + 1;
    if ((pfVar3->field0_0x0).m_aData[0].pMdlAnm != (ANI_CTRL *)0x0) {
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar4,8);
      motFreeANI_CTRL__FP8ANI_CTRL((pfVar3->field0_0x0).m_aData[0].pMdlAnm);
    }
                    /* end of inlined section */
    pfVar3 = (fixed_array<SCN_ANM_MDL,8> *)((pfVar3->field0_0x0).m_aData + 1);
    iVar4 = iVar5;
  } while (iVar5 < 8);
  return;
}

void SceneReleaseEffect(SCENE_CTRL *sc) {
	int i;
	int j;
	
  void **ppvVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  
  iVar3 = 0;
  ppvVar4 = (sc->man_mdl).field0_0x0.m_aData[0].efct_addr;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
                    /* end of inlined section */
    iVar2 = 3;
    ppvVar1 = ppvVar4;
    do {
      iVar2 = iVar2 + -1;
      if (*ppvVar1 != (void *)0x0) {
        ResetEffects__FPv(*ppvVar1);
        *ppvVar1 = (void *)0x0;
      }
      ppvVar1 = ppvVar1 + 1;
    } while (-1 < iVar2);
    iVar3 = iVar3 + 1;
    ppvVar4 = ppvVar4 + 0x13;
  } while (iVar3 < 8);
  if (eff_param.pdf_p != (void *)0x0) {
    ResetEffects__FPv(eff_param.pdf_p);
    eff_param.pdf_p = (void *)0x0;
  }
  return;
}

static void SceneDrawManMdl(SCENE_CTRL *sc, u_int mdl_id, float *offset) {
	SGDCOORDINATE *cp;
	FOD_CTRL *fc;
	SCN_ANM_MDL *sam;
	u_int *base_p;
	float scale;
	HeaderSection *item;
	
  SGDFILEHEADER *pSGDTop;
  SGDCOORDINATE *pCoord;
  ANI_CTRL *pAVar1;
  undefined4 uVar2;
  GRA3DCAMERA *pGVar3;
  uint mdl_no;
  HeaderSection *pHVar4;
  int iVar5;
  SCN_ANM_MDL *pSVar6;
  SCN_ANM_MDL *pSVar7;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(mdl_id,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pSVar7 = (sc->man_mdl).field0_0x0.m_aData + mdl_id;
                    /* end of inlined section */
  pSGDTop = (SGDFILEHEADER *)pSVar7->pMdlAnm->base_p;
  SceneSetCoordFrameF__FP8ANI_CTRLfUi(pSVar7->pMdlAnm,(sc->fod_ctrl).float_now_frame - 1.0,0);
  SceneMimSetVertex__FP8ANI_CTRLUi(pSVar7->pMdlAnm,(sc->fod_ctrl).now_frame - 1);
  pCoord = pSGDTop->pCoord;
  sceVu0UnitMatrix(pCoord);
  uVar2 = DAT_003ee830;
  pCoord->matCoord[0] = 25.0;
  pCoord->matCoord[2][2] = 25.0;
  pCoord->matCoord[1][1] = 25.0;
  pCoord->matCoord[3][3] = 1.0;
  sceVu0RotMatrixX(uVar2,pCoord,pCoord);
  sceVu0TransMatrix(pCoord,pCoord,offset);
  sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,pSGDTop->uiNumBlock - 1);
  pGVar3 = gra3dGetCamera__Fv();
  FodSetMyLight__FP9FOD_LIGHTPcPCf
            (&(sc->fod_ctrl).fod_light,pSVar7->prefix,(float *)pGVar3->matCoord[2]);
  mdl_no = SceneManModelNoChange__Fi(pSVar7->mdl_no);
  acsClothCtrl__FP8ANI_CTRLPUiUiUc(pSVar7->pMdlAnm,pSVar7->pMdlAnm->mpk_p,mdl_no,'\0');
  MorphRun__FP8ANI_CTRLPUi(pSVar7->pMdlAnm,pSVar7->pMdlAnm->mpk_p);
  pSVar7->mdl_alpha = pSVar7->mdl_alpha & 0x7fffffff;
  ManmdlSetAlpha__FPvUc(pSGDTop,*(uchar *)&pSVar7->mdl_alpha);
  if (((undefined *)pSVar7->mdl_no == (undefined *)0x0) && (sc->pPlayerAccessoryPk2 != (int *)0x0))
  {
    pHVar4 = (HeaderSection *)GetItemSgdAddr__FPi(sc->pPlayerAccessoryPk2);
    SendItemVram__FPUii((uint *)sc->pPlayerAccessoryPk2,0);
    iVar5 = GetPlyrAcsNo__Fv();
    ManItemSGDDraw__FP13HeaderSectionP8ANI_CTRLi(pHVar4,pSVar7->pMdlAnm,iVar5);
  }
  else if (((undefined *)pSVar7->mdl_no == &GRA3DVU1MEM_VF02) &&
          (sc->pSisterAccessoryPk2 != (int *)0x0)) {
    pHVar4 = (HeaderSection *)GetItemSgdAddr__FPi(sc->pSisterAccessoryPk2);
    SendItemVram__FPUii((uint *)sc->pSisterAccessoryPk2,0);
    iVar5 = GetSisterAcsNo__Fv();
    ManItemSGDDraw__FP13HeaderSectionP8ANI_CTRLi(pHVar4,pSVar7->pMdlAnm,iVar5);
  }
  iVar5 = gra3dIsMonotoneDrawEnable__Fv();
  if (iVar5 == 0) {
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(mdl_id,8);
    SendEneVram__FPUii(((sc->man_mdl).field0_0x0.m_aData[mdl_id].pMdlAnm)->mdl_p,0x2bc0);
                    /* end of inlined section */
  }
  else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(mdl_id,8);
    pSVar6 = (sc->man_mdl).field0_0x0.m_aData + mdl_id;
    pAVar1 = pSVar6->pMdlAnm;
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(mdl_id,8);
    SendEneVramMono__FPUiiT0(pAVar1->mdl_p,0x2bc0,pSVar6->pMdlAnm->bwc_p);
  }
  _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
            (pSGDTop,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
  DrawGirlSubObj__FPUiUc(pSVar7->pMdlAnm->mpk_p,*(uchar *)&pSVar7->mdl_alpha);
  MorphReset__FP8ANI_CTRLPUi(pSVar7->pMdlAnm,pSVar7->pMdlAnm->mpk_p);
  return;
}

static void SceneSetHandSpotLightToPlyrWrk(FOD_LIGHT *pFodLight) {
  int iVar1;
  G3DLIGHT *pGVar2;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar1 = pFodLight->hand_spot_no;
                    /* end of inlined section */
  if (iVar1 != -1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar1,0x24);
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pGVar2 = (pFodLight->all_lit).field0_0x0.m_aData + iVar1;
                    /* inlined from ../../graphics/graph3d/g3dLight.h */
    plyr_wrk.fl.vDiffuse[2] = pGVar2->vDiffuse[2];
    plyr_wrk.fl.vDiffuse[3] = pGVar2->vDiffuse[3];
    plyr_wrk.fl.vDiffuse[0] = (float)*(undefined8 *)pGVar2->vDiffuse;
    plyr_wrk.fl.vDiffuse[1] = (float)((ulong)*(undefined8 *)pGVar2->vDiffuse >> 0x20);
    plyr_wrk.fl.vSpecular[0] = pGVar2->vSpecular[0];
    plyr_wrk.fl.vSpecular[1] = pGVar2->vSpecular[1];
    plyr_wrk.fl.vSpecular[2] = pGVar2->vSpecular[2];
    plyr_wrk.fl.vSpecular[3] = pGVar2->vSpecular[3];
    plyr_wrk.fl.vAmbient[0] = pGVar2->vAmbient[0];
    plyr_wrk.fl.vAmbient[1] = pGVar2->vAmbient[1];
    plyr_wrk.fl.vAmbient[2] = pGVar2->vAmbient[2];
    plyr_wrk.fl.vAmbient[3] = pGVar2->vAmbient[3];
    plyr_wrk.fl.vPosition[0] = pGVar2->vPosition[0];
    plyr_wrk.fl.vPosition[1] = pGVar2->vPosition[1];
    plyr_wrk.fl.vPosition[2] = pGVar2->vPosition[2];
    plyr_wrk.fl.vPosition[3] = pGVar2->vPosition[3];
    plyr_wrk.fl.vDirection[0] = pGVar2->vDirection[0];
    plyr_wrk.fl.vDirection[1] = pGVar2->vDirection[1];
    plyr_wrk.fl.vDirection[2] = pGVar2->vDirection[2];
    plyr_wrk.fl.vDirection[3] = pGVar2->vDirection[3];
    plyr_wrk.fl.Type = pGVar2->Type;
    plyr_wrk.fl.fAngleInside = pGVar2->fAngleInside;
    plyr_wrk.fl.fAngleOutside = pGVar2->fAngleOutside;
    plyr_wrk.fl.fMaxRange = pGVar2->fMaxRange;
    plyr_wrk.fl.fMinRange = pGVar2->fMinRange;
    plyr_wrk.fl.fFalloff = pGVar2->fFalloff;
    plyr_wrk.fl.afPad0[0] = pGVar2->afPad0[0];
    plyr_wrk.fl.afPad0[1] = pGVar2->afPad0[1];
                    /* end of inlined section */
    sceVu0SubVector(0x33cfc0,0x33cfb0,0x33cfc0);
    sceVu0Normalize(0x33cfc0,0x33cfc0);
    plyr_wrk.fl.Type = G3DLIGHT_SPOT;
    gra3dSetLight__FiPC8G3DLIGHT(0x26,&plyr_wrk.fl);
  }
  return;
}

static u_int* SceneDoorDoubleBufferProc(SCN_ANM_MDL *sam, int DoubleBufferId) {
	u_int *pModel;
	
  HeaderSection *pak_head;
  ANI_CTRL *pAVar1;
  uint *puVar2;
  
  if (DoubleBufferId == 0) {
    pak_head = (HeaderSection *)sam->mdl_addr;
  }
  else {
    pak_head = (HeaderSection *)sam->mdl_addr_db;
  }
  sam->pMdlAnm->mdl_p = &pak_head->VersionID;
  puVar2 = (uint *)GetFileInPak__FPvi(pak_head,0);
  sam->pMdlAnm->mpk_p = puVar2;
  puVar2 = (uint *)GetFileInPak__FPvi(pak_head,1);
  pAVar1 = sam->pMdlAnm;
  pAVar1->pk2_p = puVar2;
  pAVar1->base_p = pak_head;
  return &pak_head->VersionID;
}

static void SceneDrawOtherMdl(SCENE_CTRL *sc, SCN_ANM_MDL *sam, float *offset) {
	float tmp_mat[4][4];
	SGDCOORDINATE *cp;
	u_int *base_p;
	FOD_LIGHT *fl;
	
  SGDCOORDINATE *pCoord;
  SGDFILEHEADER *pSGDHead;
  int iVar1;
  GRA3DLIGHTDATA *pLightData;
  GRA3DCAMERA *pGVar2;
  uint uVar3;
  char *__s1;
  FOD_CTRL *pFodLight;
  float fVar4;
  float tmp_mat [4] [4];
  
  pFodLight = &sc->fod_ctrl;
  pSGDHead = (SGDFILEHEADER *)sam->mdl_addr;
  if (sam->disp_flg != 0) {
    if (sam->prefix[0] == 'd') {
      pSGDHead = (SGDFILEHEADER *)
                 SceneDoorDoubleBufferProc__FP11SCN_ANM_MDLi(sam,sc->DoubleBufferId);
      fVar4 = (sc->fod_ctrl).float_now_frame;
    }
    else {
      fVar4 = (sc->fod_ctrl).float_now_frame;
    }
    SceneSetCoordFrameF__FP8ANI_CTRLfUi(sam->pMdlAnm,fVar4 - 1.0,1);
    SceneMimSetVertex__FP8ANI_CTRLUi(sam->pMdlAnm,(sc->fod_ctrl).now_frame - 1);
    if (pSGDHead != (SGDFILEHEADER *)0x0) {
      pCoord = pSGDHead->pCoord;
      sceVu0MulMatrix(pCoord,0x313e20,pCoord);
      sceVu0UnitMatrix(tmp_mat);
      sceVu0TransMatrix(tmp_mat,tmp_mat,offset);
      sceVu0MulMatrix(pCoord,tmp_mat,pCoord);
      sgdCalcBoneCoordinate__FP13SGDCOORDINATEi(pCoord,pSGDHead->uiNumBlock - 1);
      SceneSetHandSpotLightToPlyrWrk__FP9FOD_LIGHT(&pFodLight->fod_light);
      __s1 = sam->prefix;
      if (sam->prefix[0] == 'd') {
        iVar1 = PrefixToNo__FPCci(__s1,8);
        pLightData = MapObjGetLight__Fii(7,iVar1);
        gra3dSetLightData__FPC14GRA3DLIGHTDATAPCf(pLightData,(float *)0x0);
        gra3dExecPrelight__FP13SGDFILEHEADERPA3_Cf(pSGDHead,(float (*) [4])pCoord);
        pGVar2 = gra3dGetCamera__Fv();
        FodSetMyLight__FP9FOD_LIGHTPcPCf(&pFodLight->fod_light,__s1,(float *)pGVar2->matCoord[2]);
        uVar3 = sam->mdl_alpha;
      }
      else {
        iVar1 = strncmp(__s1,&DAT_003f3d88,4);
        if (iVar1 == 0) {
          pGVar2 = gra3dGetCamera__Fv();
          FodSetMyLight__FP9FOD_LIGHTPcPCf
                    (&pFodLight->fod_light,s_ch000_003f3d90,(float *)pGVar2->matCoord[2]);
          uVar3 = sam->mdl_alpha;
        }
        else {
          pGVar2 = gra3dGetCamera__Fv();
          FodSetMyLight__FP9FOD_LIGHTPcPCf(&pFodLight->fod_light,__s1,(float *)pGVar2->matCoord[2]);
          uVar3 = sam->mdl_alpha;
        }
      }
      sam->mdl_alpha = uVar3 & 0x7fffffff;
      ManmdlSetAlpha__FPvUc(sam->pMdlAnm->base_p,*(uchar *)&sam->mdl_alpha);
      if (sam->prefix[0] == 'i') {
        SendItemVram__FPUii(sam->pk2_addr,0);
      }
      _gra3dDrawSGD__FP13SGDFILEHEADER13SGDRENDERTYPEP13SGDCOORDINATEi
                (pSGDHead,SRT_REALTIME,(SGDCOORDINATE *)0x0,-1);
    }
  }
  return;
}

static void SceneDrawRoom(SCENE_CTRL *sc) {
  GRA3DCAMERA *pGVar1;
  
  pGVar1 = gra3dGetCamera__Fv();
  FodSetMyLight__FP9FOD_LIGHTPcPCf
            (&(sc->fod_ctrl).fod_light,&DAT_003f3d98,(float *)pGVar1->matCoord[2]);
  MhCtlDraw__Fv();
  MapSpProc__Fv();
  return;
}

int GetFileNoFromSceneNo(int scene_no) {
  return scene_no * 3 + 0xd51;
}

int SceneDecisionMovie(int scene_no) {
  char cVar1;
  int file_no;
  
  file_no = GetFileNoFromSceneNo__Fi(scene_no);
  cVar1 = GetFileExtLabel(file_no);
  return (int)(cVar1 == '\x0f');
}

static u_int* SceneGetMotAddr(u_int *pak_top, u_int no, char *pfx) {
  uint *puVar1;
  
  puVar1 = GetADRTBL__FPUiUi(pak_top,0);
  strncpy(pfx,(char *)(puVar1 + no * 2),8);
  pfx[8] = '\0';
  puVar1 = GetADRTBL__FPUiUi(pak_top,no + 1);
  return puVar1;
}

static u_int* SceneGetMimAddr(u_int *pak_top, char *pfx) {
	int i;
	int no;
	char *pfx_top;
	
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = GetADRTBL__FPUiUi(pak_top,0);
  for (iVar3 = 0; iVar4 = -1, iVar3 < 8; iVar3 = iVar3 + 1) {
    iVar2 = strncmp((char *)puVar1,pfx,5);
    iVar4 = iVar3;
    if (iVar2 == 0) break;
    puVar1 = puVar1 + 2;
  }
  if (iVar4 < 0) {
    return (uint *)0x0;
  }
  puVar1 = GetADRTBL__FPUiUi(pak_top,iVar4 + 1);
  return puVar1;
}

static char* GetHeaderMdlNo(SCN_ANM_MDL *sam, int num, char *hdr_pfx) {
	int i;
	
  uint uVar1;
  
  if (0 < num) {
    uVar1 = (uint)hdr_pfx & 0xf;
    if (0 < num) {
      do {
        strncpy(sam->prefix,hdr_pfx,8);
        sam->prefix[8] = '\0';
        uVar1 = PrefixToNo__FPCci(sam->prefix,8);
        num = num + -1;
        sam->mdl_no = uVar1;
        sam = sam + 1;
        hdr_pfx = hdr_pfx + 8;
      } while (num != 0);
      uVar1 = (uint)hdr_pfx & 0xf;
    }
    if (uVar1 != 0) {
      hdr_pfx = (char *)GetAlignUp((uint)hdr_pfx,4);
    }
  }
  return hdr_pfx;
}

u_int GetPrefixNo(char *pfx) {
	u_int mdl_no;
	char pfx_tmp[5];
	
  uint uVar1;
  char pfx_tmp [5];
  
  strncpy(pfx_tmp,pfx,4);
  pfx_tmp[4] = '\n';
  uVar1 = atoi(pfx_tmp + 1);
  if (500 < uVar1) {
    uVar1 = (int)uVar1 % 100;
  }
  return uVar1;
}

int PrefixToNo(char *pPrefix, int num) {
	fixed_array<char,33> tmp_prifix;
	int i;
	int count;
	
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  fixed_array<char,33> tmp_prifix;
  
  iVar4 = 0;
  iVar5 = 0;
  if (num < 0x21) {
    iVar4 = 0;
    if (0 < num) {
      bVar1 = true;
      if ((byte)*pPrefix - 0x30 < 10) {
LAB_0024bf4c:
        if (bVar1) {
          do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
            _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar5,0x21);
            pcVar2 = pPrefix + iVar4;
            pcVar3 = tmp_prifix.field0_0x0.m_aData + iVar5;
                    /* end of inlined section */
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 1;
                    /* end of inlined section */
            *pcVar3 = *pcVar2;
          } while (iVar4 < num);
        }
      }
      else {
        iVar4 = 1;
        while( true ) {
          bVar1 = iVar4 < num;
          if (!bVar1) break;
          if ((byte)pPrefix[iVar4] - 0x30 < 10) goto LAB_0024bf4c;
          iVar4 = iVar4 + 1;
        }
      }
    }
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(iVar5,0x21);
    tmp_prifix.field0_0x0.m_aData[iVar5] = '\0';
    _fixed_array_verifyrange__H1Zc_UiUi_PX01(0,0x21);
    iVar4 = atoi((char *)&tmp_prifix);
  }
                    /* end of inlined section */
  return iVar4;
}

static int PrefixToRoomNo(char *pPrefix) {
	int ret;
	int area_no;
	
  int iVar1;
  int iVar2;
  
  iVar1 = AreaPrefixToTopNo__FPCc(pPrefix);
  iVar2 = -1;
  if (iVar1 != -1) {
    iVar2 = PrefixToNo__FPCci(pPrefix,6);
    iVar2 = iVar1 + iVar2;
  }
  return iVar2;
}

static int AreaPrefixToTopNo(char *pPrefix) {
	int i;
	int ret;
	
  int iVar1;
  size_t __n;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  while( true ) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z17AREA_PREFIX_TO_NO_UiUi_PX01(iVar3,10);
    iVar2 = iVar3 * 8;
    if (**(char **)((int)area_prefix_to_no.field0_0x0.m_aData + iVar2) == '\0') {
                    /* end of inlined section */
      return -1;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z17AREA_PREFIX_TO_NO_UiUi_PX01(iVar3,10);
    __n = strlen(*(char **)((int)area_prefix_to_no.field0_0x0.m_aData + iVar2));
    _fixed_array_verifyrange__H1Z17AREA_PREFIX_TO_NO_UiUi_PX01(iVar3,10);
    iVar1 = strncmp(pPrefix,*(char **)((int)area_prefix_to_no.field0_0x0.m_aData + iVar2),__n);
    if (iVar1 == 0) break;
    iVar3 = iVar3 + 1;
  }
  _fixed_array_verifyrange__H1Z17AREA_PREFIX_TO_NO_UiUi_PX01(iVar3,10);
                    /* end of inlined section */
  return *(int *)((int)area_prefix_to_no.field0_0x0.m_aData + iVar2 + 4);
}

static u_int* GetADRTBL(u_int *top, u_int no) {
  return (uint *)((int)top + top[no + 4]);
}

void SceneSetSquare(int pri, float x, float y, float w, float h, u_char r, u_char g, u_char b, u_char a) {
  float y1;
  float x1;
  
  x1 = x - 320.0;
  y1 = y - 224.0;
  SetSquare__FiffffffffUcUcUcUc(pri,x1,y1,x1 + w,y1,x1,y1 + h,x1 + w,y1 + h,r,g,b,a);
  return;
}

void SceneCheckModelEntry(SCENE_CTRL *sc) {
  return;
}

void InitSceneWork() {
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = &scene_ctrl.field0_0x0.m_aData[0].init_flg;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(0,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  memset(&scene_ctrl,0,0x4260);
  iVar1 = 0;
  do {
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(iVar1,2);
    *piVar3 = 0;
                    /* end of inlined section */
    piVar3 = piVar3 + 0x84c;
    iVar1 = iVar2;
  } while (iVar2 < 2);
  memset(&scene_load,0,0x1c);
  scene_load.status = 0;
  scn_vib_time0 = 0;
  scn_vib_time1 = 0;
  return;
}

int SceneRoomNoGet() {
  int iVar1;
  
  iVar1 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
                    /* end of inlined section */
  return scene_ctrl.field0_0x0.m_aData[iVar1].room_no;
}

int SceneSubRoomNoGet() {
  int iVar1;
  
  iVar1 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
                    /* end of inlined section */
  return scene_ctrl.field0_0x0.m_aData[iVar1].sub_room_no;
}

void SceneCountFlgSet(int flg) {
	SCENE_CTRL *pScene;
	
  int iVar1;
  
  iVar1 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
                    /* end of inlined section */
  if (flg == 0) {
    scene_ctrl.field0_0x0.m_aData[iVar1].count_flg = 0;
  }
  else {
    scene_ctrl.field0_0x0.m_aData[iVar1].count_flg = 1;
  }
  return;
}

int SceneIsPlay() {
  int iVar1;
  
  iVar1 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
                    /* end of inlined section */
  return scene_ctrl.field0_0x0.m_aData[iVar1].init_flg;
}

static void SceneCameraSet(FOD_CAMERA_DATA *pFodCam) {
  gra3dcamSetPosition__FPCf(pFodCam->vPosition);
  gra3dcamSetTarget__FPCfi(pFodCam->vTarget,1);
  gra3dcamSetRoll__Ff(pFodCam->fRoll);
  gra3dcamSetFov__Ff(pFodCam->fFov);
  gra3dcamSetClip__Fff(DAT_003ee834,pFodCam->fFarZ);
  gra3dApplyCamera__FP11GRA3DCAMERAi((GRA3DCAMERA *)0x0,1);
  SetIngameListnerInfo__Fv();
  return;
}

static int SceneSceneNoToAdpcmNo(int scene_no) {
	static fixed_array<int,65> SceneNoToAdpcmNo;
	int *ra;
	
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (__tmp_10_1265 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    puVar1 = &DAT_003c5590;
    puVar2 = &SceneNoToAdpcmNo_1264;
    do {
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar1 != (undefined8 *)&UNK_003c5690);
    *(undefined4 *)puVar2 = _UNK_003c5690;
    __tmp_10_1265 = 1;
  }
  _fixed_array_verifyrange__H1Zi_UiUi_PX01(scene_no,0x41);
  return *(int *)((int)&SceneNoToAdpcmNo_1264 + scene_no * 4);
}

SCENE_CTRL* SceneCtrlGet(int buf_no) {
  SCENE_CTRL *pSVar1;
  
  pSVar1 = (SCENE_CTRL *)0x0;
  if ((uint)buf_no < 2) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(buf_no,2);
    pSVar1 = scene_ctrl.field0_0x0.m_aData + buf_no;
  }
                    /* end of inlined section */
  return pSVar1;
}

void SceneFodSetNowFrame(int scene_id, int frame) {
	SCENE_CTRL *pScene;
	
  uint uVar1;
  
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_id,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  uVar1 = scene_ctrl.field0_0x0.m_aData[scene_id].fod_ctrl.frame_max;
  if ((int)uVar1 <= frame) {
    frame = uVar1;
  }
  scene_ctrl.field0_0x0.m_aData[scene_id].fod_ctrl.now_frame = frame;
  return;
}

void SceneFodSetNowRezo(int scene_id, int reso) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_id,2);
                    /* end of inlined section */
  scene_ctrl.field0_0x0.m_aData[scene_id].fod_ctrl.now_reso = reso;
  return;
}

void SceneFodSetFrame(int scene_id, int frame) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_id,2);
                    /* end of inlined section */
  FodSetFrame__FP8FOD_CTRLUi(&scene_ctrl.field0_0x0.m_aData[scene_id].fod_ctrl,frame);
  return;
}

FOD_LIGHT* SceneFodLightPtrGet(int scene_id) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scene_id,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  return &scene_ctrl.field0_0x0.m_aData[scene_id].fod_ctrl.fod_light;
}

static int SceneManModelIdToSceneModelNo(SCENE_CTRL *pCtrl, int ModelId) {
	int i;
	int Ret;
	
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  puVar2 = &(pCtrl->man_mdl).field0_0x0.m_aData[0].mdl_no;
  iVar3 = 0;
  while( true ) {
    if (pCtrl->man_mdl_num <= iVar3) {
      return -1;
    }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
                    /* end of inlined section */
    uVar1 = *puVar2;
    puVar2 = puVar2 + 0x13;
    if (uVar1 == ModelId) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

void SceneGetModelPDeformPos(float *Position, int ModelId, float Dist) {
	float TmpPos[4];
	float tv[4];
	float tr[4];
	int ModelNo;
	
  float (*p1) [4];
  int iVar1;
  SCN_ANM_MDL *pSVar2;
  SCENE_CTRL *pCtrl;
  float TmpPos [4];
  float tv [4];
  float tr [4];
  
  p1 = gra3dcamGetPosition__Fv();
  memset(tv,0,0x10);
  iVar1 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pCtrl = scene_ctrl.field0_0x0.m_aData + iVar1;
                    /* end of inlined section */
  iVar1 = SceneManModelIdToSceneModelNo__FP10SCENE_CTRLi(pCtrl,ModelId);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  if (iVar1 != -1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar1,8);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pSVar2 = (pCtrl->man_mdl).field0_0x0.m_aData + iVar1;
                    /* end of inlined section */
    GetMdlWaistPos__FPfP8ANI_CTRLUs(TmpPos,pSVar2->pMdlAnm,*(short *)&pSVar2->mdl_no);
    GetTrgtRot__FPCfT0Pfi(TmpPos,(float *)p1,tr,3);
    tv[2] = Dist;
    RotFvector__FPfT0(tr,tv);
    sceVu0AddVector(Position,TmpPos,tv);
  }
  return;
}

int SceneManModelNoChange(int ModelNo) {
	int RetNo;
	
  if (ModelNo == 0) {
    ModelNo = GetPlyrMdlNo__Fv();
  }
  else if (ModelNo == 1) {
    ModelNo = GetSisterMdlNo__Fv();
  }
  return ModelNo;
}

static void SceneMakeLightName(char *pName, u_int LightType, u_int LightNo) {
	static reference_fixed_array<char *,4> LightTypeToPrefix;
	
  if (__tmp_11_1303 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    __tmp_11_1303 = 1;
    LightTypeToPrefix_1302 = &PTR_DAT_003c5698;
  }
                    /* end of inlined section */
  if (pName != (char *)0x0) {
    if (LightType < 4) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZPc_UiUi_PX01(LightType,4);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      sprintf(pName,&DAT_003f3dc0);
      return;
    }
    *pName = '\0';
  }
                    /* end of inlined section */
  return;
}

static void SceneMakeModelPrefix(char *pName, u_int ModelType, u_int ModelId) {
	static reference_fixed_array<char *,4> ModelTypeToPrefix;
	
  if (__tmp_12_1317 == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    __tmp_12_1317 = 1;
    ModelTypeToPrefix_1316 = &PTR_DAT_003c56a8;
  }
                    /* end of inlined section */
  if (pName != (char *)0x0) {
    if (ModelType < 4) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1ZPc_UiUi_PX01(ModelType,4);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      sprintf(pName,s__s_03d_003f3df0);
      return;
    }
    *pName = '\0';
  }
                    /* end of inlined section */
  return;
}

void SceneChangeLightParameter(int LightType, int LightNo, int ModelType, int ModelId, float r, float g, float b, float Power, float Cone) {
	FOD_LIGHT *pFodLight;
	char LightNameBuf[28];
	char ModelPrefixBuf[28];
	int i;
	float intens;
	
  int iVar1;
  char *pcVar2;
  G3DLIGHT *pLight;
  int iVar3;
  int iVar4;
  float fVar5;
  char LightNameBuf [28];
  char ModelPrefixBuf [28];
  
  iVar1 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* end of inlined section */
  SceneMakeLightName__FPcUiUi(LightNameBuf,LightType,LightNo);
  SceneMakeModelPrefix__FPcUiUi(ModelPrefixBuf,ModelType,ModelId);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar4 = iVar1 * 0x2130 + 0x33fa60;
  if (((LightNameBuf[0] != '\0') && (ModelPrefixBuf[0] != '\0')) &&
     (iVar3 = 0, 0 < (int)scene_ctrl.field0_0x0.m_aData[iVar1].fod_ctrl.fod_light.all_lit_num)) {
    pLight = (G3DLIGHT *)&scene_ctrl.field0_0x0.m_aData[iVar1].fod_ctrl.fod_light.all_lit;
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(iVar3,0x24);
      if ((uint)*(byte *)(iVar4 + 1) == LightType) {
        _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(iVar3,0x24);
        pcVar2 = strstr((char *)(iVar4 + 4),LightNameBuf);
        if (pcVar2 != (char *)0x0) {
          _fixed_array_verifyrange__H1Z14FOD_LIT_SERIAL_UiUi_PX01(iVar3,0x24);
          pcVar2 = strstr((char *)(iVar4 + 4),ModelPrefixBuf);
          if (pcVar2 != (char *)0x0) {
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar3,0x24);
            pLight->fMaxRange = Power;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar3,0x24);
            pLight->fMinRange = Power * 0.5;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar3,0x24);
            pLight->vDiffuse[0] = r;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar3,0x24);
            pLight->vDiffuse[1] = g;
            _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar3,0x24);
            fVar5 = DAT_003ee838;
                    /* end of inlined section */
                    /* end of inlined section */
            pLight->vDiffuse[2] = b;
            if (LightType == 2) {
              fVar5 = cosf((Cone * fVar5) / 180.0);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
              _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar3,0x24);
              gra3dSetLightIntens__FPC8G3DLIGHTf(pLight,fVar5 * fVar5);
            }
          }
        }
      }
                    /* end of inlined section */
      iVar3 = iVar3 + 1;
      pLight = pLight + 1;
      iVar4 = iVar4 + 0x20;
    } while (iVar3 < (int)scene_ctrl.field0_0x0.m_aData[iVar1].fod_ctrl.fod_light.all_lit_num);
  }
  return;
}

void SceneChangeHandSpotLightParameter(float r, float g, float b, float Power, float Cone) {
  int iVar1;
  int iVar2;
  G3DLIGHT *pLight;
  float fVar3;
  
  iVar2 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar1 = scene_ctrl.field0_0x0.m_aData[iVar2].fod_ctrl.fod_light.hand_spot_no;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (iVar1 != -1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z8G3DLIGHT_UiUi_PX01(iVar1,0x24);
                    /* end of inlined section */
                    /* end of inlined section */
    fVar3 = Cone * DAT_003ee83c;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pLight = (G3DLIGHT *)(iVar2 * 0x2130 + 0x33fee0 + iVar1 * 0x70);
                    /* end of inlined section */
    pLight->fMinRange = Power * 0.5;
    pLight->vDiffuse[0] = r;
    pLight->vDiffuse[1] = g;
    pLight->vDiffuse[2] = b;
    pLight->fMaxRange = Power;
    fVar3 = cosf(fVar3 / 180.0);
    gra3dSetLightIntens__FPC8G3DLIGHTf(pLight,fVar3 * fVar3);
  }
  return;
}

ANI_CTRL* SceneGetAniCtrl(int ModelId) {
	ANI_CTRL *pRetAniCtrl;
	SCENE_CTRL *pSceneCtrl;
	int i;
	
  int iVar1;
  SCENE_CTRL *pSVar2;
  int iVar3;
  
  iVar1 = scn_now_play_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10SCENE_CTRL_UiUi_PX01(scn_now_play_id,2);
  pSVar2 = scene_ctrl.field0_0x0.m_aData + iVar1;
                    /* end of inlined section */
  if (0 < scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num) {
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
      if ((pSVar2->man_mdl).field0_0x0.m_aData[0].mdl_no == ModelId) {
        _fixed_array_verifyrange__H1Z11SCN_ANM_MDL_UiUi_PX01(iVar3,8);
                    /* end of inlined section */
        return (pSVar2->man_mdl).field0_0x0.m_aData[0].pMdlAnm;
      }
      iVar3 = iVar3 + 1;
      pSVar2 = (SCENE_CTRL *)((pSVar2->man_mdl).field0_0x0.m_aData + 1);
    } while (iVar3 < scene_ctrl.field0_0x0.m_aData[iVar1].man_mdl_num);
  }
  return (ANI_CTRL *)0x0;
}

int SceneEffectDataFileNoGet(int scene_no) {
  int iVar1;
  
  iVar1 = GetFileNoFromSceneNo__Fi(scene_no);
  return iVar1 + 2;
}

void SceneManModelLegPositionGet(float *LegPos, int ModelId) {
	ANI_CTRL *pAniCtrl;
	
  ANI_CTRL *ani_ctrl;
  
  ani_ctrl = SceneGetAniCtrl__Fi(ModelId);
  if (ani_ctrl == (ANI_CTRL *)0x0) {
    *LegPos = 0.0;
    LegPos[3] = 1.0;
    LegPos[1] = 0.0;
    LegPos[2] = 0.0;
  }
  else {
    GetMdlLegPos__FPfP8ANI_CTRLUs(LegPos,ani_ctrl,(short)ModelId);
  }
  return;
}

void SceneManModelHipPositionGet(float *HipPos, int ModelId) {
	ANI_CTRL *pAniCtrl;
	
  ANI_CTRL *ani_ctrl;
  
  ani_ctrl = SceneGetAniCtrl__Fi(ModelId);
  if (ani_ctrl == (ANI_CTRL *)0x0) {
    *HipPos = 0.0;
    HipPos[3] = 1.0;
    HipPos[1] = 0.0;
    HipPos[2] = 0.0;
  }
  else {
    GetMdlHipPos__FPfP8ANI_CTRLUs(HipPos,ani_ctrl,(short)ModelId);
  }
  return;
}

SCENE_CTRL* SCENE_CTRL * _fixed_array_verifyrange<SCENE_CTRL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

SCN_ANM_MDL* SCN_ANM_MDL * _fixed_array_verifyrange<SCN_ANM_MDL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

FOD_LIT_SERIAL* FOD_LIT_SERIAL * _fixed_array_verifyrange<FOD_LIT_SERIAL>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

G3DLIGHT* G3DLIGHT * _fixed_array_verifyrange<G3DLIGHT>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

float*[4] float [3] * _fixed_array_verifyrange<float [3]>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

AREA_PREFIX_TO_NO* AREA_PREFIX_TO_NO * _fixed_array_verifyrange<AREA_PREFIX_TO_NO>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	AREA_PREFIX_TO_NO *ra;
	
                    /* end of inlined section */
  if ((__priority == 0xffff) && (__initialize_p == 1)) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    area_prefix_to_no.field0_0x0.m_aData =
         (fixed_array_base<AREA_PREFIX_TO_NO,10,AREA_PREFIX_TO_NO_*>)&PTR_DAT_003c56b8;
  }
  return;
}

type_info& SCENE_CTRL type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& SCN_ANM_MDL type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& FOD_LIT_SERIAL type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& G3DLIGHT type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& float [3] type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

type_info& AREA_PREFIX_TO_NO type_info function() {
  g3ddbgAssert__FbPCce(false,str_849);
  return (type_info *)v;
}

static void global constructors keyed to scene_ctrl() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
