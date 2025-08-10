#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpCodingParameters, em_Val);

jb_String RTCRtpCodingParameters_rid(const RTCRtpCodingParameters *self);

void RTCRtpCodingParameters_set_rid(RTCRtpCodingParameters* self, jb_String * value);

RTCRtpCodingParameters RTCRtpCodingParameters_new();

#ifdef __cplusplus
}
#endif
