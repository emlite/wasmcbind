#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"


typedef struct {
  SVGGraphicsElement inner;
} SVGDefsElement;


DECLARE_EMLITE_TYPE(SVGDefsElement, SVGGraphicsElement);
