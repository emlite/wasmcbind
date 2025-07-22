#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGTextPositioningElement.h"
#include "enums.h"


typedef struct {
  SVGTextPositioningElement inner;
} SVGTSpanElement;


DECLARE_EMLITE_TYPE(SVGTSpanElement, SVGTextPositioningElement);
