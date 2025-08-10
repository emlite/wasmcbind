#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCIceCandidateInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCLocalIceCandidateInit, RTCIceCandidateInit);

RTCIceServerTransportProtocol RTCLocalIceCandidateInit_relayProtocol(const RTCLocalIceCandidateInit *self);

void RTCLocalIceCandidateInit_set_relayProtocol(RTCLocalIceCandidateInit* self, RTCIceServerTransportProtocol * value);

jb_String RTCLocalIceCandidateInit_url(const RTCLocalIceCandidateInit *self);

void RTCLocalIceCandidateInit_set_url(RTCLocalIceCandidateInit* self, jb_String * value);

RTCLocalIceCandidateInit RTCLocalIceCandidateInit_new();

#ifdef __cplusplus
}
#endif
