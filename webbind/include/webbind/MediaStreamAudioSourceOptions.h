#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStream MediaStream;

DECLARE_EMLITE_TYPE(MediaStreamAudioSourceOptions, em_Val);

MediaStream MediaStreamAudioSourceOptions_mediaStream(const MediaStreamAudioSourceOptions *self);

void MediaStreamAudioSourceOptions_set_mediaStream(MediaStreamAudioSourceOptions* self, MediaStream * value);

MediaStreamAudioSourceOptions MediaStreamAudioSourceOptions_new();

#ifdef __cplusplus
}
#endif
