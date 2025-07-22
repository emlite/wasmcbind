#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedString SVGAnimatedString;


typedef struct {
  SVGElement inner;
} SVGFEMergeNodeElement;


DECLARE_EMLITE_TYPE(SVGFEMergeNodeElement, SVGElement);

SVGAnimatedString SVGFEMergeNodeElement_in1( const SVGFEMergeNodeElement *self);
