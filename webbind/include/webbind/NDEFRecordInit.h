#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NDEFRecordInit, em_Val);

jb_String NDEFRecordInit_recordType(const NDEFRecordInit *self);

void NDEFRecordInit_set_recordType(NDEFRecordInit* self, jb_String * value);

jb_String NDEFRecordInit_mediaType(const NDEFRecordInit *self);

void NDEFRecordInit_set_mediaType(NDEFRecordInit* self, jb_String * value);

jb_String NDEFRecordInit_id(const NDEFRecordInit *self);

void NDEFRecordInit_set_id(NDEFRecordInit* self, jb_String * value);

jb_String NDEFRecordInit_encoding(const NDEFRecordInit *self);

void NDEFRecordInit_set_encoding(NDEFRecordInit* self, jb_String * value);

jb_String NDEFRecordInit_lang(const NDEFRecordInit *self);

void NDEFRecordInit_set_lang(NDEFRecordInit* self, jb_String * value);

jb_Any NDEFRecordInit_data(const NDEFRecordInit *self);

void NDEFRecordInit_set_data(NDEFRecordInit* self, jb_Any * value);

NDEFRecordInit NDEFRecordInit_new();

#ifdef __cplusplus
}
#endif
