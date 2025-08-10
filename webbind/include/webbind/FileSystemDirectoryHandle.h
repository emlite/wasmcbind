#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FileSystemHandle.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FileSystemFileHandle FileSystemFileHandle;
typedef struct FileSystemGetFileOptions FileSystemGetFileOptions;
typedef struct FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions;
typedef struct FileSystemRemoveOptions FileSystemRemoveOptions;

DECLARE_EMLITE_TYPE(FileSystemDirectoryHandle, FileSystemHandle);

jb_Promise FileSystemDirectoryHandle_getFileHandle0(FileSystemDirectoryHandle* self , jb_String * name);

jb_Promise FileSystemDirectoryHandle_getFileHandle1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemGetFileOptions * options);

jb_Promise FileSystemDirectoryHandle_getDirectoryHandle0(FileSystemDirectoryHandle* self , jb_String * name);

jb_Promise FileSystemDirectoryHandle_getDirectoryHandle1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemGetDirectoryOptions * options);

jb_Promise FileSystemDirectoryHandle_removeEntry0(FileSystemDirectoryHandle* self , jb_String * name);

jb_Promise FileSystemDirectoryHandle_removeEntry1(FileSystemDirectoryHandle* self , jb_String * name, FileSystemRemoveOptions * options);

jb_Promise FileSystemDirectoryHandle_resolve(FileSystemDirectoryHandle* self , FileSystemHandle * possibleDescendant);

#ifdef __cplusplus
}
#endif
