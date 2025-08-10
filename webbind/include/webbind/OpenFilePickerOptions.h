#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FilePickerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(OpenFilePickerOptions, FilePickerOptions);

bool OpenFilePickerOptions_multiple(const OpenFilePickerOptions *self);

void OpenFilePickerOptions_set_multiple(OpenFilePickerOptions* self, bool value);

OpenFilePickerOptions OpenFilePickerOptions_new();

#ifdef __cplusplus
}
#endif
