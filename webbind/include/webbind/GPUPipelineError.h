#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "DOMException.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(GPUPipelineError, DOMException);

GPUPipelineError GPUPipelineError_new0();

GPUPipelineError GPUPipelineError_new1(jb_DOMString * message);

GPUPipelineError GPUPipelineError_new2(jb_DOMString * message, jb_Any * options);

GPUPipelineErrorReason GPUPipelineError_reason( const GPUPipelineError *self);
