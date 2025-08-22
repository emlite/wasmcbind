#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaTrackCapabilities */
DECLARE_EMLITE_TYPE(MediaTrackCapabilities, em_Val);

/** @brief Getter of the displaySurface property */
jb_String MediaTrackCapabilities_displaySurface(const MediaTrackCapabilities *self);

/** @brief Setter of the displaySurface property */
void MediaTrackCapabilities_set_displaySurface(MediaTrackCapabilities* self, jb_String * value);

/** @brief Getter of the logicalSurface property */
bool MediaTrackCapabilities_logicalSurface(const MediaTrackCapabilities *self);

/** @brief Setter of the logicalSurface property */
void MediaTrackCapabilities_set_logicalSurface(MediaTrackCapabilities* self, bool value);

/** @brief Getter of the cursor property */
jb_Array MediaTrackCapabilities_cursor(const MediaTrackCapabilities *self);

/** @brief Setter of the cursor property */
void MediaTrackCapabilities_set_cursor(MediaTrackCapabilities* self, jb_Array * value);

/** @brief Constructor of the MediaTrackCapabilities dictionary type */
MediaTrackCapabilities MediaTrackCapabilities_new();

#ifdef __cplusplus
}
#endif
