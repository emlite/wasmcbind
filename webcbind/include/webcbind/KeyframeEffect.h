#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AnimationEffect.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;


/**
 * @brief Interface KeyframeEffect
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/KeyframeEffect)
 */
DECLARE_EMLITE_TYPE(KeyframeEffect, AnimationEffect);

/**
 * @brief Creates a new `KeyframeEffect` object. 
*/
KeyframeEffect KeyframeEffect_new(KeyframeEffect * source);

/**
 * @brief Gets the `target` property. 
*/
Element KeyframeEffect_target(const KeyframeEffect *self);

/**
 * @brief Sets the `target` property. 
*/
void KeyframeEffect_set_target(KeyframeEffect* self, Element * value);

/**
 * @brief Gets the `pseudoElement` property. 
*/
jb_String KeyframeEffect_pseudoElement(const KeyframeEffect *self);

/**
 * @brief Sets the `pseudoElement` property. 
*/
void KeyframeEffect_set_pseudoElement(KeyframeEffect* self, jb_String * value);

/**
 * @brief Gets the `composite` property. 
*/
CompositeOperation KeyframeEffect_composite(const KeyframeEffect *self);

/**
 * @brief Sets the `composite` property. 
*/
void KeyframeEffect_set_composite(KeyframeEffect* self, CompositeOperation * value);

/**
 * @brief Calls the `getKeyframes` method. 
*/
jb_Array KeyframeEffect_getKeyframes(KeyframeEffect* self );

/**
 * @brief Calls the `setKeyframes` method. 
*/
jb_Undefined KeyframeEffect_setKeyframes(KeyframeEffect* self , jb_Object * keyframes);

/**
 * @brief Gets the `iterationComposite` property. 
*/
IterationCompositeOperation KeyframeEffect_iterationComposite(const KeyframeEffect *self);

/**
 * @brief Sets the `iterationComposite` property. 
*/
void KeyframeEffect_set_iterationComposite(KeyframeEffect* self, IterationCompositeOperation * value);

#ifdef __cplusplus
}
#endif
