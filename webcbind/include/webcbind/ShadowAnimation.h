#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Animation.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ShadowAnimation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ShadowAnimation)
 */
DECLARE_EMLITE_TYPE(ShadowAnimation, Animation);

/**
 * @brief Creates a new `ShadowAnimation` object. 
*/
ShadowAnimation ShadowAnimation_new(Animation * source, jb_Any * newTarget);

/**
 * @brief Gets the `sourceAnimation` property. 
*/
Animation ShadowAnimation_sourceAnimation(const ShadowAnimation *self);

#ifdef __cplusplus
}
#endif
