#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MediaTrackConstraintSet.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaTrackConstraints */
DECLARE_EMLITE_TYPE(MediaTrackConstraints, MediaTrackConstraintSet);

/** @brief Getter of the advanced property */
jb_Array MediaTrackConstraints_advanced(const MediaTrackConstraints *self);

/** @brief Setter of the advanced property */
void MediaTrackConstraints_set_advanced(MediaTrackConstraints* self, jb_Array * value);

/** @brief Constructor of the MediaTrackConstraints dictionary type */
MediaTrackConstraints MediaTrackConstraints_new();

#ifdef __cplusplus
}
#endif
