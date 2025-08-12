#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MediaPositionState */
DECLARE_EMLITE_TYPE(MediaPositionState, em_Val);

/** @brief Getter of the duration property */
double MediaPositionState_duration(const MediaPositionState *self);

/** @brief Setter of the duration property */
void MediaPositionState_set_duration(MediaPositionState* self, double value);

/** @brief Getter of the playbackRate property */
double MediaPositionState_playbackRate(const MediaPositionState *self);

/** @brief Setter of the playbackRate property */
void MediaPositionState_set_playbackRate(MediaPositionState* self, double value);

/** @brief Getter of the position property */
double MediaPositionState_position(const MediaPositionState *self);

/** @brief Setter of the position property */
void MediaPositionState_set_position(MediaPositionState* self, double value);

/** @brief Constructor of the MediaPositionState dictionary type */
MediaPositionState MediaPositionState_new();

#ifdef __cplusplus
}
#endif
