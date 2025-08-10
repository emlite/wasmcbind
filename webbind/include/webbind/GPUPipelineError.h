#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUPipelineErrorInit GPUPipelineErrorInit;

DECLARE_EMLITE_TYPE(GPUPipelineError, DOMException);

GPUPipelineError GPUPipelineError_new0();

GPUPipelineError GPUPipelineError_new1(jb_String * message);

GPUPipelineError GPUPipelineError_new2(jb_String * message, GPUPipelineErrorInit * options);

GPUPipelineErrorReason GPUPipelineError_reason(const GPUPipelineError *self);

#ifdef __cplusplus
}
#endif
