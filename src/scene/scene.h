#ifndef __SCENE_H__
#define __SCENE_H__
#include "../matrix/matrix.h"
#include "../types.h"
#include "camera.h"

typedef struct {
  triangles *tris;
  int n;
  MAT *transform;
} mesh_t;

typedef struct {
  mesh_t *meshes;
  int n;
  cam_t *camera;
  MAT *M_viewport;
  MAT *M_proj;
  int total_tris;
} scene_t;


void scene_draw(scene_t *scene, bitmap_t *bmp);

#endif