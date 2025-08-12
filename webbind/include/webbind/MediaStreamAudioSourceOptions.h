#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaStream MediaStream;

/** @brief Dictionary type MediaStreamAudioSourceOptions */
DECLARE_EMLITE_TYPE(MediaStreamAudioSourceOptions, em_Val);

/** @brief Getter of the mediaStream property */
MediaStream MediaStreamAudioSourceOptions_mediaStream(const MediaStreamAudioSourceOptions *self);

/** @brief Setter of the mediaStream property */
void MediaStreamAudioSourceOptions_set_mediaStream(MediaStreamAudioSourceOptions* self, MediaStream * value);

/** @brief Constructor of the MediaStreamAudioSourceOptions dictionary type */
MediaStreamAudioSourceOptions MediaStreamAudioSourceOptions_new();

#ifdef __cplusplus
}
#endif
