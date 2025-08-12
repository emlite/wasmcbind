#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSViewTransitionRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSViewTransitionRule)
 */
DECLARE_EMLITE_TYPE(CSSViewTransitionRule, CSSRule);

/**
 * @brief Gets the `navigation` property. 
*/
jb_String CSSViewTransitionRule_navigation(const CSSViewTransitionRule *self);

/**
 * @brief Gets the `types` property. 
*/
jb_Array CSSViewTransitionRule_types(const CSSViewTransitionRule *self);

#ifdef __cplusplus
}
#endif
