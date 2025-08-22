#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

/** @brief Dictionary type ColorSelectionOptions */
DECLARE_EMLITE_TYPE(ColorSelectionOptions, em_Val);

/** @brief Getter of the signal property */
AbortSignal ColorSelectionOptions_signal(const ColorSelectionOptions *self);

/** @brief Setter of the signal property */
void ColorSelectionOptions_set_signal(ColorSelectionOptions* self, AbortSignal * value);

/** @brief Constructor of the ColorSelectionOptions dictionary type */
ColorSelectionOptions ColorSelectionOptions_new();

#ifdef __cplusplus
}
#endif
