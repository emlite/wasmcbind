#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "FilePickerAcceptType.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FilePickerOptions */
DECLARE_EMLITE_TYPE(FilePickerOptions, em_Val);

/** @brief Getter of the types property */
jb_Array FilePickerOptions_types(const FilePickerOptions *self);

/** @brief Setter of the types property */
void FilePickerOptions_set_types(FilePickerOptions* self, jb_Array * value);

/** @brief Getter of the excludeAcceptAllOption property */
bool FilePickerOptions_excludeAcceptAllOption(const FilePickerOptions *self);

/** @brief Setter of the excludeAcceptAllOption property */
void FilePickerOptions_set_excludeAcceptAllOption(FilePickerOptions* self, bool value);

/** @brief Getter of the id property */
jb_String FilePickerOptions_id(const FilePickerOptions *self);

/** @brief Setter of the id property */
void FilePickerOptions_set_id(FilePickerOptions* self, jb_String * value);

/** @brief Getter of the startIn property */
jb_Any FilePickerOptions_startIn(const FilePickerOptions *self);

/** @brief Setter of the startIn property */
void FilePickerOptions_set_startIn(FilePickerOptions* self, jb_Any * value);

/** @brief Constructor of the FilePickerOptions dictionary type */
FilePickerOptions FilePickerOptions_new();

#ifdef __cplusplus
}
#endif
