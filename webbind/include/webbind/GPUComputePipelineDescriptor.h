#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUPipelineDescriptorBase.h"
#include "GPUProgrammableStage.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUComputePipelineDescriptor, GPUPipelineDescriptorBase);

GPUProgrammableStage GPUComputePipelineDescriptor_compute(const GPUComputePipelineDescriptor *self);

void GPUComputePipelineDescriptor_set_compute(GPUComputePipelineDescriptor* self, GPUProgrammableStage * value);

GPUComputePipelineDescriptor GPUComputePipelineDescriptor_new();

#ifdef __cplusplus
}
#endif
