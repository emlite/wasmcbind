#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;

DECLARE_EMLITE_TYPE(SVGStopElement, SVGElement);

SVGAnimatedNumber SVGStopElement_offset(const SVGStopElement *self);

#ifdef __cplusplus
}
#endif
