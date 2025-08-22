#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationPlaybackEventInit AnimationPlaybackEventInit;


/**
 * @brief Interface AnimationPlaybackEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AnimationPlaybackEvent)
 */
DECLARE_EMLITE_TYPE(AnimationPlaybackEvent, Event);

/**
 * @brief Creates a new `AnimationPlaybackEvent` object. 
*/
AnimationPlaybackEvent AnimationPlaybackEvent_new0(jb_String * type);

/**
 * @brief Creates a new `AnimationPlaybackEvent` object. 
*/
AnimationPlaybackEvent AnimationPlaybackEvent_new1(jb_String * type, AnimationPlaybackEventInit * eventInitDict);

/**
 * @brief Gets the `currentTime` property. 
*/
jb_Any AnimationPlaybackEvent_currentTime(const AnimationPlaybackEvent *self);

/**
 * @brief Gets the `timelineTime` property. 
*/
jb_Any AnimationPlaybackEvent_timelineTime(const AnimationPlaybackEvent *self);

#ifdef __cplusplus
}
#endif
