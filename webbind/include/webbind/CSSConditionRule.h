#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSConditionRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSConditionRule)
 */
DECLARE_EMLITE_TYPE(CSSConditionRule, CSSGroupingRule);

/**
 * @brief Gets the `conditionText` property. 
*/
jb_String CSSConditionRule_conditionText(const CSSConditionRule *self);

#ifdef __cplusplus
}
#endif
