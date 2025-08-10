#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpCodec, em_Val);

jb_String RTCRtpCodec_mimeType(const RTCRtpCodec *self);

void RTCRtpCodec_set_mimeType(RTCRtpCodec* self, jb_String * value);

unsigned long RTCRtpCodec_clockRate(const RTCRtpCodec *self);

void RTCRtpCodec_set_clockRate(RTCRtpCodec* self, unsigned long value);

unsigned short RTCRtpCodec_channels(const RTCRtpCodec *self);

void RTCRtpCodec_set_channels(RTCRtpCodec* self, unsigned short value);

jb_String RTCRtpCodec_sdpFmtpLine(const RTCRtpCodec *self);

void RTCRtpCodec_set_sdpFmtpLine(RTCRtpCodec* self, jb_String * value);

RTCRtpCodec RTCRtpCodec_new();

#ifdef __cplusplus
}
#endif
