#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCDTMFToneChangeEventInit RTCDTMFToneChangeEventInit;

DECLARE_EMLITE_TYPE(RTCDTMFToneChangeEvent, Event);

RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new0(jb_String * type);

RTCDTMFToneChangeEvent RTCDTMFToneChangeEvent_new1(jb_String * type, RTCDTMFToneChangeEventInit * eventInitDict);

jb_String RTCDTMFToneChangeEvent_tone(const RTCDTMFToneChangeEvent *self);

#ifdef __cplusplus
}
#endif
