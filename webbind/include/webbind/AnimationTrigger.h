#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationTriggerOptions AnimationTriggerOptions;
typedef struct AnimationTimeline AnimationTimeline;


/**
 * @brief Interface AnimationTrigger
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTrigger)
 */
DECLARE_EMLITE_TYPE(AnimationTrigger, em_Val);

/**
 * @brief Creates a new `AnimationTrigger` object. 
*/
AnimationTrigger AnimationTrigger_new0();

/**
 * @brief Creates a new `AnimationTrigger` object. 
*/
AnimationTrigger AnimationTrigger_new1(AnimationTriggerOptions * options);

/**
 * @brief Gets the `timeline` property. 
*/
AnimationTimeline AnimationTrigger_timeline(const AnimationTrigger *self);

/**
 * @brief Sets the `timeline` property. 
*/
void AnimationTrigger_set_timeline(AnimationTrigger* self, AnimationTimeline * value);

/**
 * @brief Gets the `behavior` property. 
*/
AnimationTriggerBehavior AnimationTrigger_behavior(const AnimationTrigger *self);

/**
 * @brief Sets the `behavior` property. 
*/
void AnimationTrigger_set_behavior(AnimationTrigger* self, AnimationTriggerBehavior * value);

/**
 * @brief Gets the `rangeStart` property. 
*/
jb_Any AnimationTrigger_rangeStart(const AnimationTrigger *self);

/**
 * @brief Sets the `rangeStart` property. 
*/
void AnimationTrigger_set_rangeStart(AnimationTrigger* self, jb_Any * value);

/**
 * @brief Gets the `rangeEnd` property. 
*/
jb_Any AnimationTrigger_rangeEnd(const AnimationTrigger *self);

/**
 * @brief Sets the `rangeEnd` property. 
*/
void AnimationTrigger_set_rangeEnd(AnimationTrigger* self, jb_Any * value);

/**
 * @brief Gets the `exitRangeStart` property. 
*/
jb_Any AnimationTrigger_exitRangeStart(const AnimationTrigger *self);

/**
 * @brief Sets the `exitRangeStart` property. 
*/
void AnimationTrigger_set_exitRangeStart(AnimationTrigger* self, jb_Any * value);

/**
 * @brief Gets the `exitRangeEnd` property. 
*/
jb_Any AnimationTrigger_exitRangeEnd(const AnimationTrigger *self);

/**
 * @brief Sets the `exitRangeEnd` property. 
*/
void AnimationTrigger_set_exitRangeEnd(AnimationTrigger* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
