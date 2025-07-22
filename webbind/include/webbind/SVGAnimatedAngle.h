#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SVGAngle SVGAngle;


typedef struct {
  em_Val inner;
} SVGAnimatedAngle;


DECLARE_EMLITE_TYPE(SVGAnimatedAngle, em_Val);

SVGAngle SVGAnimatedAngle_baseVal( const SVGAnimatedAngle *self);

SVGAngle SVGAnimatedAngle_animVal( const SVGAnimatedAngle *self);
