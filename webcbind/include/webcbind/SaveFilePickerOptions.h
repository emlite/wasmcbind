#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "FilePickerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SaveFilePickerOptions */
DECLARE_EMLITE_TYPE(SaveFilePickerOptions, FilePickerOptions);

/** @brief Getter of the suggestedName property */
jb_String SaveFilePickerOptions_suggestedName(const SaveFilePickerOptions *self);

/** @brief Setter of the suggestedName property */
void SaveFilePickerOptions_set_suggestedName(SaveFilePickerOptions* self, jb_String * value);

/** @brief Constructor of the SaveFilePickerOptions dictionary type */
SaveFilePickerOptions SaveFilePickerOptions_new();

#ifdef __cplusplus
}
#endif
