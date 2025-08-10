#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUExtent3DDict, em_Val);

jb_Any GPUExtent3DDict_width(const GPUExtent3DDict *self);

void GPUExtent3DDict_set_width(GPUExtent3DDict* self, jb_Any * value);

jb_Any GPUExtent3DDict_height(const GPUExtent3DDict *self);

void GPUExtent3DDict_set_height(GPUExtent3DDict* self, jb_Any * value);

jb_Any GPUExtent3DDict_depthOrArrayLayers(const GPUExtent3DDict *self);

void GPUExtent3DDict_set_depthOrArrayLayers(GPUExtent3DDict* self, jb_Any * value);

GPUExtent3DDict GPUExtent3DDict_new();

#ifdef __cplusplus
}
#endif
