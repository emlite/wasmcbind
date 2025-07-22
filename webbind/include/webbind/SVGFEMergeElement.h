#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGFEMergeElement, SVGElement);

SVGAnimatedLength SVGFEMergeElement_x( const SVGFEMergeElement *self);

SVGAnimatedLength SVGFEMergeElement_y( const SVGFEMergeElement *self);

SVGAnimatedLength SVGFEMergeElement_width( const SVGFEMergeElement *self);

SVGAnimatedLength SVGFEMergeElement_height( const SVGFEMergeElement *self);

SVGAnimatedString SVGFEMergeElement_result( const SVGFEMergeElement *self);
