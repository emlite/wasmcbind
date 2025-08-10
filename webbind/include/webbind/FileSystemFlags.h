#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FileSystemFlags, em_Val);

bool FileSystemFlags_create(const FileSystemFlags *self);

void FileSystemFlags_set_create(FileSystemFlags* self, bool value);

bool FileSystemFlags_exclusive(const FileSystemFlags *self);

void FileSystemFlags_set_exclusive(FileSystemFlags* self, bool value);

FileSystemFlags FileSystemFlags_new();

#ifdef __cplusplus
}
#endif
