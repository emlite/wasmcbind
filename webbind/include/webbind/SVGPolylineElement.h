#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGeometryElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGPointList SVGPointList;

DECLARE_EMLITE_TYPE(SVGPolylineElement, SVGGeometryElement);

SVGPointList SVGPolylineElement_points(const SVGPolylineElement *self);

SVGPointList SVGPolylineElement_animatedPoints(const SVGPolylineElement *self);

#ifdef __cplusplus
}
#endif
