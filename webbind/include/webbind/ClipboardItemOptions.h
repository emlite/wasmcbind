#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ClipboardItemOptions, em_Val);

PresentationStyle ClipboardItemOptions_presentationStyle(const ClipboardItemOptions *self);

void ClipboardItemOptions_set_presentationStyle(ClipboardItemOptions* self, PresentationStyle * value);

ClipboardItemOptions ClipboardItemOptions_new();

#ifdef __cplusplus
}
#endif
