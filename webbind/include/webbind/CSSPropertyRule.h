#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSPropertyRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSPropertyRule)
 */
DECLARE_EMLITE_TYPE(CSSPropertyRule, CSSRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSPropertyRule_name(const CSSPropertyRule *self);

/**
 * @brief Gets the `syntax` property. 
*/
jb_String CSSPropertyRule_syntax(const CSSPropertyRule *self);

/**
 * @brief Gets the `inherits` property. 
*/
bool CSSPropertyRule_inherits(const CSSPropertyRule *self);

/**
 * @brief Gets the `initialValue` property. 
*/
jb_String CSSPropertyRule_initialValue(const CSSPropertyRule *self);

#ifdef __cplusplus
}
#endif
