#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioDecoderInit */
DECLARE_EMLITE_TYPE(AudioDecoderInit, em_Val);

/** @brief Getter of the output property */
jb_Function AudioDecoderInit_output(const AudioDecoderInit *self);

/** @brief Setter of the output property */
void AudioDecoderInit_set_output(AudioDecoderInit* self, jb_Function * value);

/** @brief Getter of the error property */
jb_Function AudioDecoderInit_error(const AudioDecoderInit *self);

/** @brief Setter of the error property */
void AudioDecoderInit_set_error(AudioDecoderInit* self, jb_Function * value);

/** @brief Constructor of the AudioDecoderInit dictionary type */
AudioDecoderInit AudioDecoderInit_new();

#ifdef __cplusplus
}
#endif
