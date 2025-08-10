#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FilePickerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(SaveFilePickerOptions, FilePickerOptions);

jb_String SaveFilePickerOptions_suggestedName(const SaveFilePickerOptions *self);

void SaveFilePickerOptions_set_suggestedName(SaveFilePickerOptions* self, jb_String * value);

SaveFilePickerOptions SaveFilePickerOptions_new();

#ifdef __cplusplus
}
#endif
