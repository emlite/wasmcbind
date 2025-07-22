#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct GPUError GPUError;


typedef struct {
  Event inner;
} GPUUncapturedErrorEvent;


DECLARE_EMLITE_TYPE(GPUUncapturedErrorEvent, Event);

GPUUncapturedErrorEvent GPUUncapturedErrorEvent_new(const jb_DOMString* type, const jb_Any* gpuUncapturedErrorEventInitDict);

GPUError GPUUncapturedErrorEvent_error( const GPUUncapturedErrorEvent *self);
