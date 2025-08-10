#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUCanvasToneMapping, em_Val);

GPUCanvasToneMappingMode GPUCanvasToneMapping_mode(const GPUCanvasToneMapping *self);

void GPUCanvasToneMapping_set_mode(GPUCanvasToneMapping* self, GPUCanvasToneMappingMode * value);

GPUCanvasToneMapping GPUCanvasToneMapping_new();

#ifdef __cplusplus
}
#endif
