#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SVGLengthList SVGLengthList;


typedef struct {
  em_Val inner;
} SVGAnimatedLengthList;


DECLARE_EMLITE_TYPE(SVGAnimatedLengthList, em_Val);

SVGLengthList SVGAnimatedLengthList_baseVal( const SVGAnimatedLengthList *self);

SVGLengthList SVGAnimatedLengthList_animVal( const SVGAnimatedLengthList *self);
