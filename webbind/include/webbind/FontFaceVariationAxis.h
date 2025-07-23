#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(FontFaceVariationAxis, em_Val);

jb_DOMString FontFaceVariationAxis_name(const FontFaceVariationAxis *self);

jb_DOMString FontFaceVariationAxis_axisTag(const FontFaceVariationAxis *self);

double FontFaceVariationAxis_minimumValue(const FontFaceVariationAxis *self);

double FontFaceVariationAxis_maximumValue(const FontFaceVariationAxis *self);

double FontFaceVariationAxis_defaultValue(const FontFaceVariationAxis *self);
