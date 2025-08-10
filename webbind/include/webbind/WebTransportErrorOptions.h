#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportErrorOptions, em_Val);

WebTransportErrorSource WebTransportErrorOptions_source(const WebTransportErrorOptions *self);

void WebTransportErrorOptions_set_source(WebTransportErrorOptions* self, WebTransportErrorSource * value);

unsigned long WebTransportErrorOptions_streamErrorCode(const WebTransportErrorOptions *self);

void WebTransportErrorOptions_set_streamErrorCode(WebTransportErrorOptions* self, unsigned long value);

WebTransportErrorOptions WebTransportErrorOptions_new();

#ifdef __cplusplus
}
#endif
