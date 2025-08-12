#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RTCEncodedFrameMetadata */
DECLARE_EMLITE_TYPE(RTCEncodedFrameMetadata, em_Val);

/** @brief Getter of the synchronizationSource property */
unsigned long RTCEncodedFrameMetadata_synchronizationSource(const RTCEncodedFrameMetadata *self);

/** @brief Setter of the synchronizationSource property */
void RTCEncodedFrameMetadata_set_synchronizationSource(RTCEncodedFrameMetadata* self, unsigned long value);

/** @brief Getter of the payloadType property */
unsigned char RTCEncodedFrameMetadata_payloadType(const RTCEncodedFrameMetadata *self);

/** @brief Setter of the payloadType property */
void RTCEncodedFrameMetadata_set_payloadType(RTCEncodedFrameMetadata* self, unsigned char value);

/** @brief Getter of the contributingSources property */
jb_Array RTCEncodedFrameMetadata_contributingSources(const RTCEncodedFrameMetadata *self);

/** @brief Setter of the contributingSources property */
void RTCEncodedFrameMetadata_set_contributingSources(RTCEncodedFrameMetadata* self, jb_Array * value);

/** @brief Getter of the rtpTimestamp property */
unsigned long RTCEncodedFrameMetadata_rtpTimestamp(const RTCEncodedFrameMetadata *self);

/** @brief Setter of the rtpTimestamp property */
void RTCEncodedFrameMetadata_set_rtpTimestamp(RTCEncodedFrameMetadata* self, unsigned long value);

/** @brief Getter of the receiveTime property */
jb_Any RTCEncodedFrameMetadata_receiveTime(const RTCEncodedFrameMetadata *self);

/** @brief Setter of the receiveTime property */
void RTCEncodedFrameMetadata_set_receiveTime(RTCEncodedFrameMetadata* self, jb_Any * value);

/** @brief Getter of the captureTime property */
jb_Any RTCEncodedFrameMetadata_captureTime(const RTCEncodedFrameMetadata *self);

/** @brief Setter of the captureTime property */
void RTCEncodedFrameMetadata_set_captureTime(RTCEncodedFrameMetadata* self, jb_Any * value);

/** @brief Getter of the senderCaptureTimeOffset property */
jb_Any RTCEncodedFrameMetadata_senderCaptureTimeOffset(const RTCEncodedFrameMetadata *self);

/** @brief Setter of the senderCaptureTimeOffset property */
void RTCEncodedFrameMetadata_set_senderCaptureTimeOffset(RTCEncodedFrameMetadata* self, jb_Any * value);

/** @brief Getter of the mimeType property */
jb_String RTCEncodedFrameMetadata_mimeType(const RTCEncodedFrameMetadata *self);

/** @brief Setter of the mimeType property */
void RTCEncodedFrameMetadata_set_mimeType(RTCEncodedFrameMetadata* self, jb_String * value);

/** @brief Constructor of the RTCEncodedFrameMetadata dictionary type */
RTCEncodedFrameMetadata RTCEncodedFrameMetadata_new();

#ifdef __cplusplus
}
#endif
