#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationEffect AnimationEffect;
typedef struct AnimationTimeline AnimationTimeline;
typedef struct AnimationTrigger AnimationTrigger;


/**
 * @brief Interface Animation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Animation)
 */
DECLARE_EMLITE_TYPE(Animation, EventTarget);

/**
 * @brief Creates a new `Animation` object. 
*/
Animation Animation_new0();

/**
 * @brief Creates a new `Animation` object. 
*/
Animation Animation_new1(AnimationEffect * effect);

/**
 * @brief Creates a new `Animation` object. 
*/
Animation Animation_new2(AnimationEffect * effect, AnimationTimeline * timeline);

/**
 * @brief Gets the `id` property. 
*/
jb_String Animation_id(const Animation *self);

/**
 * @brief Sets the `id` property. 
*/
void Animation_set_id(Animation* self, jb_String * value);

/**
 * @brief Gets the `effect` property. 
*/
AnimationEffect Animation_effect(const Animation *self);

/**
 * @brief Sets the `effect` property. 
*/
void Animation_set_effect(Animation* self, AnimationEffect * value);

/**
 * @brief Gets the `timeline` property. 
*/
AnimationTimeline Animation_timeline(const Animation *self);

/**
 * @brief Sets the `timeline` property. 
*/
void Animation_set_timeline(Animation* self, AnimationTimeline * value);

/**
 * @brief Gets the `playbackRate` property. 
*/
double Animation_playbackRate(const Animation *self);

/**
 * @brief Sets the `playbackRate` property. 
*/
void Animation_set_playbackRate(Animation* self, double value);

/**
 * @brief Gets the `playState` property. 
*/
AnimationPlayState Animation_playState(const Animation *self);

/**
 * @brief Gets the `replaceState` property. 
*/
AnimationReplaceState Animation_replaceState(const Animation *self);

/**
 * @brief Gets the `pending` property. 
*/
bool Animation_pending(const Animation *self);

/**
 * @brief Gets the `ready` property. 
*/
jb_Promise Animation_ready(const Animation *self);

/**
 * @brief Gets the `finished` property. 
*/
jb_Promise Animation_finished(const Animation *self);

/**
 * @brief Gets the `onfinish` property. 
*/
jb_Any Animation_onfinish(const Animation *self);

/**
 * @brief Sets the `onfinish` property. 
*/
void Animation_set_onfinish(Animation* self, jb_Any * value);

/**
 * @brief Gets the `oncancel` property. 
*/
jb_Any Animation_oncancel(const Animation *self);

/**
 * @brief Sets the `oncancel` property. 
*/
void Animation_set_oncancel(Animation* self, jb_Any * value);

/**
 * @brief Gets the `onremove` property. 
*/
jb_Any Animation_onremove(const Animation *self);

/**
 * @brief Sets the `onremove` property. 
*/
void Animation_set_onremove(Animation* self, jb_Any * value);

/**
 * @brief Calls the `cancel` method. 
*/
jb_Undefined Animation_cancel(Animation* self );

/**
 * @brief Calls the `finish` method. 
*/
jb_Undefined Animation_finish(Animation* self );

/**
 * @brief Calls the `play` method. 
*/
jb_Undefined Animation_play(Animation* self );

/**
 * @brief Calls the `pause` method. 
*/
jb_Undefined Animation_pause(Animation* self );

/**
 * @brief Calls the `updatePlaybackRate` method. 
*/
jb_Undefined Animation_updatePlaybackRate(Animation* self , double playbackRate);

/**
 * @brief Calls the `reverse` method. 
*/
jb_Undefined Animation_reverse(Animation* self );

/**
 * @brief Calls the `persist` method. 
*/
jb_Undefined Animation_persist(Animation* self );

/**
 * @brief Calls the `commitStyles` method. 
*/
jb_Undefined Animation_commitStyles(Animation* self );

/**
 * @brief Gets the `startTime` property. 
*/
jb_Any Animation_startTime(const Animation *self);

/**
 * @brief Sets the `startTime` property. 
*/
void Animation_set_startTime(Animation* self, jb_Any * value);

/**
 * @brief Gets the `currentTime` property. 
*/
jb_Any Animation_currentTime(const Animation *self);

/**
 * @brief Sets the `currentTime` property. 
*/
void Animation_set_currentTime(Animation* self, jb_Any * value);

/**
 * @brief Gets the `trigger` property. 
*/
AnimationTrigger Animation_trigger(const Animation *self);

/**
 * @brief Sets the `trigger` property. 
*/
void Animation_set_trigger(Animation* self, AnimationTrigger * value);

/**
 * @brief Gets the `overallProgress` property. 
*/
double Animation_overallProgress(const Animation *self);

#ifdef __cplusplus
}
#endif
