#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct RTCDataChannel RTCDataChannel;


typedef struct {
  Event inner;
} RTCDataChannelEvent;


DECLARE_EMLITE_TYPE(RTCDataChannelEvent, Event);

RTCDataChannelEvent RTCDataChannelEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

RTCDataChannel RTCDataChannelEvent_channel( const RTCDataChannelEvent *self);
