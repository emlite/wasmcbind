#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaEncryptedEventInit, EventInit);

jb_String MediaEncryptedEventInit_initDataType(const MediaEncryptedEventInit *self);

void MediaEncryptedEventInit_set_initDataType(MediaEncryptedEventInit* self, jb_String * value);

jb_ArrayBuffer MediaEncryptedEventInit_initData(const MediaEncryptedEventInit *self);

void MediaEncryptedEventInit_set_initData(MediaEncryptedEventInit* self, jb_ArrayBuffer * value);

MediaEncryptedEventInit MediaEncryptedEventInit_new();

#ifdef __cplusplus
}
#endif
