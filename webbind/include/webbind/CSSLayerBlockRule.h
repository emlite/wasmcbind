#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSLayerBlockRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSLayerBlockRule)
 */
DECLARE_EMLITE_TYPE(CSSLayerBlockRule, CSSGroupingRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSLayerBlockRule_name(const CSSLayerBlockRule *self);

#ifdef __cplusplus
}
#endif
