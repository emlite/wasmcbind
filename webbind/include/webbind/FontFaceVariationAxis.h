#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} FontFaceVariationAxis;


DECLARE_EMLITE_TYPE(FontFaceVariationAxis, em_Val);

jb_DOMString FontFaceVariationAxis_name( const FontFaceVariationAxis *self);

jb_DOMString FontFaceVariationAxis_axisTag( const FontFaceVariationAxis *self);

double FontFaceVariationAxis_minimumValue( const FontFaceVariationAxis *self);

double FontFaceVariationAxis_maximumValue( const FontFaceVariationAxis *self);

double FontFaceVariationAxis_defaultValue( const FontFaceVariationAxis *self);
