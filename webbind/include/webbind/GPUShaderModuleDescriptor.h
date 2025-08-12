#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUShaderModuleCompilationHint.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUShaderModuleDescriptor */
DECLARE_EMLITE_TYPE(GPUShaderModuleDescriptor, GPUObjectDescriptorBase);

/** @brief Getter of the code property */
jb_String GPUShaderModuleDescriptor_code(const GPUShaderModuleDescriptor *self);

/** @brief Setter of the code property */
void GPUShaderModuleDescriptor_set_code(GPUShaderModuleDescriptor* self, jb_String * value);

/** @brief Getter of the compilationHints property */
jb_Array GPUShaderModuleDescriptor_compilationHints(const GPUShaderModuleDescriptor *self);

/** @brief Setter of the compilationHints property */
void GPUShaderModuleDescriptor_set_compilationHints(GPUShaderModuleDescriptor* self, jb_Array * value);

/** @brief Constructor of the GPUShaderModuleDescriptor dictionary type */
GPUShaderModuleDescriptor GPUShaderModuleDescriptor_new();

#ifdef __cplusplus
}
#endif
