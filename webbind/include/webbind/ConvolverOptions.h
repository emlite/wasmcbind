#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;

/** @brief Dictionary type ConvolverOptions */
DECLARE_EMLITE_TYPE(ConvolverOptions, AudioNodeOptions);

/** @brief Getter of the buffer property */
AudioBuffer ConvolverOptions_buffer(const ConvolverOptions *self);

/** @brief Setter of the buffer property */
void ConvolverOptions_set_buffer(ConvolverOptions* self, AudioBuffer * value);

/** @brief Getter of the disableNormalization property */
bool ConvolverOptions_disableNormalization(const ConvolverOptions *self);

/** @brief Setter of the disableNormalization property */
void ConvolverOptions_set_disableNormalization(ConvolverOptions* self, bool value);

/** @brief Constructor of the ConvolverOptions dictionary type */
ConvolverOptions ConvolverOptions_new();

#ifdef __cplusplus
}
#endif
