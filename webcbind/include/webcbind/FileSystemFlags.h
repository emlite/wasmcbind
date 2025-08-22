#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FileSystemFlags */
DECLARE_EMLITE_TYPE(FileSystemFlags, em_Val);

/** @brief Getter of the create property */
bool FileSystemFlags_create(const FileSystemFlags *self);

/** @brief Setter of the create property */
void FileSystemFlags_set_create(FileSystemFlags* self, bool value);

/** @brief Getter of the exclusive property */
bool FileSystemFlags_exclusive(const FileSystemFlags *self);

/** @brief Setter of the exclusive property */
void FileSystemFlags_set_exclusive(FileSystemFlags* self, bool value);

/** @brief Constructor of the FileSystemFlags dictionary type */
FileSystemFlags FileSystemFlags_new();

#ifdef __cplusplus
}
#endif
