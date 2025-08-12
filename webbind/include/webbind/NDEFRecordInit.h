#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NDEFRecordInit */
DECLARE_EMLITE_TYPE(NDEFRecordInit, em_Val);

/** @brief Getter of the recordType property */
jb_String NDEFRecordInit_recordType(const NDEFRecordInit *self);

/** @brief Setter of the recordType property */
void NDEFRecordInit_set_recordType(NDEFRecordInit* self, jb_String * value);

/** @brief Getter of the mediaType property */
jb_String NDEFRecordInit_mediaType(const NDEFRecordInit *self);

/** @brief Setter of the mediaType property */
void NDEFRecordInit_set_mediaType(NDEFRecordInit* self, jb_String * value);

/** @brief Getter of the id property */
jb_String NDEFRecordInit_id(const NDEFRecordInit *self);

/** @brief Setter of the id property */
void NDEFRecordInit_set_id(NDEFRecordInit* self, jb_String * value);

/** @brief Getter of the encoding property */
jb_String NDEFRecordInit_encoding(const NDEFRecordInit *self);

/** @brief Setter of the encoding property */
void NDEFRecordInit_set_encoding(NDEFRecordInit* self, jb_String * value);

/** @brief Getter of the lang property */
jb_String NDEFRecordInit_lang(const NDEFRecordInit *self);

/** @brief Setter of the lang property */
void NDEFRecordInit_set_lang(NDEFRecordInit* self, jb_String * value);

/** @brief Getter of the data property */
jb_Any NDEFRecordInit_data(const NDEFRecordInit *self);

/** @brief Setter of the data property */
void NDEFRecordInit_set_data(NDEFRecordInit* self, jb_Any * value);

/** @brief Constructor of the NDEFRecordInit dictionary type */
NDEFRecordInit NDEFRecordInit_new();

#ifdef __cplusplus
}
#endif
