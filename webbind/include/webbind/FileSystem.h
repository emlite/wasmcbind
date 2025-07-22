#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct FileSystemDirectoryEntry FileSystemDirectoryEntry;


DECLARE_EMLITE_TYPE(FileSystem, em_Val);

jb_USVString FileSystem_name( const FileSystem *self);

FileSystemDirectoryEntry FileSystem_root( const FileSystem *self);
