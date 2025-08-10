#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUComputePassTimestampWrites.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUComputePassDescriptor, GPUObjectDescriptorBase);

GPUComputePassTimestampWrites GPUComputePassDescriptor_timestampWrites(const GPUComputePassDescriptor *self);

void GPUComputePassDescriptor_set_timestampWrites(GPUComputePassDescriptor* self, GPUComputePassTimestampWrites * value);

GPUComputePassDescriptor GPUComputePassDescriptor_new();

#ifdef __cplusplus
}
#endif
