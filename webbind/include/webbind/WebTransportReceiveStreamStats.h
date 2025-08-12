#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportReceiveStreamStats */
DECLARE_EMLITE_TYPE(WebTransportReceiveStreamStats, em_Val);

/** @brief Getter of the bytesReceived property */
long long WebTransportReceiveStreamStats_bytesReceived(const WebTransportReceiveStreamStats *self);

/** @brief Setter of the bytesReceived property */
void WebTransportReceiveStreamStats_set_bytesReceived(WebTransportReceiveStreamStats* self, long long value);

/** @brief Getter of the bytesRead property */
long long WebTransportReceiveStreamStats_bytesRead(const WebTransportReceiveStreamStats *self);

/** @brief Setter of the bytesRead property */
void WebTransportReceiveStreamStats_set_bytesRead(WebTransportReceiveStreamStats* self, long long value);

/** @brief Constructor of the WebTransportReceiveStreamStats dictionary type */
WebTransportReceiveStreamStats WebTransportReceiveStreamStats_new();

#ifdef __cplusplus
}
#endif
