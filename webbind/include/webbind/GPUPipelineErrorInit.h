#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GPUPipelineErrorInit, em_Val);

GPUPipelineErrorReason GPUPipelineErrorInit_reason(const GPUPipelineErrorInit *self);

void GPUPipelineErrorInit_set_reason(GPUPipelineErrorInit* self, GPUPipelineErrorReason * value);

GPUPipelineErrorInit GPUPipelineErrorInit_new();

#ifdef __cplusplus
}
#endif
