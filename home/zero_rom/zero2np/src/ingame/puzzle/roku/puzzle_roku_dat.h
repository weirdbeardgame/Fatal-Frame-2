// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_ROKU_PUZZLE_ROKU_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_ROKU_PUZZLE_ROKU_DAT_H

struct fixed_array_base<int,5,int *> {
protected:
	int *m_aData;
	
public:
	fixed_array_base<int,5,int *>& operator=();
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

struct reference_fixed_array<int,5> : fixed_array_base<int,5,int *> {
};

extern reference_fixed_array<int,5> six_puzzle_answer;
extern int six_pzl_book_label[5][2];
extern float shelf_book_x[5];
extern SPRT_DAT puzzle_roku_tex[33];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PUZZLE_ROKU_PUZZLE_ROKU_DAT_H
