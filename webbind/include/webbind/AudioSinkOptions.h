#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioSinkOptions, em_Val);

AudioSinkType AudioSinkOptions_type(const AudioSinkOptions *self);

void AudioSinkOptions_set_type(AudioSinkOptions* self, AudioSinkType * value);

AudioSinkOptions AudioSinkOptions_new();

#ifdef __cplusplus
}
#endif
