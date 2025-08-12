#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WebTransportSendOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportSendStreamOptions */
DECLARE_EMLITE_TYPE(WebTransportSendStreamOptions, WebTransportSendOptions);

/** @brief Getter of the waitUntilAvailable property */
bool WebTransportSendStreamOptions_waitUntilAvailable(const WebTransportSendStreamOptions *self);

/** @brief Setter of the waitUntilAvailable property */
void WebTransportSendStreamOptions_set_waitUntilAvailable(WebTransportSendStreamOptions* self, bool value);

/** @brief Constructor of the WebTransportSendStreamOptions dictionary type */
WebTransportSendStreamOptions WebTransportSendStreamOptions_new();

#ifdef __cplusplus
}
#endif
