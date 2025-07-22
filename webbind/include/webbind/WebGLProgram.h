#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WebGLObject.h"
#include "enums.h"


typedef struct {
  WebGLObject inner;
} WebGLProgram;


DECLARE_EMLITE_TYPE(WebGLProgram, WebGLObject);
