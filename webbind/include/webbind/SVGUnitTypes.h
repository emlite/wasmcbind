#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SVGUnitTypes;


DECLARE_EMLITE_TYPE(SVGUnitTypes, em_Val);
