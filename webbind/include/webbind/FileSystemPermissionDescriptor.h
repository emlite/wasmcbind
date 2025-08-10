#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemHandle FileSystemHandle;

DECLARE_EMLITE_TYPE(FileSystemPermissionDescriptor, PermissionDescriptor);

FileSystemHandle FileSystemPermissionDescriptor_handle(const FileSystemPermissionDescriptor *self);

void FileSystemPermissionDescriptor_set_handle(FileSystemPermissionDescriptor* self, FileSystemHandle * value);

FileSystemPermissionMode FileSystemPermissionDescriptor_mode(const FileSystemPermissionDescriptor *self);

void FileSystemPermissionDescriptor_set_mode(FileSystemPermissionDescriptor* self, FileSystemPermissionMode * value);

FileSystemPermissionDescriptor FileSystemPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
