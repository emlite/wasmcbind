#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "FilePickerAcceptType.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FilePickerOptions, em_Val);

jb_Array FilePickerOptions_types(const FilePickerOptions *self);

void FilePickerOptions_set_types(FilePickerOptions* self, jb_Array * value);

bool FilePickerOptions_excludeAcceptAllOption(const FilePickerOptions *self);

void FilePickerOptions_set_excludeAcceptAllOption(FilePickerOptions* self, bool value);

jb_String FilePickerOptions_id(const FilePickerOptions *self);

void FilePickerOptions_set_id(FilePickerOptions* self, jb_String * value);

jb_Any FilePickerOptions_startIn(const FilePickerOptions *self);

void FilePickerOptions_set_startIn(FilePickerOptions* self, jb_Any * value);

FilePickerOptions FilePickerOptions_new();

#ifdef __cplusplus
}
#endif
