#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGComponentTransferFunctionElement.h"
#include "enums.h"


typedef struct {
  SVGComponentTransferFunctionElement inner;
} SVGFEFuncAElement;


DECLARE_EMLITE_TYPE(SVGFEFuncAElement, SVGComponentTransferFunctionElement);
