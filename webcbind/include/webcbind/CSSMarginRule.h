#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleDeclaration CSSStyleDeclaration;


/**
 * @brief Interface CSSMarginRule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMarginRule)
 */
DECLARE_EMLITE_TYPE(CSSMarginRule, CSSRule);

/**
 * @brief Gets the `name` property. 
*/
jb_String CSSMarginRule_name(const CSSMarginRule *self);

/**
 * @brief Gets the `style` property. 
*/
CSSStyleDeclaration CSSMarginRule_style(const CSSMarginRule *self);

#ifdef __cplusplus
}
#endif
