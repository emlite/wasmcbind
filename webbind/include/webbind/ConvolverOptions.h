#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;

DECLARE_EMLITE_TYPE(ConvolverOptions, AudioNodeOptions);

AudioBuffer ConvolverOptions_buffer(const ConvolverOptions *self);

void ConvolverOptions_set_buffer(ConvolverOptions* self, AudioBuffer * value);

bool ConvolverOptions_disableNormalization(const ConvolverOptions *self);

void ConvolverOptions_set_disableNormalization(ConvolverOptions* self, bool value);

ConvolverOptions ConvolverOptions_new();

#ifdef __cplusplus
}
#endif
