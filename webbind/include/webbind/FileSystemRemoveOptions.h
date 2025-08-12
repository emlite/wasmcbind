#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FileSystemRemoveOptions */
DECLARE_EMLITE_TYPE(FileSystemRemoveOptions, em_Val);

/** @brief Getter of the recursive property */
bool FileSystemRemoveOptions_recursive(const FileSystemRemoveOptions *self);

/** @brief Setter of the recursive property */
void FileSystemRemoveOptions_set_recursive(FileSystemRemoveOptions* self, bool value);

/** @brief Constructor of the FileSystemRemoveOptions dictionary type */
FileSystemRemoveOptions FileSystemRemoveOptions_new();

#ifdef __cplusplus
}
#endif
