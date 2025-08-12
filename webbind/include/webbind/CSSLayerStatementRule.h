#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSLayerStatementRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSLayerStatementRule)
 */
DECLARE_EMLITE_TYPE(CSSLayerStatementRule, CSSRule);

/**
 * @brief Gets the `nameList` property. 
*/
jb_Array CSSLayerStatementRule_nameList(const CSSLayerStatementRule *self);

#ifdef __cplusplus
}
#endif
