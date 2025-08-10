#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCLocalSessionDescriptionInit, em_Val);

RTCSdpType RTCLocalSessionDescriptionInit_type(const RTCLocalSessionDescriptionInit *self);

void RTCLocalSessionDescriptionInit_set_type(RTCLocalSessionDescriptionInit* self, RTCSdpType * value);

jb_String RTCLocalSessionDescriptionInit_sdp(const RTCLocalSessionDescriptionInit *self);

void RTCLocalSessionDescriptionInit_set_sdp(RTCLocalSessionDescriptionInit* self, jb_String * value);

RTCLocalSessionDescriptionInit RTCLocalSessionDescriptionInit_new();

#ifdef __cplusplus
}
#endif
