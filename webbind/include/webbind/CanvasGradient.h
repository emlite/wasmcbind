#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(CanvasGradient, em_Val);

jb_Undefined CanvasGradient_addColorStop(CanvasGradient* self , double offset, jb_DOMString * color);
