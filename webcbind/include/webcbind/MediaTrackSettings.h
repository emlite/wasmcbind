#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaTrackSettings */
DECLARE_EMLITE_TYPE(MediaTrackSettings, em_Val);

/** @brief Getter of the displaySurface property */
jb_String MediaTrackSettings_displaySurface(const MediaTrackSettings *self);

/** @brief Setter of the displaySurface property */
void MediaTrackSettings_set_displaySurface(MediaTrackSettings* self, jb_String * value);

/** @brief Getter of the logicalSurface property */
bool MediaTrackSettings_logicalSurface(const MediaTrackSettings *self);

/** @brief Setter of the logicalSurface property */
void MediaTrackSettings_set_logicalSurface(MediaTrackSettings* self, bool value);

/** @brief Getter of the cursor property */
jb_String MediaTrackSettings_cursor(const MediaTrackSettings *self);

/** @brief Setter of the cursor property */
void MediaTrackSettings_set_cursor(MediaTrackSettings* self, jb_String * value);

/** @brief Getter of the restrictOwnAudio property */
bool MediaTrackSettings_restrictOwnAudio(const MediaTrackSettings *self);

/** @brief Setter of the restrictOwnAudio property */
void MediaTrackSettings_set_restrictOwnAudio(MediaTrackSettings* self, bool value);

/** @brief Getter of the suppressLocalAudioPlayback property */
bool MediaTrackSettings_suppressLocalAudioPlayback(const MediaTrackSettings *self);

/** @brief Setter of the suppressLocalAudioPlayback property */
void MediaTrackSettings_set_suppressLocalAudioPlayback(MediaTrackSettings* self, bool value);

/** @brief Getter of the screenPixelRatio property */
double MediaTrackSettings_screenPixelRatio(const MediaTrackSettings *self);

/** @brief Setter of the screenPixelRatio property */
void MediaTrackSettings_set_screenPixelRatio(MediaTrackSettings* self, double value);

/** @brief Constructor of the MediaTrackSettings dictionary type */
MediaTrackSettings MediaTrackSettings_new();

#ifdef __cplusplus
}
#endif
