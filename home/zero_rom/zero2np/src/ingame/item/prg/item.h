// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_ITEM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_ITEM_H

typedef struct {
	int item_id;
	int have_num;
} PLYR_ITEM;

typedef struct {
	int item_id;
	u_char type;
	u_char get_max;
	u_char def_use_num;
	int value;
	char item_name[32];
} ITEM_DAT;

struct fixed_array_base<PLYR_ITEM,58,PLYR_ITEM[58]> {
protected:
	PLYR_ITEM m_aData[58];
	
public:
	fixed_array_base<PLYR_ITEM,58,PLYR_ITEM[58]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	PLYR_ITEM& operator[]();
	PLYR_ITEM& operator[]();
	PLYR_ITEM* data();
	PLYR_ITEM* begin();
	PLYR_ITEM* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<PLYR_ITEM,58> : fixed_array_base<PLYR_ITEM,58,PLYR_ITEM[58]> {
};

extern fixed_array<PLYR_ITEM,58> plyr_item;
extern unsigned char PLYR_ITEM type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];

void AllPlyrItemInit();
void PlyrItemInit(PLYR_ITEM *plyr_item_addr);
void AllPlyrEventItemLost();
void ItemGet(int item_id, u_char get_num);
u_char ItemGetPossible(int item_id);
u_char ItemUse(int item_id, u_char use_num);
u_char ItemUsePossible(int item_id, u_char use_num);
void ItemLost(int item_id, u_char use_num);
int GetPlyrItemHaveNum(int item_id);
int GetHaveItemTypeNum();
int GetItemType(int item_id);
ITEM_DAT* GetItemDatAddr(int item_id);
int ItemPlyrHPRecover(int item_id);
int ItemPlyrSPRecover(int item_id);
int ItemFilmEquip(int item_id);
void SetSave_PlyrItem(MC_SAVE_DATA *data);
void DebugAllItemGet();
void ItemDbgPlyrItemPrint();
PLYR_ITEM* PLYR_ITEM * _fixed_array_verifyrange<PLYR_ITEM>(size_t v, size_t _max);
type_info& PLYR_ITEM type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_ITEM_PRG_ITEM_H
