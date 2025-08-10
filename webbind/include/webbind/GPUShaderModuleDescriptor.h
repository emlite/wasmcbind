#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUObjectDescriptorBase.h"
#include "GPUShaderModuleCompilationHint.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUShaderModuleDescriptor, GPUObjectDescriptorBase);

jb_String GPUShaderModuleDescriptor_code(const GPUShaderModuleDescriptor *self);

void GPUShaderModuleDescriptor_set_code(GPUShaderModuleDescriptor* self, jb_String * value);

jb_Array GPUShaderModuleDescriptor_compilationHints(const GPUShaderModuleDescriptor *self);

void GPUShaderModuleDescriptor_set_compilationHints(GPUShaderModuleDescriptor* self, jb_Array * value);

GPUShaderModuleDescriptor GPUShaderModuleDescriptor_new();

#ifdef __cplusplus
}
#endif
