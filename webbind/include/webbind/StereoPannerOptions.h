#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(StereoPannerOptions, AudioNodeOptions);

float StereoPannerOptions_pan(const StereoPannerOptions *self);

void StereoPannerOptions_set_pan(StereoPannerOptions* self, float value);

StereoPannerOptions StereoPannerOptions_new();

#ifdef __cplusplus
}
#endif
