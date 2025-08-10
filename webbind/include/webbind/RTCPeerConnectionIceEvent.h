#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCPeerConnectionIceEventInit RTCPeerConnectionIceEventInit;
typedef struct RTCIceCandidate RTCIceCandidate;

DECLARE_EMLITE_TYPE(RTCPeerConnectionIceEvent, Event);

RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new0(jb_String * type);

RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new1(jb_String * type, RTCPeerConnectionIceEventInit * eventInitDict);

RTCIceCandidate RTCPeerConnectionIceEvent_candidate(const RTCPeerConnectionIceEvent *self);

jb_String RTCPeerConnectionIceEvent_url(const RTCPeerConnectionIceEvent *self);

#ifdef __cplusplus
}
#endif
