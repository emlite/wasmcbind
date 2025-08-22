#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioTimestamp */
DECLARE_EMLITE_TYPE(AudioTimestamp, em_Val);

/** @brief Getter of the contextTime property */
double AudioTimestamp_contextTime(const AudioTimestamp *self);

/** @brief Setter of the contextTime property */
void AudioTimestamp_set_contextTime(AudioTimestamp* self, double value);

/** @brief Getter of the performanceTime property */
jb_Any AudioTimestamp_performanceTime(const AudioTimestamp *self);

/** @brief Setter of the performanceTime property */
void AudioTimestamp_set_performanceTime(AudioTimestamp* self, jb_Any * value);

/** @brief Constructor of the AudioTimestamp dictionary type */
AudioTimestamp AudioTimestamp_new();

#ifdef __cplusplus
}
#endif
