#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUComputePassTimestampWrites.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUComputePassDescriptor */
DECLARE_EMLITE_TYPE(GPUComputePassDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the timestampWrites property */
GPUComputePassTimestampWrites GPUComputePassDescriptor_timestampWrites(const GPUComputePassDescriptor *self);

/** @brief Setter of the timestampWrites property */
void GPUComputePassDescriptor_set_timestampWrites(GPUComputePassDescriptor* self, GPUComputePassTimestampWrites * value);

/** @brief Constructor of the GPUComputePassDescriptor dictionary type */
GPUComputePassDescriptor GPUComputePassDescriptor_new();

#ifdef __cplusplus
}
#endif
