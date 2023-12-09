// STATUS: NOT STARTED

#include "album.h"

typedef struct {
	char step;
	char mode_step;
	char mode;
	char album_init_mode;
	char current_album;
	char photo_no;
	void *album_photo_addr[2];
} ALBUM_CTRL;

typedef struct {
	char anim_step;
	char anim_timer;
} ALBUM_DISP_CTRL;

fixed_array<ALBUM_INFO,2> album_info = {
	/* base class 0 = */ {
		/* .m_aData = */ {
			/* [0] = */ {
				/* .album_type = */ 0,
				/* .album_info = */ {
					/* .pic_num = */ 0,
					/* .protect_num = */ 0,
					/* .sort_key = */ 0,
					/* .skey_bak = */ 0,
					/* .pic = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [1] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [2] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [3] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [4] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [5] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [6] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [7] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [8] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [9] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [10] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [11] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [12] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [13] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [14] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [15] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								}
							}
						}
					},
					/* .padding = */ 0
				}
			},
			/* [1] = */ {
				/* .album_type = */ 0,
				/* .album_info = */ {
					/* .pic_num = */ 0,
					/* .protect_num = */ 0,
					/* .sort_key = */ 0,
					/* .skey_bak = */ 0,
					/* .pic = */ {
						/* base class 0 = */ {
							/* .m_aData = */ {
								/* [0] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [1] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [2] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [3] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [4] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [5] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [6] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [7] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [8] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [9] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [10] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [11] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [12] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [13] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [14] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								},
								/* [15] = */ {
									/* .adr_no = */ 0,
									/* .chp_no = */ 0,
									/* .status = */ 0,
									/* .maSubject = */ {
										/* base class 0 = */ {
											/* .m_aData = */ {
												/* [0] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [1] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												},
												/* [2] = */ {
													/* .type = */ 0,
													/* .obj_no = */ 0
												}
											}
										}
									},
									/* .score = */ 0,
									/* .time = */ {
										/* .stat = */ 0,
										/* .second = */ 0,
										/* .minute = */ 0,
										/* .hour = */ 0,
										/* .pad = */ 0,
										/* .day = */ 0,
										/* .month = */ 0,
										/* .year = */ 0
									},
									/* .room = */ 0
								}
							}
						}
					},
					/* .padding = */ 0
				}
			}
		}
	}
};

static void* (*AlbumMemGet)(/* parameters unknown */) = NULL;
static void (*AlbumMemFree)(/* parameters unknown */) = NULL;
static void *outgame_tex_addr = NULL;
static void *album_cmn_tex_addr = NULL;
static void *album_hensyu_tex_addr = NULL;
static void *album_sl_addr = NULL;
static void *album_slot_sl_addr = NULL;
static void *album_buff_addr = NULL;
static void *album_save_data_addr = NULL;
static char album_title_disp_flg = 1;

static void (*album_mode_init_func[2])(/* parameters unknown */) = {
	/* [0] = */ AlbumEditCtrlInit,
	/* [1] = */ AlbumViewCtrlInit
};

static int (*album_mode_main_func[2])(/* parameters unknown */) = {
	/* [0] = */ AlbumEditMain,
	/* [1] = */ AlbumViewMain
};

static void (*album_mode_disp_func[2])(/* parameters unknown */) = {
	/* [0] = */ AlbumEditDispMain,
	/* [1] = */ AlbumViewDispMain
};

static reference_fixed_array<int,7> album_view_tex_tbl;
unsigned char ALBUM_INFO type_info node[8];
unsigned char PICTURE_WRK type_info node[8];
static ALBUM_CTRL album_ctrl;
static ALBUM_DISP_CTRL album_disp_ctrl;

static void _fixed_array_assert(char *strType, size_t v0, size_t v1) {
	static char *str = 0x3a00a8;
	
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void** void * * _fixed_array_verifyrange<void *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11PICTURE_WRK(0x3ef270,_max);
  }
  return (void **)0x0;
}

static char** char * * _fixed_array_verifyrange<char *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11PICTURE_WRK(0x3ef278,_max);
  }
  return (char **)0x0;
}

static unsigned int** unsigned int * * _fixed_array_verifyrange<unsigned int *>(size_t v, size_t _max) {
  if (_max <= v) {
    __tf11PICTURE_WRK(0x3a00f0,_max);
  }
  return (uint **)0x0;
}

void AlbumInit(int init_mode) {
	static char __FUNCTION__[10] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 73,
		/* [6] = */ 110,
		/* [7] = */ 105,
		/* [8] = */ 116,
		/* [9] = */ 0
	};
	
  if (1 < (uint)init_mode) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  AlbumCtrlInit__Fi(init_mode);
  AlbumInfoInit__Fi(init_mode);
  album_title_disp_flg = '\x01';
  return;
}

static void AlbumCtrlInit(int init_mode) {
	static char __FUNCTION__[14] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 67,
		/* [6] = */ 116,
		/* [7] = */ 114,
		/* [8] = */ 108,
		/* [9] = */ 73,
		/* [10] = */ 110,
		/* [11] = */ 105,
		/* [12] = */ 116,
		/* [13] = */ 0
	};
	
  if (1 < (uint)init_mode) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
  }
  if (album_buff_addr == (void *)0x0) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s album_buff_addr NULL");
  }
  album_ctrl.album_init_mode = (char)init_mode;
  album_ctrl.album_photo_addr[1] = album_buff_addr;
  album_ctrl.album_photo_addr[0] = (void *)0x19a9b00;
  album_ctrl.step = '\0';
  album_ctrl.mode_step = '\0';
  album_ctrl.mode = '\0';
  album_ctrl.current_album = '\0';
  album_ctrl.photo_no = '\0';
  return;
}

static void AlbumInfoInit(int init_mode) {
	int i;
	int j;
	
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  fixed_array<ALBUM_INFO,2> *__s;
  
  __s = &album_info;
  iVar3 = 0;
  iVar4 = 0;
  do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar3,2);
    memset(__s,0,0x20c);
                    /* end of inlined section */
    iVar2 = 0;
    puVar1 = (undefined *)
             ((int)&album_info.field0_0x0.m_aData[0].album_info.pic.field0_0x0.m_aData[0].adr_no +
             iVar4 * 4);
    do {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(iVar3,2);
      _fixed_array_verifyrange__H1Z11PICTURE_WRK_UiUi_PX01(iVar2,0x10);
      *puVar1 = (char)iVar2;
                    /* end of inlined section */
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x20;
    } while (iVar2 < 0x10);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x83;
    __s = (fixed_array<ALBUM_INFO,2> *)((int)__s + 0x20c);
  } while (iVar3 < 2);
  if (init_mode == 0) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(0,2);
    album_info.field0_0x0.m_aData[0].album_type = 5;
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(0,2);
    CopyPFileWrk__FP9PFILE_WRK(&album_info.field0_0x0.m_aData[0].album_info);
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(1,2);
  }
  else {
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(0,2);
    album_info.field0_0x0.m_aData[0].album_type = 6;
    _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(1,2);
  }
  album_info.field0_0x0.m_aData[1].album_type = 6;
  return;
}

void AlbumBackGroundLoadReq(void* (*mem_get)(/* parameters unknown */), void (*mem_free)(/* parameters unknown */)) {
	static char __FUNCTION__[23] = {
		/* [0] = */ 65,
		/* [1] = */ 108,
		/* [2] = */ 98,
		/* [3] = */ 117,
		/* [4] = */ 109,
		/* [5] = */ 66,
		/* [6] = */ 97,
		/* [7] = */ 99,
		/* [8] = */ 107,
		/* [9] = */ 71,
		/* [10] = */ 114,
		/* [11] = */ 111,
		/* [12] = */ 117,
		/* [13] = */ 110,
		/* [14] = */ 100,
		/* [15] = */ 76,
		/* [16] = */ 111,
		/* [17] = */ 97,
		/* [18] = */ 100,
		/* [19] = */ 82,
		/* [20] = */ 101,
		/* [21] = */ 113,
		/* [22] = */ 0
	};
	
  undefined1 *puVar1;
  undefined1 *puVar2;
  uchar uVar3;
  
  if ((AlbumMemGet != (undefined1 *)0x0) ||
     (puVar1 = mem_get, puVar2 = mem_free, AlbumMemFree != (undefined1 *)0x0)) {
    SetAssertPreMessage("\n\tFILE_NAME : %s \n\tLINE :%d \n\tFUNC_NAME: %s\n");
    PrintAssertReal("Error! %s");
    puVar1 = AlbumMemGet;
    puVar2 = AlbumMemFree;
  }
  AlbumMemFree = puVar2;
  AlbumMemGet = puVar1;
  GetAlbumDataMem__FPPvi(&album_buff_addr,0xe8000);
  GetAlbumTexMem__FPPvi(&outgame_tex_addr,0x13);
  uVar3 = GetLanguage__Fv();
  GetAlbumTexMem__FPPvi(&album_cmn_tex_addr,(char)uVar3 + 0x10d8);
  uVar3 = GetLanguage__Fv();
  GetAlbumTexMem__FPPvi(&album_hensyu_tex_addr,(char)uVar3 + 0x10dd);
  GetAlbumTexMem__FPPvi(&album_sl_addr,0x1100);
  uVar3 = GetLanguage__Fv();
  GetAlbumTexMem__FPPvi(&album_slot_sl_addr,(char)uVar3 + 0x1101);
  FileLoadReqEE(0x13,outgame_tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  uVar3 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar3 + 0x10d8,album_cmn_tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  uVar3 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar3 + 0x10dd,album_hensyu_tex_addr,6,(undefined1 *)0x0,(void *)0x0);
  FileLoadReqEE(0x1100,album_sl_addr,6,(undefined1 *)0x0,(void *)0x0);
  uVar3 = GetLanguage__Fv();
  FileLoadReqEE((char)uVar3 + 0x1101,album_slot_sl_addr,6,(undefined1 *)0x0,(void *)0x0);
  return;
}

void GetAlbumTexMem(void **tex_addr, int data_label) {
  uint uVar1;
  void *pvVar2;
  
  if (*tex_addr != (void *)0x0) {
    LiberateAlbumTexMem__FPPv(tex_addr);
  }
  uVar1 = GetFileSize(data_label);
  pvVar2 = (void *)(*(code *)AlbumMemGet)(uVar1);
  *tex_addr = pvVar2;
  return;
}

static void GetAlbumDataMem(void **tex_addr, int size) {
  void *pvVar1;
  
  if (*tex_addr != (void *)0x0) {
    LiberateAlbumTexMem__FPPv(tex_addr);
  }
  pvVar1 = (void *)(*(code *)AlbumMemGet)(size);
  *tex_addr = pvVar1;
  return;
}

static int AlbumTexLoadWait() {
	int res;
	
  uchar uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = GetLanguage__Fv();
  iVar2 = FileLoadIsEnd2((char)uVar1 + 0x10d8,album_cmn_tex_addr);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = GetLanguage__Fv();
    iVar2 = FileLoadIsEnd2((char)uVar1 + 0x10dd,album_hensyu_tex_addr);
    if (iVar2 != 0) {
      iVar2 = FileLoadIsEnd2(0x13,outgame_tex_addr);
      uVar3 = (uint)(iVar2 != 0);
    }
  }
  return uVar3;
}

int AlbumMain() {
	int res;
	
  int iVar1;
  uint uVar2;
  
  if (album_ctrl.step == '\0') {
    AlbumDispCtrlInit__Fv();
    album_ctrl.step = '\x01';
  }
  if ((album_ctrl.step == '\x01') && (iVar1 = AlbumTexLoadWait__Fv(), iVar1 != 0)) {
    album_ctrl.step = '\x02';
  }
  if (album_ctrl.step == '\x02') {
    AlbumModeMain__Fv();
  }
  uVar2 = 0;
  if (album_ctrl.step == '\x03') {
    uVar2 = (uint)(album_disp_ctrl.anim_step == '\x04');
  }
  return uVar2;
}

static void AlbumModeMain() {
  long lVar1;
  
  if (album_ctrl.mode_step == '\0') {
    if ((code *)album_mode_init_func[album_ctrl.mode] != (code *)0x0) {
      (*(code *)album_mode_init_func[album_ctrl.mode])();
    }
    album_ctrl.mode_step = '\x01';
  }
  if (((album_ctrl.mode_step == '\x01') &&
      ((code *)album_mode_main_func[album_ctrl.mode] != (code *)0x0)) &&
     (lVar1 = (*(code *)album_mode_main_func[album_ctrl.mode])(), lVar1 != 0)) {
    album_ctrl.mode_step = '\x02';
  }
  if (album_ctrl.mode_step == '\x02') {
    album_ctrl.mode = album_ctrl.mode == '\0';
    album_ctrl.mode_step = '\0';
  }
  return;
}

void AlbumOutReq() {
  album_disp_ctrl.anim_step = '\x03';
  album_ctrl.step = '\x03';
  album_disp_ctrl.anim_timer = '\0';
  return;
}

void ChengeCurrentAlbum() {
  album_ctrl.current_album = album_ctrl.current_album ^ 1;
  return;
}

void SetAlbumPhotoNo(char photo_no) {
  album_ctrl.photo_no = photo_no;
  return;
}

void SetAlbumSaveDataAddr(void *data_addr) {
  album_save_data_addr = data_addr;
  return;
}

void SetAlbumTitleFlg(char flg) {
  album_title_disp_flg = flg;
  return;
}

int GetCurrentAlbum() {
  return (int)album_ctrl.current_album;
}

int GetAlbumPhotoNo() {
  return (int)album_ctrl.photo_no;
}

void* GetAlbumDataAddr(int album_data_label) {
  return album_ctrl.album_photo_addr[album_data_label];
}

void* GetAlbumOutGameTexAddr() {
  return outgame_tex_addr;
}

void* GetAlbumCmnTexAddr() {
  return album_cmn_tex_addr;
}

void* GetAlbumEditTexAddr() {
  return album_hensyu_tex_addr;
}

void* GetAlbumSaveLoadTexAddr() {
  return album_sl_addr;
}

void* GetAlbumSlotSelTexAddr() {
  return album_slot_sl_addr;
}

void AlbumEnd() {
  uchar uVar1;
  
  AlbumTexLoadCancel__FPvi(outgame_tex_addr,0x13);
  uVar1 = GetLanguage__Fv();
  AlbumTexLoadCancel__FPvi(album_cmn_tex_addr,(char)uVar1 + 0x10d8);
  uVar1 = GetLanguage__Fv();
  AlbumTexLoadCancel__FPvi(album_hensyu_tex_addr,(char)uVar1 + 0x10dd);
  AlbumTexLoadCancel__FPvi(album_sl_addr,0x1100);
  uVar1 = GetLanguage__Fv();
  AlbumTexLoadCancel__FPvi(album_slot_sl_addr,(char)uVar1 + 0x1101);
  AlbumViewTexLoadCancel__Fv();
  LiberateAlbumTexMem__FPPv(&album_buff_addr);
  LiberateAlbumTexMem__FPPv(&outgame_tex_addr);
  LiberateAlbumTexMem__FPPv(&album_cmn_tex_addr);
  LiberateAlbumTexMem__FPPv(&album_hensyu_tex_addr);
  LiberateAlbumTexMem__FPPv(&album_sl_addr);
  LiberateAlbumTexMem__FPPv(&album_slot_sl_addr);
  LiberateAlbumViewTex__Fv();
  AlbumMemGet = (undefined1 *)0x0;
  AlbumMemFree = (undefined1 *)0x0;
  return;
}

void LiberateAlbumTexMem(void **tex_addr) {
  if (*tex_addr != (void *)0x0) {
    (*(code *)AlbumMemFree)(*tex_addr);
    *tex_addr = (void *)0x0;
  }
  return;
}

void AlbumTexLoadCancel(void *tex_addr, int data_label) {
  int iVar1;
  
  if ((tex_addr != (void *)0x0) && (iVar1 = FileLoadIsEnd2(data_label,tex_addr), iVar1 == 0)) {
    FileLoadCancel2(data_label,tex_addr,(undefined1 *)0x0,(void *)0x0);
  }
  return;
}

static void AlbumDispCtrlInit() {
  album_disp_ctrl.anim_timer = '\0';
  album_disp_ctrl.anim_step = '\0';
  return;
}

void AlbumDispMain() {
	u_char alpha;
	
  uchar alpha;
  
  alpha = 0x80;
  if (((byte)album_ctrl.step - 2 < 2) &&
     (AlbumInOutAnimCtrl__FPcT0PUc(&album_disp_ctrl.anim_step,&album_disp_ctrl.anim_timer,&alpha),
     album_disp_ctrl.anim_step != '\x04')) {
    AlbumBlackBgDisp__FiiUcUc(0,0,alpha,'\x1e');
    if ((album_ctrl.mode_step == '\x01') &&
       ((code *)album_mode_disp_func[album_ctrl.mode] != (code *)0x0)) {
      (*(code *)album_mode_disp_func[album_ctrl.mode])();
    }
    PK2SendVram__FUiiii((uint)outgame_tex_addr,-1,-1,0);
    if (album_title_disp_flg != '\0') {
      AlbumTitleFrameDisp__FiiUc(0,0,alpha);
      PK2SendVram__FUiiii((uint)album_hensyu_tex_addr,-1,-1,0);
      AlbumTitleDisp__FiiUc(0,0,alpha);
    }
  }
  return;
}

void SetSave_AlbumData(MC_SAVE_DATA *data) {
  void *pvVar1;
  
  pvVar1 = album_save_data_addr;
  data->size = 0xe8000;
  data->addr = (uchar *)pvVar1;
  return;
}

void SetSave_AlbumInfoData(MC_SAVE_DATA *data) {
  char cVar1;
  
  cVar1 = album_ctrl.current_album;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  _fixed_array_verifyrange__H1Z10ALBUM_INFO_UiUi_PX01(album_ctrl.current_album,2);
                    /* end of inlined section */
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
                    /* end of inlined section */
  data->size = 0x20c;
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
  data->addr = (uchar *)((int)&album_info + (cVar1 * 0x84 - (int)cVar1) * 4);
  return;
}

ALBUM_INFO* ALBUM_INFO * _fixed_array_verifyrange<ALBUM_INFO>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

PICTURE_WRK* PICTURE_WRK * _fixed_array_verifyrange<PICTURE_WRK>(size_t v, size_t _max) {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void __static_initialization_and_destruction_0(int __initialize_p, int __priority) {
	int *ra;
	
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (__priority == 0xffff) {
    if (__initialize_p == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      iVar3 = 1;
      do {
        iVar2 = 0xe;
        do {
          bVar1 = iVar2 != -1;
          iVar2 = iVar2 + -1;
        } while (bVar1);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    if (__initialize_p == 1) {
                    /* inlined from /home/zero_rom/zero2np/src/graphics/graph3d/ctl/fixed_array.h */
      album_view_tex_tbl.field0_0x0.m_aData = (fixed_array_base<int,7,int_*>)&DAT_003a0198;
    }
  }
  return;
}

type_info& ALBUM_INFO type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

type_info& PICTURE_WRK type_info function() {
  g3ddbgAssert__FbPCce(false,str_646);
  return (type_info *)v;
}

static void global constructors keyed to album_info() {
  __static_initialization_and_destruction_0(1,0xffff);
  return;
}
