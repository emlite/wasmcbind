#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FileSystemReadWriteOptions, em_Val);

long long FileSystemReadWriteOptions_at(const FileSystemReadWriteOptions *self);

void FileSystemReadWriteOptions_set_at(FileSystemReadWriteOptions* self, long long value);

FileSystemReadWriteOptions FileSystemReadWriteOptions_new();

#ifdef __cplusplus
}
#endif
