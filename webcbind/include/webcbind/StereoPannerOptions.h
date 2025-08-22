#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type StereoPannerOptions */
DECLARE_EMLITE_TYPE(StereoPannerOptions, AudioNodeOptions);

/** @brief Getter of the pan property */
float StereoPannerOptions_pan(const StereoPannerOptions *self);

/** @brief Setter of the pan property */
void StereoPannerOptions_set_pan(StereoPannerOptions* self, float value);

/** @brief Constructor of the StereoPannerOptions dictionary type */
StereoPannerOptions StereoPannerOptions_new();

#ifdef __cplusplus
}
#endif
