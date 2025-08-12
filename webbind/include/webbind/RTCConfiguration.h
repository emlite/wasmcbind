#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCIceServer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCCertificate RTCCertificate;

/** @brief Dictionary type RTCConfiguration */
DECLARE_EMLITE_TYPE(RTCConfiguration, em_Val);

/** @brief Getter of the iceServers property */
jb_Array RTCConfiguration_iceServers(const RTCConfiguration *self);

/** @brief Setter of the iceServers property */
void RTCConfiguration_set_iceServers(RTCConfiguration* self, jb_Array * value);

/** @brief Getter of the iceTransportPolicy property */
RTCIceTransportPolicy RTCConfiguration_iceTransportPolicy(const RTCConfiguration *self);

/** @brief Setter of the iceTransportPolicy property */
void RTCConfiguration_set_iceTransportPolicy(RTCConfiguration* self, RTCIceTransportPolicy * value);

/** @brief Getter of the bundlePolicy property */
RTCBundlePolicy RTCConfiguration_bundlePolicy(const RTCConfiguration *self);

/** @brief Setter of the bundlePolicy property */
void RTCConfiguration_set_bundlePolicy(RTCConfiguration* self, RTCBundlePolicy * value);

/** @brief Getter of the rtcpMuxPolicy property */
RTCRtcpMuxPolicy RTCConfiguration_rtcpMuxPolicy(const RTCConfiguration *self);

/** @brief Setter of the rtcpMuxPolicy property */
void RTCConfiguration_set_rtcpMuxPolicy(RTCConfiguration* self, RTCRtcpMuxPolicy * value);

/** @brief Getter of the certificates property */
jb_Array RTCConfiguration_certificates(const RTCConfiguration *self);

/** @brief Setter of the certificates property */
void RTCConfiguration_set_certificates(RTCConfiguration* self, jb_Array * value);

/** @brief Getter of the iceCandidatePoolSize property */
unsigned char RTCConfiguration_iceCandidatePoolSize(const RTCConfiguration *self);

/** @brief Setter of the iceCandidatePoolSize property */
void RTCConfiguration_set_iceCandidatePoolSize(RTCConfiguration* self, unsigned char value);

/** @brief Constructor of the RTCConfiguration dictionary type */
RTCConfiguration RTCConfiguration_new();

#ifdef __cplusplus
}
#endif
