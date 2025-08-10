#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FileSystemGetDirectoryOptions, em_Val);

bool FileSystemGetDirectoryOptions_create(const FileSystemGetDirectoryOptions *self);

void FileSystemGetDirectoryOptions_set_create(FileSystemGetDirectoryOptions* self, bool value);

FileSystemGetDirectoryOptions FileSystemGetDirectoryOptions_new();

#ifdef __cplusplus
}
#endif
