#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct FileSystemReadWriteOptions FileSystemReadWriteOptions;


typedef struct {
  em_Val inner;
} FileSystemReadWriteOptions;


DECLARE_EMLITE_TYPE(FileSystemReadWriteOptions, em_Val);

long long FileSystemReadWriteOptions_at( const FileSystemReadWriteOptions *self);

void FileSystemReadWriteOptions_set_at(FileSystemReadWriteOptions* self, long long value);
typedef struct {
  em_Val inner;
} FileSystemSyncAccessHandle;


DECLARE_EMLITE_TYPE(FileSystemSyncAccessHandle, em_Val);

long long FileSystemSyncAccessHandle_read(FileSystemSyncAccessHandle* self , const jb_Any* buffer);

long long FileSystemSyncAccessHandle_read(FileSystemSyncAccessHandle* self , const jb_Any* buffer, const FileSystemReadWriteOptions* options);

long long FileSystemSyncAccessHandle_write(FileSystemSyncAccessHandle* self , const jb_Any* buffer);

long long FileSystemSyncAccessHandle_write(FileSystemSyncAccessHandle* self , const jb_Any* buffer, const FileSystemReadWriteOptions* options);

jb_Undefined FileSystemSyncAccessHandle_truncate(FileSystemSyncAccessHandle* self , long long newSize);

long long FileSystemSyncAccessHandle_getSize(FileSystemSyncAccessHandle* self );

jb_Undefined FileSystemSyncAccessHandle_flush(FileSystemSyncAccessHandle* self );

jb_Undefined FileSystemSyncAccessHandle_close(FileSystemSyncAccessHandle* self );
