#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCRtpReceiver RTCRtpReceiver;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStream MediaStream;
typedef struct RTCRtpTransceiver RTCRtpTransceiver;

/** @brief Dictionary type RTCTrackEventInit */
DECLARE_EMLITE_TYPE(RTCTrackEventInit, EventInit);

/** @brief Getter of the receiver property */
RTCRtpReceiver RTCTrackEventInit_receiver(const RTCTrackEventInit *self);

/** @brief Setter of the receiver property */
void RTCTrackEventInit_set_receiver(RTCTrackEventInit* self, RTCRtpReceiver * value);

/** @brief Getter of the track property */
MediaStreamTrack RTCTrackEventInit_track(const RTCTrackEventInit *self);

/** @brief Setter of the track property */
void RTCTrackEventInit_set_track(RTCTrackEventInit* self, MediaStreamTrack * value);

/** @brief Getter of the streams property */
jb_Array RTCTrackEventInit_streams(const RTCTrackEventInit *self);

/** @brief Setter of the streams property */
void RTCTrackEventInit_set_streams(RTCTrackEventInit* self, jb_Array * value);

/** @brief Getter of the transceiver property */
RTCRtpTransceiver RTCTrackEventInit_transceiver(const RTCTrackEventInit *self);

/** @brief Setter of the transceiver property */
void RTCTrackEventInit_set_transceiver(RTCTrackEventInit* self, RTCRtpTransceiver * value);

/** @brief Constructor of the RTCTrackEventInit dictionary type */
RTCTrackEventInit RTCTrackEventInit_new();

#ifdef __cplusplus
}
#endif
