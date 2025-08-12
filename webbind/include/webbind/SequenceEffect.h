#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GroupEffect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AnimationEffect AnimationEffect;


/**
 * @brief Interface SequenceEffect
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SequenceEffect)
 */
DECLARE_EMLITE_TYPE(SequenceEffect, GroupEffect);

/**
 * @brief Creates a new `SequenceEffect` object. 
*/
SequenceEffect SequenceEffect_new0(jb_Array * children);

/**
 * @brief Creates a new `SequenceEffect` object. 
*/
SequenceEffect SequenceEffect_new1(jb_Array * children, jb_Any * timing);

/**
 * @brief Calls the `clone` method. 
*/
SequenceEffect SequenceEffect_clone(SequenceEffect* self );

#ifdef __cplusplus
}
#endif
