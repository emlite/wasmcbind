#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EffectTiming */
DECLARE_EMLITE_TYPE(EffectTiming, em_Val);

/** @brief Getter of the fill property */
FillMode EffectTiming_fill(const EffectTiming *self);

/** @brief Setter of the fill property */
void EffectTiming_set_fill(EffectTiming* self, FillMode * value);

/** @brief Getter of the iterationStart property */
double EffectTiming_iterationStart(const EffectTiming *self);

/** @brief Setter of the iterationStart property */
void EffectTiming_set_iterationStart(EffectTiming* self, double value);

/** @brief Getter of the iterations property */
double EffectTiming_iterations(const EffectTiming *self);

/** @brief Setter of the iterations property */
void EffectTiming_set_iterations(EffectTiming* self, double value);

/** @brief Getter of the direction property */
PlaybackDirection EffectTiming_direction(const EffectTiming *self);

/** @brief Setter of the direction property */
void EffectTiming_set_direction(EffectTiming* self, PlaybackDirection * value);

/** @brief Getter of the easing property */
jb_String EffectTiming_easing(const EffectTiming *self);

/** @brief Setter of the easing property */
void EffectTiming_set_easing(EffectTiming* self, jb_String * value);

/** @brief Constructor of the EffectTiming dictionary type */
EffectTiming EffectTiming_new();

#ifdef __cplusplus
}
#endif
