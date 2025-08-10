#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpCodec.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpCodecParameters, RTCRtpCodec);

unsigned char RTCRtpCodecParameters_payloadType(const RTCRtpCodecParameters *self);

void RTCRtpCodecParameters_set_payloadType(RTCRtpCodecParameters* self, unsigned char value);

RTCRtpCodecParameters RTCRtpCodecParameters_new();

#ifdef __cplusplus
}
#endif
