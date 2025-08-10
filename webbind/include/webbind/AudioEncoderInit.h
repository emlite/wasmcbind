#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioEncoderInit, em_Val);

jb_Function AudioEncoderInit_output(const AudioEncoderInit *self);

void AudioEncoderInit_set_output(AudioEncoderInit* self, jb_Function * value);

jb_Function AudioEncoderInit_error(const AudioEncoderInit *self);

void AudioEncoderInit_set_error(AudioEncoderInit* self, jb_Function * value);

AudioEncoderInit AudioEncoderInit_new();

#ifdef __cplusplus
}
#endif
