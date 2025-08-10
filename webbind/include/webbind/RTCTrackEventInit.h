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

DECLARE_EMLITE_TYPE(RTCTrackEventInit, EventInit);

RTCRtpReceiver RTCTrackEventInit_receiver(const RTCTrackEventInit *self);

void RTCTrackEventInit_set_receiver(RTCTrackEventInit* self, RTCRtpReceiver * value);

MediaStreamTrack RTCTrackEventInit_track(const RTCTrackEventInit *self);

void RTCTrackEventInit_set_track(RTCTrackEventInit* self, MediaStreamTrack * value);

jb_Array RTCTrackEventInit_streams(const RTCTrackEventInit *self);

void RTCTrackEventInit_set_streams(RTCTrackEventInit* self, jb_Array * value);

RTCRtpTransceiver RTCTrackEventInit_transceiver(const RTCTrackEventInit *self);

void RTCTrackEventInit_set_transceiver(RTCTrackEventInit* self, RTCRtpTransceiver * value);

RTCTrackEventInit RTCTrackEventInit_new();

#ifdef __cplusplus
}
#endif
