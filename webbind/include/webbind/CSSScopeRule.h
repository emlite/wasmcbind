#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSScopeRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSScopeRule)
 */
DECLARE_EMLITE_TYPE(CSSScopeRule, CSSGroupingRule);

/**
 * @brief Gets the `start` property. 
*/
jb_String CSSScopeRule_start(const CSSScopeRule *self);

/**
 * @brief Gets the `end` property. 
*/
jb_String CSSScopeRule_end(const CSSScopeRule *self);

#ifdef __cplusplus
}
#endif
