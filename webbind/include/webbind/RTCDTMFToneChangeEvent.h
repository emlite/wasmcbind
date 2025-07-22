#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} RTCDTMFToneChangeEvent;


DECLARE_EMLITE_TYPE(RTCDTMFToneChangeEvent, Event);

RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new(const jb_DOMString* type);

RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

jb_DOMString RTCDTMFToneChangeEvent_tone( const RTCDTMFToneChangeEvent *self);
