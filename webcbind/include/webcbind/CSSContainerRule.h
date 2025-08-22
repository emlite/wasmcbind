#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSConditionRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSContainerRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSContainerRule)
 */
DECLARE_EMLITE_TYPE(CSSContainerRule, CSSConditionRule);

/**
 * @brief Gets the `containerName` property. 
*/
jb_String CSSContainerRule_containerName(const CSSContainerRule *self);

/**
 * @brief Gets the `containerQuery` property. 
*/
jb_String CSSContainerRule_containerQuery(const CSSContainerRule *self);

#ifdef __cplusplus
}
#endif
