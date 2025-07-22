#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SVGAnimatedString;


DECLARE_EMLITE_TYPE(SVGAnimatedString, em_Val);

jb_DOMString SVGAnimatedString_baseVal( const SVGAnimatedString *self);

void SVGAnimatedString_set_baseVal(SVGAnimatedString* self, const jb_DOMString* value);

jb_DOMString SVGAnimatedString_animVal( const SVGAnimatedString *self);
