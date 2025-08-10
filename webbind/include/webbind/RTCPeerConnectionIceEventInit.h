#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCIceCandidate RTCIceCandidate;

DECLARE_EMLITE_TYPE(RTCPeerConnectionIceEventInit, EventInit);

RTCIceCandidate RTCPeerConnectionIceEventInit_candidate(const RTCPeerConnectionIceEventInit *self);

void RTCPeerConnectionIceEventInit_set_candidate(RTCPeerConnectionIceEventInit* self, RTCIceCandidate * value);

jb_String RTCPeerConnectionIceEventInit_url(const RTCPeerConnectionIceEventInit *self);

void RTCPeerConnectionIceEventInit_set_url(RTCPeerConnectionIceEventInit* self, jb_String * value);

RTCPeerConnectionIceEventInit RTCPeerConnectionIceEventInit_new();

#ifdef __cplusplus
}
#endif
