// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MOVIE_ROOM_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MOVIE_ROOM_H

struct CMovieRoom {
private:
	unsigned int mActFlg : 1;
	unsigned int mPreloadFlg : 1;
	int mSndId;
	int mBankNo;
	playPssRsrcs ing_rsrcs;
	float *mpaVec[4];
	
public:
	CMovieRoom& operator=();
	CMovieRoom();
	CMovieRoom();
	void Init();
	void Release();
	int PreLoad(int iPssFileNo, float *paVec[4]);
	int PlayFilm();
	int Work();
	void Draw();
};


#endif // HOME_ZERO_ROM_ZERO2NP_SRC_INGAME_MOVIE_ROOM_H
