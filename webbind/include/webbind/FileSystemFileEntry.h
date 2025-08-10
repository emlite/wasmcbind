#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FileSystemEntry.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FileSystemFileEntry, FileSystemEntry);

jb_Undefined FileSystemFileEntry_file0(FileSystemFileEntry* self , jb_Function * successCallback);

jb_Undefined FileSystemFileEntry_file1(FileSystemFileEntry* self , jb_Function * successCallback, jb_Function * errorCallback);

#ifdef __cplusplus
}
#endif
