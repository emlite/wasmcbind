#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCPeerConnectionIceErrorEventInit, EventInit);

jb_String RTCPeerConnectionIceErrorEventInit_address(const RTCPeerConnectionIceErrorEventInit *self);

void RTCPeerConnectionIceErrorEventInit_set_address(RTCPeerConnectionIceErrorEventInit* self, jb_String * value);

unsigned short RTCPeerConnectionIceErrorEventInit_port(const RTCPeerConnectionIceErrorEventInit *self);

void RTCPeerConnectionIceErrorEventInit_set_port(RTCPeerConnectionIceErrorEventInit* self, unsigned short value);

jb_String RTCPeerConnectionIceErrorEventInit_url(const RTCPeerConnectionIceErrorEventInit *self);

void RTCPeerConnectionIceErrorEventInit_set_url(RTCPeerConnectionIceErrorEventInit* self, jb_String * value);

unsigned short RTCPeerConnectionIceErrorEventInit_errorCode(const RTCPeerConnectionIceErrorEventInit *self);

void RTCPeerConnectionIceErrorEventInit_set_errorCode(RTCPeerConnectionIceErrorEventInit* self, unsigned short value);

jb_String RTCPeerConnectionIceErrorEventInit_errorText(const RTCPeerConnectionIceErrorEventInit *self);

void RTCPeerConnectionIceErrorEventInit_set_errorText(RTCPeerConnectionIceErrorEventInit* self, jb_String * value);

RTCPeerConnectionIceErrorEventInit RTCPeerConnectionIceErrorEventInit_new();

#ifdef __cplusplus
}
#endif
