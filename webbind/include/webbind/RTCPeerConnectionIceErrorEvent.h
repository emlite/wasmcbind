#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(RTCPeerConnectionIceErrorEvent, Event);

RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent_new(jb_DOMString * type, jb_Any * eventInitDict);

jb_DOMString RTCPeerConnectionIceErrorEvent_address(const RTCPeerConnectionIceErrorEvent *self);

unsigned short RTCPeerConnectionIceErrorEvent_port(const RTCPeerConnectionIceErrorEvent *self);

jb_USVString RTCPeerConnectionIceErrorEvent_url(const RTCPeerConnectionIceErrorEvent *self);

unsigned short RTCPeerConnectionIceErrorEvent_errorCode(const RTCPeerConnectionIceErrorEvent *self);

jb_USVString RTCPeerConnectionIceErrorEvent_errorText(const RTCPeerConnectionIceErrorEvent *self);
