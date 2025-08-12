#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FileSystemGetDirectoryOptions */
DECLARE_EMLITE_TYPE(FileSystemGetDirectoryOptions, em_Val);

/** @brief Getter of the create property */
bool FileSystemGetDirectoryOptions_create(const FileSystemGetDirectoryOptions *self);

/** @brief Setter of the create property */
void FileSystemGetDirectoryOptions_set_create(FileSystemGetDirectoryOptions* self, bool value);

/** @brief Constructor of the FileSystemGetDirectoryOptions dictionary type */
FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions_new();

#ifdef __cplusplus
}
#endif
