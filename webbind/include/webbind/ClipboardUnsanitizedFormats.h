#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ClipboardUnsanitizedFormats, em_Val);

jb_Array ClipboardUnsanitizedFormats_unsanitized(const ClipboardUnsanitizedFormats *self);

void ClipboardUnsanitizedFormats_set_unsanitized(ClipboardUnsanitizedFormats* self, jb_Array * value);

ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats_new();

#ifdef __cplusplus
}
#endif
