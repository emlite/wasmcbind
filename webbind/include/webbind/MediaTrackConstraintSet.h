#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaTrackConstraintSet */
DECLARE_EMLITE_TYPE(MediaTrackConstraintSet, em_Val);

/** @brief Getter of the displaySurface property */
jb_Any MediaTrackConstraintSet_displaySurface(const MediaTrackConstraintSet *self);

/** @brief Setter of the displaySurface property */
void MediaTrackConstraintSet_set_displaySurface(MediaTrackConstraintSet* self, jb_Any * value);

/** @brief Getter of the logicalSurface property */
jb_Any MediaTrackConstraintSet_logicalSurface(const MediaTrackConstraintSet *self);

/** @brief Setter of the logicalSurface property */
void MediaTrackConstraintSet_set_logicalSurface(MediaTrackConstraintSet* self, jb_Any * value);

/** @brief Getter of the cursor property */
jb_Any MediaTrackConstraintSet_cursor(const MediaTrackConstraintSet *self);

/** @brief Setter of the cursor property */
void MediaTrackConstraintSet_set_cursor(MediaTrackConstraintSet* self, jb_Any * value);

/** @brief Getter of the restrictOwnAudio property */
jb_Any MediaTrackConstraintSet_restrictOwnAudio(const MediaTrackConstraintSet *self);

/** @brief Setter of the restrictOwnAudio property */
void MediaTrackConstraintSet_set_restrictOwnAudio(MediaTrackConstraintSet* self, jb_Any * value);

/** @brief Getter of the suppressLocalAudioPlayback property */
jb_Any MediaTrackConstraintSet_suppressLocalAudioPlayback(const MediaTrackConstraintSet *self);

/** @brief Setter of the suppressLocalAudioPlayback property */
void MediaTrackConstraintSet_set_suppressLocalAudioPlayback(MediaTrackConstraintSet* self, jb_Any * value);

/** @brief Constructor of the MediaTrackConstraintSet dictionary type */
MediaTrackConstraintSet MediaTrackConstraintSet_new();

#ifdef __cplusplus
}
#endif
