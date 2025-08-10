#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCDataChannelInit, em_Val);

bool RTCDataChannelInit_ordered(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_ordered(RTCDataChannelInit* self, bool value);

unsigned short RTCDataChannelInit_maxPacketLifeTime(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_maxPacketLifeTime(RTCDataChannelInit* self, unsigned short value);

unsigned short RTCDataChannelInit_maxRetransmits(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_maxRetransmits(RTCDataChannelInit* self, unsigned short value);

jb_String RTCDataChannelInit_protocol(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_protocol(RTCDataChannelInit* self, jb_String * value);

bool RTCDataChannelInit_negotiated(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_negotiated(RTCDataChannelInit* self, bool value);

unsigned short RTCDataChannelInit_id(const RTCDataChannelInit *self);

void RTCDataChannelInit_set_id(RTCDataChannelInit* self, unsigned short value);

RTCDataChannelInit RTCDataChannelInit_new();

#ifdef __cplusplus
}
#endif
