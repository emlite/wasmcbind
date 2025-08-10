#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCStats.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpStreamStats, RTCStats);

unsigned long RTCRtpStreamStats_ssrc(const RTCRtpStreamStats *self);

void RTCRtpStreamStats_set_ssrc(RTCRtpStreamStats* self, unsigned long value);

jb_String RTCRtpStreamStats_kind(const RTCRtpStreamStats *self);

void RTCRtpStreamStats_set_kind(RTCRtpStreamStats* self, jb_String * value);

jb_String RTCRtpStreamStats_transportId(const RTCRtpStreamStats *self);

void RTCRtpStreamStats_set_transportId(RTCRtpStreamStats* self, jb_String * value);

jb_String RTCRtpStreamStats_codecId(const RTCRtpStreamStats *self);

void RTCRtpStreamStats_set_codecId(RTCRtpStreamStats* self, jb_String * value);

RTCRtpStreamStats RTCRtpStreamStats_new();

#ifdef __cplusplus
}
#endif
