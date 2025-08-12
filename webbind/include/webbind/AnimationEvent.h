#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationEventInit AnimationEventInit;


/**
 * @brief Interface AnimationEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEvent)
 */
DECLARE_EMLITE_TYPE(AnimationEvent, Event);

/**
 * @brief Creates a new `AnimationEvent` object. 
*/
AnimationEvent AnimationEvent_new0(jb_String * type);

/**
 * @brief Creates a new `AnimationEvent` object. 
*/
AnimationEvent AnimationEvent_new1(jb_String * type, AnimationEventInit * animationEventInitDict);

/**
 * @brief Gets the `animationName` property. 
*/
jb_String AnimationEvent_animationName(const AnimationEvent *self);

/**
 * @brief Gets the `elapsedTime` property. 
*/
double AnimationEvent_elapsedTime(const AnimationEvent *self);

/**
 * @brief Gets the `pseudoElement` property. 
*/
jb_String AnimationEvent_pseudoElement(const AnimationEvent *self);

#ifdef __cplusplus
}
#endif
