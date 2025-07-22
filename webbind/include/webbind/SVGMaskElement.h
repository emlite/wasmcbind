#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;


typedef struct {
  SVGElement inner;
} SVGMaskElement;


DECLARE_EMLITE_TYPE(SVGMaskElement, SVGElement);

SVGAnimatedEnumeration SVGMaskElement_maskUnits( const SVGMaskElement *self);

SVGAnimatedEnumeration SVGMaskElement_maskContentUnits( const SVGMaskElement *self);

SVGAnimatedLength SVGMaskElement_x( const SVGMaskElement *self);

SVGAnimatedLength SVGMaskElement_y( const SVGMaskElement *self);

SVGAnimatedLength SVGMaskElement_width( const SVGMaskElement *self);

SVGAnimatedLength SVGMaskElement_height( const SVGMaskElement *self);
