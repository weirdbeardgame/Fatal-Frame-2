// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DLIGHT_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DLIGHT_H

struct G3DVU1LIGHTACTIVITYSTATUS {
	unsigned int uiEnableDir0 : 1;
	unsigned int uiEnableDir1 : 1;
	unsigned int uiEnableDir2 : 1;
	unsigned int _uiPad0 : 1;
	unsigned int uiEnablePoint0 : 1;
	unsigned int uiEnablePoint1 : 1;
	unsigned int uiEnablePoint2 : 1;
	unsigned int _uiPad1 : 1;
	unsigned int uiEnableSpot0 : 1;
	unsigned int uiEnableSpot1 : 1;
	unsigned int uiEnableSpot2 : 1;
	unsigned int _uiPad2 : 1;
	unsigned int _uiPad : 4;
};

struct G3DVU1LIGHTSTATUS {
	unsigned int auiPad[2];
	union {
		G3DVU1LIGHTACTIVITYSTATUS as;
		long int lAS;
	};
};

void g3dSetLightStatus(G3DVU1LIGHTSTATUS *pLS);
void g3dutilSetLightDefault(G3DLIGHT *pLight, G3DLIGHTTYPE iLightType);
float g3dCalcSpotlightFalloff(G3DLIGHT *pLight, float *vVertexPosition);
float g3dCalcLightDistanceAttenuation(G3DLIGHT *pLight, float *vVertexPosition);
float g3dCalcLightAttenuation(G3DLIGHT *pLight, float *vVertex);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DLIGHT_H
