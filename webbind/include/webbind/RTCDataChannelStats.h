#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCDataChannelStats, RTCStats);

jb_String RTCDataChannelStats_label(const RTCDataChannelStats *self);

void RTCDataChannelStats_set_label(RTCDataChannelStats* self, jb_String * value);

jb_String RTCDataChannelStats_protocol(const RTCDataChannelStats *self);

void RTCDataChannelStats_set_protocol(RTCDataChannelStats* self, jb_String * value);

unsigned short RTCDataChannelStats_dataChannelIdentifier(const RTCDataChannelStats *self);

void RTCDataChannelStats_set_dataChannelIdentifier(RTCDataChannelStats* self, unsigned short value);

RTCDataChannelState RTCDataChannelStats_state(const RTCDataChannelStats *self);

void RTCDataChannelStats_set_state(RTCDataChannelStats* self, RTCDataChannelState * value);

unsigned long RTCDataChannelStats_messagesSent(const RTCDataChannelStats *self);

void RTCDataChannelStats_set_messagesSent(RTCDataChannelStats* self, unsigned long value);

long long RTCDataChannelStats_bytesSent(const RTCDataChannelStats *self);

void RTCDataChannelStats_set_bytesSent(RTCDataChannelStats* self, long long value);

unsigned long RTCDataChannelStats_messagesReceived(const RTCDataChannelStats *self);

void RTCDataChannelStats_set_messagesReceived(RTCDataChannelStats* self, unsigned long value);

long long RTCDataChannelStats_bytesReceived(const RTCDataChannelStats *self);

void RTCDataChannelStats_set_bytesReceived(RTCDataChannelStats* self, long long value);

RTCDataChannelStats RTCDataChannelStats_new();

#ifdef __cplusplus
}
#endif
