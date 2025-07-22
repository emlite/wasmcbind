#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "FileSystemHandle.h"
#include "enums.h"

typedef struct File File;
typedef struct FileSystemWritableFileStream FileSystemWritableFileStream;
typedef struct FileSystemCreateWritableOptions FileSystemCreateWritableOptions;
typedef struct FileSystemSyncAccessHandle FileSystemSyncAccessHandle;


typedef struct {
  em_Val inner;
} FileSystemCreateWritableOptions;


DECLARE_EMLITE_TYPE(FileSystemCreateWritableOptions, em_Val);

bool FileSystemCreateWritableOptions_keepExistingData( const FileSystemCreateWritableOptions *self);

void FileSystemCreateWritableOptions_set_keepExistingData(FileSystemCreateWritableOptions* self, bool value);
typedef struct {
  FileSystemHandle inner;
} FileSystemFileHandle;


DECLARE_EMLITE_TYPE(FileSystemFileHandle, FileSystemHandle);

jb_Promise FileSystemFileHandle_getFile(FileSystemFileHandle* self );

jb_Promise FileSystemFileHandle_createWritable(FileSystemFileHandle* self );

jb_Promise FileSystemFileHandle_createWritable(FileSystemFileHandle* self , const FileSystemCreateWritableOptions* options);

jb_Promise FileSystemFileHandle_createSyncAccessHandle(FileSystemFileHandle* self );
