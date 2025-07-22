#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGeometryElement.h"
#include "enums.h"

typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGEllipseElement, SVGGeometryElement);

SVGAnimatedLength SVGEllipseElement_cx( const SVGEllipseElement *self);

SVGAnimatedLength SVGEllipseElement_cy( const SVGEllipseElement *self);

SVGAnimatedLength SVGEllipseElement_rx( const SVGEllipseElement *self);

SVGAnimatedLength SVGEllipseElement_ry( const SVGEllipseElement *self);
