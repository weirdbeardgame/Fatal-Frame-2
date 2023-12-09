// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_KAZA_PUZZLE_KAZA_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_KAZA_PUZZLE_KAZA_DAT_H

struct fixed_array_base<int,4,int *> {
protected:
	int *m_aData;
	
public:
	fixed_array_base<int,4,int *>& operator=();
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

struct reference_fixed_array<int,4> : fixed_array_base<int,4,int *> {
};

extern reference_fixed_array<int,4> kaza_panel_center;
extern reference_fixed_array<int,4> kaza_panel_left_up;
extern reference_fixed_array<int,4> kaza_panel_right_up;
extern reference_fixed_array<int,4> kaza_panel_right_down;
extern reference_fixed_array<int,4> kaza_panel_left_down;
extern reference_fixed_array<int,4> kaza2_panel_center;
extern reference_fixed_array<int,4> kaza2_panel_left_up;
extern reference_fixed_array<int,4> kaza2_panel_right_up;
extern reference_fixed_array<int,4> kaza2_panel_right_down;
extern reference_fixed_array<int,4> kaza2_panel_left_down;
extern SPRT_DAT puzzle_kaza_tex[58];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_KAZA_PUZZLE_KAZA_DAT_H
