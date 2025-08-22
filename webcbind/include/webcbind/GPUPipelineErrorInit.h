#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GPUPipelineErrorInit */
DECLARE_EMLITE_TYPE(GPUPipelineErrorInit, em_Val);

/** @brief Getter of the reason property */
GPUPipelineErrorReason GPUPipelineErrorInit_reason(const GPUPipelineErrorInit *self);

/** @brief Setter of the reason property */
void GPUPipelineErrorInit_set_reason(GPUPipelineErrorInit* self, GPUPipelineErrorReason * value);

/** @brief Constructor of the GPUPipelineErrorInit dictionary type */
GPUPipelineErrorInit GPUPipelineErrorInit_new();

#ifdef __cplusplus
}
#endif
