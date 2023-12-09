// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CAMERA_POWER_UP_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CAMERA_POWER_UP_H

struct BIT_FLAGS<4> {
protected:
	int flag_32[1];
	
public:
	BIT_FLAGS<4>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct BIT_FLAGS<10> {
protected:
	int flag_32[1];
	
public:
	BIT_FLAGS<10>& operator=();
	BIT_FLAGS();
	BIT_FLAGS();
	void AllDown();
	void AllUp();
	int GetUpNum();
	void FlgUp();
	void FlgDown();
	int IsUp();
};

struct CCameraPowerUp {
	CVariable<char,0,3> mSensitiveGrade;
	CVariable<char,0,3> mRadiusGrade;
	CVariable<char,0,3> mRadiusGem;
	CVariable<char,0,3> mSensiteiveGem;
	CVariable<char,0,3> mAccumGem;
	CVariable<char,0,3> mSubFuncGem[10];
	BIT_FLAGS<4> mAdditionFlg;
	BIT_FLAGS<4> mCamPartsFlg;
	BIT_FLAGS<4> mCamPartsSetFlg;
	BIT_FLAGS<10> mTemperedRenzFlg;
private:
	static float aRadiusTbl[4];
	static float aDistanceTbl[4];
	static float aDmgTbl[4];
	
public:
	CCameraPowerUp& operator=();
	CCameraPowerUp();
	CCameraPowerUp();
	float GetRadius();
	float GetRadiusRate();
	float GetDistance();
	float GetDmgRate();
	void Init();
	void AllRelease();
};

extern float CCameraPowerUp::aDistanceTbl[4];
extern float CCameraPowerUp::aDmgTbl[4];
extern float CCameraPowerUp::aRadiusTbl[4];
extern unsigned char CVariable<char, 0, 9> type_info node[8];
extern unsigned char CVariable<char, 0, 3> type_info node[8];


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_PHOTO_CAMERA_POWER_UP_H
