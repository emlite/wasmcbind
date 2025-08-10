#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpParameters.h"
#include "RTCRtpEncodingParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpSendParameters, RTCRtpParameters);

jb_String RTCRtpSendParameters_transactionId(const RTCRtpSendParameters *self);

void RTCRtpSendParameters_set_transactionId(RTCRtpSendParameters* self, jb_String * value);

jb_Array RTCRtpSendParameters_encodings(const RTCRtpSendParameters *self);

void RTCRtpSendParameters_set_encodings(RTCRtpSendParameters* self, jb_Array * value);

RTCRtpSendParameters RTCRtpSendParameters_new();

#ifdef __cplusplus
}
#endif
