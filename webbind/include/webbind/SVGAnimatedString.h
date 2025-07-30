#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(SVGAnimatedString, em_Val);

jb_String SVGAnimatedString_baseVal(const SVGAnimatedString *self);

void SVGAnimatedString_set_baseVal(SVGAnimatedString* self, jb_String * value);

jb_String SVGAnimatedString_animVal(const SVGAnimatedString *self);
