#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedString SVGAnimatedString;


typedef struct {
  SVGElement inner;
} SVGMPathElement;


DECLARE_EMLITE_TYPE(SVGMPathElement, SVGElement);

SVGAnimatedString SVGMPathElement_href( const SVGMPathElement *self);
