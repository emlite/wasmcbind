#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FileSystemHandlePermissionDescriptor */
DECLARE_EMLITE_TYPE(FileSystemHandlePermissionDescriptor, em_Val);

/** @brief Getter of the mode property */
FileSystemPermissionMode FileSystemHandlePermissionDescriptor_mode(const FileSystemHandlePermissionDescriptor *self);

/** @brief Setter of the mode property */
void FileSystemHandlePermissionDescriptor_set_mode(FileSystemHandlePermissionDescriptor* self, FileSystemPermissionMode * value);

/** @brief Constructor of the FileSystemHandlePermissionDescriptor dictionary type */
FileSystemHandlePermissionDescriptor FileSystemHandlePermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
