#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUShaderModuleCompilationHint, em_Val);

jb_String GPUShaderModuleCompilationHint_entryPoint(const GPUShaderModuleCompilationHint *self);

void GPUShaderModuleCompilationHint_set_entryPoint(GPUShaderModuleCompilationHint* self, jb_String * value);

jb_Any GPUShaderModuleCompilationHint_layout(const GPUShaderModuleCompilationHint *self);

void GPUShaderModuleCompilationHint_set_layout(GPUShaderModuleCompilationHint* self, jb_Any * value);

GPUShaderModuleCompilationHint GPUShaderModuleCompilationHint_new();

#ifdef __cplusplus
}
#endif
