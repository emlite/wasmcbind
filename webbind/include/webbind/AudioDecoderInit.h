#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioDecoderInit, em_Val);

jb_Function AudioDecoderInit_output(const AudioDecoderInit *self);

void AudioDecoderInit_set_output(AudioDecoderInit* self, jb_Function * value);

jb_Function AudioDecoderInit_error(const AudioDecoderInit *self);

void AudioDecoderInit_set_error(AudioDecoderInit* self, jb_Function * value);

AudioDecoderInit AudioDecoderInit_new();

#ifdef __cplusplus
}
#endif
