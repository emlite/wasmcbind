#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct FileSystemHandle FileSystemHandle;
typedef struct FileSystemHandlePermissionDescriptor FileSystemHandlePermissionDescriptor;


typedef struct {
  em_Val inner;
} FileSystemHandlePermissionDescriptor;


DECLARE_EMLITE_TYPE(FileSystemHandlePermissionDescriptor, em_Val);

FileSystemPermissionMode FileSystemHandlePermissionDescriptor_mode( const FileSystemHandlePermissionDescriptor *self);

void FileSystemHandlePermissionDescriptor_set_mode(FileSystemHandlePermissionDescriptor* self, const FileSystemPermissionMode* value);
typedef struct {
  em_Val inner;
} FileSystemHandle;


DECLARE_EMLITE_TYPE(FileSystemHandle, em_Val);

FileSystemHandleKind FileSystemHandle_kind( const FileSystemHandle *self);

jb_USVString FileSystemHandle_name( const FileSystemHandle *self);

jb_Promise FileSystemHandle_isSameEntry(FileSystemHandle* self , const FileSystemHandle* other);

jb_Promise FileSystemHandle_queryPermission(FileSystemHandle* self );

jb_Promise FileSystemHandle_queryPermission(FileSystemHandle* self , const FileSystemHandlePermissionDescriptor* descriptor);

jb_Promise FileSystemHandle_requestPermission(FileSystemHandle* self );

jb_Promise FileSystemHandle_requestPermission(FileSystemHandle* self , const FileSystemHandlePermissionDescriptor* descriptor);
