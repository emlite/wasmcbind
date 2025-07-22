#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "WebGLObject.h"
#include "enums.h"


typedef struct {
  WebGLObject inner;
} WebGLTimerQueryEXT;


DECLARE_EMLITE_TYPE(WebGLTimerQueryEXT, WebGLObject);
