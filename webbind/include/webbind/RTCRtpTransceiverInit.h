#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RTCRtpEncodingParameters.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStream MediaStream;

/** @brief Dictionary type RTCRtpTransceiverInit */
DECLARE_EMLITE_TYPE(RTCRtpTransceiverInit, em_Val);

/** @brief Getter of the direction property */
RTCRtpTransceiverDirection RTCRtpTransceiverInit_direction(const RTCRtpTransceiverInit *self);

/** @brief Setter of the direction property */
void RTCRtpTransceiverInit_set_direction(RTCRtpTransceiverInit* self, RTCRtpTransceiverDirection * value);

/** @brief Getter of the streams property */
jb_Array RTCRtpTransceiverInit_streams(const RTCRtpTransceiverInit *self);

/** @brief Setter of the streams property */
void RTCRtpTransceiverInit_set_streams(RTCRtpTransceiverInit* self, jb_Array * value);

/** @brief Getter of the sendEncodings property */
jb_Array RTCRtpTransceiverInit_sendEncodings(const RTCRtpTransceiverInit *self);

/** @brief Setter of the sendEncodings property */
void RTCRtpTransceiverInit_set_sendEncodings(RTCRtpTransceiverInit* self, jb_Array * value);

/** @brief Constructor of the RTCRtpTransceiverInit dictionary type */
RTCRtpTransceiverInit RTCRtpTransceiverInit_new();

#ifdef __cplusplus
}
#endif
