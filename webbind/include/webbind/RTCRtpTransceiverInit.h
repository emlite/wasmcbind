#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpEncodingParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStream MediaStream;

DECLARE_EMLITE_TYPE(RTCRtpTransceiverInit, em_Val);

RTCRtpTransceiverDirection RTCRtpTransceiverInit_direction(const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_direction(RTCRtpTransceiverInit* self, RTCRtpTransceiverDirection * value);

jb_Array RTCRtpTransceiverInit_streams(const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_streams(RTCRtpTransceiverInit* self, jb_Array * value);

jb_Array RTCRtpTransceiverInit_sendEncodings(const RTCRtpTransceiverInit *self);

void RTCRtpTransceiverInit_set_sendEncodings(RTCRtpTransceiverInit* self, jb_Array * value);

RTCRtpTransceiverInit RTCRtpTransceiverInit_new();

#ifdef __cplusplus
}
#endif
