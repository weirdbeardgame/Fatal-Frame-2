// STATUS: NOT STARTED

#include "camera_film.h"

unsigned char CCameraFilm::aFilmDamageTbl[5] = {
	/* [0] = */ 8,
	/* [1] = */ 20,
	/* [2] = */ 25,
	/* [3] = */ 30,
	/* [4] = */ 40
};

unsigned char CCameraFilm::aFilmMinPercentTbl[5] = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 40,
	/* [3] = */ 60,
	/* [4] = */ 80
};

unsigned char CCameraFilm::aFilmChargeSpdTbl[5] = {
	/* [0] = */ 170,
	/* [1] = */ 100,
	/* [2] = */ 80,
	/* [3] = */ 60,
	/* [4] = */ 150
};
