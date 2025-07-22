#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} ANGLE_instanced_arrays;


DECLARE_EMLITE_TYPE(ANGLE_instanced_arrays, em_Val);

jb_Undefined ANGLE_instanced_arrays_drawArraysInstancedANGLE(ANGLE_instanced_arrays* self , const jb_Any* mode, const jb_Any* first, const jb_Any* count, const jb_Any* primcount);

jb_Undefined ANGLE_instanced_arrays_drawElementsInstancedANGLE(ANGLE_instanced_arrays* self , const jb_Any* mode, const jb_Any* count, const jb_Any* type, const jb_Any* offset, const jb_Any* primcount);

jb_Undefined ANGLE_instanced_arrays_vertexAttribDivisorANGLE(ANGLE_instanced_arrays* self , const jb_Any* index, const jb_Any* divisor);
