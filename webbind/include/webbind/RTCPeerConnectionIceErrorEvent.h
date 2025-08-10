#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCPeerConnectionIceErrorEventInit RTCPeerConnectionIceErrorEventInit;

DECLARE_EMLITE_TYPE(RTCPeerConnectionIceErrorEvent, Event);

RTCPeerConnectionIceErrorEvent RTCPeerConnectionIceErrorEvent_new(jb_String * type, RTCPeerConnectionIceErrorEventInit * eventInitDict);

jb_String RTCPeerConnectionIceErrorEvent_address(const RTCPeerConnectionIceErrorEvent *self);

unsigned short RTCPeerConnectionIceErrorEvent_port(const RTCPeerConnectionIceErrorEvent *self);

jb_String RTCPeerConnectionIceErrorEvent_url(const RTCPeerConnectionIceErrorEvent *self);

unsigned short RTCPeerConnectionIceErrorEvent_errorCode(const RTCPeerConnectionIceErrorEvent *self);

jb_String RTCPeerConnectionIceErrorEvent_errorText(const RTCPeerConnectionIceErrorEvent *self);

#ifdef __cplusplus
}
#endif
