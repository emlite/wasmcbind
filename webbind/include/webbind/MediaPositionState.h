#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MediaPositionState, em_Val);

double MediaPositionState_duration(const MediaPositionState *self);

void MediaPositionState_set_duration(MediaPositionState* self, double value);

double MediaPositionState_playbackRate(const MediaPositionState *self);

void MediaPositionState_set_playbackRate(MediaPositionState* self, double value);

double MediaPositionState_position(const MediaPositionState *self);

void MediaPositionState_set_position(MediaPositionState* self, double value);

MediaPositionState MediaPositionState_new();

#ifdef __cplusplus
}
#endif
