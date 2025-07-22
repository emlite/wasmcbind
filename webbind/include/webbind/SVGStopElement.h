#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedNumber SVGAnimatedNumber;


typedef struct {
  SVGElement inner;
} SVGStopElement;


DECLARE_EMLITE_TYPE(SVGStopElement, SVGElement);

SVGAnimatedNumber SVGStopElement_offset( const SVGStopElement *self);
