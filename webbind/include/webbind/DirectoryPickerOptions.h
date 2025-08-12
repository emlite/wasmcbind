#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DirectoryPickerOptions */
DECLARE_EMLITE_TYPE(DirectoryPickerOptions, em_Val);

/** @brief Getter of the id property */
jb_String DirectoryPickerOptions_id(const DirectoryPickerOptions *self);

/** @brief Setter of the id property */
void DirectoryPickerOptions_set_id(DirectoryPickerOptions* self, jb_String * value);

/** @brief Getter of the startIn property */
jb_Any DirectoryPickerOptions_startIn(const DirectoryPickerOptions *self);

/** @brief Setter of the startIn property */
void DirectoryPickerOptions_set_startIn(DirectoryPickerOptions* self, jb_Any * value);

/** @brief Getter of the mode property */
FileSystemPermissionMode DirectoryPickerOptions_mode(const DirectoryPickerOptions *self);

/** @brief Setter of the mode property */
void DirectoryPickerOptions_set_mode(DirectoryPickerOptions* self, FileSystemPermissionMode * value);

/** @brief Constructor of the DirectoryPickerOptions dictionary type */
DirectoryPickerOptions DirectoryPickerOptions_new();

#ifdef __cplusplus
}
#endif
