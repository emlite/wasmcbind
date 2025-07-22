#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGAnimationElement.h"
#include "enums.h"


typedef struct {
  SVGAnimationElement inner;
} SVGAnimateTransformElement;


DECLARE_EMLITE_TYPE(SVGAnimateTransformElement, SVGAnimationElement);
