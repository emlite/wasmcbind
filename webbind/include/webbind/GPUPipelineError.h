#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"


typedef struct {
  DOMException inner;
} GPUPipelineError;


DECLARE_EMLITE_TYPE(GPUPipelineError, DOMException);

GPUPipelineError GPUPipelineError_new();

GPUPipelineError GPUPipelineError_new(const jb_DOMString* message);

GPUPipelineError GPUPipelineError_new(const jb_DOMString* message, const jb_Any* options);

GPUPipelineErrorReason GPUPipelineError_reason( const GPUPipelineError *self);
