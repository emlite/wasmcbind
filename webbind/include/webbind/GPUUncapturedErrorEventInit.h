#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUError GPUError;

DECLARE_EMLITE_TYPE(GPUUncapturedErrorEventInit, EventInit);

GPUError GPUUncapturedErrorEventInit_error(const GPUUncapturedErrorEventInit *self);

void GPUUncapturedErrorEventInit_set_error(GPUUncapturedErrorEventInit* self, GPUError * value);

GPUUncapturedErrorEventInit GPUUncapturedErrorEventInit_new();

#ifdef __cplusplus
}
#endif
