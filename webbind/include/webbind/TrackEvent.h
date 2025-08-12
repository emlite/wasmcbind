#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TrackEventInit TrackEventInit;


/**
 * @brief Interface TrackEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TrackEvent)
 */
DECLARE_EMLITE_TYPE(TrackEvent, Event);

/**
 * @brief Creates a new `TrackEvent` object. 
*/
TrackEvent TrackEvent_new0(jb_String * type);

/**
 * @brief Creates a new `TrackEvent` object. 
*/
TrackEvent TrackEvent_new1(jb_String * type, TrackEventInit * eventInitDict);

/**
 * @brief Gets the `track` property. 
*/
jb_Any TrackEvent_track(const TrackEvent *self);

#ifdef __cplusplus
}
#endif
