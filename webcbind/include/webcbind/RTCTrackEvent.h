#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCTrackEventInit RTCTrackEventInit;
typedef struct RTCRtpReceiver RTCRtpReceiver;
typedef struct MediaStreamTrack MediaStreamTrack;
typedef struct MediaStream MediaStream;
typedef struct RTCRtpTransceiver RTCRtpTransceiver;


/**
 * @brief Interface RTCTrackEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RTCTrackEvent)
 */
DECLARE_EMLITE_TYPE(RTCTrackEvent, Event);

/**
 * @brief Creates a new `RTCTrackEvent` object. 
*/
RTCTrackEvent RTCTrackEvent_new(jb_String * type, RTCTrackEventInit * eventInitDict);

/**
 * @brief Gets the `receiver` property. 
*/
RTCRtpReceiver RTCTrackEvent_receiver(const RTCTrackEvent *self);

/**
 * @brief Gets the `track` property. 
*/
MediaStreamTrack RTCTrackEvent_track(const RTCTrackEvent *self);

/**
 * @brief Gets the `streams` property. 
*/
jb_Array RTCTrackEvent_streams(const RTCTrackEvent *self);

/**
 * @brief Gets the `transceiver` property. 
*/
RTCRtpTransceiver RTCTrackEvent_transceiver(const RTCTrackEvent *self);

#ifdef __cplusplus
}
#endif
