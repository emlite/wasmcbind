#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCSessionDescriptionInit, em_Val);

RTCSdpType RTCSessionDescriptionInit_type(const RTCSessionDescriptionInit *self);

void RTCSessionDescriptionInit_set_type(RTCSessionDescriptionInit* self, RTCSdpType * value);

jb_String RTCSessionDescriptionInit_sdp(const RTCSessionDescriptionInit *self);

void RTCSessionDescriptionInit_set_sdp(RTCSessionDescriptionInit* self, jb_String * value);

RTCSessionDescriptionInit RTCSessionDescriptionInit_new();

#ifdef __cplusplus
}
#endif
