#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GainOptions, AudioNodeOptions);

float GainOptions_gain(const GainOptions *self);

void GainOptions_set_gain(GainOptions* self, float value);

GainOptions GainOptions_new();

#ifdef __cplusplus
}
#endif
