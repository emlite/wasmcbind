#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FileSystemReadWriteOptions */
DECLARE_EMLITE_TYPE(FileSystemReadWriteOptions, em_Val);

/** @brief Getter of the at property */
long long FileSystemReadWriteOptions_at(const FileSystemReadWriteOptions *self);

/** @brief Setter of the at property */
void FileSystemReadWriteOptions_set_at(FileSystemReadWriteOptions* self, long long value);

/** @brief Constructor of the FileSystemReadWriteOptions dictionary type */
FileSystemReadWriteOptions FileSystemReadWriteOptions_new();

#ifdef __cplusplus
}
#endif
