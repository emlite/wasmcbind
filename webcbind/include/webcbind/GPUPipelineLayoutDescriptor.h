#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBindGroupLayout GPUBindGroupLayout;

/** @brief Dictionary type GPUPipelineLayoutDescriptor */
DECLARE_EMLITE_TYPE(GPUPipelineLayoutDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the bindGroupLayouts property */
jb_Array GPUPipelineLayoutDescriptor_bindGroupLayouts(const GPUPipelineLayoutDescriptor *self);

/** @brief Setter of the bindGroupLayouts property */
void GPUPipelineLayoutDescriptor_set_bindGroupLayouts(GPUPipelineLayoutDescriptor* self, jb_Array * value);

/** @brief Constructor of the GPUPipelineLayoutDescriptor dictionary type */
GPUPipelineLayoutDescriptor GPUPipelineLayoutDescriptor_new();

#ifdef __cplusplus
}
#endif
