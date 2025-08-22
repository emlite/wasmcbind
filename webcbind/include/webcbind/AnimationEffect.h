#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct EffectTiming EffectTiming;
typedef struct ComputedEffectTiming ComputedEffectTiming;
typedef struct OptionalEffectTiming OptionalEffectTiming;
typedef struct GroupEffect GroupEffect;


/**
 * @brief Interface AnimationEffect
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AnimationEffect)
 */
DECLARE_EMLITE_TYPE(AnimationEffect, em_Val);

/**
 * @brief Calls the `getTiming` method. 
*/
EffectTiming AnimationEffect_getTiming(AnimationEffect* self );

/**
 * @brief Calls the `getComputedTiming` method. 
*/
ComputedEffectTiming AnimationEffect_getComputedTiming(AnimationEffect* self );

/**
 * @brief Calls the `updateTiming` method. 
*/
jb_Undefined AnimationEffect_updateTiming0(AnimationEffect* self );

/**
 * @brief Calls the `updateTiming` method. 
*/
jb_Undefined AnimationEffect_updateTiming1(AnimationEffect* self , OptionalEffectTiming * timing);

/**
 * @brief Gets the `parent` property. 
*/
GroupEffect AnimationEffect_parent(const AnimationEffect *self);

/**
 * @brief Gets the `previousSibling` property. 
*/
AnimationEffect AnimationEffect_previousSibling(const AnimationEffect *self);

/**
 * @brief Gets the `nextSibling` property. 
*/
AnimationEffect AnimationEffect_nextSibling(const AnimationEffect *self);

/**
 * @brief Calls the `before` method. 
*/
jb_Undefined AnimationEffect_before(AnimationEffect* self , AnimationEffect * effects);

/**
 * @brief Calls the `after` method. 
*/
jb_Undefined AnimationEffect_after(AnimationEffect* self , AnimationEffect * effects);

/**
 * @brief Calls the `replace` method. 
*/
jb_Undefined AnimationEffect_replace(AnimationEffect* self , AnimationEffect * effects);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined AnimationEffect_remove(AnimationEffect* self );

#ifdef __cplusplus
}
#endif
