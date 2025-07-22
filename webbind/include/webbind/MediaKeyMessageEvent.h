#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} MediaKeyMessageEvent;


DECLARE_EMLITE_TYPE(MediaKeyMessageEvent, Event);

MediaKeyMessageEvent MediaKeyMessageEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

MediaKeyMessageType MediaKeyMessageEvent_messageType( const MediaKeyMessageEvent *self);

jb_ArrayBuffer MediaKeyMessageEvent_message( const MediaKeyMessageEvent *self);
