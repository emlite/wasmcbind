#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "WebTransportDatagramStats.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportConnectionStats */
DECLARE_EMLITE_TYPE(WebTransportConnectionStats, em_Val);

/** @brief Getter of the bytesSent property */
long long WebTransportConnectionStats_bytesSent(const WebTransportConnectionStats *self);

/** @brief Setter of the bytesSent property */
void WebTransportConnectionStats_set_bytesSent(WebTransportConnectionStats* self, long long value);

/** @brief Getter of the packetsSent property */
long long WebTransportConnectionStats_packetsSent(const WebTransportConnectionStats *self);

/** @brief Setter of the packetsSent property */
void WebTransportConnectionStats_set_packetsSent(WebTransportConnectionStats* self, long long value);

/** @brief Getter of the bytesLost property */
long long WebTransportConnectionStats_bytesLost(const WebTransportConnectionStats *self);

/** @brief Setter of the bytesLost property */
void WebTransportConnectionStats_set_bytesLost(WebTransportConnectionStats* self, long long value);

/** @brief Getter of the packetsLost property */
long long WebTransportConnectionStats_packetsLost(const WebTransportConnectionStats *self);

/** @brief Setter of the packetsLost property */
void WebTransportConnectionStats_set_packetsLost(WebTransportConnectionStats* self, long long value);

/** @brief Getter of the bytesReceived property */
long long WebTransportConnectionStats_bytesReceived(const WebTransportConnectionStats *self);

/** @brief Setter of the bytesReceived property */
void WebTransportConnectionStats_set_bytesReceived(WebTransportConnectionStats* self, long long value);

/** @brief Getter of the packetsReceived property */
long long WebTransportConnectionStats_packetsReceived(const WebTransportConnectionStats *self);

/** @brief Setter of the packetsReceived property */
void WebTransportConnectionStats_set_packetsReceived(WebTransportConnectionStats* self, long long value);

/** @brief Getter of the smoothedRtt property */
jb_Any WebTransportConnectionStats_smoothedRtt(const WebTransportConnectionStats *self);

/** @brief Setter of the smoothedRtt property */
void WebTransportConnectionStats_set_smoothedRtt(WebTransportConnectionStats* self, jb_Any * value);

/** @brief Getter of the rttVariation property */
jb_Any WebTransportConnectionStats_rttVariation(const WebTransportConnectionStats *self);

/** @brief Setter of the rttVariation property */
void WebTransportConnectionStats_set_rttVariation(WebTransportConnectionStats* self, jb_Any * value);

/** @brief Getter of the minRtt property */
jb_Any WebTransportConnectionStats_minRtt(const WebTransportConnectionStats *self);

/** @brief Setter of the minRtt property */
void WebTransportConnectionStats_set_minRtt(WebTransportConnectionStats* self, jb_Any * value);

/** @brief Getter of the datagrams property */
WebTransportDatagramStats WebTransportConnectionStats_datagrams(const WebTransportConnectionStats *self);

/** @brief Setter of the datagrams property */
void WebTransportConnectionStats_set_datagrams(WebTransportConnectionStats* self, WebTransportDatagramStats * value);

/** @brief Getter of the estimatedSendRate property */
long long WebTransportConnectionStats_estimatedSendRate(const WebTransportConnectionStats *self);

/** @brief Setter of the estimatedSendRate property */
void WebTransportConnectionStats_set_estimatedSendRate(WebTransportConnectionStats* self, long long value);

/** @brief Getter of the atSendCapacity property */
bool WebTransportConnectionStats_atSendCapacity(const WebTransportConnectionStats *self);

/** @brief Setter of the atSendCapacity property */
void WebTransportConnectionStats_set_atSendCapacity(WebTransportConnectionStats* self, bool value);

/** @brief Constructor of the WebTransportConnectionStats dictionary type */
WebTransportConnectionStats WebTransportConnectionStats_new();

#ifdef __cplusplus
}
#endif
