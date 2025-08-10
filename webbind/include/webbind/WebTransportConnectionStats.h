#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WebTransportDatagramStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportConnectionStats, em_Val);

long long WebTransportConnectionStats_bytesSent(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_bytesSent(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_packetsSent(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_packetsSent(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_bytesLost(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_bytesLost(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_packetsLost(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_packetsLost(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_bytesReceived(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_bytesReceived(WebTransportConnectionStats* self, long long value);

long long WebTransportConnectionStats_packetsReceived(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_packetsReceived(WebTransportConnectionStats* self, long long value);

jb_Any WebTransportConnectionStats_smoothedRtt(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_smoothedRtt(WebTransportConnectionStats* self, jb_Any * value);

jb_Any WebTransportConnectionStats_rttVariation(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_rttVariation(WebTransportConnectionStats* self, jb_Any * value);

jb_Any WebTransportConnectionStats_minRtt(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_minRtt(WebTransportConnectionStats* self, jb_Any * value);

WebTransportDatagramStats WebTransportConnectionStats_datagrams(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_datagrams(WebTransportConnectionStats* self, WebTransportDatagramStats * value);

long long WebTransportConnectionStats_estimatedSendRate(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_estimatedSendRate(WebTransportConnectionStats* self, long long value);

bool WebTransportConnectionStats_atSendCapacity(const WebTransportConnectionStats *self);

void WebTransportConnectionStats_set_atSendCapacity(WebTransportConnectionStats* self, bool value);

WebTransportConnectionStats WebTransportConnectionStats_new();

#ifdef __cplusplus
}
#endif
