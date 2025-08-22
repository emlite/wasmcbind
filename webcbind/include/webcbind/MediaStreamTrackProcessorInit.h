#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;

/** @brief Dictionary type MediaStreamTrackProcessorInit */
DECLARE_EMLITE_TYPE(MediaStreamTrackProcessorInit, em_Val);

/** @brief Getter of the track property */
MediaStreamTrack MediaStreamTrackProcessorInit_track(const MediaStreamTrackProcessorInit *self);

/** @brief Setter of the track property */
void MediaStreamTrackProcessorInit_set_track(MediaStreamTrackProcessorInit* self, MediaStreamTrack * value);

/** @brief Getter of the maxBufferSize property */
unsigned short MediaStreamTrackProcessorInit_maxBufferSize(const MediaStreamTrackProcessorInit *self);

/** @brief Setter of the maxBufferSize property */
void MediaStreamTrackProcessorInit_set_maxBufferSize(MediaStreamTrackProcessorInit* self, unsigned short value);

/** @brief Constructor of the MediaStreamTrackProcessorInit dictionary type */
MediaStreamTrackProcessorInit MediaStreamTrackProcessorInit_new();

#ifdef __cplusplus
}
#endif
