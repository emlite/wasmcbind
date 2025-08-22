#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ColorSelectionResult */
DECLARE_EMLITE_TYPE(ColorSelectionResult, em_Val);

/** @brief Getter of the sRGBHex property */
jb_String ColorSelectionResult_sRGBHex(const ColorSelectionResult *self);

/** @brief Setter of the sRGBHex property */
void ColorSelectionResult_set_sRGBHex(ColorSelectionResult* self, jb_String * value);

/** @brief Constructor of the ColorSelectionResult dictionary type */
ColorSelectionResult ColorSelectionResult_new();

#ifdef __cplusplus
}
#endif
