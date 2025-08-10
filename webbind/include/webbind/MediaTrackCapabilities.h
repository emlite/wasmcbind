#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaTrackCapabilities, em_Val);

jb_String MediaTrackCapabilities_displaySurface(const MediaTrackCapabilities *self);

void MediaTrackCapabilities_set_displaySurface(MediaTrackCapabilities* self, jb_String * value);

bool MediaTrackCapabilities_logicalSurface(const MediaTrackCapabilities *self);

void MediaTrackCapabilities_set_logicalSurface(MediaTrackCapabilities* self, bool value);

jb_Array MediaTrackCapabilities_cursor(const MediaTrackCapabilities *self);

void MediaTrackCapabilities_set_cursor(MediaTrackCapabilities* self, jb_Array * value);

MediaTrackCapabilities MediaTrackCapabilities_new();

#ifdef __cplusplus
}
#endif
