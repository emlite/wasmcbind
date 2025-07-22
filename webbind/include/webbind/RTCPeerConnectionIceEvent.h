#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct RTCIceCandidate RTCIceCandidate;


typedef struct {
  Event inner;
} RTCPeerConnectionIceEvent;


DECLARE_EMLITE_TYPE(RTCPeerConnectionIceEvent, Event);

RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new(const jb_DOMString* type);

RTCPeerConnectionIceEvent RTCPeerConnectionIceEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

RTCIceCandidate RTCPeerConnectionIceEvent_candidate( const RTCPeerConnectionIceEvent *self);

jb_USVString RTCPeerConnectionIceEvent_url( const RTCPeerConnectionIceEvent *self);
