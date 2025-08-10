#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaKeyMessageEventInit, EventInit);

MediaKeyMessageType MediaKeyMessageEventInit_messageType(const MediaKeyMessageEventInit *self);

void MediaKeyMessageEventInit_set_messageType(MediaKeyMessageEventInit* self, MediaKeyMessageType * value);

jb_ArrayBuffer MediaKeyMessageEventInit_message(const MediaKeyMessageEventInit *self);

void MediaKeyMessageEventInit_set_message(MediaKeyMessageEventInit* self, jb_ArrayBuffer * value);

MediaKeyMessageEventInit MediaKeyMessageEventInit_new();

#ifdef __cplusplus
}
#endif
