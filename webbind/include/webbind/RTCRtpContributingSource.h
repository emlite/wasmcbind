#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCRtpContributingSource, em_Val);

jb_Any RTCRtpContributingSource_timestamp(const RTCRtpContributingSource *self);

void RTCRtpContributingSource_set_timestamp(RTCRtpContributingSource* self, jb_Any * value);

unsigned long RTCRtpContributingSource_source(const RTCRtpContributingSource *self);

void RTCRtpContributingSource_set_source(RTCRtpContributingSource* self, unsigned long value);

double RTCRtpContributingSource_audioLevel(const RTCRtpContributingSource *self);

void RTCRtpContributingSource_set_audioLevel(RTCRtpContributingSource* self, double value);

unsigned long RTCRtpContributingSource_rtpTimestamp(const RTCRtpContributingSource *self);

void RTCRtpContributingSource_set_rtpTimestamp(RTCRtpContributingSource* self, unsigned long value);

RTCRtpContributingSource RTCRtpContributingSource_new();

#ifdef __cplusplus
}
#endif
