#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WebGLUniformLocation;


DECLARE_EMLITE_TYPE(WebGLUniformLocation, em_Val);
