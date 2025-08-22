#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportSendStreamStats */
DECLARE_EMLITE_TYPE(WebTransportSendStreamStats, em_Val);

/** @brief Getter of the bytesWritten property */
long long WebTransportSendStreamStats_bytesWritten(const WebTransportSendStreamStats *self);

/** @brief Setter of the bytesWritten property */
void WebTransportSendStreamStats_set_bytesWritten(WebTransportSendStreamStats* self, long long value);

/** @brief Getter of the bytesSent property */
long long WebTransportSendStreamStats_bytesSent(const WebTransportSendStreamStats *self);

/** @brief Setter of the bytesSent property */
void WebTransportSendStreamStats_set_bytesSent(WebTransportSendStreamStats* self, long long value);

/** @brief Getter of the bytesAcknowledged property */
long long WebTransportSendStreamStats_bytesAcknowledged(const WebTransportSendStreamStats *self);

/** @brief Setter of the bytesAcknowledged property */
void WebTransportSendStreamStats_set_bytesAcknowledged(WebTransportSendStreamStats* self, long long value);

/** @brief Constructor of the WebTransportSendStreamStats dictionary type */
WebTransportSendStreamStats WebTransportSendStreamStats_new();

#ifdef __cplusplus
}
#endif
