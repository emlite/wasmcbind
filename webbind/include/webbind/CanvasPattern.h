#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGSVGElement.h"
#include "enums.h"


typedef struct {
  em_Val inner;
} CanvasPattern;


DECLARE_EMLITE_TYPE(CanvasPattern, em_Val);

jb_Undefined CanvasPattern_setTransform(CanvasPattern* self );

jb_Undefined CanvasPattern_setTransform(CanvasPattern* self , const DOMMatrix2DInit* transform);
