#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBindGroupLayout GPUBindGroupLayout;

DECLARE_EMLITE_TYPE(GPUPipelineLayoutDescriptor, GPUObjectDescriptorBase);

jb_Array GPUPipelineLayoutDescriptor_bindGroupLayouts(const GPUPipelineLayoutDescriptor *self);

void GPUPipelineLayoutDescriptor_set_bindGroupLayouts(GPUPipelineLayoutDescriptor* self, jb_Array * value);

GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor_new();

#ifdef __cplusplus
}
#endif
