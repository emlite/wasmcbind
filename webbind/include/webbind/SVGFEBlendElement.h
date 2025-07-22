#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedString SVGAnimatedString;
typedef struct SVGAnimatedEnumeration SVGAnimatedEnumeration;
typedef struct SVGAnimatedLength SVGAnimatedLength;


typedef struct {
  SVGElement inner;
} SVGFEBlendElement;


DECLARE_EMLITE_TYPE(SVGFEBlendElement, SVGElement);

SVGAnimatedString SVGFEBlendElement_in1( const SVGFEBlendElement *self);

SVGAnimatedString SVGFEBlendElement_in2( const SVGFEBlendElement *self);

SVGAnimatedEnumeration SVGFEBlendElement_mode( const SVGFEBlendElement *self);

SVGAnimatedLength SVGFEBlendElement_x( const SVGFEBlendElement *self);

SVGAnimatedLength SVGFEBlendElement_y( const SVGFEBlendElement *self);

SVGAnimatedLength SVGFEBlendElement_width( const SVGFEBlendElement *self);

SVGAnimatedLength SVGFEBlendElement_height( const SVGFEBlendElement *self);

SVGAnimatedString SVGFEBlendElement_result( const SVGFEBlendElement *self);
