#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpHeaderExtensionCapability, em_Val);

jb_String RTCRtpHeaderExtensionCapability_uri(const RTCRtpHeaderExtensionCapability *self);

void RTCRtpHeaderExtensionCapability_set_uri(RTCRtpHeaderExtensionCapability* self, jb_String * value);

RTCRtpHeaderExtensionCapability RTCRtpHeaderExtensionCapability_new();

#ifdef __cplusplus
}
#endif
