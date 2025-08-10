#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "MediaTrackConstraintSet.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaTrackConstraints, MediaTrackConstraintSet);

jb_Array MediaTrackConstraints_advanced(const MediaTrackConstraints *self);

void MediaTrackConstraints_set_advanced(MediaTrackConstraints* self, jb_Array * value);

MediaTrackConstraints MediaTrackConstraints_new();

#ifdef __cplusplus
}
#endif
