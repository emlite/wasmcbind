#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportSendStreamStats, em_Val);

long long WebTransportSendStreamStats_bytesWritten(const WebTransportSendStreamStats *self);

void WebTransportSendStreamStats_set_bytesWritten(WebTransportSendStreamStats* self, long long value);

long long WebTransportSendStreamStats_bytesSent(const WebTransportSendStreamStats *self);

void WebTransportSendStreamStats_set_bytesSent(WebTransportSendStreamStats* self, long long value);

long long WebTransportSendStreamStats_bytesAcknowledged(const WebTransportSendStreamStats *self);

void WebTransportSendStreamStats_set_bytesAcknowledged(WebTransportSendStreamStats* self, long long value);

WebTransportSendStreamStats WebTransportSendStreamStats_new();

#ifdef __cplusplus
}
#endif
