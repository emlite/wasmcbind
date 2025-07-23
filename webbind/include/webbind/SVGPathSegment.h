#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(SVGPathSegment, em_Val);

jb_DOMString SVGPathSegment_type(const SVGPathSegment *self);

void SVGPathSegment_set_type(SVGPathSegment* self, jb_DOMString * value);

jb_FrozenArray SVGPathSegment_values(const SVGPathSegment *self);

void SVGPathSegment_set_values(SVGPathSegment* self, jb_FrozenArray * value);
