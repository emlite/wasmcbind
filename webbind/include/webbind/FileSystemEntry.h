#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct FileSystem FileSystem;


DECLARE_EMLITE_TYPE(FileSystemEntry, em_Val);

bool FileSystemEntry_isFile( const FileSystemEntry *self);

bool FileSystemEntry_isDirectory( const FileSystemEntry *self);

jb_USVString FileSystemEntry_name( const FileSystemEntry *self);

jb_USVString FileSystemEntry_fullPath( const FileSystemEntry *self);

FileSystem FileSystemEntry_filesystem( const FileSystemEntry *self);

jb_Undefined FileSystemEntry_getParent0(FileSystemEntry* self );

jb_Undefined FileSystemEntry_getParent1(FileSystemEntry* self , jb_Function * successCallback);

jb_Undefined FileSystemEntry_getParent2(FileSystemEntry* self , jb_Function * successCallback, jb_Function * errorCallback);
