// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CENTER_CROSS_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CENTER_CROSS_H

typedef struct {
	int cnt;
	short int tx;
	short int ty;
	u_char alp;
} CENTER_CROSS;

struct CCenterCross {
private:
	CENTER_CROSS center_cercle[10];
	
public:
	CCenterCross& operator=();
	CCenterCross();
	CCenterCross();
	void Init();
	void Work();
	void Draw(int fndr_mx, int fndr_my, int iAlpha);
};

extern unsigned char ENE_WRK type_info node[8];

ENE_WRK* ENE_WRK * _fixed_array_verifyrange<ENE_WRK>(size_t v, size_t _max);
type_info& ENE_WRK type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CENTER_CROSS_H
