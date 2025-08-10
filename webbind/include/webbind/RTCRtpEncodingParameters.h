#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpCodingParameters.h"
#include "RTCRtpCodec.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpEncodingParameters, RTCRtpCodingParameters);

bool RTCRtpEncodingParameters_active(const RTCRtpEncodingParameters *self);

void RTCRtpEncodingParameters_set_active(RTCRtpEncodingParameters* self, bool value);

RTCRtpCodec RTCRtpEncodingParameters_codec(const RTCRtpEncodingParameters *self);

void RTCRtpEncodingParameters_set_codec(RTCRtpEncodingParameters* self, RTCRtpCodec * value);

unsigned long RTCRtpEncodingParameters_maxBitrate(const RTCRtpEncodingParameters *self);

void RTCRtpEncodingParameters_set_maxBitrate(RTCRtpEncodingParameters* self, unsigned long value);

double RTCRtpEncodingParameters_maxFramerate(const RTCRtpEncodingParameters *self);

void RTCRtpEncodingParameters_set_maxFramerate(RTCRtpEncodingParameters* self, double value);

double RTCRtpEncodingParameters_scaleResolutionDownBy(const RTCRtpEncodingParameters *self);

void RTCRtpEncodingParameters_set_scaleResolutionDownBy(RTCRtpEncodingParameters* self, double value);

RTCRtpEncodingParameters RTCRtpEncodingParameters_new();

#ifdef __cplusplus
}
#endif
