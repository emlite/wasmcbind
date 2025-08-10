#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AbortSignal AbortSignal;

DECLARE_EMLITE_TYPE(ColorSelectionOptions, em_Val);

AbortSignal ColorSelectionOptions_signal(const ColorSelectionOptions *self);

void ColorSelectionOptions_set_signal(ColorSelectionOptions* self, AbortSignal * value);

ColorSelectionOptions ColorSelectionOptions_new();

#ifdef __cplusplus
}
#endif
