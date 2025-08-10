#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUShaderModule GPUShaderModule;

DECLARE_EMLITE_TYPE(GPUProgrammableStage, em_Val);

GPUShaderModule GPUProgrammableStage_module_(const GPUProgrammableStage *self);

void GPUProgrammableStage_set_module_(GPUProgrammableStage* self, GPUShaderModule * value);

jb_String GPUProgrammableStage_entryPoint(const GPUProgrammableStage *self);

void GPUProgrammableStage_set_entryPoint(GPUProgrammableStage* self, jb_String * value);

jb_Object GPUProgrammableStage_constants(const GPUProgrammableStage *self);

void GPUProgrammableStage_set_constants(GPUProgrammableStage* self, jb_Object * value);

GPUProgrammableStage GPUProgrammableStage_new();

#ifdef __cplusplus
}
#endif
