#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WaveShaperOptions */
DECLARE_EMLITE_TYPE(WaveShaperOptions, AudioNodeOptions);

/** @brief Getter of the curve property */
jb_Array WaveShaperOptions_curve(const WaveShaperOptions *self);

/** @brief Setter of the curve property */
void WaveShaperOptions_set_curve(WaveShaperOptions* self, jb_Array * value);

/** @brief Getter of the oversample property */
OverSampleType WaveShaperOptions_oversample(const WaveShaperOptions *self);

/** @brief Setter of the oversample property */
void WaveShaperOptions_set_oversample(WaveShaperOptions* self, OverSampleType * value);

/** @brief Constructor of the WaveShaperOptions dictionary type */
WaveShaperOptions WaveShaperOptions_new();

#ifdef __cplusplus
}
#endif
