#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EffectTiming EffectTiming;
typedef struct ComputedEffectTiming ComputedEffectTiming;


/**
 * @brief Interface WorkletAnimationEffect
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WorkletAnimationEffect)
 */
DECLARE_EMLITE_TYPE(WorkletAnimationEffect, em_Val);

/**
 * @brief Calls the `getTiming` method. 
*/
EffectTiming WorkletAnimationEffect_getTiming(WorkletAnimationEffect* self );

/**
 * @brief Calls the `getComputedTiming` method. 
*/
ComputedEffectTiming WorkletAnimationEffect_getComputedTiming(WorkletAnimationEffect* self );

/**
 * @brief Gets the `localTime` property. 
*/
double WorkletAnimationEffect_localTime(const WorkletAnimationEffect *self);

/**
 * @brief Sets the `localTime` property. 
*/
void WorkletAnimationEffect_set_localTime(WorkletAnimationEffect* self, double value);

#ifdef __cplusplus
}
#endif
