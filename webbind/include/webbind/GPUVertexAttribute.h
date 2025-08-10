#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUVertexAttribute, em_Val);

GPUVertexFormat GPUVertexAttribute_format(const GPUVertexAttribute *self);

void GPUVertexAttribute_set_format(GPUVertexAttribute* self, GPUVertexFormat * value);

jb_Any GPUVertexAttribute_offset(const GPUVertexAttribute *self);

void GPUVertexAttribute_set_offset(GPUVertexAttribute* self, jb_Any * value);

jb_Any GPUVertexAttribute_shaderLocation(const GPUVertexAttribute *self);

void GPUVertexAttribute_set_shaderLocation(GPUVertexAttribute* self, jb_Any * value);

GPUVertexAttribute GPUVertexAttribute_new();

#ifdef __cplusplus
}
#endif
