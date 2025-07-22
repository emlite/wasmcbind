#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "FileSystemEntry.h"
#include "enums.h"

typedef struct FileSystemDirectoryReader FileSystemDirectoryReader;
typedef struct FileSystemFlags FileSystemFlags;


typedef struct {
  em_Val inner;
} FileSystemFlags;


DECLARE_EMLITE_TYPE(FileSystemFlags, em_Val);

bool FileSystemFlags_create( const FileSystemFlags *self);

void FileSystemFlags_set_create(FileSystemFlags* self, bool value);

bool FileSystemFlags_exclusive( const FileSystemFlags *self);

void FileSystemFlags_set_exclusive(FileSystemFlags* self, bool value);
typedef struct {
  FileSystemEntry inner;
} FileSystemDirectoryEntry;


DECLARE_EMLITE_TYPE(FileSystemDirectoryEntry, FileSystemEntry);

FileSystemDirectoryReader FileSystemDirectoryEntry_createReader(FileSystemDirectoryEntry* self );

jb_Undefined FileSystemDirectoryEntry_getFile(FileSystemDirectoryEntry* self );

jb_Undefined FileSystemDirectoryEntry_getFile(FileSystemDirectoryEntry* self , const jb_USVString* path);

jb_Undefined FileSystemDirectoryEntry_getFile(FileSystemDirectoryEntry* self , const jb_USVString* path, const FileSystemFlags* options);

jb_Undefined FileSystemDirectoryEntry_getFile(FileSystemDirectoryEntry* self , const jb_USVString* path, const FileSystemFlags* options, const jb_Function* successCallback);

jb_Undefined FileSystemDirectoryEntry_getFile(FileSystemDirectoryEntry* self , const jb_USVString* path, const FileSystemFlags* options, const jb_Function* successCallback, const jb_Function* errorCallback);

jb_Undefined FileSystemDirectoryEntry_getDirectory(FileSystemDirectoryEntry* self );

jb_Undefined FileSystemDirectoryEntry_getDirectory(FileSystemDirectoryEntry* self , const jb_USVString* path);

jb_Undefined FileSystemDirectoryEntry_getDirectory(FileSystemDirectoryEntry* self , const jb_USVString* path, const FileSystemFlags* options);

jb_Undefined FileSystemDirectoryEntry_getDirectory(FileSystemDirectoryEntry* self , const jb_USVString* path, const FileSystemFlags* options, const jb_Function* successCallback);

jb_Undefined FileSystemDirectoryEntry_getDirectory(FileSystemDirectoryEntry* self , const jb_USVString* path, const FileSystemFlags* options, const jb_Function* successCallback, const jb_Function* errorCallback);
