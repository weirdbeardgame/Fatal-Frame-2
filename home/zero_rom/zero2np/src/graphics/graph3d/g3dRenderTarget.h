// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DRENDERTARGET_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DRENDERTARGET_H

struct IG3DCompatible {
	static LPFUNC_SETGSREGISTER s_pFuncSetGsRegister;
	static LPFUNC_SETGSREGISTERS s_pFuncSetGsRegisters;
	static LPFUNC_GETGSREGISTERREF s_pFuncGetGsRegisterRef;
	static LPFUNC_SETTRANSFORM s_pFuncSetTransform;
	static LPFUNC_GETTRANSFORMREF s_pFuncGetTransformRef;
	
	IG3DCompatible& operator=();
	IG3DCompatible();
	IG3DCompatible();
protected:
	int SetGsRegister();
	int SetGsRegisters();
	long int& GetGsRegisterRef();
	int SetTransform();
	float&[4][4] GetTransformRef();
};

struct RENDERTARGETCREATIONDATA {
	sceGsTex0 gsTex0;
	G3DCOLOR ClearColor;
	float fZMax;
};

extern __vtbl_ptr_type CSprite virtual table[3];
extern __vtbl_ptr_type CRenderTarget virtual table[3];
extern __vtbl_ptr_type CAutoTransform<0> virtual table[4];
extern __vtbl_ptr_type CAutoGsRegisters<3> virtual table[4];
extern __vtbl_ptr_type IAutoState virtual table[3];
extern unsigned char IAutoState type_info node[12];
extern unsigned char CAutoGsRegisters<3> type_info node[12];
extern unsigned char CAutoTransform<0> type_info node[12];
extern unsigned char CRenderTarget type_info node[12];
extern unsigned char CSprite type_info node[8];
extern unsigned char IG3DCompatible type_info node[8];

void CRenderTarget::~CRenderTarget(int __in_chrg);
type_info& IAutoState type_info function();
void IAutoState::~IAutoState(int __in_chrg);
type_info& CAutoGsRegisters<3> type_info function();
type_info& CAutoTransform<0> type_info function();
type_info& CRenderTarget type_info function();
type_info& CSprite type_info function();
void CSprite::~CSprite(int __in_chrg);
void CAutoGsRegisters<3>::~CAutoGsRegisters(int __in_chrg);
void CAutoTransform<0>::~CAutoTransform(int __in_chrg);
void CAutoTransform<0>::Pop();
type_info& IG3DCompatible type_info function();

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DRENDERTARGET_H
