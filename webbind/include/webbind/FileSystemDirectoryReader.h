#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} FileSystemDirectoryReader;


DECLARE_EMLITE_TYPE(FileSystemDirectoryReader, em_Val);

jb_Undefined FileSystemDirectoryReader_readEntries(FileSystemDirectoryReader* self , const jb_Function* successCallback);

jb_Undefined FileSystemDirectoryReader_readEntries(FileSystemDirectoryReader* self , const jb_Function* successCallback, const jb_Function* errorCallback);
