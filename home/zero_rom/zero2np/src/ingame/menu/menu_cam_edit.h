// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CAM_EDIT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CAM_EDIT_H

struct CVariable<char,0,3> {
private:
	char mValue;
	
public:
	CVariable<char,0,3>& operator=();
	CVariable();
	CVariable();
	void Init();
	void SetMax();
	void SetMin();
	char GetMax();
	char GetMin();
	char GetWidth();
	void Set();
	int Increment();
	int Decrement();
	int LoopIncrement();
	int LoopDecrement();
	int Offset();
	int Add();
	int Sub();
	int LoopAdd();
	int LoopSub();
	int Get();
};

extern unsigned char DISP_LENS_DATA type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];
extern unsigned char CVariable<char, 0, 9> type_info node[8];

void MenuCamEditInit();
int MenuCamEditMain();
void MenuCamEditDisp();
DISP_LENS_DATA* DISP_LENS_DATA * _fixed_array_verifyrange<DISP_LENS_DATA>(size_t v, size_t _max);
char* char * _fixed_array_verifyrange<char>(size_t v, size_t _max);
CVariable<char,0,3>* CVariable<char, 0, 3> * _fixed_array_verifyrange<CVariable<char, 0, 3> >(size_t v, size_t _max);
int* int * _fixed_array_verifyrange<int>(size_t v, size_t _max);
type_info& DISP_LENS_DATA type_info function();
type_info& CVariable<char, 0, 3> type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MENU_MENU_CAM_EDIT_H
