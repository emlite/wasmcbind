#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FileSystemGetFileOptions, em_Val);

bool FileSystemGetFileOptions_create(const FileSystemGetFileOptions *self);

void FileSystemGetFileOptions_set_create(FileSystemGetFileOptions* self, bool value);

FileSystemGetFileOptions FileSystemGetFileOptions_new();

#ifdef __cplusplus
}
#endif
