#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioEncoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioEncoderSupport, em_Val);

bool AudioEncoderSupport_supported(const AudioEncoderSupport *self);

void AudioEncoderSupport_set_supported(AudioEncoderSupport* self, bool value);

AudioEncoderConfig AudioEncoderSupport_config(const AudioEncoderSupport *self);

void AudioEncoderSupport_set_config(AudioEncoderSupport* self, AudioEncoderConfig * value);

AudioEncoderSupport AudioEncoderSupport_new();

#ifdef __cplusplus
}
#endif
