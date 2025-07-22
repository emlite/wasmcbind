#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SVGPreserveAspectRatio SVGPreserveAspectRatio;


typedef struct {
  em_Val inner;
} SVGAnimatedPreserveAspectRatio;


DECLARE_EMLITE_TYPE(SVGAnimatedPreserveAspectRatio, em_Val);

SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio_baseVal( const SVGAnimatedPreserveAspectRatio *self);

SVGPreserveAspectRatio SVGAnimatedPreserveAspectRatio_animVal( const SVGAnimatedPreserveAspectRatio *self);
