#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUOrigin2DDict, em_Val);

jb_Any GPUOrigin2DDict_x(const GPUOrigin2DDict *self);

void GPUOrigin2DDict_set_x(GPUOrigin2DDict* self, jb_Any * value);

jb_Any GPUOrigin2DDict_y(const GPUOrigin2DDict *self);

void GPUOrigin2DDict_set_y(GPUOrigin2DDict* self, jb_Any * value);

GPUOrigin2DDict GPUOrigin2DDict_new();

#ifdef __cplusplus
}
#endif
