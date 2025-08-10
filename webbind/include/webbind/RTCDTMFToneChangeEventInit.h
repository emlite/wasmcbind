#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCDTMFToneChangeEventInit, EventInit);

jb_String RTCDTMFToneChangeEventInit_tone(const RTCDTMFToneChangeEventInit *self);

void RTCDTMFToneChangeEventInit_set_tone(RTCDTMFToneChangeEventInit* self, jb_String * value);

RTCDTMFToneChangeEventInit RTCDTMFToneChangeEventInit_new();

#ifdef __cplusplus
}
#endif
