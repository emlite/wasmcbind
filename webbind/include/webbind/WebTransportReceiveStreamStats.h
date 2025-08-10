#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportReceiveStreamStats, em_Val);

long long WebTransportReceiveStreamStats_bytesReceived(const WebTransportReceiveStreamStats *self);

void WebTransportReceiveStreamStats_set_bytesReceived(WebTransportReceiveStreamStats* self, long long value);

long long WebTransportReceiveStreamStats_bytesRead(const WebTransportReceiveStreamStats *self);

void WebTransportReceiveStreamStats_set_bytesRead(WebTransportReceiveStreamStats* self, long long value);

WebTransportReceiveStreamStats WebTransportReceiveStreamStats_new();

#ifdef __cplusplus
}
#endif
