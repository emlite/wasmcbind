#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SVGAnimatedInteger;


DECLARE_EMLITE_TYPE(SVGAnimatedInteger, em_Val);

long SVGAnimatedInteger_baseVal( const SVGAnimatedInteger *self);

void SVGAnimatedInteger_set_baseVal(SVGAnimatedInteger* self, long value);

long SVGAnimatedInteger_animVal( const SVGAnimatedInteger *self);
