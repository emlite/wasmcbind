#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedNumber SVGAnimatedNumber;
typedef struct SVGAnimatedInteger SVGAnimatedInteger;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedString SVGAnimatedString;


typedef struct {
  SVGElement inner;
} SVGFETurbulenceElement;


DECLARE_EMLITE_TYPE(SVGFETurbulenceElement, SVGElement);

SVGAnimatedNumber SVGFETurbulenceElement_baseFrequencyX( const SVGFETurbulenceElement *self);

SVGAnimatedNumber SVGFETurbulenceElement_baseFrequencyY( const SVGFETurbulenceElement *self);

SVGAnimatedInteger SVGFETurbulenceElement_numOctaves( const SVGFETurbulenceElement *self);

SVGAnimatedNumber SVGFETurbulenceElement_seed( const SVGFETurbulenceElement *self);

SVGAnimatedEnumeration SVGFETurbulenceElement_stitchTiles( const SVGFETurbulenceElement *self);

SVGAnimatedEnumeration SVGFETurbulenceElement_type( const SVGFETurbulenceElement *self);

SVGAnimatedLength SVGFETurbulenceElement_x( const SVGFETurbulenceElement *self);

SVGAnimatedLength SVGFETurbulenceElement_y( const SVGFETurbulenceElement *self);

SVGAnimatedLength SVGFETurbulenceElement_width( const SVGFETurbulenceElement *self);

SVGAnimatedLength SVGFETurbulenceElement_height( const SVGFETurbulenceElement *self);

SVGAnimatedString SVGFETurbulenceElement_result( const SVGFETurbulenceElement *self);
