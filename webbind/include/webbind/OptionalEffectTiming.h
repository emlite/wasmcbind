#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type OptionalEffectTiming */
DECLARE_EMLITE_TYPE(OptionalEffectTiming, em_Val);

/** @brief Getter of the delay property */
double OptionalEffectTiming_delay(const OptionalEffectTiming *self);

/** @brief Setter of the delay property */
void OptionalEffectTiming_set_delay(OptionalEffectTiming* self, double value);

/** @brief Getter of the endDelay property */
double OptionalEffectTiming_endDelay(const OptionalEffectTiming *self);

/** @brief Setter of the endDelay property */
void OptionalEffectTiming_set_endDelay(OptionalEffectTiming* self, double value);

/** @brief Getter of the fill property */
FillMode OptionalEffectTiming_fill(const OptionalEffectTiming *self);

/** @brief Setter of the fill property */
void OptionalEffectTiming_set_fill(OptionalEffectTiming* self, FillMode * value);

/** @brief Getter of the iterationStart property */
double OptionalEffectTiming_iterationStart(const OptionalEffectTiming *self);

/** @brief Setter of the iterationStart property */
void OptionalEffectTiming_set_iterationStart(OptionalEffectTiming* self, double value);

/** @brief Getter of the iterations property */
double OptionalEffectTiming_iterations(const OptionalEffectTiming *self);

/** @brief Setter of the iterations property */
void OptionalEffectTiming_set_iterations(OptionalEffectTiming* self, double value);

/** @brief Getter of the duration property */
jb_Any OptionalEffectTiming_duration(const OptionalEffectTiming *self);

/** @brief Setter of the duration property */
void OptionalEffectTiming_set_duration(OptionalEffectTiming* self, jb_Any * value);

/** @brief Getter of the direction property */
PlaybackDirection OptionalEffectTiming_direction(const OptionalEffectTiming *self);

/** @brief Setter of the direction property */
void OptionalEffectTiming_set_direction(OptionalEffectTiming* self, PlaybackDirection * value);

/** @brief Getter of the easing property */
jb_String OptionalEffectTiming_easing(const OptionalEffectTiming *self);

/** @brief Setter of the easing property */
void OptionalEffectTiming_set_easing(OptionalEffectTiming* self, jb_String * value);

/** @brief Constructor of the OptionalEffectTiming dictionary type */
OptionalEffectTiming OptionalEffectTiming_new();

#ifdef __cplusplus
}
#endif
