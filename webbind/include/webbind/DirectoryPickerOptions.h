#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DirectoryPickerOptions, em_Val);

jb_String DirectoryPickerOptions_id(const DirectoryPickerOptions *self);

void DirectoryPickerOptions_set_id(DirectoryPickerOptions* self, jb_String * value);

jb_Any DirectoryPickerOptions_startIn(const DirectoryPickerOptions *self);

void DirectoryPickerOptions_set_startIn(DirectoryPickerOptions* self, jb_Any * value);

FileSystemPermissionMode DirectoryPickerOptions_mode(const DirectoryPickerOptions *self);

void DirectoryPickerOptions_set_mode(DirectoryPickerOptions* self, FileSystemPermissionMode * value);

DirectoryPickerOptions DirectoryPickerOptions_new();

#ifdef __cplusplus
}
#endif
