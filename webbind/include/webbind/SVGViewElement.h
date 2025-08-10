#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedRect SVGAnimatedRect;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;

DECLARE_EMLITE_TYPE(SVGViewElement, SVGElement);

SVGAnimatedRect SVGViewElement_viewBox(const SVGViewElement *self);

SVGAnimatedPreserveAspectRatio SVGViewElement_preserveAspectRatio(const SVGViewElement *self);

#ifdef __cplusplus
}
#endif
