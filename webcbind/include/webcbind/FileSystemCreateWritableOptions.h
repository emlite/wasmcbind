#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FileSystemCreateWritableOptions */
DECLARE_EMLITE_TYPE(FileSystemCreateWritableOptions, em_Val);

/** @brief Getter of the keepExistingData property */
bool FileSystemCreateWritableOptions_keepExistingData(const FileSystemCreateWritableOptions *self);

/** @brief Setter of the keepExistingData property */
void FileSystemCreateWritableOptions_set_keepExistingData(FileSystemCreateWritableOptions* self, bool value);

/** @brief Constructor of the FileSystemCreateWritableOptions dictionary type */
FileSystemCreateWritableOptions FileSystemCreateWritableOptions_new();

#ifdef __cplusplus
}
#endif
