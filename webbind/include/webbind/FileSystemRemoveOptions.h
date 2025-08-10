#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FileSystemRemoveOptions, em_Val);

bool FileSystemRemoveOptions_recursive(const FileSystemRemoveOptions *self);

void FileSystemRemoveOptions_set_recursive(FileSystemRemoveOptions* self, bool value);

FileSystemRemoveOptions FileSystemRemoveOptions_new();

#ifdef __cplusplus
}
#endif
