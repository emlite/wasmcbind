#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Animation.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSAnimation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSAnimation)
 */
DECLARE_EMLITE_TYPE(CSSAnimation, Animation);

/**
 * @brief Gets the `animationName` property. 
*/
jb_String CSSAnimation_animationName(const CSSAnimation *self);

#ifdef __cplusplus
}
#endif
