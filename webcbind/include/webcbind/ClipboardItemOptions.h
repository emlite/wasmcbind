#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ClipboardItemOptions */
DECLARE_EMLITE_TYPE(ClipboardItemOptions, em_Val);

/** @brief Getter of the presentationStyle property */
PresentationStyle ClipboardItemOptions_presentationStyle(const ClipboardItemOptions *self);

/** @brief Setter of the presentationStyle property */
void ClipboardItemOptions_set_presentationStyle(ClipboardItemOptions* self, PresentationStyle * value);

/** @brief Constructor of the ClipboardItemOptions dictionary type */
ClipboardItemOptions ClipboardItemOptions_new();

#ifdef __cplusplus
}
#endif
