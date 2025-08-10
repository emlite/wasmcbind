#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportDatagramStats, em_Val);

long long WebTransportDatagramStats_droppedIncoming(const WebTransportDatagramStats *self);

void WebTransportDatagramStats_set_droppedIncoming(WebTransportDatagramStats* self, long long value);

long long WebTransportDatagramStats_expiredIncoming(const WebTransportDatagramStats *self);

void WebTransportDatagramStats_set_expiredIncoming(WebTransportDatagramStats* self, long long value);

long long WebTransportDatagramStats_expiredOutgoing(const WebTransportDatagramStats *self);

void WebTransportDatagramStats_set_expiredOutgoing(WebTransportDatagramStats* self, long long value);

long long WebTransportDatagramStats_lostOutgoing(const WebTransportDatagramStats *self);

void WebTransportDatagramStats_set_lostOutgoing(WebTransportDatagramStats* self, long long value);

WebTransportDatagramStats WebTransportDatagramStats_new();

#ifdef __cplusplus
}
#endif
