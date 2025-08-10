#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCCodecStats, RTCStats);

unsigned long RTCCodecStats_payloadType(const RTCCodecStats *self);

void RTCCodecStats_set_payloadType(RTCCodecStats* self, unsigned long value);

jb_String RTCCodecStats_transportId(const RTCCodecStats *self);

void RTCCodecStats_set_transportId(RTCCodecStats* self, jb_String * value);

jb_String RTCCodecStats_mimeType(const RTCCodecStats *self);

void RTCCodecStats_set_mimeType(RTCCodecStats* self, jb_String * value);

unsigned long RTCCodecStats_clockRate(const RTCCodecStats *self);

void RTCCodecStats_set_clockRate(RTCCodecStats* self, unsigned long value);

unsigned long RTCCodecStats_channels(const RTCCodecStats *self);

void RTCCodecStats_set_channels(RTCCodecStats* self, unsigned long value);

jb_String RTCCodecStats_sdpFmtpLine(const RTCCodecStats *self);

void RTCCodecStats_set_sdpFmtpLine(RTCCodecStats* self, jb_String * value);

RTCCodecStats RTCCodecStats_new();

#ifdef __cplusplus
}
#endif
