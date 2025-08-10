#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUOrigin3DDict, em_Val);

jb_Any GPUOrigin3DDict_x(const GPUOrigin3DDict *self);

void GPUOrigin3DDict_set_x(GPUOrigin3DDict* self, jb_Any * value);

jb_Any GPUOrigin3DDict_y(const GPUOrigin3DDict *self);

void GPUOrigin3DDict_set_y(GPUOrigin3DDict* self, jb_Any * value);

jb_Any GPUOrigin3DDict_z(const GPUOrigin3DDict *self);

void GPUOrigin3DDict_set_z(GPUOrigin3DDict* self, jb_Any * value);

GPUOrigin3DDict GPUOrigin3DDict_new();

#ifdef __cplusplus
}
#endif
