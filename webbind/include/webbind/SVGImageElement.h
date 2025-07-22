#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGGraphicsElement.h"
#include "enums.h"

typedef struct SVGAnimatedLength SVGAnimatedLength;
typedef struct SVGAnimatedPreserveAspectRatio SVGAnimatedPreserveAspectRatio;
typedef struct SVGAnimatedString SVGAnimatedString;


typedef struct {
  SVGGraphicsElement inner;
} SVGImageElement;


DECLARE_EMLITE_TYPE(SVGImageElement, SVGGraphicsElement);

SVGAnimatedLength SVGImageElement_x( const SVGImageElement *self);

SVGAnimatedLength SVGImageElement_y( const SVGImageElement *self);

SVGAnimatedLength SVGImageElement_width( const SVGImageElement *self);

SVGAnimatedLength SVGImageElement_height( const SVGImageElement *self);

SVGAnimatedPreserveAspectRatio SVGImageElement_preserveAspectRatio( const SVGImageElement *self);

jb_DOMString SVGImageElement_crossOrigin( const SVGImageElement *self);

void SVGImageElement_set_crossOrigin(SVGImageElement* self, const jb_DOMString* value);

SVGAnimatedString SVGImageElement_href( const SVGImageElement *self);
