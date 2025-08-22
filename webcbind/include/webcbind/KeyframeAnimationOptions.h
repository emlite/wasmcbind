#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "KeyframeEffectOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationTimeline AnimationTimeline;

/** @brief Dictionary type KeyframeAnimationOptions */
DECLARE_EMLITE_TYPE(KeyframeAnimationOptions, KeyframeEffectOptions);

/** @brief Getter of the id property */
jb_String KeyframeAnimationOptions_id(const KeyframeAnimationOptions *self);

/** @brief Setter of the id property */
void KeyframeAnimationOptions_set_id(KeyframeAnimationOptions* self, jb_String * value);

/** @brief Getter of the timeline property */
AnimationTimeline KeyframeAnimationOptions_timeline(const KeyframeAnimationOptions *self);

/** @brief Setter of the timeline property */
void KeyframeAnimationOptions_set_timeline(KeyframeAnimationOptions* self, AnimationTimeline * value);

/** @brief Constructor of the KeyframeAnimationOptions dictionary type */
KeyframeAnimationOptions KeyframeAnimationOptions_new();

#ifdef __cplusplus
}
#endif
