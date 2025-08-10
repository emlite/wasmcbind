#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUBlendComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUBlendState, em_Val);

GPUBlendComponent GPUBlendState_color(const GPUBlendState *self);

void GPUBlendState_set_color(GPUBlendState* self, GPUBlendComponent * value);

GPUBlendComponent GPUBlendState_alpha(const GPUBlendState *self);

void GPUBlendState_set_alpha(GPUBlendState* self, GPUBlendComponent * value);

GPUBlendState GPUBlendState_new();

#ifdef __cplusplus
}
#endif
