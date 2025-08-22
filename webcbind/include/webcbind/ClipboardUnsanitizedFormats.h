#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ClipboardUnsanitizedFormats */
DECLARE_EMLITE_TYPE(ClipboardUnsanitizedFormats, em_Val);

/** @brief Getter of the unsanitized property */
jb_Array ClipboardUnsanitizedFormats_unsanitized(const ClipboardUnsanitizedFormats *self);

/** @brief Setter of the unsanitized property */
void ClipboardUnsanitizedFormats_set_unsanitized(ClipboardUnsanitizedFormats* self, jb_Array * value);

/** @brief Constructor of the ClipboardUnsanitizedFormats dictionary type */
ClipboardUnsanitizedFormats ClipboardUnsanitizedFormats_new();

#ifdef __cplusplus
}
#endif
