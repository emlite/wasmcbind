#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportHash, em_Val);

jb_String WebTransportHash_algorithm(const WebTransportHash *self);

void WebTransportHash_set_algorithm(WebTransportHash* self, jb_String * value);

jb_Any WebTransportHash_value(const WebTransportHash *self);

void WebTransportHash_set_value(WebTransportHash* self, jb_Any * value);

WebTransportHash WebTransportHash_new();

#ifdef __cplusplus
}
#endif
