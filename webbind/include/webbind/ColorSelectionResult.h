#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ColorSelectionResult, em_Val);

jb_String ColorSelectionResult_sRGBHex(const ColorSelectionResult *self);

void ColorSelectionResult_set_sRGBHex(ColorSelectionResult* self, jb_String * value);

ColorSelectionResult ColorSelectionResult_new();

#ifdef __cplusplus
}
#endif
