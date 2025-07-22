#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "GPUError.h"
#include "enums.h"


typedef struct {
  GPUError inner;
} GPUInternalError;


DECLARE_EMLITE_TYPE(GPUInternalError, GPUError);

GPUInternalError GPUInternalError_new(const jb_DOMString* message);
