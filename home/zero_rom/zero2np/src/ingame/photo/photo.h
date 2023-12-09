// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_H

typedef struct {
	u_char stat;
	u_char second;
	u_char minute;
	u_char hour;
	u_char pad;
	u_char day;
	u_char month;
	u_char year;
} sceCdCLOCK;

struct SUBJECT_WRK {
	u_short sp_no;
	u_short no;
	short int type;
};

struct fixed_array<_PICTURE_SUBJECT,3> : fixed_array_base<_PICTURE_SUBJECT,3,_PICTURE_SUBJECT[3]> {
};

typedef struct {
	u_char adr_no;
	u_char chp_no;
	u_char status;
	fixed_array<_PICTURE_SUBJECT,3> maSubject;
	u_int score;
	sceCdCLOCK time;
	short int room;
} PICTURE_WRK;

struct fixed_array<PICTURE_WRK,16> : fixed_array_base<PICTURE_WRK,16,PICTURE_WRK[16]> {
};

typedef struct {
	u_char pic_num;
	u_char protect_num;
	u_char sort_key;
	u_char skey_bak;
	fixed_array<PICTURE_WRK,16> pic;
	u_int padding;
} PFILE_WRK;

struct _HINT_PHOTO_REQ {
	int no;
};

typedef _HINT_PHOTO_REQ HINT_PHOTO_REQ;

struct _PHOTO_WRK_DEF {
	float pos[4];
	HINT_PHOTO_REQ hint_pict[5];
	int hint_cnt;
	int adr_no;
	PHOTO_TYPE type;
	int msg_name;
	int msg_type;
	int unlock_ghost;
};

typedef _PHOTO_WRK_DEF PHOTO_WRK_DEF;
extern PFILE_WRK pfile_wrk;
extern unsigned char _HINT_PHOTO_REQ type_info node[8];
extern unsigned char PICTURE_WRK type_info node[8];
extern unsigned char _PICTURE_SUBJECT type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern PHOTO_WRK photo_wrk;

void PhotoWrkPreInit();
void PhotoWrkInit(PHOTO_WRK_DEF *pDef);
int PhotoMain();
void InitPhotoWrk();
void PicturePre1();
void PictureInitSub();
void PicturePre3();
void PicturePre4();
void PictureDisp();
void PictureHint1();
void PictureHint2();
void PictureToUnlockGhost();
void PictureUnlockGhost();
void PictureHint3();
void PictureCapture();
int GetSavePhotoNo();
int AddPhotoData(int adr_no, int score, int room_no, int chapter_no, sceCdCLOCK rtc, SUBJECT_WRK *obj, int obj_num);
void DeletePhotoData(u_char no);
void CopyPFileWrk(PFILE_WRK *copy_wrk);
PFILE_WRK* GetCamPhotoFile();
int GetFilePhotoState(u_char no);
int GetFilePhotoAdrNo(u_char no);
int SetFilePhotoProtect(u_char no);
void DelFilePhotoProtect(u_char no);
PICTURE_WRK* GetPhotoData(u_char no);
int GetFilePhotoNum();
void SortPhotoData_Before(PFILE_WRK *photo_file);
void SortPhotoData_Protect(PFILE_WRK *photo_file);
void SortPhotoData_NonProtect(PFILE_WRK *photo_file);
void SortPhotoData_NewTime(PFILE_WRK *photo_file);
void SortPhotoData_OldTime(PFILE_WRK *photo_file);
void SortPhotoData_BigScore(PFILE_WRK *photo_file);
void SortPhotoData_SmallScore(PFILE_WRK *photo_file);
void init_Story_Photo();
void end_Story_Photo();
GPHASE_ENUM one_Story_Photo(GPHASE_ENUM dummy);
int PhotoFlgIsUp();
void FurnPhotoFlgUp();
int FurnPhotoFlgIsUp();
void PhotoDebug();
HINT_PHOTO_REQ* _HINT_PHOTO_REQ * _fixed_array_verifyrange<_HINT_PHOTO_REQ>(size_t v, size_t _max);
PICTURE_WRK* PICTURE_WRK * _fixed_array_verifyrange<PICTURE_WRK>(size_t v, size_t _max);
PICTURE_SUBJECT* _PICTURE_SUBJECT * _fixed_array_verifyrange<_PICTURE_SUBJECT>(size_t v, size_t _max);
type_info& _HINT_PHOTO_REQ type_info function();
type_info& PICTURE_WRK type_info function();
type_info& _PICTURE_SUBJECT type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_PHOTO_H
