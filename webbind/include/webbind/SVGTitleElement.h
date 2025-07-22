#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"


typedef struct {
  SVGElement inner;
} SVGTitleElement;


DECLARE_EMLITE_TYPE(SVGTitleElement, SVGElement);
