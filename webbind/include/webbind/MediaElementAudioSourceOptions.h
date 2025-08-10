#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLMediaElement HTMLMediaElement;

DECLARE_EMLITE_TYPE(MediaElementAudioSourceOptions, em_Val);

HTMLMediaElement MediaElementAudioSourceOptions_mediaElement(const MediaElementAudioSourceOptions *self);

void MediaElementAudioSourceOptions_set_mediaElement(MediaElementAudioSourceOptions* self, HTMLMediaElement * value);

MediaElementAudioSourceOptions MediaElementAudioSourceOptions_new();

#ifdef __cplusplus
}
#endif
