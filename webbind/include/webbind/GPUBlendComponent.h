#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUBlendComponent, em_Val);

GPUBlendOperation GPUBlendComponent_operation(const GPUBlendComponent *self);

void GPUBlendComponent_set_operation(GPUBlendComponent* self, GPUBlendOperation * value);

GPUBlendFactor GPUBlendComponent_srcFactor(const GPUBlendComponent *self);

void GPUBlendComponent_set_srcFactor(GPUBlendComponent* self, GPUBlendFactor * value);

GPUBlendFactor GPUBlendComponent_dstFactor(const GPUBlendComponent *self);

void GPUBlendComponent_set_dstFactor(GPUBlendComponent* self, GPUBlendFactor * value);

GPUBlendComponent GPUBlendComponent_new();

#ifdef __cplusplus
}
#endif
