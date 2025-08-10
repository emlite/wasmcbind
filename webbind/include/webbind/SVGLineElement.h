#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGeometryElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedLength SVGAnimatedLength;

DECLARE_EMLITE_TYPE(SVGLineElement, SVGGeometryElement);

SVGAnimatedLength SVGLineElement_x1(const SVGLineElement *self);

SVGAnimatedLength SVGLineElement_y1(const SVGLineElement *self);

SVGAnimatedLength SVGLineElement_x2(const SVGLineElement *self);

SVGAnimatedLength SVGLineElement_y2(const SVGLineElement *self);

#ifdef __cplusplus
}
#endif
