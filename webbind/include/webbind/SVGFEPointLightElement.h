#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedNumber SVGAnimatedNumber;


typedef struct {
  SVGElement inner;
} SVGFEPointLightElement;


DECLARE_EMLITE_TYPE(SVGFEPointLightElement, SVGElement);

SVGAnimatedNumber SVGFEPointLightElement_x( const SVGFEPointLightElement *self);

SVGAnimatedNumber SVGFEPointLightElement_y( const SVGFEPointLightElement *self);

SVGAnimatedNumber SVGFEPointLightElement_z( const SVGFEPointLightElement *self);
