// STATUS: NOT STARTED

#ifndef HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DBOUNDINGVOLUME_H
#define HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DBOUNDINGVOLUME_H

void g3dbvBoxFromVertices(float *box[4], float *av[4]);
void g3dbvInnerEllipseFromVertices(float *e[4], float *avVertices[4]);
int g3dbvIsEllipseInclude(float *e[4], float *v);

#endif // HOME_ZERO_ROM_ZERO2NP_SRC_GRAPHICS_GRAPH3D_G3DBOUNDINGVOLUME_H
