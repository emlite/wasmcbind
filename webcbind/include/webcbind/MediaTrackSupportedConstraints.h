#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaTrackSupportedConstraints */
DECLARE_EMLITE_TYPE(MediaTrackSupportedConstraints, em_Val);

/** @brief Getter of the displaySurface property */
bool MediaTrackSupportedConstraints_displaySurface(const MediaTrackSupportedConstraints *self);

/** @brief Setter of the displaySurface property */
void MediaTrackSupportedConstraints_set_displaySurface(MediaTrackSupportedConstraints* self, bool value);

/** @brief Getter of the logicalSurface property */
bool MediaTrackSupportedConstraints_logicalSurface(const MediaTrackSupportedConstraints *self);

/** @brief Setter of the logicalSurface property */
void MediaTrackSupportedConstraints_set_logicalSurface(MediaTrackSupportedConstraints* self, bool value);

/** @brief Getter of the cursor property */
bool MediaTrackSupportedConstraints_cursor(const MediaTrackSupportedConstraints *self);

/** @brief Setter of the cursor property */
void MediaTrackSupportedConstraints_set_cursor(MediaTrackSupportedConstraints* self, bool value);

/** @brief Getter of the restrictOwnAudio property */
bool MediaTrackSupportedConstraints_restrictOwnAudio(const MediaTrackSupportedConstraints *self);

/** @brief Setter of the restrictOwnAudio property */
void MediaTrackSupportedConstraints_set_restrictOwnAudio(MediaTrackSupportedConstraints* self, bool value);

/** @brief Getter of the suppressLocalAudioPlayback property */
bool MediaTrackSupportedConstraints_suppressLocalAudioPlayback(const MediaTrackSupportedConstraints *self);

/** @brief Setter of the suppressLocalAudioPlayback property */
void MediaTrackSupportedConstraints_set_suppressLocalAudioPlayback(MediaTrackSupportedConstraints* self, bool value);

/** @brief Constructor of the MediaTrackSupportedConstraints dictionary type */
MediaTrackSupportedConstraints MediaTrackSupportedConstraints_new();

#ifdef __cplusplus
}
#endif
