#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FileSystemCreateWritableOptions, em_Val);

bool FileSystemCreateWritableOptions_keepExistingData(const FileSystemCreateWritableOptions *self);

void FileSystemCreateWritableOptions_set_keepExistingData(FileSystemCreateWritableOptions* self, bool value);

FileSystemCreateWritableOptions FileSystemCreateWritableOptions_new();

#ifdef __cplusplus
}
#endif
