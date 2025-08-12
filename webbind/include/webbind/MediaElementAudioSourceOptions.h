#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLMediaElement HTMLMediaElement;

/** @brief Dictionary type MediaElementAudioSourceOptions */
DECLARE_EMLITE_TYPE(MediaElementAudioSourceOptions, em_Val);

/** @brief Getter of the mediaElement property */
HTMLMediaElement MediaElementAudioSourceOptions_mediaElement(const MediaElementAudioSourceOptions *self);

/** @brief Setter of the mediaElement property */
void MediaElementAudioSourceOptions_set_mediaElement(MediaElementAudioSourceOptions* self, HTMLMediaElement * value);

/** @brief Constructor of the MediaElementAudioSourceOptions dictionary type */
MediaElementAudioSourceOptions MediaElementAudioSourceOptions_new();

#ifdef __cplusplus
}
#endif
