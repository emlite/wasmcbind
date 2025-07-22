#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct RTCDataChannel RTCDataChannel;


DECLARE_EMLITE_TYPE(RTCDataChannelEvent, Event);

RTCDataChannelEvent RTCDataChannelEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

RTCDataChannel RTCDataChannelEvent_channel( const RTCDataChannelEvent *self);
