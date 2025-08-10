#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUPrimitiveState, em_Val);

GPUPrimitiveTopology GPUPrimitiveState_topology(const GPUPrimitiveState *self);

void GPUPrimitiveState_set_topology(GPUPrimitiveState* self, GPUPrimitiveTopology * value);

GPUIndexFormat GPUPrimitiveState_stripIndexFormat(const GPUPrimitiveState *self);

void GPUPrimitiveState_set_stripIndexFormat(GPUPrimitiveState* self, GPUIndexFormat * value);

GPUFrontFace GPUPrimitiveState_frontFace(const GPUPrimitiveState *self);

void GPUPrimitiveState_set_frontFace(GPUPrimitiveState* self, GPUFrontFace * value);

GPUCullMode GPUPrimitiveState_cullMode(const GPUPrimitiveState *self);

void GPUPrimitiveState_set_cullMode(GPUPrimitiveState* self, GPUCullMode * value);

bool GPUPrimitiveState_unclippedDepth(const GPUPrimitiveState *self);

void GPUPrimitiveState_set_unclippedDepth(GPUPrimitiveState* self, bool value);

GPUPrimitiveState GPUPrimitiveState_new();

#ifdef __cplusplus
}
#endif
