#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrackEventInit MediaStreamTrackEventInit;
typedef struct MediaStreamTrack MediaStreamTrack;


/**
 * @brief Interface MediaStreamTrackEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackEvent)
 */
DECLARE_EMLITE_TYPE(MediaStreamTrackEvent, Event);

/**
 * @brief Creates a new `MediaStreamTrackEvent` object. 
*/
MediaStreamTrackEvent MediaStreamTrackEvent_new(jb_String * type, MediaStreamTrackEventInit * eventInitDict);

/**
 * @brief Gets the `track` property. 
*/
MediaStreamTrack MediaStreamTrackEvent_track(const MediaStreamTrackEvent *self);

#ifdef __cplusplus
}
#endif
