#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "FileSystemHandle.h"
#include "enums.h"

typedef struct FileSystemFileHandle FileSystemFileHandle;
typedef struct FileSystemGetFileOptions FileSystemGetFileOptions;
typedef struct FileSystemDirectoryHandle FileSystemDirectoryHandle;
typedef struct FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions;
typedef struct FileSystemRemoveOptions FileSystemRemoveOptions;


typedef struct {
  em_Val inner;
} FileSystemGetFileOptions;


DECLARE_EMLITE_TYPE(FileSystemGetFileOptions, em_Val);

bool FileSystemGetFileOptions_create( const FileSystemGetFileOptions *self);

void FileSystemGetFileOptions_set_create(FileSystemGetFileOptions* self, bool value);
typedef struct {
  em_Val inner;
} FileSystemGetDirectoryOptions;


DECLARE_EMLITE_TYPE(FileSystemGetDirectoryOptions, em_Val);

bool FileSystemGetDirectoryOptions_create( const FileSystemGetDirectoryOptions *self);

void FileSystemGetDirectoryOptions_set_create(FileSystemGetDirectoryOptions* self, bool value);
typedef struct {
  em_Val inner;
} FileSystemRemoveOptions;


DECLARE_EMLITE_TYPE(FileSystemRemoveOptions, em_Val);

bool FileSystemRemoveOptions_recursive( const FileSystemRemoveOptions *self);

void FileSystemRemoveOptions_set_recursive(FileSystemRemoveOptions* self, bool value);
typedef struct {
  FileSystemHandle inner;
} FileSystemDirectoryHandle;


DECLARE_EMLITE_TYPE(FileSystemDirectoryHandle, FileSystemHandle);

jb_Promise FileSystemDirectoryHandle_getFileHandle(FileSystemDirectoryHandle* self , const jb_USVString* name);

jb_Promise FileSystemDirectoryHandle_getFileHandle(FileSystemDirectoryHandle* self , const jb_USVString* name, const FileSystemGetFileOptions* options);

jb_Promise FileSystemDirectoryHandle_getDirectoryHandle(FileSystemDirectoryHandle* self , const jb_USVString* name);

jb_Promise FileSystemDirectoryHandle_getDirectoryHandle(FileSystemDirectoryHandle* self , const jb_USVString* name, const FileSystemGetDirectoryOptions* options);

jb_Promise FileSystemDirectoryHandle_removeEntry(FileSystemDirectoryHandle* self , const jb_USVString* name);

jb_Promise FileSystemDirectoryHandle_removeEntry(FileSystemDirectoryHandle* self , const jb_USVString* name, const FileSystemRemoveOptions* options);

jb_Promise FileSystemDirectoryHandle_resolve(FileSystemDirectoryHandle* self , const FileSystemHandle* possibleDescendant);
