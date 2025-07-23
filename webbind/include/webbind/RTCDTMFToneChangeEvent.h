#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(RTCDTMFToneChangeEvent, Event);

RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new0(jb_DOMString * type);

RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

jb_DOMString RTCDTMFToneChangeEvent_tone(const RTCDTMFToneChangeEvent *self);
