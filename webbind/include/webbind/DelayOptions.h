#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DelayOptions */
DECLARE_EMLITE_TYPE(DelayOptions, AudioNodeOptions);

/** @brief Getter of the maxDelayTime property */
double DelayOptions_maxDelayTime(const DelayOptions *self);

/** @brief Setter of the maxDelayTime property */
void DelayOptions_set_maxDelayTime(DelayOptions* self, double value);

/** @brief Getter of the delayTime property */
double DelayOptions_delayTime(const DelayOptions *self);

/** @brief Setter of the delayTime property */
void DelayOptions_set_delayTime(DelayOptions* self, double value);

/** @brief Constructor of the DelayOptions dictionary type */
DelayOptions DelayOptions_new();

#ifdef __cplusplus
}
#endif
