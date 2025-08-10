#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUPipelineDescriptorBase, GPUObjectDescriptorBase);

jb_Any GPUPipelineDescriptorBase_layout(const GPUPipelineDescriptorBase *self);

void GPUPipelineDescriptorBase_set_layout(GPUPipelineDescriptorBase* self, jb_Any * value);

GPUPipelineDescriptorBase GPUPipelineDescriptorBase_new();

#ifdef __cplusplus
}
#endif
