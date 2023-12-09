// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_DAT_EV_DISP_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_DAT_EV_DISP_DAT_H

typedef struct {
	u_long tex0;
	u_short u;
	u_short v;
	u_short w;
	u_short h;
	int x;
	int y;
	int pri;
	u_char alpha;
	u_char flip;
	u_char bln;
} SPRT_DAT;

struct fixed_array_base<int,11,int *> {
protected:
	int *m_aData;
	
public:
	fixed_array_base<int,11,int *>& operator=();
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

struct reference_fixed_array<int,11> : fixed_array_base<int,11,int *> {
};

extern SPRT_DAT ev_disp2d_dat[2];
extern SPRT_DAT ev_chapter_dat[2];
extern reference_fixed_array<int,11> chapter_tim_file;


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_DAT_EV_DISP_DAT_H
