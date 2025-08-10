#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStreamTrack MediaStreamTrack;

DECLARE_EMLITE_TYPE(MediaStreamTrackProcessorInit, em_Val);

MediaStreamTrack MediaStreamTrackProcessorInit_track(const MediaStreamTrackProcessorInit *self);

void MediaStreamTrackProcessorInit_set_track(MediaStreamTrackProcessorInit* self, MediaStreamTrack * value);

unsigned short MediaStreamTrackProcessorInit_maxBufferSize(const MediaStreamTrackProcessorInit *self);

void MediaStreamTrackProcessorInit_set_maxBufferSize(MediaStreamTrackProcessorInit* self, unsigned short value);

MediaStreamTrackProcessorInit MediaStreamTrackProcessorInit_new();

#ifdef __cplusplus
}
#endif
