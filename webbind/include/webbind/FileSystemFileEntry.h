#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "FileSystemEntry.h"
#include "enums.h"


typedef struct {
  FileSystemEntry inner;
} FileSystemFileEntry;


DECLARE_EMLITE_TYPE(FileSystemFileEntry, FileSystemEntry);

jb_Undefined FileSystemFileEntry_file(FileSystemFileEntry* self , const jb_Function* successCallback);

jb_Undefined FileSystemFileEntry_file(FileSystemFileEntry* self , const jb_Function* successCallback, const jb_Function* errorCallback);
