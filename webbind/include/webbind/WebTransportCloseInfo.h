#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportCloseInfo */
DECLARE_EMLITE_TYPE(WebTransportCloseInfo, em_Val);

/** @brief Getter of the closeCode property */
unsigned long WebTransportCloseInfo_closeCode(const WebTransportCloseInfo *self);

/** @brief Setter of the closeCode property */
void WebTransportCloseInfo_set_closeCode(WebTransportCloseInfo* self, unsigned long value);

/** @brief Getter of the reason property */
jb_String WebTransportCloseInfo_reason(const WebTransportCloseInfo *self);

/** @brief Setter of the reason property */
void WebTransportCloseInfo_set_reason(WebTransportCloseInfo* self, jb_String * value);

/** @brief Constructor of the WebTransportCloseInfo dictionary type */
WebTransportCloseInfo WebTransportCloseInfo_new();

#ifdef __cplusplus
}
#endif
