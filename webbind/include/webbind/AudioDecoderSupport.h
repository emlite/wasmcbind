#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioDecoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioDecoderSupport, em_Val);

bool AudioDecoderSupport_supported(const AudioDecoderSupport *self);

void AudioDecoderSupport_set_supported(AudioDecoderSupport* self, bool value);

AudioDecoderConfig AudioDecoderSupport_config(const AudioDecoderSupport *self);

void AudioDecoderSupport_set_config(AudioDecoderSupport* self, AudioDecoderConfig * value);

AudioDecoderSupport AudioDecoderSupport_new();

#ifdef __cplusplus
}
#endif
