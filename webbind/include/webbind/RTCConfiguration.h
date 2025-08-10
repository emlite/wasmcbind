#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCIceServer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCCertificate RTCCertificate;

DECLARE_EMLITE_TYPE(RTCConfiguration, em_Val);

jb_Array RTCConfiguration_iceServers(const RTCConfiguration *self);

void RTCConfiguration_set_iceServers(RTCConfiguration* self, jb_Array * value);

RTCIceTransportPolicy RTCConfiguration_iceTransportPolicy(const RTCConfiguration *self);

void RTCConfiguration_set_iceTransportPolicy(RTCConfiguration* self, RTCIceTransportPolicy * value);

RTCBundlePolicy RTCConfiguration_bundlePolicy(const RTCConfiguration *self);

void RTCConfiguration_set_bundlePolicy(RTCConfiguration* self, RTCBundlePolicy * value);

RTCRtcpMuxPolicy RTCConfiguration_rtcpMuxPolicy(const RTCConfiguration *self);

void RTCConfiguration_set_rtcpMuxPolicy(RTCConfiguration* self, RTCRtcpMuxPolicy * value);

jb_Array RTCConfiguration_certificates(const RTCConfiguration *self);

void RTCConfiguration_set_certificates(RTCConfiguration* self, jb_Array * value);

unsigned char RTCConfiguration_iceCandidatePoolSize(const RTCConfiguration *self);

void RTCConfiguration_set_iceCandidatePoolSize(RTCConfiguration* self, unsigned char value);

RTCConfiguration RTCConfiguration_new();

#ifdef __cplusplus
}
#endif
