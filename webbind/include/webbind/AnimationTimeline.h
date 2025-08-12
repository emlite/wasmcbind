#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Animation Animation;
typedef struct AnimationEffect AnimationEffect;


/**
 * @brief Interface AnimationTimeline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AnimationTimeline)
 */
DECLARE_EMLITE_TYPE(AnimationTimeline, em_Val);

/**
 * @brief Gets the `currentTime` property. 
*/
jb_Any AnimationTimeline_currentTime(const AnimationTimeline *self);

/**
 * @brief Gets the `duration` property. 
*/
jb_Any AnimationTimeline_duration(const AnimationTimeline *self);

/**
 * @brief Calls the `play` method. 
*/
Animation AnimationTimeline_play0(AnimationTimeline* self );

/**
 * @brief Calls the `play` method. 
*/
Animation AnimationTimeline_play1(AnimationTimeline* self , AnimationEffect * effect);

#ifdef __cplusplus
}
#endif
