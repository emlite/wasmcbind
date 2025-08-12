#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GainOptions */
DECLARE_EMLITE_TYPE(GainOptions, AudioNodeOptions);

/** @brief Getter of the gain property */
float GainOptions_gain(const GainOptions *self);

/** @brief Setter of the gain property */
void GainOptions_set_gain(GainOptions* self, float value);

/** @brief Constructor of the GainOptions dictionary type */
GainOptions GainOptions_new();

#ifdef __cplusplus
}
#endif
