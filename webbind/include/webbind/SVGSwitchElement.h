#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"


typedef struct {
  SVGGraphicsElement inner;
} SVGSwitchElement;


DECLARE_EMLITE_TYPE(SVGSwitchElement, SVGGraphicsElement);
