#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WritableStream.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportSendGroup WebTransportSendGroup;
typedef struct WebTransportSendStreamStats WebTransportSendStreamStats;
typedef struct WebTransportWriter WebTransportWriter;

DECLARE_EMLITE_TYPE(WebTransportSendStream, WritableStream);

WebTransportSendGroup WebTransportSendStream_sendGroup(const WebTransportSendStream *self);

void WebTransportSendStream_set_sendGroup(WebTransportSendStream* self, WebTransportSendGroup * value);

long long WebTransportSendStream_sendOrder(const WebTransportSendStream *self);

void WebTransportSendStream_set_sendOrder(WebTransportSendStream* self, long long value);

jb_Promise WebTransportSendStream_getStats(WebTransportSendStream* self );

WebTransportWriter WebTransportSendStream_getWriter(WebTransportSendStream* self );

#ifdef __cplusplus
}
#endif
