// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_DAT_EV_TALK_DAT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_DAT_EV_TALK_DAT_H

struct fixed_array_base<int,8,int *> {
protected:
	int *m_aData;
	
public:
	fixed_array_base<int,8,int *>& operator=();
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

struct reference_fixed_array<int,8> : fixed_array_base<int,8,int *> {
};

extern reference_fixed_array<int,8> talk_info;


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_DAT_EV_TALK_DAT_H
