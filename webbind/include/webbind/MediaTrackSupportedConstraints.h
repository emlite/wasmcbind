#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaTrackSupportedConstraints, em_Val);

bool MediaTrackSupportedConstraints_displaySurface(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_displaySurface(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_logicalSurface(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_logicalSurface(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_cursor(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_cursor(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_restrictOwnAudio(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_restrictOwnAudio(MediaTrackSupportedConstraints* self, bool value);

bool MediaTrackSupportedConstraints_suppressLocalAudioPlayback(const MediaTrackSupportedConstraints *self);

void MediaTrackSupportedConstraints_set_suppressLocalAudioPlayback(MediaTrackSupportedConstraints* self, bool value);

MediaTrackSupportedConstraints MediaTrackSupportedConstraints_new();

#ifdef __cplusplus
}
#endif
