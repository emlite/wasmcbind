#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WebTransportSendOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportSendStreamOptions, WebTransportSendOptions);

bool WebTransportSendStreamOptions_waitUntilAvailable(const WebTransportSendStreamOptions *self);

void WebTransportSendStreamOptions_set_waitUntilAvailable(WebTransportSendStreamOptions* self, bool value);

WebTransportSendStreamOptions WebTransportSendStreamOptions_new();

#ifdef __cplusplus
}
#endif
