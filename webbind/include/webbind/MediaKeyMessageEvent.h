#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaKeyMessageEventInit MediaKeyMessageEventInit;

DECLARE_EMLITE_TYPE(MediaKeyMessageEvent, Event);

MediaKeyMessageEvent MediaKeyMessageEvent_new(jb_String * type, MediaKeyMessageEventInit * eventInitDict);

MediaKeyMessageType MediaKeyMessageEvent_messageType(const MediaKeyMessageEvent *self);

jb_ArrayBuffer MediaKeyMessageEvent_message(const MediaKeyMessageEvent *self);

#ifdef __cplusplus
}
#endif
