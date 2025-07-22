#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct RTCRtpReceiver RTCRtpReceiver;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStream MediaStream;
typedef struct RTCRtpTransceiver RTCRtpTransceiver;


typedef struct {
  Event inner;
} RTCTrackEvent;


DECLARE_EMLITE_TYPE(RTCTrackEvent, Event);

RTCTrackEvent RTCTrackEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

RTCRtpReceiver RTCTrackEvent_receiver( const RTCTrackEvent *self);

MediaStreamTrack RTCTrackEvent_track( const RTCTrackEvent *self);

jb_FrozenArray RTCTrackEvent_streams( const RTCTrackEvent *self);

RTCRtpTransceiver RTCTrackEvent_transceiver( const RTCTrackEvent *self);
