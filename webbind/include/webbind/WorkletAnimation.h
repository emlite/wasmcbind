#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Animation.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationTimeline AnimationTimeline;


/**
 * @brief Interface WorkletAnimation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimation)
 */
DECLARE_EMLITE_TYPE(WorkletAnimation, Animation);

/**
 * @brief Creates a new `WorkletAnimation` object. 
*/
WorkletAnimation WorkletAnimation_new0(jb_String * animatorName);

/**
 * @brief Creates a new `WorkletAnimation` object. 
*/
WorkletAnimation WorkletAnimation_new1(jb_String * animatorName, jb_Any * effects);

/**
 * @brief Creates a new `WorkletAnimation` object. 
*/
WorkletAnimation WorkletAnimation_new2(jb_String * animatorName, jb_Any * effects, AnimationTimeline * timeline);

/**
 * @brief Creates a new `WorkletAnimation` object. 
*/
WorkletAnimation WorkletAnimation_new3(jb_String * animatorName, jb_Any * effects, AnimationTimeline * timeline, jb_Any * options);

/**
 * @brief Gets the `animatorName` property. 
*/
jb_String WorkletAnimation_animatorName(const WorkletAnimation *self);

#ifdef __cplusplus
}
#endif
