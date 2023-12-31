// STATUS: NOT STARTED

#include "g2d_main.h"

struct G2D_WRK {
	int init;
	int flow;
};

SPRT_DAT effdat[98] = {
	/* [0] = */ {
		/* .tex0 = */ 2308059650999779328,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [1] = */ {
		/* .tex0 = */ 2308059788438732800,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [2] = */ {
		/* .tex0 = */ 2308059922455086080,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [3] = */ {
		/* .tex0 = */ 2308060059894039552,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [4] = */ {
		/* .tex0 = */ 2308060197332993040,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [5] = */ {
		/* .tex0 = */ 2308060334771946512,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [6] = */ {
		/* .tex0 = */ 2308060473351750688,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [7] = */ {
		/* .tex0 = */ 2308060610790704160,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [8] = */ {
		/* .tex0 = */ 2308061570581682272,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 16,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [9] = */ {
		/* .tex0 = */ 2308061708020635744,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 16,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [10] = */ {
		/* .tex0 = */ 2308061845459589224,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 16,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [11] = */ {
		/* .tex0 = */ 2308061982898542696,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 16,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [12] = */ {
		/* .tex0 = */ 2308062121478346864,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [13] = */ {
		/* .tex0 = */ 2308062258917300336,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [14] = */ {
		/* .tex0 = */ 2308062396356253824,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [15] = */ {
		/* .tex0 = */ 2308062533795207296,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [16] = */ {
		/* .tex0 = */ 2308062672375011472,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [17] = */ {
		/* .tex0 = */ 2308062809813964944,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [18] = */ {
		/* .tex0 = */ 2308062946112067792,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [19] = */ {
		/* .tex0 = */ 2308063083551021264,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [20] = */ {
		/* .tex0 = */ 2308063220989974752,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [21] = */ {
		/* .tex0 = */ 2308063358428928224,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [22] = */ {
		/* .tex0 = */ 2308063495867881712,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [23] = */ {
		/* .tex0 = */ 2308063633306835184,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [24] = */ {
		/* .tex0 = */ 2308063770745788672,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [25] = */ {
		/* .tex0 = */ 2308063908184742144,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [26] = */ {
		/* .tex0 = */ 2308064045623695632,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [27] = */ {
		/* .tex0 = */ 2308064183062649104,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [28] = */ {
		/* .tex0 = */ 2308064320501602592,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [29] = */ {
		/* .tex0 = */ 2308064457940556064,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [30] = */ {
		/* .tex0 = */ 2308064595379509552,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [31] = */ {
		/* .tex0 = */ 2308064732818463024,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [32] = */ {
		/* .tex0 = */ 2308064870257416512,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [33] = */ {
		/* .tex0 = */ 2308065007696369984,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [34] = */ {
		/* .tex0 = */ 2308065145135323472,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [35] = */ {
		/* .tex0 = */ 2308065282574276944,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [36] = */ {
		/* .tex0 = */ 2308065420013230432,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [37] = */ {
		/* .tex0 = */ 2308065557452183904,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [38] = */ {
		/* .tex0 = */ 2308065694891137392,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [39] = */ {
		/* .tex0 = */ 2308065832330090864,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [40] = */ {
		/* .tex0 = */ 2308065969769044352,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [41] = */ {
		/* .tex0 = */ 2308066107207997824,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [42] = */ {
		/* .tex0 = */ 2308066244646951312,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [43] = */ {
		/* .tex0 = */ 2308066382085904784,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [44] = */ {
		/* .tex0 = */ 2308066519524858272,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [45] = */ {
		/* .tex0 = */ 2308066656963811744,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [46] = */ {
		/* .tex0 = */ 2308066794402765232,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [47] = */ {
		/* .tex0 = */ 2308066931841718704,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [48] = */ {
		/* .tex0 = */ 2308067069280672192,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [49] = */ {
		/* .tex0 = */ 2308067206719625664,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [50] = */ {
		/* .tex0 = */ 2308067344158579152,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [51] = */ {
		/* .tex0 = */ 2308067481597532624,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [52] = */ {
		/* .tex0 = */ 2308067617895635424,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 16,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [53] = */ {
		/* .tex0 = */ 2308067755334588896,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 16,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [54] = */ {
		/* .tex0 = */ 2308070368964794368,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [55] = */ {
		/* .tex0 = */ 2308070506403747840,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [56] = */ {
		/* .tex0 = */ 2308070643842701376,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 62,
		/* .h = */ 62,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [57] = */ {
		/* .tex0 = */ 2308070781281654848,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 62,
		/* .h = */ 62,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [58] = */ {
		/* .tex0 = */ 2308070917646866560,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [59] = */ {
		/* .tex0 = */ 2308071055085820032,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [60] = */ {
		/* .tex0 = */ 2308071193665640608,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [61] = */ {
		/* .tex0 = */ 2308071331104594080,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [62] = */ {
		/* .tex0 = */ 2308071466194721056,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 16,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [63] = */ {
		/* .tex0 = */ 2308071603633674528,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 16,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [64] = */ {
		/* .tex0 = */ 2308071744495196456,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [65] = */ {
		/* .tex0 = */ 2308071881934149928,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [66] = */ {
		/* .tex0 = */ 2308072293159442988,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [67] = */ {
		/* .tex0 = */ 2308072842915256876,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [68] = */ {
		/* .tex0 = */ 2308073392469727916,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 48,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [69] = */ {
		/* .tex0 = */ 2308073942225541804,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 16,
		/* .h = */ 48,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [70] = */ {
		/* .tex0 = */ 2308074492182698712,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [71] = */ {
		/* .tex0 = */ 2308075041938512600,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [72] = */ {
		/* .tex0 = */ 2308075593908951896,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [73] = */ {
		/* .tex0 = */ 2308076143664765784,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 256,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [74] = */ {
		/* .tex0 = */ 2308076691138830168,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [75] = */ {
		/* .tex0 = */ 2308077240894644056,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [76] = */ {
		/* .tex0 = */ 2308077790650458008,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [77] = */ {
		/* .tex0 = */ 2308078340406271896,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [78] = */ {
		/* .tex0 = */ 2308078890162085848,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [79] = */ {
		/* .tex0 = */ 2308079439917899736,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [80] = */ {
		/* .tex0 = */ 2308079988532863000,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [81] = */ {
		/* .tex0 = */ 2308080538288676888,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [82] = */ {
		/* .tex0 = */ 2308081088044490792,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [83] = */ {
		/* .tex0 = */ 2308081637800304680,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [84] = */ {
		/* .tex0 = */ 2308082189837836344,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [85] = */ {
		/* .tex0 = */ 2308082739593650232,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 128,
		/* .h = */ 128,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [86] = */ {
		/* .tex0 = */ 2308083288208597304,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [87] = */ {
		/* .tex0 = */ 2308083837964411192,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [88] = */ {
		/* .tex0 = */ 2308084386579374456,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [89] = */ {
		/* .tex0 = */ 2308084936335188344,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [90] = */ {
		/* .tex0 = */ 2308085487231852936,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [91] = */ {
		/* .tex0 = */ 2308086036987666824,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 64,
		/* .h = */ 64,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [92] = */ {
		/* .tex0 = */ 2308086585602630088,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [93] = */ {
		/* .tex0 = */ 2308087135358443976,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [94] = */ {
		/* .tex0 = */ 2308087685114257880,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [95] = */ {
		/* .tex0 = */ 2308088234870071768,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [96] = */ {
		/* .tex0 = */ 2308088784625885672,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [97] = */ {
		/* .tex0 = */ 2308089334381699560,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 32,
		/* .h = */ 32,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	}
};

SPRT_DAT fntdat[6] = {
	/* [0] = */ {
		/* .tex0 = */ 2308060749504840800,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 70,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [1] = */ {
		/* .tex0 = */ 2308061025456490592,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [2] = */ {
		/* .tex0 = */ 2308061300334399584,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [3] = */ {
		/* .tex0 = */ 2308069546679992320,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [4] = */ {
		/* .tex0 = */ 2308069821557901312,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	},
	/* [5] = */ {
		/* .tex0 = */ 2308070096435810304,
		/* .u = */ 0,
		/* .v = */ 0,
		/* .w = */ 512,
		/* .h = */ 256,
		/* .x = */ 0,
		/* .y = */ 0,
		/* .pri = */ 0,
		/* .alpha = */ 128,
		/* .flip = */ 0,
		/* .bln = */ 0
	}
};

unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];

G2D_WRK g2d_wrk = {
	/* .init = */ 0,
	/* .flow = */ 0
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3aeaa8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_void__003f0a50,_max,v);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi(s_char__003f0a58,_max,v);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    _fixed_array_assert__FPCcUiUi("unsigned int*",_max,v);
  }
  return (uint **)0x0;
}

void InitGraph2dON() {
  return;
}

void InitGraph2dBoot() {
  g2d_wrk.flow = 0;
  InitPK2Dbuf__Fv();
  InitMessage__Fv();
  FadeCtrlInit__Fv();
  return;
}

void InitGraph2dEFrame() {
  InitMessageEF__Fv();
  InitHeatHaze__Fv();
  return;
}

void Graph2dMain() {
  if ((DebugCameraMenu.CameraDebugON == 0) && (DebugCameraMenu.FreeCameraON == 0)) {
    Draw__12CNPlyrCamera(&m_plyr_camera);
  }
  EffectControl__Fi(7);
  EffectControl__Fi(8);
  FadeMain__Fv();
  CallVibrate__Fv();
  return;
}
