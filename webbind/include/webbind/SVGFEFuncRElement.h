#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGComponentTransferFunctionElement.h"
#include "enums.h"


typedef struct {
  SVGComponentTransferFunctionElement inner;
} SVGFEFuncRElement;


DECLARE_EMLITE_TYPE(SVGFEFuncRElement, SVGComponentTransferFunctionElement);
