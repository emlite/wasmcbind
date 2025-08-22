#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EffectTiming.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ComputedEffectTiming */
DECLARE_EMLITE_TYPE(ComputedEffectTiming, EffectTiming);

/** @brief Getter of the progress property */
double ComputedEffectTiming_progress(const ComputedEffectTiming *self);

/** @brief Setter of the progress property */
void ComputedEffectTiming_set_progress(ComputedEffectTiming* self, double value);

/** @brief Getter of the currentIteration property */
double ComputedEffectTiming_currentIteration(const ComputedEffectTiming *self);

/** @brief Setter of the currentIteration property */
void ComputedEffectTiming_set_currentIteration(ComputedEffectTiming* self, double value);

/** @brief Constructor of the ComputedEffectTiming dictionary type */
ComputedEffectTiming ComputedEffectTiming_new();

#ifdef __cplusplus
}
#endif
