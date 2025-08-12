#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaEncryptedEventInit */
DECLARE_EMLITE_TYPE(MediaEncryptedEventInit, EventInit);

/** @brief Getter of the initDataType property */
jb_String MediaEncryptedEventInit_initDataType(const MediaEncryptedEventInit *self);

/** @brief Setter of the initDataType property */
void MediaEncryptedEventInit_set_initDataType(MediaEncryptedEventInit* self, jb_String * value);

/** @brief Getter of the initData property */
jb_ArrayBuffer MediaEncryptedEventInit_initData(const MediaEncryptedEventInit *self);

/** @brief Setter of the initData property */
void MediaEncryptedEventInit_set_initData(MediaEncryptedEventInit* self, jb_ArrayBuffer * value);

/** @brief Constructor of the MediaEncryptedEventInit dictionary type */
MediaEncryptedEventInit MediaEncryptedEventInit_new();

#ifdef __cplusplus
}
#endif
