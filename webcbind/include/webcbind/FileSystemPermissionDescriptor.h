#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemHandle FileSystemHandle;

/** @brief Dictionary type FileSystemPermissionDescriptor */
DECLARE_EMLITE_TYPE(FileSystemPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the handle property */
FileSystemHandle FileSystemPermissionDescriptor_handle(const FileSystemPermissionDescriptor *self);

/** @brief Setter of the handle property */
void FileSystemPermissionDescriptor_set_handle(FileSystemPermissionDescriptor* self, FileSystemHandle * value);

/** @brief Getter of the mode property */
FileSystemPermissionMode FileSystemPermissionDescriptor_mode(const FileSystemPermissionDescriptor *self);

/** @brief Setter of the mode property */
void FileSystemPermissionDescriptor_set_mode(FileSystemPermissionDescriptor* self, FileSystemPermissionMode * value);

/** @brief Constructor of the FileSystemPermissionDescriptor dictionary type */
FileSystemPermissionDescriptor FileSystemPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
