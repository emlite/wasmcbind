#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaSessionActionDetails, em_Val);

MediaSessionAction MediaSessionActionDetails_action(const MediaSessionActionDetails *self);

void MediaSessionActionDetails_set_action(MediaSessionActionDetails* self, MediaSessionAction * value);

double MediaSessionActionDetails_seekOffset(const MediaSessionActionDetails *self);

void MediaSessionActionDetails_set_seekOffset(MediaSessionActionDetails* self, double value);

double MediaSessionActionDetails_seekTime(const MediaSessionActionDetails *self);

void MediaSessionActionDetails_set_seekTime(MediaSessionActionDetails* self, double value);

bool MediaSessionActionDetails_fastSeek(const MediaSessionActionDetails *self);

void MediaSessionActionDetails_set_fastSeek(MediaSessionActionDetails* self, bool value);

bool MediaSessionActionDetails_isActivating(const MediaSessionActionDetails *self);

void MediaSessionActionDetails_set_isActivating(MediaSessionActionDetails* self, bool value);

MediaSessionActionDetails MediaSessionActionDetails_new();

#ifdef __cplusplus
}
#endif
