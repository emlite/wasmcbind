#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type TrackEventInit */
DECLARE_EMLITE_TYPE(TrackEventInit, EventInit);

/** @brief Getter of the track property */
jb_Any TrackEventInit_track(const TrackEventInit *self);

/** @brief Setter of the track property */
void TrackEventInit_set_track(TrackEventInit* self, jb_Any * value);

/** @brief Constructor of the TrackEventInit dictionary type */
TrackEventInit TrackEventInit_new();

#ifdef __cplusplus
}
#endif
