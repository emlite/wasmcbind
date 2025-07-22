#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;


typedef struct {
  SVGElement inner;
} SVGViewElement;


DECLARE_EMLITE_TYPE(SVGViewElement, SVGElement);

SVGAnimatedRect SVGViewElement_viewBox( const SVGViewElement *self);

SVGAnimatedPreserveAspectRatio SVGViewElement_preserveAspectRatio( const SVGViewElement *self);
