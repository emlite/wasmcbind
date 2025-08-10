#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedString SVGAnimatedString;

DECLARE_EMLITE_TYPE(SVGMPathElement, SVGElement);

SVGAnimatedString SVGMPathElement_href(const SVGMPathElement *self);

#ifdef __cplusplus
}
#endif
