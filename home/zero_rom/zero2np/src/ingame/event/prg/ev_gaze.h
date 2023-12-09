// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_GAZE_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_GAZE_H

struct CEventGazeWrk {
protected:
	unsigned char mActive : 1;
	unsigned char mObjAppoint : 1;
	char mObjType;
	int mObjId;
	sceVu0FVECTOR mPos;
	
public:
	CEventGazeWrk& operator=();
	CEventGazeWrk();
	CEventGazeWrk();
	void Init();
	void SetObjType(int iObjType, int iObjId);
	void SetPoint(float *Pos);
};

struct CEventSisterGazeWrk : CEventGazeWrk {
	CEventSisterGazeWrk& operator=();
	CEventSisterGazeWrk();
	CEventSisterGazeWrk();
	void Work();
};

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_EVENT_PRG_EV_GAZE_H
