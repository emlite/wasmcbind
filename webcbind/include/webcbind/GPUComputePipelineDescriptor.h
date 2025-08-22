#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUPipelineDescriptorBase.h"
#include "GPUProgrammableStage.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUComputePipelineDescriptor */
DECLARE_EMLITE_TYPE(GPUComputePipelineDescriptor, GPUPipelineDescriptorBase);

/** @brief Getter of the compute property */
GPUProgrammableStage GPUComputePipelineDescriptor_compute(const GPUComputePipelineDescriptor *self);

/** @brief Setter of the compute property */
void GPUComputePipelineDescriptor_set_compute(GPUComputePipelineDescriptor* self, GPUProgrammableStage * value);

/** @brief Constructor of the GPUComputePipelineDescriptor dictionary type */
GPUComputePipelineDescriptor GPUComputePipelineDescriptor_new();

#ifdef __cplusplus
}
#endif
