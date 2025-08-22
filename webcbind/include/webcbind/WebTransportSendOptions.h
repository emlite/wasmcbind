#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportSendGroup WebTransportSendGroup;

/** @brief Dictionary type WebTransportSendOptions */
DECLARE_EMLITE_TYPE(WebTransportSendOptions, em_Val);

/** @brief Getter of the sendGroup property */
WebTransportSendGroup WebTransportSendOptions_sendGroup(const WebTransportSendOptions *self);

/** @brief Setter of the sendGroup property */
void WebTransportSendOptions_set_sendGroup(WebTransportSendOptions* self, WebTransportSendGroup * value);

/** @brief Getter of the sendOrder property */
long long WebTransportSendOptions_sendOrder(const WebTransportSendOptions *self);

/** @brief Setter of the sendOrder property */
void WebTransportSendOptions_set_sendOrder(WebTransportSendOptions* self, long long value);

/** @brief Constructor of the WebTransportSendOptions dictionary type */
WebTransportSendOptions WebTransportSendOptions_new();

#ifdef __cplusplus
}
#endif
