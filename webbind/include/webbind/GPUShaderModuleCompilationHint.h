#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUShaderModuleCompilationHint */
DECLARE_EMLITE_TYPE(GPUShaderModuleCompilationHint, em_Val);

/** @brief Getter of the entryPoint property */
jb_String GPUShaderModuleCompilationHint_entryPoint(const GPUShaderModuleCompilationHint *self);

/** @brief Setter of the entryPoint property */
void GPUShaderModuleCompilationHint_set_entryPoint(GPUShaderModuleCompilationHint* self, jb_String * value);

/** @brief Getter of the layout property */
jb_Any GPUShaderModuleCompilationHint_layout(const GPUShaderModuleCompilationHint *self);

/** @brief Setter of the layout property */
void GPUShaderModuleCompilationHint_set_layout(GPUShaderModuleCompilationHint* self, jb_Any * value);

/** @brief Constructor of the GPUShaderModuleCompilationHint dictionary type */
GPUShaderModuleCompilationHint GPUShaderModuleCompilationHint_new();

#ifdef __cplusplus
}
#endif
