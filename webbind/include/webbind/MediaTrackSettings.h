#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaTrackSettings, em_Val);

jb_String MediaTrackSettings_displaySurface(const MediaTrackSettings *self);

void MediaTrackSettings_set_displaySurface(MediaTrackSettings* self, jb_String * value);

bool MediaTrackSettings_logicalSurface(const MediaTrackSettings *self);

void MediaTrackSettings_set_logicalSurface(MediaTrackSettings* self, bool value);

jb_String MediaTrackSettings_cursor(const MediaTrackSettings *self);

void MediaTrackSettings_set_cursor(MediaTrackSettings* self, jb_String * value);

bool MediaTrackSettings_restrictOwnAudio(const MediaTrackSettings *self);

void MediaTrackSettings_set_restrictOwnAudio(MediaTrackSettings* self, bool value);

bool MediaTrackSettings_suppressLocalAudioPlayback(const MediaTrackSettings *self);

void MediaTrackSettings_set_suppressLocalAudioPlayback(MediaTrackSettings* self, bool value);

double MediaTrackSettings_screenPixelRatio(const MediaTrackSettings *self);

void MediaTrackSettings_set_screenPixelRatio(MediaTrackSettings* self, double value);

MediaTrackSettings MediaTrackSettings_new();

#ifdef __cplusplus
}
#endif
