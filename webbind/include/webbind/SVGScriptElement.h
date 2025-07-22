#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGElement.h"
#include "enums.h"

typedef struct SVGAnimatedString SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGScriptElement, SVGElement);

jb_DOMString SVGScriptElement_type( const SVGScriptElement *self);

void SVGScriptElement_set_type(SVGScriptElement* self, jb_DOMString * value);

jb_DOMString SVGScriptElement_crossOrigin( const SVGScriptElement *self);

void SVGScriptElement_set_crossOrigin(SVGScriptElement* self, jb_DOMString * value);

SVGAnimatedString SVGScriptElement_href( const SVGScriptElement *self);
