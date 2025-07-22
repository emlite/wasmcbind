#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SVGLength SVGLength;


typedef struct {
  em_Val inner;
} SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGAnimatedLength, em_Val);

SVGLength SVGAnimatedLength_baseVal( const SVGAnimatedLength *self);

SVGLength SVGAnimatedLength_animVal( const SVGAnimatedLength *self);
