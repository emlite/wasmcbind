#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGAnimationElement.h"
#include "enums.h"


typedef struct {
  SVGAnimationElement inner;
} SVGAnimateMotionElement;


DECLARE_EMLITE_TYPE(SVGAnimateMotionElement, SVGAnimationElement);
