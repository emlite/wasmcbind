#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct GPUCompilationInfo GPUCompilationInfo;


typedef struct {
  em_Val inner;
} GPUShaderModule;


DECLARE_EMLITE_TYPE(GPUShaderModule, em_Val);

jb_Promise GPUShaderModule_getCompilationInfo(GPUShaderModule* self );

jb_USVString GPUShaderModule_label( const GPUShaderModule *self);

void GPUShaderModule_set_label(GPUShaderModule* self, const jb_USVString* value);
