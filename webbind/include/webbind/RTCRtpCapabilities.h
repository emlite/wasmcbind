#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpCodec.h"
#include "RTCRtpHeaderExtensionCapability.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpCapabilities, em_Val);

jb_Array RTCRtpCapabilities_codecs(const RTCRtpCapabilities *self);

void RTCRtpCapabilities_set_codecs(RTCRtpCapabilities* self, jb_Array * value);

jb_Array RTCRtpCapabilities_headerExtensions(const RTCRtpCapabilities *self);

void RTCRtpCapabilities_set_headerExtensions(RTCRtpCapabilities* self, jb_Array * value);

RTCRtpCapabilities RTCRtpCapabilities_new();

#ifdef __cplusplus
}
#endif
