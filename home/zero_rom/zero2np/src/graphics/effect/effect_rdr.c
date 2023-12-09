// STATUS: NOT STARTED

#include "effect_rdr.h"

struct fixed_array_base<BURN_FIRE,30,BURN_FIRE[30]> {
protected:
	BURN_FIRE m_aData[30];
	
public:
	fixed_array_base<BURN_FIRE,30,BURN_FIRE[30]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	BURN_FIRE& operator[]();
	BURN_FIRE& operator[]();
	BURN_FIRE* data();
	BURN_FIRE* begin();
	BURN_FIRE* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<BURN_FIRE,30> : fixed_array_base<BURN_FIRE,30,BURN_FIRE[30]> {
};

struct fixed_array_base<EFFRDR_RSV,10,EFFRDR_RSV[10]> {
protected:
	EFFRDR_RSV m_aData[10];
	
public:
	fixed_array_base<EFFRDR_RSV,10,EFFRDR_RSV[10]>& operator=();
	fixed_array_base();
protected:
	fixed_array_base();
public:
	EFFRDR_RSV& operator[]();
	EFFRDR_RSV& operator[]();
	EFFRDR_RSV* data();
	EFFRDR_RSV* begin();
	EFFRDR_RSV* end();
	void fill();
	size_t size();
	bool empty();
};

struct fixed_array<EFFRDR_RSV,10> : fixed_array_base<EFFRDR_RSV,10,EFFRDR_RSV[10]> {
};

fixed_array<BURN_FIRE,30> burn_fire = {
	/* base class 0 = */ {
		/* .m_aData = */ {
			/* [0] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [1] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [2] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [3] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [4] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [5] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [6] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [7] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [8] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [9] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [10] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [11] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [12] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [13] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [14] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [15] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [16] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [17] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [18] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [19] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [20] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [21] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [22] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [23] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [24] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [25] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [26] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [27] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [28] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			},
			/* [29] = */ {
				/* .ligdiff = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ligpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .fpos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .ebuf = */ NULL,
				/* .ligpow = */ 0.f,
				/* .wavew = */ 0.f,
				/* .rate = */ 0.f,
				/* .szw = */ 0.f,
				/* .szh = */ 0.f,
				/* .sw = */ 0.f,
				/* .sh = */ 0.f,
				/* .furn_id = */ 0,
				/* .lignum = */ 0,
				/* .usefl = */ 0,
				/* .sta = */ 0,
				/* .pat = */ 0
			}
		}
	}
};

fixed_array<EFFRDR_RSV,10> pfire_rsv = {
	/* base class 0 = */ {
		/* .m_aData = */ {
			/* [0] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [1] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [2] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [3] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [4] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [5] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [6] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [7] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [8] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			},
			/* [9] = */ {
				/* .Position = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .CenterPos = */ {
					/* [0] = */ 0.f,
					/* [1] = */ 0.f,
					/* [2] = */ 0.f,
					/* [3] = */ 0.f
				},
				/* .adr = */ NULL,
				/* .furn_id = */ 0,
				/* .Type = */ 0,
				/* .RotY = */ 0.f,
				/* .WavePos = */ 0.f
			}
		}
	}
};

unsigned char EFFRDR_RSV type_info node[8];
unsigned char BURN_FIRE type_info node[8];

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a7de0;
	
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9BURN_FIRE(0x3eff30,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9BURN_FIRE(0x3eff38,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9BURN_FIRE(0x3a7e28,_max);
  }
  return (uint **)0x0;
}

void InitEffectRdr(int tex_id) {
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  
  memset(&burn_fire,0,0xb40);
  piVar3 = &pfire_rsv.field0_0x0.m_aData[0].furn_id;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
    iVar2 = iVar1 + 1;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar1,10);
    *piVar3 = -1;
                    /* end of inlined section */
    piVar3 = piVar3 + 0x10;
    iVar1 = iVar2;
  } while (iVar2 < 10);
  return;
}

void InitEffectRdrEF() {
  return;
}

static void* GetBurnFireWork() {
	int i;
	
  int iVar1;
  fixed_array<BURN_FIRE,30> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &burn_fire;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z9BURN_FIRE_UiUi_PX01(iVar1,0x1e);
    if (((BURN_FIRE *)pfVar2)->usefl == '\0') {
      _fixed_array_verifyrange__H1Z9BURN_FIRE_UiUi_PX01(iVar1,0x1e);
      ((BURN_FIRE *)pfVar2)->usefl = '\x01';
      _fixed_array_verifyrange__H1Z9BURN_FIRE_UiUi_PX01(iVar1,0x1e);
      return (BURN_FIRE *)pfVar2;
    }
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<BURN_FIRE,30> *)((int)pfVar2 + 0x60);
  } while (iVar1 < 0x1e);
  return (void *)0x0;
}

static void* SearchBurnFireFurnID(int furn_id) {
	int i;
	
  int iVar1;
  fixed_array<BURN_FIRE,30> *pfVar2;
  
  iVar1 = 0;
  pfVar2 = &burn_fire;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  while ((_fixed_array_verifyrange__H1Z9BURN_FIRE_UiUi_PX01(iVar1,0x1e),
         ((BURN_FIRE *)pfVar2)->usefl != '\x01' ||
         (_fixed_array_verifyrange__H1Z9BURN_FIRE_UiUi_PX01(iVar1,0x1e),
         ((BURN_FIRE *)pfVar2)->furn_id != furn_id))) {
    iVar1 = iVar1 + 1;
    pfVar2 = (fixed_array<BURN_FIRE,30> *)((int)pfVar2 + 0x60);
    if (0x1d < iVar1) {
      return (void *)0x0;
    }
  }
  _fixed_array_verifyrange__H1Z9BURN_FIRE_UiUi_PX01(iVar1,0x1e);
  return (BURN_FIRE *)pfVar2;
}

void SetRDLongFire2(float *pos, u_char sta, float szw, float szh, float sw, float sh, float r, float g, float b, float room, int furn_id) {
	EFFECT_CONT *ecw;
	void *ret;
	
  undefined8 uVar1;
  void *pvVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pvVar2 = SearchBurnFireFurnID__Fi(furn_id);
  if (pvVar2 == (void *)0x0) {
    pfVar3 = (float *)GetBurnFireWork__Fv();
    if (pfVar3 == (float *)0x0) {
      printf("BurnFire Work Is Full!!\n");
      return;
    }
    uVar1 = *(undefined8 *)pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar4 = pos[2];
    fVar5 = pos[3];
    pfVar3[8] = (float)uVar1;
    pfVar3[9] = (float)((ulong)uVar1 >> 0x20);
    pfVar3[10] = fVar4;
    pfVar3[0xb] = fVar5;
                    /* end of inlined section */
    pvVar2 = SetEffects__Fiie(0x15,2);
    pfVar3[0xc] = (float)pvVar2;
    if (pvVar2 != (void *)0x0) {
      pfVar3[0x14] = (float)furn_id;
      *pfVar3 = r;
      pfVar3[1] = g;
      pfVar3[2] = b;
      pfVar3[3] = 1.0;
      pfVar3[0x10] = szw;
      pfVar3[0x11] = szh;
      pfVar3[0x12] = sw;
      pfVar3[0x13] = sh;
      *(uchar *)((int)pfVar3 + 0x56) = sta;
      if ((sta & 1) != 0) {
        *(undefined *)(pfVar3 + 0x15) = 0x20;
      }
      printf("addr:%x\n");
      *(float **)((int)pfVar3[0xc] + 0x34) = pfVar3;
    }
  }
  return;
}

void SetRDLongFire(float *pos, float r, float g, float b, float room, int furn_id) {
  SetRDLongFire2__FPfUcffffffffi(pos,'\x03',1.0,1.0,1.0,1.0,r,g,b,room,furn_id);
  return;
}

void ResetRDLongFire(int furn_id) {
	void *ret;
	
  void *pvVar1;
  
  pvVar1 = SearchBurnFireFurnID__Fi(furn_id);
  if (pvVar1 == (void *)0x0) {
    printf("Not Find BurnFire Work!!\n");
    return;
  }
  ResetEffects__FPv(*(void **)((int)pvVar1 + 0x30));
  *(undefined *)((int)pvVar1 + 0x55) = 0;
  return;
}

void RDLongFireFlareUpReq(int furn_id) {
	void *ret;
	
  void *pvVar1;
  
  pvVar1 = SearchBurnFireFurnID__Fi(furn_id);
  if (pvVar1 == (void *)0x0) {
    printf("Not Find BurnFire Work!!\n");
    return;
  }
  EffOthCandleFlameFlareUpReq__FP11EFFECT_CONT(*(EFFECT_CONT **)((int)pvVar1 + 0x30));
  return;
}

short int GetRDPFireWork() {
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = &pfire_rsv.field0_0x0.m_aData[0].furn_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar2,10);
    iVar1 = *piVar3;
    piVar3 = piVar3 + 0x10;
    if (iVar1 == -1) {
                    /* end of inlined section */
      return (ushort)iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return 0xffff;
}

short int SearchRDPFireWork(int furn_id) {
	int i;
	
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = &pfire_rsv.field0_0x0.m_aData[0].furn_id;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  do {
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar2,10);
    iVar1 = *piVar3;
    piVar3 = piVar3 + 0x10;
    if (iVar1 == furn_id) {
                    /* end of inlined section */
      return (ushort)iVar2;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return 0xffff;
}

void SetRDPFire(float *pos, int furn_id, int Type) {
	int ret;
	
  undefined8 uVar1;
  ushort uVar2;
  void *pvVar3;
  float fVar4;
  float fVar5;
  EFFRDR_RSV *pPosition;
  
  uVar2 = GetRDPFireWork__Fv();
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  pPosition = pfire_rsv.field0_0x0.m_aData + (short)uVar2;
                    /* end of inlined section */
  if ((short)uVar2 < 0) {
    printf("PFire Work Is Full!!:%d\n");
    return;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
  uVar1 = *(undefined8 *)pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
  fVar4 = pos[2];
  fVar5 = pos[3];
  pPosition->Position[0] = (float)uVar1;
  pfire_rsv.field0_0x0.m_aData[(short)uVar2].Position[1] = (float)((ulong)uVar1 >> 0x20);
  pfire_rsv.field0_0x0.m_aData[(short)uVar2].Position[2] = fVar4;
  pfire_rsv.field0_0x0.m_aData[(short)uVar2].Position[3] = fVar5;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if (Type == 8) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
    pvVar3 = EffectSetTorch2NoSE__FPA3_fi(pPosition->Position,8);
  }
  else {
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
    pvVar3 = EffectSetTorch2__FPA3_fi(pPosition->Position,Type);
  }
  _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
  pfire_rsv.field0_0x0.m_aData[(short)uVar2].adr = pvVar3;
  _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
  pfire_rsv.field0_0x0.m_aData[(short)uVar2].furn_id = furn_id;
  _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
  pfire_rsv.field0_0x0.m_aData[(short)uVar2].Type = Type;
  _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
  pfire_rsv.field0_0x0.m_aData[(short)uVar2].RotY = 0.0;
  _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
  pfire_rsv.field0_0x0.m_aData[(short)uVar2].WavePos = 0.0;
  return;
}

void SetRDPFireMove(float *pos, float *rot, int furn_id) {
	float RotY;
	int ret;
	
  undefined8 uVar1;
  ushort uVar2;
  int iVar3;
  void *pvVar4;
  float fVar5;
  float fVar6;
  EFFRDR_RSV *pPosition;
  float fVar7;
  float fVar8;
  
  fVar8 = rot[1] * DAT_003edf34;
  uVar2 = GetRDPFireWork__Fv();
  if (-1 < (short)uVar2) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    pPosition = pfire_rsv.field0_0x0.m_aData + (short)uVar2;
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
    uVar1 = *(undefined8 *)pos;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/g3dxVu0.h */
    fVar5 = pos[2];
    fVar6 = pos[3];
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].CenterPos[0] = (float)uVar1;
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].CenterPos[1] = (float)((ulong)uVar1 >> 0x20);
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].CenterPos[2] = fVar5;
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].CenterPos[3] = fVar6;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
    RDPFireCalcMovePos__FPfPCfff(pPosition->Position,pos,DAT_003edf38,fVar8);
                    /* end of inlined section */
    iVar3 = RDPFireCheckTorchTypeExist__Fi(6);
    if (iVar3 == 0) {
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
      pvVar4 = EffectSetTorch2__FPA3_fi(pPosition->Position,6);
    }
    else {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
      pvVar4 = EffectSetTorch2NoSE__FPA3_fi(pPosition->Position,6);
    }
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].adr = pvVar4;
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].furn_id = furn_id;
    fVar5 = DAT_003edf3c;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].Type = 6;
    fVar6 = DAT_003edf40;
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].RotY = fVar8;
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
                    /* end of inlined section */
    pfire_rsv.field0_0x0.m_aData[(short)uVar2].WavePos = fVar8;
    while (_fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10), fVar8 = DAT_003edf48,
          fVar7 = DAT_003edf44, fVar5 < pfire_rsv.field0_0x0.m_aData[(short)uVar2].RotY) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
      pfire_rsv.field0_0x0.m_aData[(short)uVar2].RotY =
           pfire_rsv.field0_0x0.m_aData[(short)uVar2].RotY - fVar6;
    }
    while (_fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10),
          pfire_rsv.field0_0x0.m_aData[(short)uVar2].RotY < fVar7) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar2,10);
      pfire_rsv.field0_0x0.m_aData[(short)uVar2].RotY =
           pfire_rsv.field0_0x0.m_aData[(short)uVar2].RotY + fVar8;
    }
    return;
  }
  printf("PFire Work Is Full!!:%d\n");
  return;
}

void ResetRDPFire(int furn_id) {
	int ret;
	
  ushort uVar1;
  
  uVar1 = SearchRDPFireWork__Fi(furn_id);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  if ((short)uVar1 < 0) {
    printf("Not Find PFire Work!!\n");
    return;
  }
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar1,10);
                    /* end of inlined section */
  EffectResetTorch2__FPv(pfire_rsv.field0_0x0.m_aData[(short)uVar1].adr);
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(uVar1,10);
  pfire_rsv.field0_0x0.m_aData[(short)uVar1].furn_id = -1;
  return;
}

static void RDPFireCalcMovePos(float *Position, float *CenterPos, float Radius, float RotY) {
	float matLocalWorld[4][4];
	float LocalPos[4];
	float Offset[4];
	
  float matLocalWorld [4] [4];
  float LocalPos [4];
  float Offset [4];
  
  Offset[1] = -456.0;
  LocalPos[3] = 1.0;
  Offset[0] = 0.0;
  Offset[2] = 0.0;
  Offset[3] = 1.0;
  LocalPos[0] = 0.0;
  LocalPos[1] = 0.0;
  LocalPos[2] = Radius;
  sceVu0UnitMatrix(matLocalWorld);
  sceVu0RotMatrixY(RotY,matLocalWorld,matLocalWorld);
  sceVu0TransMatrix(matLocalWorld,matLocalWorld,CenterPos);
  sceVu0ApplyMatrix(Position,matLocalWorld,LocalPos);
  sceVu0AddVector(Position,Position,Offset);
  return;
}

void RDPFireMoveCtrl() {
	float RotSpeed;
	float WaveSize;
	float WaveSpeed;
	int i;
	
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = DAT_003edf50;
  fVar1 = DAT_003edf4c;
  fVar7 = 15.0;
  iVar3 = 0;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  iVar4 = 0;
  fVar6 = DAT_003edf54;
  do {
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
    if ((*(int *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x14) != -1) &&
       (_fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10),
       *(int *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x18) == 6)) {
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      RDPFireCalcMovePos__FPfPCfff
                ((float *)((int)pfire_rsv.field0_0x0.m_aData[0].Position + iVar4),
                 (float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4),DAT_003edf58,
                 *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x1c));
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      fVar5 = sinf(*(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x20));
      *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].Position + iVar4 + 4) =
           *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].Position + iVar4 + 4) + fVar7 * fVar5;
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x1c) =
           *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x1c) + fVar1;
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      if (DAT_003edf5c < *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x1c))
      {
        _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
        fVar5 = *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x1c) - fVar6;
LAB_0015e5c0:
        *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x1c) = fVar5;
      }
      else {
        _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
        if (*(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x1c) < DAT_003edf60
           ) {
          _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
          fVar5 = *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x1c) + fVar6;
          goto LAB_0015e5c0;
        }
      }
      fVar5 = DAT_003edf64;
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x20) =
           *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x20) + fVar2;
      _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
      if (fVar5 < *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x20)) {
        _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
        fVar5 = *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x20) - fVar5;
      }
      else {
        _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
        if (DAT_003edf68 <=
            *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x20))
        goto LAB_0015e650;
        _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar3,10);
        fVar5 = *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x20) + fVar5;
      }
      *(float *)((int)pfire_rsv.field0_0x0.m_aData[0].CenterPos + iVar4 + 0x20) = fVar5;
    }
LAB_0015e650:
    iVar3 = iVar3 + 1;
    iVar4 = iVar3 * 0x40;
    if (9 < iVar3) {
      return;
    }
  } while( true );
}

static int RDPFireCheckTorchTypeExist(int Type) {
	int RetFlg;
	int i;
	
  int iVar1;
  int iVar2;
  fixed_array<EFFRDR_RSV,10> *pfVar3;
  int iVar4;
  
  pfVar3 = &pfire_rsv;
  iVar4 = 0;
  iVar1 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar1,10);
    iVar2 = iVar1 + 1;
    if ((((EFFRDR_RSV *)pfVar3)->furn_id != -1) &&
       (_fixed_array_verifyrange__H1Z10EFFRDR_RSV_UiUi_PX01(iVar1,10),
       ((EFFRDR_RSV *)pfVar3)->Type == Type)) {
      iVar4 = 1;
    }
                    /* end of inlined section */
    pfVar3 = (fixed_array<EFFRDR_RSV,10> *)((int)pfVar3 + 0x40);
    iVar1 = iVar2;
  } while (iVar2 < 10);
  return iVar4;
}

EFFRDR_RSV* EFFRDR_RSV * _fixed_array_verifyrange<EFFRDR_RSV>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

BURN_FIRE* BURN_FIRE * _fixed_array_verifyrange<BURN_FIRE>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  return;
}

type_info& EFFRDR_RSV type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

type_info& BURN_FIRE type_info function() {
  g3ddbgAssert__FbPCce(false,str_777);
  return (type_info *)v;
}

static void global constructors keyed to burn_fire() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
