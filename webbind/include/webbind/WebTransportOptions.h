#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WebTransportHash.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportOptions */
DECLARE_EMLITE_TYPE(WebTransportOptions, em_Val);

/** @brief Getter of the allowPooling property */
bool WebTransportOptions_allowPooling(const WebTransportOptions *self);

/** @brief Setter of the allowPooling property */
void WebTransportOptions_set_allowPooling(WebTransportOptions* self, bool value);

/** @brief Getter of the requireUnreliable property */
bool WebTransportOptions_requireUnreliable(const WebTransportOptions *self);

/** @brief Setter of the requireUnreliable property */
void WebTransportOptions_set_requireUnreliable(WebTransportOptions* self, bool value);

/** @brief Getter of the serverCertificateHashes property */
jb_Array WebTransportOptions_serverCertificateHashes(const WebTransportOptions *self);

/** @brief Setter of the serverCertificateHashes property */
void WebTransportOptions_set_serverCertificateHashes(WebTransportOptions* self, jb_Array * value);

/** @brief Getter of the congestionControl property */
WebTransportCongestionControl WebTransportOptions_congestionControl(const WebTransportOptions *self);

/** @brief Setter of the congestionControl property */
void WebTransportOptions_set_congestionControl(WebTransportOptions* self, WebTransportCongestionControl * value);

/** @brief Getter of the anticipatedConcurrentIncomingUnidirectionalStreams property */
unsigned short WebTransportOptions_anticipatedConcurrentIncomingUnidirectionalStreams(const WebTransportOptions *self);

/** @brief Setter of the anticipatedConcurrentIncomingUnidirectionalStreams property */
void WebTransportOptions_set_anticipatedConcurrentIncomingUnidirectionalStreams(WebTransportOptions* self, unsigned short value);

/** @brief Getter of the anticipatedConcurrentIncomingBidirectionalStreams property */
unsigned short WebTransportOptions_anticipatedConcurrentIncomingBidirectionalStreams(const WebTransportOptions *self);

/** @brief Setter of the anticipatedConcurrentIncomingBidirectionalStreams property */
void WebTransportOptions_set_anticipatedConcurrentIncomingBidirectionalStreams(WebTransportOptions* self, unsigned short value);

/** @brief Getter of the protocols property */
jb_Array WebTransportOptions_protocols(const WebTransportOptions *self);

/** @brief Setter of the protocols property */
void WebTransportOptions_set_protocols(WebTransportOptions* self, jb_Array * value);

/** @brief Getter of the datagramsReadableMode property */
DatagramsReadableMode WebTransportOptions_datagramsReadableMode(const WebTransportOptions *self);

/** @brief Setter of the datagramsReadableMode property */
void WebTransportOptions_set_datagramsReadableMode(WebTransportOptions* self, DatagramsReadableMode * value);

/** @brief Constructor of the WebTransportOptions dictionary type */
WebTransportOptions WebTransportOptions_new();

#ifdef __cplusplus
}
#endif
