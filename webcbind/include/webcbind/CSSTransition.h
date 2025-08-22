#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Animation.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSTransition
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransition)
 */
DECLARE_EMLITE_TYPE(CSSTransition, Animation);

/**
 * @brief Gets the `transitionProperty` property. 
*/
jb_String CSSTransition_transitionProperty(const CSSTransition *self);

#ifdef __cplusplus
}
#endif
