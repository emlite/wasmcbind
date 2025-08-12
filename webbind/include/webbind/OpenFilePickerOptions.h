#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FilePickerOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type OpenFilePickerOptions */
DECLARE_EMLITE_TYPE(OpenFilePickerOptions, FilePickerOptions);

/** @brief Getter of the multiple property */
bool OpenFilePickerOptions_multiple(const OpenFilePickerOptions *self);

/** @brief Setter of the multiple property */
void OpenFilePickerOptions_set_multiple(OpenFilePickerOptions* self, bool value);

/** @brief Constructor of the OpenFilePickerOptions dictionary type */
OpenFilePickerOptions OpenFilePickerOptions_new();

#ifdef __cplusplus
}
#endif
