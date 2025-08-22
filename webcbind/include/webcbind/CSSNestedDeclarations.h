#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleProperties CSSStyleProperties;


/**
 * @brief Interface CSSNestedDeclarations
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSNestedDeclarations)
 */
DECLARE_EMLITE_TYPE(CSSNestedDeclarations, CSSRule);

/**
 * @brief Gets the `style` property. 
*/
CSSStyleProperties CSSNestedDeclarations_style(const CSSNestedDeclarations *self);

#ifdef __cplusplus
}
#endif
