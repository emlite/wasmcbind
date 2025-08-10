#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpHeaderExtensionParameters.h"
#include "RTCRtcpParameters.h"
#include "RTCRtpCodecParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpParameters, em_Val);

jb_Array RTCRtpParameters_headerExtensions(const RTCRtpParameters *self);

void RTCRtpParameters_set_headerExtensions(RTCRtpParameters* self, jb_Array * value);

RTCRtcpParameters RTCRtpParameters_rtcp(const RTCRtpParameters *self);

void RTCRtpParameters_set_rtcp(RTCRtpParameters* self, RTCRtcpParameters * value);

jb_Array RTCRtpParameters_codecs(const RTCRtpParameters *self);

void RTCRtpParameters_set_codecs(RTCRtpParameters* self, jb_Array * value);

RTCRtpParameters RTCRtpParameters_new();

#ifdef __cplusplus
}
#endif
