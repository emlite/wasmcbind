#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCIceCandidateInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCLocalIceCandidateInit */
DECLARE_EMLITE_TYPE(RTCLocalIceCandidateInit, RTCIceCandidateInit);

/** @brief Getter of the relayProtocol property */
RTCIceServerTransportProtocol RTCLocalIceCandidateInit_relayProtocol(const RTCLocalIceCandidateInit *self);

/** @brief Setter of the relayProtocol property */
void RTCLocalIceCandidateInit_set_relayProtocol(RTCLocalIceCandidateInit* self, RTCIceServerTransportProtocol * value);

/** @brief Getter of the url property */
jb_String RTCLocalIceCandidateInit_url(const RTCLocalIceCandidateInit *self);

/** @brief Setter of the url property */
void RTCLocalIceCandidateInit_set_url(RTCLocalIceCandidateInit* self, jb_String * value);

/** @brief Constructor of the RTCLocalIceCandidateInit dictionary type */
RTCLocalIceCandidateInit RTCLocalIceCandidateInit_new();

#ifdef __cplusplus
}
#endif
