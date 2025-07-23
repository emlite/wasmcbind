#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGeometryElement.h"
#include "enums.h"

typedef struct SVGAnimatedLength SVGAnimatedLength;


DECLARE_EMLITE_TYPE(SVGRectElement, SVGGeometryElement);

SVGAnimatedLength SVGRectElement_x(const SVGRectElement *self);

SVGAnimatedLength SVGRectElement_y(const SVGRectElement *self);

SVGAnimatedLength SVGRectElement_width(const SVGRectElement *self);

SVGAnimatedLength SVGRectElement_height(const SVGRectElement *self);

SVGAnimatedLength SVGRectElement_rx(const SVGRectElement *self);

SVGAnimatedLength SVGRectElement_ry(const SVGRectElement *self);
