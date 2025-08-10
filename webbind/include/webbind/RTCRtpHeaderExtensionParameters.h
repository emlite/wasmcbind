#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpHeaderExtensionParameters, em_Val);

jb_String RTCRtpHeaderExtensionParameters_uri(const RTCRtpHeaderExtensionParameters *self);

void RTCRtpHeaderExtensionParameters_set_uri(RTCRtpHeaderExtensionParameters* self, jb_String * value);

unsigned short RTCRtpHeaderExtensionParameters_id(const RTCRtpHeaderExtensionParameters *self);

void RTCRtpHeaderExtensionParameters_set_id(RTCRtpHeaderExtensionParameters* self, unsigned short value);

bool RTCRtpHeaderExtensionParameters_encrypted(const RTCRtpHeaderExtensionParameters *self);

void RTCRtpHeaderExtensionParameters_set_encrypted(RTCRtpHeaderExtensionParameters* self, bool value);

RTCRtpHeaderExtensionParameters RTCRtpHeaderExtensionParameters_new();

#ifdef __cplusplus
}
#endif
