#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationTimeline AnimationTimeline;

/** @brief Dictionary type AnimationTriggerOptions */
DECLARE_EMLITE_TYPE(AnimationTriggerOptions, em_Val);

/** @brief Getter of the timeline property */
AnimationTimeline AnimationTriggerOptions_timeline(const AnimationTriggerOptions *self);

/** @brief Setter of the timeline property */
void AnimationTriggerOptions_set_timeline(AnimationTriggerOptions* self, AnimationTimeline * value);

/** @brief Getter of the behavior property */
AnimationTriggerBehavior AnimationTriggerOptions_behavior(const AnimationTriggerOptions *self);

/** @brief Setter of the behavior property */
void AnimationTriggerOptions_set_behavior(AnimationTriggerOptions* self, AnimationTriggerBehavior * value);

/** @brief Getter of the rangeStart property */
jb_Any AnimationTriggerOptions_rangeStart(const AnimationTriggerOptions *self);

/** @brief Setter of the rangeStart property */
void AnimationTriggerOptions_set_rangeStart(AnimationTriggerOptions* self, jb_Any * value);

/** @brief Getter of the rangeEnd property */
jb_Any AnimationTriggerOptions_rangeEnd(const AnimationTriggerOptions *self);

/** @brief Setter of the rangeEnd property */
void AnimationTriggerOptions_set_rangeEnd(AnimationTriggerOptions* self, jb_Any * value);

/** @brief Getter of the exitRangeStart property */
jb_Any AnimationTriggerOptions_exitRangeStart(const AnimationTriggerOptions *self);

/** @brief Setter of the exitRangeStart property */
void AnimationTriggerOptions_set_exitRangeStart(AnimationTriggerOptions* self, jb_Any * value);

/** @brief Getter of the exitRangeEnd property */
jb_Any AnimationTriggerOptions_exitRangeEnd(const AnimationTriggerOptions *self);

/** @brief Setter of the exitRangeEnd property */
void AnimationTriggerOptions_set_exitRangeEnd(AnimationTriggerOptions* self, jb_Any * value);

/** @brief Constructor of the AnimationTriggerOptions dictionary type */
AnimationTriggerOptions AnimationTriggerOptions_new();

#ifdef __cplusplus
}
#endif
