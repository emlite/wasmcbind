#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioEncoderInit */
DECLARE_EMLITE_TYPE(AudioEncoderInit, em_Val);

/** @brief Getter of the output property */
jb_Function AudioEncoderInit_output(const AudioEncoderInit *self);

/** @brief Setter of the output property */
void AudioEncoderInit_set_output(AudioEncoderInit* self, jb_Function * value);

/** @brief Getter of the error property */
jb_Function AudioEncoderInit_error(const AudioEncoderInit *self);

/** @brief Setter of the error property */
void AudioEncoderInit_set_error(AudioEncoderInit* self, jb_Function * value);

/** @brief Constructor of the AudioEncoderInit dictionary type */
AudioEncoderInit AudioEncoderInit_new();

#ifdef __cplusplus
}
#endif
