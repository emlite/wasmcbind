#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUShaderModule GPUShaderModule;

/** @brief Dictionary type GPUProgrammableStage */
DECLARE_EMLITE_TYPE(GPUProgrammableStage, em_Val);

/** @brief Getter of the module property */
GPUShaderModule GPUProgrammableStage_module_(const GPUProgrammableStage *self);

/** @brief Setter of the module property */
void GPUProgrammableStage_set_module_(GPUProgrammableStage* self, GPUShaderModule * value);

/** @brief Getter of the entryPoint property */
jb_String GPUProgrammableStage_entryPoint(const GPUProgrammableStage *self);

/** @brief Setter of the entryPoint property */
void GPUProgrammableStage_set_entryPoint(GPUProgrammableStage* self, jb_String * value);

/** @brief Getter of the constants property */
jb_Object GPUProgrammableStage_constants(const GPUProgrammableStage *self);

/** @brief Setter of the constants property */
void GPUProgrammableStage_set_constants(GPUProgrammableStage* self, jb_Object * value);

/** @brief Constructor of the GPUProgrammableStage dictionary type */
GPUProgrammableStage GPUProgrammableStage_new();

#ifdef __cplusplus
}
#endif
