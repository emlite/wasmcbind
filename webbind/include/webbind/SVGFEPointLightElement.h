#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SVGElement.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SVGAnimatedNumber SVGAnimatedNumber;

DECLARE_EMLITE_TYPE(SVGFEPointLightElement, SVGElement);

SVGAnimatedNumber SVGFEPointLightElement_x(const SVGFEPointLightElement *self);

SVGAnimatedNumber SVGFEPointLightElement_y(const SVGFEPointLightElement *self);

SVGAnimatedNumber SVGFEPointLightElement_z(const SVGFEPointLightElement *self);

#ifdef __cplusplus
}
#endif
