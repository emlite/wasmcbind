#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportSendGroup WebTransportSendGroup;

DECLARE_EMLITE_TYPE(WebTransportSendOptions, em_Val);

WebTransportSendGroup WebTransportSendOptions_sendGroup(const WebTransportSendOptions *self);

void WebTransportSendOptions_set_sendGroup(WebTransportSendOptions* self, WebTransportSendGroup * value);

long long WebTransportSendOptions_sendOrder(const WebTransportSendOptions *self);

void WebTransportSendOptions_set_sendOrder(WebTransportSendOptions* self, long long value);

WebTransportSendOptions WebTransportSendOptions_new();

#ifdef __cplusplus
}
#endif
