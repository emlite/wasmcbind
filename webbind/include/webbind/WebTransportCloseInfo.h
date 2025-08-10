#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WebTransportCloseInfo, em_Val);

unsigned long WebTransportCloseInfo_closeCode(const WebTransportCloseInfo *self);

void WebTransportCloseInfo_set_closeCode(WebTransportCloseInfo* self, unsigned long value);

jb_String WebTransportCloseInfo_reason(const WebTransportCloseInfo *self);

void WebTransportCloseInfo_set_reason(WebTransportCloseInfo* self, jb_String * value);

WebTransportCloseInfo WebTransportCloseInfo_new();

#ifdef __cplusplus
}
#endif
