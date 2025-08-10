#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUUncapturedErrorEventInit GPUUncapturedErrorEventInit;
typedef struct GPUError GPUError;

DECLARE_EMLITE_TYPE(GPUUncapturedErrorEvent, Event);

GPUUncapturedErrorEvent GPUUncapturedErrorEvent_new(jb_String * type, GPUUncapturedErrorEventInit * gpuUncapturedErrorEventInitDict);

GPUError GPUUncapturedErrorEvent_error(const GPUUncapturedErrorEvent *self);

#ifdef __cplusplus
}
#endif
