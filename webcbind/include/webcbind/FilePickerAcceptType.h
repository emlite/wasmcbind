#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type FilePickerAcceptType */
DECLARE_EMLITE_TYPE(FilePickerAcceptType, em_Val);

/** @brief Getter of the description property */
jb_String FilePickerAcceptType_description(const FilePickerAcceptType *self);

/** @brief Setter of the description property */
void FilePickerAcceptType_set_description(FilePickerAcceptType* self, jb_String * value);

/** @brief Getter of the accept property */
jb_Object FilePickerAcceptType_accept(const FilePickerAcceptType *self);

/** @brief Setter of the accept property */
void FilePickerAcceptType_set_accept(FilePickerAcceptType* self, jb_Object * value);

/** @brief Constructor of the FilePickerAcceptType dictionary type */
FilePickerAcceptType FilePickerAcceptType_new();

#ifdef __cplusplus
}
#endif
