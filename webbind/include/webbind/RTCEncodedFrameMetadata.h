#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RTCEncodedFrameMetadata, em_Val);

unsigned long RTCEncodedFrameMetadata_synchronizationSource(const RTCEncodedFrameMetadata *self);

void RTCEncodedFrameMetadata_set_synchronizationSource(RTCEncodedFrameMetadata* self, unsigned long value);

unsigned char RTCEncodedFrameMetadata_payloadType(const RTCEncodedFrameMetadata *self);

void RTCEncodedFrameMetadata_set_payloadType(RTCEncodedFrameMetadata* self, unsigned char value);

jb_Array RTCEncodedFrameMetadata_contributingSources(const RTCEncodedFrameMetadata *self);

void RTCEncodedFrameMetadata_set_contributingSources(RTCEncodedFrameMetadata* self, jb_Array * value);

unsigned long RTCEncodedFrameMetadata_rtpTimestamp(const RTCEncodedFrameMetadata *self);

void RTCEncodedFrameMetadata_set_rtpTimestamp(RTCEncodedFrameMetadata* self, unsigned long value);

jb_Any RTCEncodedFrameMetadata_receiveTime(const RTCEncodedFrameMetadata *self);

void RTCEncodedFrameMetadata_set_receiveTime(RTCEncodedFrameMetadata* self, jb_Any * value);

jb_Any RTCEncodedFrameMetadata_captureTime(const RTCEncodedFrameMetadata *self);

void RTCEncodedFrameMetadata_set_captureTime(RTCEncodedFrameMetadata* self, jb_Any * value);

jb_Any RTCEncodedFrameMetadata_senderCaptureTimeOffset(const RTCEncodedFrameMetadata *self);

void RTCEncodedFrameMetadata_set_senderCaptureTimeOffset(RTCEncodedFrameMetadata* self, jb_Any * value);

jb_String RTCEncodedFrameMetadata_mimeType(const RTCEncodedFrameMetadata *self);

void RTCEncodedFrameMetadata_set_mimeType(RTCEncodedFrameMetadata* self, jb_String * value);

RTCEncodedFrameMetadata RTCEncodedFrameMetadata_new();

#ifdef __cplusplus
}
#endif
