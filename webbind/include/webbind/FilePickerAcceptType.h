#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(FilePickerAcceptType, em_Val);

jb_String FilePickerAcceptType_description(const FilePickerAcceptType *self);

void FilePickerAcceptType_set_description(FilePickerAcceptType* self, jb_String * value);

jb_Object FilePickerAcceptType_accept(const FilePickerAcceptType *self);

void FilePickerAcceptType_set_accept(FilePickerAcceptType* self, jb_Object * value);

FilePickerAcceptType FilePickerAcceptType_new();

#ifdef __cplusplus
}
#endif
