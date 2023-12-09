// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_H

typedef struct {
	int album_type;
	PFILE_WRK album_info;
} ALBUM_INFO;

struct fixed_array_base<ALBUM_INFO,2,ALBUM_INFO[2]> {
protected:
	ALBUM_INFO m_aData[2];
	
public:
	fixed_array_base<ALBUM_INFO,2,ALBUM_INFO[2]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	ALBUM_INFO& operator[]();
	ALBUM_INFO& operator[]();
	ALBUM_INFO* data();
	ALBUM_INFO* begin();
	ALBUM_INFO* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<ALBUM_INFO,2> : fixed_array_base<ALBUM_INFO,2,ALBUM_INFO[2]> {
};

extern fixed_array<ALBUM_INFO,2> album_info;
extern unsigned char ALBUM_INFO type_info node[8];
extern unsigned char PICTURE_WRK type_info node[8];

void AlbumInit(int init_mode);
void AlbumBackGroundLoadReq(void* (*mem_get)(/* parameters unknown */), void (*mem_free)(/* parameters unknown */));
void GetAlbumTexMem(void **tex_addr, int data_label);
int AlbumMain();
void AlbumOutReq();
void ChengeCurrentAlbum();
void SetAlbumPhotoNo(char photo_no);
void SetAlbumSaveDataAddr(void *data_addr);
void SetAlbumTitleFlg(char flg);
int GetCurrentAlbum();
int GetAlbumPhotoNo();
void* GetAlbumDataAddr(int album_data_label);
void* GetAlbumOutGameTexAddr();
void* GetAlbumCmnTexAddr();
void* GetAlbumEditTexAddr();
void* GetAlbumSaveLoadTexAddr();
void* GetAlbumSlotSelTexAddr();
void AlbumEnd();
void LiberateAlbumTexMem(void **tex_addr);
void AlbumTexLoadCancel(void *tex_addr, int data_label);
void AlbumDispMain();
void SetSave_AlbumData(MC_SAVE_DATA *data);
void SetSave_AlbumInfoData(MC_SAVE_DATA *data);
ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max);
PICTURE_WRK* PICTURE_WRK * _fixed_array_verifyrange<PICTURE_WRK>(size_t v, size_t _max);
type_info& ALBUM_INFO type_info function();
type_info& PICTURE_WRK type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_ALBUM_PRG_ALBUM_H
