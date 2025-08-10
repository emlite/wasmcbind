#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Blob.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FilePropertyBag FilePropertyBag;

DECLARE_EMLITE_TYPE(File, Blob);

File File_new0(jb_Array * fileBits, jb_String * fileName);

File File_new1(jb_Array * fileBits, jb_String * fileName, FilePropertyBag * options);

jb_String File_name(const File *self);

long long File_lastModified(const File *self);

jb_String File_webkitRelativePath(const File *self);

#ifdef __cplusplus
}
#endif
