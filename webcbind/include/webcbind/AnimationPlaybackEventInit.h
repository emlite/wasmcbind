#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AnimationPlaybackEventInit */
DECLARE_EMLITE_TYPE(AnimationPlaybackEventInit, EventInit);

/** @brief Getter of the currentTime property */
jb_Any AnimationPlaybackEventInit_currentTime(const AnimationPlaybackEventInit *self);

/** @brief Setter of the currentTime property */
void AnimationPlaybackEventInit_set_currentTime(AnimationPlaybackEventInit* self, jb_Any * value);

/** @brief Getter of the timelineTime property */
jb_Any AnimationPlaybackEventInit_timelineTime(const AnimationPlaybackEventInit *self);

/** @brief Setter of the timelineTime property */
void AnimationPlaybackEventInit_set_timelineTime(AnimationPlaybackEventInit* self, jb_Any * value);

/** @brief Constructor of the AnimationPlaybackEventInit dictionary type */
AnimationPlaybackEventInit AnimationPlaybackEventInit_new();

#ifdef __cplusplus
}
#endif
