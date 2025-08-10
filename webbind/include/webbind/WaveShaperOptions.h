#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(WaveShaperOptions, AudioNodeOptions);

jb_Array WaveShaperOptions_curve(const WaveShaperOptions *self);

void WaveShaperOptions_set_curve(WaveShaperOptions* self, jb_Array * value);

OverSampleType WaveShaperOptions_oversample(const WaveShaperOptions *self);

void WaveShaperOptions_set_oversample(WaveShaperOptions* self, OverSampleType * value);

WaveShaperOptions WaveShaperOptions_new();

#ifdef __cplusplus
}
#endif
