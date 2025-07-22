#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} CanvasGradient;


DECLARE_EMLITE_TYPE(CanvasGradient, em_Val);

jb_Undefined CanvasGradient_addColorStop(CanvasGradient* self , double offset, const jb_DOMString* color);
