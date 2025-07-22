#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "GPUError.h"
#include "enums.h"


typedef struct {
  GPUError inner;
} GPUValidationError;


DECLARE_EMLITE_TYPE(GPUValidationError, GPUError);

GPUValidationError GPUValidationError_new(const jb_DOMString* message);
