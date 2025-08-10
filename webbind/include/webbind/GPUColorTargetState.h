#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUBlendState.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUColorTargetState, em_Val);

GPUTextureFormat GPUColorTargetState_format(const GPUColorTargetState *self);

void GPUColorTargetState_set_format(GPUColorTargetState* self, GPUTextureFormat * value);

GPUBlendState GPUColorTargetState_blend(const GPUColorTargetState *self);

void GPUColorTargetState_set_blend(GPUColorTargetState* self, GPUBlendState * value);

jb_Any GPUColorTargetState_writeMask(const GPUColorTargetState *self);

void GPUColorTargetState_set_writeMask(GPUColorTargetState* self, jb_Any * value);

GPUColorTargetState GPUColorTargetState_new();

#ifdef __cplusplus
}
#endif
