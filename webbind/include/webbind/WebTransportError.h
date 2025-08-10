#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportErrorOptions WebTransportErrorOptions;

DECLARE_EMLITE_TYPE(WebTransportError, DOMException);

WebTransportError WebTransportError_new0();

WebTransportError WebTransportError_new1(jb_String * message);

WebTransportError WebTransportError_new2(jb_String * message, WebTransportErrorOptions * options);

WebTransportErrorSource WebTransportError_source(const WebTransportError *self);

unsigned long WebTransportError_streamErrorCode(const WebTransportError *self);

#ifdef __cplusplus
}
#endif
