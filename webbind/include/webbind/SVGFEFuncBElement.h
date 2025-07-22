#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGComponentTransferFunctionElement.h"
#include "enums.h"


typedef struct {
  SVGComponentTransferFunctionElement inner;
} SVGFEFuncBElement;


DECLARE_EMLITE_TYPE(SVGFEFuncBElement, SVGComponentTransferFunctionElement);
