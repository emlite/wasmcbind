#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSCustomMediaRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSCustomMediaRule)
 */
DECLARE_EMLITE_TYPE(CSSCustomMediaRule, CSSRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSCustomMediaRule_name(const CSSCustomMediaRule *self);

/**
 * @brief Gets the `query` property. 
*/
jb_Any CSSCustomMediaRule_query(const CSSCustomMediaRule *self);

#ifdef __cplusplus
}
#endif
