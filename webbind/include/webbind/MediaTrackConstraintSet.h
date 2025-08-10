#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaTrackConstraintSet, em_Val);

jb_Any MediaTrackConstraintSet_displaySurface(const MediaTrackConstraintSet *self);

void MediaTrackConstraintSet_set_displaySurface(MediaTrackConstraintSet* self, jb_Any * value);

jb_Any MediaTrackConstraintSet_logicalSurface(const MediaTrackConstraintSet *self);

void MediaTrackConstraintSet_set_logicalSurface(MediaTrackConstraintSet* self, jb_Any * value);

jb_Any MediaTrackConstraintSet_cursor(const MediaTrackConstraintSet *self);

void MediaTrackConstraintSet_set_cursor(MediaTrackConstraintSet* self, jb_Any * value);

jb_Any MediaTrackConstraintSet_restrictOwnAudio(const MediaTrackConstraintSet *self);

void MediaTrackConstraintSet_set_restrictOwnAudio(MediaTrackConstraintSet* self, jb_Any * value);

jb_Any MediaTrackConstraintSet_suppressLocalAudioPlayback(const MediaTrackConstraintSet *self);

void MediaTrackConstraintSet_set_suppressLocalAudioPlayback(MediaTrackConstraintSet* self, jb_Any * value);

MediaTrackConstraintSet MediaTrackConstraintSet_new();

#ifdef __cplusplus
}
#endif
