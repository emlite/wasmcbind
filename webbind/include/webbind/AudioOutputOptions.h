#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioOutputOptions, em_Val);

jb_String AudioOutputOptions_deviceId(const AudioOutputOptions *self);

void AudioOutputOptions_set_deviceId(AudioOutputOptions* self, jb_String * value);

AudioOutputOptions AudioOutputOptions_new();

#ifdef __cplusplus
}
#endif
