#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSConditionRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSSupportsRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSSupportsRule)
 */
DECLARE_EMLITE_TYPE(CSSSupportsRule, CSSConditionRule);

/**
 * @brief Gets the `matches` property. 
*/
bool CSSSupportsRule_matches(const CSSSupportsRule *self);

#ifdef __cplusplus
}
#endif
