#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FileSystemGetFileOptions */
DECLARE_EMLITE_TYPE(FileSystemGetFileOptions, em_Val);

/** @brief Getter of the create property */
bool FileSystemGetFileOptions_create(const FileSystemGetFileOptions *self);

/** @brief Setter of the create property */
void FileSystemGetFileOptions_set_create(FileSystemGetFileOptions* self, bool value);

/** @brief Constructor of the FileSystemGetFileOptions dictionary type */
FileSystemGetFileOptions FileSystemGetFileOptions_new();

#ifdef __cplusplus
}
#endif
