// STATUS: NOT STARTED

#include "debug_menu.h"

static sceVu0IVECTOR s_ivBGColor = {
	/* [0] = */ 0,
	/* [1] = */ 0,
	/* [2] = */ 0,
	/* [3] = */ 0
};

DEBUG_MENU dbg_menu_main = {
	/* .parent = */ NULL,
	/* .off_num = */ NULL,
	/* .title = */ 0x3a3ad8,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ 0x3ef9f0,
			/* .attr = */ 4096,
			/* .child = */ &dbg_item_main,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [1] = */ {
			/* .name = */ 0x3ef9f8,
			/* .attr = */ 4096,
			/* .child = */ &dbg_room_main,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [2] = */ {
			/* .name = */ 0x3a3ae8,
			/* .attr = */ 8192,
			/* .child = */ &debug_var,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [3] = */ {
			/* .name = */ 0x3a3af8,
			/* .attr = */ 8192,
			/* .child = */ 0x2db2b4,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [4] = */ {
			/* .name = */ 0x3a3b08,
			/* .attr = */ 8192,
			/* .child = */ 0x2db2d8,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [5] = */ {
			/* .name = */ 0x3a3b18,
			/* .attr = */ 8192,
			/* .child = */ 0x2db2dc,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [6] = */ {
			/* .name = */ 0x3a3b28,
			/* .attr = */ 4096,
			/* .child = */ &dbg_mem_main,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ 0x3a3b38,
			/* .attr = */ 32768,
			/* .child = */ &dbg_stock_num,
			/* .nmin = */ 0.f,
			/* .nmax = */ 5.f,
			/* .nadd = */ 1.f
		},
		/* [8] = */ {
			/* .name = */ 0x3efa00,
			/* .attr = */ 8192,
			/* .child = */ 0x2db2e8,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [9] = */ {
			/* .name = */ 0x3efa08,
			/* .attr = */ 4096,
			/* .child = */ &dbg_disp_main,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ 0x3a3b48,
			/* .attr = */ 32768,
			/* .child = */ &opt_wrk,
			/* .nmin = */ 0.f,
			/* .nmax = */ 255.f,
			/* .nadd = */ 1.f
		},
		/* [11] = */ {
			/* .name = */ 0x3a3b58,
			/* .attr = */ 8192,
			/* .child = */ &dbg_random_ghost,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [12] = */ {
			/* .name = */ 0x3a3b68,
			/* .attr = */ 8192,
			/* .child = */ 0x2db348,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [13] = */ {
			/* .name = */ 0x3efa10,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_disp_main = {
	/* .parent = */ &dbg_menu_main,
	/* .off_num = */ NULL,
	/* .title = */ 0x3a3b78,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ 0x3a3b88,
			/* .attr = */ 8192,
			/* .child = */ &obj_draw_ctrl,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [1] = */ {
			/* .name = */ 0x3a3b98,
			/* .attr = */ 8192,
			/* .child = */ 0x339e8c,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [2] = */ {
			/* .name = */ 0x3a3ba8,
			/* .attr = */ 8192,
			/* .child = */ 0x339e98,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [3] = */ {
			/* .name = */ 0x3a3bb8,
			/* .attr = */ 8192,
			/* .child = */ 0x339e9c,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [4] = */ {
			/* .name = */ 0x3a3bc8,
			/* .attr = */ 8192,
			/* .child = */ 0x339ea0,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [5] = */ {
			/* .name = */ 0x3a3bd8,
			/* .attr = */ 8192,
			/* .child = */ 0x339ea4,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [6] = */ {
			/* .name = */ 0x3efa10,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_item_main = {
	/* .parent = */ &dbg_menu_main,
	/* .off_num = */ NULL,
	/* .title = */ 0x3a3be8,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ 0x3a3bf8,
			/* .attr = */ 4096,
			/* .child = */ &dbg_film_item,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [1] = */ {
			/* .name = */ 0x3a3c08,
			/* .attr = */ 4096,
			/* .child = */ &dbg_recovery_item,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [2] = */ {
			/* .name = */ 0x3a3c18,
			/* .attr = */ 4096,
			/* .child = */ &dbg_event_item,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [3] = */ {
			/* .name = */ 0x3a3c28,
			/* .attr = */ 4096,
			/* .child = */ &dbg_event_item2,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [4] = */ {
			/* .name = */ 0x3a3c38,
			/* .attr = */ 4096,
			/* .child = */ &dbg_event_item3,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [5] = */ {
			/* .name = */ 0x3a3c48,
			/* .attr = */ 4096,
			/* .child = */ &dbg_event_item4,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ 0x3efa10,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_film_item = {
	/* .parent = */ NULL,
	/* .off_num = */ NULL,
	/* .title = */ NULL,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [1] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [2] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [3] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [4] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [5] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_recovery_item = {
	/* .parent = */ NULL,
	/* .off_num = */ NULL,
	/* .title = */ NULL,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [1] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [2] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [3] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [4] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [5] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_event_item = {
	/* .parent = */ NULL,
	/* .off_num = */ NULL,
	/* .title = */ NULL,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [1] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [2] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [3] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [4] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [5] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_event_item2 = {
	/* .parent = */ NULL,
	/* .off_num = */ NULL,
	/* .title = */ NULL,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [1] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [2] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [3] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [4] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [5] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_event_item3 = {
	/* .parent = */ NULL,
	/* .off_num = */ NULL,
	/* .title = */ NULL,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [1] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [2] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [3] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [4] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [5] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_event_item4 = {
	/* .parent = */ NULL,
	/* .off_num = */ NULL,
	/* .title = */ NULL,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [1] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [2] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [3] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [4] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [5] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_mem_main = {
	/* .parent = */ &dbg_menu_main,
	/* .off_num = */ NULL,
	/* .title = */ 0x3a3c58,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ 0x3efa18,
			/* .attr = */ 8192,
			/* .child = */ &dbg_spu_mem_disp,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [1] = */ {
			/* .name = */ 0x3efa20,
			/* .attr = */ 8192,
			/* .child = */ &dbg_mdl_mem_disp,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [2] = */ {
			/* .name = */ 0x3efa28,
			/* .attr = */ 8192,
			/* .child = */ &dbg_cmn_mem_disp,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [3] = */ {
			/* .name = */ 0x3efa30,
			/* .attr = */ 8192,
			/* .child = */ &dbg_system_mem_disp,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [4] = */ {
			/* .name = */ 0x3efa38,
			/* .attr = */ 8192,
			/* .child = */ &dbg_iop_mem_disp,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [5] = */ {
			/* .name = */ 0x3efa10,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

DEBUG_MENU dbg_ene_main = {
	/* .parent = */ &dbg_menu_main,
	/* .off_num = */ NULL,
	/* .title = */ 0x3a3c68,
	/* .submenu = */ {
		/* [0] = */ {
			/* .name = */ 0x3efa40,
			/* .attr = */ 32768,
			/* .child = */ &dbg_ene_no,
			/* .nmin = */ 0.f,
			/* .nmax = */ 20.f,
			/* .nadd = */ 1.f
		},
		/* [1] = */ {
			/* .name = */ 0x3efa48,
			/* .attr = */ 8192,
			/* .child = */ &dbg_enemy_button,
			/* .nmin = */ 0.f,
			/* .nmax = */ 1.f,
			/* .nadd = */ 1.f
		},
		/* [2] = */ {
			/* .name = */ 0x3efa10,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [3] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [4] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [5] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [6] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [7] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [8] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [9] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [10] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [11] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [12] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [13] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [14] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [15] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [16] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [17] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [18] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		},
		/* [19] = */ {
			/* .name = */ NULL,
			/* .attr = */ 0,
			/* .child = */ NULL,
			/* .nmin = */ 0.f,
			/* .nmax = */ 0.f,
			/* .nadd = */ 0.f
		}
	},
	/* .mnum = */ 0,
	/* .kai = */ 0,
	/* .max = */ 0,
	/* .pos = */ 0
};

static DEBUG_MENU *now_tree = &dbg_menu_main;
unsigned char CVariable<char, 0, 9> type_info node[8];
unsigned char CVariable<char, 0, 3> type_info node[8];
unsigned char PLYR_ITEM type_info node[8];

DEBUG_VAR debug_var = {
	/* .hit_disp = */ 0,
	/* .ene_stop = */ 0,
	/* .fog_sw = */ 0,
	/* .near = */ 0,
	/* .far = */ 0,
	/* .min = */ 0,
	/* .max = */ 0,
	/* .fog_r = */ 0,
	/* .fog_g = */ 0,
	/* .fog_b = */ 0,
	/* .hi_spd = */ 0,
	/* .perf_count_sw = */ 0,
	/* .move_speed = */ 0,
	/* .cut_len = */ 0,
	/* .muteki = */ 0,
	/* .fl_sw = */ 0,
	/* .fl_intens = */ 0.f,
	/* .fl_range = */ 0.f,
	/* .fl_py = */ 0.f,
	/* .fl_pz = */ 0.f,
	/* .fl_y = */ 0.f,
	/* .fl_z = */ 0.f,
	/* .fl_line = */ 0,
	/* .flrf_y = */ 0.f,
	/* .flrf_z = */ 0.f,
	/* .flrf_range = */ 0.f,
	/* .flrf_si_rate = */ 0.f,
	/* .pl_amb = */ 0.f,
	/* .sis_para_r = */ 0.f,
	/* .sis_para_g = */ 0.f,
	/* .sis_para_b = */ 0.f,
	/* .fStaticDirLightColStepR = */ 0.f,
	/* .fStaticDirLightColStepG = */ 0.f,
	/* .fStaticDirLightColStepB = */ 0.f,
	/* .fYFlashlightStep = */ 0.f,
	/* .fRangeFlashlightStep = */ 0.f,
	/* .fl2_range = */ 0.f,
	/* .shadow_model_disp = */ 0,
	/* .sis_tr_point = */ 0,
	/* .dummy = */ {
		/* [0] = */ 0.f,
		/* [1] = */ 0.f,
		/* [2] = */ 0.f,
		/* [3] = */ 0.f
	}
};

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a3a80;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_ITEM(0x3ef9b8,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_ITEM(0x3ef9c0,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf9PLYR_ITEM(0x3a3ac8,_max);
  }
  return (uint **)0x0;
}

void DebugInit() {
  memset(&debug_var,0,0xac);
  debug_var.fog_sw = 0;
  debug_var.pl_amb = 0.5;
  debug_var.sis_para_b = DAT_003ed92c;
  debug_var.fStaticDirLightColStepR = DAT_003ed934;
  debug_var.fStaticDirLightColStepB = DAT_003ed930;
  debug_var.fYFlashlightStep = -270.0;
  debug_var.fRangeFlashlightStep = DAT_003ed938;
  debug_var.fl2_range = 1000.0;
  debug_var.shadow_model_disp = 0;
  debug_var.sis_para_r = DAT_003ed92c;
  debug_var.sis_para_g = DAT_003ed92c;
  debug_var.fStaticDirLightColStepG = DAT_003ed930;
  return;
}

int getFStrLength(float f) {
	char cwo[256];
	
  size_t sVar1;
  char cwo [256];
  
  sprintf(cwo,s___02f_003efa58);
  sVar1 = strlen(cwo);
  return (int)sVar1;
}

DEBUG_MENU* GetNowMenu() {
  return now_tree;
}

void DrawDbgMenuSub(DEBUG_MENU *wlp, int fl) {
	u_char rgb1;
	u_char rgb2;
	int i;
	int bx;
	int by;
	int sw;
	int sh;
	int pri;
	SQAR_DAT sq;
	DISP_SQAR dq;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	int i;
	
  undefined *puVar1;
  uint uVar2;
  ulong *puVar3;
  uchar *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uchar uVar10;
  int iVar11;
  DEBUG_SUB_MENU *pDVar12;
  int iVar13;
  int iVar14;
  uchar r;
  int iVar15;
  int iVar16;
  float y;
  SQAR_DAT sq;
  DISP_SQAR dq;
  DEBUG_MENU *local_80;
  uchar rgb1;
  uint local_78;
  int local_74;
  int local_70;
  int local_68;
  int local_64;
  
  iVar11 = wlp->kai;
  iVar13 = wlp->max;
  iVar9 = wlp->mnum;
  puVar1 = (undefined *)((int)&sq.h + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  local_80 = wlp;
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003a3c78 >> (7 - uVar2) * 8;
  sq._0_8_ = DAT_003a3c78;
  puVar1 = (undefined *)((int)&sq.y + 3);
  uVar2 = (uint)puVar1 & 7;
  puVar3 = (ulong *)(puVar1 + -uVar2);
  *puVar3 = *puVar3 & -1L << (uVar2 + 1) * 8 | DAT_003a3c80 >> (7 - uVar2) * 8;
  sq._8_8_ = DAT_003a3c80;
  uVar2 = (uint)&sq.alpha & 7;
  puVar4 = &sq.alpha + -uVar2;
  *(ulong *)puVar4 = *(ulong *)puVar4 & -1L << (uVar2 + 1) * 8 | DAT_003a3c88 >> (7 - uVar2) * 8;
  sq._16_8_ = DAT_003a3c88;
  iVar5 = iVar11 * 0x20;
  iVar14 = iVar11 * 0x18;
  iVar16 = iVar14 + 0x14;
  iVar15 = iVar5 + 0x18;
  if (iVar11 < 0x10) {
    local_78 = 0xf - iVar11;
  }
  else {
    local_78 = 0;
  }
  if (fl == 0) {
    r = '@';
    _rgb1 = 0x20;
  }
  else {
    r = 0x80;
    _rgb1 = 0x40;
  }
  local_78 = local_78 & 0xf;
  CopySqrDToSqr__FP9DISP_SQARP8SQAR_DAT(&dq,&sq);
  local_74 = iVar16 + iVar13 * 0xc + 0xc;
  dq.pri = local_78 * 0x10;
  iVar13 = iVar15 + iVar9 * 0xe + 4;
  dq.x[1] = local_74 + 0xe;
  dq.z = local_78 * -0x10 + 0xfffff;
  dq.y[2] = iVar13 + 0x23;
  dq.alpha = 0x80;
  dq.zbuf = 0xa000118;
  dq.test = 0x5000d;
  puVar4 = dq.r;
  iVar11 = 0;
  do {
    iVar9 = iVar11 + 1;
    *puVar4 = '\0';
    dq.g[iVar11] = '\0';
    puVar4 = puVar4 + 1;
    dq.b[iVar11] = '\0';
    iVar11 = iVar9;
  } while (iVar9 < 4);
  dq.x[0] = iVar16;
  dq.x[2] = iVar16;
  dq.x[3] = dq.x[1];
  dq.y[0] = iVar15;
  dq.y[1] = iVar15;
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.x[0] = iVar14 + 0x15;
  dq.y[0] = iVar5 + 0x19;
  dq.x[1] = local_74 + 0xd;
  dq.y[2] = iVar13 + 0x21;
  dq.zbuf = 0x10a000118;
  puVar4 = dq.r;
  iVar11 = 0;
  do {
    iVar9 = iVar11 + 1;
    uVar10 = (uchar)_rgb1;
    *puVar4 = uVar10;
    puVar4 = puVar4 + 1;
    dq.g[iVar11] = uVar10;
    dq.b[iVar11] = uVar10;
    iVar11 = iVar9;
  } while (iVar9 < 4);
  iVar9 = iVar14 + 0x17;
  dq.x[2] = dq.x[0];
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.y[0] = iVar5 + 0x1b;
  dq.x[1] = local_74 + 0xb;
  dq.y[2] = iVar13 + 0x1f;
  puVar4 = dq.r;
  iVar11 = 0;
  do {
    iVar6 = iVar11 + 1;
    *puVar4 = r;
    dq.g[iVar11] = r;
    puVar4 = puVar4 + 1;
    dq.b[iVar11] = r;
    iVar11 = iVar6;
  } while (iVar6 < 4);
  iVar6 = iVar14 + 0x19;
  dq.x[0] = iVar9;
  dq.x[2] = iVar9;
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.y[0] = iVar5 + 0x1d;
  dq.y[2] = iVar13 + 0x1d;
  dq.x[1] = local_74 + 9;
  puVar4 = dq.r;
  iVar11 = 0;
  do {
    iVar7 = iVar11 + 1;
    uVar10 = (uchar)_rgb1;
    *puVar4 = uVar10;
    puVar4 = puVar4 + 1;
    dq.g[iVar11] = uVar10;
    dq.b[iVar11] = uVar10;
    iVar11 = iVar7;
  } while (iVar7 < 4);
  iVar7 = iVar14 + 0x1b;
  dq.x[0] = iVar6;
  dq.x[2] = iVar6;
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.y[0] = iVar5 + 0x1f;
  dq.x[1] = local_74 + 7;
  dq.y[2] = iVar13 + 0x1b;
  puVar4 = dq.r;
  iVar11 = 0;
  local_70 = iVar7;
  do {
    iVar8 = iVar11 + 1;
    *puVar4 = '\0';
    dq.g[iVar11] = '\0';
    puVar4 = puVar4 + 1;
    dq.b[iVar11] = '\0';
    iVar11 = iVar8;
  } while (iVar8 < 4);
  dq.x[0] = iVar7;
  dq.x[2] = iVar7;
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.y[0] = iVar5 + 0x30;
  dq.x[1] = local_74 + 9;
  dq.y[2] = iVar5 + 0x35;
  puVar4 = dq.r;
  iVar11 = 0;
  do {
    iVar7 = iVar11 + 1;
    uVar10 = (uchar)_rgb1;
    *puVar4 = uVar10;
    puVar4 = puVar4 + 1;
    dq.g[iVar11] = uVar10;
    dq.b[iVar11] = uVar10;
    iVar11 = iVar7;
  } while (iVar7 < 4);
  dq.x[0] = iVar6;
  dq.x[2] = iVar6;
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.y[0] = iVar5 + 0x32;
  dq.x[1] = local_74 + 0xb;
  dq.y[2] = iVar5 + 0x33;
  puVar4 = dq.r;
  iVar11 = 0;
  do {
    iVar6 = iVar11 + 1;
    *puVar4 = r;
    dq.g[iVar11] = r;
    puVar4 = puVar4 + 1;
    dq.b[iVar11] = r;
    iVar11 = iVar6;
  } while (iVar6 < 4);
  dq.x[0] = iVar9;
  dq.x[2] = iVar9;
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  puVar4 = dq.r;
  iVar11 = 0;
  do {
    iVar9 = iVar11 + 1;
    *puVar4 = '\0';
    dq.g[iVar11] = '\0';
    puVar4 = puVar4 + 1;
    dq.b[iVar11] = '\0';
    iVar11 = iVar9;
  } while (iVar9 < 4);
  iVar11 = iVar14 + 0x18;
  iVar9 = iVar5 + 0x1c;
  iVar6 = local_74 + 10;
  iVar7 = local_74 + 0xe;
  iVar8 = iVar13 + 0x23;
  iVar13 = iVar13 + 0x1f;
  dq.x[0] = iVar16;
  dq.x[1] = iVar11;
  dq.x[2] = iVar16;
  dq.x[3] = iVar11;
  dq.y[0] = iVar15;
  dq.y[1] = iVar15;
  dq.y[2] = iVar9;
  dq.y[3] = iVar9;
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.x[0] = iVar16;
  dq.x[1] = iVar11;
  dq.x[2] = iVar16;
  dq.x[3] = iVar11;
  dq.y[0] = iVar13;
  dq.y[1] = iVar13;
  dq.y[2] = iVar8;
  dq.y[3] = iVar8;
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.x[0] = iVar6;
  dq.x[1] = iVar7;
  dq.x[2] = iVar6;
  dq.x[3] = iVar7;
  dq.y[0] = iVar15;
  dq.y[1] = iVar15;
  dq.y[2] = iVar9;
  dq.y[3] = iVar9;
  DispSqrD__FP9DISP_SQAR(&dq);
  dq.x[0] = iVar6;
  dq.x[1] = iVar7;
  dq.x[2] = iVar6;
  dq.x[3] = iVar7;
  dq.y[0] = iVar13;
  dq.y[1] = iVar13;
  dq.y[2] = iVar8;
  dq.y[3] = iVar8;
  DispSqrD__FP9DISP_SQAR(&dq);
  puVar4 = dq.r;
  iVar11 = 0;
  do {
    iVar13 = iVar11 + 1;
    *puVar4 = '\0';
    puVar4 = puVar4 + 1;
    dq.g[iVar11] = '\0';
    dq.b[iVar11] = (uchar)_rgb1;
    iVar11 = iVar13;
  } while (iVar13 < 4);
  iVar14 = iVar14 + 0x21;
  dq.x[1] = local_74 + 7;
  dq.x[2] = local_70;
  dq.x[0] = local_70;
  iVar11 = iVar15 + local_80->pos * 0xe;
  dq.y[0] = iVar11 + 0x1d;
  dq.y[2] = iVar11 + 0x2d;
  iVar11 = local_78 << 4;
  dq.x[3] = dq.x[1];
  dq.y[1] = dq.y[0];
  dq.y[3] = dq.y[2];
  DispSqrD__FP9DISP_SQAR(&dq);
  SetASCIIString2__FiffiUcUcUcPc(iVar11,(float)iVar14,(float)(iVar5 + 0x22),0,r,r,r,local_80->title)
  ;
  iVar13 = local_80->mnum + -1;
  if (-1 < iVar13) {
    iVar5 = iVar13 * 0xe + iVar15 + 0x21;
    pDVar12 = local_80->submenu + local_80->mnum + -1;
    iVar9 = iVar5;
    local_68 = iVar5;
    local_64 = iVar5;
    do {
      uVar2 = pDVar12->attr;
      if ((uVar2 & 0x8000) == 0) {
        if ((uVar2 & 0x2000) == 0) {
          if ((uVar2 & 0x1000) == 0) {
            SetASCIIString2__FiffiUcUcUcPc
                      (local_78 << 4,(float)iVar14,(float)local_68,0,r,r,r,pDVar12->name);
          }
          else {
            SetString2__FiffiUcUcUcPCce(iVar11,(float)iVar14,(float)iVar5,0,r,r,r,&DAT_003efa60);
            SetString2__FiffiUcUcUcPCce
                      (iVar11,(float)(iVar16 + local_80->max * 0xc + 1),(float)iVar5,0,r,r,r,
                       &DAT_003efa88);
          }
        }
        else {
          SetString2__FiffiUcUcUcPCce
                    (local_78 << 4,(float)iVar14,(float)iVar9,0,r,r,r,&DAT_003efa60);
          SetString2__FiffiUcUcUcPCce
                    (local_78 << 4,(float)(iVar16 + local_80->max * 0xc + -0x23),(float)iVar9,0,r,r,
                     r,&DAT_003efa60);
        }
      }
      else {
        y = (float)local_64;
        iVar15 = local_78 << 4;
        SetString2__FiffiUcUcUcPCce(iVar15,(float)iVar14,y,0,r,r,r,&DAT_003efa60);
        if ((pDVar12->attr & 0x20000) == 0) {
          SetString2__FiffiUcUcUcPCce
                    (iVar15,(float)(iVar16 + local_80->max * 0xc + -0x3b),y,0,r,r,r,&DAT_003efa70);
        }
        else {
                    /* WARNING: Load size is inaccurate */
          iVar6 = getFStrLength__Ff(*pDVar12->child);
          SetString2__FiffiUcUcUcPCce
                    (iVar15,(float)(iVar16 + (local_80->max - iVar6) * 0xc + 1),y,0,r,r,r,
                     &DAT_003efa68);
        }
      }
      iVar13 = iVar13 + -1;
      iVar5 = iVar5 + -0xe;
      local_68 = local_68 + -0xe;
      iVar9 = iVar9 + -0xe;
      local_64 = local_64 + -0xe;
      pDVar12 = pDVar12 + -1;
    } while (-1 < iVar13);
  }
  if ((DEBUG_MENU *)local_80->parent != (DEBUG_MENU *)0x0) {
    DrawDbgMenuSub__FP10DEBUG_MENUi((DEBUG_MENU *)local_80->parent,0);
  }
  return;
}

int DrawDbgMenu() {
	int i;
	int l;
	int ok;
	float add;
	DEBUG_MENU *nlp;
	DEBUG_SUB_MENU *dbgsp;
	void* (*func)(/* parameters unknown */);
	
  short sVar1;
  DEBUG_MENU *pDVar2;
  bool bVar3;
  DEBUG_MENU *wlp;
  short *psVar4;
  float *pfVar5;
  uint uVar6;
  int iVar7;
  size_t sVar8;
  size_t sVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  short **ppsVar14;
  DEBUG_SUB_MENU *pDVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float fVar19;
  
  wlp = now_tree;
  if (now_tree->off_num == (int *)0x0) {
    piVar11 = (int *)now_tree->parent;
  }
  else {
    now_tree->pos = *now_tree->off_num;
    piVar11 = (int *)wlp->parent;
  }
  wlp->kai = 0;
  if (piVar11 != (int *)0x0) {
    iVar12 = 0;
    do {
      piVar11 = (int *)*piVar11;
      iVar12 = iVar12 + 1;
    } while (piVar11 != (int *)0x0);
    wlp->kai = iVar12;
  }
  wlp->mnum = 0;
  while( true ) {
    iVar12 = strcmp(wlp->submenu[wlp->mnum].name,s__end__003efa10);
    if (iVar12 == 0) break;
    wlp->mnum = wlp->mnum + 1;
  }
  iVar12 = 0;
  wlp->max = 0;
  if (0 < wlp->mnum) {
    pDVar15 = wlp->submenu;
    do {
      sVar8 = strlen(pDVar15->name);
      uVar13 = pDVar15->attr;
      if ((uVar13 & 0x1000) != 0) {
        sVar8 = (long)((int)sVar8 + 5);
      }
      if ((uVar13 & 0x8000) != 0) {
        if ((uVar13 & 0x20000) == 0) {
          sVar8 = (size_t)((int)sVar8 + 9);
                    /* WARNING: Load size is inaccurate */
          iVar7 = *pDVar15->child;
          if (iVar7 < (int)pDVar15->nmin) {
            iVar7 = (int)pDVar15->nmin;
          }
          iVar18 = (int)pDVar15->nmax;
          if (iVar7 <= (int)pDVar15->nmax) {
            iVar18 = iVar7;
          }
          *(int *)pDVar15->child = iVar18;
          uVar13 = pDVar15->attr;
        }
        else {
                    /* WARNING: Load size is inaccurate */
          iVar7 = getFStrLength__Ff(*pDVar15->child);
          pfVar5 = (float *)pDVar15->child;
          fVar19 = *pfVar5;
          sVar8 = (size_t)((int)sVar8 + iVar7 + 4);
          if (fVar19 < pDVar15->nmin) {
            fVar19 = pDVar15->nmin;
          }
          *pfVar5 = fVar19;
          fVar16 = pDVar15->nmax;
          if (fVar19 <= pDVar15->nmax) {
            fVar16 = fVar19;
          }
          *pfVar5 = fVar16;
          uVar13 = pDVar15->attr;
        }
      }
      if ((uVar13 & 0x2000) == 0) {
        iVar7 = wlp->max;
      }
      else {
        sVar8 = (size_t)((int)sVar8 + 7);
                    /* WARNING: Load size is inaccurate */
        iVar7 = *pDVar15->child;
        if ((int)pDVar15->nmax < iVar7) {
          iVar7 = (int)pDVar15->nmax;
        }
        *(int *)pDVar15->child = iVar7;
        iVar7 = wlp->max;
      }
      iVar12 = iVar12 + 1;
      pDVar15 = pDVar15 + 1;
      sVar9 = (long)iVar7;
      if ((long)iVar7 < (long)sVar8) {
        sVar9 = sVar8;
      }
      wlp->max = (int)sVar9;
    } while (iVar12 < wlp->mnum);
  }
  sVar8 = strlen(wlp->title);
  ppsVar14 = paddat;
  iVar12 = wlp->max;
  psVar4 = paddat[8];
  if ((long)iVar12 < (long)sVar8) {
    iVar12 = (int)sVar8;
  }
  wlp->max = iVar12;
  if (*psVar4 == 1) {
    iVar12 = wlp->pos + 1;
    if (wlp->mnum + -1 <= wlp->pos) {
      iVar12 = 0;
    }
    wlp->pos = iVar12;
    if (wlp->off_num != (int *)0x0) {
      *wlp->off_num = iVar12;
      ppsVar14 = paddat;
    }
    psVar4 = ppsVar14[9];
  }
  else {
    psVar4 = ppsVar14[9];
  }
  iVar12 = wlp->pos;
  if (*psVar4 == 1) {
    if (iVar12 < 1) {
      iVar12 = wlp->mnum;
    }
    wlp->pos = iVar12 + -1;
    if (wlp->off_num != (int *)0x0) {
      *wlp->off_num = iVar12 + -1;
    }
    iVar12 = wlp->pos;
    ppsVar14 = paddat;
  }
  sVar1 = *ppsVar14[10];
  if (sVar1 == 0) {
    uVar13 = wlp->submenu[iVar12].attr;
LAB_00134068:
    psVar4 = ppsVar14[0xb];
  }
  else {
    if ((*key_now[9] != 0) && (sVar1 != 1)) {
      uVar13 = wlp->submenu[iVar12].attr;
      goto LAB_00134068;
    }
    fVar19 = wlp->submenu[iVar12].nadd;
    if (*key_now[10] != 0) {
      fVar19 = fVar19 * 3.0;
    }
    uVar13 = wlp->submenu[iVar12].attr;
    if ((uVar13 & 0x10000) == 0) {
      bVar3 = (uVar13 & 0xa000) != 0;
    }
    else {
      bVar3 = sVar1 == 1;
    }
    if (!bVar3) goto LAB_00134068;
    if (*key_now[11] == 0) {
      if ((uVar13 & 0x2000) == 0) {
        if ((uVar13 & 0x80000) == 0) {
          if ((uVar13 & 0x20000) != 0) {
            pfVar5 = (float *)wlp->submenu[iVar12].child;
            fVar17 = wlp->submenu[iVar12].nmax;
            fVar16 = *pfVar5 + fVar19;
            if (fVar17 <= *pfVar5 + fVar19) {
              fVar16 = fVar17;
            }
            goto LAB_00134018;
          }
          piVar11 = (int *)wlp->submenu[iVar12].child;
          iVar7 = (int)wlp->submenu[iVar12].nmax;
          iVar18 = *piVar11 + (int)fVar19;
          if (iVar18 < iVar7) {
            iVar7 = iVar18;
          }
          *piVar11 = iVar7;
        }
        else {
          if ((uVar13 & 0x20000) != 0) {
            pfVar5 = (float *)wlp->submenu[iVar12].child;
            if (*pfVar5 + fVar19 < wlp->submenu[iVar12].nmax) {
              *pfVar5 = *pfVar5 + fVar19;
              ppsVar14 = paddat;
              goto LAB_00134068;
            }
            fVar16 = wlp->submenu[iVar12].nmin;
LAB_00134018:
            *pfVar5 = fVar16;
            ppsVar14 = paddat;
            goto LAB_00134068;
          }
          piVar11 = (int *)wlp->submenu[iVar12].child;
          if (*piVar11 + (int)fVar19 < (int)wlp->submenu[iVar12].nmax) {
            *piVar11 = *piVar11 + (int)fVar19;
          }
          else {
            *piVar11 = (int)wlp->submenu[iVar12].nmin;
          }
        }
LAB_00134050:
        uVar13 = wlp->submenu[iVar12].attr;
        ppsVar14 = paddat;
        goto LAB_00134068;
      }
      if (*ppsVar14[10] == 1) {
        if ((uVar13 & 0x20000) == 0) {
          piVar11 = (int *)wlp->submenu[iVar12].child;
          iVar7 = *piVar11 + (int)fVar19;
          if ((int)wlp->submenu[iVar12].nmax < iVar7) {
            iVar7 = 0;
          }
          *piVar11 = iVar7;
          goto LAB_00134050;
        }
        pfVar5 = (float *)wlp->submenu[iVar12].child;
        if (wlp->submenu[iVar12].nmax < *pfVar5 + fVar19) {
          *pfVar5 = 0.0;
          ppsVar14 = paddat;
        }
        else {
          *pfVar5 = *pfVar5 + fVar19;
          ppsVar14 = paddat;
        }
        goto LAB_00134068;
      }
      psVar4 = ppsVar14[0xb];
    }
    else {
      psVar4 = ppsVar14[0xb];
    }
  }
  sVar1 = *psVar4;
  if (sVar1 == 0) {
LAB_0013423c:
    uVar6 = uVar13 & 0x8000;
  }
  else if ((*key_now[9] == 0) || (uVar6 = uVar13 & 0x8000, sVar1 == 1)) {
    fVar19 = wlp->submenu[iVar12].nadd;
    if (*key_now[10] != 0) {
      fVar19 = fVar19 * 3.0;
    }
    if ((uVar13 & 0x10000) == 0) {
      bVar3 = (uVar13 & 0xa000) != 0;
    }
    else {
      bVar3 = sVar1 == 1 || *ppsVar14[10] == 1;
    }
    if (bVar3) {
      uVar6 = uVar13 & 0x8000;
      if (*key_now[11] != 0) goto LAB_00134240;
      if ((uVar13 & 0x2000) == 0) {
        if ((uVar13 & 0x80000) == 0) {
          if ((uVar13 & 0x20000) != 0) {
            pfVar5 = (float *)wlp->submenu[iVar12].child;
            fVar17 = wlp->submenu[iVar12].nmin;
            fVar16 = *pfVar5 - fVar19;
            if (*pfVar5 - fVar19 < fVar17) {
              fVar16 = fVar17;
            }
LAB_00134208:
            *pfVar5 = fVar16;
            goto LAB_0013423c;
          }
          piVar11 = (int *)wlp->submenu[iVar12].child;
          iVar18 = (int)wlp->submenu[iVar12].nmin;
          iVar7 = *piVar11 - (int)fVar19;
          if (iVar7 < iVar18) {
            iVar7 = iVar18;
          }
          *piVar11 = iVar7;
        }
        else {
          if ((uVar13 & 0x20000) != 0) {
            pfVar5 = (float *)wlp->submenu[iVar12].child;
            fVar16 = wlp->submenu[iVar12].nmin;
            goto LAB_0013412c;
          }
          piVar11 = (int *)wlp->submenu[iVar12].child;
          if (*piVar11 - (int)fVar19 < (int)wlp->submenu[iVar12].nmin) {
            *piVar11 = (int)wlp->submenu[iVar12].nmax;
          }
          else {
            *piVar11 = *piVar11 - (int)fVar19;
          }
        }
      }
      else {
        uVar6 = uVar13 & 0x8000;
        if (*ppsVar14[0xb] != 1) goto LAB_00134240;
        if ((uVar13 & 0x20000) != 0) {
          pfVar5 = (float *)wlp->submenu[iVar12].child;
          fVar16 = 0.0;
LAB_0013412c:
          if (*pfVar5 - fVar19 < fVar16) {
            fVar16 = wlp->submenu[iVar12].nmax;
            goto LAB_00134208;
          }
          *pfVar5 = *pfVar5 - fVar19;
          goto LAB_0013423c;
        }
        piVar11 = (int *)wlp->submenu[iVar12].child;
        if (*piVar11 - (int)fVar19 < 0) {
          *piVar11 = (int)wlp->submenu[iVar12].nmax;
        }
        else {
          *piVar11 = *piVar11 - (int)fVar19;
        }
      }
      uVar13 = wlp->submenu[iVar12].attr;
    }
    goto LAB_0013423c;
  }
LAB_00134240:
  if (((uVar6 != 0) && (*key_now[11] != 0)) && (*key_now[9] != 0)) {
    *(undefined4 *)wlp->submenu[iVar12].child = 0;
  }
  if (**paddat != 1) goto LAB_001342fc;
  uVar13 = wlp->submenu[iVar12].attr;
  if ((uVar13 & 0xe000) == 0) {
    pDVar2 = (DEBUG_MENU *)wlp->submenu[iVar12].child;
    if (((uVar13 & 0x40000) != 0) &&
       (lVar10 = (*(code *)pDVar2)(wlp->submenu[iVar12].name), pDVar2 = wlp, lVar10 != 0)) {
      pDVar2 = (DEBUG_MENU *)lVar10;
    }
LAB_001342dc:
    now_tree = pDVar2;
    iVar7 = wlp->kai;
  }
  else {
    pDVar2 = (DEBUG_MENU *)wlp->parent;
    if ((DEBUG_MENU *)wlp->parent != (DEBUG_MENU *)0x0) goto LAB_001342dc;
    iVar7 = wlp->kai;
  }
  if (iVar7 == 0) {
    strcmp(wlp->submenu[iVar12].name,&DAT_003efa90);
  }
LAB_001342fc:
  DrawDbgMenuSub__FP10DEBUG_MENUi(wlp,1);
  if ((*paddat[1] == 1) && ((DEBUG_MENU *)wlp->parent != (DEBUG_MENU *)0x0)) {
    now_tree = (DEBUG_MENU *)wlp->parent;
  }
  gdb._498_1_ = (undefined)s_ivBGColor[2];
  gdb._496_1_ = (undefined)s_ivBGColor[0];
  gdb._497_1_ = (undefined)s_ivBGColor[1];
  gdb._256_1_ = (undefined)s_ivBGColor[0];
  gdb._257_1_ = (undefined)s_ivBGColor[1];
  gdb._258_1_ = (undefined)s_ivBGColor[2];
  return (int)(*key_now[13] == 1);
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  float fVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  ulong *puVar14;
  ulong *puVar15;
  DEBUG_MENU *pDVar16;
  DEBUG_MENU *pDVar17;
  undefined4 uVar18;
  DEBUG_MENU *local_c40;
  undefined4 uStack_c3c;
  char *local_c38;
  char *pcStack_c34;
  undefined4 local_c30;
  undefined4 uStack_c2c;
  undefined4 uStack_c24;
  undefined4 local_c20;
  char *local_c1c;
  undefined4 local_c18;
  undefined4 local_c14;
  undefined4 local_c0c;
  undefined4 local_c08;
  char *local_c04;
  undefined4 local_c00;
  undefined4 local_bfc;
  undefined4 local_bf4;
  undefined4 local_bf0;
  char *local_bec;
  undefined4 local_be8;
  undefined4 local_be4;
  undefined4 local_bdc;
  undefined4 local_bd8;
  char *local_bd4;
  undefined4 local_bd0;
  undefined4 local_bcc;
  undefined4 local_bc4;
  undefined4 local_bc0;
  char *local_bbc;
  ulong uStack_a60;
  undefined4 local_a54;
  undefined4 local_a50;
  undefined4 local_a4c;
  undefined4 local_a48;
  DEBUG_MENU *local_a40;
  undefined4 uStack_a3c;
  char *local_a38;
  char *pcStack_a34;
  undefined4 local_a30;
  undefined4 uStack_a2c;
  undefined4 uStack_a24;
  undefined4 local_a20;
  char *local_a1c;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined4 local_a0c;
  undefined4 local_a08;
  char *local_a04;
  undefined4 local_a00;
  undefined4 local_9fc;
  undefined4 local_9f4;
  undefined4 local_9f0;
  char *local_9ec;
  undefined4 local_9e8;
  undefined4 local_9e4;
  undefined4 local_9dc;
  undefined4 local_9d8;
  char *local_9d4;
  ulong uStack_860;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  DEBUG_MENU *local_840;
  undefined4 uStack_83c;
  char *local_838;
  char *pcStack_834;
  undefined4 local_830;
  undefined4 uStack_82c;
  undefined4 uStack_824;
  undefined4 local_820;
  char *local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_80c;
  undefined4 local_808;
  char *local_804;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined4 local_7f4;
  undefined4 local_7f0;
  char *local_7ec;
  undefined4 local_7e8;
  undefined4 local_7e4;
  undefined4 local_7dc;
  undefined4 local_7d8;
  char *local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c4;
  undefined4 local_7c0;
  char *local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7ac;
  undefined4 local_7a8;
  char *local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_794;
  undefined4 local_790;
  char *local_78c;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_77c;
  undefined4 local_778;
  char *local_774;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_764;
  undefined4 local_760;
  char *local_75c;
  undefined4 local_758;
  undefined4 local_754;
  undefined4 local_74c;
  undefined4 local_748;
  char *local_744;
  undefined4 local_740;
  undefined4 local_73c;
  undefined4 local_734;
  undefined4 local_730;
  char *local_72c;
  undefined4 local_728;
  undefined4 local_724;
  undefined4 local_71c;
  undefined4 local_718;
  char *local_714;
  undefined4 local_710;
  undefined4 local_70c;
  undefined4 local_704;
  undefined4 local_700;
  char *local_6fc;
  undefined4 local_6f8;
  undefined4 local_6f4;
  undefined4 local_6ec;
  undefined4 local_6e8;
  char *local_6e4;
  ulong uStack_660;
  undefined4 local_654;
  undefined4 local_650;
  undefined4 local_64c;
  undefined4 local_648;
  DEBUG_MENU *local_640;
  undefined4 uStack_63c;
  char *local_638;
  char *pcStack_634;
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_624;
  undefined4 local_620;
  char *local_61c;
  undefined4 local_618;
  undefined4 local_614;
  undefined4 local_60c;
  undefined4 local_608;
  char *local_604;
  undefined4 local_600;
  undefined4 local_5fc;
  undefined4 local_5f4;
  undefined4 local_5f0;
  char *local_5ec;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5dc;
  undefined4 local_5d8;
  char *local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c4;
  undefined4 local_5c0;
  char *local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5ac;
  undefined4 local_5a8;
  char *local_5a4;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_594;
  undefined4 local_590;
  char *local_58c;
  undefined4 local_588;
  undefined4 local_584;
  undefined4 local_57c;
  undefined4 local_578;
  undefined *local_574;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_564;
  undefined4 local_560;
  char *local_55c;
  undefined4 local_558;
  undefined4 local_554;
  undefined4 local_54c;
  undefined4 local_548;
  char *local_544;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_534;
  undefined4 local_530;
  char *local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_51c;
  undefined4 local_518;
  char *local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_504;
  undefined4 local_500;
  char *local_4fc;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4ec;
  undefined4 local_4e8;
  char *local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d4;
  undefined4 local_4d0;
  char *local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined *local_4b4;
  undefined4 local_4b0;
  undefined4 local_4ac;
  undefined4 local_4a4;
  undefined4 local_4a0;
  char *local_49c;
  ulong uStack_460;
  undefined4 local_454;
  undefined4 local_450;
  undefined4 local_44c;
  undefined4 local_448;
  DEBUG_MENU *local_440;
  undefined4 uStack_43c;
  char *local_438;
  char *pcStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_424;
  undefined4 local_420;
  char *local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_40c;
  undefined4 local_408;
  char *local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f4;
  undefined4 local_3f0;
  char *local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3dc;
  undefined4 local_3d8;
  char *local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c4;
  undefined4 local_3c0;
  char *local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3ac;
  undefined4 local_3a8;
  char *local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_394;
  undefined4 local_390;
  char *local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_37c;
  undefined4 local_378;
  char *local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_364;
  undefined4 local_360;
  char *local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_34c;
  undefined4 local_348;
  char *local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_334;
  undefined4 local_330;
  char *local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_31c;
  undefined4 local_318;
  char *local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_304;
  undefined4 local_300;
  char *local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2ec;
  undefined4 local_2e8;
  char *local_2e4;
  ulong uStack_260;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  DEBUG_MENU *local_240;
  undefined4 uStack_23c;
  char *local_238;
  char *pcStack_234;
  undefined4 local_230;
  ulong auStack_60 [4];
  
  if (__priority == 0xffff) {
    if (__initialize_p == 1) {
      local_c38 = "FILM ITEM";
      local_c40 = &dbg_item_main;
      uStack_c3c = 0;
      memset(&pcStack_c34,0,0x1e0);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      pcStack_c34 = "CAM_FILM_07";
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_c30 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0,0x3a);
      uVar18 = 0x3f800000;
      uStack_c2c = 0x318764;
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_c1c = "CAM_FILM_14";
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      uStack_c24 = 0x42c60000;
      local_c20 = 0x3f800000;
      local_c18 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(1,0x3a);
      local_c04 = "CAM_FILM_61";
      local_c14 = 0x31876c;
      local_c0c = 0x42c60000;
      local_c00 = 0x8000;
      local_c08 = uVar18;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(2,0x3a);
      local_bec = "CAM_FILM_90";
      local_bfc = 0x318774;
      local_bf4 = 0x42c60000;
      local_be8 = 0x8000;
      local_bf0 = uVar18;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(3,0x3a);
      local_bd4 = "CAM_FILM_00";
      local_be4 = 0x31877c;
      local_bd0 = 0x8000;
      local_bdc = 0x42c60000;
      local_bd8 = uVar18;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(4);
      local_bcc = 0x318784;
      local_bc4 = 0x42c60000;
      local_bbc = s__end__003efa10;
      local_a54 = 0;
      local_a50 = 0;
      local_a4c = 0;
      local_a48 = 0;
      pDVar17 = &dbg_film_item;
      puVar14 = (ulong *)&local_c40;
      do {
        puVar15 = puVar14;
        pDVar16 = pDVar17;
        uVar7 = *(undefined4 *)((int)puVar15 + 4);
        uVar8 = *(undefined4 *)(puVar15 + 1);
        uVar9 = *(undefined4 *)((int)(puVar15 + 1) + 4);
        uVar10 = *(undefined4 *)(puVar15 + 2);
        uVar11 = *(undefined4 *)((int)(puVar15 + 2) + 4);
        uVar12 = *(undefined4 *)(puVar15 + 3);
        uVar13 = *(undefined4 *)((int)(puVar15 + 3) + 4);
        pDVar16->parent = (void *)*(undefined4 *)puVar15;
        pDVar16->off_num = (int *)uVar7;
        pDVar16->title = (char *)uVar8;
        pDVar16->submenu[0].name = (char *)uVar9;
        pDVar16->submenu[0].attr = uVar10;
        pDVar16->submenu[0].child = (void *)uVar11;
        pDVar16->submenu[0].nmin = (float)uVar12;
        pDVar16->submenu[0].nmax = (float)uVar13;
        puVar14 = puVar15 + 4;
        pDVar17 = (DEBUG_MENU *)&pDVar16->submenu[0].nadd;
      } while (puVar14 != &uStack_a60);
      uVar2 = *puVar14;
      uVar3 = puVar15[5];
      uVar4 = puVar15[6];
      fVar5 = *(float *)(puVar15 + 7);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].name + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar2 >> (7 - uVar6) * 8;
      *(ulong *)pDVar17 = uVar2;
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].child + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar3 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].attr = (int)uVar3;
      pDVar16->submenu[1].child = (void *)(int)(uVar3 >> 0x20);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].nmax + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar4 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].nmin = (float)(int)uVar4;
      pDVar16->submenu[1].nmax = (float)(int)(uVar4 >> 0x20);
      pDVar16->submenu[1].nadd = fVar5;
                    /* end of inlined section */
      local_bc0 = uVar18;
    }
    if (__initialize_p == 1) {
      local_a38 = "RECOVERY ITEM";
      local_a40 = &dbg_item_main;
      uStack_a3c = 0;
      memset(&pcStack_a34,0,0x1e0);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      pcStack_a34 = "MANYOUGAN";
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_a30 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(5,0x3a);
      uVar18 = 0x42c60000;
      uStack_a2c = 0x31878c;
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_a1c = "GOSINSUI";
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      uStack_a24 = 0x42c60000;
      local_a20 = 0x3f800000;
      local_a18 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(6,0x3a);
      local_a04 = "KAGAMIISI";
      local_a14 = 0x318794;
      local_a08 = 0x3f800000;
      local_a00 = 0x8000;
      local_a0c = uVar18;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(7,0x3a);
      local_9ec = s_REISEKI_003efa98;
      local_9fc = 0x31879c;
      local_9e8 = 0x8000;
      local_9f4 = 0x3f800000;
      local_9f0 = 0x3f800000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(8);
      local_9e4 = 0x3187a4;
      local_9d8 = 0x3f800000;
      local_9d4 = s__end__003efa10;
      local_854 = 0;
      local_850 = 0;
      local_84c = 0;
      local_848 = 0;
      pDVar17 = &dbg_recovery_item;
      puVar14 = (ulong *)&local_a40;
      do {
        puVar15 = puVar14;
        pDVar16 = pDVar17;
        uVar7 = *(undefined4 *)((int)puVar15 + 4);
        uVar8 = *(undefined4 *)(puVar15 + 1);
        uVar9 = *(undefined4 *)((int)(puVar15 + 1) + 4);
        uVar10 = *(undefined4 *)(puVar15 + 2);
        uVar11 = *(undefined4 *)((int)(puVar15 + 2) + 4);
        uVar12 = *(undefined4 *)(puVar15 + 3);
        uVar13 = *(undefined4 *)((int)(puVar15 + 3) + 4);
        pDVar16->parent = (void *)*(undefined4 *)puVar15;
        pDVar16->off_num = (int *)uVar7;
        pDVar16->title = (char *)uVar8;
        pDVar16->submenu[0].name = (char *)uVar9;
        pDVar16->submenu[0].attr = uVar10;
        pDVar16->submenu[0].child = (void *)uVar11;
        pDVar16->submenu[0].nmin = (float)uVar12;
        pDVar16->submenu[0].nmax = (float)uVar13;
        puVar14 = puVar15 + 4;
        pDVar17 = (DEBUG_MENU *)&pDVar16->submenu[0].nadd;
      } while (puVar14 != &uStack_860);
      uVar2 = *puVar14;
      uVar3 = puVar15[5];
      uVar4 = puVar15[6];
      fVar5 = *(float *)(puVar15 + 7);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].name + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar2 >> (7 - uVar6) * 8;
      *(ulong *)pDVar17 = uVar2;
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].child + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar3 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].attr = (int)uVar3;
      pDVar16->submenu[1].child = (void *)(int)(uVar3 >> 0x20);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].nmax + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar4 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].nmin = (float)(int)uVar4;
      pDVar16->submenu[1].nmax = (float)(int)(uVar4 >> 0x20);
      pDVar16->submenu[1].nadd = fVar5;
                    /* end of inlined section */
      local_9dc = uVar18;
    }
    if (__initialize_p == 1) {
      local_838 = "EVENT ITEM 1";
      local_840 = &dbg_item_main;
      uStack_83c = 0;
      memset(&pcStack_834,0,0x1e0);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      pcStack_834 = s_CAMERA_003efaa0;
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_830 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(10,0x3a);
      local_81c = "FLASHLIGHT";
      uStack_82c = 0x3187b4;
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      uStack_824 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_820 = 0x3f800000;
      local_818 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0xb,0x3a);
      local_804 = "HUTAGO KEY R";
      local_814 = 0x3187bc;
      local_80c = 0x3f800000;
      local_808 = 0x3f800000;
      local_800 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0xc,0x3a);
      local_7ec = "HUTAGO KEY L";
      local_7fc = 0x3187c4;
      local_7f4 = 0x3f800000;
      local_7f0 = 0x3f800000;
      local_7e8 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0xd,0x3a);
      local_7d4 = "MIYAKO BOOK 1";
      local_7e4 = 0x3187cc;
      local_7dc = 0x3f800000;
      local_7d8 = 0x3f800000;
      local_7d0 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0xe,0x3a);
      local_7bc = "MIYAKO BOOK 2";
      local_7cc = 0x3187d4;
      local_7c4 = 0x3f800000;
      local_7c0 = 0x3f800000;
      local_7b8 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0xf,0x3a);
      local_7a4 = s_KOMONJO_003efaa8;
      local_7b4 = 0x3187dc;
      local_7ac = 0x3f800000;
      local_7a8 = 0x3f800000;
      local_7a0 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x10,0x3a);
      local_78c = "OUSAKA_MAP";
      local_79c = 0x3187e4;
      local_794 = 0x3f800000;
      local_790 = 0x3f800000;
      local_788 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x12,0x3a);
      local_774 = "HINA KUBI";
      local_784 = 0x3187f4;
      local_77c = 0x3f800000;
      local_778 = 0x3f800000;
      local_770 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x13,0x3a);
      local_75c = "HUDAKAGI HIGASI";
      local_76c = 0x3187fc;
      local_764 = 0x3f800000;
      local_760 = 0x3f800000;
      local_758 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x14,0x3a);
      local_744 = "HUDAKAGI HINA";
      local_754 = 0x318804;
      local_74c = 0x3f800000;
      local_748 = 0x3f800000;
      local_740 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x15,0x3a);
      local_72c = "HUDAKAGI DOZOU";
      local_73c = 0x31880c;
      local_734 = 0x3f800000;
      local_730 = 0x3f800000;
      local_728 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x16,0x3a);
      local_714 = "HUDAKAGI WAKIDO";
      local_724 = 0x318814;
      local_71c = 0x3f800000;
      local_718 = 0x3f800000;
      local_710 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x17,0x3a);
      local_6fc = "KYAKUMA KEY";
      local_70c = 0x31881c;
      local_6f8 = 0x8000;
      local_704 = 0x3f800000;
      local_700 = 0x3f800000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x18);
      local_6f4 = 0x318824;
      local_6e8 = 0x3f800000;
      local_6e4 = s__end__003efa10;
      local_6ec = 0x3f800000;
      local_654 = 0;
      local_650 = 0;
      local_64c = 0;
      local_648 = 0;
      pDVar17 = &dbg_event_item;
      puVar14 = (ulong *)&local_840;
      do {
        puVar15 = puVar14;
        pDVar16 = pDVar17;
        uVar18 = *(undefined4 *)((int)puVar15 + 4);
        uVar7 = *(undefined4 *)(puVar15 + 1);
        uVar8 = *(undefined4 *)((int)(puVar15 + 1) + 4);
        uVar9 = *(undefined4 *)(puVar15 + 2);
        uVar10 = *(undefined4 *)((int)(puVar15 + 2) + 4);
        uVar11 = *(undefined4 *)(puVar15 + 3);
        uVar12 = *(undefined4 *)((int)(puVar15 + 3) + 4);
        pDVar16->parent = (void *)*(undefined4 *)puVar15;
        pDVar16->off_num = (int *)uVar18;
        pDVar16->title = (char *)uVar7;
        pDVar16->submenu[0].name = (char *)uVar8;
        pDVar16->submenu[0].attr = uVar9;
        pDVar16->submenu[0].child = (void *)uVar10;
        pDVar16->submenu[0].nmin = (float)uVar11;
        pDVar16->submenu[0].nmax = (float)uVar12;
        puVar14 = puVar15 + 4;
        pDVar17 = (DEBUG_MENU *)&pDVar16->submenu[0].nadd;
      } while (puVar14 != &uStack_660);
      uVar2 = *puVar14;
      uVar3 = puVar15[5];
      uVar4 = puVar15[6];
      fVar5 = *(float *)(puVar15 + 7);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].name + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar2 >> (7 - uVar6) * 8;
      *(ulong *)pDVar17 = uVar2;
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].child + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar3 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].attr = (int)uVar3;
      pDVar16->submenu[1].child = (void *)(int)(uVar3 >> 0x20);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].nmax + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar4 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].nmin = (float)(int)uVar4;
      pDVar16->submenu[1].nmax = (float)(int)(uVar4 >> 0x20);
      pDVar16->submenu[1].nadd = fVar5;
                    /* end of inlined section */
    }
    if (__initialize_p == 1) {
      local_638 = "EVENT ITEM 2";
      local_640 = &dbg_item_main;
      uStack_63c = 0;
      memset(&pcStack_634,0,0x1e0);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      pcStack_634 = "PZL ROKU HON1";
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_630 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x19,0x3a);
      local_61c = "PZL ROKU HON2";
      uStack_62c = 0x31882c;
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      uStack_624 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_620 = 0x3f800000;
      local_618 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x1a,0x3a);
      local_604 = "PZL ROKU HON3";
      local_614 = 0x318834;
      local_60c = 0x3f800000;
      local_608 = 0x3f800000;
      local_600 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x1b,0x3a);
      local_5ec = "PZL ROKU HON4";
      local_5fc = 0x31883c;
      local_5f4 = 0x3f800000;
      local_5f0 = 0x3f800000;
      local_5e8 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x1c,0x3a);
      local_5d4 = "PZL ROKU HON5";
      local_5e4 = 0x318844;
      local_5dc = 0x3f800000;
      local_5d8 = 0x3f800000;
      local_5d0 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x1d,0x3a);
      local_5bc = "ZASHIKI NAI KEY1";
      local_5cc = 0x31884c;
      local_5c4 = 0x3f800000;
      local_5c0 = 0x3f800000;
      local_5b8 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x1e,0x3a);
      local_5a4 = "ZASHIKI NAI KEY2";
      local_5b4 = 0x318854;
      local_5ac = 0x3f800000;
      local_5a8 = 0x3f800000;
      local_5a0 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x1f,0x3a);
      local_58c = "ZASHIKI GAI KEY";
      local_59c = 0x31885c;
      local_594 = 0x3f800000;
      local_590 = 0x3f800000;
      local_588 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x20,0x3a);
      local_574 = &DAT_003efab0;
      local_584 = 0x318864;
      local_57c = 0x3f800000;
      local_578 = 0x3f800000;
      local_570 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x21,0x3a);
      local_55c = s_REEL1_003efab8;
      local_56c = 0x31886c;
      local_564 = 0x3f800000;
      local_560 = 0x3f800000;
      local_558 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x22,0x3a);
      local_544 = s_REEL2_003efac0;
      local_554 = 0x318874;
      local_54c = 0x3f800000;
      local_548 = 0x3f800000;
      local_540 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x23,0x3a);
      local_52c = s_REEL3_003efac8;
      local_53c = 0x31887c;
      local_534 = 0x3f800000;
      local_530 = 0x3f800000;
      local_528 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x24,0x3a);
      local_514 = s_REEL4_003efad0;
      local_524 = 0x318884;
      local_51c = 0x3f800000;
      local_518 = 0x3f800000;
      local_510 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x25,0x3a);
      local_4fc = s_REEL5_003efad8;
      local_50c = 0x31888c;
      local_504 = 0x3f800000;
      local_500 = 0x3f800000;
      local_4f8 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x26,0x3a);
      local_4e4 = s_REEL6_003efae0;
      local_4f4 = 0x318894;
      local_4ec = 0x3f800000;
      local_4e8 = 0x3f800000;
      local_4e0 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x27,0x3a);
      local_4cc = s_REEL7_003efae8;
      local_4dc = 0x31889c;
      local_4d4 = 0x3f800000;
      local_4d0 = 0x3f800000;
      local_4c8 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x28,0x3a);
      local_4b4 = &DAT_003efaf0;
      local_4c4 = 0x3188a4;
      local_4b0 = 0x8000;
      local_4bc = 0x3f800000;
      local_4b8 = 0x3f800000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x29);
      local_4ac = 0x3188ac;
      local_4a0 = 0x3f800000;
      local_49c = s__end__003efa10;
      local_4a4 = 0x3f800000;
      local_454 = 0;
      local_450 = 0;
      local_44c = 0;
      local_448 = 0;
      puVar14 = (ulong *)&local_640;
      pDVar17 = &dbg_event_item2;
      do {
        pDVar16 = pDVar17;
        puVar15 = puVar14;
        uVar18 = *(undefined4 *)((int)puVar15 + 4);
        uVar7 = *(undefined4 *)(puVar15 + 1);
        uVar8 = *(undefined4 *)((int)(puVar15 + 1) + 4);
        uVar9 = *(undefined4 *)(puVar15 + 2);
        uVar10 = *(undefined4 *)((int)(puVar15 + 2) + 4);
        uVar11 = *(undefined4 *)(puVar15 + 3);
        uVar12 = *(undefined4 *)((int)(puVar15 + 3) + 4);
        pDVar16->parent = (void *)*(undefined4 *)puVar15;
        pDVar16->off_num = (int *)uVar18;
        pDVar16->title = (char *)uVar7;
        pDVar16->submenu[0].name = (char *)uVar8;
        pDVar16->submenu[0].attr = uVar9;
        pDVar16->submenu[0].child = (void *)uVar10;
        pDVar16->submenu[0].nmin = (float)uVar11;
        pDVar16->submenu[0].nmax = (float)uVar12;
        puVar14 = puVar15 + 4;
        pDVar17 = (DEBUG_MENU *)&pDVar16->submenu[0].nadd;
      } while (puVar14 != &uStack_460);
      uVar2 = *puVar14;
      uVar3 = puVar15[5];
      uVar4 = puVar15[6];
      fVar5 = *(float *)(puVar15 + 7);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].name + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar2 >> (7 - uVar6) * 8;
      *(ulong *)pDVar17 = uVar2;
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].child + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar3 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].attr = (int)uVar3;
      pDVar16->submenu[1].child = (void *)(int)(uVar3 >> 0x20);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].nmax + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar4 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].nmin = (float)(int)uVar4;
      pDVar16->submenu[1].nmax = (float)(int)(uVar4 >> 0x20);
      pDVar16->submenu[1].nadd = fVar5;
                    /* end of inlined section */
    }
    if (__initialize_p == 1) {
      local_438 = "EVENT ITEM 3";
      local_440 = &dbg_item_main;
      uStack_43c = 0;
      memset(&pcStack_434,0,0x1e0);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      pcStack_434 = "DOLL HEAD";
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_430 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x2a,0x3a);
      local_41c = "DOLL R ARM";
      uStack_42c = 0x3188b4;
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      uStack_424 = 0x3f800000;
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_420 = 0x3f800000;
      local_418 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x2b,0x3a);
      local_404 = "DOLL L ARM";
      local_414 = 0x3188bc;
      local_40c = 0x3f800000;
      local_408 = 0x3f800000;
      local_400 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x2c,0x3a);
      local_3ec = "DOLL EYE";
      local_3fc = 0x3188c4;
      local_3f4 = 0x3f800000;
      local_3f0 = 0x3f800000;
      local_3e8 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x2d,0x3a);
      local_3d4 = "KAZA PANEL1";
      local_3e4 = 0x3188cc;
      local_3dc = 0x3f800000;
      local_3d8 = 0x3f800000;
      local_3d0 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x2e,0x3a);
      local_3bc = "KAZA PANEL2";
      local_3cc = 0x3188d4;
      local_3c4 = 0x3f800000;
      local_3c0 = 0x3f800000;
      local_3b8 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x2f,0x3a);
      local_3a4 = "KAZA PANEL3";
      local_3b4 = 0x3188dc;
      local_3ac = 0x3f800000;
      local_3a8 = 0x3f800000;
      local_3a0 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x30,0x3a);
      local_38c = "KAZA PANEL4";
      local_39c = 0x3188e4;
      local_394 = 0x3f800000;
      local_390 = 0x3f800000;
      local_388 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x31,0x3a);
      local_374 = s_RADIO_003efaf8;
      local_384 = 0x3188ec;
      local_37c = 0x3f800000;
      local_378 = 0x3f800000;
      local_370 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x32,0x3a);
      local_35c = "MIYAKO BAG";
      local_36c = 0x3188f4;
      local_364 = 0x3f800000;
      local_360 = 0x3f800000;
      local_358 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x33,0x3a);
      local_344 = "DOLL SEKKEI";
      local_354 = 0x3188fc;
      local_34c = 0x3f800000;
      local_348 = 0x3f800000;
      local_340 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x34,0x3a);
      local_32c = "HIMO R DOLL";
      local_33c = 0x318904;
      local_334 = 0x3f800000;
      local_330 = 0x3f800000;
      local_328 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x35,0x3a);
      local_314 = "NARABI KEY";
      local_324 = 0x31890c;
      local_31c = 0x3f800000;
      local_318 = 0x3f800000;
      local_310 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x36,0x3a);
      local_2fc = "KURA_KEY";
      local_30c = 0x318914;
      local_2f8 = 0x8000;
      local_304 = 0x3f800000;
      local_300 = 0x3f800000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x37);
      local_2f4 = 0x31891c;
      local_2e8 = 0x3f800000;
      local_2e4 = s__end__003efa10;
      local_2ec = 0x3f800000;
      local_254 = 0;
      local_250 = 0;
      local_24c = 0;
      local_248 = 0;
      pDVar17 = &dbg_event_item3;
      puVar14 = (ulong *)&local_440;
      do {
        puVar15 = puVar14;
        pDVar16 = pDVar17;
        uVar18 = *(undefined4 *)((int)puVar15 + 4);
        uVar7 = *(undefined4 *)(puVar15 + 1);
        uVar8 = *(undefined4 *)((int)(puVar15 + 1) + 4);
        uVar9 = *(undefined4 *)(puVar15 + 2);
        uVar10 = *(undefined4 *)((int)(puVar15 + 2) + 4);
        uVar11 = *(undefined4 *)(puVar15 + 3);
        uVar12 = *(undefined4 *)((int)(puVar15 + 3) + 4);
        pDVar16->parent = (void *)*(undefined4 *)puVar15;
        pDVar16->off_num = (int *)uVar18;
        pDVar16->title = (char *)uVar7;
        pDVar16->submenu[0].name = (char *)uVar8;
        pDVar16->submenu[0].attr = uVar9;
        pDVar16->submenu[0].child = (void *)uVar10;
        pDVar16->submenu[0].nmin = (float)uVar11;
        pDVar16->submenu[0].nmax = (float)uVar12;
        puVar14 = puVar15 + 4;
        pDVar17 = (DEBUG_MENU *)&pDVar16->submenu[0].nadd;
      } while (puVar14 != &uStack_260);
      uVar2 = *puVar14;
      uVar3 = puVar15[5];
      uVar4 = puVar15[6];
      fVar5 = *(float *)(puVar15 + 7);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].name + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar2 >> (7 - uVar6) * 8;
      *(ulong *)pDVar17 = uVar2;
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].child + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar3 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].attr = (int)uVar3;
      pDVar16->submenu[1].child = (void *)(int)(uVar3 >> 0x20);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].nmax + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar4 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].nmin = (float)(int)uVar4;
      pDVar16->submenu[1].nmax = (float)(int)(uVar4 >> 0x20);
      pDVar16->submenu[1].nadd = fVar5;
                    /* end of inlined section */
    }
    if (__initialize_p == 1) {
      local_238 = "EVENT ITEM 4";
      local_240 = &dbg_item_main;
      uStack_23c = 0;
      memset(&pcStack_234,0,0x1e0);
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
      pcStack_234 = "FUKAMICHI KEY";
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      local_230 = 0x8000;
      _fixed_array_verifyrange__H1Z9PLYR_ITEM_UiUi_PX01(0x38);
                    /* end of inlined section */
                    /* inlined from ../graphics/graph3d/ctl/fixed_array.h */
      pDVar17 = &dbg_event_item4;
      puVar14 = (ulong *)&local_240;
      do {
        puVar15 = puVar14;
        pDVar16 = pDVar17;
        uVar18 = *(undefined4 *)((int)puVar15 + 4);
        uVar7 = *(undefined4 *)(puVar15 + 1);
        uVar8 = *(undefined4 *)((int)(puVar15 + 1) + 4);
        uVar9 = *(undefined4 *)(puVar15 + 2);
        uVar10 = *(undefined4 *)((int)(puVar15 + 2) + 4);
        uVar11 = *(undefined4 *)(puVar15 + 3);
        uVar12 = *(undefined4 *)((int)(puVar15 + 3) + 4);
        pDVar16->parent = (void *)*(undefined4 *)puVar15;
        pDVar16->off_num = (int *)uVar18;
        pDVar16->title = (char *)uVar7;
        pDVar16->submenu[0].name = (char *)uVar8;
        pDVar16->submenu[0].attr = uVar9;
        pDVar16->submenu[0].child = (void *)uVar10;
        pDVar16->submenu[0].nmin = (float)uVar11;
        pDVar16->submenu[0].nmax = (float)uVar12;
        puVar14 = puVar15 + 4;
        pDVar17 = (DEBUG_MENU *)&pDVar16->submenu[0].nadd;
      } while (puVar14 != auStack_60);
      uVar2 = *puVar14;
      uVar3 = puVar15[5];
      uVar4 = puVar15[6];
      fVar5 = *(float *)(puVar15 + 7);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].name + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar2 >> (7 - uVar6) * 8;
      *(ulong *)pDVar17 = uVar2;
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].child + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar3 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].attr = (int)uVar3;
      pDVar16->submenu[1].child = (void *)(int)(uVar3 >> 0x20);
      puVar1 = (undefined *)((int)&pDVar16->submenu[1].nmax + 3);
      uVar6 = (uint)puVar1 & 7;
      puVar14 = (ulong *)(puVar1 + -uVar6);
      *puVar14 = *puVar14 & -1L << (uVar6 + 1) * 8 | uVar4 >> (7 - uVar6) * 8;
      pDVar16->submenu[1].nmin = (float)(int)uVar4;
      pDVar16->submenu[1].nmax = (float)(int)(uVar4 >> 0x20);
      pDVar16->submenu[1].nadd = fVar5;
    }
  }
  return;
}

PLYR_ITEM* PLYR_ITEM * _fixed_array_verifyrange<PLYR_ITEM>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& PLYR_ITEM type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to dbg_menu_main() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
