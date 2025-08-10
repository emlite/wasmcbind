#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGGraphicsElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct DOMPointInit DOMPointInit;
typedef struct DOMPoint DOMPoint;

DECLARE_EMLITE_TYPE(SVGGeometryElement, SVGGraphicsElement);

SVGAnimatedNumber SVGGeometryElement_pathLength(const SVGGeometryElement *self);

bool SVGGeometryElement_isPointInFill0(SVGGeometryElement* self );

bool SVGGeometryElement_isPointInFill1(SVGGeometryElement* self , DOMPointInit * point);

bool SVGGeometryElement_isPointInStroke0(SVGGeometryElement* self );

bool SVGGeometryElement_isPointInStroke1(SVGGeometryElement* self , DOMPointInit * point);

float SVGGeometryElement_getTotalLength(SVGGeometryElement* self );

DOMPoint SVGGeometryElement_getPointAtLength(SVGGeometryElement* self , float distance);

#ifdef __cplusplus
}
#endif
