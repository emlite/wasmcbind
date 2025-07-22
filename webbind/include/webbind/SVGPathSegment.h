#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} SVGPathSegment;


DECLARE_EMLITE_TYPE(SVGPathSegment, em_Val);

jb_DOMString SVGPathSegment_type( const SVGPathSegment *self);

void SVGPathSegment_set_type(SVGPathSegment* self, const jb_DOMString* value);

jb_FrozenArray SVGPathSegment_values( const SVGPathSegment *self);

void SVGPathSegment_set_values(SVGPathSegment* self, const jb_FrozenArray* value);
